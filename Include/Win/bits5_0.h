/* Generated from bits5_0.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits5_0_h__
#define __bits5_0_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJob5_FWD_DEFINED__
#define __IBackgroundCopyJob5_FWD_DEFINED__
typedef interface IBackgroundCopyJob5 IBackgroundCopyJob5;
#endif /* __IBackgroundCopyJob5_FWD_DEFINED__ */

#ifndef __IBackgroundCopyFile5_FWD_DEFINED__
#define __IBackgroundCopyFile5_FWD_DEFINED__
typedef interface IBackgroundCopyFile5 IBackgroundCopyFile5;
#endif /* __IBackgroundCopyFile5_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager5_0_FWD_DEFINED__
#define __BackgroundCopyManager5_0_FWD_DEFINED__
typedef struct BackgroundCopyManager5_0 BackgroundCopyManager5_0;
#endif /* __BackgroundCopyManager5_0_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define BITS_COST_STATE_UNRESTRICTED          0x1
#define BITS_COST_STATE_CAPPED_USAGE_UNKNOWN  0x2
#define BITS_COST_STATE_BELOW_CAP             0x4
#define BITS_COST_STATE_NEAR_CAP              0x8
#define BITS_COST_STATE_OVERCAP_CHARGED       0x10
#define BITS_COST_STATE_OVERCAP_THROTTLED     0x20
#define BITS_COST_STATE_USAGE_BASED           0x40
#define BITS_COST_STATE_ROAMING               0x80
#define BITS_COST_OPTION_IGNORE_CONGESTION    0x80000000

#define BITS_COST_STATE_RESERVED              0x40000000

#define BITS_COST_STATE_TRANSFER_NOT_ROAMING  (BITS_COST_OPTION_IGNORE_CONGESTION|BITS_COST_STATE_USAGE_BASED|BITS_COST_STATE_OVERCAP_THROTTLED|BITS_COST_STATE_OVERCAP_CHARGED|BITS_COST_STATE_NEAR_CAP|BITS_COST_STATE_BELOW_CAP|BITS_COST_STATE_CAPPED_USAGE_UNKNOWN|BITS_COST_STATE_UNRESTRICTED)
#define BITS_COST_STATE_TRANSFER_NO_SURCHARGE (BITS_COST_OPTION_IGNORE_CONGESTION|BITS_COST_STATE_USAGE_BASED|BITS_COST_STATE_OVERCAP_THROTTLED|BITS_COST_STATE_NEAR_CAP|BITS_COST_STATE_BELOW_CAP|BITS_COST_STATE_CAPPED_USAGE_UNKNOWN|BITS_COST_STATE_UNRESTRICTED)
#define BITS_COST_STATE_TRANSFER_STANDARD     (BITS_COST_OPTION_IGNORE_CONGESTION|BITS_COST_STATE_USAGE_BASED|BITS_COST_STATE_OVERCAP_THROTTLED|BITS_COST_STATE_BELOW_CAP|BITS_COST_STATE_CAPPED_USAGE_UNKNOWN|BITS_COST_STATE_UNRESTRICTED)
#define BITS_COST_STATE_TRANSFER_UNRESTRICTED (BITS_COST_OPTION_IGNORE_CONGESTION|BITS_COST_STATE_OVERCAP_THROTTLED|BITS_COST_STATE_UNRESTRICTED)
#define BITS_COST_STATE_TRANSFER_ALWAYS       (BITS_COST_OPTION_IGNORE_CONGESTION|BITS_COST_STATE_ROAMING|BITS_COST_STATE_USAGE_BASED|BITS_COST_STATE_OVERCAP_THROTTLED|BITS_COST_STATE_OVERCAP_CHARGED|BITS_COST_STATE_NEAR_CAP|BITS_COST_STATE_BELOW_CAP|BITS_COST_STATE_CAPPED_USAGE_UNKNOWN|BITS_COST_STATE_UNRESTRICTED)

typedef enum BITS_JOB_TRANSFER_POLICY {
    BITS_JOB_TRANSFER_POLICY_ALWAYS = 0x800000ff,
    BITS_JOB_TRANSFER_POLICY_NOT_ROAMING = 0x8000007f,
    BITS_JOB_TRANSFER_POLICY_NO_SURCHARGE = 0x8000006f,
    BITS_JOB_TRANSFER_POLICY_STANDARD = 0x80000067,
    BITS_JOB_TRANSFER_POLICY_UNRESTRICTED = 0x80000021
} BITS_JOB_TRANSFER_POLICY;

