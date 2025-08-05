#define NVOC_KERNEL_SEC2_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_kernel_sec2_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x2f36c9 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_KernelSec2;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_OBJENGSTATE;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_IntrService;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_CrashCatEngine;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_KernelCrashCatEngine;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_KernelFalcon;

void __nvoc_init_KernelSec2(KernelSec2*, RmHalspecOwner* );
void __nvoc_init_funcTable_KernelSec2(KernelSec2*, RmHalspecOwner* );
NV_STATUS __nvoc_ctor_KernelSec2(KernelSec2*, RmHalspecOwner* );
void __nvoc_init_dataField_KernelSec2(KernelSec2*, RmHalspecOwner* );
void __nvoc_dtor_KernelSec2(KernelSec2*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_KernelSec2;

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_KernelSec2 = {
    /*pClassDef=*/          &__nvoc_class_def_KernelSec2,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_KernelSec2,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_OBJENGSTATE = {
    /*pClassDef=*/          &__nvoc_class_def_OBJENGSTATE,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE),
};

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_IntrService = {
    /*pClassDef=*/          &__nvoc_class_def_IntrService,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(KernelSec2, __nvoc_base_IntrService),
};

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_CrashCatEngine = {
    /*pClassDef=*/          &__nvoc_class_def_CrashCatEngine,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine.__nvoc_base_CrashCatEngine),
};

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_KernelCrashCatEngine = {
    /*pClassDef=*/          &__nvoc_class_def_KernelCrashCatEngine,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine),
};

