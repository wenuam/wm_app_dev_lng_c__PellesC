/* Generated from unknwnbase.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __unknwnbase_h__
#define __unknwnbase_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IUnknown_FWD_DEFINED__
#define __IUnknown_FWD_DEFINED__
typedef interface IUnknown IUnknown;
#endif /* __IUnknown_FWD_DEFINED__ */

#ifndef __AsyncIUnknown_FWD_DEFINED__
#define __AsyncIUnknown_FWD_DEFINED__
typedef interface AsyncIUnknown AsyncIUnknown;
#endif /* __AsyncIUnknown_FWD_DEFINED__ */

#ifndef __IClassFactory_FWD_DEFINED__
#define __IClassFactory_FWD_DEFINED__
typedef interface IClassFactory IClassFactory;
#endif /* __IClassFactory_FWD_DEFINED__ */

/* Headers for imported files */

#include "wtypesbase.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IUnknown interface
 */
#ifndef __IUnknown_INTERFACE_DEFINED__
#define __IUnknown_INTERFACE_DEFINED__

typedef IUnknown *LPUNKNOWN;

EXTERN_C const IID IID_IUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUnknown *This);

    END_INTERFACE
} IUnknownVtbl;

interface IUnknown {
    CONST_VTBL IUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUnknown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUnknown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUnknown_Release(This) \
    ((This)->lpVtbl->Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUnknown_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * AsyncIUnknown interface
 */
#ifndef __AsyncIUnknown_INTERFACE_DEFINED__
#define __AsyncIUnknown_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIUnknown *This);

    /*** AsyncIUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_QueryInterface)(
        AsyncIUnknown *This,
        REFIID riid);

    HRESULT (STDMETHODCALLTYPE *Finish_QueryInterface)(
        AsyncIUnknown *This,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *Begin_AddRef)(
        AsyncIUnknown *This);

    ULONG (STDMETHODCALLTYPE *Finish_AddRef)(
        AsyncIUnknown *This);

    HRESULT (STDMETHODCALLTYPE *Begin_Release)(
        AsyncIUnknown *This);

    ULONG (STDMETHODCALLTYPE *Finish_Release)(
        AsyncIUnknown *This);

    END_INTERFACE
} AsyncIUnknownVtbl;

interface AsyncIUnknown {
    CONST_VTBL AsyncIUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIUnknown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIUnknown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIUnknown_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIUnknown methods ***/
#define AsyncIUnknown_Begin_QueryInterface(This,riid) \
    ((This)->lpVtbl->Begin_QueryInterface(This,riid))
#define AsyncIUnknown_Finish_QueryInterface(This,ppvObject) \
    ((This)->lpVtbl->Finish_QueryInterface(This,ppvObject))
#define AsyncIUnknown_Begin_AddRef(This) \
    ((This)->lpVtbl->Begin_AddRef(This))
#define AsyncIUnknown_Finish_AddRef(This) \
    ((This)->lpVtbl->Finish_AddRef(This))
#define AsyncIUnknown_Begin_Release(This) \
    ((This)->lpVtbl->Begin_Release(This))
#define AsyncIUnknown_Finish_Release(This) \
    ((This)->lpVtbl->Finish_Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __AsyncIUnknown_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IClassFactory interface
 */
#ifndef __IClassFactory_INTERFACE_DEFINED__
#define __IClassFactory_INTERFACE_DEFINED__

typedef IClassFactory *LPCLASSFACTORY;

EXTERN_C const IID IID_IClassFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactory *This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactory *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactory *This,
        BOOL fLock);

    END_INTERFACE
} IClassFactoryVtbl;

interface IClassFactory {
    CONST_VTBL IClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClassFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IClassFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IClassFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IClassFactory methods ***/
#define IClassFactory_CreateInstance(This,pUnkOuter,riid,ppvObject) \
    ((This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject))
#define IClassFactory_LockServer(This,fLock) \
    ((This)->lpVtbl->LockServer(This,fLock))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IClassFactory_RemoteCreateInstance_Proxy(
    IClassFactory *This,
    REFIID riid,
    IUnknown **ppvObject);

void __RPC_STUB IClassFactory_RemoteCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT __stdcall IClassFactory_RemoteLockServer_Proxy(
    IClassFactory *This,
    BOOL fLock);

void __RPC_STUB IClassFactory_RemoteLockServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IClassFactory_CreateInstance_Proxy(
    IUnknown *pUnkOuter,
    REFIID riid,
    void **ppvObject);
HRESULT IClassFactory_CreateInstance_Stub(
    REFIID riid,
    IUnknown **ppvObject);
HRESULT IClassFactory_LockServer_Proxy(
    BOOL fLock);
HRESULT __stdcall IClassFactory_LockServer_Stub(
    BOOL fLock);
#endif /* __IClassFactory_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __unknwnbase_h__ */
