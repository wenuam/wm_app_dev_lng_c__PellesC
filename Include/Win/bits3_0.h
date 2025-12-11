/* Generated from bits3_0.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits3_0_h__
#define __bits3_0_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBitsPeerCacheRecord_FWD_DEFINED__
#define __IBitsPeerCacheRecord_FWD_DEFINED__
typedef interface IBitsPeerCacheRecord IBitsPeerCacheRecord;
#endif /* __IBitsPeerCacheRecord_FWD_DEFINED__ */

#ifndef __IEnumBitsPeerCacheRecords_FWD_DEFINED__
#define __IEnumBitsPeerCacheRecords_FWD_DEFINED__
typedef interface IEnumBitsPeerCacheRecords IEnumBitsPeerCacheRecords;
#endif /* __IEnumBitsPeerCacheRecords_FWD_DEFINED__ */

#ifndef __IBitsPeer_FWD_DEFINED__
#define __IBitsPeer_FWD_DEFINED__
typedef interface IBitsPeer IBitsPeer;
#endif /* __IBitsPeer_FWD_DEFINED__ */

#ifndef __IEnumBitsPeers_FWD_DEFINED__
#define __IEnumBitsPeers_FWD_DEFINED__
typedef interface IEnumBitsPeers IEnumBitsPeers;
#endif /* __IEnumBitsPeers_FWD_DEFINED__ */

#ifndef __IBitsPeerCacheAdministration_FWD_DEFINED__
#define __IBitsPeerCacheAdministration_FWD_DEFINED__
typedef interface IBitsPeerCacheAdministration IBitsPeerCacheAdministration;
#endif /* __IBitsPeerCacheAdministration_FWD_DEFINED__ */

#ifndef __IBackgroundCopyJob4_FWD_DEFINED__
#define __IBackgroundCopyJob4_FWD_DEFINED__
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
#endif /* __IBackgroundCopyJob4_FWD_DEFINED__ */

#ifndef __IBackgroundCopyFile3_FWD_DEFINED__
#define __IBackgroundCopyFile3_FWD_DEFINED__
typedef interface IBackgroundCopyFile3 IBackgroundCopyFile3;
#endif /* __IBackgroundCopyFile3_FWD_DEFINED__ */

#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#endif /* __IBackgroundCopyCallback2_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager3_0_FWD_DEFINED__
#define __BackgroundCopyManager3_0_FWD_DEFINED__
typedef struct BackgroundCopyManager3_0 BackgroundCopyManager3_0;
#endif /* __BackgroundCopyManager3_0_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBitsPeerCacheRecord interface
 */
#ifndef __IBitsPeerCacheRecord_INTERFACE_DEFINED__
#define __IBitsPeerCacheRecord_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBitsPeerCacheRecord;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBitsPeerCacheRecordVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBitsPeerCacheRecord *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBitsPeerCacheRecord *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBitsPeerCacheRecord *This);

    /*** IBitsPeerCacheRecord methods ***/
    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBitsPeerCacheRecord *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetOriginUrl)(
        IBitsPeerCacheRecord *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetFileSize)(
        IBitsPeerCacheRecord *This,
        UINT64 *pVal);

    HRESULT (STDMETHODCALLTYPE *GetFileModificationTime)(
        IBitsPeerCacheRecord *This,
        FILETIME *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLastAccessTime)(
        IBitsPeerCacheRecord *This,
        FILETIME *pVal);

    HRESULT (STDMETHODCALLTYPE *IsFileValidated)(
        IBitsPeerCacheRecord *This);

    HRESULT (STDMETHODCALLTYPE *GetFileRanges)(
        IBitsPeerCacheRecord *This,
        DWORD *pRangeCount,
        BG_FILE_RANGE **ppRanges);

    END_INTERFACE
} IBitsPeerCacheRecordVtbl;

