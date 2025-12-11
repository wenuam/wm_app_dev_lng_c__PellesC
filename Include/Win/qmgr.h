/* Generated from qmgr.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __qmgr_h__
#define __qmgr_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJob1_FWD_DEFINED__
#define __IBackgroundCopyJob1_FWD_DEFINED__
typedef interface IBackgroundCopyJob1 IBackgroundCopyJob1;
#endif /* __IBackgroundCopyJob1_FWD_DEFINED__ */

#ifndef __IEnumBackgroundCopyJobs1_FWD_DEFINED__
#define __IEnumBackgroundCopyJobs1_FWD_DEFINED__
typedef interface IEnumBackgroundCopyJobs1 IEnumBackgroundCopyJobs1;
#endif /* __IEnumBackgroundCopyJobs1_FWD_DEFINED__ */

#ifndef __IBackgroundCopyGroup_FWD_DEFINED__
#define __IBackgroundCopyGroup_FWD_DEFINED__
typedef interface IBackgroundCopyGroup IBackgroundCopyGroup;
#endif /* __IBackgroundCopyGroup_FWD_DEFINED__ */

#ifndef __IEnumBackgroundCopyGroups_FWD_DEFINED__
#define __IEnumBackgroundCopyGroups_FWD_DEFINED__
typedef interface IEnumBackgroundCopyGroups IEnumBackgroundCopyGroups;
#endif /* __IEnumBackgroundCopyGroups_FWD_DEFINED__ */

#ifndef __IBackgroundCopyCallback1_FWD_DEFINED__
#define __IBackgroundCopyCallback1_FWD_DEFINED__
typedef interface IBackgroundCopyCallback1 IBackgroundCopyCallback1;
#endif /* __IBackgroundCopyCallback1_FWD_DEFINED__ */

#ifndef __IBackgroundCopyQMgr_FWD_DEFINED__
#define __IBackgroundCopyQMgr_FWD_DEFINED__
typedef interface IBackgroundCopyQMgr IBackgroundCopyQMgr;
#endif /* __IBackgroundCopyQMgr_FWD_DEFINED__ */

#ifndef __BackgroundCopyQMgr_FWD_DEFINED__
#define __BackgroundCopyQMgr_FWD_DEFINED__
typedef struct BackgroundCopyQMgr BackgroundCopyQMgr;
#endif /* __BackgroundCopyQMgr_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwn.h"
#include "ocidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

// Background Copy QMgr Public Interface

#define  QM_NOTIFY_FILE_DONE         0x00000001
#define  QM_NOTIFY_JOB_DONE          0x00000002
#define  QM_NOTIFY_GROUP_DONE        0x00000004
#define  QM_NOTIFY_DISABLE_NOTIFY    0x00000040
#define  QM_NOTIFY_USE_PROGRESSEX    0x00000080

#define  QM_STATUS_FILE_COMPLETE     0x00000001
#define  QM_STATUS_FILE_INCOMPLETE   0x00000002
#define  QM_STATUS_JOB_COMPLETE      0x00000004
#define  QM_STATUS_JOB_INCOMPLETE    0x00000008
#define  QM_STATUS_JOB_ERROR         0x00000010
#define  QM_STATUS_JOB_FOREGROUND    0x00000020
#define  QM_STATUS_GROUP_COMPLETE    0x00000040
#define  QM_STATUS_GROUP_INCOMPLETE  0x00000080
#define  QM_STATUS_GROUP_SUSPENDED   0x00000100
#define  QM_STATUS_GROUP_ERROR       0x00000200
#define  QM_STATUS_GROUP_FOREGROUND  0x00000400

#define  QM_PROTOCOL_HTTP            1
#define  QM_PROTOCOL_FTP             2
#define  QM_PROTOCOL_SMB             3
#define  QM_PROTOCOL_CUSTOM          4

#define  QM_PROGRESS_PERCENT_DONE    1
#define  QM_PROGRESS_TIME_DONE       2
#define  QM_PROGRESS_SIZE_DONE       3

#define  QM_E_INVALID_STATE          0x81001001
#define  QM_E_SERVICE_UNAVAILABLE    0x81001002
#define  QM_E_DOWNLOADER_UNAVAILABLE 0x81001003
#define  QM_E_ITEM_NOT_FOUND         0x81001004

