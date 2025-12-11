/* Generated from structuredquerycondition.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __structuredquerycondition_h__
#define __structuredquerycondition_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IRichChunk_FWD_DEFINED__
#define __IRichChunk_FWD_DEFINED__
typedef interface IRichChunk IRichChunk;
#endif /* __IRichChunk_FWD_DEFINED__ */

#ifndef __ICondition_FWD_DEFINED__
#define __ICondition_FWD_DEFINED__
typedef interface ICondition ICondition;
#endif /* __ICondition_FWD_DEFINED__ */

#ifndef __ICondition2_FWD_DEFINED__
#define __ICondition2_FWD_DEFINED__
typedef interface ICondition2 ICondition2;
#endif /* __ICondition2_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"
#include "objidl.h"
#include "propidl.h"


#include <winapifamily.h>

typedef enum tagCONDITION_TYPE {
    CT_AND_CONDITION = 0,
    CT_OR_CONDITION = 1,
    CT_NOT_CONDITION = 2,
    CT_LEAF_CONDITION = 3
} CONDITION_TYPE;

typedef enum tagCONDITION_OPERATION {
    COP_IMPLICIT = 0,
    COP_EQUAL = 1,
    COP_NOTEQUAL = 2,
    COP_LESSTHAN = 3,
    COP_GREATERTHAN = 4,
    COP_LESSTHANOREQUAL = 5,
    COP_GREATERTHANOREQUAL = 6,
    COP_VALUE_STARTSWITH = 7,
    COP_VALUE_ENDSWITH = 8,
    COP_VALUE_CONTAINS = 9,
    COP_VALUE_NOTCONTAINS = 10,
    COP_DOSWILDCARDS = 11,
    COP_WORD_EQUAL = 12,
    COP_WORD_STARTSWITH = 13,
    COP_APPLICATION_SPECIFIC = 14
} CONDITION_OPERATION;

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IRichChunk interface
 */
#ifndef __IRichChunk_INTERFACE_DEFINED__
#define __IRichChunk_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRichChunk;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRichChunkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRichChunk *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRichChunk *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRichChunk *This);

    /*** IRichChunk methods ***/
    HRESULT (STDMETHODCALLTYPE *GetData)(
        IRichChunk *This,
        ULONG *pFirstPos,
        ULONG *pLength,
        LPWSTR *ppsz,
        PROPVARIANT *pValue);

    END_INTERFACE
} IRichChunkVtbl;

interface IRichChunk {
    CONST_VTBL IRichChunkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRichChunk_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRichChunk_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRichChunk_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRichChunk methods ***/
#define IRichChunk_GetData(This,pFirstPos,pLength,ppsz,pValue) \
    ((This)->lpVtbl->GetData(This,pFirstPos,pLength,ppsz,pValue))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IRichChunk_RemoteGetData_Proxy(
    IRichChunk *This,
    ULONG *pFirstPos,
    ULONG *pLength,
    LPWSTR *ppsz,
    PROPVARIANT *pValue);

void __RPC_STUB IRichChunk_RemoteGetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IRichChunk_GetData_Proxy(
    ULONG *pFirstPos,
    ULONG *pLength,
    LPWSTR *ppsz,
    PROPVARIANT *pValue);
HRESULT IRichChunk_GetData_Stub(
    ULONG *pFirstPos,
    ULONG *pLength,
    LPWSTR *ppsz,
    PROPVARIANT *pValue);
#endif /* __IRichChunk_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICondition interface
 */
#ifndef __ICondition_INTERFACE_DEFINED__
#define __ICondition_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IConditionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICondition *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICondition *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICondition *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        ICondition *This,
        CLSID *pClassID);

    /*** IPersistStream methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        ICondition *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        ICondition *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *Save)(
        ICondition *This,
        IStream *pStm,
        BOOL fClearDirty);

    HRESULT (STDMETHODCALLTYPE *GetSizeMax)(
        ICondition *This,
        ULARGE_INTEGER *pcbSize);

    /*** ICondition methods ***/
    HRESULT (STDMETHODCALLTYPE *GetConditionType)(
        ICondition *This,
        CONDITION_TYPE *pNodeType);

    HRESULT (STDMETHODCALLTYPE *GetSubConditions)(
        ICondition *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetComparisonInfo)(
        ICondition *This,
        LPWSTR *ppszPropertyName,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar);

    HRESULT (STDMETHODCALLTYPE *GetValueType)(
        ICondition *This,
        LPWSTR *ppszValueTypeName);

    HRESULT (STDMETHODCALLTYPE *GetValueNormalization)(
        ICondition *This,
        LPWSTR *ppszNormalization);

    HRESULT (STDMETHODCALLTYPE *GetInputTerms)(
        ICondition *This,
        IRichChunk **ppPropertyTerm,
        IRichChunk **ppOperationTerm,
        IRichChunk **ppValueTerm);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ICondition *This,
        ICondition **ppc);

    END_INTERFACE
} IConditionVtbl;

