/* Generated from certpol.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /* COM_NO_WINDOWS_H */

#ifndef __certpol_h__
#define __certpol_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __ICertPolicy_FWD_DEFINED__
#define __ICertPolicy_FWD_DEFINED__
typedef interface ICertPolicy ICertPolicy;
#endif /* __ICertPolicy_FWD_DEFINED__ */

#ifndef __ICertPolicy2_FWD_DEFINED__
#define __ICertPolicy2_FWD_DEFINED__
typedef interface ICertPolicy2 ICertPolicy2;
#endif /* __ICertPolicy2_FWD_DEFINED__ */

#ifndef __INDESPolicy_FWD_DEFINED__
#define __INDESPolicy_FWD_DEFINED__
typedef interface INDESPolicy INDESPolicy;
#endif /* __INDESPolicy_FWD_DEFINED__ */

/* Headers for imported files */

#include "wtypes.h"
#include "certmod.h"
#include "certbase.h"
#include "certbcli.h"

#include "oaidl.h"

#include "oaidl.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * ICertPolicy interface
 */
#ifndef __ICertPolicy_INTERFACE_DEFINED__
#define __ICertPolicy_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertPolicy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICertPolicyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICertPolicy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICertPolicy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICertPolicy *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ICertPolicy *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ICertPolicy *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ICertPolicy *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ICertPolicy *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** ICertPolicy methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        ICertPolicy *This,
        const BSTR strConfig);

    HRESULT (STDMETHODCALLTYPE *VerifyRequest)(
        ICertPolicy *This,
        const BSTR strConfig,
        LONG Context,
        LONG bNewRequest,
        LONG Flags,
        LONG *pDisposition);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        ICertPolicy *This,
        BSTR *pstrDescription);

    HRESULT (STDMETHODCALLTYPE *ShutDown)(
        ICertPolicy *This);

    END_INTERFACE
} ICertPolicyVtbl;

interface ICertPolicy {
    CONST_VTBL ICertPolicyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICertPolicy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICertPolicy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICertPolicy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define ICertPolicy_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define ICertPolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define ICertPolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define ICertPolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** ICertPolicy methods ***/
#define ICertPolicy_Initialize(This,strConfig) \
    ((This)->lpVtbl->Initialize(This,strConfig))
#define ICertPolicy_VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition) \
    ((This)->lpVtbl->VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition))
#define ICertPolicy_GetDescription(This,pstrDescription) \
    ((This)->lpVtbl->GetDescription(This,pstrDescription))
#define ICertPolicy_ShutDown(This) \
    ((This)->lpVtbl->ShutDown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICertPolicy_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICertPolicy2 interface
 */
#ifndef __ICertPolicy2_INTERFACE_DEFINED__
#define __ICertPolicy2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertPolicy2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICertPolicy2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICertPolicy2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICertPolicy2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICertPolicy2 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ICertPolicy2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ICertPolicy2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ICertPolicy2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ICertPolicy2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** ICertPolicy methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        ICertPolicy2 *This,
        const BSTR strConfig);

    HRESULT (STDMETHODCALLTYPE *VerifyRequest)(
        ICertPolicy2 *This,
        const BSTR strConfig,
        LONG Context,
        LONG bNewRequest,
        LONG Flags,
        LONG *pDisposition);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        ICertPolicy2 *This,
        BSTR *pstrDescription);

    HRESULT (STDMETHODCALLTYPE *ShutDown)(
        ICertPolicy2 *This);

    /*** ICertPolicy2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetManageModule)(
        ICertPolicy2 *This,
        ICertManageModule **ppManageModule);

    END_INTERFACE
} ICertPolicy2Vtbl;

interface ICertPolicy2 {
    CONST_VTBL ICertPolicy2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICertPolicy2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICertPolicy2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICertPolicy2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define ICertPolicy2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define ICertPolicy2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define ICertPolicy2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define ICertPolicy2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** ICertPolicy methods ***/
#define ICertPolicy2_Initialize(This,strConfig) \
    ((This)->lpVtbl->Initialize(This,strConfig))
#define ICertPolicy2_VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition) \
    ((This)->lpVtbl->VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition))
#define ICertPolicy2_GetDescription(This,pstrDescription) \
    ((This)->lpVtbl->GetDescription(This,pstrDescription))
