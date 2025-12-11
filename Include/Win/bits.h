/* Generated from bits.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits_h__
#define __bits_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyFile_FWD_DEFINED__
#define __IBackgroundCopyFile_FWD_DEFINED__
typedef interface IBackgroundCopyFile IBackgroundCopyFile;
#endif /* __IBackgroundCopyFile_FWD_DEFINED__ */

#ifndef __IEnumBackgroundCopyFiles_FWD_DEFINED__
#define __IEnumBackgroundCopyFiles_FWD_DEFINED__
typedef interface IEnumBackgroundCopyFiles IEnumBackgroundCopyFiles;
#endif /* __IEnumBackgroundCopyFiles_FWD_DEFINED__ */

#ifndef __IBackgroundCopyError_FWD_DEFINED__
#define __IBackgroundCopyError_FWD_DEFINED__
typedef interface IBackgroundCopyError IBackgroundCopyError;
#endif /* __IBackgroundCopyError_FWD_DEFINED__ */

#ifndef __IBackgroundCopyJob_FWD_DEFINED__
#define __IBackgroundCopyJob_FWD_DEFINED__
typedef interface IBackgroundCopyJob IBackgroundCopyJob;
#endif /* __IBackgroundCopyJob_FWD_DEFINED__ */

#ifndef __IEnumBackgroundCopyJobs_FWD_DEFINED__
#define __IEnumBackgroundCopyJobs_FWD_DEFINED__
typedef interface IEnumBackgroundCopyJobs IEnumBackgroundCopyJobs;
#endif /* __IEnumBackgroundCopyJobs_FWD_DEFINED__ */

#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#endif /* __IBackgroundCopyCallback_FWD_DEFINED__ */

#ifndef __AsyncIBackgroundCopyCallback_FWD_DEFINED__
#define __AsyncIBackgroundCopyCallback_FWD_DEFINED__
typedef interface AsyncIBackgroundCopyCallback AsyncIBackgroundCopyCallback;
#endif /* __AsyncIBackgroundCopyCallback_FWD_DEFINED__ */

#ifndef __IBackgroundCopyManager_FWD_DEFINED__
#define __IBackgroundCopyManager_FWD_DEFINED__
typedef interface IBackgroundCopyManager IBackgroundCopyManager;
#endif /* __IBackgroundCopyManager_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager_FWD_DEFINED__
#define __BackgroundCopyManager_FWD_DEFINED__
typedef struct BackgroundCopyManager BackgroundCopyManager;
#endif /* __BackgroundCopyManager_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwn.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include "bitsmsg.h"
#define BG_SIZE_UNKNOWN     (UINT64)(-1)

/*****************************************************************************
 * IBackgroundCopyFile interface
 */
#ifndef __IBackgroundCopyFile_INTERFACE_DEFINED__
#define __IBackgroundCopyFile_INTERFACE_DEFINED__

typedef struct _BG_FILE_PROGRESS {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
    BOOL Completed;
} BG_FILE_PROGRESS;

EXTERN_C const IID IID_IBackgroundCopyFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyFileVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyFile *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyFile *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyFile *This);

    /*** IBackgroundCopyFile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteName)(
        IBackgroundCopyFile *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IBackgroundCopyFile *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyFile *This,
        BG_FILE_PROGRESS *pVal);

    END_INTERFACE
} IBackgroundCopyFileVtbl;

interface IBackgroundCopyFile {
    CONST_VTBL IBackgroundCopyFileVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyFile_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyFile_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyFile_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyFile methods ***/
#define IBackgroundCopyFile_GetRemoteName(This,pVal) \
    ((This)->lpVtbl->GetRemoteName(This,pVal))
#define IBackgroundCopyFile_GetLocalName(This,pVal) \
    ((This)->lpVtbl->GetLocalName(This,pVal))
#define IBackgroundCopyFile_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyFile_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumBackgroundCopyFiles interface
 */
#ifndef __IEnumBackgroundCopyFiles_INTERFACE_DEFINED__
#define __IEnumBackgroundCopyFiles_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumBackgroundCopyFiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumBackgroundCopyFilesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumBackgroundCopyFiles *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumBackgroundCopyFiles *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumBackgroundCopyFiles *This);

    /*** IEnumBackgroundCopyFiles methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumBackgroundCopyFiles *This,
        ULONG celt,
        IBackgroundCopyFile **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumBackgroundCopyFiles *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumBackgroundCopyFiles *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumBackgroundCopyFiles *This,
        IEnumBackgroundCopyFiles **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumBackgroundCopyFiles *This,
        ULONG *puCount);

    END_INTERFACE
} IEnumBackgroundCopyFilesVtbl;

interface IEnumBackgroundCopyFiles {
    CONST_VTBL IEnumBackgroundCopyFilesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumBackgroundCopyFiles_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumBackgroundCopyFiles_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumBackgroundCopyFiles_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumBackgroundCopyFiles methods ***/
