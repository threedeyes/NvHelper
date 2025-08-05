#ifndef NV_INFO_APP_H
#define NV_INFO_APP_H

#include <Application.h>

#define REPLICANT_NAME "NvInfoView"
#define NV_INFO_APP_SIGNATURE "application/x-vnd.nv-hw-info"

class NvInfoApp : public BApplication {
	public :
						NvInfoApp();
		virtual			~NvInfoApp() {};
				void	ReadyToRun();
};

#endif