#define ICertPolicy2_ShutDown(This) \
    ((This)->lpVtbl->ShutDown(This))
/*** ICertPolicy2 methods ***/
#define ICertPolicy2_GetManageModule(This,ppManageModule) \
    ((This)->lpVtbl->GetManageModule(This,ppManageModule))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICertPolicy2_INTERFACE_DEFINED__ */

typedef enum X509SCEPMessageType {
    SCEPMessageUnknown = -1,
    SCEPMessageCertResponse = 3,
    SCEPMessagePKCSRequest = 19,
    SCEPMessageGetCertInitial = 20,
    SCEPMessageGetCert = 21,
    SCEPMessageGetCRL = 22,
    SCEPMessageClaimChallengeAnswer = 41
} X509SCEPMessageType;

typedef enum X509SCEPDisposition {
    SCEPDispositionUnknown = -1,
    SCEPDispositionSuccess = 0,
    SCEPDispositionFailure = 2,
    SCEPDispositionPending = 3,
    SCEPDispositionPendingChallenge = 11
} X509SCEPDisposition;

typedef enum X509SCEPFailInfo {
    SCEPFailUnknown = -1,
    SCEPFailBadAlgorithm = 0,
    SCEPFailBadMessageCheck = 1,
    SCEPFailBadRequest = 2,
    SCEPFailBadTime = 3,
    SCEPFailBadCertId = 4
} X509SCEPFailInfo;

/*****************************************************************************
 * INDESPolicy interface
 */
#ifndef __INDESPolicy_INTERFACE_DEFINED__
#define __INDESPolicy_INTERFACE_DEFINED__

EXTERN_C const IID IID_INDESPolicy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INDESPolicyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INDESPolicy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INDESPolicy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INDESPolicy *This);

    /*** INDESPolicy methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INDESPolicy *This);

    HRESULT (STDMETHODCALLTYPE *Uninitialize)(
        INDESPolicy *This);

    HRESULT (STDMETHODCALLTYPE *GenerateChallenge)(
        INDESPolicy *This,
        PCWSTR pwszTemplate,
        PCWSTR pwszParams,
        PWSTR *ppwszResponse);

    HRESULT (STDMETHODCALLTYPE *VerifyRequest)(
        INDESPolicy *This,
        CERTTRANSBLOB *pctbRequest,
        CERTTRANSBLOB *pctbSigningCertEncoded,
        PCWSTR pwszTemplate,
        PCWSTR pwszTransactionId,
        BOOL *pfVerified);

    HRESULT (STDMETHODCALLTYPE *Notify)(
        INDESPolicy *This,
        PCWSTR pwszChallenge,
        PCWSTR pwszTransactionId,
        X509SCEPDisposition disposition,
        LONG lastHResult,
        CERTTRANSBLOB *pctbIssuedCertEncoded);

    END_INTERFACE
} INDESPolicyVtbl;

interface INDESPolicy {
    CONST_VTBL INDESPolicyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INDESPolicy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INDESPolicy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INDESPolicy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INDESPolicy methods ***/
#define INDESPolicy_Initialize(This) \
    ((This)->lpVtbl->Initialize(This))
#define INDESPolicy_Uninitialize(This) \
    ((This)->lpVtbl->Uninitialize(This))
#define INDESPolicy_GenerateChallenge(This,pwszTemplate,pwszParams,ppwszResponse) \
    ((This)->lpVtbl->GenerateChallenge(This,pwszTemplate,pwszParams,ppwszResponse))
#define INDESPolicy_VerifyRequest(This,pctbRequest,pctbSigningCertEncoded,pwszTemplate,pwszTransactionId,pfVerified) \
    ((This)->lpVtbl->VerifyRequest(This,pctbRequest,pctbSigningCertEncoded,pwszTemplate,pwszTransactionId,pfVerified))
#define INDESPolicy_Notify(This,pwszChallenge,pwszTransactionId,disposition,lastHResult,pctbIssuedCertEncoded) \
    ((This)->lpVtbl->Notify(This,pwszChallenge,pwszTransactionId,disposition,lastHResult,pctbIssuedCertEncoded))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INDESPolicy_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);

/* End additional prototypes for all interfaces */

#endif /* __certpol_h__ */
