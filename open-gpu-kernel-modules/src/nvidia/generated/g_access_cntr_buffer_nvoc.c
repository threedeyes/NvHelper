#define NVOC_ACCESS_CNTR_BUFFER_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_access_cntr_buffer_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x1f0074 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_AccessCounterBuffer;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_GpuResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;

void __nvoc_init_AccessCounterBuffer(AccessCounterBuffer*);
void __nvoc_init_funcTable_AccessCounterBuffer(AccessCounterBuffer*);
NV_STATUS __nvoc_ctor_AccessCounterBuffer(AccessCounterBuffer*, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_AccessCounterBuffer(AccessCounterBuffer*);
void __nvoc_dtor_AccessCounterBuffer(AccessCounterBuffer*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_AccessCounterBuffer;

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_AccessCounterBuffer = {
    /*pClassDef=*/          &__nvoc_class_def_AccessCounterBuffer,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_AccessCounterBuffer,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource),
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_GpuResource = {
    /*pClassDef=*/          &__nvoc_class_def_GpuResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource),
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_INotifier = {
    /*pClassDef=*/          &__nvoc_class_def_INotifier,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier.__nvoc_base_INotifier),
};

static const struct NVOC_RTTI __nvoc_rtti_AccessCounterBuffer_Notifier = {
    /*pClassDef=*/          &__nvoc_class_def_Notifier,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_AccessCounterBuffer = {
    /*numRelatives=*/       8,
    /*relatives=*/ {
        &__nvoc_rtti_AccessCounterBuffer_AccessCounterBuffer,
        &__nvoc_rtti_AccessCounterBuffer_Notifier,
        &__nvoc_rtti_AccessCounterBuffer_INotifier,
        &__nvoc_rtti_AccessCounterBuffer_GpuResource,
        &__nvoc_rtti_AccessCounterBuffer_RmResource,
        &__nvoc_rtti_AccessCounterBuffer_RmResourceCommon,
        &__nvoc_rtti_AccessCounterBuffer_RsResource,
        &__nvoc_rtti_AccessCounterBuffer_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_AccessCounterBuffer = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(AccessCounterBuffer),
        /*classId=*/            classId(AccessCounterBuffer),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "AccessCounterBuffer",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_AccessCounterBuffer,
    /*pCastInfo=*/          &__nvoc_castinfo_AccessCounterBuffer,
    /*pExportInfo=*/        &__nvoc_export_info_AccessCounterBuffer
};

#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_AccessCounterBuffer[] = 
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferReadGet_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650101u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_READ_GET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferReadGet"
#endif
    },
    {               /*  [1] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferWriteGet_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650102u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_WRITE_GET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferWriteGet"
#endif
    },
    {               /*  [2] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferReadPut_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650103u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_READ_PUT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferReadPut"
#endif
    },
    {               /*  [3] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferEnable_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650104u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_ENABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferEnable"
#endif
    },
    {               /*  [4] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferGetSize_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650105u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_GET_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferGetSize"
#endif
    },
    {               /*  [5] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferGetRegisterMappings_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650106u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_GET_REGISTER_MAPPINGS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferGetRegisterMappings"
#endif
    },
    {               /*  [6] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferGetFullInfo_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650107u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_GET_FULL_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferGetFullInfo"
#endif
    },
    {               /*  [7] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferResetCounters_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40u)
        /*flags=*/      0x40u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650108u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_RESET_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferResetCounters"
#endif
    },
    {               /*  [8] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrSetConfig_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc3650109u,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_SET_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrSetConfig"
#endif
    },
    {               /*  [9] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) accesscntrCtrlCmdAccessCntrBufferEnableIntr_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc365010bu,
        /*paramSize=*/  sizeof(NVC365_CTRL_ACCESS_CNTR_BUFFER_ENABLE_INTR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_AccessCounterBuffer.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "accesscntrCtrlCmdAccessCntrBufferEnableIntr"
#endif
    },

};

// Down-thunk(s) to bridge AccessCounterBuffer methods from ancestors (if any)
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
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
NV_STATUS __nvoc_down_thunk_AccessCounterBuffer_gpuresMap(struct GpuResource *pAccessCounterBuffer, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_down_thunk_AccessCounterBuffer_gpuresUnmap(struct GpuResource *pAccessCounterBuffer, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_down_thunk_AccessCounterBuffer_gpuresGetMapAddrSpace(struct GpuResource *pAccessCounterBuffer, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace);    // this

// 3 down-thunk(s) defined to bridge methods in AccessCounterBuffer from superclasses

// accesscntrMap: virtual override (res) base (gpures)
NV_STATUS __nvoc_down_thunk_AccessCounterBuffer_gpuresMap(struct GpuResource *pAccessCounterBuffer, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping) {
    return accesscntrMap((struct AccessCounterBuffer *)(((unsigned char *) pAccessCounterBuffer) - NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), pCallContext, pParams, pCpuMapping);
}

// accesscntrUnmap: virtual override (res) base (gpures)
NV_STATUS __nvoc_down_thunk_AccessCounterBuffer_gpuresUnmap(struct GpuResource *pAccessCounterBuffer, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping) {
    return accesscntrUnmap((struct AccessCounterBuffer *)(((unsigned char *) pAccessCounterBuffer) - NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), pCallContext, pCpuMapping);
}

// accesscntrGetMapAddrSpace: virtual override (gpures) base (gpures)
NV_STATUS __nvoc_down_thunk_AccessCounterBuffer_gpuresGetMapAddrSpace(struct GpuResource *pAccessCounterBuffer, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace) {
    return accesscntrGetMapAddrSpace((struct AccessCounterBuffer *)(((unsigned char *) pAccessCounterBuffer) - NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), pCallContext, mapFlags, pAddrSpace);
}


// Up-thunk(s) to bridge AccessCounterBuffer methods to ancestors (if any)
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
NV_STATUS __nvoc_up_thunk_GpuResource_accesscntrControl(struct AccessCounterBuffer *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_GpuResource_accesscntrShareCallback(struct AccessCounterBuffer *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_accesscntrGetRegBaseOffsetAndSize(struct AccessCounterBuffer *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_accesscntrInternalControlForward(struct AccessCounterBuffer *pGpuResource, NvU32 command, void *pParams, NvU32 size);    // this
NvHandle __nvoc_up_thunk_GpuResource_accesscntrGetInternalObjectHandle(struct AccessCounterBuffer *pGpuResource);    // this
NvBool __nvoc_up_thunk_RmResource_accesscntrAccessCallback(struct AccessCounterBuffer *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrGetMemInterMapParams(struct AccessCounterBuffer *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrCheckMemInterUnmap(struct AccessCounterBuffer *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrGetMemoryMappingDescriptor(struct AccessCounterBuffer *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrControlSerialization_Prologue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_accesscntrControlSerialization_Epilogue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrControl_Prologue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_accesscntrControl_Epilogue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_accesscntrCanCopy(struct AccessCounterBuffer *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrIsDuplicate(struct AccessCounterBuffer *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_accesscntrPreDestruct(struct AccessCounterBuffer *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrControlFilter(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_accesscntrIsPartialUnmapSupported(struct AccessCounterBuffer *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrMapTo(struct AccessCounterBuffer *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrUnmapFrom(struct AccessCounterBuffer *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_accesscntrGetRefCount(struct AccessCounterBuffer *pResource);    // this
void __nvoc_up_thunk_RsResource_accesscntrAddAdditionalDependants(struct RsClient *pClient, struct AccessCounterBuffer *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_accesscntrGetNotificationListPtr(struct AccessCounterBuffer *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_accesscntrGetNotificationShare(struct AccessCounterBuffer *pNotifier);    // this
void __nvoc_up_thunk_Notifier_accesscntrSetNotificationShare(struct AccessCounterBuffer *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_accesscntrUnregisterEvent(struct AccessCounterBuffer *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_accesscntrGetOrAllocNotifShare(struct AccessCounterBuffer *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// 27 up-thunk(s) defined to bridge methods in AccessCounterBuffer to superclasses

// accesscntrControl: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_accesscntrControl(struct AccessCounterBuffer *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return gpuresControl((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), pCallContext, pParams);
}

// accesscntrShareCallback: virtual inherited (gpures) base (gpures)
NvBool __nvoc_up_thunk_GpuResource_accesscntrShareCallback(struct AccessCounterBuffer *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return gpuresShareCallback((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// accesscntrGetRegBaseOffsetAndSize: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_accesscntrGetRegBaseOffsetAndSize(struct AccessCounterBuffer *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize) {
    return gpuresGetRegBaseOffsetAndSize((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), pGpu, pOffset, pSize);
}

// accesscntrInternalControlForward: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_accesscntrInternalControlForward(struct AccessCounterBuffer *pGpuResource, NvU32 command, void *pParams, NvU32 size) {
    return gpuresInternalControlForward((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)), command, pParams, size);
}

// accesscntrGetInternalObjectHandle: virtual inherited (gpures) base (gpures)
NvHandle __nvoc_up_thunk_GpuResource_accesscntrGetInternalObjectHandle(struct AccessCounterBuffer *pGpuResource) {
    return gpuresGetInternalObjectHandle((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource)));
}

// accesscntrAccessCallback: virtual inherited (rmres) base (gpures)
NvBool __nvoc_up_thunk_RmResource_accesscntrAccessCallback(struct AccessCounterBuffer *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// accesscntrGetMemInterMapParams: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrGetMemInterMapParams(struct AccessCounterBuffer *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pParams);
}

// accesscntrCheckMemInterUnmap: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrCheckMemInterUnmap(struct AccessCounterBuffer *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// accesscntrGetMemoryMappingDescriptor: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrGetMemoryMappingDescriptor(struct AccessCounterBuffer *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), ppMemDesc);
}

// accesscntrControlSerialization_Prologue: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrControlSerialization_Prologue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// accesscntrControlSerialization_Epilogue: virtual inherited (rmres) base (gpures)
void __nvoc_up_thunk_RmResource_accesscntrControlSerialization_Epilogue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// accesscntrControl_Prologue: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_accesscntrControl_Prologue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// accesscntrControl_Epilogue: virtual inherited (rmres) base (gpures)
void __nvoc_up_thunk_RmResource_accesscntrControl_Epilogue(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// accesscntrCanCopy: virtual inherited (res) base (gpures)
NvBool __nvoc_up_thunk_RsResource_accesscntrCanCopy(struct AccessCounterBuffer *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// accesscntrIsDuplicate: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrIsDuplicate(struct AccessCounterBuffer *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// accesscntrPreDestruct: virtual inherited (res) base (gpures)
void __nvoc_up_thunk_RsResource_accesscntrPreDestruct(struct AccessCounterBuffer *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// accesscntrControlFilter: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrControlFilter(struct AccessCounterBuffer *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// accesscntrIsPartialUnmapSupported: inline virtual inherited (res) base (gpures) body
NvBool __nvoc_up_thunk_RsResource_accesscntrIsPartialUnmapSupported(struct AccessCounterBuffer *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// accesscntrMapTo: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrMapTo(struct AccessCounterBuffer *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// accesscntrUnmapFrom: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_accesscntrUnmapFrom(struct AccessCounterBuffer *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// accesscntrGetRefCount: virtual inherited (res) base (gpures)
NvU32 __nvoc_up_thunk_RsResource_accesscntrGetRefCount(struct AccessCounterBuffer *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// accesscntrAddAdditionalDependants: virtual inherited (res) base (gpures)
void __nvoc_up_thunk_RsResource_accesscntrAddAdditionalDependants(struct RsClient *pClient, struct AccessCounterBuffer *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}

// accesscntrGetNotificationListPtr: virtual inherited (notify) base (notify)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_accesscntrGetNotificationListPtr(struct AccessCounterBuffer *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier)));
}

// accesscntrGetNotificationShare: virtual inherited (notify) base (notify)
struct NotifShare * __nvoc_up_thunk_Notifier_accesscntrGetNotificationShare(struct AccessCounterBuffer *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier)));
}

// accesscntrSetNotificationShare: virtual inherited (notify) base (notify)
void __nvoc_up_thunk_Notifier_accesscntrSetNotificationShare(struct AccessCounterBuffer *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier)), pNotifShare);
}

// accesscntrUnregisterEvent: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_accesscntrUnregisterEvent(struct AccessCounterBuffer *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// accesscntrGetOrAllocNotifShare: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_accesscntrGetOrAllocNotifShare(struct AccessCounterBuffer *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(AccessCounterBuffer, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info_AccessCounterBuffer = 
{
    /*numEntries=*/     10,
    /*pExportEntries=*/ __nvoc_exported_method_def_AccessCounterBuffer
};

void __nvoc_dtor_GpuResource(GpuResource*);
void __nvoc_dtor_Notifier(Notifier*);
void __nvoc_dtor_AccessCounterBuffer(AccessCounterBuffer *pThis) {
    __nvoc_accesscntrDestruct(pThis);
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_dtor_Notifier(&pThis->__nvoc_base_Notifier);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_AccessCounterBuffer(AccessCounterBuffer *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_GpuResource(GpuResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_Notifier(Notifier* , struct CALL_CONTEXT *);
NV_STATUS __nvoc_ctor_AccessCounterBuffer(AccessCounterBuffer *pThis, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_GpuResource(&pThis->__nvoc_base_GpuResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_AccessCounterBuffer_fail_GpuResource;
    status = __nvoc_ctor_Notifier(&pThis->__nvoc_base_Notifier, arg_pCallContext);
    if (status != NV_OK) goto __nvoc_ctor_AccessCounterBuffer_fail_Notifier;
    __nvoc_init_dataField_AccessCounterBuffer(pThis);

    status = __nvoc_accesscntrConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_AccessCounterBuffer_fail__init;
    goto __nvoc_ctor_AccessCounterBuffer_exit; // Success

__nvoc_ctor_AccessCounterBuffer_fail__init:
    __nvoc_dtor_Notifier(&pThis->__nvoc_base_Notifier);
__nvoc_ctor_AccessCounterBuffer_fail_Notifier:
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
__nvoc_ctor_AccessCounterBuffer_fail_GpuResource:
__nvoc_ctor_AccessCounterBuffer_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_AccessCounterBuffer_1(AccessCounterBuffer *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);

    // accesscntrCtrlCmdAccessCntrBufferReadGet -- exported (id=0xc3650101)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferReadGet__ = &accesscntrCtrlCmdAccessCntrBufferReadGet_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferReadPut -- exported (id=0xc3650103)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferReadPut__ = &accesscntrCtrlCmdAccessCntrBufferReadPut_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferWriteGet -- exported (id=0xc3650102)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferWriteGet__ = &accesscntrCtrlCmdAccessCntrBufferWriteGet_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferEnable -- exported (id=0xc3650104)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferEnable__ = &accesscntrCtrlCmdAccessCntrBufferEnable_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferGetSize -- exported (id=0xc3650105)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferGetSize__ = &accesscntrCtrlCmdAccessCntrBufferGetSize_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferGetRegisterMappings -- exported (id=0xc3650106)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferGetRegisterMappings__ = &accesscntrCtrlCmdAccessCntrBufferGetRegisterMappings_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferGetFullInfo -- exported (id=0xc3650107)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferGetFullInfo__ = &accesscntrCtrlCmdAccessCntrBufferGetFullInfo_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferResetCounters -- exported (id=0xc3650108)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferResetCounters__ = &accesscntrCtrlCmdAccessCntrBufferResetCounters_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrSetConfig -- exported (id=0xc3650109)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrSetConfig__ = &accesscntrCtrlCmdAccessCntrSetConfig_IMPL;
#endif

    // accesscntrCtrlCmdAccessCntrBufferEnableIntr -- exported (id=0xc365010b)
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__accesscntrCtrlCmdAccessCntrBufferEnableIntr__ = &accesscntrCtrlCmdAccessCntrBufferEnableIntr_IMPL;
#endif
} // End __nvoc_init_funcTable_AccessCounterBuffer_1 with approximately 10 basic block(s).


// Initialize vtable(s) for 40 virtual method(s).
void __nvoc_init_funcTable_AccessCounterBuffer(AccessCounterBuffer *pThis) {

    // Per-class vtable definition
    static const struct NVOC_VTABLE__AccessCounterBuffer vtable = {
        .__accesscntrMap__ = &accesscntrMap_IMPL,    // virtual override (res) base (gpures)
        .GpuResource.__gpuresMap__ = &__nvoc_down_thunk_AccessCounterBuffer_gpuresMap,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resMap__ = &__nvoc_down_thunk_GpuResource_resMap,    // virtual
        .__accesscntrUnmap__ = &accesscntrUnmap_IMPL,    // virtual override (res) base (gpures)
        .GpuResource.__gpuresUnmap__ = &__nvoc_down_thunk_AccessCounterBuffer_gpuresUnmap,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resUnmap__ = &__nvoc_down_thunk_GpuResource_resUnmap,    // virtual
        .__accesscntrGetMapAddrSpace__ = &accesscntrGetMapAddrSpace_IMPL,    // virtual override (gpures) base (gpures)
        .GpuResource.__gpuresGetMapAddrSpace__ = &__nvoc_down_thunk_AccessCounterBuffer_gpuresGetMapAddrSpace,    // virtual
        .__accesscntrControl__ = &__nvoc_up_thunk_GpuResource_accesscntrControl,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresControl__ = &gpuresControl_IMPL,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resControl__ = &__nvoc_down_thunk_GpuResource_resControl,    // virtual
        .__accesscntrShareCallback__ = &__nvoc_up_thunk_GpuResource_accesscntrShareCallback,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresShareCallback__ = &gpuresShareCallback_IMPL,    // virtual override (res) base (rmres)
        .GpuResource.RmResource.__rmresShareCallback__ = &__nvoc_down_thunk_GpuResource_rmresShareCallback,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
        .__accesscntrGetRegBaseOffsetAndSize__ = &__nvoc_up_thunk_GpuResource_accesscntrGetRegBaseOffsetAndSize,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresGetRegBaseOffsetAndSize__ = &gpuresGetRegBaseOffsetAndSize_IMPL,    // virtual
        .__accesscntrInternalControlForward__ = &__nvoc_up_thunk_GpuResource_accesscntrInternalControlForward,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresInternalControlForward__ = &gpuresInternalControlForward_IMPL,    // virtual
        .__accesscntrGetInternalObjectHandle__ = &__nvoc_up_thunk_GpuResource_accesscntrGetInternalObjectHandle,    // virtual inherited (gpures) base (gpures)
        .GpuResource.__gpuresGetInternalObjectHandle__ = &gpuresGetInternalObjectHandle_IMPL,    // virtual
        .__accesscntrAccessCallback__ = &__nvoc_up_thunk_RmResource_accesscntrAccessCallback,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresAccessCallback__ = &__nvoc_up_thunk_RmResource_gpuresAccessCallback,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
        .__accesscntrGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_accesscntrGetMemInterMapParams,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_gpuresGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
        .__accesscntrCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_accesscntrCheckMemInterUnmap,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_gpuresCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
        .__accesscntrGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_accesscntrGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_gpuresGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
        .__accesscntrControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_accesscntrControlSerialization_Prologue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_gpuresControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
        .__accesscntrControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_accesscntrControlSerialization_Epilogue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_gpuresControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
        .__accesscntrControl_Prologue__ = &__nvoc_up_thunk_RmResource_accesscntrControl_Prologue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControl_Prologue__ = &__nvoc_up_thunk_RmResource_gpuresControl_Prologue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControl_Prologue__ = &rmresControl_Prologue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
        .__accesscntrControl_Epilogue__ = &__nvoc_up_thunk_RmResource_accesscntrControl_Epilogue,    // virtual inherited (rmres) base (gpures)
        .GpuResource.__gpuresControl_Epilogue__ = &__nvoc_up_thunk_RmResource_gpuresControl_Epilogue,    // virtual inherited (rmres) base (rmres)
        .GpuResource.RmResource.__rmresControl_Epilogue__ = &rmresControl_Epilogue_IMPL,    // virtual override (res) base (res)
        .GpuResource.RmResource.RsResource.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
        .__accesscntrCanCopy__ = &__nvoc_up_thunk_RsResource_accesscntrCanCopy,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresCanCopy__ = &__nvoc_up_thunk_RsResource_gpuresCanCopy,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
        .__accesscntrIsDuplicate__ = &__nvoc_up_thunk_RsResource_accesscntrIsDuplicate,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresIsDuplicate__ = &__nvoc_up_thunk_RsResource_gpuresIsDuplicate,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
        .__accesscntrPreDestruct__ = &__nvoc_up_thunk_RsResource_accesscntrPreDestruct,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresPreDestruct__ = &__nvoc_up_thunk_RsResource_gpuresPreDestruct,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
        .__accesscntrControlFilter__ = &__nvoc_up_thunk_RsResource_accesscntrControlFilter,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresControlFilter__ = &__nvoc_up_thunk_RsResource_gpuresControlFilter,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
        .__accesscntrIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_accesscntrIsPartialUnmapSupported,    // inline virtual inherited (res) base (gpures) body
        .GpuResource.__gpuresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_gpuresIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
        .GpuResource.RmResource.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
        .GpuResource.RmResource.RsResource.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
        .__accesscntrMapTo__ = &__nvoc_up_thunk_RsResource_accesscntrMapTo,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresMapTo__ = &__nvoc_up_thunk_RsResource_gpuresMapTo,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resMapTo__ = &resMapTo_IMPL,    // virtual
        .__accesscntrUnmapFrom__ = &__nvoc_up_thunk_RsResource_accesscntrUnmapFrom,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresUnmapFrom__ = &__nvoc_up_thunk_RsResource_gpuresUnmapFrom,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
        .__accesscntrGetRefCount__ = &__nvoc_up_thunk_RsResource_accesscntrGetRefCount,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresGetRefCount__ = &__nvoc_up_thunk_RsResource_gpuresGetRefCount,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
        .__accesscntrAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_accesscntrAddAdditionalDependants,    // virtual inherited (res) base (gpures)
        .GpuResource.__gpuresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_gpuresAddAdditionalDependants,    // virtual inherited (res) base (rmres)
        .GpuResource.RmResource.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
        .GpuResource.RmResource.RsResource.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
        .__accesscntrGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_accesscntrGetNotificationListPtr,    // virtual inherited (notify) base (notify)
        .Notifier.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
        .Notifier.INotifier.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
        .__accesscntrGetNotificationShare__ = &__nvoc_up_thunk_Notifier_accesscntrGetNotificationShare,    // virtual inherited (notify) base (notify)
        .Notifier.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
        .Notifier.INotifier.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
        .__accesscntrSetNotificationShare__ = &__nvoc_up_thunk_Notifier_accesscntrSetNotificationShare,    // virtual inherited (notify) base (notify)
        .Notifier.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
        .Notifier.INotifier.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
        .__accesscntrUnregisterEvent__ = &__nvoc_up_thunk_Notifier_accesscntrUnregisterEvent,    // virtual inherited (notify) base (notify)
        .Notifier.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
        .Notifier.INotifier.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
        .__accesscntrGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_accesscntrGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
        .Notifier.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
        .Notifier.INotifier.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
    };

    // Pointer(s) to per-class vtable(s)
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_vtable = &vtable.GpuResource.RmResource.RsResource;    // (res) super^3
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_vtable = &vtable.GpuResource.RmResource;    // (rmres) super^2
    pThis->__nvoc_base_GpuResource.__nvoc_vtable = &vtable.GpuResource;    // (gpures) super
    pThis->__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_vtable = &vtable.Notifier.INotifier;    // (inotify) super^2
    pThis->__nvoc_base_Notifier.__nvoc_vtable = &vtable.Notifier;    // (notify) super
    pThis->__nvoc_vtable = &vtable;    // (accesscntr) this

    // Initialize vtable(s) with 10 per-object function pointer(s).
    __nvoc_init_funcTable_AccessCounterBuffer_1(pThis);
}

void __nvoc_init_GpuResource(GpuResource*);
void __nvoc_init_Notifier(Notifier*);
void __nvoc_init_AccessCounterBuffer(AccessCounterBuffer *pThis) {
    pThis->__nvoc_pbase_AccessCounterBuffer = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource;
    pThis->__nvoc_pbase_GpuResource = &pThis->__nvoc_base_GpuResource;
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_Notifier.__nvoc_base_INotifier;
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_Notifier;
    __nvoc_init_GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_init_Notifier(&pThis->__nvoc_base_Notifier);
    __nvoc_init_funcTable_AccessCounterBuffer(pThis);
}

NV_STATUS __nvoc_objCreate_AccessCounterBuffer(AccessCounterBuffer **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    AccessCounterBuffer *pThis;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(AccessCounterBuffer), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(AccessCounterBuffer));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_AccessCounterBuffer);

    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_AccessCounterBuffer(pThis);
    status = __nvoc_ctor_AccessCounterBuffer(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_AccessCounterBuffer_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_AccessCounterBuffer_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(AccessCounterBuffer));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_AccessCounterBuffer(AccessCounterBuffer **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_AccessCounterBuffer(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}