interface ICondition {
    CONST_VTBL IConditionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICondition_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICondition_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICondition_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define ICondition_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistStream methods ***/
#define ICondition_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define ICondition_Load(This,pStm) \
    ((This)->lpVtbl->Load(This,pStm))
#define ICondition_Save(This,pStm,fClearDirty) \
    ((This)->lpVtbl->Save(This,pStm,fClearDirty))
#define ICondition_GetSizeMax(This,pcbSize) \
    ((This)->lpVtbl->GetSizeMax(This,pcbSize))
/*** ICondition methods ***/
#define ICondition_GetConditionType(This,pNodeType) \
    ((This)->lpVtbl->GetConditionType(This,pNodeType))
#define ICondition_GetSubConditions(This,riid,ppv) \
    ((This)->lpVtbl->GetSubConditions(This,riid,ppv))
#define ICondition_GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) \
    ((This)->lpVtbl->GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar))
#define ICondition_GetValueType(This,ppszValueTypeName) \
    ((This)->lpVtbl->GetValueType(This,ppszValueTypeName))
#define ICondition_GetValueNormalization(This,ppszNormalization) \
    ((This)->lpVtbl->GetValueNormalization(This,ppszNormalization))
#define ICondition_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) \
    ((This)->lpVtbl->GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm))
#define ICondition_Clone(This,ppc) \
    ((This)->lpVtbl->Clone(This,ppc))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ICondition_RemoteGetComparisonInfo_Proxy(
    ICondition *This,
    LPWSTR *ppszPropertyName,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);

void __RPC_STUB ICondition_RemoteGetComparisonInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ICondition_RemoteGetInputTerms_Proxy(
    ICondition *This,
    IRichChunk **ppPropertyTerm,
    IRichChunk **ppOperationTerm,
    IRichChunk **ppValueTerm);

