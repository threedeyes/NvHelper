#pragma once

#include "nv.h"
#include "nvos.h"


int nvRmIoctl(int fd, NvU32 cmd, void *pParams, NvU32 paramsSize);

class NvrmApi {
private:
	int fFd = -1;
	NvHandle fHClient = 0;

public:
	NvrmApi() = default;
	NvrmApi(int fd, NvHandle hClient);

	NvU32 Alloc(NvU32 hParent, NvU32 &hObject, NvU32 hClass, void *pAllocParams);
	NvU32 Free(NvU32 hObject);
	NvU32 Control(NvU32 hObject, NvU32 cmd, void *pParams, NvU32 paramsSize);
	NvU32 MapMemoryDma(NvU32 hDevice, NvU32 hDma, NvU32 hMemory, NvU64 offset, NvU64 length, NvU32 flags, NvU64 &dmaOffset);
	NvU32 UnmapMemoryDma(NvU32 hDevice, NvU32 hDma, NvU32 hMemory, NvU32 flags, NvU64 dmaOffset);
	NvU32 MapMemory(NvU32 hDevice, NvU32 hMemory, NvU64 offset, NvU64 length, void *&pLinearAddress, NvU32 flags, int memFd);
	NvU32 UnmapMemory(NvU32 hDevice, NvU32 hMemory, void *pLinearAddress, NvU32 flags);
	NvU32 RegisterFd(int ctlFd);
	NvU32 AllocOsEvent(int fd);
	NvU32 FreeOsEvent(int fd);
};
