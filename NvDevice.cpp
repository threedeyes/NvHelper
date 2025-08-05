#include "NvDevice.h"
#include "nv-haiku.h"

NvCpuMapping::~NvCpuMapping()
{
#ifdef __HAIKU__
	fArea.Unset();
#else
	munmap(fAdr, fSize);
#endif
	NvCheck(fDev.Rm().UnmapMemory(fDev.HSubdevice(), fHMemory, fStubLinearAddress, 0));
}

NvCpuMapping::NvCpuMapping(NvDevice &dev, NvU32 hMemory, NvU64 offset, NvU64 length, NvU32 flags, bool isSystemMem):
	fDev(dev),
	fHMemory(hMemory),
	fSize(length)
{
	int memFd;
	if (isSystemMem) {
		memFd = fDev.OpenCtlNode();
	} else {
		memFd = fDev.OpenDevNode();
	}
	if (memFd < 0) {
		throw std::system_error(errno, std::generic_category());
	}
	ScopeExit _([memFd] {close(memFd);});
	NvCheck(fDev.Rm().MapMemory(fDev.HSubdevice(), fHMemory, offset, length, fStubLinearAddress, flags, memFd));
#ifdef __HAIKU__
	nv_haiku_map_params mapParams {
		.name = "NVRM",
		.addressSpec = B_ANY_ADDRESS,
		.protection = B_READ_AREA | B_WRITE_AREA,
	};
	int ret = nvRmIoctl(memFd, NV_HAIKU_MAP, &mapParams, sizeof(mapParams));
	if (ret < 0) {
		throw std::system_error(errno, std::generic_category());
	}
	fArea.SetTo(ret);
	fAdr = mapParams.address;
#else
	fAdr = (void*)mmap(0, fSize, PROT_READ|PROT_WRITE, MAP_SHARED, memFd, 0);
	if (fAdr == MAP_FAILED) {
		throw std::system_error(errno, std::generic_category());
	}
#endif
}


NvDevice::NvDevice(const char *devName, uint32_t deviceId):
	fDevName(devName)
{
	fCtlFd.SetTo(OpenCtlNode());
	fDevFd.SetTo(OpenDevNode());
	Assert(fCtlFd.IsSet());
	Assert(fDevFd.IsSet());

	fRm = NvrmApi(fCtlFd.Get(), 0);

	NvCheck(fRm.Alloc(0, fHClient, NV01_ROOT_CLIENT, NULL));
	//printf("hClient: %#" PRIx32 "\n", fHClient);

	fRm = NvrmApi(fCtlFd.Get(), fHClient);

	NV0080_ALLOC_PARAMETERS ap0080 = {.deviceId = deviceId, .hClientShare = fHClient};
	NvCheck(fRm.Alloc(fHClient, fHDevice, NV01_DEVICE_0, &ap0080));
	//printf("hDevice: %#" PRIx32 "\n", fHDevice);
	NvCheck(fRm.Alloc(fHDevice, fHSubdevice, NV20_SUBDEVICE_0, NULL));
	//printf("hSubdevice: %#" PRIx32 "\n", fHSubdevice);

	NvCheck(fRm.Alloc(fHSubdevice, fHUsermode, TURING_USERMODE_A, NULL));
	//printf("hUsermode: %#" PRIx32 "\n", fHUsermode);

	fUsermodeCpuMap.emplace(*this, fHUsermode, 0, 4096, 0, false);
	//printf("pUsermode: %p\n", fUsermodeCpuMap->Address());

	NV_VASPACE_ALLOCATION_PARAMETERS vaSpaceParams {
		.flags = NV_VASPACE_ALLOCATION_FLAGS_RETRY_PTE_ALLOC_IN_SYS,
	};
	NvCheck(fRm.Alloc(fHDevice, fHVaSpace, FERMI_VASPACE_A, &vaSpaceParams));
	//printf("fHVaSpace: %#" PRIx32 "\n", fHVaSpace);

	NvCheck(fRm.Control(fHSubdevice, NV2080_CTRL_CMD_FB_GET_SEMAPHORE_SURFACE_LAYOUT, &fSemSurfLayout, sizeof(fSemSurfLayout)));
}

int NvDevice::OpenCtlNode()
{
	return open("/dev/nvidiactl", O_RDWR | O_CLOEXEC);
}

int NvDevice::OpenDevNode()
{
	return open(fDevName.c_str(), O_RDWR | O_CLOEXEC);
}


NvDevice::~NvDevice()
{
	fUsermodeCpuMap.reset();
	NvCheck(fRm.Free(fHVaSpace));
	NvCheck(fRm.Free(fHUsermode));
	NvCheck(fRm.Free(fHSubdevice));
	NvCheck(fRm.Free(fHDevice));
}
