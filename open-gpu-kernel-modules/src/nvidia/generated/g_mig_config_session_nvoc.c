#define NVOC_MIG_CONFIG_SESSION_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_mig_config_session_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x36a941 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_MIGConfigSession;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

void __nvoc_init_MIGConfigSession(MIGConfigSession*);
void __nvoc_init_funcTable_MIGConfigSession(MIGConfigSession*);
NV_STATUS __nvoc_ctor_MIGConfigSession(MIGConfigSession*, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_MIGConfigSession(MIGConfigSession*);
void __nvoc_dtor_MIGConfigSession(MIGConfigSession*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_MIGConfigSession;

static const struct NVOC_RTTI __nvoc_rtti_MIGConfigSession_MIGConfigSession = {
    /*pClassDef=*/          &__nvoc_class_def_MIGConfigSession,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_MIGConfigSession,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_MIGConfigSession_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_MIGConfigSession_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_MIGConfigSession_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_MIGConfigSession_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_MIGConfigSession = {
    /*numRelatives=*/       5,
    /*relatives=*/ {
        &__nvoc_rtti_MIGConfigSession_MIGConfigSession,
        &__nvoc_rtti_MIGConfigSession_RmResource,
        &__nvoc_rtti_MIGConfigSession_RmResourceCommon,
        &__nvoc_rtti_MIGConfigSession_RsResource,
        &__nvoc_rtti_MIGConfigSession_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_MIGConfigSession = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(MIGConfigSession),
        /*classId=*/            classId(MIGConfigSession),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "MIGConfigSession",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_MIGConfigSession,
    /*pCastInfo=*/          &__nvoc_castinfo_MIGConfigSession,
    /*pExportInfo=*/        &__nvoc_export_info_MIGConfigSession
};

// Down-thunk(s) to bridge MIGConfigSession methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super

// Up-thunk(s) to bridge MIGConfigSession methods to ancestors (if any)
NvBool __nvoc_up_thunk_RsResource_rmresCanCopy(struct RmResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresIsDuplicate(struct RmResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_rmresPreDestruct(struct RmResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresControl(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresControlFilter(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresMap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported(struct RmResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresMapTo(struct RmResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmapFrom(struct RmResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_rmresGetRefCount(struct RmResource *pResource);    // super
void __nvoc_up_thunk_RsResource_rmresAddAdditionalDependants(struct RsClient *pClient, struct RmResource *pResource, RsResourceRef *pReference);    // super
NvBool __nvoc_up_thunk_RmResource_migconfigsessionAccessCallback(struct MIGConfigSession *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_up_thunk_RmResource_migconfigsessionShareCallback(struct MIGConfigSession *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionGetMemInterMapParams(struct MIGConfigSession *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionCheckMemInterUnmap(struct MIGConfigSession *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionGetMemoryMappingDescriptor(struct MIGConfigSession *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionControlSerialization_Prologue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_migconfigsessionControlSerialization_Epilogue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionControl_Prologue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_migconfigsessionControl_Epilogue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_migconfigsessionCanCopy(struct MIGConfigSession *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionIsDuplicate(struct MIGConfigSession *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_migconfigsessionPreDestruct(struct MIGConfigSession *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionControl(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionControlFilter(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionMap(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionUnmap(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_RsResource_migconfigsessionIsPartialUnmapSupported(struct MIGConfigSession *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionMapTo(struct MIGConfigSession *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionUnmapFrom(struct MIGConfigSession *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_migconfigsessionGetRefCount(struct MIGConfigSession *pResource);    // this
void __nvoc_up_thunk_RsResource_migconfigsessionAddAdditionalDependants(struct RsClient *pClient, struct MIGConfigSession *pResource, RsResourceRef *pReference);    // this

// 21 up-thunk(s) defined to bridge methods in MIGConfigSession to superclasses

// migconfigsessionAccessCallback: virtual inherited (rmres) base (rmres)
NvBool __nvoc_up_thunk_RmResource_migconfigsessionAccessCallback(struct MIGConfigSession *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// migconfigsessionShareCallback: virtual inherited (rmres) base (rmres)
NvBool __nvoc_up_thunk_RmResource_migconfigsessionShareCallback(struct MIGConfigSession *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// migconfigsessionGetMemInterMapParams: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionGetMemInterMapParams(struct MIGConfigSession *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pParams);
}

// migconfigsessionCheckMemInterUnmap: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionCheckMemInterUnmap(struct MIGConfigSession *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// migconfigsessionGetMemoryMappingDescriptor: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionGetMemoryMappingDescriptor(struct MIGConfigSession *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), ppMemDesc);
}

// migconfigsessionControlSerialization_Prologue: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionControlSerialization_Prologue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pCallContext, pParams);
}

// migconfigsessionControlSerialization_Epilogue: virtual inherited (rmres) base (rmres)
void __nvoc_up_thunk_RmResource_migconfigsessionControlSerialization_Epilogue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pCallContext, pParams);
}

// migconfigsessionControl_Prologue: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_migconfigsessionControl_Prologue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pCallContext, pParams);
}

// migconfigsessionControl_Epilogue: virtual inherited (rmres) base (rmres)
void __nvoc_up_thunk_RmResource_migconfigsessionControl_Epilogue(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource)), pCallContext, pParams);
}

// migconfigsessionCanCopy: virtual inherited (res) base (rmres)
NvBool __nvoc_up_thunk_RsResource_migconfigsessionCanCopy(struct MIGConfigSession *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// migconfigsessionIsDuplicate: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionIsDuplicate(struct MIGConfigSession *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// migconfigsessionPreDestruct: virtual inherited (res) base (rmres)
void __nvoc_up_thunk_RsResource_migconfigsessionPreDestruct(struct MIGConfigSession *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// migconfigsessionControl: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionControl(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControl((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// migconfigsessionControlFilter: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionControlFilter(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// migconfigsessionMap: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionMap(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams, pCpuMapping);
}

// migconfigsessionUnmap: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionUnmap(struct MIGConfigSession *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pCpuMapping);
}

// migconfigsessionIsPartialUnmapSupported: inline virtual inherited (res) base (rmres) body
NvBool __nvoc_up_thunk_RsResource_migconfigsessionIsPartialUnmapSupported(struct MIGConfigSession *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// migconfigsessionMapTo: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionMapTo(struct MIGConfigSession *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// migconfigsessionUnmapFrom: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_migconfigsessionUnmapFrom(struct MIGConfigSession *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// migconfigsessionGetRefCount: virtual inherited (res) base (rmres)
NvU32 __nvoc_up_thunk_RsResource_migconfigsessionGetRefCount(struct MIGConfigSession *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// migconfigsessionAddAdditionalDependants: virtual inherited (res) base (rmres)
void __nvoc_up_thunk_RsResource_migconfigsessionAddAdditionalDependants(struct RsClient *pClient, struct MIGConfigSession *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(MIGConfigSession, __nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info_MIGConfigSession = 
{
    /*numEntries=*/     0,
    /*pExportEntries=*/  0
};

void __nvoc_dtor_RmResource(RmResource*);
void __nvoc_dtor_MIGConfigSession(MIGConfigSession *pThis) {
    __nvoc_migconfigsessionDestruct(pThis);
    __nvoc_dtor_RmResource(&pThis->__nvoc_base_RmResource);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_MIGConfigSession(MIGConfigSession *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_RmResource(RmResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_MIGConfigSession(MIGConfigSession *pThis, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_RmResource(&pThis->__nvoc_base_RmResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_MIGConfigSession_fail_RmResource;
    __nvoc_init_dataField_MIGConfigSession(pThis);

    status = __nvoc_migconfigsessionConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_MIGConfigSession_fail__init;
    goto __nvoc_ctor_MIGConfigSession_exit; // Success

__nvoc_ctor_MIGConfigSession_fail__init:
    __nvoc_dtor_RmResource(&pThis->__nvoc_base_RmResource);
__nvoc_ctor_MIGConfigSession_fail_RmResource:
__nvoc_ctor_MIGConfigSession_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_MIGConfigSession_1(MIGConfigSession *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_MIGConfigSession_1


// Initialize vtable(s) for 21 virtual method(s).
void __nvoc_init_funcTable_MIGConfigSession(MIGConfigSession *pThis) {

    // Per-class vtable definition
    static const struct NVOC_VTABLE__MIGConfigSession vtable = {
        .__migconfigsessionAccessCallback__ = &__nvoc_up_thunk_RmResource_migconfigsessionAccessCallback,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
        .RmResource.RsResource.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
        .__migconfigsessionShareCallback__ = &__nvoc_up_thunk_RmResource_migconfigsessionShareCallback,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresShareCallback__ = &rmresShareCallback_IMPL,    // virtual override (res) base (res)
        .RmResource.RsResource.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
        .__migconfigsessionGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_migconfigsessionGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
        .__migconfigsessionCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_migconfigsessionCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
        .__migconfigsessionGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_migconfigsessionGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
        .__migconfigsessionControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_migconfigsessionControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
        .RmResource.RsResource.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
        .__migconfigsessionControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_migconfigsessionControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
        .RmResource.RsResource.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
        .__migconfigsessionControl_Prologue__ = &__nvoc_up_thunk_RmResource_migconfigsessionControl_Prologue,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresControl_Prologue__ = &rmresControl_Prologue_IMPL,    // virtual override (res) base (res)
        .RmResource.RsResource.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
        .__migconfigsessionControl_Epilogue__ = &__nvoc_up_thunk_RmResource_migconfigsessionControl_Epilogue,    // virtual inherited (rmres) base (rmres)
        .RmResource.__rmresControl_Epilogue__ = &rmresControl_Epilogue_IMPL,    // virtual override (res) base (res)
        .RmResource.RsResource.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
        .__migconfigsessionCanCopy__ = &__nvoc_up_thunk_RsResource_migconfigsessionCanCopy,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
        .__migconfigsessionIsDuplicate__ = &__nvoc_up_thunk_RsResource_migconfigsessionIsDuplicate,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
        .__migconfigsessionPreDestruct__ = &__nvoc_up_thunk_RsResource_migconfigsessionPreDestruct,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
        .__migconfigsessionControl__ = &__nvoc_up_thunk_RsResource_migconfigsessionControl,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resControl__ = &resControl_IMPL,    // virtual
        .__migconfigsessionControlFilter__ = &__nvoc_up_thunk_RsResource_migconfigsessionControlFilter,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
        .__migconfigsessionMap__ = &__nvoc_up_thunk_RsResource_migconfigsessionMap,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resMap__ = &resMap_IMPL,    // virtual
        .__migconfigsessionUnmap__ = &__nvoc_up_thunk_RsResource_migconfigsessionUnmap,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resUnmap__ = &resUnmap_IMPL,    // virtual
        .__migconfigsessionIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_migconfigsessionIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
        .RmResource.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
        .RmResource.RsResource.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
        .__migconfigsessionMapTo__ = &__nvoc_up_thunk_RsResource_migconfigsessionMapTo,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resMapTo__ = &resMapTo_IMPL,    // virtual
        .__migconfigsessionUnmapFrom__ = &__nvoc_up_thunk_RsResource_migconfigsessionUnmapFrom,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
        .__migconfigsessionGetRefCount__ = &__nvoc_up_thunk_RsResource_migconfigsessionGetRefCount,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
        .__migconfigsessionAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_migconfigsessionAddAdditionalDependants,    // virtual inherited (res) base (rmres)
        .RmResource.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
        .RmResource.RsResource.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    };

    // Pointer(s) to per-class vtable(s)
    pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_vtable = &vtable.RmResource.RsResource;    // (res) super^2
    pThis->__nvoc_base_RmResource.__nvoc_vtable = &vtable.RmResource;    // (rmres) super
    pThis->__nvoc_vtable = &vtable;    // (migconfigsession) this
    __nvoc_init_funcTable_MIGConfigSession_1(pThis);
}

void __nvoc_init_RmResource(RmResource*);
void __nvoc_init_MIGConfigSession(MIGConfigSession *pThis) {
    pThis->__nvoc_pbase_MIGConfigSession = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_RmResource;
    __nvoc_init_RmResource(&pThis->__nvoc_base_RmResource);
    __nvoc_init_funcTable_MIGConfigSession(pThis);
}

NV_STATUS __nvoc_objCreate_MIGConfigSession(MIGConfigSession **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    MIGConfigSession *pThis;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(MIGConfigSession), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(MIGConfigSession));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_MIGConfigSession);

    pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_MIGConfigSession(pThis);
    status = __nvoc_ctor_MIGConfigSession(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_MIGConfigSession_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_MIGConfigSession_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(MIGConfigSession));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_MIGConfigSession(MIGConfigSession **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_MIGConfigSession(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}