/*****************************************************************************
 * IBackgroundCopyJob1 interface
 */
#ifndef __IBackgroundCopyJob1_INTERFACE_DEFINED__
#define __IBackgroundCopyJob1_INTERFACE_DEFINED__

typedef struct _FILESETINFO {
    BSTR bstrRemoteFile;
    BSTR bstrLocalFile;
    DWORD dwSizeHint;
} FILESETINFO;

EXTERN_C const IID IID_IBackgroundCopyJob1;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJob1Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob1 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob1 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob1 *This);

    /*** IBackgroundCopyJob1 methods ***/
    HRESULT (STDMETHODCALLTYPE *CancelJob)(
        IBackgroundCopyJob1 *This);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob1 *This,
        DWORD dwFlags,
        DWORD *pdwProgress);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IBackgroundCopyJob1 *This,
        DWORD *pdwStatus,
        DWORD *pdwWin32Result,
        DWORD *pdwTransportResult,
        DWORD *pdwNumOfRetries);

    HRESULT (STDMETHODCALLTYPE *AddFiles)(
        IBackgroundCopyJob1 *This,
        ULONG cFileCount,
        FILESETINFO **ppFileSet);

    HRESULT (STDMETHODCALLTYPE *GetFile)(
        IBackgroundCopyJob1 *This,
        ULONG cFileIndex,
        FILESETINFO *pFileInfo);

    HRESULT (STDMETHODCALLTYPE *GetFileCount)(
        IBackgroundCopyJob1 *This,
        DWORD *pdwFileCount);

    HRESULT (STDMETHODCALLTYPE *SwitchToForeground)(
        IBackgroundCopyJob1 *This);

    HRESULT (STDMETHODCALLTYPE *get_JobID)(
        IBackgroundCopyJob1 *This,
        GUID *pguidJobID);

    END_INTERFACE
} IBackgroundCopyJob1Vtbl;

