/* Generated from portabledeviceconnectapi.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __portabledeviceconnectapi_h__
#define __portabledeviceconnectapi_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IEnumPortableDeviceConnectors_FWD_DEFINED__
#define __IEnumPortableDeviceConnectors_FWD_DEFINED__
typedef interface IEnumPortableDeviceConnectors IEnumPortableDeviceConnectors;
#endif /* __IEnumPortableDeviceConnectors_FWD_DEFINED__ */

#ifndef __IPortableDeviceConnector_FWD_DEFINED__
#define __IPortableDeviceConnector_FWD_DEFINED__
typedef interface IPortableDeviceConnector IPortableDeviceConnector;
#endif /* __IPortableDeviceConnector_FWD_DEFINED__ */

#ifndef __IConnectionRequestCallback_FWD_DEFINED__
#define __IConnectionRequestCallback_FWD_DEFINED__
typedef interface IConnectionRequestCallback IConnectionRequestCallback;
#endif /* __IConnectionRequestCallback_FWD_DEFINED__ */

#ifndef __EnumBthMtpConnectors_FWD_DEFINED__
#define __EnumBthMtpConnectors_FWD_DEFINED__
typedef struct EnumBthMtpConnectors EnumBthMtpConnectors;
#endif /* __EnumBthMtpConnectors_FWD_DEFINED__ */

/* Headers for imported files */

#include "wtypes.h"
#include "propsys.h"
#include "PortableDeviceConnectImports.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef __IEnumPortableDeviceConnectors_FWD_DEFINED__
#define __IEnumPortableDeviceConnectors_FWD_DEFINED__
typedef interface IEnumPortableDeviceConnectors IEnumPortableDeviceConnectors;
#endif /* __IEnumPortableDeviceConnectors_FWD_DEFINED__ */

#ifndef __IPortableDeviceConnector_FWD_DEFINED__
#define __IPortableDeviceConnector_FWD_DEFINED__
typedef interface IPortableDeviceConnector IPortableDeviceConnector;
#endif /* __IPortableDeviceConnector_FWD_DEFINED__ */

#ifndef __IConnectionRequestCallback_FWD_DEFINED__
#define __IConnectionRequestCallback_FWD_DEFINED__
typedef interface IConnectionRequestCallback IConnectionRequestCallback;
#endif /* __IConnectionRequestCallback_FWD_DEFINED__ */

// Property set by the MTP Bluetooth Enumerator indicate whether the device is connected
// DEVPKEY_MTPBTH_IsConnected, DEVPROP_TYPE_BOOLEAN
//
// {ea1237fa-589d-4472-84e4-0abe36fd62ef}.2
DEFINE_DEVPROPKEY(DEVPKEY_MTPBTH_IsConnected,            0xea1237fa, 0x589d, 0x4472, 0x84, 0xe4, 0x0a, 0xbe, 0x36, 0xfd, 0x62, 0xef, 2);

/*****************************************************************************
 * IEnumPortableDeviceConnectors interface
 */
#ifndef __IEnumPortableDeviceConnectors_INTERFACE_DEFINED__
#define __IEnumPortableDeviceConnectors_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumPortableDeviceConnectors;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumPortableDeviceConnectorsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumPortableDeviceConnectors *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumPortableDeviceConnectors *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumPortableDeviceConnectors *This);

    /*** IEnumPortableDeviceConnectors methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumPortableDeviceConnectors *This,
        UINT32 cRequested,
        IPortableDeviceConnector **pConnectors,
        UINT32 *pcFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumPortableDeviceConnectors *This,
        UINT32 cConnectors);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumPortableDeviceConnectors *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumPortableDeviceConnectors *This,
        IEnumPortableDeviceConnectors **ppEnum);

    END_INTERFACE
} IEnumPortableDeviceConnectorsVtbl;

interface IEnumPortableDeviceConnectors {
    CONST_VTBL IEnumPortableDeviceConnectorsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumPortableDeviceConnectors_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumPortableDeviceConnectors_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumPortableDeviceConnectors_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumPortableDeviceConnectors methods ***/
#define IEnumPortableDeviceConnectors_Next(This,cRequested,pConnectors,pcFetched) \
    ((This)->lpVtbl->Next(This,cRequested,pConnectors,pcFetched))
