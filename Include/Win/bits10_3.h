/* Generated from bits10_3.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits10_3_h__
#define __bits10_3_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyServerCertificateValidationCallback_FWD_DEFINED__
#define __IBackgroundCopyServerCertificateValidationCallback_FWD_DEFINED__
typedef interface IBackgroundCopyServerCertificateValidationCallback IBackgroundCopyServerCertificateValidationCallback;
#endif /* __IBackgroundCopyServerCertificateValidationCallback_FWD_DEFINED__ */

#ifndef __IBackgroundCopyJobHttpOptions3_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions3_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions3 IBackgroundCopyJobHttpOptions3;
#endif /* __IBackgroundCopyJobHttpOptions3_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager10_3_FWD_DEFINED__
#define __BackgroundCopyManager10_3_FWD_DEFINED__
typedef struct BackgroundCopyManager10_3 BackgroundCopyManager10_3;
#endif /* __BackgroundCopyManager10_3_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
#include "bits5_0.h"
#include "bits10_1.h"
#include "bits10_2.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBackgroundCopyServerCertificateValidationCallback interface
 */
#ifndef __IBackgroundCopyServerCertificateValidationCallback_INTERFACE_DEFINED__
#define __IBackgroundCopyServerCertificateValidationCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyServerCertificateValidationCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyServerCertificateValidationCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyServerCertificateValidationCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyServerCertificateValidationCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyServerCertificateValidationCallback *This);

    /*** IBackgroundCopyServerCertificateValidationCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *ValidateServerCertificate)(
        IBackgroundCopyServerCertificateValidationCallback *This,
        IBackgroundCopyJob *job,
        IBackgroundCopyFile *file,
        DWORD certLength,
        const BYTE *certData,
        DWORD certEncodingType,
        DWORD certStoreLength,
        const BYTE *certStoreData);

    END_INTERFACE
} IBackgroundCopyServerCertificateValidationCallbackVtbl;

interface IBackgroundCopyServerCertificateValidationCallback {
    CONST_VTBL IBackgroundCopyServerCertificateValidationCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyServerCertificateValidationCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyServerCertificateValidationCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyServerCertificateValidationCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyServerCertificateValidationCallback methods ***/
#define IBackgroundCopyServerCertificateValidationCallback_ValidateServerCertificate(This,job,file,certLength,certData,certEncodingType,certStoreLength,certStoreData) \
    ((This)->lpVtbl->ValidateServerCertificate(This,job,file,certLength,certData,certEncodingType,certStoreLength,certStoreData))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyServerCertificateValidationCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyJobHttpOptions3 interface
 */
#ifndef __IBackgroundCopyJobHttpOptions3_INTERFACE_DEFINED__
#define __IBackgroundCopyJobHttpOptions3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyJobHttpOptions3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJobHttpOptions3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJobHttpOptions3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJobHttpOptions3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJobHttpOptions3 *This);

    /*** IBackgroundCopyJobHttpOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByID)(
        IBackgroundCopyJobHttpOptions3 *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        byte *pCertHashBlob);

    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByName)(
        IBackgroundCopyJobHttpOptions3 *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        LPCWSTR SubjectName);

    HRESULT (STDMETHODCALLTYPE *RemoveClientCertificate)(
        IBackgroundCopyJobHttpOptions3 *This);

    HRESULT (STDMETHODCALLTYPE *GetClientCertificate)(
        IBackgroundCopyJobHttpOptions3 *This,
        BG_CERT_STORE_LOCATION *pStoreLocation,
        LPWSTR *pStoreName,
        byte **ppCertHashBlob,
        LPWSTR *pSubjectName);

    HRESULT (STDMETHODCALLTYPE *SetCustomHeaders)(
        IBackgroundCopyJobHttpOptions3 *This,
        LPCWSTR RequestHeaders);

    HRESULT (STDMETHODCALLTYPE *GetCustomHeaders)(
        IBackgroundCopyJobHttpOptions3 *This,
        LPWSTR *pRequestHeaders);

    HRESULT (STDMETHODCALLTYPE *SetSecurityFlags)(
        IBackgroundCopyJobHttpOptions3 *This,
        ULONG Flags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityFlags)(
        IBackgroundCopyJobHttpOptions3 *This,
        ULONG *pFlags);

    /*** IBackgroundCopyJobHttpOptions2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetHttpMethod)(
        IBackgroundCopyJobHttpOptions3 *This,
        LPCWSTR method);

    HRESULT (STDMETHODCALLTYPE *GetHttpMethod)(
        IBackgroundCopyJobHttpOptions3 *This,
        LPWSTR *method);

    /*** IBackgroundCopyJobHttpOptions3 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetServerCertificateValidationInterface)(
        IBackgroundCopyJobHttpOptions3 *This,
        IUnknown *certValidationCallback);

    HRESULT (STDMETHODCALLTYPE *MakeCustomHeadersWriteOnly)(
        IBackgroundCopyJobHttpOptions3 *This);

    END_INTERFACE
} IBackgroundCopyJobHttpOptions3Vtbl;

interface IBackgroundCopyJobHttpOptions3 {
    CONST_VTBL IBackgroundCopyJobHttpOptions3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJobHttpOptions3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJobHttpOptions3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJobHttpOptions3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJobHttpOptions methods ***/
