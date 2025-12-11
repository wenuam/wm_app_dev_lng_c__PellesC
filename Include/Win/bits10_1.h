/* Generated from bits10_1.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits10_1_h__
#define __bits10_1_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyCallback3_FWD_DEFINED__
#define __IBackgroundCopyCallback3_FWD_DEFINED__
typedef interface IBackgroundCopyCallback3 IBackgroundCopyCallback3;
#endif /* __IBackgroundCopyCallback3_FWD_DEFINED__ */

#ifndef __IBackgroundCopyFile6_FWD_DEFINED__
#define __IBackgroundCopyFile6_FWD_DEFINED__
typedef interface IBackgroundCopyFile6 IBackgroundCopyFile6;
#endif /* __IBackgroundCopyFile6_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager10_1_FWD_DEFINED__
#define __BackgroundCopyManager10_1_FWD_DEFINED__
typedef struct BackgroundCopyManager10_1 BackgroundCopyManager10_1;
#endif /* __BackgroundCopyManager10_1_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
#include "bits5_0.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBackgroundCopyCallback3 interface
 */
#ifndef __IBackgroundCopyCallback3_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyCallback3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyCallback3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyCallback3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyCallback3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyCallback3 *This);

    /*** IBackgroundCopyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *JobTransferred)(
        IBackgroundCopyCallback3 *This,
        IBackgroundCopyJob *pJob);

    HRESULT (STDMETHODCALLTYPE *JobError)(
        IBackgroundCopyCallback3 *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyError *pError);

    HRESULT (STDMETHODCALLTYPE *JobModification)(
        IBackgroundCopyCallback3 *This,
        IBackgroundCopyJob *pJob,
        DWORD dwReserved);

    /*** IBackgroundCopyCallback2 methods ***/
    HRESULT (STDMETHODCALLTYPE *FileTransferred)(
        IBackgroundCopyCallback3 *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyFile *pFile);

    /*** IBackgroundCopyCallback3 methods ***/
    HRESULT (STDMETHODCALLTYPE *FileRangesTransferred)(
        IBackgroundCopyCallback3 *This,
        IBackgroundCopyJob *job,
        IBackgroundCopyFile *file,
        DWORD rangeCount,
        const BG_FILE_RANGE *ranges);

    END_INTERFACE
} IBackgroundCopyCallback3Vtbl;

interface IBackgroundCopyCallback3 {
    CONST_VTBL IBackgroundCopyCallback3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyCallback3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyCallback3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyCallback3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyCallback methods ***/
#define IBackgroundCopyCallback3_JobTransferred(This,pJob) \
    ((This)->lpVtbl->JobTransferred(This,pJob))
#define IBackgroundCopyCallback3_JobError(This,pJob,pError) \
    ((This)->lpVtbl->JobError(This,pJob,pError))
#define IBackgroundCopyCallback3_JobModification(This,pJob,dwReserved) \
    ((This)->lpVtbl->JobModification(This,pJob,dwReserved))
/*** IBackgroundCopyCallback2 methods ***/
#define IBackgroundCopyCallback3_FileTransferred(This,pJob,pFile) \
    ((This)->lpVtbl->FileTransferred(This,pJob,pFile))
/*** IBackgroundCopyCallback3 methods ***/
#define IBackgroundCopyCallback3_FileRangesTransferred(This,job,file,rangeCount,ranges) \
    ((This)->lpVtbl->FileRangesTransferred(This,job,file,rangeCount,ranges))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyCallback3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyFile6 interface
 */
#ifndef __IBackgroundCopyFile6_INTERFACE_DEFINED__
#define __IBackgroundCopyFile6_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyFile6;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyFile6Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyFile6 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyFile6 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyFile6 *This);

