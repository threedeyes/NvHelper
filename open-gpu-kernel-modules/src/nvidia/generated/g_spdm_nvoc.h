
#ifndef _G_SPDM_NVOC_H_
#define _G_SPDM_NVOC_H_
#include "nvoc/runtime.h"

// Version of generated metadata structures
#ifdef NVOC_METADATA_VERSION
#undef NVOC_METADATA_VERSION
#endif
#define NVOC_METADATA_VERSION 1

#ifdef __cplusplus
extern "C" {
#endif

/*
 * SPDX-FileCopyrightText: Copyright (c) 2021-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#pragma once
#include "g_spdm_nvoc.h"

#ifndef NV_SPDM_H
#define NV_SPDM_H
// SPDM_H may conflict with libspdm headers.

#include "gpu/gpu.h"
#include "nvport/nvport.h"
#include "gpu/timer/objtmr.h"

/****************************************************************************\
 *                                                                           *
 *      SPDM module header.                                                  *
 *                                                                           *
 ****************************************************************************/

/* ------------------------ Macros ----------------------------------------- */
#define HAL_MAPPING_ONLY_IF_SPDM_SUPPORTED_IMPL \
    {                                           \
        default: _IMPL;                         \
    }
#define HAL_MAPPING_ONLY_IF_SPDM_SUPPORTED_HAL(x, y) \
    {                                                \
        x | y   : _##x;                              \
        default : return NV_ERR_NOT_SUPPORTED;       \
    }
#define HAL_MAPPING_ONLY_IF_SPDM_SUPPORTED_VOID \
    {                                           \
        default: _IMPL;                         \
    }

#define NV_SPDM_RESPONDER_CERT_COUNT_MAX  (2)

typedef struct _NV_SPDM_CERT_CONTEXT
{
    size_t   certSize;
    NvU8    *pCert;
} NV_SPDM_CERT_CONTEXT, *PNV_SPDM_CERT_CONTEXT;

#define NV_SPDM_REQ_L1_CERTIFICATE_ID (0)
#define NV_SPDM_REQ_L2_CERTIFICATE_ID (NV_SPDM_REQ_L1_CERTIFICATE_ID + 1)
#define NV_SPDM_REQ_L3_CERTIFICATE_ID (NV_SPDM_REQ_L1_CERTIFICATE_ID + 2)


// Private field names are wrapped in PRIVATE_FIELD, which does nothing for
// the matching C source file, but causes diagnostics to be issued if another
// source file references the field.
#ifdef NVOC_SPDM_H_PRIVATE_ACCESS_ALLOWED
#define PRIVATE_FIELD(x) x
#else
#define PRIVATE_FIELD(x) NVOC_PRIVATE_FIELD(x)
#endif


struct Spdm {

    // Metadata
    const struct NVOC_RTTI *__nvoc_rtti;

    // Parent (i.e. superclass or base class) objects
    struct Object __nvoc_base_Object;

    // Ancestor object pointers for `staticCast` feature
    struct Object *__nvoc_pbase_Object;    // obj super
    struct Spdm *__nvoc_pbase_Spdm;    // spdm

    // Vtable with 16 per-object function pointers
    NV_STATUS (*__spdmGetCertChains__)(OBJGPU *, struct Spdm * /*this*/, void *, NvU32 *, void *, NvU32 *);  // halified (2 hals) body
    NV_STATUS (*__spdmGetAttestationReport__)(OBJGPU *, struct Spdm * /*this*/, NvU8 *, void *, NvU32 *, NvBool *, void *, NvU32 *);  // halified (2 hals) body
    NV_STATUS (*__spdmCheckAndExecuteKeyUpdate__)(OBJGPU *, struct Spdm * /*this*/, NvU32);  // halified (2 hals) body
    NV_STATUS (*__spdmSendInitRmDataCommand__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NV_STATUS (*__spdmRegisterForHeartbeats__)(OBJGPU *, struct Spdm * /*this*/, NvU32);  // halified (2 hals) body
    NV_STATUS (*__spdmUnregisterFromHeartbeats__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NvBool (*__spdmMutualAuthSupported__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NV_STATUS (*__spdmDeviceInit__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NV_STATUS (*__spdmDeviceDeinit__)(OBJGPU *, struct Spdm * /*this*/, NvBool);  // halified (2 hals) body
    NV_STATUS (*__spdmDeviceSecuredSessionSupported__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NV_STATUS (*__spdmCheckConnection__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NV_STATUS (*__spdmMessageProcess__)(OBJGPU *, struct Spdm * /*this*/, NvU8 *, NvU32, NvU8 *, NvU32 *);  // halified (2 hals) body
    NV_STATUS (*__spdmGetCertificates__)(OBJGPU *, struct Spdm * /*this*/);  // halified (2 hals) body
    NV_STATUS (*__spdmGetReqEncapCertificates__)(OBJGPU *, struct Spdm * /*this*/, NvU8 **, NvU32 *);  // halified (2 hals) body
    NV_STATUS (*__spdmGetRequesterCertificateCount__)(OBJGPU *, struct Spdm * /*this*/, NvU32 *);  // halified (3 hals) body
    NV_STATUS (*__spdmGetIndividualCertificate__)(OBJGPU *, struct Spdm * /*this*/, NvU32, NvBool, void *, NvU64 *);  // halified (3 hals) body

    // Data members
    void *pLibspdmContext;
    NvU32 libspdmContextSize;
    void *pLibspdmScratch;
    NvU32 libspdmScratchSize;
    NvBool bSessionEstablished;
    NvU32 sessionId;
    NvBool bUsePolling;
    MEMORY_DESCRIPTOR *pPayloadBufferMemDesc;
    NvU32 payloadBufferSize;
    NvU32 guestId;
    NvU32 endpointId;
    NvU8 *pAttestationCertChain;
    size_t attestationCertChainSize;
    void *pDeviceIOContext;
    void *pMsgLog;
    size_t msgLogMaxSize;
    void *pTranscriptLog;
    NvU32 transcriptLogSize;
    NvBool bExportSecretCleared;
    NvU32 sessionMsgCount;
    struct TMR_EVENT *pHeartbeatEvent;
    NvU32 heartbeatPeriodSec;
    NvU8 *pTransportBuffer;
    NvU32 transportBufferSize;
    NvU32 pendingResponseSize;
};

#ifndef __NVOC_CLASS_Spdm_TYPEDEF__
#define __NVOC_CLASS_Spdm_TYPEDEF__
typedef struct Spdm Spdm;
#endif /* __NVOC_CLASS_Spdm_TYPEDEF__ */

#ifndef __nvoc_class_id_Spdm
#define __nvoc_class_id_Spdm 0x261ee8
#endif /* __nvoc_class_id_Spdm */

// Casting support
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Spdm;

#define __staticCast_Spdm(pThis) \
    ((pThis)->__nvoc_pbase_Spdm)

#ifdef __nvoc_spdm_h_disabled
#define __dynamicCast_Spdm(pThis) ((Spdm*)NULL)
#else //__nvoc_spdm_h_disabled
#define __dynamicCast_Spdm(pThis) \
    ((Spdm*)__nvoc_dynamicCast(staticCast((pThis), Dynamic), classInfo(Spdm)))
#endif //__nvoc_spdm_h_disabled

NV_STATUS __nvoc_objCreateDynamic_Spdm(Spdm**, Dynamic*, NvU32, va_list);

NV_STATUS __nvoc_objCreate_Spdm(Spdm**, Dynamic*, NvU32);
#define __objCreate_Spdm(ppNewObj, pParent, createFlags) \
    __nvoc_objCreate_Spdm((ppNewObj), staticCast((pParent), Dynamic), (createFlags))


// Wrapper macros
#define spdmGetCertChains_FNPTR(pSpdm) pSpdm->__spdmGetCertChains__
#define spdmGetCertChains(pGpu, pSpdm, pKeyExCertChain, pKeyExCertChainSize, pAttestationCertChain, pAttestationCertChainSize) spdmGetCertChains_DISPATCH(pGpu, pSpdm, pKeyExCertChain, pKeyExCertChainSize, pAttestationCertChain, pAttestationCertChainSize)
#define spdmGetCertChains_HAL(pGpu, pSpdm, pKeyExCertChain, pKeyExCertChainSize, pAttestationCertChain, pAttestationCertChainSize) spdmGetCertChains_DISPATCH(pGpu, pSpdm, pKeyExCertChain, pKeyExCertChainSize, pAttestationCertChain, pAttestationCertChainSize)
#define spdmGetAttestationReport_FNPTR(pSpdm) pSpdm->__spdmGetAttestationReport__
#define spdmGetAttestationReport(pGpu, pSpdm, pNonce, pAttestationReport, pAttestationReportSize, pbIsCecAttestationReportPresent, pCecAttestationReport, pCecAttestationReportSize) spdmGetAttestationReport_DISPATCH(pGpu, pSpdm, pNonce, pAttestationReport, pAttestationReportSize, pbIsCecAttestationReportPresent, pCecAttestationReport, pCecAttestationReportSize)
#define spdmGetAttestationReport_HAL(pGpu, pSpdm, pNonce, pAttestationReport, pAttestationReportSize, pbIsCecAttestationReportPresent, pCecAttestationReport, pCecAttestationReportSize) spdmGetAttestationReport_DISPATCH(pGpu, pSpdm, pNonce, pAttestationReport, pAttestationReportSize, pbIsCecAttestationReportPresent, pCecAttestationReport, pCecAttestationReportSize)
#define spdmCheckAndExecuteKeyUpdate_FNPTR(pSpdm) pSpdm->__spdmCheckAndExecuteKeyUpdate__
#define spdmCheckAndExecuteKeyUpdate(pGpu, pSpdm, keyUpdateTriggerId) spdmCheckAndExecuteKeyUpdate_DISPATCH(pGpu, pSpdm, keyUpdateTriggerId)
#define spdmCheckAndExecuteKeyUpdate_HAL(pGpu, pSpdm, keyUpdateTriggerId) spdmCheckAndExecuteKeyUpdate_DISPATCH(pGpu, pSpdm, keyUpdateTriggerId)
#define spdmSendInitRmDataCommand_FNPTR(pSpdm) pSpdm->__spdmSendInitRmDataCommand__
#define spdmSendInitRmDataCommand(pGpu, pSpdm) spdmSendInitRmDataCommand_DISPATCH(pGpu, pSpdm)
#define spdmSendInitRmDataCommand_HAL(pGpu, pSpdm) spdmSendInitRmDataCommand_DISPATCH(pGpu, pSpdm)
#define spdmRegisterForHeartbeats_FNPTR(pSpdm) pSpdm->__spdmRegisterForHeartbeats__
#define spdmRegisterForHeartbeats(pGpu, pSpdm, heartbeatPeriodSec) spdmRegisterForHeartbeats_DISPATCH(pGpu, pSpdm, heartbeatPeriodSec)
#define spdmRegisterForHeartbeats_HAL(pGpu, pSpdm, heartbeatPeriodSec) spdmRegisterForHeartbeats_DISPATCH(pGpu, pSpdm, heartbeatPeriodSec)
#define spdmUnregisterFromHeartbeats_FNPTR(pSpdm) pSpdm->__spdmUnregisterFromHeartbeats__
#define spdmUnregisterFromHeartbeats(pGpu, pSpdm) spdmUnregisterFromHeartbeats_DISPATCH(pGpu, pSpdm)
#define spdmUnregisterFromHeartbeats_HAL(pGpu, pSpdm) spdmUnregisterFromHeartbeats_DISPATCH(pGpu, pSpdm)
#define spdmMutualAuthSupported_FNPTR(pSpdm) pSpdm->__spdmMutualAuthSupported__
#define spdmMutualAuthSupported(pGpu, pSpdm) spdmMutualAuthSupported_DISPATCH(pGpu, pSpdm)
#define spdmMutualAuthSupported_HAL(pGpu, pSpdm) spdmMutualAuthSupported_DISPATCH(pGpu, pSpdm)
#define spdmDeviceInit_FNPTR(pSpdm) pSpdm->__spdmDeviceInit__
#define spdmDeviceInit(pGpu, pSpdm) spdmDeviceInit_DISPATCH(pGpu, pSpdm)
#define spdmDeviceInit_HAL(pGpu, pSpdm) spdmDeviceInit_DISPATCH(pGpu, pSpdm)
#define spdmDeviceDeinit_FNPTR(pSpdm) pSpdm->__spdmDeviceDeinit__
#define spdmDeviceDeinit(pGpu, pSpdm, bForceClear) spdmDeviceDeinit_DISPATCH(pGpu, pSpdm, bForceClear)
#define spdmDeviceDeinit_HAL(pGpu, pSpdm, bForceClear) spdmDeviceDeinit_DISPATCH(pGpu, pSpdm, bForceClear)
#define spdmDeviceSecuredSessionSupported_FNPTR(pSpdm) pSpdm->__spdmDeviceSecuredSessionSupported__
#define spdmDeviceSecuredSessionSupported(pGpu, pSpdm) spdmDeviceSecuredSessionSupported_DISPATCH(pGpu, pSpdm)
#define spdmDeviceSecuredSessionSupported_HAL(pGpu, pSpdm) spdmDeviceSecuredSessionSupported_DISPATCH(pGpu, pSpdm)
#define spdmCheckConnection_FNPTR(pSpdm) pSpdm->__spdmCheckConnection__
#define spdmCheckConnection(pGpu, pSpdm) spdmCheckConnection_DISPATCH(pGpu, pSpdm)
#define spdmCheckConnection_HAL(pGpu, pSpdm) spdmCheckConnection_DISPATCH(pGpu, pSpdm)
#define spdmMessageProcess_FNPTR(pSpdm) pSpdm->__spdmMessageProcess__
#define spdmMessageProcess(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize) spdmMessageProcess_DISPATCH(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize)
#define spdmMessageProcess_HAL(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize) spdmMessageProcess_DISPATCH(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize)
#define spdmGetCertificates_FNPTR(pSpdm) pSpdm->__spdmGetCertificates__
#define spdmGetCertificates(pGpu, pSpdm) spdmGetCertificates_DISPATCH(pGpu, pSpdm)
#define spdmGetCertificates_HAL(pGpu, pSpdm) spdmGetCertificates_DISPATCH(pGpu, pSpdm)
#define spdmGetReqEncapCertificates_FNPTR(pSpdm) pSpdm->__spdmGetReqEncapCertificates__
#define spdmGetReqEncapCertificates(pGpu, pSpdm, pEncapCertChain, pEncapCertChainSize) spdmGetReqEncapCertificates_DISPATCH(pGpu, pSpdm, pEncapCertChain, pEncapCertChainSize)
#define spdmGetReqEncapCertificates_HAL(pGpu, pSpdm, pEncapCertChain, pEncapCertChainSize) spdmGetReqEncapCertificates_DISPATCH(pGpu, pSpdm, pEncapCertChain, pEncapCertChainSize)
#define spdmGetRequesterCertificateCount_FNPTR(pSpdm) pSpdm->__spdmGetRequesterCertificateCount__
#define spdmGetRequesterCertificateCount(pGpu, pSpdm, pCertCount) spdmGetRequesterCertificateCount_DISPATCH(pGpu, pSpdm, pCertCount)
#define spdmGetRequesterCertificateCount_HAL(pGpu, pSpdm, pCertCount) spdmGetRequesterCertificateCount_DISPATCH(pGpu, pSpdm, pCertCount)
#define spdmGetIndividualCertificate_FNPTR(pSpdm) pSpdm->__spdmGetIndividualCertificate__
#define spdmGetIndividualCertificate(pGpu, pSpdm, certId, bDerFormat, pCert, pCertSize) spdmGetIndividualCertificate_DISPATCH(pGpu, pSpdm, certId, bDerFormat, pCert, pCertSize)
#define spdmGetIndividualCertificate_HAL(pGpu, pSpdm, certId, bDerFormat, pCert, pCertSize) spdmGetIndividualCertificate_DISPATCH(pGpu, pSpdm, certId, bDerFormat, pCert, pCertSize)

// Dispatch functions
static inline NV_STATUS spdmGetCertChains_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, void *pKeyExCertChain, NvU32 *pKeyExCertChainSize, void *pAttestationCertChain, NvU32 *pAttestationCertChainSize) {
    return pSpdm->__spdmGetCertChains__(pGpu, pSpdm, pKeyExCertChain, pKeyExCertChainSize, pAttestationCertChain, pAttestationCertChainSize);
}

static inline NV_STATUS spdmGetAttestationReport_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pNonce, void *pAttestationReport, NvU32 *pAttestationReportSize, NvBool *pbIsCecAttestationReportPresent, void *pCecAttestationReport, NvU32 *pCecAttestationReportSize) {
    return pSpdm->__spdmGetAttestationReport__(pGpu, pSpdm, pNonce, pAttestationReport, pAttestationReportSize, pbIsCecAttestationReportPresent, pCecAttestationReport, pCecAttestationReportSize);
}

static inline NV_STATUS spdmCheckAndExecuteKeyUpdate_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 keyUpdateTriggerId) {
    return pSpdm->__spdmCheckAndExecuteKeyUpdate__(pGpu, pSpdm, keyUpdateTriggerId);
}

static inline NV_STATUS spdmSendInitRmDataCommand_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmSendInitRmDataCommand__(pGpu, pSpdm);
}

static inline NV_STATUS spdmRegisterForHeartbeats_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 heartbeatPeriodSec) {
    return pSpdm->__spdmRegisterForHeartbeats__(pGpu, pSpdm, heartbeatPeriodSec);
}

static inline NV_STATUS spdmUnregisterFromHeartbeats_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmUnregisterFromHeartbeats__(pGpu, pSpdm);
}

static inline NvBool spdmMutualAuthSupported_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmMutualAuthSupported__(pGpu, pSpdm);
}

