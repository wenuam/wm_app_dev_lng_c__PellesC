/* Generated from vsadmin.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __vsadmin_h__
#define __vsadmin_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IVssAdmin_FWD_DEFINED__
#define __IVssAdmin_FWD_DEFINED__
typedef interface IVssAdmin IVssAdmin;
#endif /* __IVssAdmin_FWD_DEFINED__ */

#ifndef __IVssAdminEx_FWD_DEFINED__
#define __IVssAdminEx_FWD_DEFINED__
typedef interface IVssAdminEx IVssAdminEx;
#endif /* __IVssAdminEx_FWD_DEFINED__ */

#ifndef __VSSCoordinator_FWD_DEFINED__
#define __VSSCoordinator_FWD_DEFINED__
typedef struct VSSCoordinator VSSCoordinator;
#endif /* __VSSCoordinator_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"
#include "vss.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IVssAdmin interface
 */
#ifndef __IVssAdmin_INTERFACE_DEFINED__
#define __IVssAdmin_INTERFACE_DEFINED__

EXTERN_C const IID IID_IVssAdmin;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IVssAdminVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVssAdmin *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVssAdmin *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVssAdmin *This);

    /*** IVssAdmin methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterProvider)(
        IVssAdmin *This,
        VSS_ID pProviderId,
        CLSID ClassId,
        VSS_PWSZ pwszProviderName,
        VSS_PROVIDER_TYPE eProviderType,
        VSS_PWSZ pwszProviderVersion,
        VSS_ID ProviderVersionId);

    HRESULT (STDMETHODCALLTYPE *UnregisterProvider)(
        IVssAdmin *This,
        VSS_ID ProviderId);

    HRESULT (STDMETHODCALLTYPE *QueryProviders)(
        IVssAdmin *This,
        IVssEnumObject **ppEnum);

    HRESULT (STDMETHODCALLTYPE *AbortAllSnapshotsInProgress)(
        IVssAdmin *This);

    END_INTERFACE
} IVssAdminVtbl;

interface IVssAdmin {
    CONST_VTBL IVssAdminVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IVssAdmin_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IVssAdmin_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IVssAdmin_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IVssAdmin methods ***/
#define IVssAdmin_RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) \
    ((This)->lpVtbl->RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId))
#define IVssAdmin_UnregisterProvider(This,ProviderId) \
    ((This)->lpVtbl->UnregisterProvider(This,ProviderId))
#define IVssAdmin_QueryProviders(This,ppEnum) \
    ((This)->lpVtbl->QueryProviders(This,ppEnum))
#define IVssAdmin_AbortAllSnapshotsInProgress(This) \
    ((This)->lpVtbl->AbortAllSnapshotsInProgress(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IVssAdmin_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IVssAdminEx interface
 */
#ifndef __IVssAdminEx_INTERFACE_DEFINED__
#define __IVssAdminEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IVssAdminEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IVssAdminExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVssAdminEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVssAdminEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVssAdminEx *This);

    /*** IVssAdmin methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterProvider)(
        IVssAdminEx *This,
        VSS_ID pProviderId,
        CLSID ClassId,
        VSS_PWSZ pwszProviderName,
        VSS_PROVIDER_TYPE eProviderType,
        VSS_PWSZ pwszProviderVersion,
        VSS_ID ProviderVersionId);

    HRESULT (STDMETHODCALLTYPE *UnregisterProvider)(
        IVssAdminEx *This,
        VSS_ID ProviderId);

    HRESULT (STDMETHODCALLTYPE *QueryProviders)(
        IVssAdminEx *This,
        IVssEnumObject **ppEnum);

    HRESULT (STDMETHODCALLTYPE *AbortAllSnapshotsInProgress)(
        IVssAdminEx *This);

    /*** IVssAdminEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProviderCapability)(
        IVssAdminEx *This,
        VSS_ID pProviderId,
        ULONGLONG *pllOriginalCapabilityMask);

    HRESULT (STDMETHODCALLTYPE *GetProviderContext)(
        IVssAdminEx *This,
        VSS_ID ProviderId,
        LONG *plContext);

    HRESULT (STDMETHODCALLTYPE *SetProviderContext)(
        IVssAdminEx *This,
        VSS_ID ProviderId,
        LONG lContext);

    END_INTERFACE
} IVssAdminExVtbl;

interface IVssAdminEx {
    CONST_VTBL IVssAdminExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IVssAdminEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IVssAdminEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IVssAdminEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IVssAdmin methods ***/
#define IVssAdminEx_RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) \
    ((This)->lpVtbl->RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId))
#define IVssAdminEx_UnregisterProvider(This,ProviderId) \
    ((This)->lpVtbl->UnregisterProvider(This,ProviderId))
#define IVssAdminEx_QueryProviders(This,ppEnum) \
    ((This)->lpVtbl->QueryProviders(This,ppEnum))
#define IVssAdminEx_AbortAllSnapshotsInProgress(This) \
    ((This)->lpVtbl->AbortAllSnapshotsInProgress(This))
/*** IVssAdminEx methods ***/
#define IVssAdminEx_GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask) \
    ((This)->lpVtbl->GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask))
#define IVssAdminEx_GetProviderContext(This,ProviderId,plContext) \
    ((This)->lpVtbl->GetProviderContext(This,ProviderId,plContext))
#define IVssAdminEx_SetProviderContext(This,ProviderId,lContext) \
    ((This)->lpVtbl->SetProviderContext(This,ProviderId,lContext))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IVssAdminEx_INTERFACE_DEFINED__ */

#ifndef __VSSAdmin_LIBRARY_DEFINED__
#define __VSSAdmin_LIBRARY_DEFINED__


/*****************************************************************************
 * VSSCoordinator coclass
 */

EXTERN_C const CLSID CLSID_VSSCoordinator;
#endif /* __VSSAdmin_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __vsadmin_h__ */