typedef enum BITS_JOB_PROPERTY_ID {
    BITS_JOB_PROPERTY_ID_COST_FLAGS = 1,
    BITS_JOB_PROPERTY_NOTIFICATION_CLSID = 2,
    BITS_JOB_PROPERTY_DYNAMIC_CONTENT = 3,
    BITS_JOB_PROPERTY_HIGH_PERFORMANCE = 4,
    BITS_JOB_PROPERTY_MAX_DOWNLOAD_SIZE = 5,
    BITS_JOB_PROPERTY_USE_STORED_CREDENTIALS = 7,
    BITS_JOB_PROPERTY_MINIMUM_NOTIFICATION_INTERVAL_MS = 9,
    BITS_JOB_PROPERTY_ON_DEMAND_MODE = 10
} BITS_JOB_PROPERTY_ID;

typedef union __POIDL_bits5_0_tag_00000005 {
    DWORD Dword;
    GUID ClsID;
    BOOL Enable;
    UINT64 Uint64;
    BG_AUTH_TARGET Target;
} BITS_JOB_PROPERTY_VALUE;

typedef enum BITS_FILE_PROPERTY_ID {
    BITS_FILE_PROPERTY_ID_HTTP_RESPONSE_HEADERS = 1
} BITS_FILE_PROPERTY_ID;

typedef union __POIDL_bits5_0_tag_00000006 {
    LPWSTR String;
} BITS_FILE_PROPERTY_VALUE;

/*****************************************************************************
 * IBackgroundCopyJob5 interface
 */