static inline NV_STATUS spdmDeviceInit_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmDeviceInit__(pGpu, pSpdm);
}

static inline NV_STATUS spdmDeviceDeinit_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvBool bForceClear) {
    return pSpdm->__spdmDeviceDeinit__(pGpu, pSpdm, bForceClear);
}

static inline NV_STATUS spdmDeviceSecuredSessionSupported_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmDeviceSecuredSessionSupported__(pGpu, pSpdm);
}

static inline NV_STATUS spdmCheckConnection_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmCheckConnection__(pGpu, pSpdm);
}

static inline NV_STATUS spdmMessageProcess_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pRequest, NvU32 requestSize, NvU8 *pResponse, NvU32 *pResponseSize) {
    return pSpdm->__spdmMessageProcess__(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize);
}

static inline NV_STATUS spdmGetCertificates_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return pSpdm->__spdmGetCertificates__(pGpu, pSpdm);
}

static inline NV_STATUS spdmGetReqEncapCertificates_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 **pEncapCertChain, NvU32 *pEncapCertChainSize) {
    return pSpdm->__spdmGetReqEncapCertificates__(pGpu, pSpdm, pEncapCertChain, pEncapCertChainSize);
}

static inline NV_STATUS spdmGetRequesterCertificateCount_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 *pCertCount) {
    return pSpdm->__spdmGetRequesterCertificateCount__(pGpu, pSpdm, pCertCount);
}