static const struct NVOC_RTTI __nvoc_rtti_KernelSec2_KernelFalcon = {
    /*pClassDef=*/          &__nvoc_class_def_KernelFalcon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_KernelSec2 = {
    /*numRelatives=*/       7,
    /*relatives=*/ {
        &__nvoc_rtti_KernelSec2_KernelSec2,
        &__nvoc_rtti_KernelSec2_KernelFalcon,
        &__nvoc_rtti_KernelSec2_KernelCrashCatEngine,
        &__nvoc_rtti_KernelSec2_CrashCatEngine,
        &__nvoc_rtti_KernelSec2_IntrService,
        &__nvoc_rtti_KernelSec2_OBJENGSTATE,
        &__nvoc_rtti_KernelSec2_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_KernelSec2 = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(KernelSec2),
        /*classId=*/            classId(KernelSec2),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "KernelSec2",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_KernelSec2,
    /*pCastInfo=*/          &__nvoc_castinfo_KernelSec2,
    /*pExportInfo=*/        &__nvoc_export_info_KernelSec2
};

// Down-thunk(s) to bridge KernelSec2 methods from ancestors (if any)
NvBool __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineConfigured(struct CrashCatEngine *arg_this);    // super^2
void __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineUnload(struct CrashCatEngine *arg_this);    // super^2
void __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineVprintf(struct CrashCatEngine *arg_this, NvBool bReportStart, const char *fmt, va_list args);    // super^2
NvU32 __nvoc_down_thunk_KernelCrashCatEngine_crashcatEnginePriRead(struct CrashCatEngine *arg_this, NvU32 offset);    // super^2
void __nvoc_down_thunk_KernelCrashCatEngine_crashcatEnginePriWrite(struct CrashCatEngine *arg_this, NvU32 offset, NvU32 data);    // super^2
void * __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineMapBufferDescriptor(struct CrashCatEngine *arg_this, CrashCatBufferDescriptor *pBufDesc);    // super^2
void __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineUnmapBufferDescriptor(struct CrashCatEngine *arg_this, CrashCatBufferDescriptor *pBufDesc);    // super^2
void __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineSyncBufferDescriptor(struct CrashCatEngine *arg_this, CrashCatBufferDescriptor *pBufDesc, NvU32 offset, NvU32 size);    // super^2
const NvU32 * __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineGetScratchOffsets(struct CrashCatEngine *arg_this, NV_CRASHCAT_SCRATCH_GROUP_ID scratchGroupId);    // super^2
NvU32 __nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineGetWFL0Offset(struct CrashCatEngine *arg_this);    // super^2
NvU32 __nvoc_down_thunk_KernelFalcon_kcrashcatEngineRegRead(struct OBJGPU *pGpu, struct KernelCrashCatEngine *pKernelFlcn, NvU32 offset);    // super
void __nvoc_down_thunk_KernelFalcon_kcrashcatEngineRegWrite(struct OBJGPU *pGpu, struct KernelCrashCatEngine *pKernelFlcn, NvU32 offset, NvU32 data);    // super
NvU32 __nvoc_down_thunk_KernelFalcon_kcrashcatEngineMaskDmemAddr(struct OBJGPU *pGpu, struct KernelCrashCatEngine *pKernelFlcn, NvU32 addr);    // super
NV_STATUS __nvoc_down_thunk_KernelSec2_engstateConstructEngine(struct OBJGPU *pGpu, struct OBJENGSTATE *pKernelSec2, ENGDESCRIPTOR arg3);    // this
void __nvoc_down_thunk_KernelSec2_intrservRegisterIntrService(struct OBJGPU *pGpu, struct IntrService *pKernelSec2, IntrServiceRecord pRecords[177]);    // this
NV_STATUS __nvoc_down_thunk_KernelSec2_intrservServiceNotificationInterrupt(struct OBJGPU *arg1, struct IntrService *arg_this, IntrServiceServiceNotificationInterruptArguments *arg3);    // this
NV_STATUS __nvoc_down_thunk_KernelSec2_kflcnResetHw(struct OBJGPU *pGpu, struct KernelFalcon *pKernelSec2);    // this
NV_STATUS __nvoc_down_thunk_KernelSec2_engstateStateLoad(struct OBJGPU *pGpu, struct OBJENGSTATE *pKernelSec2, NvU32 arg3);    // this

// 5 down-thunk(s) defined to bridge methods in KernelSec2 from superclasses

// ksec2ConstructEngine: virtual halified (singleton optimized) override (engstate) base (engstate) body
NV_STATUS __nvoc_down_thunk_KernelSec2_engstateConstructEngine(struct OBJGPU *pGpu, struct OBJENGSTATE *pKernelSec2, ENGDESCRIPTOR arg3) {
    return ksec2ConstructEngine(pGpu, (struct KernelSec2 *)(((unsigned char *) pKernelSec2) - NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}

// ksec2RegisterIntrService: virtual halified (singleton optimized) override (intrserv) base (intrserv) body
void __nvoc_down_thunk_KernelSec2_intrservRegisterIntrService(struct OBJGPU *pGpu, struct IntrService *pKernelSec2, IntrServiceRecord pRecords[177]) {
    ksec2RegisterIntrService(pGpu, (struct KernelSec2 *)(((unsigned char *) pKernelSec2) - NV_OFFSETOF(KernelSec2, __nvoc_base_IntrService)), pRecords);
}

// ksec2ServiceNotificationInterrupt: virtual halified (singleton optimized) override (intrserv) base (intrserv)
NV_STATUS __nvoc_down_thunk_KernelSec2_intrservServiceNotificationInterrupt(struct OBJGPU *arg1, struct IntrService *arg_this, IntrServiceServiceNotificationInterruptArguments *arg3) {
    return ksec2ServiceNotificationInterrupt(arg1, (struct KernelSec2 *)(((unsigned char *) arg_this) - NV_OFFSETOF(KernelSec2, __nvoc_base_IntrService)), arg3);
}

// ksec2ResetHw: virtual halified (3 hals) override (kflcn) base (kflcn) body
NV_STATUS __nvoc_down_thunk_KernelSec2_kflcnResetHw(struct OBJGPU *pGpu, struct KernelFalcon *pKernelSec2) {
    return ksec2ResetHw(pGpu, (struct KernelSec2 *)(((unsigned char *) pKernelSec2) - NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon)));
}

// ksec2StateLoad: virtual halified (3 hals) override (engstate) base (engstate) body
NV_STATUS __nvoc_down_thunk_KernelSec2_engstateStateLoad(struct OBJGPU *pGpu, struct OBJENGSTATE *pKernelSec2, NvU32 arg3) {
    return ksec2StateLoad(pGpu, (struct KernelSec2 *)(((unsigned char *) pKernelSec2) - NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}


// Up-thunk(s) to bridge KernelSec2 methods to ancestors (if any)
NvBool __nvoc_up_thunk_KernelCrashCatEngine_kflcnConfigured(struct KernelFalcon *arg_this);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnUnload(struct KernelFalcon *arg_this);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnVprintf(struct KernelFalcon *arg_this, NvBool bReportStart, const char *fmt, va_list args);    // super
NvU32 __nvoc_up_thunk_KernelCrashCatEngine_kflcnPriRead(struct KernelFalcon *arg_this, NvU32 offset);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnPriWrite(struct KernelFalcon *arg_this, NvU32 offset, NvU32 data);    // super
void * __nvoc_up_thunk_KernelCrashCatEngine_kflcnMapBufferDescriptor(struct KernelFalcon *arg_this, CrashCatBufferDescriptor *pBufDesc);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnUnmapBufferDescriptor(struct KernelFalcon *arg_this, CrashCatBufferDescriptor *pBufDesc);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnSyncBufferDescriptor(struct KernelFalcon *arg_this, CrashCatBufferDescriptor *pBufDesc, NvU32 offset, NvU32 size);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnReadDmem(struct KernelFalcon *arg_this, NvU32 offset, NvU32 size, void *pBuf);    // super
void __nvoc_up_thunk_KernelCrashCatEngine_kflcnReadEmem(struct KernelFalcon *arg_this, NvU64 offset, NvU64 size, void *pBuf);    // super
const NvU32 * __nvoc_up_thunk_KernelCrashCatEngine_kflcnGetScratchOffsets(struct KernelFalcon *arg_this, NV_CRASHCAT_SCRATCH_GROUP_ID scratchGroupId);    // super
NvU32 __nvoc_up_thunk_KernelCrashCatEngine_kflcnGetWFL0Offset(struct KernelFalcon *arg_this);    // super
void __nvoc_up_thunk_OBJENGSTATE_ksec2InitMissing(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreInitLocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreInitUnlocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StateInitLocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StateInitUnlocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreLoad(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePostLoad(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreUnload(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StateUnload(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3);    // this
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePostUnload(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3);    // this
void __nvoc_up_thunk_OBJENGSTATE_ksec2StateDestroy(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NvBool __nvoc_up_thunk_OBJENGSTATE_ksec2IsPresent(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate);    // this
NvBool __nvoc_up_thunk_IntrService_ksec2ClearInterrupt(struct OBJGPU *pGpu, struct KernelSec2 *pIntrService, IntrServiceClearInterruptArguments *pParams);    // this
NvU32 __nvoc_up_thunk_IntrService_ksec2ServiceInterrupt(struct OBJGPU *pGpu, struct KernelSec2 *pIntrService, IntrServiceServiceInterruptArguments *pParams);    // this
NvU32 __nvoc_up_thunk_KernelFalcon_ksec2RegRead(struct OBJGPU *pGpu, struct KernelSec2 *pKernelFlcn, NvU32 offset);    // this
void __nvoc_up_thunk_KernelFalcon_ksec2RegWrite(struct OBJGPU *pGpu, struct KernelSec2 *pKernelFlcn, NvU32 offset, NvU32 data);    // this
NvU32 __nvoc_up_thunk_KernelFalcon_ksec2MaskDmemAddr(struct OBJGPU *pGpu, struct KernelSec2 *pKernelFlcn, NvU32 addr);    // this
NvBool __nvoc_up_thunk_KernelCrashCatEngine_ksec2Configured(struct KernelSec2 *arg_this);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2Unload(struct KernelSec2 *arg_this);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2Vprintf(struct KernelSec2 *arg_this, NvBool bReportStart, const char *fmt, va_list args);    // this
NvU32 __nvoc_up_thunk_KernelCrashCatEngine_ksec2PriRead(struct KernelSec2 *arg_this, NvU32 offset);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2PriWrite(struct KernelSec2 *arg_this, NvU32 offset, NvU32 data);    // this
void * __nvoc_up_thunk_KernelCrashCatEngine_ksec2MapBufferDescriptor(struct KernelSec2 *arg_this, CrashCatBufferDescriptor *pBufDesc);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2UnmapBufferDescriptor(struct KernelSec2 *arg_this, CrashCatBufferDescriptor *pBufDesc);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2SyncBufferDescriptor(struct KernelSec2 *arg_this, CrashCatBufferDescriptor *pBufDesc, NvU32 offset, NvU32 size);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2ReadDmem(struct KernelSec2 *arg_this, NvU32 offset, NvU32 size, void *pBuf);    // this
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2ReadEmem(struct KernelSec2 *arg_this, NvU64 offset, NvU64 size, void *pBuf);    // this
const NvU32 * __nvoc_up_thunk_KernelCrashCatEngine_ksec2GetScratchOffsets(struct KernelSec2 *arg_this, NV_CRASHCAT_SCRATCH_GROUP_ID scratchGroupId);    // this
NvU32 __nvoc_up_thunk_KernelCrashCatEngine_ksec2GetWFL0Offset(struct KernelSec2 *arg_this);    // this

// 29 up-thunk(s) defined to bridge methods in KernelSec2 to superclasses

// ksec2InitMissing: virtual inherited (engstate) base (engstate)
void __nvoc_up_thunk_OBJENGSTATE_ksec2InitMissing(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    engstateInitMissing(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2StatePreInitLocked: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreInitLocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    return engstateStatePreInitLocked(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2StatePreInitUnlocked: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreInitUnlocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    return engstateStatePreInitUnlocked(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2StateInitLocked: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StateInitLocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    return engstateStateInitLocked(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2StateInitUnlocked: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StateInitUnlocked(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    return engstateStateInitUnlocked(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2StatePreLoad: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreLoad(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3) {
    return engstateStatePreLoad(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}

// ksec2StatePostLoad: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePostLoad(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3) {
    return engstateStatePostLoad(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}

// ksec2StatePreUnload: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePreUnload(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3) {
    return engstateStatePreUnload(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}

// ksec2StateUnload: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StateUnload(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3) {
    return engstateStateUnload(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}

// ksec2StatePostUnload: virtual inherited (engstate) base (engstate)
NV_STATUS __nvoc_up_thunk_OBJENGSTATE_ksec2StatePostUnload(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate, NvU32 arg3) {
    return engstateStatePostUnload(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)), arg3);
}

// ksec2StateDestroy: virtual inherited (engstate) base (engstate)
void __nvoc_up_thunk_OBJENGSTATE_ksec2StateDestroy(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    engstateStateDestroy(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2IsPresent: virtual inherited (engstate) base (engstate)
NvBool __nvoc_up_thunk_OBJENGSTATE_ksec2IsPresent(struct OBJGPU *pGpu, struct KernelSec2 *pEngstate) {
    return engstateIsPresent(pGpu, (struct OBJENGSTATE *)(((unsigned char *) pEngstate) + NV_OFFSETOF(KernelSec2, __nvoc_base_OBJENGSTATE)));
}

// ksec2ClearInterrupt: virtual inherited (intrserv) base (intrserv)
NvBool __nvoc_up_thunk_IntrService_ksec2ClearInterrupt(struct OBJGPU *pGpu, struct KernelSec2 *pIntrService, IntrServiceClearInterruptArguments *pParams) {
    return intrservClearInterrupt(pGpu, (struct IntrService *)(((unsigned char *) pIntrService) + NV_OFFSETOF(KernelSec2, __nvoc_base_IntrService)), pParams);
}

// ksec2ServiceInterrupt: virtual inherited (intrserv) base (intrserv)
NvU32 __nvoc_up_thunk_IntrService_ksec2ServiceInterrupt(struct OBJGPU *pGpu, struct KernelSec2 *pIntrService, IntrServiceServiceInterruptArguments *pParams) {
    return intrservServiceInterrupt(pGpu, (struct IntrService *)(((unsigned char *) pIntrService) + NV_OFFSETOF(KernelSec2, __nvoc_base_IntrService)), pParams);
}

// ksec2RegRead: virtual halified (2 hals) inherited (kflcn) base (kflcn) body
NvU32 __nvoc_up_thunk_KernelFalcon_ksec2RegRead(struct OBJGPU *pGpu, struct KernelSec2 *pKernelFlcn, NvU32 offset) {
    return kflcnRegRead(pGpu, (struct KernelFalcon *)(((unsigned char *) pKernelFlcn) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon)), offset);
}

// ksec2RegWrite: virtual halified (2 hals) inherited (kflcn) base (kflcn) body
void __nvoc_up_thunk_KernelFalcon_ksec2RegWrite(struct OBJGPU *pGpu, struct KernelSec2 *pKernelFlcn, NvU32 offset, NvU32 data) {
    kflcnRegWrite(pGpu, (struct KernelFalcon *)(((unsigned char *) pKernelFlcn) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon)), offset, data);
}

// ksec2MaskDmemAddr: virtual halified (3 hals) inherited (kflcn) base (kflcn) body
NvU32 __nvoc_up_thunk_KernelFalcon_ksec2MaskDmemAddr(struct OBJGPU *pGpu, struct KernelSec2 *pKernelFlcn, NvU32 addr) {
    return kflcnMaskDmemAddr(pGpu, (struct KernelFalcon *)(((unsigned char *) pKernelFlcn) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon)), addr);
}

// ksec2Configured: virtual inherited (kcrashcatEngine) base (kflcn)
NvBool __nvoc_up_thunk_KernelCrashCatEngine_ksec2Configured(struct KernelSec2 *arg_this) {
    return kcrashcatEngineConfigured((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)));
}

// ksec2Unload: virtual inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2Unload(struct KernelSec2 *arg_this) {
    kcrashcatEngineUnload((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)));
}

// ksec2Vprintf: virtual inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2Vprintf(struct KernelSec2 *arg_this, NvBool bReportStart, const char *fmt, va_list args) {
    kcrashcatEngineVprintf((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), bReportStart, fmt, args);
}

// ksec2PriRead: virtual inherited (kcrashcatEngine) base (kflcn)
NvU32 __nvoc_up_thunk_KernelCrashCatEngine_ksec2PriRead(struct KernelSec2 *arg_this, NvU32 offset) {
    return kcrashcatEnginePriRead((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), offset);
}

// ksec2PriWrite: virtual inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2PriWrite(struct KernelSec2 *arg_this, NvU32 offset, NvU32 data) {
    kcrashcatEnginePriWrite((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), offset, data);
}

// ksec2MapBufferDescriptor: virtual inherited (kcrashcatEngine) base (kflcn)
void * __nvoc_up_thunk_KernelCrashCatEngine_ksec2MapBufferDescriptor(struct KernelSec2 *arg_this, CrashCatBufferDescriptor *pBufDesc) {
    return kcrashcatEngineMapBufferDescriptor((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), pBufDesc);
}

// ksec2UnmapBufferDescriptor: virtual inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2UnmapBufferDescriptor(struct KernelSec2 *arg_this, CrashCatBufferDescriptor *pBufDesc) {
    kcrashcatEngineUnmapBufferDescriptor((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), pBufDesc);
}

// ksec2SyncBufferDescriptor: virtual inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2SyncBufferDescriptor(struct KernelSec2 *arg_this, CrashCatBufferDescriptor *pBufDesc, NvU32 offset, NvU32 size) {
    kcrashcatEngineSyncBufferDescriptor((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), pBufDesc, offset, size);
}

// ksec2ReadDmem: virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2ReadDmem(struct KernelSec2 *arg_this, NvU32 offset, NvU32 size, void *pBuf) {
    kcrashcatEngineReadDmem((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), offset, size, pBuf);
}

// ksec2ReadEmem: virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
void __nvoc_up_thunk_KernelCrashCatEngine_ksec2ReadEmem(struct KernelSec2 *arg_this, NvU64 offset, NvU64 size, void *pBuf) {
    kcrashcatEngineReadEmem((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), offset, size, pBuf);
}

// ksec2GetScratchOffsets: virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
const NvU32 * __nvoc_up_thunk_KernelCrashCatEngine_ksec2GetScratchOffsets(struct KernelSec2 *arg_this, NV_CRASHCAT_SCRATCH_GROUP_ID scratchGroupId) {
    return kcrashcatEngineGetScratchOffsets((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)), scratchGroupId);
}

// ksec2GetWFL0Offset: virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
NvU32 __nvoc_up_thunk_KernelCrashCatEngine_ksec2GetWFL0Offset(struct KernelSec2 *arg_this) {
    return kcrashcatEngineGetWFL0Offset((struct KernelCrashCatEngine *)(((unsigned char *) arg_this) + NV_OFFSETOF(KernelSec2, __nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine)));
}


const struct NVOC_EXPORT_INFO __nvoc_export_info_KernelSec2 = 
{
    /*numEntries=*/     0,
    /*pExportEntries=*/  0
};

void __nvoc_dtor_OBJENGSTATE(OBJENGSTATE*);
void __nvoc_dtor_IntrService(IntrService*);
void __nvoc_dtor_KernelFalcon(KernelFalcon*);
void __nvoc_dtor_KernelSec2(KernelSec2 *pThis) {
    __nvoc_ksec2Destruct(pThis);
    __nvoc_dtor_OBJENGSTATE(&pThis->__nvoc_base_OBJENGSTATE);
    __nvoc_dtor_IntrService(&pThis->__nvoc_base_IntrService);
    __nvoc_dtor_KernelFalcon(&pThis->__nvoc_base_KernelFalcon);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_KernelSec2(KernelSec2 *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    ChipHal *chipHal = &pRmhalspecowner->chipHal;
    const unsigned long chipHal_HalVarIdx = (unsigned long)chipHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
    PORT_UNREFERENCED_VARIABLE(chipHal);
    PORT_UNREFERENCED_VARIABLE(chipHal_HalVarIdx);
}

NV_STATUS __nvoc_ctor_OBJENGSTATE(OBJENGSTATE* );
NV_STATUS __nvoc_ctor_IntrService(IntrService* );
NV_STATUS __nvoc_ctor_KernelFalcon(KernelFalcon* , RmHalspecOwner* );
NV_STATUS __nvoc_ctor_KernelSec2(KernelSec2 *pThis, RmHalspecOwner *pRmhalspecowner) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_OBJENGSTATE(&pThis->__nvoc_base_OBJENGSTATE);
    if (status != NV_OK) goto __nvoc_ctor_KernelSec2_fail_OBJENGSTATE;
    status = __nvoc_ctor_IntrService(&pThis->__nvoc_base_IntrService);
    if (status != NV_OK) goto __nvoc_ctor_KernelSec2_fail_IntrService;
    status = __nvoc_ctor_KernelFalcon(&pThis->__nvoc_base_KernelFalcon, pRmhalspecowner);
    if (status != NV_OK) goto __nvoc_ctor_KernelSec2_fail_KernelFalcon;
    __nvoc_init_dataField_KernelSec2(pThis, pRmhalspecowner);
    goto __nvoc_ctor_KernelSec2_exit; // Success

__nvoc_ctor_KernelSec2_fail_KernelFalcon:
    __nvoc_dtor_IntrService(&pThis->__nvoc_base_IntrService);
__nvoc_ctor_KernelSec2_fail_IntrService:
    __nvoc_dtor_OBJENGSTATE(&pThis->__nvoc_base_OBJENGSTATE);
__nvoc_ctor_KernelSec2_fail_OBJENGSTATE:
__nvoc_ctor_KernelSec2_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_KernelSec2_1(KernelSec2 *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    ChipHal *chipHal = &pRmhalspecowner->chipHal;
    const unsigned long chipHal_HalVarIdx = (unsigned long)chipHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
    PORT_UNREFERENCED_VARIABLE(chipHal);
    PORT_UNREFERENCED_VARIABLE(chipHal_HalVarIdx);

    // ksec2ConfigureFalcon -- halified (4 hals) body
    if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x00000400UL) )) /* ChipHal: GA100 */ 
    {
        pThis->__ksec2ConfigureFalcon__ = &ksec2ConfigureFalcon_GA100;
    }
    else if (( ((chipHal_HalVarIdx >> 5) == 2UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* ChipHal: GB10B */ 
    {
        pThis->__ksec2ConfigureFalcon__ = &ksec2ConfigureFalcon_92bfc3;
    }
    else if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x000003e0UL) )) /* ChipHal: TU102 | TU104 | TU106 | TU116 | TU117 */ 
    {
        pThis->__ksec2ConfigureFalcon__ = &ksec2ConfigureFalcon_TU102;
    }
    else
    {
        pThis->__ksec2ConfigureFalcon__ = &ksec2ConfigureFalcon_GA102;
    }

    // ksec2ResetHw -- virtual halified (3 hals) override (kflcn) base (kflcn) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__ksec2ResetHw__ = &ksec2ResetHw_5baef9;
    }
    else
    {
        if (( ((chipHal_HalVarIdx >> 5) == 2UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* ChipHal: GB10B */ 
        {
            pThis->__ksec2ResetHw__ = &ksec2ResetHw_5baef9;
        }
        else
        {
            pThis->__ksec2ResetHw__ = &ksec2ResetHw_TU102;
        }
    }

    // ksec2StateLoad -- virtual halified (3 hals) override (engstate) base (engstate) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__ksec2StateLoad__ = &ksec2StateLoad_56cd7a;
    }
    else
    {
        if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0xd0000000UL) )) /* ChipHal: GH100 | GB100 | GB102 */ 
        {
            pThis->__ksec2StateLoad__ = &ksec2StateLoad_GH100;
        }
        // default
        else
        {
            pThis->__ksec2StateLoad__ = &ksec2StateLoad_56cd7a;
        }
    }

    // ksec2ReadUcodeFuseVersion -- halified (3 hals) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__ksec2ReadUcodeFuseVersion__ = &ksec2ReadUcodeFuseVersion_474d46;
    }
    else
    {
        if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x000003e0UL) )) /* ChipHal: TU102 | TU104 | TU106 | TU116 | TU117 */ 
        {
            pThis->__ksec2ReadUcodeFuseVersion__ = &ksec2ReadUcodeFuseVersion_b2b553;
        }
        else
        {
            pThis->__ksec2ReadUcodeFuseVersion__ = &ksec2ReadUcodeFuseVersion_GA100;
        }
    }

    // ksec2GetBinArchiveBlUcode -- halified (3 hals) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__ksec2GetBinArchiveBlUcode__ = &ksec2GetBinArchiveBlUcode_80f438;
    }
    else
    {
        if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x0000ffe0UL) )) /* ChipHal: TU102 | TU104 | TU106 | TU116 | TU117 | GA100 | GA102 | GA103 | GA104 | GA106 | GA107 */ 
        {
            pThis->__ksec2GetBinArchiveBlUcode__ = &ksec2GetBinArchiveBlUcode_TU102;
        }
        else
        {
            pThis->__ksec2GetBinArchiveBlUcode__ = &ksec2GetBinArchiveBlUcode_80f438;
        }
    }

    // ksec2GetGenericBlUcode -- halified (3 hals) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__ksec2GetGenericBlUcode__ = &ksec2GetGenericBlUcode_5baef9;
    }
    else
    {
        if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x0000ffe0UL) )) /* ChipHal: TU102 | TU104 | TU106 | TU116 | TU117 | GA100 | GA102 | GA103 | GA104 | GA106 | GA107 */ 
        {
            pThis->__ksec2GetGenericBlUcode__ = &ksec2GetGenericBlUcode_TU102;
        }
        else
        {
            pThis->__ksec2GetGenericBlUcode__ = &ksec2GetGenericBlUcode_5baef9;
        }
    }

    // ksec2GetBinArchiveSecurescrubUcode -- halified (3 hals) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__ksec2GetBinArchiveSecurescrubUcode__ = &ksec2GetBinArchiveSecurescrubUcode_80f438;
    }
    else
    {
        if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x01f00000UL) )) /* ChipHal: AD102 | AD103 | AD104 | AD106 | AD107 */ 
        {
            pThis->__ksec2GetBinArchiveSecurescrubUcode__ = &ksec2GetBinArchiveSecurescrubUcode_AD10X;
        }
        else
        {
            pThis->__ksec2GetBinArchiveSecurescrubUcode__ = &ksec2GetBinArchiveSecurescrubUcode_80f438;
        }
    }

    // ksec2RegRead -- virtual halified (2 hals) inherited (kflcn) base (kflcn) body
    pThis->__ksec2RegRead__ = &__nvoc_up_thunk_KernelFalcon_ksec2RegRead;

    // ksec2RegWrite -- virtual halified (2 hals) inherited (kflcn) base (kflcn) body
    pThis->__ksec2RegWrite__ = &__nvoc_up_thunk_KernelFalcon_ksec2RegWrite;

    // ksec2MaskDmemAddr -- virtual halified (3 hals) inherited (kflcn) base (kflcn) body
    pThis->__ksec2MaskDmemAddr__ = &__nvoc_up_thunk_KernelFalcon_ksec2MaskDmemAddr;
} // End __nvoc_init_funcTable_KernelSec2_1 with approximately 29 basic block(s).