interface IBitsPeerCacheRecord {
    CONST_VTBL IBitsPeerCacheRecordVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBitsPeerCacheRecord_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBitsPeerCacheRecord_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBitsPeerCacheRecord_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBitsPeerCacheRecord methods ***/
#define IBitsPeerCacheRecord_GetId(This,pVal) \
    ((This)->lpVtbl->GetId(This,pVal))
#define IBitsPeerCacheRecord_GetOriginUrl(This,pVal) \
    ((This)->lpVtbl->GetOriginUrl(This,pVal))
#define IBitsPeerCacheRecord_GetFileSize(This,pVal) \
    ((This)->lpVtbl->GetFileSize(This,pVal))
#define IBitsPeerCacheRecord_GetFileModificationTime(This,pVal) \
    ((This)->lpVtbl->GetFileModificationTime(This,pVal))
#define IBitsPeerCacheRecord_GetLastAccessTime(This,pVal) \
    ((This)->lpVtbl->GetLastAccessTime(This,pVal))
#define IBitsPeerCacheRecord_IsFileValidated(This) \
    ((This)->lpVtbl->IsFileValidated(This))
#define IBitsPeerCacheRecord_GetFileRanges(This,pRangeCount,ppRanges) \
    ((This)->lpVtbl->GetFileRanges(This,pRangeCount,ppRanges))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBitsPeerCacheRecord_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumBitsPeerCacheRecords interface
 */
#ifndef __IEnumBitsPeerCacheRecords_INTERFACE_DEFINED__
#define __IEnumBitsPeerCacheRecords_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumBitsPeerCacheRecords;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumBitsPeerCacheRecordsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumBitsPeerCacheRecords *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumBitsPeerCacheRecords *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumBitsPeerCacheRecords *This);

    /*** IEnumBitsPeerCacheRecords methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumBitsPeerCacheRecords *This,
        ULONG celt,
        IBitsPeerCacheRecord **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumBitsPeerCacheRecords *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumBitsPeerCacheRecords *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumBitsPeerCacheRecords *This,
        IEnumBitsPeerCacheRecords **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumBitsPeerCacheRecords *This,
        ULONG *puCount);

    END_INTERFACE
} IEnumBitsPeerCacheRecordsVtbl;

interface IEnumBitsPeerCacheRecords {
    CONST_VTBL IEnumBitsPeerCacheRecordsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumBitsPeerCacheRecords_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumBitsPeerCacheRecords_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumBitsPeerCacheRecords_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumBitsPeerCacheRecords methods ***/
#define IEnumBitsPeerCacheRecords_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumBitsPeerCacheRecords_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumBitsPeerCacheRecords_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumBitsPeerCacheRecords_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#define IEnumBitsPeerCacheRecords_GetCount(This,puCount) \
    ((This)->lpVtbl->GetCount(This,puCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumBitsPeerCacheRecords_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBitsPeer interface
 */
#ifndef __IBitsPeer_INTERFACE_DEFINED__
#define __IBitsPeer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBitsPeer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBitsPeerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBitsPeer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBitsPeer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBitsPeer *This);

    /*** IBitsPeer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPeerName)(
        IBitsPeer *This,
        LPWSTR *pName);

    HRESULT (STDMETHODCALLTYPE *IsAuthenticated)(
        IBitsPeer *This,
        BOOL *pAuth);

    HRESULT (STDMETHODCALLTYPE *IsAvailable)(
        IBitsPeer *This,
        BOOL *pOnline);

    END_INTERFACE
} IBitsPeerVtbl;

interface IBitsPeer {
    CONST_VTBL IBitsPeerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBitsPeer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBitsPeer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBitsPeer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBitsPeer methods ***/
#define IBitsPeer_GetPeerName(This,pName) \
    ((This)->lpVtbl->GetPeerName(This,pName))
#define IBitsPeer_IsAuthenticated(This,pAuth) \
    ((This)->lpVtbl->IsAuthenticated(This,pAuth))
#define IBitsPeer_IsAvailable(This,pOnline) \
    ((This)->lpVtbl->IsAvailable(This,pOnline))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBitsPeer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumBitsPeers interface
 */
#ifndef __IEnumBitsPeers_INTERFACE_DEFINED__
#define __IEnumBitsPeers_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumBitsPeers;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumBitsPeersVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumBitsPeers *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumBitsPeers *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumBitsPeers *This);

    /*** IEnumBitsPeers methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumBitsPeers *This,
        ULONG celt,
        IBitsPeer **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumBitsPeers *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumBitsPeers *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumBitsPeers *This,
        IEnumBitsPeers **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumBitsPeers *This,
        ULONG *puCount);

    END_INTERFACE
} IEnumBitsPeersVtbl;

interface IEnumBitsPeers {
    CONST_VTBL IEnumBitsPeersVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumBitsPeers_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumBitsPeers_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumBitsPeers_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumBitsPeers methods ***/
#define IEnumBitsPeers_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumBitsPeers_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumBitsPeers_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumBitsPeers_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#define IEnumBitsPeers_GetCount(This,puCount) \
    ((This)->lpVtbl->GetCount(This,puCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumBitsPeers_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBitsPeerCacheAdministration interface
 */
#ifndef __IBitsPeerCacheAdministration_INTERFACE_DEFINED__
#define __IBitsPeerCacheAdministration_INTERFACE_DEFINED__

#define   BG_ENABLE_PEERCACHING_CLIENT   0x0001
#define   BG_ENABLE_PEERCACHING_SERVER   0x0002
#define   BG_DISABLE_BRANCH_CACHE        0x0004

EXTERN_C const IID IID_IBitsPeerCacheAdministration;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBitsPeerCacheAdministrationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBitsPeerCacheAdministration *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBitsPeerCacheAdministration *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBitsPeerCacheAdministration *This);

    /*** IBitsPeerCacheAdministration methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMaximumCacheSize)(
        IBitsPeerCacheAdministration *This,
        DWORD *pBytes);

    HRESULT (STDMETHODCALLTYPE *SetMaximumCacheSize)(
        IBitsPeerCacheAdministration *This,
        DWORD Bytes);

    HRESULT (STDMETHODCALLTYPE *GetMaximumContentAge)(
        IBitsPeerCacheAdministration *This,
        ULONG *pSeconds);

    HRESULT (STDMETHODCALLTYPE *SetMaximumContentAge)(
        IBitsPeerCacheAdministration *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetConfigurationFlags)(
        IBitsPeerCacheAdministration *This,
        DWORD *pFlags);

    HRESULT (STDMETHODCALLTYPE *SetConfigurationFlags)(
        IBitsPeerCacheAdministration *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *EnumRecords)(
        IBitsPeerCacheAdministration *This,
        IEnumBitsPeerCacheRecords **ppEnum);

    HRESULT (STDMETHODCALLTYPE *GetRecord)(
        IBitsPeerCacheAdministration *This,
        REFGUID id,
        IBitsPeerCacheRecord **ppRecord);

    HRESULT (STDMETHODCALLTYPE *ClearRecords)(
        IBitsPeerCacheAdministration *This);

    HRESULT (STDMETHODCALLTYPE *DeleteRecord)(
        IBitsPeerCacheAdministration *This,
        REFGUID id);

    HRESULT (STDMETHODCALLTYPE *DeleteUrl)(
        IBitsPeerCacheAdministration *This,
        LPCWSTR url);

    HRESULT (STDMETHODCALLTYPE *EnumPeers)(
        IBitsPeerCacheAdministration *This,
        IEnumBitsPeers **ppEnum);

    HRESULT (STDMETHODCALLTYPE *ClearPeers)(
        IBitsPeerCacheAdministration *This);

    HRESULT (STDMETHODCALLTYPE *DiscoverPeers)(
        IBitsPeerCacheAdministration *This);

    END_INTERFACE
} IBitsPeerCacheAdministrationVtbl;

interface IBitsPeerCacheAdministration {
    CONST_VTBL IBitsPeerCacheAdministrationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBitsPeerCacheAdministration_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBitsPeerCacheAdministration_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBitsPeerCacheAdministration_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBitsPeerCacheAdministration methods ***/
#define IBitsPeerCacheAdministration_GetMaximumCacheSize(This,pBytes) \
    ((This)->lpVtbl->GetMaximumCacheSize(This,pBytes))
#define IBitsPeerCacheAdministration_SetMaximumCacheSize(This,Bytes) \
    ((This)->lpVtbl->SetMaximumCacheSize(This,Bytes))
#define IBitsPeerCacheAdministration_GetMaximumContentAge(This,pSeconds) \
    ((This)->lpVtbl->GetMaximumContentAge(This,pSeconds))
#define IBitsPeerCacheAdministration_SetMaximumContentAge(This,Seconds) \
    ((This)->lpVtbl->SetMaximumContentAge(This,Seconds))
#define IBitsPeerCacheAdministration_GetConfigurationFlags(This,pFlags) \
    ((This)->lpVtbl->GetConfigurationFlags(This,pFlags))
#define IBitsPeerCacheAdministration_SetConfigurationFlags(This,Flags) \
    ((This)->lpVtbl->SetConfigurationFlags(This,Flags))
#define IBitsPeerCacheAdministration_EnumRecords(This,ppEnum) \
    ((This)->lpVtbl->EnumRecords(This,ppEnum))
#define IBitsPeerCacheAdministration_GetRecord(This,id,ppRecord) \
    ((This)->lpVtbl->GetRecord(This,id,ppRecord))
#define IBitsPeerCacheAdministration_ClearRecords(This) \
    ((This)->lpVtbl->ClearRecords(This))
#define IBitsPeerCacheAdministration_DeleteRecord(This,id) \
    ((This)->lpVtbl->DeleteRecord(This,id))
#define IBitsPeerCacheAdministration_DeleteUrl(This,url) \
    ((This)->lpVtbl->DeleteUrl(This,url))
#define IBitsPeerCacheAdministration_EnumPeers(This,ppEnum) \
    ((This)->lpVtbl->EnumPeers(This,ppEnum))
#define IBitsPeerCacheAdministration_ClearPeers(This) \
    ((This)->lpVtbl->ClearPeers(This))
#define IBitsPeerCacheAdministration_DiscoverPeers(This) \
    ((This)->lpVtbl->DiscoverPeers(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBitsPeerCacheAdministration_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyJob4 interface
 */
#ifndef __IBackgroundCopyJob4_INTERFACE_DEFINED__
#define __IBackgroundCopyJob4_INTERFACE_DEFINED__

#define   BG_JOB_ENABLE_PEERCACHING_CLIENT   0x0001
#define   BG_JOB_ENABLE_PEERCACHING_SERVER   0x0002
#define   BG_JOB_DISABLE_BRANCH_CACHE        0x0004

EXTERN_C const IID IID_IBackgroundCopyJob4;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJob4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob4 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob4 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob4 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob4 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob4 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob4 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob4 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob4 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob4 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob4 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob4 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob4 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob4 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob4 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob4 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob4 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob4 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob4 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob4 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob4 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob4 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob4 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob4 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob4 *This,
        LPCWSTR Program,
        LPCWSTR Parameters);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pProgram,
        LPWSTR *pParameters);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob4 *This,
        BG_JOB_REPLY_PROGRESS *pProgress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob4 *This,
        byte **ppBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob4 *This,
        LPCWSTR ReplyFileName);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob4 *This,
        LPWSTR *pReplyFileName);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob4 *This,
        BG_AUTH_CREDENTIALS *credentials);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob4 *This,
        BG_AUTH_TARGET Target,
        BG_AUTH_SCHEME Scheme);

    /*** IBackgroundCopyJob3 methods ***/
    HRESULT (STDMETHODCALLTYPE *ReplaceRemotePrefix)(
        IBackgroundCopyJob4 *This,
        LPCWSTR OldPrefix,
        LPCWSTR NewPrefix);

    HRESULT (STDMETHODCALLTYPE *AddFileWithRanges)(
        IBackgroundCopyJob4 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName,
        DWORD RangeCount,
        BG_FILE_RANGE *Ranges);

    HRESULT (STDMETHODCALLTYPE *SetFileACLFlags)(
        IBackgroundCopyJob4 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetFileACLFlags)(
        IBackgroundCopyJob4 *This,
        DWORD *Flags);

    /*** IBackgroundCopyJob4 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPeerCachingFlags)(
        IBackgroundCopyJob4 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetPeerCachingFlags)(
        IBackgroundCopyJob4 *This,
        DWORD *pFlags);

    HRESULT (STDMETHODCALLTYPE *GetOwnerIntegrityLevel)(
        IBackgroundCopyJob4 *This,
        ULONG *pLevel);

    HRESULT (STDMETHODCALLTYPE *GetOwnerElevationState)(
        IBackgroundCopyJob4 *This,
        BOOL *pElevated);

    HRESULT (STDMETHODCALLTYPE *SetMaximumDownloadTime)(
        IBackgroundCopyJob4 *This,
        ULONG Timeout);

    HRESULT (STDMETHODCALLTYPE *GetMaximumDownloadTime)(
        IBackgroundCopyJob4 *This,
        ULONG *pTimeout);

    END_INTERFACE
} IBackgroundCopyJob4Vtbl;

interface IBackgroundCopyJob4 {
    CONST_VTBL IBackgroundCopyJob4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJob4_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJob4_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJob4_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob4_AddFileSet(This,cFileCount,pFileSet) \
    ((This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet))
#define IBackgroundCopyJob4_AddFile(This,RemoteUrl,LocalName) \
    ((This)->lpVtbl->AddFile(This,RemoteUrl,LocalName))
#define IBackgroundCopyJob4_EnumFiles(This,pEnum) \
    ((This)->lpVtbl->EnumFiles(This,pEnum))
#define IBackgroundCopyJob4_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IBackgroundCopyJob4_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IBackgroundCopyJob4_Cancel(This) \
    ((This)->lpVtbl->Cancel(This))
#define IBackgroundCopyJob4_Complete(This) \
    ((This)->lpVtbl->Complete(This))
#define IBackgroundCopyJob4_GetId(This,pVal) \
    ((This)->lpVtbl->GetId(This,pVal))
#define IBackgroundCopyJob4_GetType(This,pVal) \
    ((This)->lpVtbl->GetType(This,pVal))
#define IBackgroundCopyJob4_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
#define IBackgroundCopyJob4_GetTimes(This,pVal) \
    ((This)->lpVtbl->GetTimes(This,pVal))
#define IBackgroundCopyJob4_GetState(This,pVal) \
    ((This)->lpVtbl->GetState(This,pVal))
#define IBackgroundCopyJob4_GetError(This,ppError) \
    ((This)->lpVtbl->GetError(This,ppError))
#define IBackgroundCopyJob4_GetOwner(This,pVal) \
    ((This)->lpVtbl->GetOwner(This,pVal))
#define IBackgroundCopyJob4_SetDisplayName(This,Val) \
    ((This)->lpVtbl->SetDisplayName(This,Val))
#define IBackgroundCopyJob4_GetDisplayName(This,pVal) \
    ((This)->lpVtbl->GetDisplayName(This,pVal))
#define IBackgroundCopyJob4_SetDescription(This,Val) \
    ((This)->lpVtbl->SetDescription(This,Val))
#define IBackgroundCopyJob4_GetDescription(This,pVal) \
    ((This)->lpVtbl->GetDescription(This,pVal))
#define IBackgroundCopyJob4_SetPriority(This,Val) \
    ((This)->lpVtbl->SetPriority(This,Val))
#define IBackgroundCopyJob4_GetPriority(This,pVal) \
    ((This)->lpVtbl->GetPriority(This,pVal))
#define IBackgroundCopyJob4_SetNotifyFlags(This,Val) \
    ((This)->lpVtbl->SetNotifyFlags(This,Val))
#define IBackgroundCopyJob4_GetNotifyFlags(This,pVal) \
    ((This)->lpVtbl->GetNotifyFlags(This,pVal))
#define IBackgroundCopyJob4_SetNotifyInterface(This,Val) \
    ((This)->lpVtbl->SetNotifyInterface(This,Val))
#define IBackgroundCopyJob4_GetNotifyInterface(This,pVal) \
    ((This)->lpVtbl->GetNotifyInterface(This,pVal))
#define IBackgroundCopyJob4_SetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->SetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob4_GetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->GetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob4_SetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->SetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob4_GetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->GetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob4_GetErrorCount(This,Errors) \
    ((This)->lpVtbl->GetErrorCount(This,Errors))
#define IBackgroundCopyJob4_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) \
    ((This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList))
#define IBackgroundCopyJob4_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) \
    ((This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList))
#define IBackgroundCopyJob4_TakeOwnership(This) \
    ((This)->lpVtbl->TakeOwnership(This))
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob4_SetNotifyCmdLine(This,Program,Parameters) \
    ((This)->lpVtbl->SetNotifyCmdLine(This,Program,Parameters))
#define IBackgroundCopyJob4_GetNotifyCmdLine(This,pProgram,pParameters) \
    ((This)->lpVtbl->GetNotifyCmdLine(This,pProgram,pParameters))
#define IBackgroundCopyJob4_GetReplyProgress(This,pProgress) \
    ((This)->lpVtbl->GetReplyProgress(This,pProgress))
#define IBackgroundCopyJob4_GetReplyData(This,ppBuffer,pLength) \
    ((This)->lpVtbl->GetReplyData(This,ppBuffer,pLength))
#define IBackgroundCopyJob4_SetReplyFileName(This,ReplyFileName) \
    ((This)->lpVtbl->SetReplyFileName(This,ReplyFileName))
#define IBackgroundCopyJob4_GetReplyFileName(This,pReplyFileName) \
    ((This)->lpVtbl->GetReplyFileName(This,pReplyFileName))
#define IBackgroundCopyJob4_SetCredentials(This,credentials) \
    ((This)->lpVtbl->SetCredentials(This,credentials))
#define IBackgroundCopyJob4_RemoveCredentials(This,Target,Scheme) \
    ((This)->lpVtbl->RemoveCredentials(This,Target,Scheme))
/*** IBackgroundCopyJob3 methods ***/
#define IBackgroundCopyJob4_ReplaceRemotePrefix(This,OldPrefix,NewPrefix) \
    ((This)->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix))