static inline NV_STATUS spdmGetIndividualCertificate_DISPATCH(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 certId, NvBool bDerFormat, void *pCert, NvU64 *pCertSize) {
    return pSpdm->__spdmGetIndividualCertificate__(pGpu, pSpdm, certId, bDerFormat, pCert, pCertSize);
}

NV_STATUS spdmConstruct_IMPL(struct Spdm *arg_pSpdm);


#define __nvoc_spdmConstruct(arg_pSpdm) spdmConstruct_IMPL(arg_pSpdm)
void spdmDestruct_IMPL(struct Spdm *pSpdm);


#define __nvoc_spdmDestruct(pSpdm) spdmDestruct_IMPL(pSpdm)
NV_STATUS spdmSetupCommunicationBuffers_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmSetupCommunicationBuffers(OBJGPU *pGpu, struct Spdm *pSpdm) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmSetupCommunicationBuffers(pGpu, pSpdm) spdmSetupCommunicationBuffers_IMPL(pGpu, pSpdm)
#endif //__nvoc_spdm_h_disabled

#define spdmSetupCommunicationBuffers_HAL(pGpu, pSpdm) spdmSetupCommunicationBuffers(pGpu, pSpdm)

NV_STATUS spdmContextInit_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmContextInit(OBJGPU *pGpu, struct Spdm *pSpdm) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmContextInit(pGpu, pSpdm) spdmContextInit_IMPL(pGpu, pSpdm)
#endif //__nvoc_spdm_h_disabled