// Initialize vtable(s) for 39 virtual method(s).
void __nvoc_init_funcTable_KernelSec2(KernelSec2 *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Per-class vtable definition
    static const struct NVOC_VTABLE__KernelSec2 vtable = {
        .__ksec2ConstructEngine__ = &ksec2ConstructEngine_IMPL,    // virtual halified (singleton optimized) override (engstate) base (engstate) body
        .OBJENGSTATE.__engstateConstructEngine__ = &__nvoc_down_thunk_KernelSec2_engstateConstructEngine,    // virtual
        .__ksec2RegisterIntrService__ = &ksec2RegisterIntrService_IMPL,    // virtual halified (singleton optimized) override (intrserv) base (intrserv) body
        .IntrService.__intrservRegisterIntrService__ = &__nvoc_down_thunk_KernelSec2_intrservRegisterIntrService,    // virtual
        .__ksec2ServiceNotificationInterrupt__ = &ksec2ServiceNotificationInterrupt_IMPL,    // virtual halified (singleton optimized) override (intrserv) base (intrserv)
        .IntrService.__intrservServiceNotificationInterrupt__ = &__nvoc_down_thunk_KernelSec2_intrservServiceNotificationInterrupt,    // virtual
        .KernelFalcon.__kflcnResetHw__ = &__nvoc_down_thunk_KernelSec2_kflcnResetHw,    // pure virtual
        .OBJENGSTATE.__engstateStateLoad__ = &__nvoc_down_thunk_KernelSec2_engstateStateLoad,    // virtual
        .__ksec2InitMissing__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2InitMissing,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateInitMissing__ = &engstateInitMissing_IMPL,    // virtual
        .__ksec2StatePreInitLocked__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StatePreInitLocked,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStatePreInitLocked__ = &engstateStatePreInitLocked_IMPL,    // virtual
        .__ksec2StatePreInitUnlocked__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StatePreInitUnlocked,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStatePreInitUnlocked__ = &engstateStatePreInitUnlocked_IMPL,    // virtual
        .__ksec2StateInitLocked__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StateInitLocked,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStateInitLocked__ = &engstateStateInitLocked_IMPL,    // virtual
        .__ksec2StateInitUnlocked__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StateInitUnlocked,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStateInitUnlocked__ = &engstateStateInitUnlocked_IMPL,    // virtual
        .__ksec2StatePreLoad__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StatePreLoad,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStatePreLoad__ = &engstateStatePreLoad_IMPL,    // virtual
        .__ksec2StatePostLoad__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StatePostLoad,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStatePostLoad__ = &engstateStatePostLoad_IMPL,    // virtual
        .__ksec2StatePreUnload__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StatePreUnload,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStatePreUnload__ = &engstateStatePreUnload_IMPL,    // virtual
        .__ksec2StateUnload__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StateUnload,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStateUnload__ = &engstateStateUnload_IMPL,    // virtual
        .__ksec2StatePostUnload__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StatePostUnload,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStatePostUnload__ = &engstateStatePostUnload_IMPL,    // virtual
        .__ksec2StateDestroy__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2StateDestroy,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateStateDestroy__ = &engstateStateDestroy_IMPL,    // virtual
        .__ksec2IsPresent__ = &__nvoc_up_thunk_OBJENGSTATE_ksec2IsPresent,    // virtual inherited (engstate) base (engstate)
        .OBJENGSTATE.__engstateIsPresent__ = &engstateIsPresent_IMPL,    // virtual
        .__ksec2ClearInterrupt__ = &__nvoc_up_thunk_IntrService_ksec2ClearInterrupt,    // virtual inherited (intrserv) base (intrserv)
        .IntrService.__intrservClearInterrupt__ = &intrservClearInterrupt_IMPL,    // virtual
        .__ksec2ServiceInterrupt__ = &__nvoc_up_thunk_IntrService_ksec2ServiceInterrupt,    // virtual inherited (intrserv) base (intrserv)
        .IntrService.__intrservServiceInterrupt__ = &intrservServiceInterrupt_IMPL,    // virtual
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineRegRead__ = &__nvoc_down_thunk_KernelFalcon_kcrashcatEngineRegRead,    // pure virtual
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineRegWrite__ = &__nvoc_down_thunk_KernelFalcon_kcrashcatEngineRegWrite,    // pure virtual
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineMaskDmemAddr__ = &__nvoc_down_thunk_KernelFalcon_kcrashcatEngineMaskDmemAddr,    // pure virtual
        .__ksec2Configured__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2Configured,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnConfigured__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnConfigured,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineConfigured__ = &kcrashcatEngineConfigured_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineConfigured__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineConfigured,    // pure virtual
        .__ksec2Unload__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2Unload,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnUnload__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnUnload,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineUnload__ = &kcrashcatEngineUnload_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineUnload__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineUnload,    // virtual
        .__ksec2Vprintf__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2Vprintf,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnVprintf__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnVprintf,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineVprintf__ = &kcrashcatEngineVprintf_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineVprintf__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineVprintf,    // pure virtual
        .__ksec2PriRead__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2PriRead,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnPriRead__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnPriRead,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEnginePriRead__ = &kcrashcatEnginePriRead_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEnginePriRead__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEnginePriRead,    // pure virtual
        .__ksec2PriWrite__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2PriWrite,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnPriWrite__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnPriWrite,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEnginePriWrite__ = &kcrashcatEnginePriWrite_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEnginePriWrite__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEnginePriWrite,    // pure virtual
        .__ksec2MapBufferDescriptor__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2MapBufferDescriptor,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnMapBufferDescriptor__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnMapBufferDescriptor,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineMapBufferDescriptor__ = &kcrashcatEngineMapBufferDescriptor_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineMapBufferDescriptor__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineMapBufferDescriptor,    // pure virtual
        .__ksec2UnmapBufferDescriptor__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2UnmapBufferDescriptor,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnUnmapBufferDescriptor__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnUnmapBufferDescriptor,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineUnmapBufferDescriptor__ = &kcrashcatEngineUnmapBufferDescriptor_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineUnmapBufferDescriptor__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineUnmapBufferDescriptor,    // pure virtual
        .__ksec2SyncBufferDescriptor__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2SyncBufferDescriptor,    // virtual inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnSyncBufferDescriptor__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnSyncBufferDescriptor,    // virtual inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineSyncBufferDescriptor__ = &kcrashcatEngineSyncBufferDescriptor_IMPL,    // virtual override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineSyncBufferDescriptor__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineSyncBufferDescriptor,    // pure virtual
        .__ksec2ReadDmem__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2ReadDmem,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnReadDmem__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnReadDmem,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineReadDmem__ = &kcrashcatEngineReadDmem_TU102,    // virtual halified (singleton optimized)
        .__ksec2ReadEmem__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2ReadEmem,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnReadEmem__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnReadEmem,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineReadEmem__ = &kcrashcatEngineReadEmem_2fced3,    // virtual halified (singleton optimized)
        .__ksec2GetScratchOffsets__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2GetScratchOffsets,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnGetScratchOffsets__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnGetScratchOffsets,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineGetScratchOffsets__ = &kcrashcatEngineGetScratchOffsets_TU102,    // virtual halified (singleton optimized) override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineGetScratchOffsets__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineGetScratchOffsets,    // pure virtual
        .__ksec2GetWFL0Offset__ = &__nvoc_up_thunk_KernelCrashCatEngine_ksec2GetWFL0Offset,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kflcn)
        .KernelFalcon.__kflcnGetWFL0Offset__ = &__nvoc_up_thunk_KernelCrashCatEngine_kflcnGetWFL0Offset,    // virtual halified (singleton optimized) inherited (kcrashcatEngine) base (kcrashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.__kcrashcatEngineGetWFL0Offset__ = &kcrashcatEngineGetWFL0Offset_TU102,    // virtual halified (singleton optimized) override (crashcatEngine) base (crashcatEngine)
        .KernelFalcon.KernelCrashCatEngine.CrashCatEngine.__crashcatEngineGetWFL0Offset__ = &__nvoc_down_thunk_KernelCrashCatEngine_crashcatEngineGetWFL0Offset,    // pure virtual
    };

    // Pointer(s) to per-class vtable(s)
    pThis->__nvoc_base_OBJENGSTATE.__nvoc_vtable = &vtable.OBJENGSTATE;    // (engstate) super
    pThis->__nvoc_base_IntrService.__nvoc_vtable = &vtable.IntrService;    // (intrserv) super
    pThis->__nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine.__nvoc_base_CrashCatEngine.__nvoc_vtable = &vtable.KernelFalcon.KernelCrashCatEngine.CrashCatEngine;    // (crashcatEngine) super^3
    pThis->__nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine.__nvoc_vtable = &vtable.KernelFalcon.KernelCrashCatEngine;    // (kcrashcatEngine) super^2
    pThis->__nvoc_base_KernelFalcon.__nvoc_vtable = &vtable.KernelFalcon;    // (kflcn) super
    pThis->__nvoc_vtable = &vtable;    // (ksec2) this

    // Initialize vtable(s) with 10 per-object function pointer(s).
    __nvoc_init_funcTable_KernelSec2_1(pThis, pRmhalspecowner);
}

