/*
 * Copyright 2018, Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef _H_NV_DEVICE
#define _H_NV_DEVICE

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <poll.h>
#ifdef __HAIKU__
#include <sys/ioccom.h>
#include <OS.h>
#include <private/shared/AutoDeleterOS.h>
#endif

#include <pthread.h>

#include <system_error>
#include <optional>
#include <string>
#include <vector>
#include <memory>

#include "nvos.h"

#include "class/cl0002.h" // NV01_CONTEXT_DMA
#include "class/cl0005.h" // NV01_EVENT
#include "class/cl003e.h" // NV01_MEMORY_SYSTEM
#include "class/cl0040.h" // NV01_MEMORY_LOCAL_USER
#include "class/cl0080.h" // NV01_DEVICE_0
#include "class/cl00da.h" // NV_SEMAPHORE_SURFACE
#include "class/cl2080.h" // NV20_SUBDEVICE_0
#include "class/cl50a0.h" // NV50_MEMORY_VIRTUAL
#include "class/cl90f1.h" // FERMI_VASPACE_A
#include "class/cla16f.h" // KeplerBControlGPFifo
#include "class/clc361.h" // NVC361_NOTIFY_CHANNEL_PENDING
#include "class/clc36f.h" // VOLTA_CHANNEL_GPFIFO_A
#include "class/clc461.h" // TURING_USERMODE_A
#include "class/clc46f.h" // TURING_CHANNEL_GPFIFO_A
#include "class/cl00de.h" // RM_USER_SHARED_DATA

#include "ctrl/ctrl2080/ctrl2080fb.h" // NV2080_CTRL_CMD_FB_GET_SEMAPHORE_SURFACE_LAYOUT
#include "ctrl/ctrl2080/ctrl2080gr.h" // NV2080_CTRL_CMD_GR_GET_GPC_MASK
#include "ctrl/ctrl2080/ctrl2080mc.h" // NV2080_CTRL_CMD_MC_GET_ARCH_INFO
#include "ctrl/ctrl2080/ctrl2080gpu.h" // NV2080_CTRL_CMD_GPU_GET_NAME_STRING
#include "ctrl/ctrla06f/ctrla06fgpfifo.h" // NVA06F_CTRL_CMD_BIND
#include "ctrl/ctrlc36f.h" // NVC36F_CTRL_CMD_INTERNAL_GPFIFO_GET_WORK_SUBMIT_TOKEN
#include "ctrl/ctrl00da.h" // NV_SEMAPHORE_SURFACE
#include "ctrl/ctrl0080/ctrl0080gr.h" // NV0080_CTRL_GR_GET_INFO_V2
#include "ctrl/ctrl0080/ctrl0080gpu.h" // NV0080_CTRL_CMD_GPU_GET_CLASSLIST_V2

#include "AutoDeleter.h"
#include "ScopeExit.h"

#include "ErrorUtils.h"
#include "NvrmApi.h"

class NvDevice;

class NvCpuMapping {
private:
	NvDevice &fDev;
	NvHandle fHMemory {};
	void *fStubLinearAddress {};
	void *fAdr {};
	size_t fSize {};
#ifdef __HAIKU__
	AreaDeleter fArea;
#endif

public:
	~NvCpuMapping();
	NvCpuMapping(NvDevice &dev, NvU32 hMemory, NvU64 offset, NvU64 length, NvU32 flags, bool isSystemMem);

	void *Address() const {return fAdr;}
};


class NvDevice {
private:
	std::string fDevName;
	FileDescriptorCloser fCtlFd;
	FileDescriptorCloser fDevFd;
	NvrmApi fRm;
	NvHandle fHClient {};
	NvHandle fHDevice {};
	NvHandle fHSubdevice {};
	NvHandle fHUsermode {};
	std::optional<NvCpuMapping> fUsermodeCpuMap;

	NvHandle fHVaSpace {};

	NV2080_CTRL_FB_GET_SEMAPHORE_SURFACE_LAYOUT_PARAMS fSemSurfLayout {};

public:
	NvDevice(const char *devName, uint32_t deviceId);
	~NvDevice();

	const char *DevName() const {return fDevName.c_str();}
	int CtlFd() const {return fCtlFd.Get();}
	int DevFd() const {return fDevFd.Get();}

	int OpenCtlNode();
	int OpenDevNode();

	NvrmApi &Rm() {return fRm;}
	NvHandle HClient() {return fHClient;}
	NvHandle HDevice() {return fHDevice;}
	NvHandle HSubdevice() {return fHSubdevice;}
	NvHandle HVaSpace() {return fHVaSpace;}
	void *UsermodeCpuAdr() {return fUsermodeCpuMap->Address();}

	const auto &SemSurfLayout() const {return fSemSurfLayout;}
};

#endif // _H_NV_DEVICE
