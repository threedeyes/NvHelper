#include <Alert.h>
#include <Deskbar.h>
#include <Entry.h>
#include <Roster.h>

#include "NvInfoApp.h"
#include "NvInfoView.h"

NvInfoApp::NvInfoApp()
	: BApplication(NV_INFO_APP_SIGNATURE)
{
}

void NvInfoApp::ReadyToRun()
{

	BDeskbar deskbar;
	entry_ref entry;

	if (!deskbar.HasItem(REPLICANT_NAME))	{
		if (be_roster->FindApp(NV_INFO_APP_SIGNATURE, &entry) != B_OK) {
			BAlert *alert = new BAlert("Error",
				"Application not found!",
				"OK", NULL, NULL, B_WIDTH_AS_USUAL, B_OFFSET_SPACING, B_STOP_ALERT);
			alert->Go();
		}

		if (deskbar.AddItem(&entry) != B_OK) {
			BAlert *alert = new BAlert("Error",
				"Can't install NvInfo in the Deskbar!",
				"OK", NULL, NULL, B_WIDTH_AS_USUAL, B_OFFSET_SPACING, B_STOP_ALERT);
			alert->Go();
		}
	}

	Quit();	
}


int main()
{
	NvInfoApp Application;
	Application.Run();
	return B_OK;
}