#define IBackgroundCopyJobHttpOptions3_SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob) \
    ((This)->lpVtbl->SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob))
#define IBackgroundCopyJobHttpOptions3_SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName) \
    ((This)->lpVtbl->SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName))
#define IBackgroundCopyJobHttpOptions3_RemoveClientCertificate(This) \
    ((This)->lpVtbl->RemoveClientCertificate(This))
#define IBackgroundCopyJobHttpOptions3_GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName) \
    ((This)->lpVtbl->GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName))
#define IBackgroundCopyJobHttpOptions3_SetCustomHeaders(This,RequestHeaders) \
    ((This)->lpVtbl->SetCustomHeaders(This,RequestHeaders))
#define IBackgroundCopyJobHttpOptions3_GetCustomHeaders(This,pRequestHeaders) \
    ((This)->lpVtbl->GetCustomHeaders(This,pRequestHeaders))
#define IBackgroundCopyJobHttpOptions3_SetSecurityFlags(This,Flags) \
    ((This)->lpVtbl->SetSecurityFlags(This,Flags))
#define IBackgroundCopyJobHttpOptions3_GetSecurityFlags(This,pFlags) \
    ((This)->lpVtbl->GetSecurityFlags(This,pFlags))
/*** IBackgroundCopyJobHttpOptions2 methods ***/
#define IBackgroundCopyJobHttpOptions3_SetHttpMethod(This,method) \
    ((This)->lpVtbl->SetHttpMethod(This,method))
#define IBackgroundCopyJobHttpOptions3_GetHttpMethod(This,method) \
    ((This)->lpVtbl->GetHttpMethod(This,method))
/*** IBackgroundCopyJobHttpOptions3 methods ***/
#define IBackgroundCopyJobHttpOptions3_SetServerCertificateValidationInterface(This,certValidationCallback) \
    ((This)->lpVtbl->SetServerCertificateValidationInterface(This,certValidationCallback))