#define spdmContextInit_HAL(pGpu, pSpdm) spdmContextInit(pGpu, pSpdm)

NV_STATUS spdmContextDeinit_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm, NvBool bForceClear);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmContextDeinit(OBJGPU *pGpu, struct Spdm *pSpdm, NvBool bForceClear) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmContextDeinit(pGpu, pSpdm, bForceClear) spdmContextDeinit_IMPL(pGpu, pSpdm, bForceClear)
#endif //__nvoc_spdm_h_disabled

#define spdmContextDeinit_HAL(pGpu, pSpdm, bForceClear) spdmContextDeinit(pGpu, pSpdm, bForceClear)

NV_STATUS spdmStart_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmStart(OBJGPU *pGpu, struct Spdm *pSpdm) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmStart(pGpu, pSpdm) spdmStart_IMPL(pGpu, pSpdm)
#endif //__nvoc_spdm_h_disabled

#define spdmStart_HAL(pGpu, pSpdm) spdmStart(pGpu, pSpdm)

NV_STATUS spdmSetupResponderCertCtx_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pCertResponder, NvU64 certResponderSize, void *pCertCtx, NvU32 *pCertCount);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmSetupResponderCertCtx(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pCertResponder, NvU64 certResponderSize, void *pCertCtx, NvU32 *pCertCount) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmSetupResponderCertCtx(pGpu, pSpdm, pCertResponder, certResponderSize, pCertCtx, pCertCount) spdmSetupResponderCertCtx_IMPL(pGpu, pSpdm, pCertResponder, certResponderSize, pCertCtx, pCertCount)
#endif //__nvoc_spdm_h_disabled