#define IBackgroundCopyJob4_AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) \
    ((This)->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges))
#define IBackgroundCopyJob4_SetFileACLFlags(This,Flags) \
    ((This)->lpVtbl->SetFileACLFlags(This,Flags))
#define IBackgroundCopyJob4_GetFileACLFlags(This,Flags) \
    ((This)->lpVtbl->GetFileACLFlags(This,Flags))
/*** IBackgroundCopyJob4 methods ***/
#define IBackgroundCopyJob4_SetPeerCachingFlags(This,Flags) \
    ((This)->lpVtbl->SetPeerCachingFlags(This,Flags))
#define IBackgroundCopyJob4_GetPeerCachingFlags(This,pFlags) \
    ((This)->lpVtbl->GetPeerCachingFlags(This,pFlags))
#define IBackgroundCopyJob4_GetOwnerIntegrityLevel(This,pLevel) \
    ((This)->lpVtbl->GetOwnerIntegrityLevel(This,pLevel))
#define IBackgroundCopyJob4_GetOwnerElevationState(This,pElevated) \
    ((This)->lpVtbl->GetOwnerElevationState(This,pElevated))
#define IBackgroundCopyJob4_SetMaximumDownloadTime(This,Timeout) \
    ((This)->lpVtbl->SetMaximumDownloadTime(This,Timeout))
