#include <Alert.h>
#include <Deskbar.h>
#include <Roster.h>
#include <View.h>
#include <Window.h>
#include <Menu.h>
#include <MenuItem.h>
#include <TextView.h>
#include <Font.h>
#include <stdio.h>

#include "NvInfoView.h"
#include "NvInfoApp.h"

extern "C" BView *instantiate_deskbar_item(float maxWidth, float maxHeight)
{
	return new NvInfoView(BRect(0, 0, maxHeight * 2 - 1, maxHeight - 1), "NvInfoView");
}

NvInfoView::NvInfoView(BRect rect, const char name[])
	:	BView(rect, name, B_FOLLOW_ALL_SIDES,
				B_WILL_DRAW | B_PULSE_NEEDED), fDevice(NULL), fData(NULL),
				fMessageRunner(NULL), fPopUpMenu(NULL),
				fOffscreenView(NULL), fOffscreenBitmap(NULL),
				fTextMode(N_TEMPERATURE)
{
	fOffscreenView = new BView(Bounds(), "offscreenView", B_FOLLOW_NONE, 0);
	fOffscreenBitmap = new BBitmap(Bounds(), B_RGBA32, true);
	fOffscreenBitmap->AddChild(fOffscreenView);
	SetViewColor(B_TRANSPARENT_32_BIT);
}


NvInfoView::NvInfoView(BMessage* message)
	:	BView(message), fDevice(NULL), fData(NULL), fMessageRunner(NULL), fPopUpMenu(NULL),
					fOffscreenView(NULL), fOffscreenBitmap(NULL)
{
	fOffscreenView = new BView(Bounds(), "offscreenView", B_FOLLOW_NONE, 0);
	fOffscreenBitmap = new BBitmap(Bounds(), B_RGBA32, true);
	fOffscreenBitmap->AddChild(fOffscreenView);
	SetViewColor(B_TRANSPARENT_32_BIT);

	fTextMode = message->FindInt32("textMode");
}


NvInfoView::~NvInfoView()
{
	if (fMessageRunner != NULL)
		delete fMessageRunner;
	if (fDevice != NULL) {
		cpuMap.reset();
		delete fDevice;
	}
	if (fPopUpMenu != NULL)
		delete fPopUpMenu;

	delete fOffscreenBitmap;
}


NvInfoView*
NvInfoView::Instantiate(BMessage* message)
{
	if (validate_instantiation(message, "NvInfoView"))
		return new NvInfoView(message);
	return NULL;
}


status_t
NvInfoView::Archive(BMessage* archive, bool deep) const
{
	BView::Archive(archive, deep);
	archive->AddString("add_on", NV_INFO_APP_SIGNATURE);
	archive->AddString("class", REPLICANT_NAME);
	archive->AddInt32("textMode", fTextMode);
	return B_OK;
}