#define spdmSetupResponderCertCtx_HAL(pGpu, pSpdm, pCertResponder, certResponderSize, pCertCtx, pCertCount) spdmSetupResponderCertCtx(pGpu, pSpdm, pCertResponder, certResponderSize, pCertCtx, pCertCount)

NV_STATUS spdmBuildCertChainDer_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm, void *pCertRespCtx, NvU32 certCountResp, NvU8 *pCertChainOut, size_t *pCertChainOutSize);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmBuildCertChainDer(OBJGPU *pGpu, struct Spdm *pSpdm, void *pCertRespCtx, NvU32 certCountResp, NvU8 *pCertChainOut, size_t *pCertChainOutSize) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmBuildCertChainDer(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize) spdmBuildCertChainDer_IMPL(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize)
#endif //__nvoc_spdm_h_disabled

#define spdmBuildCertChainDer_HAL(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize) spdmBuildCertChainDer(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize)

NV_STATUS spdmBuildCertChainPem_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm, void *pCertRespCtx, NvU32 certCountResp, NvU8 *pCertChainOut, size_t *pCertChainOutSize);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmBuildCertChainPem(OBJGPU *pGpu, struct Spdm *pSpdm, void *pCertRespCtx, NvU32 certCountResp, NvU8 *pCertChainOut, size_t *pCertChainOutSize) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmBuildCertChainPem(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize) spdmBuildCertChainPem_IMPL(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize)
#endif //__nvoc_spdm_h_disabled

