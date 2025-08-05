#include "NvrmApi.h"

#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <errno.h>
#ifdef __HAIKU__
#include <sys/ioccom.h>
#include <OS.h>
#endif

#include "nv_escape.h"
#include "nv-unix-nvos-params-wrappers.h"
#include "nvstatus.h"
#ifdef __HAIKU__
#include "nv-haiku.h"
#endif

#include "ScopeExit.h"


int nvRmIoctl(int fd, NvU32 cmd, void *pParams, NvU32 paramsSize)
{
	int res;
	do {
#ifdef __HAIKU__
		res = ioctl(fd, cmd + NV_HAIKU_BASE, pParams, paramsSize);
#else
		res = ioctl(fd, _IOC(IOC_INOUT, NV_IOCTL_MAGIC, cmd, paramsSize), pParams);
#endif
		if (res < 0) {
			res = errno;
		}
	} while ((res == EINTR || res == EAGAIN));
	return res;
}


NvrmApi::NvrmApi(int fd, NvHandle hClient):
	fFd(fd), fHClient(hClient)
{
}

NvU32 NvrmApi::Alloc(NvU32 hParent, NvU32 &hObject, NvU32 hClass, void *pAllocParams)
{
	NVOS21_PARAMETERS p {
		.hRoot = fHClient,
		.hObjectParent = hParent,
		.hObjectNew = hObject,
		.hClass = hClass,
		.pAllocParms = pAllocParams
	};
	int ret = nvRmIoctl(fFd, NV_ESC_RM_ALLOC, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	hObject = p.hObjectNew;
	return p.status;
}

NvU32 NvrmApi::Free(NvU32 hObject)
{
	NVOS00_PARAMETERS p {
		.hRoot = fHClient,
		.hObjectOld = hObject
	};
	int ret = nvRmIoctl(fFd, NV_ESC_RM_FREE, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return p.status;
}

NvU32 NvrmApi::Control(NvU32 hObject, NvU32 cmd, void *pParams, NvU32 paramsSize)
{
	NVOS54_PARAMETERS p {
		.hClient = fHClient,
		.hObject = hObject,
		.cmd = cmd,
		.params = pParams,
		.paramsSize = paramsSize
	};
	int ret = nvRmIoctl(fFd, NV_ESC_RM_CONTROL, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return p.status;
}

NvU32 NvrmApi::MapMemoryDma(NvU32 hDevice, NvU32 hDma, NvU32 hMemory, NvU64 offset, NvU64 length, NvU32 flags, NvU64 &dmaOffset)
{
	NVOS46_PARAMETERS p {
		.hClient = fHClient,
		.hDevice = hDevice,
		.hDma = hDma,
		.hMemory = hMemory,
		.offset = offset,
		.length = length,
		.flags = flags,
		.dmaOffset = dmaOffset,
	};
	int ret = nvRmIoctl(fFd, NV_ESC_RM_MAP_MEMORY_DMA, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	dmaOffset = p.dmaOffset;
	return p.status;
}

NvU32 NvrmApi::UnmapMemoryDma(NvU32 hDevice, NvU32 hDma, NvU32 hMemory, NvU32 flags, NvU64 dmaOffset)
{
	NVOS47_PARAMETERS p {
		.hClient = fHClient,
		.hDevice = hDevice,
		.hDma = hDma,
		.hMemory = hMemory,
		.flags = flags,
		.dmaOffset = dmaOffset
	};
	int ret = nvRmIoctl(fFd, NV_ESC_RM_UNMAP_MEMORY_DMA, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return p.status;
}

NvU32 NvrmApi::MapMemory(NvU32 hDevice, NvU32 hMemory, NvU64 offset, NvU64 length, void *&pLinearAddress, NvU32 flags, int memFd)
{
//	int fd = open(fNodeName, O_RDWR | O_CLOEXEC);
	nv_ioctl_nvos33_parameters_with_fd p {
		.params = {
			.hClient = fHClient,
			.hDevice = hDevice,
			.hMemory = hMemory,
			.offset = offset,
			.length = length,
			.pLinearAddress = pLinearAddress,
			.flags = flags
		},
		.fd = memFd
	};
//	if (fd < 0) {
//		return NV_ERR_GENERIC;
//	}
//	ScopeExit _([fd] {close(fd);});
	int ret = nvRmIoctl(fFd, NV_ESC_RM_MAP_MEMORY, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	pLinearAddress = p.params.pLinearAddress;
//	pLinearAddress = (void*)mmap(0, length, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
//	if (pLinearAddress == MAP_FAILED) {
//		return NV_ERR_GENERIC;
//	}
	return p.params.status;
}

NvU32 NvrmApi::UnmapMemory(NvU32 hDevice, NvU32 hMemory, void *pLinearAddress, NvU32 flags)
{
	NVOS34_PARAMETERS p {
		.hClient = fHClient,
		.hDevice = hDevice,
		.hMemory = hMemory,
		.pLinearAddress = pLinearAddress,
		.status = 0,
		.flags = flags,
	};
	int ret = nvRmIoctl(fFd, NV_ESC_RM_UNMAP_MEMORY, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return p.status;
}

NvU32 NvrmApi::RegisterFd(int ctlFd)
{
	nv_ioctl_register_fd_t p {
		.ctl_fd = ctlFd,
	};
	int ret = nvRmIoctl(fFd, NV_ESC_REGISTER_FD, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return NV_OK;
}

NvU32 NvrmApi::AllocOsEvent(int fd)
{
	nv_ioctl_alloc_os_event_t p {
		.hClient = fHClient,
		.fd = fd
	};
	int ret = nvRmIoctl(fFd, NV_ESC_ALLOC_OS_EVENT, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return p.Status;
}

NvU32 NvrmApi::FreeOsEvent(int fd)
{
	nv_ioctl_free_os_event_t p {
		.hClient = fHClient,
		.fd = fd
	};
	int ret = nvRmIoctl(fFd, NV_ESC_FREE_OS_EVENT, &p, sizeof(p));
	if (ret != 0) {
		return NV_ERR_GENERIC;
	}
	return p.Status;
}
