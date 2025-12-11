/* Generated from servprov.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __servprov_h__
#define __servprov_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IServiceProvider_FWD_DEFINED__
#define __IServiceProvider_FWD_DEFINED__
typedef interface IServiceProvider IServiceProvider;
#endif /* __IServiceProvider_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"


#pragma comment(lib,"uuid.lib")

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef __IServiceProvider_FWD_DEFINED__
#define __IServiceProvider_FWD_DEFINED__
typedef interface IServiceProvider IServiceProvider;
#endif /* __IServiceProvider_FWD_DEFINED__ */

/*****************************************************************************
 * IServiceProvider interface
 */
#ifndef __IServiceProvider_INTERFACE_DEFINED__
#define __IServiceProvider_INTERFACE_DEFINED__

typedef IServiceProvider *LPSERVICEPROVIDER;

EXTERN_C const IID IID_IServiceProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IServiceProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IServiceProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IServiceProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IServiceProvider *This);

    /*** IServiceProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryService)(
        IServiceProvider *This,
        REFGUID guidService,
        REFIID riid,
        void **ppvObject);

    END_INTERFACE
} IServiceProviderVtbl;

interface IServiceProvider {
    CONST_VTBL IServiceProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IServiceProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IServiceProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IServiceProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IServiceProvider methods ***/
#define IServiceProvider_QueryService(This,guidService,riid,ppvObject) \
    ((This)->lpVtbl->QueryService(This,guidService,riid,ppvObject))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IServiceProvider_RemoteQueryService_Proxy(
    IServiceProvider *This,
    REFGUID guidService,
    REFIID riid,
    IUnknown **ppvObject);

void __RPC_STUB IServiceProvider_RemoteQueryService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IServiceProvider_QueryService_Proxy(
    REFGUID guidService,
    REFIID riid,
    void **ppvObject);
HRESULT IServiceProvider_QueryService_Stub(
    REFGUID guidService,
    REFIID riid,
    IUnknown **ppvObject);
#endif /* __IServiceProvider_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __servprov_h__ */