#define IEnumPortableDeviceConnectors_Skip(This,cConnectors) \
    ((This)->lpVtbl->Skip(This,cConnectors))
#define IEnumPortableDeviceConnectors_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumPortableDeviceConnectors_Clone(This,ppEnum) \
    ((This)->lpVtbl->Clone(This,ppEnum))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumPortableDeviceConnectors_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IPortableDeviceConnector interface
 */
#ifndef __IPortableDeviceConnector_INTERFACE_DEFINED__
#define __IPortableDeviceConnector_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPortableDeviceConnector;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPortableDeviceConnectorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPortableDeviceConnector *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPortableDeviceConnector *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPortableDeviceConnector *This);

    /*** IPortableDeviceConnector methods ***/
    HRESULT (STDMETHODCALLTYPE *Connect)(
        IPortableDeviceConnector *This,
        IConnectionRequestCallback *pCallback);

    HRESULT (STDMETHODCALLTYPE *Disconnect)(
        IPortableDeviceConnector *This,
        IConnectionRequestCallback *pCallback);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IPortableDeviceConnector *This,
        IConnectionRequestCallback *pCallback);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IPortableDeviceConnector *This,
        const DEVPROPKEY *pPropertyKey,
        DEVPROPTYPE *pPropertyType,
        BYTE **ppData,
        UINT32 *pcbData);

    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IPortableDeviceConnector *This,
        const DEVPROPKEY *pPropertyKey,
        DEVPROPTYPE PropertyType,
        const BYTE *pData,
        UINT32 cbData);

    HRESULT (STDMETHODCALLTYPE *GetPnPID)(
        IPortableDeviceConnector *This,
        LPWSTR *ppwszPnPID);

    END_INTERFACE
} IPortableDeviceConnectorVtbl;

interface IPortableDeviceConnector {
    CONST_VTBL IPortableDeviceConnectorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPortableDeviceConnector_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPortableDeviceConnector_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPortableDeviceConnector_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPortableDeviceConnector methods ***/
#define IPortableDeviceConnector_Connect(This,pCallback) \
    ((This)->lpVtbl->Connect(This,pCallback))
#define IPortableDeviceConnector_Disconnect(This,pCallback) \
    ((This)->lpVtbl->Disconnect(This,pCallback))
#define IPortableDeviceConnector_Cancel(This,pCallback) \
    ((This)->lpVtbl->Cancel(This,pCallback))
#define IPortableDeviceConnector_GetProperty(This,pPropertyKey,pPropertyType,ppData,pcbData) \
    ((This)->lpVtbl->GetProperty(This,pPropertyKey,pPropertyType,ppData,pcbData))
#define IPortableDeviceConnector_SetProperty(This,pPropertyKey,PropertyType,pData,cbData) \
    ((This)->lpVtbl->SetProperty(This,pPropertyKey,PropertyType,pData,cbData))
#define IPortableDeviceConnector_GetPnPID(This,ppwszPnPID) \
    ((This)->lpVtbl->GetPnPID(This,ppwszPnPID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPortableDeviceConnector_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IConnectionRequestCallback interface
 */
#ifndef __IConnectionRequestCallback_INTERFACE_DEFINED__
#define __IConnectionRequestCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IConnectionRequestCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IConnectionRequestCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IConnectionRequestCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IConnectionRequestCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IConnectionRequestCallback *This);

    /*** IConnectionRequestCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnComplete)(
        IConnectionRequestCallback *This,
        HRESULT hrStatus);

    END_INTERFACE
} IConnectionRequestCallbackVtbl;

interface IConnectionRequestCallback {
    CONST_VTBL IConnectionRequestCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IConnectionRequestCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IConnectionRequestCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IConnectionRequestCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IConnectionRequestCallback methods ***/
#define IConnectionRequestCallback_OnComplete(This,hrStatus) \
    ((This)->lpVtbl->OnComplete(This,hrStatus))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IConnectionRequestCallback_INTERFACE_DEFINED__ */

#ifndef __PortableDeviceConnectApiLib_LIBRARY_DEFINED__
#define __PortableDeviceConnectApiLib_LIBRARY_DEFINED__


/*****************************************************************************
 * EnumBthMtpConnectors coclass
 */

EXTERN_C const CLSID CLSID_EnumBthMtpConnectors;
#endif /* __PortableDeviceConnectApiLib_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __portabledeviceconnectapi_h__ */