interface IBackgroundCopyJob1 {
    CONST_VTBL IBackgroundCopyJob1Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJob1_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJob1_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJob1_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJob1 methods ***/
#define IBackgroundCopyJob1_CancelJob(This) \
    ((This)->lpVtbl->CancelJob(This))
#define IBackgroundCopyJob1_GetProgress(This,dwFlags,pdwProgress) \
    ((This)->lpVtbl->GetProgress(This,dwFlags,pdwProgress))
#define IBackgroundCopyJob1_GetStatus(This,pdwStatus,pdwWin32Result,pdwTransportResult,pdwNumOfRetries) \
    ((This)->lpVtbl->GetStatus(This,pdwStatus,pdwWin32Result,pdwTransportResult,pdwNumOfRetries))
#define IBackgroundCopyJob1_AddFiles(This,cFileCount,ppFileSet) \
    ((This)->lpVtbl->AddFiles(This,cFileCount,ppFileSet))
#define IBackgroundCopyJob1_GetFile(This,cFileIndex,pFileInfo) \
    ((This)->lpVtbl->GetFile(This,cFileIndex,pFileInfo))
#define IBackgroundCopyJob1_GetFileCount(This,pdwFileCount) \
    ((This)->lpVtbl->GetFileCount(This,pdwFileCount))
#define IBackgroundCopyJob1_SwitchToForeground(This) \
    ((This)->lpVtbl->SwitchToForeground(This))
#define IBackgroundCopyJob1_get_JobID(This,pguidJobID) \
    ((This)->lpVtbl->get_JobID(This,pguidJobID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJob1_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumBackgroundCopyJobs1 interface
 */
#ifndef __IEnumBackgroundCopyJobs1_INTERFACE_DEFINED__
#define __IEnumBackgroundCopyJobs1_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumBackgroundCopyJobs1;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumBackgroundCopyJobs1Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumBackgroundCopyJobs1 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumBackgroundCopyJobs1 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumBackgroundCopyJobs1 *This);

    /*** IEnumBackgroundCopyJobs1 methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumBackgroundCopyJobs1 *This,
        ULONG celt,
        GUID *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumBackgroundCopyJobs1 *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumBackgroundCopyJobs1 *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumBackgroundCopyJobs1 *This,
        IEnumBackgroundCopyJobs1 **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumBackgroundCopyJobs1 *This,
        ULONG *puCount);

    END_INTERFACE
} IEnumBackgroundCopyJobs1Vtbl;

interface IEnumBackgroundCopyJobs1 {
    CONST_VTBL IEnumBackgroundCopyJobs1Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumBackgroundCopyJobs1_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumBackgroundCopyJobs1_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumBackgroundCopyJobs1_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumBackgroundCopyJobs1 methods ***/
#define IEnumBackgroundCopyJobs1_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumBackgroundCopyJobs1_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumBackgroundCopyJobs1_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumBackgroundCopyJobs1_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#define IEnumBackgroundCopyJobs1_GetCount(This,puCount) \
    ((This)->lpVtbl->GetCount(This,puCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumBackgroundCopyJobs1_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyGroup interface
 */
#ifndef __IBackgroundCopyGroup_INTERFACE_DEFINED__
#define __IBackgroundCopyGroup_INTERFACE_DEFINED__

typedef enum GROUPPROP {
    GROUPPROP_PRIORITY = 0,
    GROUPPROP_REMOTEUSERID = 1,
    GROUPPROP_REMOTEUSERPWD = 2,
    GROUPPROP_LOCALUSERID = 3,
    GROUPPROP_LOCALUSERPWD = 4,
    GROUPPROP_PROTOCOLFLAGS = 5,
    GROUPPROP_NOTIFYFLAGS = 6,
    GROUPPROP_NOTIFYCLSID = 7,
    GROUPPROP_PROGRESSSIZE = 8,
    GROUPPROP_PROGRESSPERCENT = 9,
    GROUPPROP_PROGRESSTIME = 10,
    GROUPPROP_DISPLAYNAME = 11,
    GROUPPROP_DESCRIPTION = 12
} GROUPPROP;

EXTERN_C const IID IID_IBackgroundCopyGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyGroupVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyGroup *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyGroup *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyGroup *This);

    /*** IBackgroundCopyGroup methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProp)(
        IBackgroundCopyGroup *This,
        GROUPPROP propID,
        VARIANT *pvarVal);

    HRESULT (STDMETHODCALLTYPE *SetProp)(
        IBackgroundCopyGroup *This,
        GROUPPROP propID,
        VARIANT *pvarVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyGroup *This,
        DWORD dwFlags,
        DWORD *pdwProgress);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IBackgroundCopyGroup *This,
        DWORD *pdwStatus,
        DWORD *pdwJobIndex);

    HRESULT (STDMETHODCALLTYPE *GetJob)(
        IBackgroundCopyGroup *This,
        GUID jobID,
        IBackgroundCopyJob1 **ppJob);

    HRESULT (STDMETHODCALLTYPE *SuspendGroup)(
        IBackgroundCopyGroup *This);

    HRESULT (STDMETHODCALLTYPE *ResumeGroup)(
        IBackgroundCopyGroup *This);

    HRESULT (STDMETHODCALLTYPE *CancelGroup)(
        IBackgroundCopyGroup *This);

    HRESULT (STDMETHODCALLTYPE *get_Size)(
        IBackgroundCopyGroup *This,
        DWORD *pdwSize);

    HRESULT (STDMETHODCALLTYPE *get_GroupID)(
        IBackgroundCopyGroup *This,
        GUID *pguidGroupID);

    HRESULT (STDMETHODCALLTYPE *CreateJob)(
        IBackgroundCopyGroup *This,
        GUID guidJobID,
        IBackgroundCopyJob1 **ppJob);

    HRESULT (STDMETHODCALLTYPE *EnumJobs)(
        IBackgroundCopyGroup *This,
        DWORD dwFlags,
        IEnumBackgroundCopyJobs1 **ppEnumJobs);

    HRESULT (STDMETHODCALLTYPE *SwitchToForeground)(
        IBackgroundCopyGroup *This);

    HRESULT (STDMETHODCALLTYPE *QueryNewJobInterface)(
        IBackgroundCopyGroup *This,
        REFIID iid,
        IUnknown **pUnk);

    HRESULT (STDMETHODCALLTYPE *SetNotificationPointer)(
        IBackgroundCopyGroup *This,
        REFIID iid,
        IUnknown *pUnk);

    END_INTERFACE
} IBackgroundCopyGroupVtbl;

interface IBackgroundCopyGroup {
    CONST_VTBL IBackgroundCopyGroupVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyGroup_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyGroup_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyGroup_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyGroup methods ***/
#define IBackgroundCopyGroup_GetProp(This,propID,pvarVal) \
    ((This)->lpVtbl->GetProp(This,propID,pvarVal))
#define IBackgroundCopyGroup_SetProp(This,propID,pvarVal) \
    ((This)->lpVtbl->SetProp(This,propID,pvarVal))
#define IBackgroundCopyGroup_GetProgress(This,dwFlags,pdwProgress) \
    ((This)->lpVtbl->GetProgress(This,dwFlags,pdwProgress))
#define IBackgroundCopyGroup_GetStatus(This,pdwStatus,pdwJobIndex) \
    ((This)->lpVtbl->GetStatus(This,pdwStatus,pdwJobIndex))
#define IBackgroundCopyGroup_GetJob(This,jobID,ppJob) \
    ((This)->lpVtbl->GetJob(This,jobID,ppJob))
#define IBackgroundCopyGroup_SuspendGroup(This) \
    ((This)->lpVtbl->SuspendGroup(This))
#define IBackgroundCopyGroup_ResumeGroup(This) \
    ((This)->lpVtbl->ResumeGroup(This))
#define IBackgroundCopyGroup_CancelGroup(This) \
    ((This)->lpVtbl->CancelGroup(This))
#define IBackgroundCopyGroup_get_Size(This,pdwSize) \
    ((This)->lpVtbl->get_Size(This,pdwSize))
#define IBackgroundCopyGroup_get_GroupID(This,pguidGroupID) \
    ((This)->lpVtbl->get_GroupID(This,pguidGroupID))
#define IBackgroundCopyGroup_CreateJob(This,guidJobID,ppJob) \
    ((This)->lpVtbl->CreateJob(This,guidJobID,ppJob))
#define IBackgroundCopyGroup_EnumJobs(This,dwFlags,ppEnumJobs) \
    ((This)->lpVtbl->EnumJobs(This,dwFlags,ppEnumJobs))
#define IBackgroundCopyGroup_SwitchToForeground(This) \
    ((This)->lpVtbl->SwitchToForeground(This))
#define IBackgroundCopyGroup_QueryNewJobInterface(This,iid,pUnk) \
    ((This)->lpVtbl->QueryNewJobInterface(This,iid,pUnk))
#define IBackgroundCopyGroup_SetNotificationPointer(This,iid,pUnk) \
    ((This)->lpVtbl->SetNotificationPointer(This,iid,pUnk))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_InternalSetProp_Proxy(
    IBackgroundCopyGroup *This,
    GROUPPROP propID,
    VARIANT *pvarVal);

void __RPC_STUB IBackgroundCopyGroup_InternalSetProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBackgroundCopyGroup_SetProp_Proxy(
    GROUPPROP propID,
    VARIANT *pvarVal);
HRESULT IBackgroundCopyGroup_SetProp_Stub(
    GROUPPROP propID,
    VARIANT *pvarVal);
#endif /* __IBackgroundCopyGroup_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumBackgroundCopyGroups interface
 */
#ifndef __IEnumBackgroundCopyGroups_INTERFACE_DEFINED__
#define __IEnumBackgroundCopyGroups_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumBackgroundCopyGroups;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumBackgroundCopyGroupsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumBackgroundCopyGroups *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumBackgroundCopyGroups *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumBackgroundCopyGroups *This);

    /*** IEnumBackgroundCopyGroups methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumBackgroundCopyGroups *This,
        ULONG celt,
        GUID *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumBackgroundCopyGroups *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumBackgroundCopyGroups *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumBackgroundCopyGroups *This,
        IEnumBackgroundCopyGroups **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumBackgroundCopyGroups *This,
        ULONG *puCount);

    END_INTERFACE
} IEnumBackgroundCopyGroupsVtbl;

interface IEnumBackgroundCopyGroups {
    CONST_VTBL IEnumBackgroundCopyGroupsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumBackgroundCopyGroups_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumBackgroundCopyGroups_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumBackgroundCopyGroups_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumBackgroundCopyGroups methods ***/
#define IEnumBackgroundCopyGroups_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumBackgroundCopyGroups_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumBackgroundCopyGroups_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumBackgroundCopyGroups_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#define IEnumBackgroundCopyGroups_GetCount(This,puCount) \
    ((This)->lpVtbl->GetCount(This,puCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumBackgroundCopyGroups_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyCallback1 interface
 */
#ifndef __IBackgroundCopyCallback1_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback1_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyCallback1;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyCallback1Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyCallback1 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyCallback1 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyCallback1 *This);

    /*** IBackgroundCopyCallback1 methods ***/
    HRESULT (STDMETHODCALLTYPE *OnStatus)(
        IBackgroundCopyCallback1 *This,
        IBackgroundCopyGroup *pGroup,
        IBackgroundCopyJob1 *pJob,
        DWORD dwFileIndex,
        DWORD dwStatus,
        DWORD dwNumOfRetries,
        DWORD dwWin32Result,
        DWORD dwTransportResult);

    HRESULT (STDMETHODCALLTYPE *OnProgress)(
        IBackgroundCopyCallback1 *This,
        DWORD ProgressType,
        IBackgroundCopyGroup *pGroup,
        IBackgroundCopyJob1 *pJob,
        DWORD dwFileIndex,
        DWORD dwProgressValue);

    HRESULT (STDMETHODCALLTYPE *OnProgressEx)(
        IBackgroundCopyCallback1 *This,
        DWORD ProgressType,
        IBackgroundCopyGroup *pGroup,
        IBackgroundCopyJob1 *pJob,
        DWORD dwFileIndex,
        DWORD dwProgressValue,
        DWORD dwByteArraySize,
        BYTE *pByte);

    END_INTERFACE
} IBackgroundCopyCallback1Vtbl;

interface IBackgroundCopyCallback1 {
    CONST_VTBL IBackgroundCopyCallback1Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyCallback1_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyCallback1_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyCallback1_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyCallback1 methods ***/
#define IBackgroundCopyCallback1_OnStatus(This,pGroup,pJob,dwFileIndex,dwStatus,dwNumOfRetries,dwWin32Result,dwTransportResult) \
    ((This)->lpVtbl->OnStatus(This,pGroup,pJob,dwFileIndex,dwStatus,dwNumOfRetries,dwWin32Result,dwTransportResult))
#define IBackgroundCopyCallback1_OnProgress(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue) \
    ((This)->lpVtbl->OnProgress(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue))
#define IBackgroundCopyCallback1_OnProgressEx(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue,dwByteArraySize,pByte) \
    ((This)->lpVtbl->OnProgressEx(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue,dwByteArraySize,pByte))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyCallback1_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyQMgr interface
 */
#ifndef __IBackgroundCopyQMgr_INTERFACE_DEFINED__
#define __IBackgroundCopyQMgr_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyQMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyQMgrVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyQMgr *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyQMgr *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyQMgr *This);

    /*** IBackgroundCopyQMgr methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateGroup)(
        IBackgroundCopyQMgr *This,
        GUID guidGroupID,
        IBackgroundCopyGroup **ppGroup);

    HRESULT (STDMETHODCALLTYPE *GetGroup)(
        IBackgroundCopyQMgr *This,
        GUID groupID,
        IBackgroundCopyGroup **ppGroup);

    HRESULT (STDMETHODCALLTYPE *EnumGroups)(
        IBackgroundCopyQMgr *This,
        DWORD dwFlags,
        IEnumBackgroundCopyGroups **ppEnumGroups);

    END_INTERFACE
} IBackgroundCopyQMgrVtbl;

interface IBackgroundCopyQMgr {
    CONST_VTBL IBackgroundCopyQMgrVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyQMgr_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyQMgr_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyQMgr_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyQMgr methods ***/
#define IBackgroundCopyQMgr_CreateGroup(This,guidGroupID,ppGroup) \
    ((This)->lpVtbl->CreateGroup(This,guidGroupID,ppGroup))
#define IBackgroundCopyQMgr_GetGroup(This,groupID,ppGroup) \
    ((This)->lpVtbl->GetGroup(This,groupID,ppGroup))
#define IBackgroundCopyQMgr_EnumGroups(This,dwFlags,ppEnumGroups) \
    ((This)->lpVtbl->EnumGroups(This,dwFlags,ppEnumGroups))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyQMgr_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyQMgr_LIBRARY_DEFINED__
#define __BackgroundCopyQMgr_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyQMgr coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyQMgr;
#endif /* __BackgroundCopyQMgr_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

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

#endif /* __qmgr_h__ */