void __nvoc_init_OBJENGSTATE(OBJENGSTATE*);
void __nvoc_init_IntrService(IntrService*);
void __nvoc_init_KernelFalcon(KernelFalcon*, RmHalspecOwner* );
void __nvoc_init_KernelSec2(KernelSec2 *pThis, RmHalspecOwner *pRmhalspecowner) {
    pThis->__nvoc_pbase_KernelSec2 = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_OBJENGSTATE.__nvoc_base_Object;
    pThis->__nvoc_pbase_OBJENGSTATE = &pThis->__nvoc_base_OBJENGSTATE;
    pThis->__nvoc_pbase_IntrService = &pThis->__nvoc_base_IntrService;
    pThis->__nvoc_pbase_CrashCatEngine = &pThis->__nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine.__nvoc_base_CrashCatEngine;
    pThis->__nvoc_pbase_KernelCrashCatEngine = &pThis->__nvoc_base_KernelFalcon.__nvoc_base_KernelCrashCatEngine;
    pThis->__nvoc_pbase_KernelFalcon = &pThis->__nvoc_base_KernelFalcon;
    __nvoc_init_OBJENGSTATE(&pThis->__nvoc_base_OBJENGSTATE);
    __nvoc_init_IntrService(&pThis->__nvoc_base_IntrService);
    __nvoc_init_KernelFalcon(&pThis->__nvoc_base_KernelFalcon, pRmhalspecowner);
    __nvoc_init_funcTable_KernelSec2(pThis, pRmhalspecowner);
}

NV_STATUS __nvoc_objCreate_KernelSec2(KernelSec2 **ppThis, Dynamic *pParent, NvU32 createFlags)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    KernelSec2 *pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(KernelSec2), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(KernelSec2));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_KernelSec2);

    pThis->__nvoc_base_OBJENGSTATE.__nvoc_base_Object.createFlags = createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_ASSERT_OR_RETURN(pParent != NULL, NV_ERR_INVALID_ARGUMENT);

    // Link the child into the parent unless flagged not to do so.
    if (!(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_OBJENGSTATE.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_OBJENGSTATE.__nvoc_base_Object.pParent = NULL;
    }

    if ((pRmhalspecowner = dynamicCast(pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, pParent);
    NV_ASSERT_OR_RETURN(pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT);

    __nvoc_init_KernelSec2(pThis, pRmhalspecowner);
    status = __nvoc_ctor_KernelSec2(pThis, pRmhalspecowner);
    if (status != NV_OK) goto __nvoc_objCreate_KernelSec2_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_KernelSec2_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_OBJENGSTATE.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(KernelSec2));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_KernelSec2(KernelSec2 **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;

    status = __nvoc_objCreate_KernelSec2(ppThis, pParent, createFlags);

    return status;
}