#define IBackgroundCopyJob4_GetMaximumDownloadTime(This,pTimeout) \
    ((This)->lpVtbl->GetMaximumDownloadTime(This,pTimeout))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJob4_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyFile3 interface
 */
#ifndef __IBackgroundCopyFile3_INTERFACE_DEFINED__
#define __IBackgroundCopyFile3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyFile3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyFile3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyFile3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyFile3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyFile3 *This);

    /*** IBackgroundCopyFile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteName)(
        IBackgroundCopyFile3 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IBackgroundCopyFile3 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyFile3 *This,
        BG_FILE_PROGRESS *pVal);

    /*** IBackgroundCopyFile2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFileRanges)(
        IBackgroundCopyFile3 *This,
        DWORD *RangeCount,
        BG_FILE_RANGE **Ranges);

    HRESULT (STDMETHODCALLTYPE *SetRemoteName)(
        IBackgroundCopyFile3 *This,
        LPCWSTR Val);

    /*** IBackgroundCopyFile3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTemporaryName)(
        IBackgroundCopyFile3 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetValidationState)(
        IBackgroundCopyFile3 *This,
        BOOL state);

    HRESULT (STDMETHODCALLTYPE *GetValidationState)(
        IBackgroundCopyFile3 *This,
        BOOL *pState);

    HRESULT (STDMETHODCALLTYPE *IsDownloadedFromPeer)(
        IBackgroundCopyFile3 *This,
        BOOL *pVal);

    END_INTERFACE
} IBackgroundCopyFile3Vtbl;

interface IBackgroundCopyFile3 {
    CONST_VTBL IBackgroundCopyFile3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyFile3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyFile3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyFile3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyFile methods ***/
