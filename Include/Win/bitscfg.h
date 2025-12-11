/* Generated from bitscfg.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bitscfg_h__
#define __bitscfg_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBITSExtensionSetup_FWD_DEFINED__
#define __IBITSExtensionSetup_FWD_DEFINED__
typedef interface IBITSExtensionSetup IBITSExtensionSetup;
#endif /* __IBITSExtensionSetup_FWD_DEFINED__ */

#ifndef __IBITSExtensionSetupFactory_FWD_DEFINED__
#define __IBITSExtensionSetupFactory_FWD_DEFINED__
typedef interface IBITSExtensionSetupFactory IBITSExtensionSetupFactory;
#endif /* __IBITSExtensionSetupFactory_FWD_DEFINED__ */

#ifndef __BITSExtensionSetupFactory_FWD_DEFINED__
#define __BITSExtensionSetupFactory_FWD_DEFINED__
typedef struct BITSExtensionSetupFactory BITSExtensionSetupFactory;
#endif /* __BITSExtensionSetupFactory_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"
#include "mstask.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBITSExtensionSetup interface
 */
#ifndef __IBITSExtensionSetup_INTERFACE_DEFINED__
#define __IBITSExtensionSetup_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBITSExtensionSetup;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBITSExtensionSetupVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBITSExtensionSetup *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBITSExtensionSetup *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBITSExtensionSetup *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IBITSExtensionSetup *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IBITSExtensionSetup *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IBITSExtensionSetup *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IBITSExtensionSetup *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IBITSExtensionSetup methods ***/
    HRESULT (STDMETHODCALLTYPE *EnableBITSUploads)(
        IBITSExtensionSetup *This);

    HRESULT (STDMETHODCALLTYPE *DisableBITSUploads)(
        IBITSExtensionSetup *This);

    HRESULT (STDMETHODCALLTYPE *GetCleanupTaskName)(
        IBITSExtensionSetup *This,
        BSTR *pTaskName);

    HRESULT (STDMETHODCALLTYPE *GetCleanupTask)(
        IBITSExtensionSetup *This,
        REFIID riid,
        IUnknown **ppUnk);

    END_INTERFACE
} IBITSExtensionSetupVtbl;

interface IBITSExtensionSetup {
    CONST_VTBL IBITSExtensionSetupVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBITSExtensionSetup_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBITSExtensionSetup_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBITSExtensionSetup_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IBITSExtensionSetup_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IBITSExtensionSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IBITSExtensionSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IBITSExtensionSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IBITSExtensionSetup methods ***/
#define IBITSExtensionSetup_EnableBITSUploads(This) \
    ((This)->lpVtbl->EnableBITSUploads(This))
#define IBITSExtensionSetup_DisableBITSUploads(This) \
    ((This)->lpVtbl->DisableBITSUploads(This))
#define IBITSExtensionSetup_GetCleanupTaskName(This,pTaskName) \
    ((This)->lpVtbl->GetCleanupTaskName(This,pTaskName))
#define IBITSExtensionSetup_GetCleanupTask(This,riid,ppUnk) \
    ((This)->lpVtbl->GetCleanupTask(This,riid,ppUnk))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBITSExtensionSetup_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBITSExtensionSetupFactory interface
 */
#ifndef __IBITSExtensionSetupFactory_INTERFACE_DEFINED__
#define __IBITSExtensionSetupFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBITSExtensionSetupFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBITSExtensionSetupFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBITSExtensionSetupFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBITSExtensionSetupFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBITSExtensionSetupFactory *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IBITSExtensionSetupFactory *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IBITSExtensionSetupFactory *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IBITSExtensionSetupFactory *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IBITSExtensionSetupFactory *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IBITSExtensionSetupFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IBITSExtensionSetupFactory *This,
        BSTR Path,
        IBITSExtensionSetup **ppExtensionSetup);

    END_INTERFACE
} IBITSExtensionSetupFactoryVtbl;

interface IBITSExtensionSetupFactory {
    CONST_VTBL IBITSExtensionSetupFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBITSExtensionSetupFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBITSExtensionSetupFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBITSExtensionSetupFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IBITSExtensionSetupFactory_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IBITSExtensionSetupFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IBITSExtensionSetupFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IBITSExtensionSetupFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IBITSExtensionSetupFactory methods ***/
#define IBITSExtensionSetupFactory_GetObject(This,Path,ppExtensionSetup) \
    ((This)->lpVtbl->GetObject(This,Path,ppExtensionSetup))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBITSExtensionSetupFactory_INTERFACE_DEFINED__ */

#ifndef __BITSExtensionSetup_LIBRARY_DEFINED__
#define __BITSExtensionSetup_LIBRARY_DEFINED__


/*****************************************************************************
 * BITSExtensionSetupFactory coclass
 */

EXTERN_C const CLSID CLSID_BITSExtensionSetupFactory;
#endif /* __BITSExtensionSetup_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);

/* End additional prototypes for all interfaces */

#endif /* __bitscfg_h__ */