#ifndef __IBackgroundCopyJob5_INTERFACE_DEFINED__
#define __IBackgroundCopyJob5_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyJob5;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJob5Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob5 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob5 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob5 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob5 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob5 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob5 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob5 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob5 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob5 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob5 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob5 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob5 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob5 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob5 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob5 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob5 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob5 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob5 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob5 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob5 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob5 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob5 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob5 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob5 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob5 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob5 *This,
        LPCWSTR Program,
        LPCWSTR Parameters);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pProgram,
        LPWSTR *pParameters);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob5 *This,
        BG_JOB_REPLY_PROGRESS *pProgress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob5 *This,
        byte **ppBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob5 *This,
        LPCWSTR ReplyFileName);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob5 *This,
        LPWSTR *pReplyFileName);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob5 *This,
        BG_AUTH_CREDENTIALS *credentials);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob5 *This,
        BG_AUTH_TARGET Target,
        BG_AUTH_SCHEME Scheme);

    /*** IBackgroundCopyJob3 methods ***/
    HRESULT (STDMETHODCALLTYPE *ReplaceRemotePrefix)(
        IBackgroundCopyJob5 *This,
        LPCWSTR OldPrefix,
        LPCWSTR NewPrefix);

    HRESULT (STDMETHODCALLTYPE *AddFileWithRanges)(
        IBackgroundCopyJob5 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName,
        DWORD RangeCount,
        BG_FILE_RANGE *Ranges);

    HRESULT (STDMETHODCALLTYPE *SetFileACLFlags)(
        IBackgroundCopyJob5 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetFileACLFlags)(
        IBackgroundCopyJob5 *This,
        DWORD *Flags);

    /*** IBackgroundCopyJob4 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPeerCachingFlags)(
        IBackgroundCopyJob5 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetPeerCachingFlags)(
        IBackgroundCopyJob5 *This,
        DWORD *pFlags);

    HRESULT (STDMETHODCALLTYPE *GetOwnerIntegrityLevel)(
        IBackgroundCopyJob5 *This,
        ULONG *pLevel);

    HRESULT (STDMETHODCALLTYPE *GetOwnerElevationState)(
        IBackgroundCopyJob5 *This,
        BOOL *pElevated);

    HRESULT (STDMETHODCALLTYPE *SetMaximumDownloadTime)(
        IBackgroundCopyJob5 *This,
        ULONG Timeout);

    HRESULT (STDMETHODCALLTYPE *GetMaximumDownloadTime)(
        IBackgroundCopyJob5 *This,
        ULONG *pTimeout);

    /*** IBackgroundCopyJob5 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IBackgroundCopyJob5 *This,
        BITS_JOB_PROPERTY_ID PropertyId,
        BITS_JOB_PROPERTY_VALUE PropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IBackgroundCopyJob5 *This,
        BITS_JOB_PROPERTY_ID PropertyId,
        BITS_JOB_PROPERTY_VALUE *PropertyValue);

    END_INTERFACE
} IBackgroundCopyJob5Vtbl;

interface IBackgroundCopyJob5 {
    CONST_VTBL IBackgroundCopyJob5Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJob5_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJob5_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJob5_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob5_AddFileSet(This,cFileCount,pFileSet) \
    ((This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet))
#define IBackgroundCopyJob5_AddFile(This,RemoteUrl,LocalName) \
    ((This)->lpVtbl->AddFile(This,RemoteUrl,LocalName))
#define IBackgroundCopyJob5_EnumFiles(This,pEnum) \
    ((This)->lpVtbl->EnumFiles(This,pEnum))
#define IBackgroundCopyJob5_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IBackgroundCopyJob5_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IBackgroundCopyJob5_Cancel(This) \
    ((This)->lpVtbl->Cancel(This))
#define IBackgroundCopyJob5_Complete(This) \
    ((This)->lpVtbl->Complete(This))
#define IBackgroundCopyJob5_GetId(This,pVal) \
    ((This)->lpVtbl->GetId(This,pVal))
#define IBackgroundCopyJob5_GetType(This,pVal) \
    ((This)->lpVtbl->GetType(This,pVal))
#define IBackgroundCopyJob5_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
#define IBackgroundCopyJob5_GetTimes(This,pVal) \
    ((This)->lpVtbl->GetTimes(This,pVal))
#define IBackgroundCopyJob5_GetState(This,pVal) \
    ((This)->lpVtbl->GetState(This,pVal))
#define IBackgroundCopyJob5_GetError(This,ppError) \
    ((This)->lpVtbl->GetError(This,ppError))
#define IBackgroundCopyJob5_GetOwner(This,pVal) \
    ((This)->lpVtbl->GetOwner(This,pVal))
#define IBackgroundCopyJob5_SetDisplayName(This,Val) \
    ((This)->lpVtbl->SetDisplayName(This,Val))
#define IBackgroundCopyJob5_GetDisplayName(This,pVal) \
    ((This)->lpVtbl->GetDisplayName(This,pVal))
#define IBackgroundCopyJob5_SetDescription(This,Val) \
    ((This)->lpVtbl->SetDescription(This,Val))
#define IBackgroundCopyJob5_GetDescription(This,pVal) \
    ((This)->lpVtbl->GetDescription(This,pVal))
#define IBackgroundCopyJob5_SetPriority(This,Val) \
    ((This)->lpVtbl->SetPriority(This,Val))
#define IBackgroundCopyJob5_GetPriority(This,pVal) \
    ((This)->lpVtbl->GetPriority(This,pVal))
#define IBackgroundCopyJob5_SetNotifyFlags(This,Val) \
    ((This)->lpVtbl->SetNotifyFlags(This,Val))
#define IBackgroundCopyJob5_GetNotifyFlags(This,pVal) \
    ((This)->lpVtbl->GetNotifyFlags(This,pVal))
#define IBackgroundCopyJob5_SetNotifyInterface(This,Val) \
    ((This)->lpVtbl->SetNotifyInterface(This,Val))
#define IBackgroundCopyJob5_GetNotifyInterface(This,pVal) \
    ((This)->lpVtbl->GetNotifyInterface(This,pVal))
#define IBackgroundCopyJob5_SetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->SetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob5_GetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->GetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob5_SetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->SetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob5_GetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->GetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob5_GetErrorCount(This,Errors) \
    ((This)->lpVtbl->GetErrorCount(This,Errors))
#define IBackgroundCopyJob5_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) \
    ((This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList))
#define IBackgroundCopyJob5_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) \
    ((This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList))
#define IBackgroundCopyJob5_TakeOwnership(This) \
    ((This)->lpVtbl->TakeOwnership(This))
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob5_SetNotifyCmdLine(This,Program,Parameters) \
    ((This)->lpVtbl->SetNotifyCmdLine(This,Program,Parameters))
#define IBackgroundCopyJob5_GetNotifyCmdLine(This,pProgram,pParameters) \
    ((This)->lpVtbl->GetNotifyCmdLine(This,pProgram,pParameters))
#define IBackgroundCopyJob5_GetReplyProgress(This,pProgress) \
    ((This)->lpVtbl->GetReplyProgress(This,pProgress))
#define IBackgroundCopyJob5_GetReplyData(This,ppBuffer,pLength) \
    ((This)->lpVtbl->GetReplyData(This,ppBuffer,pLength))
#define IBackgroundCopyJob5_SetReplyFileName(This,ReplyFileName) \
    ((This)->lpVtbl->SetReplyFileName(This,ReplyFileName))
#define IBackgroundCopyJob5_GetReplyFileName(This,pReplyFileName) \
    ((This)->lpVtbl->GetReplyFileName(This,pReplyFileName))
#define IBackgroundCopyJob5_SetCredentials(This,credentials) \
    ((This)->lpVtbl->SetCredentials(This,credentials))
#define IBackgroundCopyJob5_RemoveCredentials(This,Target,Scheme) \
    ((This)->lpVtbl->RemoveCredentials(This,Target,Scheme))
/*** IBackgroundCopyJob3 methods ***/
#define IBackgroundCopyJob5_ReplaceRemotePrefix(This,OldPrefix,NewPrefix) \
    ((This)->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix))