void __RPC_STUB ICondition_RemoteGetInputTerms_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ICondition_GetComparisonInfo_Proxy(
    LPWSTR *ppszPropertyName,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
HRESULT ICondition_GetComparisonInfo_Stub(
    LPWSTR *ppszPropertyName,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
HRESULT ICondition_GetInputTerms_Proxy(
    IRichChunk **ppPropertyTerm,
    IRichChunk **ppOperationTerm,
    IRichChunk **ppValueTerm);
HRESULT ICondition_GetInputTerms_Stub(
    IRichChunk **ppPropertyTerm,
    IRichChunk **ppOperationTerm,
    IRichChunk **ppValueTerm);
#endif /* __ICondition_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICondition2 interface
 */
#ifndef __ICondition2_INTERFACE_DEFINED__
#define __ICondition2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICondition2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICondition2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICondition2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICondition2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICondition2 *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        ICondition2 *This,
        CLSID *pClassID);

    /*** IPersistStream methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        ICondition2 *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        ICondition2 *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *Save)(
        ICondition2 *This,
        IStream *pStm,
        BOOL fClearDirty);

    HRESULT (STDMETHODCALLTYPE *GetSizeMax)(
        ICondition2 *This,
        ULARGE_INTEGER *pcbSize);

    /*** ICondition methods ***/
    HRESULT (STDMETHODCALLTYPE *GetConditionType)(
        ICondition2 *This,
        CONDITION_TYPE *pNodeType);

    HRESULT (STDMETHODCALLTYPE *GetSubConditions)(
        ICondition2 *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetComparisonInfo)(
        ICondition2 *This,
        LPWSTR *ppszPropertyName,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar);

    HRESULT (STDMETHODCALLTYPE *GetValueType)(
        ICondition2 *This,
        LPWSTR *ppszValueTypeName);

    HRESULT (STDMETHODCALLTYPE *GetValueNormalization)(
        ICondition2 *This,
        LPWSTR *ppszNormalization);

    HRESULT (STDMETHODCALLTYPE *GetInputTerms)(
        ICondition2 *This,
        IRichChunk **ppPropertyTerm,
        IRichChunk **ppOperationTerm,
        IRichChunk **ppValueTerm);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ICondition2 *This,
        ICondition **ppc);

    /*** ICondition2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLocale)(
        ICondition2 *This,
        LPWSTR *ppszLocaleName);

    HRESULT (STDMETHODCALLTYPE *GetLeafConditionInfo)(
        ICondition2 *This,
        PROPERTYKEY *ppropkey,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar);

    END_INTERFACE
} ICondition2Vtbl;

interface ICondition2 {
    CONST_VTBL ICondition2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICondition2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICondition2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICondition2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define ICondition2_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistStream methods ***/
#define ICondition2_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define ICondition2_Load(This,pStm) \
    ((This)->lpVtbl->Load(This,pStm))
#define ICondition2_Save(This,pStm,fClearDirty) \
    ((This)->lpVtbl->Save(This,pStm,fClearDirty))
#define ICondition2_GetSizeMax(This,pcbSize) \
    ((This)->lpVtbl->GetSizeMax(This,pcbSize))
/*** ICondition methods ***/
#define ICondition2_GetConditionType(This,pNodeType) \
    ((This)->lpVtbl->GetConditionType(This,pNodeType))
#define ICondition2_GetSubConditions(This,riid,ppv) \
    ((This)->lpVtbl->GetSubConditions(This,riid,ppv))
#define ICondition2_GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) \
    ((This)->lpVtbl->GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar))
#define ICondition2_GetValueType(This,ppszValueTypeName) \
    ((This)->lpVtbl->GetValueType(This,ppszValueTypeName))
#define ICondition2_GetValueNormalization(This,ppszNormalization) \
    ((This)->lpVtbl->GetValueNormalization(This,ppszNormalization))
#define ICondition2_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) \
    ((This)->lpVtbl->GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm))
#define ICondition2_Clone(This,ppc) \
    ((This)->lpVtbl->Clone(This,ppc))
/*** ICondition2 methods ***/
#define ICondition2_GetLocale(This,ppszLocaleName) \
    ((This)->lpVtbl->GetLocale(This,ppszLocaleName))
#define ICondition2_GetLeafConditionInfo(This,ppropkey,pcop,ppropvar) \
    ((This)->lpVtbl->GetLeafConditionInfo(This,ppropkey,pcop,ppropvar))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ICondition2_RemoteGetLeafConditionInfo_Proxy(
    ICondition2 *This,
    PROPERTYKEY *ppropkey,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);

void __RPC_STUB ICondition2_RemoteGetLeafConditionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ICondition2_GetLeafConditionInfo_Proxy(
    PROPERTYKEY *ppropkey,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
HRESULT ICondition2_GetLeafConditionInfo_Stub(
    PROPERTYKEY *ppropkey,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
#endif /* __ICondition2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER LPSAFEARRAY_UserSize(ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(ULONG *, LPSAFEARRAY *);

/* End additional prototypes for all interfaces */

#endif /* __structuredquerycondition_h__ */