#define IBackgroundCopyJobHttpOptions3_MakeCustomHeadersWriteOnly(This) \
    ((This)->lpVtbl->MakeCustomHeadersWriteOnly(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJobHttpOptions3_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager10_3_LIBRARY_DEFINED__
#define __BackgroundCopyManager10_3_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager10_3 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager10_3;


#ifndef __IBackgroundCopyCallback3_FWD_DEFINED__
#define __IBackgroundCopyCallback3_FWD_DEFINED__
typedef interface IBackgroundCopyCallback3 IBackgroundCopyCallback3;
#endif /* __IBackgroundCopyCallback3_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile6_FWD_DEFINED__
#define __IBackgroundCopyFile6_FWD_DEFINED__
typedef interface IBackgroundCopyFile6 IBackgroundCopyFile6;
#endif /* __IBackgroundCopyFile6_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob5_FWD_DEFINED__
#define __IBackgroundCopyJob5_FWD_DEFINED__
typedef interface IBackgroundCopyJob5 IBackgroundCopyJob5;
#endif /* __IBackgroundCopyJob5_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJobHttpOptions3_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions3_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions3 IBackgroundCopyJobHttpOptions3;
#endif /* __IBackgroundCopyJobHttpOptions3_FWD_DEFINED__ */


#ifndef __IBackgroundCopyServerCertificateValidationCallback_FWD_DEFINED__
#define __IBackgroundCopyServerCertificateValidationCallback_FWD_DEFINED__
typedef interface IBackgroundCopyServerCertificateValidationCallback IBackgroundCopyServerCertificateValidationCallback;
#endif /* __IBackgroundCopyServerCertificateValidationCallback_FWD_DEFINED__ */


#ifndef __IBitsPeer_FWD_DEFINED__
#define __IBitsPeer_FWD_DEFINED__
typedef interface IBitsPeer IBitsPeer;
#endif /* __IBitsPeer_FWD_DEFINED__ */


#ifndef __IBitsPeerCacheAdministration_FWD_DEFINED__
#define __IBitsPeerCacheAdministration_FWD_DEFINED__
typedef interface IBitsPeerCacheAdministration IBitsPeerCacheAdministration;
#endif /* __IBitsPeerCacheAdministration_FWD_DEFINED__ */


#ifndef __IBitsPeerCacheRecord_FWD_DEFINED__
#define __IBitsPeerCacheRecord_FWD_DEFINED__
typedef interface IBitsPeerCacheRecord IBitsPeerCacheRecord;
#endif /* __IBitsPeerCacheRecord_FWD_DEFINED__ */


#ifndef __IBitsTokenOptions_FWD_DEFINED__
#define __IBitsTokenOptions_FWD_DEFINED__
typedef interface IBitsTokenOptions IBitsTokenOptions;
#endif /* __IBitsTokenOptions_FWD_DEFINED__ */


#ifndef __IEnumBitsPeerCacheRecords_FWD_DEFINED__
#define __IEnumBitsPeerCacheRecords_FWD_DEFINED__
typedef interface IEnumBitsPeerCacheRecords IEnumBitsPeerCacheRecords;
#endif /* __IEnumBitsPeerCacheRecords_FWD_DEFINED__ */


#ifndef __IEnumBitsPeers_FWD_DEFINED__
#define __IEnumBitsPeers_FWD_DEFINED__
typedef interface IEnumBitsPeers IEnumBitsPeers;
#endif /* __IEnumBitsPeers_FWD_DEFINED__ */
#endif /* __BackgroundCopyManager10_3_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER VARIANT_UserSize(ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal(ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(ULONG *, VARIANT *);
ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER CLEANLOCALSTORAGE_UserSize(ULONG *, ULONG, CLEANLOCALSTORAGE *);
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserMarshal(ULONG *, unsigned char *, CLEANLOCALSTORAGE *);
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserUnmarshal(ULONG *, unsigned char *, CLEANLOCALSTORAGE *);
void __RPC_USER CLEANLOCALSTORAGE_UserFree(ULONG *, CLEANLOCALSTORAGE *);
ULONG __RPC_USER CLIPFORMAT_UserSize(ULONG *, ULONG, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal(ULONG *, unsigned char *, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(ULONG *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(ULONG *, CLIPFORMAT *);
ULONG __RPC_USER STGMEDIUM_UserSize(ULONG *, ULONG, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserMarshal(ULONG *, unsigned char *, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(ULONG *, STGMEDIUM *);
ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);
ULONG __RPC_USER HMENU_UserSize(ULONG *, ULONG, HMENU *);
unsigned char * __RPC_USER HMENU_UserMarshal(ULONG *, unsigned char *, HMENU *);
unsigned char * __RPC_USER HMENU_UserUnmarshal(ULONG *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(ULONG *, HMENU *);
ULONG __RPC_USER HGLOBAL_UserSize(ULONG *, ULONG, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserMarshal(ULONG *, unsigned char *, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserUnmarshal(ULONG *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree(ULONG *, HGLOBAL *);
ULONG __RPC_USER HACCEL_UserSize(ULONG *, ULONG, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserMarshal(ULONG *, unsigned char *, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserUnmarshal(ULONG *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree(ULONG *, HACCEL *);
ULONG __RPC_USER HDC_UserSize(ULONG *, ULONG, HDC *);
unsigned char * __RPC_USER HDC_UserMarshal(ULONG *, unsigned char *, HDC *);
unsigned char * __RPC_USER HDC_UserUnmarshal(ULONG *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree(ULONG *, HDC *);

/* End additional prototypes for all interfaces */

#endif /* __bits10_3_h__ */
