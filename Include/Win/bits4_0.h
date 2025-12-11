/* Generated from bits4_0.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits4_0_h__
#define __bits4_0_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBitsTokenOptions_FWD_DEFINED__
#define __IBitsTokenOptions_FWD_DEFINED__
typedef interface IBitsTokenOptions IBitsTokenOptions;
#endif /* __IBitsTokenOptions_FWD_DEFINED__ */

#ifndef __IBackgroundCopyFile4_FWD_DEFINED__
#define __IBackgroundCopyFile4_FWD_DEFINED__
typedef interface IBackgroundCopyFile4 IBackgroundCopyFile4;
#endif /* __IBackgroundCopyFile4_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager4_0_FWD_DEFINED__
#define __BackgroundCopyManager4_0_FWD_DEFINED__
typedef struct BackgroundCopyManager4_0 BackgroundCopyManager4_0;
#endif /* __BackgroundCopyManager4_0_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBitsTokenOptions interface
 */
#ifndef __IBitsTokenOptions_INTERFACE_DEFINED__
#define __IBitsTokenOptions_INTERFACE_DEFINED__

#define BG_TOKEN_LOCAL_FILE      0x0001
#define BG_TOKEN_NETWORK         0x0002

EXTERN_C const IID IID_IBitsTokenOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBitsTokenOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBitsTokenOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBitsTokenOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBitsTokenOptions *This);

    /*** IBitsTokenOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *SetHelperTokenFlags)(
        IBitsTokenOptions *This,
        DWORD UsageFlags);

    HRESULT (STDMETHODCALLTYPE *GetHelperTokenFlags)(
        IBitsTokenOptions *This,
        DWORD *pFlags);

    HRESULT (STDMETHODCALLTYPE *SetHelperToken)(
        IBitsTokenOptions *This);

    HRESULT (STDMETHODCALLTYPE *ClearHelperToken)(
        IBitsTokenOptions *This);

    HRESULT (STDMETHODCALLTYPE *GetHelperTokenSid)(
        IBitsTokenOptions *This,
        LPWSTR *pSid);

    END_INTERFACE
} IBitsTokenOptionsVtbl;

interface IBitsTokenOptions {
    CONST_VTBL IBitsTokenOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBitsTokenOptions_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBitsTokenOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBitsTokenOptions_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBitsTokenOptions methods ***/
#define IBitsTokenOptions_SetHelperTokenFlags(This,UsageFlags) \
    ((This)->lpVtbl->SetHelperTokenFlags(This,UsageFlags))
#define IBitsTokenOptions_GetHelperTokenFlags(This,pFlags) \
    ((This)->lpVtbl->GetHelperTokenFlags(This,pFlags))
#define IBitsTokenOptions_SetHelperToken(This) \
    ((This)->lpVtbl->SetHelperToken(This))
#define IBitsTokenOptions_ClearHelperToken(This) \
    ((This)->lpVtbl->ClearHelperToken(This))
#define IBitsTokenOptions_GetHelperTokenSid(This,pSid) \
    ((This)->lpVtbl->GetHelperTokenSid(This,pSid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBitsTokenOptions_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyFile4 interface
 */
#ifndef __IBackgroundCopyFile4_INTERFACE_DEFINED__
#define __IBackgroundCopyFile4_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyFile4;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyFile4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyFile4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyFile4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyFile4 *This);

    /*** IBackgroundCopyFile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteName)(
        IBackgroundCopyFile4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IBackgroundCopyFile4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyFile4 *This,
        BG_FILE_PROGRESS *pVal);

    /*** IBackgroundCopyFile2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFileRanges)(
        IBackgroundCopyFile4 *This,
        DWORD *RangeCount,
        BG_FILE_RANGE **Ranges);

    HRESULT (STDMETHODCALLTYPE *SetRemoteName)(
        IBackgroundCopyFile4 *This,
        LPCWSTR Val);

    /*** IBackgroundCopyFile3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTemporaryName)(
        IBackgroundCopyFile4 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetValidationState)(
        IBackgroundCopyFile4 *This,
        BOOL state);

    HRESULT (STDMETHODCALLTYPE *GetValidationState)(
        IBackgroundCopyFile4 *This,
        BOOL *pState);

    HRESULT (STDMETHODCALLTYPE *IsDownloadedFromPeer)(
        IBackgroundCopyFile4 *This,
        BOOL *pVal);

    /*** IBackgroundCopyFile4 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPeerDownloadStats)(
        IBackgroundCopyFile4 *This,
        PUINT64 pFromOrigin,
        PUINT64 pFromPeers);

    END_INTERFACE
} IBackgroundCopyFile4Vtbl;

interface IBackgroundCopyFile4 {
    CONST_VTBL IBackgroundCopyFile4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyFile4_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyFile4_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyFile4_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyFile methods ***/
#define IBackgroundCopyFile4_GetRemoteName(This,pVal) \
    ((This)->lpVtbl->GetRemoteName(This,pVal))
#define IBackgroundCopyFile4_GetLocalName(This,pVal) \
    ((This)->lpVtbl->GetLocalName(This,pVal))
#define IBackgroundCopyFile4_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
/*** IBackgroundCopyFile2 methods ***/
#define IBackgroundCopyFile4_GetFileRanges(This,RangeCount,Ranges) \
    ((This)->lpVtbl->GetFileRanges(This,RangeCount,Ranges))
#define IBackgroundCopyFile4_SetRemoteName(This,Val) \
    ((This)->lpVtbl->SetRemoteName(This,Val))
/*** IBackgroundCopyFile3 methods ***/
#define IBackgroundCopyFile4_GetTemporaryName(This,pFilename) \
    ((This)->lpVtbl->GetTemporaryName(This,pFilename))
#define IBackgroundCopyFile4_SetValidationState(This,state) \
    ((This)->lpVtbl->SetValidationState(This,state))
#define IBackgroundCopyFile4_GetValidationState(This,pState) \
    ((This)->lpVtbl->GetValidationState(This,pState))
#define IBackgroundCopyFile4_IsDownloadedFromPeer(This,pVal) \
    ((This)->lpVtbl->IsDownloadedFromPeer(This,pVal))
/*** IBackgroundCopyFile4 methods ***/
#define IBackgroundCopyFile4_GetPeerDownloadStats(This,pFromOrigin,pFromPeers) \
    ((This)->lpVtbl->GetPeerDownloadStats(This,pFromOrigin,pFromPeers))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyFile4_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager4_0_LIBRARY_DEFINED__
#define __BackgroundCopyManager4_0_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager4_0 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager4_0;


#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#endif /* __IBackgroundCopyCallback2_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile4_FWD_DEFINED__
#define __IBackgroundCopyFile4_FWD_DEFINED__
typedef interface IBackgroundCopyFile4 IBackgroundCopyFile4;
#endif /* __IBackgroundCopyFile4_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob4_FWD_DEFINED__
#define __IBackgroundCopyJob4_FWD_DEFINED__
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
#endif /* __IBackgroundCopyJob4_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#endif /* __IBackgroundCopyJobHttpOptions_FWD_DEFINED__ */


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
#endif /* __BackgroundCopyManager4_0_LIBRARY_DEFINED__ */

#include "bits5_0.h"

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

#endif /* __bits4_0_h__ */
