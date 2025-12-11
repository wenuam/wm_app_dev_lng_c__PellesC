/* Generated from wbemads.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __wbemads_h__
#define __wbemads_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __WMIExtension_FWD_DEFINED__
#define __WMIExtension_FWD_DEFINED__
typedef struct WMIExtension WMIExtension;
#endif /* __WMIExtension_FWD_DEFINED__ */

#ifndef __IWMIExtension_FWD_DEFINED__
#define __IWMIExtension_FWD_DEFINED__
typedef interface IWMIExtension IWMIExtension;
#endif /* __IWMIExtension_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"
#include "wbemdisp.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)

#ifndef __WMIEXTENSIONLib_LIBRARY_DEFINED__
#define __WMIEXTENSIONLib_LIBRARY_DEFINED__



#ifndef __IWMIExtension_FWD_DEFINED__
#define __IWMIExtension_FWD_DEFINED__
typedef interface IWMIExtension IWMIExtension;
#endif /* __IWMIExtension_FWD_DEFINED__ */

/*****************************************************************************
 * WMIExtension coclass
 */

EXTERN_C const CLSID CLSID_WMIExtension;
#endif /* __WMIEXTENSIONLib_LIBRARY_DEFINED__ */

/*****************************************************************************
 * IWMIExtension interface
 */
#ifndef __IWMIExtension_INTERFACE_DEFINED__
#define __IWMIExtension_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWMIExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWMIExtensionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWMIExtension *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWMIExtension *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWMIExtension *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IWMIExtension *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IWMIExtension *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IWMIExtension *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IWMIExtension *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IWMIExtension methods ***/
    HRESULT (STDMETHODCALLTYPE *get_WMIObjectPath)(
        IWMIExtension *This,
        BSTR *strWMIObjectPath);

    HRESULT (STDMETHODCALLTYPE *GetWMIObject)(
        IWMIExtension *This,
        ISWbemObject **objWMIObject);

    HRESULT (STDMETHODCALLTYPE *GetWMIServices)(
        IWMIExtension *This,
        ISWbemServices **objWMIServices);

    END_INTERFACE
} IWMIExtensionVtbl;

interface IWMIExtension {
    CONST_VTBL IWMIExtensionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWMIExtension_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWMIExtension_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWMIExtension_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IWMIExtension_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IWMIExtension_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IWMIExtension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IWMIExtension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IWMIExtension methods ***/
#define IWMIExtension_get_WMIObjectPath(This,strWMIObjectPath) \
    ((This)->lpVtbl->get_WMIObjectPath(This,strWMIObjectPath))
#define IWMIExtension_GetWMIObject(This,objWMIObject) \
    ((This)->lpVtbl->GetWMIObject(This,objWMIObject))
#define IWMIExtension_GetWMIServices(This,objWMIServices) \
    ((This)->lpVtbl->GetWMIServices(This,objWMIServices))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWMIExtension_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);

/* End additional prototypes for all interfaces */

#endif /* __wbemads_h__ */
