/* Generated from wbemtran.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __wbemtran_h__
#define __wbemtran_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __WbemLevel1Login_FWD_DEFINED__
#define __WbemLevel1Login_FWD_DEFINED__
typedef struct WbemLevel1Login WbemLevel1Login;
#endif /* __WbemLevel1Login_FWD_DEFINED__ */

#ifndef __WbemLocalAddrRes_FWD_DEFINED__
#define __WbemLocalAddrRes_FWD_DEFINED__
typedef struct WbemLocalAddrRes WbemLocalAddrRes;
#endif /* __WbemLocalAddrRes_FWD_DEFINED__ */

#ifndef __WbemUninitializedClassObject_FWD_DEFINED__
#define __WbemUninitializedClassObject_FWD_DEFINED__
typedef struct WbemUninitializedClassObject WbemUninitializedClassObject;
#endif /* __WbemUninitializedClassObject_FWD_DEFINED__ */

#ifndef __WbemDCOMTransport_FWD_DEFINED__
#define __WbemDCOMTransport_FWD_DEFINED__
typedef struct WbemDCOMTransport WbemDCOMTransport;
#endif /* __WbemDCOMTransport_FWD_DEFINED__ */

#ifndef __IWbemLevel1Login_FWD_DEFINED__
#define __IWbemLevel1Login_FWD_DEFINED__
typedef interface IWbemLevel1Login IWbemLevel1Login;
#endif /* __IWbemLevel1Login_FWD_DEFINED__ */

#ifndef __IWbemConnectorLogin_FWD_DEFINED__
#define __IWbemConnectorLogin_FWD_DEFINED__
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
#endif /* __IWbemConnectorLogin_FWD_DEFINED__ */

#ifndef __IWbemAddressResolution_FWD_DEFINED__
#define __IWbemAddressResolution_FWD_DEFINED__
typedef interface IWbemAddressResolution IWbemAddressResolution;
#endif /* __IWbemAddressResolution_FWD_DEFINED__ */

#ifndef __IWbemTransport_FWD_DEFINED__
#define __IWbemTransport_FWD_DEFINED__
typedef interface IWbemTransport IWbemTransport;
#endif /* __IWbemTransport_FWD_DEFINED__ */

#ifndef __IWbemConstructClassObject_FWD_DEFINED__
#define __IWbemConstructClassObject_FWD_DEFINED__
typedef interface IWbemConstructClassObject IWbemConstructClassObject;
#endif /* __IWbemConstructClassObject_FWD_DEFINED__ */

#ifndef __IWbemClientTransport_FWD_DEFINED__
#define __IWbemClientTransport_FWD_DEFINED__
typedef interface IWbemClientTransport IWbemClientTransport;
#endif /* __IWbemClientTransport_FWD_DEFINED__ */

#ifndef __IWbemClientConnectionTransport_FWD_DEFINED__
#define __IWbemClientConnectionTransport_FWD_DEFINED__
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
#endif /* __IWbemClientConnectionTransport_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "wbemcli.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)

#ifndef __WbemTransports_v1_LIBRARY_DEFINED__
#define __WbemTransports_v1_LIBRARY_DEFINED__


#ifndef __IWbemTransport_FWD_DEFINED__
#define __IWbemTransport_FWD_DEFINED__
typedef interface IWbemTransport IWbemTransport;
#endif /* __IWbemTransport_FWD_DEFINED__ */

#ifndef __IWbemLevel1Login_FWD_DEFINED__
#define __IWbemLevel1Login_FWD_DEFINED__
typedef interface IWbemLevel1Login IWbemLevel1Login;
#endif /* __IWbemLevel1Login_FWD_DEFINED__ */

#ifndef __IWbemConnectorLogin_FWD_DEFINED__
#define __IWbemConnectorLogin_FWD_DEFINED__
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
#endif /* __IWbemConnectorLogin_FWD_DEFINED__ */

