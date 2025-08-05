NAME = NvInfo
TARGET_DIR = .
TYPE = APP
APP_MIME_SIG = application/x-vnd.nv-hw-info
SRCS =  NvInfoView.cpp \
		NvInfoApp.cpp \
		NvrmApi.cpp \
		NvDevice.cpp \
		ErrorUtils.cpp \
		open-gpu-kernel-modules/src/common/shared/nvstatus/nvstatus.c
RDEFS = NvInfo.rdef
LIBS =  be root stdc++
LIBPATHS =
SYSTEM_INCLUDE_PATHS = open-gpu-kernel-modules/src/nvidia/arch/nvalloc/common/inc \
					open-gpu-kernel-modules/src/nvidia/arch/nvalloc/unix/include \
					open-gpu-kernel-modules/src/common/sdk/nvidia/inc \
					open-gpu-kernel-modules/src/nvidia/inc/kernel \
					/boot/system/develop/headers/private/shared
LOCAL_INCLUDE_PATHS = 
OPTIMIZE := NONE
LOCALES =
DEFINES = _DEFAULT_SOURCE=1 \
		NV_PLATFORM_MAX_IOCTL_SIZE=16384
WARNINGS =
SYMBOLS :=
DEBUGGER := TRUE
COMPILER_FLAGS =
LINKER_FLAGS =
DRIVER_PATH =

## Include the Makefile-Engine
DEVEL_DIRECTORY := \
	$(shell findpaths -r "makefile_engine" B_FIND_PATH_DEVELOP_DIRECTORY)
include $(DEVEL_DIRECTORY)/etc/makefile-engine
