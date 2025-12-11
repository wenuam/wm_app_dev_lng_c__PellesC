/* Generated from bits2_5.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits2_5_h__
#define __bits2_5_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#endif /* __IBackgroundCopyJobHttpOptions_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager2_5_FWD_DEFINED__
#define __BackgroundCopyManager2_5_FWD_DEFINED__
typedef struct BackgroundCopyManager2_5 BackgroundCopyManager2_5;
#endif /* __BackgroundCopyManager2_5_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBackgroundCopyJobHttpOptions interface
 */
#ifndef __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__
#define __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__

typedef enum BG_CERT_STORE_LOCATION {
    BG_CERT_STORE_LOCATION_CURRENT_USER = 0,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE = 1,
    BG_CERT_STORE_LOCATION_CURRENT_SERVICE = 2,
    BG_CERT_STORE_LOCATION_SERVICES = 3,
    BG_CERT_STORE_LOCATION_USERS = 4,
    BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY = 5,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY = 6,
    BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE = 7
} BG_CERT_STORE_LOCATION;

EXTERN_C const IID IID_IBackgroundCopyJobHttpOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJobHttpOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJobHttpOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJobHttpOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJobHttpOptions *This);

    /*** IBackgroundCopyJobHttpOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByID)(
        IBackgroundCopyJobHttpOptions *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        byte *pCertHashBlob);

    HRESULT (STDMETHODCALLTYPE *SetClientCertificateByName)(
        IBackgroundCopyJobHttpOptions *This,
        BG_CERT_STORE_LOCATION StoreLocation,
        LPCWSTR StoreName,
        LPCWSTR SubjectName);

    HRESULT (STDMETHODCALLTYPE *RemoveClientCertificate)(
        IBackgroundCopyJobHttpOptions *This);

    HRESULT (STDMETHODCALLTYPE *GetClientCertificate)(
        IBackgroundCopyJobHttpOptions *This,
        BG_CERT_STORE_LOCATION *pStoreLocation,
        LPWSTR *pStoreName,
        byte **ppCertHashBlob,
        LPWSTR *pSubjectName);

    HRESULT (STDMETHODCALLTYPE *SetCustomHeaders)(
        IBackgroundCopyJobHttpOptions *This,
        LPCWSTR RequestHeaders);

    HRESULT (STDMETHODCALLTYPE *GetCustomHeaders)(
        IBackgroundCopyJobHttpOptions *This,
        LPWSTR *pRequestHeaders);

    HRESULT (STDMETHODCALLTYPE *SetSecurityFlags)(
        IBackgroundCopyJobHttpOptions *This,
        ULONG Flags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityFlags)(
        IBackgroundCopyJobHttpOptions *This,
        ULONG *pFlags);

    END_INTERFACE
} IBackgroundCopyJobHttpOptionsVtbl;

interface IBackgroundCopyJobHttpOptions {
    CONST_VTBL IBackgroundCopyJobHttpOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJobHttpOptions_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJobHttpOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJobHttpOptions_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJobHttpOptions methods ***/
#define IBackgroundCopyJobHttpOptions_SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob) \
    ((This)->lpVtbl->SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob))
#define IBackgroundCopyJobHttpOptions_SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName) \
    ((This)->lpVtbl->SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName))
#define IBackgroundCopyJobHttpOptions_RemoveClientCertificate(This) \
    ((This)->lpVtbl->RemoveClientCertificate(This))
#define IBackgroundCopyJobHttpOptions_GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName) \
    ((This)->lpVtbl->GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName))
#define IBackgroundCopyJobHttpOptions_SetCustomHeaders(This,RequestHeaders) \
    ((This)->lpVtbl->SetCustomHeaders(This,RequestHeaders))
#define IBackgroundCopyJobHttpOptions_GetCustomHeaders(This,pRequestHeaders) \
    ((This)->lpVtbl->GetCustomHeaders(This,pRequestHeaders))
#define IBackgroundCopyJobHttpOptions_SetSecurityFlags(This,Flags) \
    ((This)->lpVtbl->SetSecurityFlags(This,Flags))
#define IBackgroundCopyJobHttpOptions_GetSecurityFlags(This,pFlags) \
    ((This)->lpVtbl->GetSecurityFlags(This,pFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager2_5_LIBRARY_DEFINED__
#define __BackgroundCopyManager2_5_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager2_5 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager2_5;


#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#endif /* __IBackgroundCopyCallback_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile2_FWD_DEFINED__
#define __IBackgroundCopyFile2_FWD_DEFINED__
typedef interface IBackgroundCopyFile2 IBackgroundCopyFile2;
#endif /* __IBackgroundCopyFile2_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob3_FWD_DEFINED__
#define __IBackgroundCopyJob3_FWD_DEFINED__
typedef interface IBackgroundCopyJob3 IBackgroundCopyJob3;
#endif /* __IBackgroundCopyJob3_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#endif /* __IBackgroundCopyJobHttpOptions_FWD_DEFINED__ */
#endif /* __BackgroundCopyManager2_5_LIBRARY_DEFINED__ */

#define   BG_SSL_ENABLE_CRL_CHECK               0x0001
#define   BG_SSL_IGNORE_CERT_CN_INVALID         0x0002
#define   BG_SSL_IGNORE_CERT_DATE_INVALID       0x0004
#define   BG_SSL_IGNORE_UNKNOWN_CA              0x0008
#define   BG_SSL_IGNORE_CERT_WRONG_USAGE        0x0010

#define   BG_HTTP_REDIRECT_POLICY_MASK          0x0700

#define   BG_HTTP_REDIRECT_POLICY_ALLOW_SILENT  0x0000
#define   BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT  0x0100
#define   BG_HTTP_REDIRECT_POLICY_DISALLOW      0x0200

#define   BG_HTTP_REDIRECT_POLICY_ALLOW_HTTPS_TO_HTTP  0x0800

#include "bits3_0.h"

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

#endif /* __bits2_5_h__ */
