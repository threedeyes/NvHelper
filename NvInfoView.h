#ifndef NV_INFO_VIEW_H
#define NV_INFO_VIEW_H

#include <View.h>
#include <PopUpMenu.h>
#include <MessageRunner.h>

#include "NvDevice.h"

enum {
	N_ABOUT	 			= 'NAbt',
	N_QUIT				= 'NQit',
	N_SETTINGS			= 'NSet',
	N_UPDATE 			= 'NUpd',
	N_TEMPERATURE		= 'NTmp',
	N_CLOCK_GRAPHICS	= 'NClG',
	N_CLOCK_MEMORY		= 'NClM',
	N_CLOCK_VIDEO		= 'NClV',
	N_LOAD_GPU			= 'NGld',
	N_LOAD_MEMORY		= 'NMld',
	N_FREE_MEMORY		= 'NMfr',
	N_USED_MEMORY		= 'NMus',
};

class _EXPORT NvInfoView : public BView {
	public:
							NvInfoView(BRect rect, const char name[]);
							NvInfoView(BMessage* message);
		virtual				~NvInfoView();

		static	NvInfoView*	Instantiate(BMessage* archive);
		virtual	status_t	Archive(BMessage* archive, bool deep = true) const;

		virtual void		AttachedToWindow();
		virtual void		Draw(BRect updateRect);
		virtual void		MessageReceived(BMessage* message);
		virtual void		MouseDown(BPoint where);
	private:

		BMessenger*			fMessenger;
		BMessageRunner*		fMessageRunner;

		BPopUpMenu*			fPopUpMenu;

		NvDevice*			fDevice;
		volatile NV00DE_SHARED_DATA* fData;
		std::unique_ptr<NvCpuMapping> cpuMap;

		uint32 				fTextMode;
		
		uint32 				fCurrentTemp;
		uint32 				fHistGPULoad[128];
		uint32 				fHistMemUsed[128];
		uint32 				fClockGPU;
		uint32 				fClockMemory;
		uint32 				fClockVideo;
		uint64				fFreeMemory;
		uint32				fLoadMemory;
};

#endif