void
NvInfoView::AttachedToWindow()
{
	fMessageRunner = new BMessageRunner(BMessenger(this), new BMessage(N_UPDATE), 250000);
	SetViewColor(Parent()->ViewColor());

	fPopUpMenu = new BPopUpMenu("NvInfoMenu");

	fTextMenu = new BMenu("Text value");
	fTextMenu->SetRadioMode(true);
	fTextMenu->AddItem(new BMenuItem("GPU Temperature (°)", new BMessage(N_TEMPERATURE)));
	fTextMenu->AddItem(new BMenuItem("GPU Load (%)", new BMessage(N_LOAD_GPU)));
	fTextMenu->AddSeparatorItem();
	fTextMenu->AddItem(new BMenuItem("Graphics Clock (㎒)", new BMessage(N_CLOCK_GRAPHICS)));
	fTextMenu->AddItem(new BMenuItem("Memory Clock (㎒)", new BMessage(N_CLOCK_MEMORY)));
	fTextMenu->AddItem(new BMenuItem("Video Clock (㎒)", new BMessage(N_CLOCK_VIDEO)));
	fTextMenu->AddSeparatorItem();
	fTextMenu->AddItem(new BMenuItem("Free Memory (Gb)", new BMessage(N_FREE_MEMORY)));
	fTextMenu->AddItem(new BMenuItem("Used Memory (%)", new BMessage(N_USED_MEMORY)));
	fTextMenu->AddItem(new BMenuItem("Load Memory (%)", new BMessage(N_LOAD_MEMORY)));
	fTextMenu->SetTargetForItems(this);
	fPopUpMenu->AddItem(fTextMenu);
	fPopUpMenu->AddSeparatorItem();
	fPopUpMenu->AddItem(new BMenuItem("About NvInfo", new BMessage(B_ABOUT_REQUESTED)));
	fPopUpMenu->AddSeparatorItem();
	fPopUpMenu->AddItem(new BMenuItem("Quit", new BMessage(B_QUIT_REQUESTED)));
	fPopUpMenu->SetTargetForItems(this);
	
	if (fDevice == NULL) {
		fCurrentTemp = 0;
		for (int i = 0; i < 128; i++) {
			fHistGPULoad[i] = 0;
			fHistMemUsed[i] = 0;
		}

		fDevice = new NvDevice("/dev/nvidia0", 0);

		NvrmApi &rm = fDevice->Rm();
	
		NvHandle hUserSharedData = 0;
		NV00DE_ALLOC_PARAMETERS params {
			.polledDataMask =
				NV00DE_RUSD_POLL_CLOCK |
				NV00DE_RUSD_POLL_PERF |
				NV00DE_RUSD_POLL_MEMORY |
				NV00DE_RUSD_POLL_POWER |
				NV00DE_RUSD_POLL_THERMAL |
				NV00DE_RUSD_POLL_PCI,
		};
		NvCheck(rm.Alloc(fDevice->HSubdevice(), hUserSharedData, RM_USER_SHARED_DATA, &params));
		cpuMap = std::make_unique<NvCpuMapping>(*fDevice, hUserSharedData, 0, sizeof(NV00DE_SHARED_DATA), 0, true);
		fData = (volatile NV00DE_SHARED_DATA*)cpuMap->Address();
	}
}


void
NvInfoView::MessageReceived(BMessage* message)
{
	switch (message->what) {
		case N_UPDATE:
		{
			int temp = 0;	
			if (fDevice != NULL && fData != NULL) {
				fCurrentTemp = (int)((float)fData->temperatures[RUSD_TEMPERATURE_TYPE_GPU].temperature / (float)(1 << 8));
				fClockGPU = fData->clkPublicDomainInfos.info[RUSD_CLK_PUBLIC_DOMAIN_GRAPHICS].targetClkMHz;
				fClockMemory = fData->clkPublicDomainInfos.info[RUSD_CLK_PUBLIC_DOMAIN_MEMORY].targetClkMHz;
				fClockVideo = fData->clkPublicDomainInfos.info[RUSD_CLK_PUBLIC_DOMAIN_VIDEO].targetClkMHz;
				fFreeMemory = fData->pmaMemoryInfo.freePmaMemory;
				fLoadMemory = fData->perfDevUtil.info.memoryPercentBusy;

				for (int i = 128 - 1; i > 0; i--) {
					fHistGPULoad[i] = fHistGPULoad[i - 1];
					fHistMemUsed[i] = fHistMemUsed[i - 1];
				}
				fHistGPULoad[0] = fData->perfDevUtil.info.gpuPercentBusy;
				fHistMemUsed[0] = 100 - (((float)fData->pmaMemoryInfo.freePmaMemory / (float)fData->pmaMemoryInfo.totalPmaMemory) * 100.0);
			}
			Draw(Bounds());
			break;
		}
		case N_TEMPERATURE:
		case N_LOAD_GPU:
		case N_CLOCK_GRAPHICS:
		case N_CLOCK_MEMORY:
		case N_CLOCK_VIDEO:
		case N_FREE_MEMORY:
		case N_USED_MEMORY:
		case N_LOAD_MEMORY:
		{
			fTextMode = message->what;
			Invalidate();
			break;
		}
		case N_QUIT:
		{
			BDeskbar deskbar;
			deskbar.RemoveItem(Name());
			break;
		}		
		case B_ABOUT_REQUESTED:
		{
			(new BAlert(NULL, "NVIDIA Hardware monitor\n", "OK"))->Go(NULL);
			break;
		}
		case B_QUIT_REQUESTED:
		{
			BDeskbar deskbar;
			deskbar.RemoveItem(Name());
			break;
		}
		case N_SETTINGS:
			break;
		default:
			BView::MessageReceived(message);
		break;
	}
}