#define IEnumBackgroundCopyFiles_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumBackgroundCopyFiles_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumBackgroundCopyFiles_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumBackgroundCopyFiles_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#define IEnumBackgroundCopyFiles_GetCount(This,puCount) \
    ((This)->lpVtbl->GetCount(This,puCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumBackgroundCopyFiles_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyError interface
 */
#ifndef __IBackgroundCopyError_INTERFACE_DEFINED__
#define __IBackgroundCopyError_INTERFACE_DEFINED__

typedef enum BG_ERROR_CONTEXT {
    BG_ERROR_CONTEXT_NONE = 0,
    BG_ERROR_CONTEXT_UNKNOWN = 1,
    BG_ERROR_CONTEXT_GENERAL_QUEUE_MANAGER = 2,
    BG_ERROR_CONTEXT_QUEUE_MANAGER_NOTIFICATION = 3,
    BG_ERROR_CONTEXT_LOCAL_FILE = 4,
    BG_ERROR_CONTEXT_REMOTE_FILE = 5,
    BG_ERROR_CONTEXT_GENERAL_TRANSPORT = 6,
    BG_ERROR_CONTEXT_REMOTE_APPLICATION = 7,
    BG_ERROR_CONTEXT_SERVER_CERTIFICATE_CALLBACK = 8
} BG_ERROR_CONTEXT;

EXTERN_C const IID IID_IBackgroundCopyError;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyErrorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyError *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyError *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyError *This);

    /*** IBackgroundCopyError methods ***/
    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyError *This,
        BG_ERROR_CONTEXT *pContext,
        HRESULT *pCode);

    HRESULT (STDMETHODCALLTYPE *GetFile)(
        IBackgroundCopyError *This,
        IBackgroundCopyFile **pVal);

    HRESULT (STDMETHODCALLTYPE *GetErrorDescription)(
        IBackgroundCopyError *This,
        DWORD LanguageId,
        LPWSTR *pErrorDescription);

    HRESULT (STDMETHODCALLTYPE *GetErrorContextDescription)(
        IBackgroundCopyError *This,
        DWORD LanguageId,
        LPWSTR *pContextDescription);

    HRESULT (STDMETHODCALLTYPE *GetProtocol)(
        IBackgroundCopyError *This,
        LPWSTR *pProtocol);

    END_INTERFACE
} IBackgroundCopyErrorVtbl;

