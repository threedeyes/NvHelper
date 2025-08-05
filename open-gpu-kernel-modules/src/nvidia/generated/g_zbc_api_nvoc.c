#define NVOC_ZBC_API_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_zbc_api_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x397ee3 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_ZbcApi;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_GpuResource;

void __nvoc_init_ZbcApi(ZbcApi*, RmHalspecOwner* );
void __nvoc_init_funcTable_ZbcApi(ZbcApi*, RmHalspecOwner* );
NV_STATUS __nvoc_ctor_ZbcApi(ZbcApi*, RmHalspecOwner* , struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_ZbcApi(ZbcApi*, RmHalspecOwner* );
void __nvoc_dtor_ZbcApi(ZbcApi*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_ZbcApi;

static const struct NVOC_RTTI __nvoc_rtti_ZbcApi_ZbcApi = {
    /*pClassDef=*/          &__nvoc_class_def_ZbcApi,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_ZbcApi,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_ZbcApi_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_ZbcApi_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_ZbcApi_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_ZbcApi_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource),
};

static const struct NVOC_RTTI __nvoc_rtti_ZbcApi_GpuResource = {
    /*pClassDef=*/          &__nvoc_class_def_GpuResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_ZbcApi = {
    /*numRelatives=*/       6,
    /*relatives=*/ {
        &__nvoc_rtti_ZbcApi_ZbcApi,
        &__nvoc_rtti_ZbcApi_GpuResource,
        &__nvoc_rtti_ZbcApi_RmResource,
        &__nvoc_rtti_ZbcApi_RmResourceCommon,
        &__nvoc_rtti_ZbcApi_RsResource,
        &__nvoc_rtti_ZbcApi_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_ZbcApi = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(ZbcApi),
        /*classId=*/            classId(ZbcApi),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "ZbcApi",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_ZbcApi,
    /*pCastInfo=*/          &__nvoc_castinfo_ZbcApi,
    /*pExportInfo=*/        &__nvoc_export_info_ZbcApi
};

#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_ZbcApi[] = 
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdSetZbcColorClear_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*flags=*/      0x248u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960101u,
        /*paramSize=*/  sizeof(NV9096_CTRL_SET_ZBC_COLOR_CLEAR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdSetZbcColorClear"
#endif
    },
    {               /*  [1] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdSetZbcDepthClear_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*flags=*/      0x248u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960102u,
        /*paramSize=*/  sizeof(NV9096_CTRL_SET_ZBC_DEPTH_CLEAR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdSetZbcDepthClear"
#endif
    },
    {               /*  [2] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdGetZbcClearTable_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*flags=*/      0x248u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960103u,
        /*paramSize=*/  sizeof(NV9096_CTRL_GET_ZBC_CLEAR_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdGetZbcClearTable"
#endif
    },
    {               /*  [3] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x48u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdSetZbcClearTable_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x48u)
        /*flags=*/      0x48u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960104u,
        /*paramSize=*/  sizeof(NV9096_CTRL_SET_ZBC_CLEAR_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdSetZbcClearTable"
#endif
    },
    {               /*  [4] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdSetZbcStencilClear_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*flags=*/      0x248u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960105u,
        /*paramSize=*/  sizeof(NV9096_CTRL_SET_ZBC_STENCIL_CLEAR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdSetZbcStencilClear"
#endif
    },
    {               /*  [5] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40048u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdGetZbcClearTableSize_DISPATCH,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40048u)
        /*flags=*/      0x40048u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960106u,
        /*paramSize=*/  sizeof(NV9096_CTRL_GET_ZBC_CLEAR_TABLE_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdGetZbcClearTableSize"
#endif
    },
    {               /*  [6] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) zbcapiCtrlCmdGetZbcClearTableEntry_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
        /*flags=*/      0x248u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x90960107u,
        /*paramSize=*/  sizeof(NV9096_CTRL_GET_ZBC_CLEAR_TABLE_ENTRY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ZbcApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "zbcapiCtrlCmdGetZbcClearTableEntry"
#endif
    },

};

// Down-thunk(s) to bridge ZbcApi methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super^2
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_GpuResource_resControl(struct RsResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_GpuResource_resMap(struct RsResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_down_thunk_GpuResource_resUnmap(struct RsResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_down_thunk_GpuResource_rmresShareCallback(struct RmResource *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super

// Up-thunk(s) to bridge ZbcApi methods to ancestors (if any)
NvBool __nvoc_up_thunk_RsResource_rmresCanCopy(struct RmResource *pResource);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresIsDuplicate(struct RmResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super^2
void __nvoc_up_thunk_RsResource_rmresPreDestruct(struct RmResource *pResource);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresControl(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresControlFilter(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresMap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super^2
NvBool __nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported(struct RmResource *pResource);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresMapTo(struct RmResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmapFrom(struct RmResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super^2
NvU32 __nvoc_up_thunk_RsResource_rmresGetRefCount(struct RmResource *pResource);    // super^2
void __nvoc_up_thunk_RsResource_rmresAddAdditionalDependants(struct RsClient *pClient, struct RmResource *pResource, RsResourceRef *pReference);    // super^2
NvBool __nvoc_up_thunk_RmResource_gpuresAccessCallback(struct GpuResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresGetMemInterMapParams(struct GpuResource *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresCheckMemInterUnmap(struct GpuResource *pRmResource, NvBool bSubdeviceHandleProvided);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresGetMemoryMappingDescriptor(struct GpuResource *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresControlSerialization_Prologue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_gpuresControlSerialization_Epilogue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresControl_Prologue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_gpuresControl_Epilogue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_gpuresCanCopy(struct GpuResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresIsDuplicate(struct GpuResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_gpuresPreDestruct(struct GpuResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresControlFilter(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_gpuresIsPartialUnmapSupported(struct GpuResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresMapTo(struct GpuResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresUnmapFrom(struct GpuResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_gpuresGetRefCount(struct GpuResource *pResource);    // super
void __nvoc_up_thunk_RsResource_gpuresAddAdditionalDependants(struct RsClient *pClient, struct GpuResource *pResource, RsResourceRef *pReference);    // super
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiControl(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiMap(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiUnmap(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_GpuResource_zbcapiShareCallback(struct ZbcApi *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiGetRegBaseOffsetAndSize(struct ZbcApi *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiGetMapAddrSpace(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiInternalControlForward(struct ZbcApi *pGpuResource, NvU32 command, void *pParams, NvU32 size);    // this
NvHandle __nvoc_up_thunk_GpuResource_zbcapiGetInternalObjectHandle(struct ZbcApi *pGpuResource);    // this
NvBool __nvoc_up_thunk_RmResource_zbcapiAccessCallback(struct ZbcApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiGetMemInterMapParams(struct ZbcApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiCheckMemInterUnmap(struct ZbcApi *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiGetMemoryMappingDescriptor(struct ZbcApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiControlSerialization_Prologue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_zbcapiControlSerialization_Epilogue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiControl_Prologue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_zbcapiControl_Epilogue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_zbcapiCanCopy(struct ZbcApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiIsDuplicate(struct ZbcApi *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_zbcapiPreDestruct(struct ZbcApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiControlFilter(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_zbcapiIsPartialUnmapSupported(struct ZbcApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiMapTo(struct ZbcApi *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiUnmapFrom(struct ZbcApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_zbcapiGetRefCount(struct ZbcApi *pResource);    // this
void __nvoc_up_thunk_RsResource_zbcapiAddAdditionalDependants(struct RsClient *pClient, struct ZbcApi *pResource, RsResourceRef *pReference);    // this

// 25 up-thunk(s) defined to bridge methods in ZbcApi to superclasses

// zbcapiControl: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiControl(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return gpuresControl((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), pCallContext, pParams);
}

// zbcapiMap: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiMap(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping) {
    return gpuresMap((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), pCallContext, pParams, pCpuMapping);
}

// zbcapiUnmap: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiUnmap(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping) {
    return gpuresUnmap((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), pCallContext, pCpuMapping);
}

// zbcapiShareCallback: virtual inherited (gpures) base (gpures)
NvBool __nvoc_up_thunk_GpuResource_zbcapiShareCallback(struct ZbcApi *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return gpuresShareCallback((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// zbcapiGetRegBaseOffsetAndSize: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiGetRegBaseOffsetAndSize(struct ZbcApi *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize) {
    return gpuresGetRegBaseOffsetAndSize((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), pGpu, pOffset, pSize);
}

// zbcapiGetMapAddrSpace: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiGetMapAddrSpace(struct ZbcApi *pGpuResource, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace) {
    return gpuresGetMapAddrSpace((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), pCallContext, mapFlags, pAddrSpace);
}

// zbcapiInternalControlForward: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_zbcapiInternalControlForward(struct ZbcApi *pGpuResource, NvU32 command, void *pParams, NvU32 size) {
    return gpuresInternalControlForward((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)), command, pParams, size);
}

// zbcapiGetInternalObjectHandle: virtual inherited (gpures) base (gpures)
NvHandle __nvoc_up_thunk_GpuResource_zbcapiGetInternalObjectHandle(struct ZbcApi *pGpuResource) {
    return gpuresGetInternalObjectHandle((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource)));
}

// zbcapiAccessCallback: virtual inherited (rmres) base (gpures)
NvBool __nvoc_up_thunk_RmResource_zbcapiAccessCallback(struct ZbcApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// zbcapiGetMemInterMapParams: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiGetMemInterMapParams(struct ZbcApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pParams);
}

// zbcapiCheckMemInterUnmap: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiCheckMemInterUnmap(struct ZbcApi *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// zbcapiGetMemoryMappingDescriptor: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiGetMemoryMappingDescriptor(struct ZbcApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), ppMemDesc);
}

// zbcapiControlSerialization_Prologue: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiControlSerialization_Prologue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// zbcapiControlSerialization_Epilogue: virtual inherited (rmres) base (gpures)
void __nvoc_up_thunk_RmResource_zbcapiControlSerialization_Epilogue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// zbcapiControl_Prologue: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_zbcapiControl_Prologue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// zbcapiControl_Epilogue: virtual inherited (rmres) base (gpures)
void __nvoc_up_thunk_RmResource_zbcapiControl_Epilogue(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// zbcapiCanCopy: virtual inherited (res) base (gpures)
NvBool __nvoc_up_thunk_RsResource_zbcapiCanCopy(struct ZbcApi *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// zbcapiIsDuplicate: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiIsDuplicate(struct ZbcApi *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// zbcapiPreDestruct: virtual inherited (res) base (gpures)
void __nvoc_up_thunk_RsResource_zbcapiPreDestruct(struct ZbcApi *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// zbcapiControlFilter: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiControlFilter(struct ZbcApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// zbcapiIsPartialUnmapSupported: inline virtual inherited (res) base (gpures) body
NvBool __nvoc_up_thunk_RsResource_zbcapiIsPartialUnmapSupported(struct ZbcApi *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// zbcapiMapTo: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiMapTo(struct ZbcApi *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// zbcapiUnmapFrom: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_zbcapiUnmapFrom(struct ZbcApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// zbcapiGetRefCount: virtual inherited (res) base (gpures)
NvU32 __nvoc_up_thunk_RsResource_zbcapiGetRefCount(struct ZbcApi *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// zbcapiAddAdditionalDependants: virtual inherited (res) base (gpures)
void __nvoc_up_thunk_RsResource_zbcapiAddAdditionalDependants(struct RsClient *pClient, struct ZbcApi *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(ZbcApi, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info_ZbcApi = 
{
    /*numEntries=*/     7,
    /*pExportEntries=*/ __nvoc_exported_method_def_ZbcApi
};

void __nvoc_dtor_GpuResource(GpuResource*);
void __nvoc_dtor_ZbcApi(ZbcApi *pThis) {
    __nvoc_zbcapiDestruct(pThis);
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_ZbcApi(ZbcApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    ChipHal *chipHal = &pRmhalspecowner->chipHal;
    const unsigned long chipHal_HalVarIdx = (unsigned long)chipHal->__nvoc_HalVarIdx;
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(chipHal);
    PORT_UNREFERENCED_VARIABLE(chipHal_HalVarIdx);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
}

NV_STATUS __nvoc_ctor_GpuResource(GpuResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_ZbcApi(ZbcApi *pThis, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_GpuResource(&pThis->__nvoc_base_GpuResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_ZbcApi_fail_GpuResource;
    __nvoc_init_dataField_ZbcApi(pThis, pRmhalspecowner);

    status = __nvoc_zbcapiConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_ZbcApi_fail__init;
    goto __nvoc_ctor_ZbcApi_exit; // Success

__nvoc_ctor_ZbcApi_fail__init:
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
__nvoc_ctor_ZbcApi_fail_GpuResource:
__nvoc_ctor_ZbcApi_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_ZbcApi_1(ZbcApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    ChipHal *chipHal = &pRmhalspecowner->chipHal;
    const unsigned long chipHal_HalVarIdx = (unsigned long)chipHal->__nvoc_HalVarIdx;
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(chipHal);
    PORT_UNREFERENCED_VARIABLE(chipHal_HalVarIdx);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);

    // zbcapiCtrlCmdSetZbcColorClear -- exported (id=0x90960101)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
    pThis->__zbcapiCtrlCmdSetZbcColorClear__ = &zbcapiCtrlCmdSetZbcColorClear_IMPL;
#endif

    // zbcapiCtrlCmdSetZbcDepthClear -- exported (id=0x90960102)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
    pThis->__zbcapiCtrlCmdSetZbcDepthClear__ = &zbcapiCtrlCmdSetZbcDepthClear_IMPL;
#endif

    // zbcapiCtrlCmdGetZbcClearTable -- exported (id=0x90960103)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
    pThis->__zbcapiCtrlCmdGetZbcClearTable__ = &zbcapiCtrlCmdGetZbcClearTable_IMPL;
#endif

    // zbcapiCtrlCmdSetZbcClearTable -- exported (id=0x90960104)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x48u)
    pThis->__zbcapiCtrlCmdSetZbcClearTable__ = &zbcapiCtrlCmdSetZbcClearTable_IMPL;
#endif

    // zbcapiCtrlCmdSetZbcStencilClear -- exported (id=0x90960105)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
    pThis->__zbcapiCtrlCmdSetZbcStencilClear__ = &zbcapiCtrlCmdSetZbcStencilClear_IMPL;
#endif

    // zbcapiCtrlCmdGetZbcClearTableSize -- halified (2 hals) exported (id=0x90960106) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__zbcapiCtrlCmdGetZbcClearTableSize__ = &zbcapiCtrlCmdGetZbcClearTableSize_VF;
    }
    else
    {
        pThis->__zbcapiCtrlCmdGetZbcClearTableSize__ = &zbcapiCtrlCmdGetZbcClearTableSize_5baef9;
    }

    // zbcapiCtrlCmdGetZbcClearTableEntry -- exported (id=0x90960107)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x248u)
    pThis->__zbcapiCtrlCmdGetZbcClearTableEntry__ = &zbcapiCtrlCmdGetZbcClearTableEntry_IMPL;
#endif
} // End __nvoc_init_funcTable_ZbcApi_1 with approximately 8 basic block(s).


// Initialize vtable(s) for 32 virtual method(s).
void __nvoc_init_funcTable_ZbcApi(ZbcApi *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Per-class vtable definition
    static const struct NVOC_VTABLE__ZbcApi vtable = {
        .__zbcapiControl__ = &__nvoc_up_thunk_GpuResource_zbcapiControl,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresControl__ = &gpuresControl_IMPL,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resControl__ = &__nvoc_down_thunk_GpuResource_resControl,    // virtual
        .__zbcapiMap__ = &__nvoc_up_thunk_GpuResource_zbcapiMap,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresMap__ = &gpuresMap_IMPL,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resMap__ = &__nvoc_down_thunk_GpuResource_resMap,    // virtual
        .__zbcapiUnmap__ = &__nvoc_up_thunk_GpuResource_zbcapiUnmap,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresUnmap__ = &gpuresUnmap_IMPL,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resUnmap__ = &__nvoc_down_thunk_GpuResource_resUnmap,    // virtual
        .__zbcapiShareCallback__ = &__nvoc_up_thunk_GpuResource_zbcapiShareCallback,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresShareCallback__ = &gpuresShareCallback_IMPL,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresShareCallback__ = &__nvoc_down_thunk_GpuResource_rmresShareCallback,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
        .__zbcapiGetRegBaseOffsetAndSize__ = &__nvoc_up_thunk_GpuResource_zbcapiGetRegBaseOffsetAndSize,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresGetRegBaseOffsetAndSize__ = &gpuresGetRegBaseOffsetAndSize_IMPL,    // virtual
        .__zbcapiGetMapAddrSpace__ = &__nvoc_up_thunk_GpuResource_zbcapiGetMapAddrSpace,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresGetMapAddrSpace__ = &gpuresGetMapAddrSpace_IMPL,    // virtual
        .__zbcapiInternalControlForward__ = &__nvoc_up_thunk_GpuResource_zbcapiInternalControlForward,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresInternalControlForward__ = &gpuresInternalControlForward_IMPL,    // virtual
        .__zbcapiGetInternalObjectHandle__ = &__nvoc_up_thunk_GpuResource_zbcapiGetInternalObjectHandle,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresGetInternalObjectHandle__ = &gpuresGetInternalObjectHandle_IMPL,    // virtual
        .__zbcapiAccessCallback__ = &__nvoc_up_thunk_RmResource_zbcapiAccessCallback,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresAccessCallback__ = &__nvoc_up_thunk_RmResource_gpuresAccessCallback,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
        .__zbcapiGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_zbcapiGetMemInterMapParams,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_gpuresGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
        .__zbcapiCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_zbcapiCheckMemInterUnmap,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_gpuresCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
        .__zbcapiGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_zbcapiGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_gpuresGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
        .__zbcapiControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_zbcapiControlSerialization_Prologue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_gpuresControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
        .__zbcapiControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_zbcapiControlSerialization_Epilogue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_gpuresControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
        .__zbcapiControl_Prologue__ = &__nvoc_up_thunk_RmResource_zbcapiControl_Prologue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControl_Prologue__ = &__nvoc_up_thunk_RmResource_gpuresControl_Prologue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControl_Prologue__ = &rmresControl_Prologue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
        .__zbcapiControl_Epilogue__ = &__nvoc_up_thunk_RmResource_zbcapiControl_Epilogue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControl_Epilogue__ = &__nvoc_up_thunk_RmResource_gpuresControl_Epilogue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControl_Epilogue__ = &rmresControl_Epilogue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
        .__zbcapiCanCopy__ = &__nvoc_up_thunk_RsResource_zbcapiCanCopy,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresCanCopy__ = &__nvoc_up_thunk_RsResource_gpuresCanCopy,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
        .__zbcapiIsDuplicate__ = &__nvoc_up_thunk_RsResource_zbcapiIsDuplicate,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresIsDuplicate__ = &__nvoc_up_thunk_RsResource_gpuresIsDuplicate,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
        .__zbcapiPreDestruct__ = &__nvoc_up_thunk_RsResource_zbcapiPreDestruct,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresPreDestruct__ = &__nvoc_up_thunk_RsResource_gpuresPreDestruct,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
        .__zbcapiControlFilter__ = &__nvoc_up_thunk_RsResource_zbcapiControlFilter,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresControlFilter__ = &__nvoc_up_thunk_RsResource_gpuresControlFilter,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
        .__zbcapiIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_zbcapiIsPartialUnmapSupported,    // inline virtual inherited (res) base (gpures) body
        .GpuResource.__gpuresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_gpuresIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
        .GpuResource.RmResource.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
        .GpuResource.RmResource.RsResource.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
        .__zbcapiMapTo__ = &__nvoc_up_thunk_RsResource_zbcapiMapTo,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresMapTo__ = &__nvoc_up_thunk_RsResource_gpuresMapTo,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resMapTo__ = &resMapTo_IMPL,    // virtual
        .__zbcapiUnmapFrom__ = &__nvoc_up_thunk_RsResource_zbcapiUnmapFrom,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresUnmapFrom__ = &__nvoc_up_thunk_RsResource_gpuresUnmapFrom,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
        .__zbcapiGetRefCount__ = &__nvoc_up_thunk_RsResource_zbcapiGetRefCount,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresGetRefCount__ = &__nvoc_up_thunk_RsResource_gpuresGetRefCount,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
        .__zbcapiAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_zbcapiAddAdditionalDependants,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_gpuresAddAdditionalDependants,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    };

    // Pointer(s) to per-class vtable(s)
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_vtable = &vtable.GpuResource.RmResource.RsResource;    // (res) super^3
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_vtable = &vtable.GpuResource.RmResource;    // (rmres) super^2
    pThis->__nvoc_base_GpuResource.__nvoc_vtable = &vtable.GpuResource;    // (gpures) super
    pThis->__nvoc_vtable = &vtable;    // (zbcapi) this

    // Initialize vtable(s) with 7 per-object function pointer(s).
    __nvoc_init_funcTable_ZbcApi_1(pThis, pRmhalspecowner);
}

void __nvoc_init_GpuResource(GpuResource*);
void __nvoc_init_ZbcApi(ZbcApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    pThis->__nvoc_pbase_ZbcApi = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource;
    pThis->__nvoc_pbase_GpuResource = &pThis->__nvoc_base_GpuResource;
    __nvoc_init_GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_init_funcTable_ZbcApi(pThis, pRmhalspecowner);
}

NV_STATUS __nvoc_objCreate_ZbcApi(ZbcApi **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    ZbcApi *pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(ZbcApi), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(ZbcApi));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_ZbcApi);

    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_ASSERT_OR_RETURN(pParent != NULL, NV_ERR_INVALID_ARGUMENT);

    // Link the child into the parent unless flagged not to do so.
    if (!(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    if ((pRmhalspecowner = dynamicCast(pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, pParent);
    NV_ASSERT_OR_RETURN(pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT);

    __nvoc_init_ZbcApi(pThis, pRmhalspecowner);
    status = __nvoc_ctor_ZbcApi(pThis, pRmhalspecowner, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_ZbcApi_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_ZbcApi_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(ZbcApi));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_ZbcApi(ZbcApi **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_ZbcApi(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}

