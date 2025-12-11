/* Generated from bits10_2.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits10_2_h__
#define __bits10_2_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJobHttpOptions2_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions2_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions2 IBackgroundCopyJobHttpOptions2;
#endif /* __IBackgroundCopyJobHttpOptions2_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager10_2_FWD_DEFINED__
#define __BackgroundCopyManager10_2_FWD_DEFINED__
typedef struct BackgroundCopyManager10_2 BackgroundCopyManager10_2;
#endif /* __BackgroundCopyManager10_2_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
#include "bits5_0.h"
#include "bits10_1.h"


#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)
#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBackgroundCopyJobHttpOptions2 interface
 */
#ifndef __IBackgroundCopyJobHttpOptions2_INTERFACE_DEFINED__
#define __IBackgroundCopyJobHttpOptions2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyJobHttpOptions2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJobHttpOptions2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJobHttpOptions2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJobHttpOptions2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJobHttpOptions2 *This);

    /*** IBackgroundCopyJobHttpOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByID)(
        IBackgroundCopyJobHttpOptions2 *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        byte *pCertHashBlob);

    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByName)(
        IBackgroundCopyJobHttpOptions2 *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        LPCWSTR SubjectName);

    HRESULT (STDMETHODCALLTYPE *RemoveClientCertificate)(
        IBackgroundCopyJobHttpOptions2 *This);

    HRESULT (STDMETHODCALLTYPE *GetClientCertificate)(
        IBackgroundCopyJobHttpOptions2 *This,
        BG_CERT_STORE_LOCATION *pStoreLocation,
        LPWSTR *pStoreName,
        byte **ppCertHashBlob,
        LPWSTR *pSubjectName);

    HRESULT (STDMETHODCALLTYPE *SetCustomHeaders)(
        IBackgroundCopyJobHttpOptions2 *This,
        LPCWSTR RequestHeaders);

    HRESULT (STDMETHODCALLTYPE *GetCustomHeaders)(
        IBackgroundCopyJobHttpOptions2 *This,
        LPWSTR *pRequestHeaders);

    HRESULT (STDMETHODCALLTYPE *SetSecurityFlags)(
        IBackgroundCopyJobHttpOptions2 *This,
        ULONG Flags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityFlags)(
        IBackgroundCopyJobHttpOptions2 *This,
        ULONG *pFlags);

    /*** IBackgroundCopyJobHttpOptions2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetHttpMethod)(
        IBackgroundCopyJobHttpOptions2 *This,
        LPCWSTR method);

    HRESULT (STDMETHODCALLTYPE *GetHttpMethod)(
        IBackgroundCopyJobHttpOptions2 *This,
        LPWSTR *method);

    END_INTERFACE
} IBackgroundCopyJobHttpOptions2Vtbl;

interface IBackgroundCopyJobHttpOptions2 {
    CONST_VTBL IBackgroundCopyJobHttpOptions2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJobHttpOptions2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJobHttpOptions2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJobHttpOptions2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJobHttpOptions methods ***/
#define IBackgroundCopyJobHttpOptions2_SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob) \
    ((This)->lpVtbl->SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob))
#define IBackgroundCopyJobHttpOptions2_SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName) \
    ((This)->lpVtbl->SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName))
#define IBackgroundCopyJobHttpOptions2_RemoveClientCertificate(This) \
    ((This)->lpVtbl->RemoveClientCertificate(This))
#define IBackgroundCopyJobHttpOptions2_GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName) \
    ((This)->lpVtbl->GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName))
#define IBackgroundCopyJobHttpOptions2_SetCustomHeaders(This,RequestHeaders) \
    ((This)->lpVtbl->SetCustomHeaders(This,RequestHeaders))
#define IBackgroundCopyJobHttpOptions2_GetCustomHeaders(This,pRequestHeaders) \
    ((This)->lpVtbl->GetCustomHeaders(This,pRequestHeaders))
#define IBackgroundCopyJobHttpOptions2_SetSecurityFlags(This,Flags) \
    ((This)->lpVtbl->SetSecurityFlags(This,Flags))
#define IBackgroundCopyJobHttpOptions2_GetSecurityFlags(This,pFlags) \
    ((This)->lpVtbl->GetSecurityFlags(This,pFlags))
/*** IBackgroundCopyJobHttpOptions2 methods ***/
#define IBackgroundCopyJobHttpOptions2_SetHttpMethod(This,method) \
    ((This)->lpVtbl->SetHttpMethod(This,method))
#define IBackgroundCopyJobHttpOptions2_GetHttpMethod(This,method) \
    ((This)->lpVtbl->GetHttpMethod(This,method))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJobHttpOptions2_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager10_2_LIBRARY_DEFINED__
#define __BackgroundCopyManager10_2_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager10_2 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager10_2;


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


#ifndef __IBackgroundCopyJobHttpOptions2_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions2_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions2 IBackgroundCopyJobHttpOptions2;
#endif /* __IBackgroundCopyJobHttpOptions2_FWD_DEFINED__ */


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
#endif /* __BackgroundCopyManager10_2_LIBRARY_DEFINED__ */

#include "bits10_3.h"

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* NTDDI_VERSION >= NTDDI_WIN10_RS5 */
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

#endif /* __bits10_2_h__ */
