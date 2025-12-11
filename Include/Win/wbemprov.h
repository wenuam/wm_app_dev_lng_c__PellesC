/* Generated from wbemprov.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __wbemprov_h__
#define __wbemprov_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __WbemAdministrativeLocator_FWD_DEFINED__
#define __WbemAdministrativeLocator_FWD_DEFINED__
typedef struct WbemAdministrativeLocator WbemAdministrativeLocator;
#endif /* __WbemAdministrativeLocator_FWD_DEFINED__ */

#ifndef __WbemAuthenticatedLocator_FWD_DEFINED__
#define __WbemAuthenticatedLocator_FWD_DEFINED__
typedef struct WbemAuthenticatedLocator WbemAuthenticatedLocator;
#endif /* __WbemAuthenticatedLocator_FWD_DEFINED__ */

#ifndef __WbemUnauthenticatedLocator_FWD_DEFINED__
#define __WbemUnauthenticatedLocator_FWD_DEFINED__
typedef struct WbemUnauthenticatedLocator WbemUnauthenticatedLocator;
#endif /* __WbemUnauthenticatedLocator_FWD_DEFINED__ */

#ifndef __WbemDecoupledRegistrar_FWD_DEFINED__
#define __WbemDecoupledRegistrar_FWD_DEFINED__
typedef struct WbemDecoupledRegistrar WbemDecoupledRegistrar;
#endif /* __WbemDecoupledRegistrar_FWD_DEFINED__ */

#ifndef __WbemDecoupledBasicEventProvider_FWD_DEFINED__
#define __WbemDecoupledBasicEventProvider_FWD_DEFINED__
typedef struct WbemDecoupledBasicEventProvider WbemDecoupledBasicEventProvider;
#endif /* __WbemDecoupledBasicEventProvider_FWD_DEFINED__ */

#ifndef __IWbemUnboundObjectSink_FWD_DEFINED__
#define __IWbemUnboundObjectSink_FWD_DEFINED__
typedef interface IWbemUnboundObjectSink IWbemUnboundObjectSink;
#endif /* __IWbemUnboundObjectSink_FWD_DEFINED__ */

#ifndef __IWbemPropertyProvider_FWD_DEFINED__
#define __IWbemPropertyProvider_FWD_DEFINED__
typedef interface IWbemPropertyProvider IWbemPropertyProvider;
#endif /* __IWbemPropertyProvider_FWD_DEFINED__ */

#ifndef __IWbemEventProvider_FWD_DEFINED__
#define __IWbemEventProvider_FWD_DEFINED__
typedef interface IWbemEventProvider IWbemEventProvider;
#endif /* __IWbemEventProvider_FWD_DEFINED__ */

#ifndef __IWbemEventProviderQuerySink_FWD_DEFINED__
#define __IWbemEventProviderQuerySink_FWD_DEFINED__
typedef interface IWbemEventProviderQuerySink IWbemEventProviderQuerySink;
#endif /* __IWbemEventProviderQuerySink_FWD_DEFINED__ */

#ifndef __IWbemEventProviderSecurity_FWD_DEFINED__
#define __IWbemEventProviderSecurity_FWD_DEFINED__
typedef interface IWbemEventProviderSecurity IWbemEventProviderSecurity;
#endif /* __IWbemEventProviderSecurity_FWD_DEFINED__ */

#ifndef __IWbemProviderIdentity_FWD_DEFINED__
#define __IWbemProviderIdentity_FWD_DEFINED__
typedef interface IWbemProviderIdentity IWbemProviderIdentity;
#endif /* __IWbemProviderIdentity_FWD_DEFINED__ */

#ifndef __IWbemEventConsumerProvider_FWD_DEFINED__
#define __IWbemEventConsumerProvider_FWD_DEFINED__
typedef interface IWbemEventConsumerProvider IWbemEventConsumerProvider;
#endif /* __IWbemEventConsumerProvider_FWD_DEFINED__ */

#ifndef __IWbemProviderInitSink_FWD_DEFINED__
#define __IWbemProviderInitSink_FWD_DEFINED__
typedef interface IWbemProviderInitSink IWbemProviderInitSink;
#endif /* __IWbemProviderInitSink_FWD_DEFINED__ */

