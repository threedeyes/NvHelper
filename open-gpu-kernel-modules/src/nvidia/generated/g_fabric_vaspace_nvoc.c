#define NVOC_FABRIC_VASPACE_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_fabric_vaspace_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x8c8f3d = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_FABRIC_VASPACE;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_OBJVASPACE;

void __nvoc_init_FABRIC_VASPACE(FABRIC_VASPACE*);
void __nvoc_init_funcTable_FABRIC_VASPACE(FABRIC_VASPACE*);
NV_STATUS __nvoc_ctor_FABRIC_VASPACE(FABRIC_VASPACE*);
void __nvoc_init_dataField_FABRIC_VASPACE(FABRIC_VASPACE*);
void __nvoc_dtor_FABRIC_VASPACE(FABRIC_VASPACE*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_FABRIC_VASPACE;

static const struct NVOC_RTTI __nvoc_rtti_FABRIC_VASPACE_FABRIC_VASPACE = {
    /*pClassDef=*/          &__nvoc_class_def_FABRIC_VASPACE,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_FABRIC_VASPACE,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_FABRIC_VASPACE_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_FABRIC_VASPACE_OBJVASPACE = {
    /*pClassDef=*/          &__nvoc_class_def_OBJVASPACE,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_FABRIC_VASPACE = {
    /*numRelatives=*/       3,
    /*relatives=*/ {
        &__nvoc_rtti_FABRIC_VASPACE_FABRIC_VASPACE,
        &__nvoc_rtti_FABRIC_VASPACE_OBJVASPACE,
        &__nvoc_rtti_FABRIC_VASPACE_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_FABRIC_VASPACE = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(FABRIC_VASPACE),
        /*classId=*/            classId(FABRIC_VASPACE),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "FABRIC_VASPACE",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_FABRIC_VASPACE,
    /*pCastInfo=*/          &__nvoc_castinfo_FABRIC_VASPACE,
    /*pExportInfo=*/        &__nvoc_export_info_FABRIC_VASPACE
};

// Down-thunk(s) to bridge FABRIC_VASPACE methods from ancestors (if any)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceConstruct_(struct OBJVASPACE *pFabricVAS, NvU32 classId, NvU32 vaspaceId, NvU64 vaStart, NvU64 vaLimit, NvU64 vaStartInternal, NvU64 vaLimitInternal, NvU32 flags);    // this
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceAlloc(struct OBJVASPACE *pFabricVAS, NvU64 size, NvU64 align, NvU64 rangeLo, NvU64 rangeHi, NvU64 pageSize, VAS_ALLOC_FLAGS flags, NvU64 *pAddr);    // this
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceFree(struct OBJVASPACE *pFabricVAS, NvU64 vAddr);    // this
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceMap(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu, const NvU64 vaLo, const NvU64 vaHi, const MMU_MAP_TARGET *pTarget, const VAS_MAP_FLAGS flags);    // this
void __nvoc_down_thunk_FABRIC_VASPACE_vaspaceUnmap(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu, const NvU64 vaLo, const NvU64 vaHi);    // this
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceApplyDefaultAlignment(struct OBJVASPACE *pFabricVAS, const FB_ALLOC_INFO *pAllocInfo, NvU64 *pAlign, NvU64 *pSize, NvU64 *pPageSizeLockMask);    // this
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceGetVasInfo(struct OBJVASPACE *pFabricVAS, NV0080_CTRL_DMA_ADV_SCHED_GET_VA_CAPS_PARAMS *pParams);    // this
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspacePinRootPageDir(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu);    // this
void __nvoc_down_thunk_FABRIC_VASPACE_vaspaceUnpinRootPageDir(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu);    // this
void __nvoc_down_thunk_FABRIC_VASPACE_vaspaceInvalidateTlb(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu, VAS_PTE_UPDATE_TYPE type);    // this

// 10 down-thunk(s) defined to bridge methods in FABRIC_VASPACE from superclasses

// fabricvaspaceConstruct_: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceConstruct_(struct OBJVASPACE *pFabricVAS, NvU32 classId, NvU32 vaspaceId, NvU64 vaStart, NvU64 vaLimit, NvU64 vaStartInternal, NvU64 vaLimitInternal, NvU32 flags) {
    return fabricvaspaceConstruct_((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), classId, vaspaceId, vaStart, vaLimit, vaStartInternal, vaLimitInternal, flags);
}

// fabricvaspaceAlloc: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceAlloc(struct OBJVASPACE *pFabricVAS, NvU64 size, NvU64 align, NvU64 rangeLo, NvU64 rangeHi, NvU64 pageSize, VAS_ALLOC_FLAGS flags, NvU64 *pAddr) {
    return fabricvaspaceAlloc((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), size, align, rangeLo, rangeHi, pageSize, flags, pAddr);
}

// fabricvaspaceFree: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceFree(struct OBJVASPACE *pFabricVAS, NvU64 vAddr) {
    return fabricvaspaceFree((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), vAddr);
}

// fabricvaspaceMap: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceMap(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu, const NvU64 vaLo, const NvU64 vaHi, const MMU_MAP_TARGET *pTarget, const VAS_MAP_FLAGS flags) {
    return fabricvaspaceMap((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, vaLo, vaHi, pTarget, flags);
}

// fabricvaspaceUnmap: virtual override (vaspace) base (vaspace)
void __nvoc_down_thunk_FABRIC_VASPACE_vaspaceUnmap(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu, const NvU64 vaLo, const NvU64 vaHi) {
    fabricvaspaceUnmap((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, vaLo, vaHi);
}

// fabricvaspaceApplyDefaultAlignment: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceApplyDefaultAlignment(struct OBJVASPACE *pFabricVAS, const FB_ALLOC_INFO *pAllocInfo, NvU64 *pAlign, NvU64 *pSize, NvU64 *pPageSizeLockMask) {
    return fabricvaspaceApplyDefaultAlignment((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pAllocInfo, pAlign, pSize, pPageSizeLockMask);
}

// fabricvaspaceGetVasInfo: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspaceGetVasInfo(struct OBJVASPACE *pFabricVAS, NV0080_CTRL_DMA_ADV_SCHED_GET_VA_CAPS_PARAMS *pParams) {
    return fabricvaspaceGetVasInfo((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pParams);
}

// fabricvaspacePinRootPageDir: virtual override (vaspace) base (vaspace)
NV_STATUS __nvoc_down_thunk_FABRIC_VASPACE_vaspacePinRootPageDir(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu) {
    return fabricvaspacePinRootPageDir((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu);
}

// fabricvaspaceUnpinRootPageDir: virtual override (vaspace) base (vaspace)
void __nvoc_down_thunk_FABRIC_VASPACE_vaspaceUnpinRootPageDir(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu) {
    fabricvaspaceUnpinRootPageDir((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu);
}

// fabricvaspaceInvalidateTlb: virtual override (vaspace) base (vaspace)
void __nvoc_down_thunk_FABRIC_VASPACE_vaspaceInvalidateTlb(struct OBJVASPACE *pFabricVAS, struct OBJGPU *pGpu, VAS_PTE_UPDATE_TYPE type) {
    fabricvaspaceInvalidateTlb((struct FABRIC_VASPACE *)(((unsigned char *) pFabricVAS) - NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, type);
}


// Up-thunk(s) to bridge FABRIC_VASPACE methods to ancestors (if any)
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIncAllocRefCnt(struct FABRIC_VASPACE *pVAS, NvU64 vAddr);    // this
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetVaStart(struct FABRIC_VASPACE *pVAS);    // this
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetVaLimit(struct FABRIC_VASPACE *pVAS);    // this
NvU32 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetFlags(struct FABRIC_VASPACE *pVAS);    // this
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceReserveMempool(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, struct Device *pDevice, NvU64 size, NvU64 pageSizeLockMask, NvU32 flags);    // this
OBJEHEAP * __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetHeap(struct FABRIC_VASPACE *pVAS);    // this
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetMapPageSize(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, EMEMBLOCK *pMemBlock);    // this
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetBigPageSize(struct FABRIC_VASPACE *pVAS);    // this
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsMirrored(struct FABRIC_VASPACE *pVAS);    // this
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsFaultCapable(struct FABRIC_VASPACE *pVAS);    // this
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsExternallyOwned(struct FABRIC_VASPACE *pVAS);    // this
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsAtsEnabled(struct FABRIC_VASPACE *pVAS);    // this
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPasid(struct FABRIC_VASPACE *pVAS, NvU32 *pPasid);    // this
PMEMORY_DESCRIPTOR __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPageDirBase(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu);    // this
PMEMORY_DESCRIPTOR __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetKernelPageDirBase(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu);    // this
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPageTableInfo(struct FABRIC_VASPACE *pVAS, NV0080_CTRL_DMA_GET_PDE_INFO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPteInfo(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, NV0080_CTRL_DMA_GET_PTE_INFO_PARAMS *pParams, RmPhysAddr *pPhysAddr);    // this
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceSetPteInfo(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, NV0080_CTRL_DMA_SET_PTE_INFO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceFreeV2(struct FABRIC_VASPACE *pVAS, NvU64 vAddr, NvU64 *pSize);    // this

// 19 up-thunk(s) defined to bridge methods in FABRIC_VASPACE to superclasses

// fabricvaspaceIncAllocRefCnt: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIncAllocRefCnt(struct FABRIC_VASPACE *pVAS, NvU64 vAddr) {
    return vaspaceIncAllocRefCnt((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), vAddr);
}

// fabricvaspaceGetVaStart: virtual inherited (vaspace) base (vaspace)
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetVaStart(struct FABRIC_VASPACE *pVAS) {
    return vaspaceGetVaStart((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceGetVaLimit: virtual inherited (vaspace) base (vaspace)
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetVaLimit(struct FABRIC_VASPACE *pVAS) {
    return vaspaceGetVaLimit((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceGetFlags: inline virtual inherited (vaspace) base (vaspace) body
NvU32 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetFlags(struct FABRIC_VASPACE *pVAS) {
    return vaspaceGetFlags((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceReserveMempool: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceReserveMempool(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, struct Device *pDevice, NvU64 size, NvU64 pageSizeLockMask, NvU32 flags) {
    return vaspaceReserveMempool((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, pDevice, size, pageSizeLockMask, flags);
}

// fabricvaspaceGetHeap: inline virtual inherited (vaspace) base (vaspace) body
OBJEHEAP * __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetHeap(struct FABRIC_VASPACE *pVAS) {
    return vaspaceGetHeap((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceGetMapPageSize: inline virtual inherited (vaspace) base (vaspace) body
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetMapPageSize(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, EMEMBLOCK *pMemBlock) {
    return vaspaceGetMapPageSize((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, pMemBlock);
}

// fabricvaspaceGetBigPageSize: inline virtual inherited (vaspace) base (vaspace) body
NvU64 __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetBigPageSize(struct FABRIC_VASPACE *pVAS) {
    return vaspaceGetBigPageSize((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceIsMirrored: inline virtual inherited (vaspace) base (vaspace) body
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsMirrored(struct FABRIC_VASPACE *pVAS) {
    return vaspaceIsMirrored((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceIsFaultCapable: inline virtual inherited (vaspace) base (vaspace) body
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsFaultCapable(struct FABRIC_VASPACE *pVAS) {
    return vaspaceIsFaultCapable((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceIsExternallyOwned: inline virtual inherited (vaspace) base (vaspace) body
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsExternallyOwned(struct FABRIC_VASPACE *pVAS) {
    return vaspaceIsExternallyOwned((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceIsAtsEnabled: inline virtual inherited (vaspace) base (vaspace) body
NvBool __nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsAtsEnabled(struct FABRIC_VASPACE *pVAS) {
    return vaspaceIsAtsEnabled((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)));
}

// fabricvaspaceGetPasid: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPasid(struct FABRIC_VASPACE *pVAS, NvU32 *pPasid) {
    return vaspaceGetPasid((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pPasid);
}

// fabricvaspaceGetPageDirBase: inline virtual inherited (vaspace) base (vaspace) body
PMEMORY_DESCRIPTOR __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPageDirBase(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu) {
    return vaspaceGetPageDirBase((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu);
}

// fabricvaspaceGetKernelPageDirBase: inline virtual inherited (vaspace) base (vaspace) body
PMEMORY_DESCRIPTOR __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetKernelPageDirBase(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu) {
    return vaspaceGetKernelPageDirBase((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu);
}

// fabricvaspaceGetPageTableInfo: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPageTableInfo(struct FABRIC_VASPACE *pVAS, NV0080_CTRL_DMA_GET_PDE_INFO_PARAMS *pParams) {
    return vaspaceGetPageTableInfo((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pParams);
}

// fabricvaspaceGetPteInfo: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPteInfo(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, NV0080_CTRL_DMA_GET_PTE_INFO_PARAMS *pParams, RmPhysAddr *pPhysAddr) {
    return vaspaceGetPteInfo((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, pParams, pPhysAddr);
}

// fabricvaspaceSetPteInfo: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceSetPteInfo(struct FABRIC_VASPACE *pVAS, struct OBJGPU *pGpu, NV0080_CTRL_DMA_SET_PTE_INFO_PARAMS *pParams) {
    return vaspaceSetPteInfo((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), pGpu, pParams);
}

// fabricvaspaceFreeV2: inline virtual inherited (vaspace) base (vaspace) body
NV_STATUS __nvoc_up_thunk_OBJVASPACE_fabricvaspaceFreeV2(struct FABRIC_VASPACE *pVAS, NvU64 vAddr, NvU64 *pSize) {
    return vaspaceFreeV2((struct OBJVASPACE *)(((unsigned char *) pVAS) + NV_OFFSETOF(FABRIC_VASPACE, __nvoc_base_OBJVASPACE)), vAddr, pSize);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info_FABRIC_VASPACE = 
{
    /*numEntries=*/     0,
    /*pExportEntries=*/  0
};

void __nvoc_dtor_OBJVASPACE(OBJVASPACE*);
void __nvoc_dtor_FABRIC_VASPACE(FABRIC_VASPACE *pThis) {
    __nvoc_fabricvaspaceDestruct(pThis);
    __nvoc_dtor_OBJVASPACE(&pThis->__nvoc_base_OBJVASPACE);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_FABRIC_VASPACE(FABRIC_VASPACE *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_OBJVASPACE(OBJVASPACE* );
NV_STATUS __nvoc_ctor_FABRIC_VASPACE(FABRIC_VASPACE *pThis) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_OBJVASPACE(&pThis->__nvoc_base_OBJVASPACE);
    if (status != NV_OK) goto __nvoc_ctor_FABRIC_VASPACE_fail_OBJVASPACE;
    __nvoc_init_dataField_FABRIC_VASPACE(pThis);
    goto __nvoc_ctor_FABRIC_VASPACE_exit; // Success

__nvoc_ctor_FABRIC_VASPACE_fail_OBJVASPACE:
__nvoc_ctor_FABRIC_VASPACE_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_FABRIC_VASPACE_1(FABRIC_VASPACE *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_FABRIC_VASPACE_1


// Initialize vtable(s) for 29 virtual method(s).
void __nvoc_init_funcTable_FABRIC_VASPACE(FABRIC_VASPACE *pThis) {

    // Per-class vtable definition
    static const struct NVOC_VTABLE__FABRIC_VASPACE vtable = {
        .__fabricvaspaceConstruct___ = &fabricvaspaceConstruct__IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceConstruct___ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceConstruct_,    // pure virtual
        .__fabricvaspaceAlloc__ = &fabricvaspaceAlloc_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceAlloc__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceAlloc,    // pure virtual
        .__fabricvaspaceFree__ = &fabricvaspaceFree_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceFree__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceFree,    // pure virtual
        .__fabricvaspaceMap__ = &fabricvaspaceMap_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceMap__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceMap,    // inline virtual body
        .__fabricvaspaceUnmap__ = &fabricvaspaceUnmap_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceUnmap__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceUnmap,    // inline virtual body
        .__fabricvaspaceApplyDefaultAlignment__ = &fabricvaspaceApplyDefaultAlignment_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceApplyDefaultAlignment__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceApplyDefaultAlignment,    // pure virtual
        .__fabricvaspaceGetVasInfo__ = &fabricvaspaceGetVasInfo_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceGetVasInfo__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceGetVasInfo,    // pure virtual
        .__fabricvaspacePinRootPageDir__ = &fabricvaspacePinRootPageDir_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspacePinRootPageDir__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspacePinRootPageDir,    // inline virtual body
        .__fabricvaspaceUnpinRootPageDir__ = &fabricvaspaceUnpinRootPageDir_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceUnpinRootPageDir__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceUnpinRootPageDir,    // inline virtual body
        .__fabricvaspaceInvalidateTlb__ = &fabricvaspaceInvalidateTlb_IMPL,    // virtual override (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceInvalidateTlb__ = &__nvoc_down_thunk_FABRIC_VASPACE_vaspaceInvalidateTlb,    // virtual
        .__fabricvaspaceIncAllocRefCnt__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceIncAllocRefCnt,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceIncAllocRefCnt__ = &vaspaceIncAllocRefCnt_14ee5e,    // inline virtual body
        .__fabricvaspaceGetVaStart__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetVaStart,    // virtual inherited (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceGetVaStart__ = &vaspaceGetVaStart_IMPL,    // virtual
        .__fabricvaspaceGetVaLimit__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetVaLimit,    // virtual inherited (vaspace) base (vaspace)
        .OBJVASPACE.__vaspaceGetVaLimit__ = &vaspaceGetVaLimit_IMPL,    // virtual
        .__fabricvaspaceGetFlags__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetFlags,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetFlags__ = &vaspaceGetFlags_edd98b,    // inline virtual body
        .__fabricvaspaceReserveMempool__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceReserveMempool,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceReserveMempool__ = &vaspaceReserveMempool_ac1694,    // inline virtual body
        .__fabricvaspaceGetHeap__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetHeap,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetHeap__ = &vaspaceGetHeap_9451a7,    // inline virtual body
        .__fabricvaspaceGetMapPageSize__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetMapPageSize,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetMapPageSize__ = &vaspaceGetMapPageSize_c26fae,    // inline virtual body
        .__fabricvaspaceGetBigPageSize__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetBigPageSize,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetBigPageSize__ = &vaspaceGetBigPageSize_c26fae,    // inline virtual body
        .__fabricvaspaceIsMirrored__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsMirrored,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceIsMirrored__ = &vaspaceIsMirrored_2fa1ff,    // inline virtual body
        .__fabricvaspaceIsFaultCapable__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsFaultCapable,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceIsFaultCapable__ = &vaspaceIsFaultCapable_2fa1ff,    // inline virtual body
        .__fabricvaspaceIsExternallyOwned__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsExternallyOwned,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceIsExternallyOwned__ = &vaspaceIsExternallyOwned_2fa1ff,    // inline virtual body
        .__fabricvaspaceIsAtsEnabled__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceIsAtsEnabled,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceIsAtsEnabled__ = &vaspaceIsAtsEnabled_2fa1ff,    // inline virtual body
        .__fabricvaspaceGetPasid__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPasid,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetPasid__ = &vaspaceGetPasid_14ee5e,    // inline virtual body
        .__fabricvaspaceGetPageDirBase__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPageDirBase,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetPageDirBase__ = &vaspaceGetPageDirBase_9451a7,    // inline virtual body
        .__fabricvaspaceGetKernelPageDirBase__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetKernelPageDirBase,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetKernelPageDirBase__ = &vaspaceGetKernelPageDirBase_9451a7,    // inline virtual body
        .__fabricvaspaceGetPageTableInfo__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPageTableInfo,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetPageTableInfo__ = &vaspaceGetPageTableInfo_14ee5e,    // inline virtual body
        .__fabricvaspaceGetPteInfo__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceGetPteInfo,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceGetPteInfo__ = &vaspaceGetPteInfo_14ee5e,    // inline virtual body
        .__fabricvaspaceSetPteInfo__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceSetPteInfo,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceSetPteInfo__ = &vaspaceSetPteInfo_14ee5e,    // inline virtual body
        .__fabricvaspaceFreeV2__ = &__nvoc_up_thunk_OBJVASPACE_fabricvaspaceFreeV2,    // inline virtual inherited (vaspace) base (vaspace) body
        .OBJVASPACE.__vaspaceFreeV2__ = &vaspaceFreeV2_14ee5e,    // inline virtual body
    };

    // Pointer(s) to per-class vtable(s)
    pThis->__nvoc_base_OBJVASPACE.__nvoc_vtable = &vtable.OBJVASPACE;    // (vaspace) super
    pThis->__nvoc_vtable = &vtable;    // (fabricvaspace) this
    __nvoc_init_funcTable_FABRIC_VASPACE_1(pThis);
}

void __nvoc_init_OBJVASPACE(OBJVASPACE*);
void __nvoc_init_FABRIC_VASPACE(FABRIC_VASPACE *pThis) {
    pThis->__nvoc_pbase_FABRIC_VASPACE = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_OBJVASPACE.__nvoc_base_Object;
    pThis->__nvoc_pbase_OBJVASPACE = &pThis->__nvoc_base_OBJVASPACE;
    __nvoc_init_OBJVASPACE(&pThis->__nvoc_base_OBJVASPACE);
    __nvoc_init_funcTable_FABRIC_VASPACE(pThis);
}

NV_STATUS __nvoc_objCreate_FABRIC_VASPACE(FABRIC_VASPACE **ppThis, Dynamic *pParent, NvU32 createFlags)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    FABRIC_VASPACE *pThis;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(FABRIC_VASPACE), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(FABRIC_VASPACE));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_FABRIC_VASPACE);

    pThis->__nvoc_base_OBJVASPACE.__nvoc_base_Object.createFlags = createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_OBJVASPACE.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_OBJVASPACE.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_FABRIC_VASPACE(pThis);
    status = __nvoc_ctor_FABRIC_VASPACE(pThis);
    if (status != NV_OK) goto __nvoc_objCreate_FABRIC_VASPACE_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_FABRIC_VASPACE_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_OBJVASPACE.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(FABRIC_VASPACE));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_FABRIC_VASPACE(FABRIC_VASPACE **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;

    status = __nvoc_objCreate_FABRIC_VASPACE(ppThis, pParent, createFlags);

    return status;
}