interface IBackgroundCopyError {
    CONST_VTBL IBackgroundCopyErrorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyError_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyError_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyError_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyError methods ***/
#define IBackgroundCopyError_GetError(This,pContext,pCode) \
    ((This)->lpVtbl->GetError(This,pContext,pCode))
#define IBackgroundCopyError_GetFile(This,pVal) \
    ((This)->lpVtbl->GetFile(This,pVal))
#define IBackgroundCopyError_GetErrorDescription(This,LanguageId,pErrorDescription) \
    ((This)->lpVtbl->GetErrorDescription(This,LanguageId,pErrorDescription))
#define IBackgroundCopyError_GetErrorContextDescription(This,LanguageId,pContextDescription) \
    ((This)->lpVtbl->GetErrorContextDescription(This,LanguageId,pContextDescription))
#define IBackgroundCopyError_GetProtocol(This,pProtocol) \
    ((This)->lpVtbl->GetProtocol(This,pProtocol))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyError_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyJob interface
 */
#ifndef __IBackgroundCopyJob_INTERFACE_DEFINED__
#define __IBackgroundCopyJob_INTERFACE_DEFINED__

typedef struct _BG_FILE_INFO {
    LPWSTR RemoteName;
    LPWSTR LocalName;
} BG_FILE_INFO;

typedef struct _BG_JOB_PROGRESS {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
    ULONG FilesTotal;
    ULONG FilesTransferred;
} BG_JOB_PROGRESS;

typedef struct _BG_JOB_TIMES {
    FILETIME CreationTime;
    FILETIME ModificationTime;
    FILETIME TransferCompletionTime;
} BG_JOB_TIMES;

typedef enum BG_JOB_PRIORITY {
    BG_JOB_PRIORITY_FOREGROUND = 0,
    BG_JOB_PRIORITY_HIGH = 1,
    BG_JOB_PRIORITY_NORMAL = 2,
    BG_JOB_PRIORITY_LOW = 3
} BG_JOB_PRIORITY;

typedef enum BG_JOB_STATE {
    BG_JOB_STATE_QUEUED = 0,
    BG_JOB_STATE_CONNECTING = 1,
    BG_JOB_STATE_TRANSFERRING = 2,
    BG_JOB_STATE_SUSPENDED = 3,
    BG_JOB_STATE_ERROR = 4,
    BG_JOB_STATE_TRANSIENT_ERROR = 5,
    BG_JOB_STATE_TRANSFERRED = 6,
    BG_JOB_STATE_ACKNOWLEDGED = 7,
    BG_JOB_STATE_CANCELLED = 8
} BG_JOB_STATE;

typedef enum BG_JOB_TYPE {
    BG_JOB_TYPE_DOWNLOAD = 0,
    BG_JOB_TYPE_UPLOAD = 1,
    BG_JOB_TYPE_UPLOAD_REPLY = 2
} BG_JOB_TYPE;

typedef enum BG_JOB_PROXY_USAGE {
    BG_JOB_PROXY_USAGE_PRECONFIG = 0,
    BG_JOB_PROXY_USAGE_NO_PROXY = 1,
    BG_JOB_PROXY_USAGE_OVERRIDE = 2,
    BG_JOB_PROXY_USAGE_AUTODETECT = 3
} BG_JOB_PROXY_USAGE;

EXTERN_C const IID IID_IBackgroundCopyJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJobVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob *This);

    END_INTERFACE
} IBackgroundCopyJobVtbl;