#define IBackgroundCopyJob5_AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) \
    ((This)->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges))
#define IBackgroundCopyJob5_SetFileACLFlags(This,Flags) \
    ((This)->lpVtbl->SetFileACLFlags(This,Flags))
#define IBackgroundCopyJob5_GetFileACLFlags(This,Flags) \
    ((This)->lpVtbl->GetFileACLFlags(This,Flags))
/*** IBackgroundCopyJob4 methods ***/
#define IBackgroundCopyJob5_SetPeerCachingFlags(This,Flags) \
    ((This)->lpVtbl->SetPeerCachingFlags(This,Flags))
#define IBackgroundCopyJob5_GetPeerCachingFlags(This,pFlags) \
    ((This)->lpVtbl->GetPeerCachingFlags(This,pFlags))
#define IBackgroundCopyJob5_GetOwnerIntegrityLevel(This,pLevel) \
    ((This)->lpVtbl->GetOwnerIntegrityLevel(This,pLevel))
#define IBackgroundCopyJob5_GetOwnerElevationState(This,pElevated) \
    ((This)->lpVtbl->GetOwnerElevationState(This,pElevated))
#define IBackgroundCopyJob5_SetMaximumDownloadTime(This,Timeout) \
    ((This)->lpVtbl->SetMaximumDownloadTime(This,Timeout))
#define IBackgroundCopyJob5_GetMaximumDownloadTime(This,pTimeout) \
    ((This)->lpVtbl->GetMaximumDownloadTime(This,pTimeout))
/*** IBackgroundCopyJob5 methods ***/
#define IBackgroundCopyJob5_SetProperty(This,PropertyId,PropertyValue) \
    ((This)->lpVtbl->SetProperty(This,PropertyId,PropertyValue))
