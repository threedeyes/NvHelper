#define NVOC_FLA_MEM_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_fla_mem_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0xe61ee1 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_FlaMemory;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Memory;

void __nvoc_init_FlaMemory(FlaMemory*);
void __nvoc_init_funcTable_FlaMemory(FlaMemory*);
NV_STATUS __nvoc_ctor_FlaMemory(FlaMemory*, CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_FlaMemory(FlaMemory*);
void __nvoc_dtor_FlaMemory(FlaMemory*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_FlaMemory;

static const struct NVOC_RTTI __nvoc_rtti_FlaMemory_FlaMemory = {
    /*pClassDef=*/          &__nvoc_class_def_FlaMemory,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_FlaMemory,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_FlaMemory_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_FlaMemory_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_FlaMemory_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_FlaMemory_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource),
};

static const struct NVOC_RTTI __nvoc_rtti_FlaMemory_Memory = {
    /*pClassDef=*/          &__nvoc_class_def_Memory,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FlaMemory, __nvoc_base_Memory),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_FlaMemory = {
    /*numRelatives=*/       6,
    /*relatives=*/ {
        &__nvoc_rtti_FlaMemory_FlaMemory,
        &__nvoc_rtti_FlaMemory_Memory,
        &__nvoc_rtti_FlaMemory_RmResource,
        &__nvoc_rtti_FlaMemory_RmResourceCommon,
        &__nvoc_rtti_FlaMemory_RsResource,
        &__nvoc_rtti_FlaMemory_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_FlaMemory = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(FlaMemory),
        /*classId=*/            classId(FlaMemory),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "FlaMemory",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_FlaMemory,
    /*pCastInfo=*/          &__nvoc_castinfo_FlaMemory,
    /*pExportInfo=*/        &__nvoc_export_info_FlaMemory
};

// Down-thunk(s) to bridge FlaMemory methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super^2
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_Memory_resIsDuplicate(struct RsResource *pMemory, NvHandle hMemory, NvBool *pDuplicate);    // super
NV_STATUS __nvoc_down_thunk_Memory_resControl(struct RsResource *pMemory, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_Memory_resMap(struct RsResource *pMemory, CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_down_thunk_Memory_resUnmap(struct RsResource *pMemory, CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_down_thunk_Memory_rmresGetMemInterMapParams(struct RmResource *pMemory, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // super
NV_STATUS __nvoc_down_thunk_Memory_rmresCheckMemInterUnmap(struct RmResource *pMemory, NvBool bSubdeviceHandleProvided);    // super
NV_STATUS __nvoc_down_thunk_Memory_rmresGetMemoryMappingDescriptor(struct RmResource *pMemory, MEMORY_DESCRIPTOR **ppMemDesc);    // super
NvBool __nvoc_down_thunk_FlaMemory_resCanCopy(struct RsResource *pFlaMemory);    // this

// 1 down-thunk(s) defined to bridge methods in FlaMemory from superclasses

// flamemCanCopy: virtual override (res) base (mem)
NvBool __nvoc_down_thunk_FlaMemory_resCanCopy(struct RsResource *pFlaMemory) {
    return flamemCanCopy((struct FlaMemory *)(((unsigned char *) pFlaMemory) - NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}


// Up-thunk(s) to bridge FlaMemory methods to ancestors (if any)
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
NvBool __nvoc_up_thunk_RmResource_memAccessCallback(struct Memory *pResource, RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_up_thunk_RmResource_memShareCallback(struct Memory *pResource, RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
NV_STATUS __nvoc_up_thunk_RmResource_memControlSerialization_Prologue(struct Memory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_memControlSerialization_Epilogue(struct Memory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_memControl_Prologue(struct Memory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_memControl_Epilogue(struct Memory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_memCanCopy(struct Memory *pResource);    // super
void __nvoc_up_thunk_RsResource_memPreDestruct(struct Memory *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_memControlFilter(struct Memory *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_memIsPartialUnmapSupported(struct Memory *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_memMapTo(struct Memory *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_memUnmapFrom(struct Memory *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_memGetRefCount(struct Memory *pResource);    // super
void __nvoc_up_thunk_RsResource_memAddAdditionalDependants(struct RsClient *pClient, struct Memory *pResource, RsResourceRef *pReference);    // super
NV_STATUS __nvoc_up_thunk_Memory_flamemIsDuplicate(struct FlaMemory *pMemory, NvHandle hMemory, NvBool *pDuplicate);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemGetMapAddrSpace(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemControl(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemMap(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemUnmap(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemGetMemInterMapParams(struct FlaMemory *pMemory, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemCheckMemInterUnmap(struct FlaMemory *pMemory, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemGetMemoryMappingDescriptor(struct FlaMemory *pMemory, MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemCheckCopyPermissions(struct FlaMemory *pMemory, struct OBJGPU *pDstGpu, struct Device *pDstDevice);    // this
NV_STATUS __nvoc_up_thunk_Memory_flamemIsReady(struct FlaMemory *pMemory, NvBool bCopyConstructorContext);    // this
NvBool __nvoc_up_thunk_Memory_flamemIsGpuMapAllowed(struct FlaMemory *pMemory, struct OBJGPU *pGpu);    // this
NvBool __nvoc_up_thunk_Memory_flamemIsExportAllowed(struct FlaMemory *pMemory);    // this
NvBool __nvoc_up_thunk_RmResource_flamemAccessCallback(struct FlaMemory *pResource, RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_up_thunk_RmResource_flamemShareCallback(struct FlaMemory *pResource, RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_RmResource_flamemControlSerialization_Prologue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_flamemControlSerialization_Epilogue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_flamemControl_Prologue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_flamemControl_Epilogue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RsResource_flamemPreDestruct(struct FlaMemory *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_flamemControlFilter(struct FlaMemory *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_flamemIsPartialUnmapSupported(struct FlaMemory *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_flamemMapTo(struct FlaMemory *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_flamemUnmapFrom(struct FlaMemory *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_flamemGetRefCount(struct FlaMemory *pResource);    // this
void __nvoc_up_thunk_RsResource_flamemAddAdditionalDependants(struct RsClient *pClient, struct FlaMemory *pResource, RsResourceRef *pReference);    // this

// 25 up-thunk(s) defined to bridge methods in FlaMemory to superclasses

// flamemIsDuplicate: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemIsDuplicate(struct FlaMemory *pMemory, NvHandle hMemory, NvBool *pDuplicate) {
    return memIsDuplicate((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), hMemory, pDuplicate);
}

// flamemGetMapAddrSpace: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemGetMapAddrSpace(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace) {
    return memGetMapAddrSpace((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pCallContext, mapFlags, pAddrSpace);
}

// flamemControl: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemControl(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return memControl((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pCallContext, pParams);
}

// flamemMap: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemMap(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return memMap((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pCallContext, pParams, pCpuMapping);
}

// flamemUnmap: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemUnmap(struct FlaMemory *pMemory, CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return memUnmap((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pCallContext, pCpuMapping);
}

// flamemGetMemInterMapParams: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemGetMemInterMapParams(struct FlaMemory *pMemory, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return memGetMemInterMapParams((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pParams);
}

// flamemCheckMemInterUnmap: inline virtual inherited (mem) base (mem) body
NV_STATUS __nvoc_up_thunk_Memory_flamemCheckMemInterUnmap(struct FlaMemory *pMemory, NvBool bSubdeviceHandleProvided) {
    return memCheckMemInterUnmap((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), bSubdeviceHandleProvided);
}

// flamemGetMemoryMappingDescriptor: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemGetMemoryMappingDescriptor(struct FlaMemory *pMemory, MEMORY_DESCRIPTOR **ppMemDesc) {
    return memGetMemoryMappingDescriptor((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), ppMemDesc);
}

// flamemCheckCopyPermissions: inline virtual inherited (mem) base (mem) body
NV_STATUS __nvoc_up_thunk_Memory_flamemCheckCopyPermissions(struct FlaMemory *pMemory, struct OBJGPU *pDstGpu, struct Device *pDstDevice) {
    return memCheckCopyPermissions((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pDstGpu, pDstDevice);
}

// flamemIsReady: virtual inherited (mem) base (mem)
NV_STATUS __nvoc_up_thunk_Memory_flamemIsReady(struct FlaMemory *pMemory, NvBool bCopyConstructorContext) {
    return memIsReady((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), bCopyConstructorContext);
}

// flamemIsGpuMapAllowed: inline virtual inherited (mem) base (mem) body
NvBool __nvoc_up_thunk_Memory_flamemIsGpuMapAllowed(struct FlaMemory *pMemory, struct OBJGPU *pGpu) {
    return memIsGpuMapAllowed((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)), pGpu);
}

// flamemIsExportAllowed: inline virtual inherited (mem) base (mem) body
NvBool __nvoc_up_thunk_Memory_flamemIsExportAllowed(struct FlaMemory *pMemory) {
    return memIsExportAllowed((struct Memory *)(((unsigned char *) pMemory) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory)));
}

// flamemAccessCallback: virtual inherited (rmres) base (mem)
NvBool __nvoc_up_thunk_RmResource_flamemAccessCallback(struct FlaMemory *pResource, RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// flamemShareCallback: virtual inherited (rmres) base (mem)
NvBool __nvoc_up_thunk_RmResource_flamemShareCallback(struct FlaMemory *pResource, RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// flamemControlSerialization_Prologue: virtual inherited (rmres) base (mem)
NV_STATUS __nvoc_up_thunk_RmResource_flamemControlSerialization_Prologue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource)), pCallContext, pParams);
}

// flamemControlSerialization_Epilogue: virtual inherited (rmres) base (mem)
void __nvoc_up_thunk_RmResource_flamemControlSerialization_Epilogue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource)), pCallContext, pParams);
}

// flamemControl_Prologue: virtual inherited (rmres) base (mem)
NV_STATUS __nvoc_up_thunk_RmResource_flamemControl_Prologue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource)), pCallContext, pParams);
}

// flamemControl_Epilogue: virtual inherited (rmres) base (mem)
void __nvoc_up_thunk_RmResource_flamemControl_Epilogue(struct FlaMemory *pResource, CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource)), pCallContext, pParams);
}

// flamemPreDestruct: virtual inherited (res) base (mem)
void __nvoc_up_thunk_RsResource_flamemPreDestruct(struct FlaMemory *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// flamemControlFilter: virtual inherited (res) base (mem)
NV_STATUS __nvoc_up_thunk_RsResource_flamemControlFilter(struct FlaMemory *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// flamemIsPartialUnmapSupported: inline virtual inherited (res) base (mem) body
NvBool __nvoc_up_thunk_RsResource_flamemIsPartialUnmapSupported(struct FlaMemory *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// flamemMapTo: virtual inherited (res) base (mem)
NV_STATUS __nvoc_up_thunk_RsResource_flamemMapTo(struct FlaMemory *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// flamemUnmapFrom: virtual inherited (res) base (mem)
NV_STATUS __nvoc_up_thunk_RsResource_flamemUnmapFrom(struct FlaMemory *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// flamemGetRefCount: virtual inherited (res) base (mem)
NvU32 __nvoc_up_thunk_RsResource_flamemGetRefCount(struct FlaMemory *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// flamemAddAdditionalDependants: virtual inherited (res) base (mem)
void __nvoc_up_thunk_RsResource_flamemAddAdditionalDependants(struct RsClient *pClient, struct FlaMemory *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(FlaMemory, __nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info_FlaMemory = 
{
    /*numEntries=*/     0,
    /*pExportEntries=*/  0
};

void __nvoc_dtor_Memory(Memory*);
void __nvoc_dtor_FlaMemory(FlaMemory *pThis) {
    __nvoc_flamemDestruct(pThis);
    __nvoc_dtor_Memory(&pThis->__nvoc_base_Memory);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_FlaMemory(FlaMemory *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_Memory(Memory* , CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_FlaMemory(FlaMemory *pThis, CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_Memory(&pThis->__nvoc_base_Memory, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_FlaMemory_fail_Memory;
    __nvoc_init_dataField_FlaMemory(pThis);

    status = __nvoc_flamemConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_FlaMemory_fail__init;
    goto __nvoc_ctor_FlaMemory_exit; // Success

__nvoc_ctor_FlaMemory_fail__init:
    __nvoc_dtor_Memory(&pThis->__nvoc_base_Memory);
__nvoc_ctor_FlaMemory_fail_Memory:
__nvoc_ctor_FlaMemory_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_FlaMemory_1(FlaMemory *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_FlaMemory_1


// Initialize vtable(s) for 27 virtual method(s).
void __nvoc_init_funcTable_FlaMemory(FlaMemory *pThis) {

    // Per-class vtable definition
    static const struct NVOC_VTABLE__FlaMemory vtable = {
        .__flamemCanCopy__ = &flamemCanCopy_IMPL,    // virtual override (res) base (mem)
        .Memory.__memCanCopy__ = &__nvoc_up_thunk_RsResource_memCanCopy,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resCanCopy__ = &__nvoc_down_thunk_FlaMemory_resCanCopy,    // virtual
        .__flamemCopyConstruct__ = &flamemCopyConstruct_IMPL,    // virtual override (mem) base (mem)
        .__flamemIsDuplicate__ = &__nvoc_up_thunk_Memory_flamemIsDuplicate,    // virtual inherited (mem) base (mem)
        .Memory.__memIsDuplicate__ = &memIsDuplicate_IMPL,    // virtual override (res) base (rmres)
        .Memory.RmResource.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resIsDuplicate__ = &__nvoc_down_thunk_Memory_resIsDuplicate,    // virtual
        .__flamemGetMapAddrSpace__ = &__nvoc_up_thunk_Memory_flamemGetMapAddrSpace,    // virtual inherited (mem) base (mem)
        .Memory.__memGetMapAddrSpace__ = &memGetMapAddrSpace_IMPL,    // virtual
        .__flamemControl__ = &__nvoc_up_thunk_Memory_flamemControl,    // virtual inherited (mem) base (mem)
        .Memory.__memControl__ = &memControl_IMPL,    // virtual override (res) base (rmres)
        .Memory.RmResource.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resControl__ = &__nvoc_down_thunk_Memory_resControl,    // virtual
        .__flamemMap__ = &__nvoc_up_thunk_Memory_flamemMap,    // virtual inherited (mem) base (mem)
        .Memory.__memMap__ = &memMap_IMPL,    // virtual override (res) base (rmres)
        .Memory.RmResource.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resMap__ = &__nvoc_down_thunk_Memory_resMap,    // virtual
        .__flamemUnmap__ = &__nvoc_up_thunk_Memory_flamemUnmap,    // virtual inherited (mem) base (mem)
        .Memory.__memUnmap__ = &memUnmap_IMPL,    // virtual override (res) base (rmres)
        .Memory.RmResource.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resUnmap__ = &__nvoc_down_thunk_Memory_resUnmap,    // virtual
        .__flamemGetMemInterMapParams__ = &__nvoc_up_thunk_Memory_flamemGetMemInterMapParams,    // virtual inherited (mem) base (mem)
        .Memory.__memGetMemInterMapParams__ = &memGetMemInterMapParams_IMPL,    // virtual override (rmres) base (rmres)
        .Memory.RmResource.__rmresGetMemInterMapParams__ = &__nvoc_down_thunk_Memory_rmresGetMemInterMapParams,    // virtual
        .__flamemCheckMemInterUnmap__ = &__nvoc_up_thunk_Memory_flamemCheckMemInterUnmap,    // inline virtual inherited (mem) base (mem) body
        .Memory.__memCheckMemInterUnmap__ = &memCheckMemInterUnmap_ac1694,    // inline virtual override (rmres) base (rmres) body
        .Memory.RmResource.__rmresCheckMemInterUnmap__ = &__nvoc_down_thunk_Memory_rmresCheckMemInterUnmap,    // virtual
        .__flamemGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_Memory_flamemGetMemoryMappingDescriptor,    // virtual inherited (mem) base (mem)
        .Memory.__memGetMemoryMappingDescriptor__ = &memGetMemoryMappingDescriptor_IMPL,    // virtual override (rmres) base (rmres)
        .Memory.RmResource.__rmresGetMemoryMappingDescriptor__ = &__nvoc_down_thunk_Memory_rmresGetMemoryMappingDescriptor,    // virtual
        .__flamemCheckCopyPermissions__ = &__nvoc_up_thunk_Memory_flamemCheckCopyPermissions,    // inline virtual inherited (mem) base (mem) body
        .Memory.__memCheckCopyPermissions__ = &memCheckCopyPermissions_ac1694,    // inline virtual body
        .__flamemIsReady__ = &__nvoc_up_thunk_Memory_flamemIsReady,    // virtual inherited (mem) base (mem)
        .Memory.__memIsReady__ = &memIsReady_IMPL,    // virtual
        .__flamemIsGpuMapAllowed__ = &__nvoc_up_thunk_Memory_flamemIsGpuMapAllowed,    // inline virtual inherited (mem) base (mem) body
        .Memory.__memIsGpuMapAllowed__ = &memIsGpuMapAllowed_e661f0,    // inline virtual body
        .__flamemIsExportAllowed__ = &__nvoc_up_thunk_Memory_flamemIsExportAllowed,    // inline virtual inherited (mem) base (mem) body
        .Memory.__memIsExportAllowed__ = &memIsExportAllowed_e661f0,    // inline virtual body
        .__flamemAccessCallback__ = &__nvoc_up_thunk_RmResource_flamemAccessCallback,    // virtual inherited (rmres) base (mem)
        .Memory.__memAccessCallback__ = &__nvoc_up_thunk_RmResource_memAccessCallback,    // virtual inherited (rmres) base (rmres)
        .Memory.RmResource.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
        .Memory.RmResource.RsResource.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
        .__flamemShareCallback__ = &__nvoc_up_thunk_RmResource_flamemShareCallback,    // virtual inherited (rmres) base (mem)
        .Memory.__memShareCallback__ = &__nvoc_up_thunk_RmResource_memShareCallback,    // virtual inherited (rmres) base (rmres)
        .Memory.RmResource.__rmresShareCallback__ = &rmresShareCallback_IMPL,    // virtual override (res) base (res)
        .Memory.RmResource.RsResource.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
        .__flamemControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_flamemControlSerialization_Prologue,    // virtual inherited (rmres) base (mem)
        .Memory.__memControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_memControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
        .Memory.RmResource.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
        .Memory.RmResource.RsResource.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
        .__flamemControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_flamemControlSerialization_Epilogue,    // virtual inherited (rmres) base (mem)
        .Memory.__memControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_memControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
        .Memory.RmResource.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
        .Memory.RmResource.RsResource.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
        .__flamemControl_Prologue__ = &__nvoc_up_thunk_RmResource_flamemControl_Prologue,    // virtual inherited (rmres) base (mem)
        .Memory.__memControl_Prologue__ = &__nvoc_up_thunk_RmResource_memControl_Prologue,    // virtual inherited (rmres) base (rmres)
        .Memory.RmResource.__rmresControl_Prologue__ = &rmresControl_Prologue_IMPL,    // virtual override (res) base (res)
        .Memory.RmResource.RsResource.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
        .__flamemControl_Epilogue__ = &__nvoc_up_thunk_RmResource_flamemControl_Epilogue,    // virtual inherited (rmres) base (mem)
        .Memory.__memControl_Epilogue__ = &__nvoc_up_thunk_RmResource_memControl_Epilogue,    // virtual inherited (rmres) base (rmres)
        .Memory.RmResource.__rmresControl_Epilogue__ = &rmresControl_Epilogue_IMPL,    // virtual override (res) base (res)
        .Memory.RmResource.RsResource.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
        .__flamemPreDestruct__ = &__nvoc_up_thunk_RsResource_flamemPreDestruct,    // virtual inherited (res) base (mem)
        .Memory.__memPreDestruct__ = &__nvoc_up_thunk_RsResource_memPreDestruct,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
        .__flamemControlFilter__ = &__nvoc_up_thunk_RsResource_flamemControlFilter,    // virtual inherited (res) base (mem)
        .Memory.__memControlFilter__ = &__nvoc_up_thunk_RsResource_memControlFilter,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
        .__flamemIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_flamemIsPartialUnmapSupported,    // inline virtual inherited (res) base (mem) body
        .Memory.__memIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_memIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
        .Memory.RmResource.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
        .Memory.RmResource.RsResource.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
        .__flamemMapTo__ = &__nvoc_up_thunk_RsResource_flamemMapTo,    // virtual inherited (res) base (mem)
        .Memory.__memMapTo__ = &__nvoc_up_thunk_RsResource_memMapTo,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resMapTo__ = &resMapTo_IMPL,    // virtual
        .__flamemUnmapFrom__ = &__nvoc_up_thunk_RsResource_flamemUnmapFrom,    // virtual inherited (res) base (mem)
        .Memory.__memUnmapFrom__ = &__nvoc_up_thunk_RsResource_memUnmapFrom,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
        .__flamemGetRefCount__ = &__nvoc_up_thunk_RsResource_flamemGetRefCount,    // virtual inherited (res) base (mem)
        .Memory.__memGetRefCount__ = &__nvoc_up_thunk_RsResource_memGetRefCount,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
        .__flamemAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_flamemAddAdditionalDependants,    // virtual inherited (res) base (mem)
        .Memory.__memAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_memAddAdditionalDependants,    // virtual inherited (res) base (rmres)
        .Memory.RmResource.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
        .Memory.RmResource.RsResource.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    };

    // Pointer(s) to per-class vtable(s)
    pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_vtable = &vtable.Memory.RmResource.RsResource;    // (res) super^3
    pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_vtable = &vtable.Memory.RmResource;    // (rmres) super^2
    pThis->__nvoc_base_Memory.__nvoc_vtable = &vtable.Memory;    // (mem) super
    pThis->__nvoc_vtable = &vtable;    // (flamem) this
    __nvoc_init_funcTable_FlaMemory_1(pThis);
}

void __nvoc_init_Memory(Memory*);
void __nvoc_init_FlaMemory(FlaMemory *pThis) {
    pThis->__nvoc_pbase_FlaMemory = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_Memory.__nvoc_base_RmResource;
    pThis->__nvoc_pbase_Memory = &pThis->__nvoc_base_Memory;
    __nvoc_init_Memory(&pThis->__nvoc_base_Memory);
    __nvoc_init_funcTable_FlaMemory(pThis);
}

NV_STATUS __nvoc_objCreate_FlaMemory(FlaMemory **ppThis, Dynamic *pParent, NvU32 createFlags, CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    FlaMemory *pThis;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(FlaMemory), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(FlaMemory));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_FlaMemory);

    pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_FlaMemory(pThis);
    status = __nvoc_ctor_FlaMemory(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_FlaMemory_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_FlaMemory_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_Memory.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(FlaMemory));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_FlaMemory(FlaMemory **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    CALL_CONTEXT * arg_pCallContext = va_arg(args, CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_FlaMemory(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}