#ifndef __IWbemProviderInit_FWD_DEFINED__
#define __IWbemProviderInit_FWD_DEFINED__
typedef interface IWbemProviderInit IWbemProviderInit;
#endif /* __IWbemProviderInit_FWD_DEFINED__ */

#ifndef __IWbemHiPerfProvider_FWD_DEFINED__
#define __IWbemHiPerfProvider_FWD_DEFINED__
typedef interface IWbemHiPerfProvider IWbemHiPerfProvider;
#endif /* __IWbemHiPerfProvider_FWD_DEFINED__ */

#ifndef __IWbemDecoupledRegistrar_FWD_DEFINED__
#define __IWbemDecoupledRegistrar_FWD_DEFINED__
typedef interface IWbemDecoupledRegistrar IWbemDecoupledRegistrar;
#endif /* __IWbemDecoupledRegistrar_FWD_DEFINED__ */

#ifndef __IWbemDecoupledBasicEventProvider_FWD_DEFINED__
#define __IWbemDecoupledBasicEventProvider_FWD_DEFINED__
typedef interface IWbemDecoupledBasicEventProvider IWbemDecoupledBasicEventProvider;
#endif /* __IWbemDecoupledBasicEventProvider_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "wbemcli.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)

typedef VARIANT WBEM_VARIANT;
typedef LPWSTR WBEM_WSTR;
typedef LPCWSTR WBEM_CWSTR;

typedef enum tag_WBEM_PROVIDER_REQUIREMENTS_TYPE {
    WBEM_REQUIREMENTS_START_POSTFILTER = 0,
    WBEM_REQUIREMENTS_STOP_POSTFILTER = 1,
    WBEM_REQUIREMENTS_RECHECK_SUBSCRIPTIONS = 2
} WBEM_PROVIDER_REQUIREMENTS_TYPE;

#ifndef __WbemProviders_v1_LIBRARY_DEFINED__
#define __WbemProviders_v1_LIBRARY_DEFINED__


#ifndef __IWbemPropertyProvider_FWD_DEFINED__
#define __IWbemPropertyProvider_FWD_DEFINED__
typedef interface IWbemPropertyProvider IWbemPropertyProvider;
#endif /* __IWbemPropertyProvider_FWD_DEFINED__ */

#ifndef __IWbemUnboundObjectSink_FWD_DEFINED__
#define __IWbemUnboundObjectSink_FWD_DEFINED__
typedef interface IWbemUnboundObjectSink IWbemUnboundObjectSink;
#endif /* __IWbemUnboundObjectSink_FWD_DEFINED__ */

#ifndef __IWbemEventProvider_FWD_DEFINED__
#define __IWbemEventProvider_FWD_DEFINED__
typedef interface IWbemEventProvider IWbemEventProvider;
#endif /* __IWbemEventProvider_FWD_DEFINED__ */

#ifndef __IWbemEventProviderQuerySink_FWD_DEFINED__
#define __IWbemEventProviderQuerySink_FWD_DEFINED__
typedef interface IWbemEventProviderQuerySink IWbemEventProviderQuerySink;
#endif /* __IWbemEventProviderQuerySink_FWD_DEFINED__ */

#ifndef __IWbemEventProviderSecurity_FWD_DEFINED__
#define __IWbemEventProviderSecurity_FWD_DEFINED__
typedef interface IWbemEventProviderSecurity IWbemEventProviderSecurity;
#endif /* __IWbemEventProviderSecurity_FWD_DEFINED__ */

#ifndef __IWbemEventConsumerProvider_FWD_DEFINED__
#define __IWbemEventConsumerProvider_FWD_DEFINED__
typedef interface IWbemEventConsumerProvider IWbemEventConsumerProvider;
#endif /* __IWbemEventConsumerProvider_FWD_DEFINED__ */


#ifndef __IWbemProviderInitSink_FWD_DEFINED__
#define __IWbemProviderInitSink_FWD_DEFINED__
typedef interface IWbemProviderInitSink IWbemProviderInitSink;
#endif /* __IWbemProviderInitSink_FWD_DEFINED__ */