#define IBackgroundCopyJob5_GetProperty(This,PropertyId,PropertyValue) \
    ((This)->lpVtbl->GetProperty(This,PropertyId,PropertyValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJob5_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyFile5 interface
 */
#ifndef __IBackgroundCopyFile5_INTERFACE_DEFINED__
#define __IBackgroundCopyFile5_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyFile5;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyFile5Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyFile5 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyFile5 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyFile5 *This);

    /*** IBackgroundCopyFile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteName)(
        IBackgroundCopyFile5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IBackgroundCopyFile5 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyFile5 *This,
        BG_FILE_PROGRESS *pVal);

    /*** IBackgroundCopyFile2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFileRanges)(
        IBackgroundCopyFile5 *This,
        DWORD *RangeCount,
        BG_FILE_RANGE **Ranges);

    HRESULT (STDMETHODCALLTYPE *SetRemoteName)(
        IBackgroundCopyFile5 *This,
        LPCWSTR Val);

    /*** IBackgroundCopyFile3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTemporaryName)(
        IBackgroundCopyFile5 *This,
        LPWSTR *pFilename);

    HRESULT (STDMETHODCALLTYPE *SetValidationState)(
        IBackgroundCopyFile5 *This,
        BOOL state);

    HRESULT (STDMETHODCALLTYPE *GetValidationState)(
        IBackgroundCopyFile5 *This,
        BOOL *pState);

    HRESULT (STDMETHODCALLTYPE *IsDownloadedFromPeer)(
        IBackgroundCopyFile5 *This,
        BOOL *pVal);

    /*** IBackgroundCopyFile4 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPeerDownloadStats)(
        IBackgroundCopyFile5 *This,
        PUINT64 pFromOrigin,
        PUINT64 pFromPeers);

    /*** IBackgroundCopyFile5 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IBackgroundCopyFile5 *This,
        BITS_FILE_PROPERTY_ID PropertyId,
        BITS_FILE_PROPERTY_VALUE PropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IBackgroundCopyFile5 *This,
        BITS_FILE_PROPERTY_ID PropertyId,
        BITS_FILE_PROPERTY_VALUE *PropertyValue);

    END_INTERFACE
} IBackgroundCopyFile5Vtbl;

interface IBackgroundCopyFile5 {
    CONST_VTBL IBackgroundCopyFile5Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyFile5_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyFile5_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyFile5_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyFile methods ***/
#define IBackgroundCopyFile5_GetRemoteName(This,pVal) \
    ((This)->lpVtbl->GetRemoteName(This,pVal))
#define IBackgroundCopyFile5_GetLocalName(This,pVal) \
    ((This)->lpVtbl->GetLocalName(This,pVal))
#define IBackgroundCopyFile5_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
/*** IBackgroundCopyFile2 methods ***/
#define IBackgroundCopyFile5_GetFileRanges(This,RangeCount,Ranges) \
    ((This)->lpVtbl->GetFileRanges(This,RangeCount,Ranges))
#define IBackgroundCopyFile5_SetRemoteName(This,Val) \
    ((This)->lpVtbl->SetRemoteName(This,Val))
/*** IBackgroundCopyFile3 methods ***/
#define IBackgroundCopyFile5_GetTemporaryName(This,pFilename) \
    ((This)->lpVtbl->GetTemporaryName(This,pFilename))
#define IBackgroundCopyFile5_SetValidationState(This,state) \
    ((This)->lpVtbl->SetValidationState(This,state))
#define IBackgroundCopyFile5_GetValidationState(This,pState) \
    ((This)->lpVtbl->GetValidationState(This,pState))
#define IBackgroundCopyFile5_IsDownloadedFromPeer(This,pVal) \
    ((This)->lpVtbl->IsDownloadedFromPeer(This,pVal))
/*** IBackgroundCopyFile4 methods ***/
#define IBackgroundCopyFile5_GetPeerDownloadStats(This,pFromOrigin,pFromPeers) \
    ((This)->lpVtbl->GetPeerDownloadStats(This,pFromOrigin,pFromPeers))
/*** IBackgroundCopyFile5 methods ***/
#define IBackgroundCopyFile5_SetProperty(This,PropertyId,PropertyValue) \
    ((This)->lpVtbl->SetProperty(This,PropertyId,PropertyValue))
#define IBackgroundCopyFile5_GetProperty(This,PropertyId,PropertyValue) \
    ((This)->lpVtbl->GetProperty(This,PropertyId,PropertyValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyFile5_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager5_0_LIBRARY_DEFINED__
#define __BackgroundCopyManager5_0_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager5_0 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager5_0;


#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#endif /* __IBackgroundCopyCallback2_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile5_FWD_DEFINED__
#define __IBackgroundCopyFile5_FWD_DEFINED__
typedef interface IBackgroundCopyFile5 IBackgroundCopyFile5;
#endif /* __IBackgroundCopyFile5_FWD_DEFINED__ */


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
#endif /* __BackgroundCopyManager5_0_LIBRARY_DEFINED__ */

#include "bits10_1.h"

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

#endif /* __bits5_0_h__ */
