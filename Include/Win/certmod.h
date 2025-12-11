/* Generated from certmod.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __certmod_h__
#define __certmod_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __ICertManageModule_FWD_DEFINED__
#define __ICertManageModule_FWD_DEFINED__
typedef interface ICertManageModule ICertManageModule;
#endif /* __ICertManageModule_FWD_DEFINED__ */

/* Headers for imported files */

#include "wtypes.h"

#include "oaidl.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define CMM_REFRESHONLY  (0x1)
#define CMM_READONLY  (0x2)

#define wszCMM_PROP_NAME  (L"Name")
#define wszCMM_PROP_DESCRIPTION  (L"Description")
#define wszCMM_PROP_COPYRIGHT  (L"Copyright")
#define wszCMM_PROP_FILEVER  (L"File Version")
#define wszCMM_PROP_PRODUCTVER  (L"Product Version")

#define wszCMM_PROP_DISPLAY_HWND  (L"HWND")

#define wszCMM_PROP_ISMULTITHREADED  (L"IsMultiThreaded")

/*****************************************************************************
 * ICertManageModule interface
 */
#ifndef __ICertManageModule_INTERFACE_DEFINED__
#define __ICertManageModule_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertManageModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICertManageModuleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICertManageModule *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICertManageModule *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICertManageModule *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ICertManageModule *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ICertManageModule *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ICertManageModule *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ICertManageModule *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** ICertManageModule methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        ICertManageModule *This,
        const BSTR strConfig,
        BSTR strStorageLocation,
        BSTR strPropertyName,
        LONG Flags,
        VARIANT *pvarProperty);

    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        ICertManageModule *This,
        const BSTR strConfig,
        BSTR strStorageLocation,
        BSTR strPropertyName,
        LONG Flags,
        const VARIANT *pvarProperty);

    HRESULT (STDMETHODCALLTYPE *Configure)(
        ICertManageModule *This,
        const BSTR strConfig,
        BSTR strStorageLocation,
        LONG Flags);

    END_INTERFACE
} ICertManageModuleVtbl;

interface ICertManageModule {
    CONST_VTBL ICertManageModuleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICertManageModule_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICertManageModule_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICertManageModule_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define ICertManageModule_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define ICertManageModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define ICertManageModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define ICertManageModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** ICertManageModule methods ***/
#define ICertManageModule_GetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty) \
    ((This)->lpVtbl->GetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty))
#define ICertManageModule_SetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty) \
    ((This)->lpVtbl->SetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty))
#define ICertManageModule_Configure(This,strConfig,strStorageLocation,Flags) \
    ((This)->lpVtbl->Configure(This,strConfig,strStorageLocation,Flags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICertManageModule_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER VARIANT_UserSize(ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal(ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(ULONG *, VARIANT *);

/* End additional prototypes for all interfaces */

#endif /* __certmod_h__ */