interface IBackgroundCopyJob {
    CONST_VTBL IBackgroundCopyJobVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJob_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJob_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJob_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob_AddFileSet(This,cFileCount,pFileSet) \
    ((This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet))
#define IBackgroundCopyJob_AddFile(This,RemoteUrl,LocalName) \
    ((This)->lpVtbl->AddFile(This,RemoteUrl,LocalName))
#define IBackgroundCopyJob_EnumFiles(This,pEnum) \
    ((This)->lpVtbl->EnumFiles(This,pEnum))
#define IBackgroundCopyJob_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IBackgroundCopyJob_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IBackgroundCopyJob_Cancel(This) \
    ((This)->lpVtbl->Cancel(This))
#define IBackgroundCopyJob_Complete(This) \
    ((This)->lpVtbl->Complete(This))
#define IBackgroundCopyJob_GetId(This,pVal) \
    ((This)->lpVtbl->GetId(This,pVal))
#define IBackgroundCopyJob_GetType(This,pVal) \
    ((This)->lpVtbl->GetType(This,pVal))
#define IBackgroundCopyJob_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
#define IBackgroundCopyJob_GetTimes(This,pVal) \
    ((This)->lpVtbl->GetTimes(This,pVal))
#define IBackgroundCopyJob_GetState(This,pVal) \
    ((This)->lpVtbl->GetState(This,pVal))
#define IBackgroundCopyJob_GetError(This,ppError) \
    ((This)->lpVtbl->GetError(This,ppError))
#define IBackgroundCopyJob_GetOwner(This,pVal) \
    ((This)->lpVtbl->GetOwner(This,pVal))
#define IBackgroundCopyJob_SetDisplayName(This,Val) \
    ((This)->lpVtbl->SetDisplayName(This,Val))
#define IBackgroundCopyJob_GetDisplayName(This,pVal) \
    ((This)->lpVtbl->GetDisplayName(This,pVal))
#define IBackgroundCopyJob_SetDescription(This,Val) \
    ((This)->lpVtbl->SetDescription(This,Val))
#define IBackgroundCopyJob_GetDescription(This,pVal) \
    ((This)->lpVtbl->GetDescription(This,pVal))
#define IBackgroundCopyJob_SetPriority(This,Val) \
    ((This)->lpVtbl->SetPriority(This,Val))
#define IBackgroundCopyJob_GetPriority(This,pVal) \
    ((This)->lpVtbl->GetPriority(This,pVal))
#define IBackgroundCopyJob_SetNotifyFlags(This,Val) \
    ((This)->lpVtbl->SetNotifyFlags(This,Val))
#define IBackgroundCopyJob_GetNotifyFlags(This,pVal) \
    ((This)->lpVtbl->GetNotifyFlags(This,pVal))
#define IBackgroundCopyJob_SetNotifyInterface(This,Val) \
    ((This)->lpVtbl->SetNotifyInterface(This,Val))
#define IBackgroundCopyJob_GetNotifyInterface(This,pVal) \
    ((This)->lpVtbl->GetNotifyInterface(This,pVal))
#define IBackgroundCopyJob_SetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->SetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob_GetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->GetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob_SetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->SetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob_GetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->GetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob_GetErrorCount(This,Errors) \
    ((This)->lpVtbl->GetErrorCount(This,Errors))
#define IBackgroundCopyJob_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) \
    ((This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList))
#define IBackgroundCopyJob_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) \
    ((This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList))
#define IBackgroundCopyJob_TakeOwnership(This) \
    ((This)->lpVtbl->TakeOwnership(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJob_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumBackgroundCopyJobs interface
 */
#ifndef __IEnumBackgroundCopyJobs_INTERFACE_DEFINED__
#define __IEnumBackgroundCopyJobs_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumBackgroundCopyJobs;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumBackgroundCopyJobsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumBackgroundCopyJobs *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumBackgroundCopyJobs *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumBackgroundCopyJobs *This);

    /*** IEnumBackgroundCopyJobs methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumBackgroundCopyJobs *This,
        ULONG celt,
        IBackgroundCopyJob **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumBackgroundCopyJobs *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumBackgroundCopyJobs *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumBackgroundCopyJobs *This,
        IEnumBackgroundCopyJobs **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumBackgroundCopyJobs *This,
        ULONG *puCount);

    END_INTERFACE
} IEnumBackgroundCopyJobsVtbl;

interface IEnumBackgroundCopyJobs {
    CONST_VTBL IEnumBackgroundCopyJobsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumBackgroundCopyJobs_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumBackgroundCopyJobs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumBackgroundCopyJobs_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumBackgroundCopyJobs methods ***/
#define IEnumBackgroundCopyJobs_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumBackgroundCopyJobs_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumBackgroundCopyJobs_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumBackgroundCopyJobs_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#define IEnumBackgroundCopyJobs_GetCount(This,puCount) \
    ((This)->lpVtbl->GetCount(This,puCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumBackgroundCopyJobs_INTERFACE_DEFINED__ */

#define   BG_NOTIFY_JOB_TRANSFERRED         0x0001
#define   BG_NOTIFY_JOB_ERROR               0x0002
#define   BG_NOTIFY_DISABLE                 0x0004
#define   BG_NOTIFY_JOB_MODIFICATION        0x0008
#define   BG_NOTIFY_FILE_TRANSFERRED        0x0010
#define   BG_NOTIFY_FILE_RANGES_TRANSFERRED 0x0020

/*****************************************************************************
 * IBackgroundCopyCallback interface
 */
#ifndef __IBackgroundCopyCallback_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyCallback *This);

    /*** IBackgroundCopyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *JobTransferred)(
        IBackgroundCopyCallback *This,
        IBackgroundCopyJob *pJob);

    HRESULT (STDMETHODCALLTYPE *JobError)(
        IBackgroundCopyCallback *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyError *pError);

    HRESULT (STDMETHODCALLTYPE *JobModification)(
        IBackgroundCopyCallback *This,
        IBackgroundCopyJob *pJob,
        DWORD dwReserved);

    END_INTERFACE
} IBackgroundCopyCallbackVtbl;

interface IBackgroundCopyCallback {
    CONST_VTBL IBackgroundCopyCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyCallback methods ***/
#define IBackgroundCopyCallback_JobTransferred(This,pJob) \
    ((This)->lpVtbl->JobTransferred(This,pJob))
#define IBackgroundCopyCallback_JobError(This,pJob,pError) \
    ((This)->lpVtbl->JobError(This,pJob,pError))
#define IBackgroundCopyCallback_JobModification(This,pJob,dwReserved) \
    ((This)->lpVtbl->JobModification(This,pJob,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIBackgroundCopyCallback interface
 */
#ifndef __AsyncIBackgroundCopyCallback_INTERFACE_DEFINED__
#define __AsyncIBackgroundCopyCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIBackgroundCopyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIBackgroundCopyCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIBackgroundCopyCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIBackgroundCopyCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIBackgroundCopyCallback *This);

    /*** AsyncIBackgroundCopyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_JobTransferred)(
        AsyncIBackgroundCopyCallback *This,
        IBackgroundCopyJob *pJob);

    HRESULT (STDMETHODCALLTYPE *Finish_JobTransferred)(
        AsyncIBackgroundCopyCallback *This);

    HRESULT (STDMETHODCALLTYPE *Begin_JobError)(
        AsyncIBackgroundCopyCallback *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyError *pError);

    HRESULT (STDMETHODCALLTYPE *Finish_JobError)(
        AsyncIBackgroundCopyCallback *This);

    HRESULT (STDMETHODCALLTYPE *Begin_JobModification)(
        AsyncIBackgroundCopyCallback *This,
        IBackgroundCopyJob *pJob,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *Finish_JobModification)(
        AsyncIBackgroundCopyCallback *This);

    END_INTERFACE
} AsyncIBackgroundCopyCallbackVtbl;

interface AsyncIBackgroundCopyCallback {
    CONST_VTBL AsyncIBackgroundCopyCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIBackgroundCopyCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIBackgroundCopyCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIBackgroundCopyCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIBackgroundCopyCallback methods ***/
#define AsyncIBackgroundCopyCallback_Begin_JobTransferred(This,pJob) \
    ((This)->lpVtbl->Begin_JobTransferred(This,pJob))
#define AsyncIBackgroundCopyCallback_Finish_JobTransferred(This) \
    ((This)->lpVtbl->Finish_JobTransferred(This))
#define AsyncIBackgroundCopyCallback_Begin_JobError(This,pJob,pError) \
    ((This)->lpVtbl->Begin_JobError(This,pJob,pError))
#define AsyncIBackgroundCopyCallback_Finish_JobError(This) \
    ((This)->lpVtbl->Finish_JobError(This))
#define AsyncIBackgroundCopyCallback_Begin_JobModification(This,pJob,dwReserved) \
    ((This)->lpVtbl->Begin_JobModification(This,pJob,dwReserved))
#define AsyncIBackgroundCopyCallback_Finish_JobModification(This) \
    ((This)->lpVtbl->Finish_JobModification(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __AsyncIBackgroundCopyCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyManager interface
 */
#ifndef __IBackgroundCopyManager_INTERFACE_DEFINED__
#define __IBackgroundCopyManager_INTERFACE_DEFINED__

#define    BG_JOB_ENUM_ALL_USERS  0x0001

EXTERN_C const IID IID_IBackgroundCopyManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyManager *This);

    /*** IBackgroundCopyManager methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateJob)(
        IBackgroundCopyManager *This,
        LPCWSTR DisplayName,
        BG_JOB_TYPE Type,
        GUID *pJobId,
        IBackgroundCopyJob **ppJob);

    HRESULT (STDMETHODCALLTYPE *GetJob)(
        IBackgroundCopyManager *This,
        REFGUID jobID,
        IBackgroundCopyJob **ppJob);

    HRESULT (STDMETHODCALLTYPE *EnumJobs)(
        IBackgroundCopyManager *This,
        DWORD dwFlags,
        IEnumBackgroundCopyJobs **ppEnum);

    HRESULT (STDMETHODCALLTYPE *GetErrorDescription)(
        IBackgroundCopyManager *This,
        HRESULT hResult,
        DWORD LanguageId,
        LPWSTR *pErrorDescription);

    END_INTERFACE
} IBackgroundCopyManagerVtbl;

interface IBackgroundCopyManager {
    CONST_VTBL IBackgroundCopyManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyManager methods ***/
#define IBackgroundCopyManager_CreateJob(This,DisplayName,Type,pJobId,ppJob) \
    ((This)->lpVtbl->CreateJob(This,DisplayName,Type,pJobId,ppJob))
#define IBackgroundCopyManager_GetJob(This,jobID,ppJob) \
    ((This)->lpVtbl->GetJob(This,jobID,ppJob))
#define IBackgroundCopyManager_EnumJobs(This,dwFlags,ppEnum) \
    ((This)->lpVtbl->EnumJobs(This,dwFlags,ppEnum))
#define IBackgroundCopyManager_GetErrorDescription(This,hResult,LanguageId,pErrorDescription) \
    ((This)->lpVtbl->GetErrorDescription(This,hResult,LanguageId,pErrorDescription))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyManager_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager_LIBRARY_DEFINED__
#define __BackgroundCopyManager_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager;


#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#endif /* __IBackgroundCopyCallback_FWD_DEFINED__ */
#endif /* __BackgroundCopyManager_LIBRARY_DEFINED__ */

#include "bits1_5.h"

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

#endif /* __bits_h__ */