#define IBackgroundCopyFile3_GetRemoteName(This,pVal) \
    ((This)->lpVtbl->GetRemoteName(This,pVal))
#define IBackgroundCopyFile3_GetLocalName(This,pVal) \
    ((This)->lpVtbl->GetLocalName(This,pVal))
#define IBackgroundCopyFile3_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
/*** IBackgroundCopyFile2 methods ***/
#define IBackgroundCopyFile3_GetFileRanges(This,RangeCount,Ranges) \
    ((This)->lpVtbl->GetFileRanges(This,RangeCount,Ranges))
#define IBackgroundCopyFile3_SetRemoteName(This,Val) \
    ((This)->lpVtbl->SetRemoteName(This,Val))
/*** IBackgroundCopyFile3 methods ***/
#define IBackgroundCopyFile3_GetTemporaryName(This,pFilename) \
    ((This)->lpVtbl->GetTemporaryName(This,pFilename))
#define IBackgroundCopyFile3_SetValidationState(This,state) \
    ((This)->lpVtbl->SetValidationState(This,state))
#define IBackgroundCopyFile3_GetValidationState(This,pState) \
    ((This)->lpVtbl->GetValidationState(This,pState))
#define IBackgroundCopyFile3_IsDownloadedFromPeer(This,pVal) \
    ((This)->lpVtbl->IsDownloadedFromPeer(This,pVal))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyFile3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyCallback2 interface
 */