#define spdmBuildCertChainPem_HAL(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize) spdmBuildCertChainPem(pGpu, pSpdm, pCertRespCtx, certCountResp, pCertChainOut, pCertChainOutSize)

NV_STATUS spdmRetrieveExportSecret_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 keySize, NvU8 *pKeyOut);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmRetrieveExportSecret(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 keySize, NvU8 *pKeyOut) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmRetrieveExportSecret(pGpu, pSpdm, keySize, pKeyOut) spdmRetrieveExportSecret_IMPL(pGpu, pSpdm, keySize, pKeyOut)
#endif //__nvoc_spdm_h_disabled

#define spdmRetrieveExportSecret_HAL(pGpu, pSpdm, keySize, pKeyOut) spdmRetrieveExportSecret(pGpu, pSpdm, keySize, pKeyOut)

NV_STATUS spdmSendApplicationMessage_IMPL(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pRequest, NvU32 requestSize, NvU8 *pResponse, NvU32 *pResponseSize);


#ifdef __nvoc_spdm_h_disabled
static inline NV_STATUS spdmSendApplicationMessage(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pRequest, NvU32 requestSize, NvU8 *pResponse, NvU32 *pResponseSize) {
    NV_ASSERT_FAILED_PRECOMP("Spdm was disabled!");
    return NV_ERR_NOT_SUPPORTED;
}
#else //__nvoc_spdm_h_disabled
#define spdmSendApplicationMessage(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize) spdmSendApplicationMessage_IMPL(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize)
#endif //__nvoc_spdm_h_disabled