#ifndef __IWbemAddressResolution_FWD_DEFINED__
#define __IWbemAddressResolution_FWD_DEFINED__
typedef interface IWbemAddressResolution IWbemAddressResolution;
#endif /* __IWbemAddressResolution_FWD_DEFINED__ */

typedef enum tag_WBEM_LOGIN_TYPE {
    WBEM_FLAG_INPROC_LOGIN = 0,
    WBEM_FLAG_LOCAL_LOGIN = 1,
    WBEM_FLAG_REMOTE_LOGIN = 2,
    WBEM_AUTHENTICATION_METHOD_MASK = 0xf,
    WBEM_FLAG_USE_MULTIPLE_CHALLENGES = 0x10
} WBEM_LOGIN_TYPE;

typedef BYTE *WBEM_128BITS;

/*****************************************************************************
 * WbemLevel1Login coclass
 */

EXTERN_C const CLSID CLSID_WbemLevel1Login;

/*****************************************************************************
 * WbemLocalAddrRes coclass
 */

EXTERN_C const CLSID CLSID_WbemLocalAddrRes;

/*****************************************************************************
 * WbemUninitializedClassObject coclass
 */

EXTERN_C const CLSID CLSID_WbemUninitializedClassObject;


#ifndef __IWbemClientTransport_FWD_DEFINED__
#define __IWbemClientTransport_FWD_DEFINED__
typedef interface IWbemClientTransport IWbemClientTransport;
#endif /* __IWbemClientTransport_FWD_DEFINED__ */

#ifndef __IWbemClientConnectionTransport_FWD_DEFINED__
#define __IWbemClientConnectionTransport_FWD_DEFINED__
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
#endif /* __IWbemClientConnectionTransport_FWD_DEFINED__ */

/*****************************************************************************
 * WbemDCOMTransport coclass
 */

EXTERN_C const CLSID CLSID_WbemDCOMTransport;
#endif /* __WbemTransports_v1_LIBRARY_DEFINED__ */

/*****************************************************************************
 * IWbemLevel1Login interface
 */
#ifndef __IWbemLevel1Login_INTERFACE_DEFINED__
#define __IWbemLevel1Login_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemLevel1Login;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemLevel1LoginVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemLevel1Login *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemLevel1Login *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemLevel1Login *This);

    /*** IWbemLevel1Login methods ***/
    HRESULT (STDMETHODCALLTYPE *EstablishPosition)(
        IWbemLevel1Login *This,
        LPWSTR wszLocaleList,
        DWORD dwNumLocales,
        DWORD *reserved);

    HRESULT (STDMETHODCALLTYPE *RequestChallenge)(
        IWbemLevel1Login *This,
        LPWSTR wszNetworkResource,
        LPWSTR wszUser,
        WBEM_128BITS Nonce);

    HRESULT (STDMETHODCALLTYPE *WBEMLogin)(
        IWbemLevel1Login *This,
        LPWSTR wszPreferredLocale,
        WBEM_128BITS AccessToken,
        long lFlags,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace);

    HRESULT (STDMETHODCALLTYPE *NTLMLogin)(
        IWbemLevel1Login *This,
        LPWSTR wszNetworkResource,
        LPWSTR wszPreferredLocale,
        long lFlags,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace);

    END_INTERFACE
} IWbemLevel1LoginVtbl;

interface IWbemLevel1Login {
    CONST_VTBL IWbemLevel1LoginVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemLevel1Login_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemLevel1Login_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemLevel1Login_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemLevel1Login methods ***/
#define IWbemLevel1Login_EstablishPosition(This,wszLocaleList,dwNumLocales,reserved) \
    ((This)->lpVtbl->EstablishPosition(This,wszLocaleList,dwNumLocales,reserved))
#define IWbemLevel1Login_RequestChallenge(This,wszNetworkResource,wszUser,Nonce) \
    ((This)->lpVtbl->RequestChallenge(This,wszNetworkResource,wszUser,Nonce))
#define IWbemLevel1Login_WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace) \
    ((This)->lpVtbl->WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace))