#ifndef __IBackgroundCopyCallback2_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyCallback2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyCallback2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyCallback2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyCallback2 *This);

    /*** IBackgroundCopyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *JobTransferred)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob);

    HRESULT (STDMETHODCALLTYPE *JobError)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyError *pError);

    HRESULT (STDMETHODCALLTYPE *JobModification)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        DWORD dwReserved);

    /*** IBackgroundCopyCallback2 methods ***/
    HRESULT (STDMETHODCALLTYPE *FileTransferred)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyFile *pFile);

    END_INTERFACE
} IBackgroundCopyCallback2Vtbl;

interface IBackgroundCopyCallback2 {
    CONST_VTBL IBackgroundCopyCallback2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyCallback2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyCallback2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyCallback2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyCallback methods ***/
#define IBackgroundCopyCallback2_JobTransferred(This,pJob) \
    ((This)->lpVtbl->JobTransferred(This,pJob))
#define IBackgroundCopyCallback2_JobError(This,pJob,pError) \
    ((This)->lpVtbl->JobError(This,pJob,pError))
#define IBackgroundCopyCallback2_JobModification(This,pJob,dwReserved) \
    ((This)->lpVtbl->JobModification(This,pJob,dwReserved))
/*** IBackgroundCopyCallback2 methods ***/
#define IBackgroundCopyCallback2_FileTransferred(This,pJob,pFile) \
    ((This)->lpVtbl->FileTransferred(This,pJob,pFile))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyCallback2_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager3_0_LIBRARY_DEFINED__
#define __BackgroundCopyManager3_0_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager3_0 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager3_0;


#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#endif /* __IBackgroundCopyCallback2_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile3_FWD_DEFINED__
#define __IBackgroundCopyFile3_FWD_DEFINED__
typedef interface IBackgroundCopyFile3 IBackgroundCopyFile3;
#endif /* __IBackgroundCopyFile3_FWD_DEFINED__ */


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


#ifndef __IEnumBitsPeerCacheRecords_FWD_DEFINED__
#define __IEnumBitsPeerCacheRecords_FWD_DEFINED__
typedef interface IEnumBitsPeerCacheRecords IEnumBitsPeerCacheRecords;
#endif /* __IEnumBitsPeerCacheRecords_FWD_DEFINED__ */


#ifndef __IEnumBitsPeers_FWD_DEFINED__
#define __IEnumBitsPeers_FWD_DEFINED__
typedef interface IEnumBitsPeers IEnumBitsPeers;
#endif /* __IEnumBitsPeers_FWD_DEFINED__ */
#endif /* __BackgroundCopyManager3_0_LIBRARY_DEFINED__ */

#include "bits4_0.h"

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

#endif /* __bits3_0_h__ */