void
NvInfoView::Draw(BRect updateRect)
{
	char string[32];
	switch (fTextMode) {
		case N_TEMPERATURE:
			sprintf(string, "%u°", fCurrentTemp);
			break;
		case N_CLOCK_GRAPHICS:
			sprintf(string, "%u㎒", fClockGPU);
			break;
		case N_CLOCK_MEMORY:
			sprintf(string, "%u㎒", fClockMemory);
			break;
		case N_CLOCK_VIDEO:
			sprintf(string, "%u㎒", fClockVideo);
			break;
		case N_LOAD_GPU:
			sprintf(string, "%u%%", fHistGPULoad[0]);
			break;
		case N_FREE_MEMORY:
			sprintf(string, "%" B_PRIu64 "GiB", fFreeMemory >> 30);
			break;
		case N_USED_MEMORY:
			sprintf(string, "%u%%", fHistMemUsed[0]);
			break;
		case N_LOAD_MEMORY:
			sprintf(string, "%u%%", fLoadMemory);
			break;
		default:
			sprintf(string, "");
			break;
	}

	fOffscreenBitmap->Lock();

	BFont font = be_plain_font;
	font.SetFamilyAndStyle("Noto Sans","Bold");
	font.SetSize(font.Size() - 1);
	fOffscreenView->SetFont(&font);

	font_height height;
	fOffscreenView->GetFontHeight(&height);
	BRect rect = fOffscreenView->Bounds();
	BRect canvas = rect;
	canvas.InsetBy(1, 1);
	float width = fOffscreenView->StringWidth(string) + 4;
	float x = 1 + (rect.Width() - width)/2;
	float y = height.ascent + (rect.Height() - (height.ascent + height.descent))/2;

	fOffscreenView->SetDrawingMode(B_OP_COPY);
	fOffscreenView->SetHighColor(20, 90, 0);
	fOffscreenView->FillRect(canvas);

	fOffscreenView->SetDrawingMode(B_OP_ALPHA);

	int i = 1;
	fOffscreenView->SetHighColor(150, 100, 5);
	for (float x = fOffscreenView->Bounds().Width() - 1; x > 0; x--) {
		float val = (float)((float)fHistMemUsed[i++] / (float)100.0);
		fOffscreenView->StrokeLine(BPoint(x, canvas.bottom), BPoint(x, canvas.bottom - (canvas.Height() * val)));
	}

	i = 1;
	float v0 = (float)fHistGPULoad[0] / (float)100.0;
	BPoint beg(fOffscreenView->Bounds().right, canvas.bottom - (canvas.Height() * v0));
	fOffscreenView->MovePenTo(beg);
	fOffscreenView->SetHighColor(80, 200, 30);
	for (float x = fOffscreenView->Bounds().Width() - 1; x > 0; x--) {
		float v1 = (float)((float)fHistGPULoad[i++] / (float)100.0);
		BPoint end(x, canvas.bottom - (canvas.Height() * v1));
		fOffscreenView->StrokeLine(end);
	}

	fOffscreenView->SetHighColor(0, 0, 0);
	fOffscreenView->StrokeRect(rect);

	fOffscreenView->SetLowColor(20, 90, 0);
	fOffscreenView->SetHighColor(0, 0, 0);
	fOffscreenView->DrawString(string, BPoint(x - 1, y));
	fOffscreenView->DrawString(string, BPoint(x + 1, y));
	fOffscreenView->DrawString(string, BPoint(x , y - 1));
	fOffscreenView->DrawString(string, BPoint(x , y + 1));

	fOffscreenView->SetLowColor(20, 90, 0);
	fOffscreenView->SetHighColor(255, 255, 255);
	fOffscreenView->DrawString(string, BPoint(x, y));
	
	fOffscreenView->Sync();
	SetDrawingMode(B_OP_COPY);
	DrawBitmap(fOffscreenBitmap, rect, rect);
	fOffscreenBitmap->Unlock();
}

void
NvInfoView::MouseDown(BPoint where)
{
	int32 buttons, clicks;

	if (Window()->CurrentMessage()->FindInt32("buttons", &buttons) != B_OK ||
		Window()->CurrentMessage()->FindInt32("clicks", &clicks) != B_OK)
		return;

	if (buttons == B_SECONDARY_MOUSE_BUTTON) {
		fTextMenu->FindItem(fTextMode)->SetMarked(true);
		fPopUpMenu->Go(ConvertToScreen(BPoint(0, 0)), true, false, true);
	}
}