    /*** IBackgroundCopyFile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteName)(
        IBackgroundCopyFile6 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IBackgroundCopyFile6 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyFile6 *This,
        BG_FILE_PROGRESS *pVal);

    /*** IBackgroundCopyFile2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFileRanges)(
        IBackgroundCopyFile6 *This,
        DWORD *RangeCount,
        BG_FILE_RANGE **Ranges);

    HRESULT (STDMETHODCALLTYPE *SetRemoteName)(
        IBackgroundCopyFile6 *This,
        LPCWSTR Val);

    /*** IBackgroundCopyFile3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTemporaryName)(
        IBackgroundCopyFile6 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetValidationState)(
        IBackgroundCopyFile6 *This,
        BOOL state);

    HRESULT (STDMETHODCALLTYPE *GetValidationState)(
        IBackgroundCopyFile6 *This,
        BOOL *pState);

    HRESULT (STDMETHODCALLTYPE *IsDownloadedFromPeer)(
        IBackgroundCopyFile6 *This,
        BOOL *pVal);

    /*** IBackgroundCopyFile4 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPeerDownloadStats)(
        IBackgroundCopyFile6 *This,
        PUINT64 pFromOrigin,
        PUINT64 pFromPeers);

    /*** IBackgroundCopyFile5 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IBackgroundCopyFile6 *This,
        BITS_FILE_PROPERTY_ID PropertyId,
        BITS_FILE_PROPERTY_VALUE PropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IBackgroundCopyFile6 *This,
        BITS_FILE_PROPERTY_ID PropertyId,
        BITS_FILE_PROPERTY_VALUE *PropertyValue);

    /*** IBackgroundCopyFile6 methods ***/
    HRESULT (STDMETHODCALLTYPE *UpdateDownloadPosition)(
        IBackgroundCopyFile6 *This,
        UINT64 offset);

    HRESULT (STDMETHODCALLTYPE *RequestFileRanges)(
        IBackgroundCopyFile6 *This,
        DWORD rangeCount,
        const BG_FILE_RANGE *ranges);

    HRESULT (STDMETHODCALLTYPE *GetFilledFileRanges)(
        IBackgroundCopyFile6 *This,
        DWORD *rangeCount,
        BG_FILE_RANGE **ranges);

    END_INTERFACE
} IBackgroundCopyFile6Vtbl;

interface IBackgroundCopyFile6 {
    CONST_VTBL IBackgroundCopyFile6Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyFile6_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyFile6_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyFile6_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyFile methods ***/
#define IBackgroundCopyFile6_GetRemoteName(This,pVal) \
    ((This)->lpVtbl->GetRemoteName(This,pVal))
#define IBackgroundCopyFile6_GetLocalName(This,pVal) \
    ((This)->lpVtbl->GetLocalName(This,pVal))
#define IBackgroundCopyFile6_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
/*** IBackgroundCopyFile2 methods ***/
#define IBackgroundCopyFile6_GetFileRanges(This,RangeCount,Ranges) \
    ((This)->lpVtbl->GetFileRanges(This,RangeCount,Ranges))
#define IBackgroundCopyFile6_SetRemoteName(This,Val) \
    ((This)->lpVtbl->SetRemoteName(This,Val))
/*** IBackgroundCopyFile3 methods ***/
#define IBackgroundCopyFile6_GetTemporaryName(This,pFilename) \
    ((This)->lpVtbl->GetTemporaryName(This,pFilename))
#define IBackgroundCopyFile6_SetValidationState(This,state) \
    ((This)->lpVtbl->SetValidationState(This,state))
#define IBackgroundCopyFile6_GetValidationState(This,pState) \
    ((This)->lpVtbl->GetValidationState(This,pState))
#define IBackgroundCopyFile6_IsDownloadedFromPeer(This,pVal) \
    ((This)->lpVtbl->IsDownloadedFromPeer(This,pVal))
/*** IBackgroundCopyFile4 methods ***/
#define IBackgroundCopyFile6_GetPeerDownloadStats(This,pFromOrigin,pFromPeers) \
    ((This)->lpVtbl->GetPeerDownloadStats(This,pFromOrigin,pFromPeers))
/*** IBackgroundCopyFile5 methods ***/
#define IBackgroundCopyFile6_SetProperty(This,PropertyId,PropertyValue) \
    ((This)->lpVtbl->SetProperty(This,PropertyId,PropertyValue))
#define IBackgroundCopyFile6_GetProperty(This,PropertyId,PropertyValue) \
    ((This)->lpVtbl->GetProperty(This,PropertyId,PropertyValue))
/*** IBackgroundCopyFile6 methods ***/
#define IBackgroundCopyFile6_UpdateDownloadPosition(This,offset) \
    ((This)->lpVtbl->UpdateDownloadPosition(This,offset))
#define IBackgroundCopyFile6_RequestFileRanges(This,rangeCount,ranges) \
    ((This)->lpVtbl->RequestFileRanges(This,rangeCount,ranges))
#define IBackgroundCopyFile6_GetFilledFileRanges(This,rangeCount,ranges) \
    ((This)->lpVtbl->GetFilledFileRanges(This,rangeCount,ranges))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyFile6_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager10_1_LIBRARY_DEFINED__
#define __BackgroundCopyManager10_1_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager10_1 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager10_1;


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
#endif /* __BackgroundCopyManager10_1_LIBRARY_DEFINED__ */

#include "bits10_2.h"

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

#endif /* __bits10_1_h__ */