#ifndef __IWbemProviderInit_FWD_DEFINED__
#define __IWbemProviderInit_FWD_DEFINED__
typedef interface IWbemProviderInit IWbemProviderInit;
#endif /* __IWbemProviderInit_FWD_DEFINED__ */

#ifndef __IWbemHiPerfProvider_FWD_DEFINED__
#define __IWbemHiPerfProvider_FWD_DEFINED__
typedef interface IWbemHiPerfProvider IWbemHiPerfProvider;
#endif /* __IWbemHiPerfProvider_FWD_DEFINED__ */


#ifndef __IWbemDecoupledRegistrar_FWD_DEFINED__
#define __IWbemDecoupledRegistrar_FWD_DEFINED__
typedef interface IWbemDecoupledRegistrar IWbemDecoupledRegistrar;
#endif /* __IWbemDecoupledRegistrar_FWD_DEFINED__ */

/*****************************************************************************
 * WbemAdministrativeLocator coclass
 */

EXTERN_C const CLSID CLSID_WbemAdministrativeLocator;

/*****************************************************************************
 * WbemAuthenticatedLocator coclass
 */

EXTERN_C const CLSID CLSID_WbemAuthenticatedLocator;

/*****************************************************************************
 * WbemUnauthenticatedLocator coclass
 */

EXTERN_C const CLSID CLSID_WbemUnauthenticatedLocator;

/*****************************************************************************
 * WbemDecoupledRegistrar coclass
 */

EXTERN_C const CLSID CLSID_WbemDecoupledRegistrar;

/*****************************************************************************
 * WbemDecoupledBasicEventProvider coclass
 */

EXTERN_C const CLSID CLSID_WbemDecoupledBasicEventProvider;
#endif /* __WbemProviders_v1_LIBRARY_DEFINED__ */

/*****************************************************************************
 * IWbemUnboundObjectSink interface
 */
#ifndef __IWbemUnboundObjectSink_INTERFACE_DEFINED__
#define __IWbemUnboundObjectSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemUnboundObjectSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemUnboundObjectSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemUnboundObjectSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemUnboundObjectSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemUnboundObjectSink *This);

    /*** IWbemUnboundObjectSink methods ***/
    HRESULT (STDMETHODCALLTYPE *IndicateToConsumer)(
        IWbemUnboundObjectSink *This,
        IWbemClassObject *pLogicalConsumer,
        long lNumObjects,
        IWbemClassObject **apObjects);

    END_INTERFACE
} IWbemUnboundObjectSinkVtbl;

interface IWbemUnboundObjectSink {
    CONST_VTBL IWbemUnboundObjectSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemUnboundObjectSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemUnboundObjectSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemUnboundObjectSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemUnboundObjectSink methods ***/
#define IWbemUnboundObjectSink_IndicateToConsumer(This,pLogicalConsumer,lNumObjects,apObjects) \
    ((This)->lpVtbl->IndicateToConsumer(This,pLogicalConsumer,lNumObjects,apObjects))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemUnboundObjectSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemPropertyProvider interface
 */
#ifndef __IWbemPropertyProvider_INTERFACE_DEFINED__
#define __IWbemPropertyProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemPropertyProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemPropertyProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemPropertyProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemPropertyProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemPropertyProvider *This);

    /*** IWbemPropertyProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IWbemPropertyProvider *This,
        long lFlags,
        const BSTR strLocale,
        const BSTR strClassMapping,
        const BSTR strInstMapping,
        const BSTR strPropMapping,
        VARIANT *pvValue);

    HRESULT (STDMETHODCALLTYPE *PutProperty)(
        IWbemPropertyProvider *This,
        long lFlags,
        const BSTR strLocale,
        const BSTR strClassMapping,
        const BSTR strInstMapping,
        const BSTR strPropMapping,
        const VARIANT *pvValue);

    END_INTERFACE
} IWbemPropertyProviderVtbl;

interface IWbemPropertyProvider {
    CONST_VTBL IWbemPropertyProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemPropertyProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemPropertyProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemPropertyProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemPropertyProvider methods ***/
#define IWbemPropertyProvider_GetProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue) \
    ((This)->lpVtbl->GetProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue))