#define IWbemLevel1Login_NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace) \
    ((This)->lpVtbl->NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemLevel1Login_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemConnectorLogin interface
 */
#ifndef __IWbemConnectorLogin_INTERFACE_DEFINED__
#define __IWbemConnectorLogin_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemConnectorLogin;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemConnectorLoginVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemConnectorLogin *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemConnectorLogin *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemConnectorLogin *This);

    /*** IWbemConnectorLogin methods ***/
    HRESULT (STDMETHODCALLTYPE *ConnectorLogin)(
        IWbemConnectorLogin *This,
        LPWSTR wszNetworkResource,
        LPWSTR wszPreferredLocale,
        long lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        void **pInterface);

    END_INTERFACE
} IWbemConnectorLoginVtbl;

interface IWbemConnectorLogin {
    CONST_VTBL IWbemConnectorLoginVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemConnectorLogin_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemConnectorLogin_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemConnectorLogin_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemConnectorLogin methods ***/
#define IWbemConnectorLogin_ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface) \
    ((This)->lpVtbl->ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemConnectorLogin_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemAddressResolution interface
 */
#ifndef __IWbemAddressResolution_INTERFACE_DEFINED__
#define __IWbemAddressResolution_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemAddressResolution;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemAddressResolutionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemAddressResolution *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemAddressResolution *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemAddressResolution *This);

    /*** IWbemAddressResolution methods ***/
    HRESULT (STDMETHODCALLTYPE *Resolve)(
        IWbemAddressResolution *This,
        LPWSTR wszNamespacePath,
        LPWSTR wszAddressType,
        DWORD *pdwAddressLength,
        BYTE **pabBinaryAddress);

    END_INTERFACE
} IWbemAddressResolutionVtbl;

interface IWbemAddressResolution {
    CONST_VTBL IWbemAddressResolutionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemAddressResolution_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemAddressResolution_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemAddressResolution_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemAddressResolution methods ***/
#define IWbemAddressResolution_Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress) \
    ((This)->lpVtbl->Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemAddressResolution_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemTransport interface
 */
#ifndef __IWbemTransport_INTERFACE_DEFINED__
#define __IWbemTransport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemTransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemTransportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemTransport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemTransport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemTransport *This);

    /*** IWbemTransport methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWbemTransport *This);

    END_INTERFACE
} IWbemTransportVtbl;

interface IWbemTransport {
    CONST_VTBL IWbemTransportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemTransport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemTransport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemTransport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemTransport methods ***/
#define IWbemTransport_Initialize(This) \
    ((This)->lpVtbl->Initialize(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemTransport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemConstructClassObject interface
 */
#ifndef __IWbemConstructClassObject_INTERFACE_DEFINED__
#define __IWbemConstructClassObject_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemConstructClassObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemConstructClassObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemConstructClassObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemConstructClassObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemConstructClassObject *This);

    /*** IWbemConstructClassObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInheritanceChain)(
        IWbemConstructClassObject *This,
        long lNumAntecedents,
        LPWSTR *awszAntecedents);

    HRESULT (STDMETHODCALLTYPE *SetPropertyOrigin)(
        IWbemConstructClassObject *This,
        LPCWSTR wszPropertyName,
        long lOriginIndex);

    HRESULT (STDMETHODCALLTYPE *SetMethodOrigin)(
        IWbemConstructClassObject *This,
        LPCWSTR wszMethodName,
        long lOriginIndex);

    HRESULT (STDMETHODCALLTYPE *SetServerNamespace)(
        IWbemConstructClassObject *This,
        LPCWSTR wszServer,
        LPCWSTR wszNamespace);

    END_INTERFACE
} IWbemConstructClassObjectVtbl;

interface IWbemConstructClassObject {
    CONST_VTBL IWbemConstructClassObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemConstructClassObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemConstructClassObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemConstructClassObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemConstructClassObject methods ***/
#define IWbemConstructClassObject_SetInheritanceChain(This,lNumAntecedents,awszAntecedents) \
    ((This)->lpVtbl->SetInheritanceChain(This,lNumAntecedents,awszAntecedents))
#define IWbemConstructClassObject_SetPropertyOrigin(This,wszPropertyName,lOriginIndex) \
    ((This)->lpVtbl->SetPropertyOrigin(This,wszPropertyName,lOriginIndex))
#define IWbemConstructClassObject_SetMethodOrigin(This,wszMethodName,lOriginIndex) \
    ((This)->lpVtbl->SetMethodOrigin(This,wszMethodName,lOriginIndex))
#define IWbemConstructClassObject_SetServerNamespace(This,wszServer,wszNamespace) \
    ((This)->lpVtbl->SetServerNamespace(This,wszServer,wszNamespace))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemConstructClassObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemClientTransport interface
 */
#ifndef __IWbemClientTransport_INTERFACE_DEFINED__
#define __IWbemClientTransport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemClientTransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemClientTransportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemClientTransport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemClientTransport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemClientTransport *This);

    /*** IWbemClientTransport methods ***/
    HRESULT (STDMETHODCALLTYPE *ConnectServer)(
        IWbemClientTransport *This,
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        BSTR strNetworkResource,
        BSTR strUser,
        BSTR strPassword,
        BSTR strLocale,
        long lSecurityFlags,
        BSTR strAuthority,
        IWbemContext *pCtx,
        IWbemServices **ppNamespace);

    END_INTERFACE
} IWbemClientTransportVtbl;

interface IWbemClientTransport {
    CONST_VTBL IWbemClientTransportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemClientTransport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemClientTransport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemClientTransport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemClientTransport methods ***/
#define IWbemClientTransport_ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace) \
    ((This)->lpVtbl->ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemClientTransport_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemClientConnectionTransport interface
 */
#ifndef __IWbemClientConnectionTransport_INTERFACE_DEFINED__
#define __IWbemClientConnectionTransport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemClientConnectionTransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemClientConnectionTransportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemClientConnectionTransport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemClientConnectionTransport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemClientConnectionTransport *This);

    /*** IWbemClientConnectionTransport methods ***/
    HRESULT (STDMETHODCALLTYPE *Open)(
        IWbemClientConnectionTransport *This,
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        const BSTR strObject,
        const BSTR strUser,
        const BSTR strPassword,
        const BSTR strLocale,
        long lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        void **pInterface,
        IWbemCallResult **pCallRes);

    HRESULT (STDMETHODCALLTYPE *OpenAsync)(
        IWbemClientConnectionTransport *This,
        BSTR strAddressType,
        DWORD dwBinaryAddressLength,
        BYTE *abBinaryAddress,
        const BSTR strObject,
        const BSTR strUser,
        const BSTR strPassword,
        const BSTR strLocale,
        long lFlags,
        IWbemContext *pCtx,
        REFIID riid,
        IWbemObjectSink *pResponseHandler);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IWbemClientConnectionTransport *This,
        long lFlags,
        IWbemObjectSink *pHandler);

    END_INTERFACE
} IWbemClientConnectionTransportVtbl;

interface IWbemClientConnectionTransport {
    CONST_VTBL IWbemClientConnectionTransportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemClientConnectionTransport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemClientConnectionTransport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemClientConnectionTransport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemClientConnectionTransport methods ***/
#define IWbemClientConnectionTransport_Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes) \
    ((This)->lpVtbl->Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes))
#define IWbemClientConnectionTransport_OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler) \
    ((This)->lpVtbl->OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler))
#define IWbemClientConnectionTransport_Cancel(This,lFlags,pHandler) \
    ((This)->lpVtbl->Cancel(This,lFlags,pHandler))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemClientConnectionTransport_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __wbemtran_h__ */