#define spdmSendApplicationMessage_HAL(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize) spdmSendApplicationMessage(pGpu, pSpdm, pRequest, requestSize, pResponse, pResponseSize)

NV_STATUS spdmGetCertChains_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, void *pKeyExCertChain, NvU32 *pKeyExCertChainSize, void *pAttestationCertChain, NvU32 *pAttestationCertChainSize);

static inline NV_STATUS spdmGetCertChains_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, void *pKeyExCertChain, NvU32 *pKeyExCertChainSize, void *pAttestationCertChain, NvU32 *pAttestationCertChainSize) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmGetAttestationReport_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pNonce, void *pAttestationReport, NvU32 *pAttestationReportSize, NvBool *pbIsCecAttestationReportPresent, void *pCecAttestationReport, NvU32 *pCecAttestationReportSize);

static inline NV_STATUS spdmGetAttestationReport_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pNonce, void *pAttestationReport, NvU32 *pAttestationReportSize, NvBool *pbIsCecAttestationReportPresent, void *pCecAttestationReport, NvU32 *pCecAttestationReportSize) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmCheckAndExecuteKeyUpdate_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 keyUpdateTriggerId);

static inline NV_STATUS spdmCheckAndExecuteKeyUpdate_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 keyUpdateTriggerId) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmSendInitRmDataCommand_GH100(OBJGPU *pGpu, struct Spdm *pSpdm);

static inline NV_STATUS spdmSendInitRmDataCommand_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmRegisterForHeartbeats_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 heartbeatPeriodSec);

static inline NV_STATUS spdmRegisterForHeartbeats_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 heartbeatPeriodSec) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmUnregisterFromHeartbeats_GH100(OBJGPU *pGpu, struct Spdm *pSpdm);

static inline NV_STATUS spdmUnregisterFromHeartbeats_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_ERR_NOT_SUPPORTED;
}

static inline NvBool spdmMutualAuthSupported_88bc07(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_TRUE;
}

static inline NvBool spdmMutualAuthSupported_3dd2c9(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_FALSE;
}

NV_STATUS spdmDeviceInit_GH100(OBJGPU *pGpu, struct Spdm *pSpdm);

static inline NV_STATUS spdmDeviceInit_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmDeviceDeinit_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvBool bForceClear);

static inline NV_STATUS spdmDeviceDeinit_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvBool bForceClear) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmDeviceSecuredSessionSupported_GH100(OBJGPU *pGpu, struct Spdm *pSpdm);

static inline NV_STATUS spdmDeviceSecuredSessionSupported_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmCheckConnection_GH100(OBJGPU *pGpu, struct Spdm *pSpdm);

static inline NV_STATUS spdmCheckConnection_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmMessageProcess_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pRequest, NvU32 requestSize, NvU8 *pResponse, NvU32 *pResponseSize);

static inline NV_STATUS spdmMessageProcess_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 *pRequest, NvU32 requestSize, NvU8 *pResponse, NvU32 *pResponseSize) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmGetCertificates_GH100(OBJGPU *pGpu, struct Spdm *pSpdm);

static inline NV_STATUS spdmGetCertificates_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmGetReqEncapCertificates_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 **pEncapCertChain, NvU32 *pEncapCertChainSize);

static inline NV_STATUS spdmGetReqEncapCertificates_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU8 **pEncapCertChain, NvU32 *pEncapCertChainSize) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmGetRequesterCertificateCount_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 *pCertCount);

NV_STATUS spdmGetRequesterCertificateCount_GB100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 *pCertCount);

static inline NV_STATUS spdmGetRequesterCertificateCount_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 *pCertCount) {
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS spdmGetIndividualCertificate_GH100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 certId, NvBool bDerFormat, void *pCert, NvU64 *pCertSize);

NV_STATUS spdmGetIndividualCertificate_GB100(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 certId, NvBool bDerFormat, void *pCert, NvU64 *pCertSize);

static inline NV_STATUS spdmGetIndividualCertificate_46f6a7(OBJGPU *pGpu, struct Spdm *pSpdm, NvU32 certId, NvBool bDerFormat, void *pCert, NvU64 *pCertSize) {
    return NV_ERR_NOT_SUPPORTED;
}

#undef PRIVATE_FIELD


#endif // NV_SPDM_H

#ifdef __cplusplus
} // extern "C"
#endif

#endif // _G_SPDM_NVOC_H_