#define IWbemPropertyProvider_PutProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue) \
    ((This)->lpVtbl->PutProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemPropertyProvider_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemEventProvider interface
 */
#ifndef __IWbemEventProvider_INTERFACE_DEFINED__
#define __IWbemEventProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemEventProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemEventProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemEventProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemEventProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemEventProvider *This);

    /*** IWbemEventProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *ProvideEvents)(
        IWbemEventProvider *This,
        IWbemObjectSink *pSink,
        long lFlags);

    END_INTERFACE
} IWbemEventProviderVtbl;

interface IWbemEventProvider {
    CONST_VTBL IWbemEventProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemEventProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemEventProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemEventProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemEventProvider methods ***/
#define IWbemEventProvider_ProvideEvents(This,pSink,lFlags) \
    ((This)->lpVtbl->ProvideEvents(This,pSink,lFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemEventProvider_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemEventProviderQuerySink interface
 */
#ifndef __IWbemEventProviderQuerySink_INTERFACE_DEFINED__
#define __IWbemEventProviderQuerySink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemEventProviderQuerySink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemEventProviderQuerySinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemEventProviderQuerySink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemEventProviderQuerySink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemEventProviderQuerySink *This);

    /*** IWbemEventProviderQuerySink methods ***/
    HRESULT (STDMETHODCALLTYPE *NewQuery)(
        IWbemEventProviderQuerySink *This,
        unsigned long dwId,
        WBEM_WSTR wszQueryLanguage,
        WBEM_WSTR wszQuery);

    HRESULT (STDMETHODCALLTYPE *CancelQuery)(
        IWbemEventProviderQuerySink *This,
        unsigned long dwId);

    END_INTERFACE
} IWbemEventProviderQuerySinkVtbl;

interface IWbemEventProviderQuerySink {
    CONST_VTBL IWbemEventProviderQuerySinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemEventProviderQuerySink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemEventProviderQuerySink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemEventProviderQuerySink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemEventProviderQuerySink methods ***/
#define IWbemEventProviderQuerySink_NewQuery(This,dwId,wszQueryLanguage,wszQuery) \
    ((This)->lpVtbl->NewQuery(This,dwId,wszQueryLanguage,wszQuery))
#define IWbemEventProviderQuerySink_CancelQuery(This,dwId) \
    ((This)->lpVtbl->CancelQuery(This,dwId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemEventProviderQuerySink_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemEventProviderSecurity interface
 */
#ifndef __IWbemEventProviderSecurity_INTERFACE_DEFINED__
#define __IWbemEventProviderSecurity_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemEventProviderSecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemEventProviderSecurityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemEventProviderSecurity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemEventProviderSecurity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemEventProviderSecurity *This);

    /*** IWbemEventProviderSecurity methods ***/
    HRESULT (STDMETHODCALLTYPE *AccessCheck)(
        IWbemEventProviderSecurity *This,
        WBEM_CWSTR wszQueryLanguage,
        WBEM_CWSTR wszQuery,
        long lSidLength,
        const BYTE *pSid);

    END_INTERFACE
} IWbemEventProviderSecurityVtbl;

interface IWbemEventProviderSecurity {
    CONST_VTBL IWbemEventProviderSecurityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemEventProviderSecurity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemEventProviderSecurity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemEventProviderSecurity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemEventProviderSecurity methods ***/
#define IWbemEventProviderSecurity_AccessCheck(This,wszQueryLanguage,wszQuery,lSidLength,pSid) \
    ((This)->lpVtbl->AccessCheck(This,wszQueryLanguage,wszQuery,lSidLength,pSid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemEventProviderSecurity_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemProviderIdentity interface
 */
#ifndef __IWbemProviderIdentity_INTERFACE_DEFINED__
#define __IWbemProviderIdentity_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemProviderIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemProviderIdentityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemProviderIdentity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemProviderIdentity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemProviderIdentity *This);

    /*** IWbemProviderIdentity methods ***/
    HRESULT (STDMETHODCALLTYPE *SetRegistrationObject)(
        IWbemProviderIdentity *This,
        long lFlags,
        IWbemClassObject *pProvReg);

    END_INTERFACE
} IWbemProviderIdentityVtbl;

interface IWbemProviderIdentity {
    CONST_VTBL IWbemProviderIdentityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemProviderIdentity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemProviderIdentity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemProviderIdentity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemProviderIdentity methods ***/
#define IWbemProviderIdentity_SetRegistrationObject(This,lFlags,pProvReg) \
    ((This)->lpVtbl->SetRegistrationObject(This,lFlags,pProvReg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemProviderIdentity_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemEventConsumerProvider interface
 */
#ifndef __IWbemEventConsumerProvider_INTERFACE_DEFINED__
#define __IWbemEventConsumerProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemEventConsumerProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemEventConsumerProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemEventConsumerProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemEventConsumerProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemEventConsumerProvider *This);

    /*** IWbemEventConsumerProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *FindConsumer)(
        IWbemEventConsumerProvider *This,
        IWbemClassObject *pLogicalConsumer,
        IWbemUnboundObjectSink **ppConsumer);

    END_INTERFACE
} IWbemEventConsumerProviderVtbl;

interface IWbemEventConsumerProvider {
    CONST_VTBL IWbemEventConsumerProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemEventConsumerProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemEventConsumerProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemEventConsumerProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemEventConsumerProvider methods ***/
#define IWbemEventConsumerProvider_FindConsumer(This,pLogicalConsumer,ppConsumer) \
    ((This)->lpVtbl->FindConsumer(This,pLogicalConsumer,ppConsumer))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemEventConsumerProvider_INTERFACE_DEFINED__ */

typedef enum tag_WBEM_EXTRA_RETURN_CODES {
    WBEM_S_INITIALIZED = 0,
    WBEM_S_LIMITED_SERVICE = 0x43001,
    WBEM_S_INDIRECTLY_UPDATED = 274434,
    WBEM_S_SUBJECT_TO_SDS = 274435,
    WBEM_E_RETRY_LATER = 0x80043001,
    WBEM_E_RESOURCE_CONTENTION = 2147758082
} WBEM_EXTRA_RETURN_CODES;

typedef enum tag_WBEM_PROVIDER_FLAGS {
    WBEM_FLAG_OWNER_UPDATE = 0x10000
} WBEM_PROVIDER_FLAGS;

/*****************************************************************************
 * IWbemProviderInitSink interface
 */
#ifndef __IWbemProviderInitSink_INTERFACE_DEFINED__
#define __IWbemProviderInitSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemProviderInitSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemProviderInitSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemProviderInitSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemProviderInitSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemProviderInitSink *This);

    /*** IWbemProviderInitSink methods ***/
    HRESULT (STDMETHODCALLTYPE *SetStatus)(
        IWbemProviderInitSink *This,
        LONG lStatus,
        LONG lFlags);

    END_INTERFACE
} IWbemProviderInitSinkVtbl;

interface IWbemProviderInitSink {
    CONST_VTBL IWbemProviderInitSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemProviderInitSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemProviderInitSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemProviderInitSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemProviderInitSink methods ***/
#define IWbemProviderInitSink_SetStatus(This,lStatus,lFlags) \
    ((This)->lpVtbl->SetStatus(This,lStatus,lFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemProviderInitSink_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemProviderInit interface
 */
#ifndef __IWbemProviderInit_INTERFACE_DEFINED__
#define __IWbemProviderInit_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemProviderInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemProviderInitVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemProviderInit *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemProviderInit *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemProviderInit *This);

    /*** IWbemProviderInit methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWbemProviderInit *This,
        LPWSTR wszUser,
        LONG lFlags,
        LPWSTR wszNamespace,
        LPWSTR wszLocale,
        IWbemServices *pNamespace,
        IWbemContext *pCtx,
        IWbemProviderInitSink *pInitSink);

    END_INTERFACE
} IWbemProviderInitVtbl;

interface IWbemProviderInit {
    CONST_VTBL IWbemProviderInitVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemProviderInit_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemProviderInit_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemProviderInit_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemProviderInit methods ***/
#define IWbemProviderInit_Initialize(This,wszUser,lFlags,wszNamespace,wszLocale,pNamespace,pCtx,pInitSink) \
    ((This)->lpVtbl->Initialize(This,wszUser,lFlags,wszNamespace,wszLocale,pNamespace,pCtx,pInitSink))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemProviderInit_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWbemHiPerfProvider interface
 */
#ifndef __IWbemHiPerfProvider_INTERFACE_DEFINED__
#define __IWbemHiPerfProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemHiPerfProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemHiPerfProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemHiPerfProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemHiPerfProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemHiPerfProvider *This);

    /*** IWbemHiPerfProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInstances)(
        IWbemHiPerfProvider *This,
        IWbemServices *pNamespace,
        WCHAR *wszClass,
        long lFlags,
        IWbemContext *pCtx,
        IWbemObjectSink *pSink);

    HRESULT (STDMETHODCALLTYPE *CreateRefresher)(
        IWbemHiPerfProvider *This,
        IWbemServices *pNamespace,
        long lFlags,
        IWbemRefresher **ppRefresher);

    HRESULT (STDMETHODCALLTYPE *CreateRefreshableObject)(
        IWbemHiPerfProvider *This,
        IWbemServices *pNamespace,
        IWbemObjectAccess *pTemplate,
        IWbemRefresher *pRefresher,
        long lFlags,
        IWbemContext *pContext,
        IWbemObjectAccess **ppRefreshable,
        long *plId);

    HRESULT (STDMETHODCALLTYPE *StopRefreshing)(
        IWbemHiPerfProvider *This,
        IWbemRefresher *pRefresher,
        long lId,
        long lFlags);

    HRESULT (STDMETHODCALLTYPE *CreateRefreshableEnum)(
        IWbemHiPerfProvider *This,
        IWbemServices *pNamespace,
        LPCWSTR wszClass,
        IWbemRefresher *pRefresher,
        long lFlags,
        IWbemContext *pContext,
        IWbemHiPerfEnum *pHiPerfEnum,
        long *plId);

    HRESULT (STDMETHODCALLTYPE *GetObjects)(
        IWbemHiPerfProvider *This,
        IWbemServices *pNamespace,
        long lNumObjects,
        IWbemObjectAccess **apObj,
        long lFlags,
        IWbemContext *pContext);

    END_INTERFACE
} IWbemHiPerfProviderVtbl;

interface IWbemHiPerfProvider {
    CONST_VTBL IWbemHiPerfProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemHiPerfProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemHiPerfProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemHiPerfProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemHiPerfProvider methods ***/
#define IWbemHiPerfProvider_QueryInstances(This,pNamespace,wszClass,lFlags,pCtx,pSink) \
    ((This)->lpVtbl->QueryInstances(This,pNamespace,wszClass,lFlags,pCtx,pSink))
#define IWbemHiPerfProvider_CreateRefresher(This,pNamespace,lFlags,ppRefresher) \
    ((This)->lpVtbl->CreateRefresher(This,pNamespace,lFlags,ppRefresher))
#define IWbemHiPerfProvider_CreateRefreshableObject(This,pNamespace,pTemplate,pRefresher,lFlags,pContext,ppRefreshable,plId) \
    ((This)->lpVtbl->CreateRefreshableObject(This,pNamespace,pTemplate,pRefresher,lFlags,pContext,ppRefreshable,plId))
#define IWbemHiPerfProvider_StopRefreshing(This,pRefresher,lId,lFlags) \
    ((This)->lpVtbl->StopRefreshing(This,pRefresher,lId,lFlags))
#define IWbemHiPerfProvider_CreateRefreshableEnum(This,pNamespace,wszClass,pRefresher,lFlags,pContext,pHiPerfEnum,plId) \
    ((This)->lpVtbl->CreateRefreshableEnum(This,pNamespace,wszClass,pRefresher,lFlags,pContext,pHiPerfEnum,plId))
#define IWbemHiPerfProvider_GetObjects(This,pNamespace,lNumObjects,apObj,lFlags,pContext) \
    ((This)->lpVtbl->GetObjects(This,pNamespace,lNumObjects,apObj,lFlags,pContext))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemHiPerfProvider_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemDecoupledRegistrar interface
 */
#ifndef __IWbemDecoupledRegistrar_INTERFACE_DEFINED__
#define __IWbemDecoupledRegistrar_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemDecoupledRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemDecoupledRegistrarVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemDecoupledRegistrar *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemDecoupledRegistrar *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemDecoupledRegistrar *This);

    /*** IWbemDecoupledRegistrar methods ***/
    HRESULT (STDMETHODCALLTYPE *Register)(
        IWbemDecoupledRegistrar *This,
        long a_Flags,
        IWbemContext *a_Context,
        LPCWSTR a_User,
        LPCWSTR a_Locale,
        LPCWSTR a_Scope,
        LPCWSTR a_Registration,
        IUnknown *pIUnknown);

    HRESULT (STDMETHODCALLTYPE *UnRegister)(
        IWbemDecoupledRegistrar *This);

    END_INTERFACE
} IWbemDecoupledRegistrarVtbl;

interface IWbemDecoupledRegistrar {
    CONST_VTBL IWbemDecoupledRegistrarVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemDecoupledRegistrar_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemDecoupledRegistrar_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemDecoupledRegistrar_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemDecoupledRegistrar methods ***/
#define IWbemDecoupledRegistrar_Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown) \
    ((This)->lpVtbl->Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown))
#define IWbemDecoupledRegistrar_UnRegister(This) \
    ((This)->lpVtbl->UnRegister(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemDecoupledRegistrar_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWbemDecoupledBasicEventProvider interface
 */
#ifndef __IWbemDecoupledBasicEventProvider_INTERFACE_DEFINED__
#define __IWbemDecoupledBasicEventProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWbemDecoupledBasicEventProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWbemDecoupledBasicEventProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWbemDecoupledBasicEventProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWbemDecoupledBasicEventProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWbemDecoupledBasicEventProvider *This);

    /*** IWbemDecoupledRegistrar methods ***/
    HRESULT (STDMETHODCALLTYPE *Register)(
        IWbemDecoupledBasicEventProvider *This,
        long a_Flags,
        IWbemContext *a_Context,
        LPCWSTR a_User,
        LPCWSTR a_Locale,
        LPCWSTR a_Scope,
        LPCWSTR a_Registration,
        IUnknown *pIUnknown);

    HRESULT (STDMETHODCALLTYPE *UnRegister)(
        IWbemDecoupledBasicEventProvider *This);

    /*** IWbemDecoupledBasicEventProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSink)(
        IWbemDecoupledBasicEventProvider *This,
        long a_Flags,
        IWbemContext *a_Context,
        IWbemObjectSink **a_Sink);

    HRESULT (STDMETHODCALLTYPE *GetService)(
        IWbemDecoupledBasicEventProvider *This,
        long a_Flags,
        IWbemContext *a_Context,
        IWbemServices **a_Service);

    END_INTERFACE
} IWbemDecoupledBasicEventProviderVtbl;

interface IWbemDecoupledBasicEventProvider {
    CONST_VTBL IWbemDecoupledBasicEventProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWbemDecoupledBasicEventProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWbemDecoupledBasicEventProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWbemDecoupledBasicEventProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWbemDecoupledRegistrar methods ***/
#define IWbemDecoupledBasicEventProvider_Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown) \
    ((This)->lpVtbl->Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown))
#define IWbemDecoupledBasicEventProvider_UnRegister(This) \
    ((This)->lpVtbl->UnRegister(This))
/*** IWbemDecoupledBasicEventProvider methods ***/
#define IWbemDecoupledBasicEventProvider_GetSink(This,a_Flags,a_Context,a_Sink) \
    ((This)->lpVtbl->GetSink(This,a_Flags,a_Context,a_Sink))
#define IWbemDecoupledBasicEventProvider_GetService(This,a_Flags,a_Context,a_Service) \
    ((This)->lpVtbl->GetService(This,a_Flags,a_Context,a_Service))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWbemDecoupledBasicEventProvider_INTERFACE_DEFINED__ */

typedef enum tag_WBEM_BATCH_TYPE {
    WBEM_FLAG_BATCH_IF_NEEDED = 0,
    WBEM_FLAG_MUST_BATCH = 0x1,
    WBEM_FLAG_MUST_NOT_BATCH = 0x2
} WBEM_BATCH_TYPE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT) */

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

#endif /* __wbemprov_h__ */
