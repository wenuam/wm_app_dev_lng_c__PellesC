/* Generated from bits2_0.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits2_0_h__
#define __bits2_0_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJob3_FWD_DEFINED__
#define __IBackgroundCopyJob3_FWD_DEFINED__
typedef interface IBackgroundCopyJob3 IBackgroundCopyJob3;
#endif /* __IBackgroundCopyJob3_FWD_DEFINED__ */

#ifndef __IBackgroundCopyFile2_FWD_DEFINED__
#define __IBackgroundCopyFile2_FWD_DEFINED__
typedef interface IBackgroundCopyFile2 IBackgroundCopyFile2;
#endif /* __IBackgroundCopyFile2_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager2_0_FWD_DEFINED__
#define __BackgroundCopyManager2_0_FWD_DEFINED__
typedef struct BackgroundCopyManager2_0 BackgroundCopyManager2_0;
#endif /* __BackgroundCopyManager2_0_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"
#include "bits1_5.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define BG_LENGTH_TO_EOF     (UINT64)(-1)

typedef struct _BG_FILE_RANGE {
    UINT64 InitialOffset;
    UINT64 Length;
} BG_FILE_RANGE;

#define BG_COPY_FILE_OWNER   1
#define BG_COPY_FILE_GROUP   2
#define BG_COPY_FILE_DACL    4
#define BG_COPY_FILE_SACL    8
#define BG_COPY_FILE_ALL    15

/*****************************************************************************
 * IBackgroundCopyJob3 interface
 */
#ifndef __IBackgroundCopyJob3_INTERFACE_DEFINED__
#define __IBackgroundCopyJob3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyJob3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJob3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob3 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob3 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob3 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob3 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob3 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob3 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob3 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob3 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob3 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob3 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob3 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob3 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob3 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob3 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob3 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob3 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob3 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob3 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob3 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob3 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob3 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob3 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob3 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob3 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob3 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob3 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob3 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob3 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob3 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob3 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob3 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob3 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob3 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob3 *This,
        LPCWSTR Program,
        LPCWSTR Parameters);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob3 *This,
        LPWSTR *pProgram,
        LPWSTR *pParameters);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob3 *This,
        BG_JOB_REPLY_PROGRESS *pProgress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob3 *This,
        byte **ppBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob3 *This,
        LPCWSTR ReplyFileName);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob3 *This,
        LPWSTR *pReplyFileName);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob3 *This,
        BG_AUTH_CREDENTIALS *credentials);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob3 *This,
        BG_AUTH_TARGET Target,
        BG_AUTH_SCHEME Scheme);

    /*** IBackgroundCopyJob3 methods ***/
    HRESULT (STDMETHODCALLTYPE *ReplaceRemotePrefix)(
        IBackgroundCopyJob3 *This,
        LPCWSTR OldPrefix,
        LPCWSTR NewPrefix);

    HRESULT (STDMETHODCALLTYPE *AddFileWithRanges)(
        IBackgroundCopyJob3 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName,
        DWORD RangeCount,
        BG_FILE_RANGE *Ranges);

    HRESULT (STDMETHODCALLTYPE *SetFileACLFlags)(
        IBackgroundCopyJob3 *This,
        DWORD Flags);

    HRESULT (STDMETHODCALLTYPE *GetFileACLFlags)(
        IBackgroundCopyJob3 *This,
        DWORD *Flags);

    END_INTERFACE
} IBackgroundCopyJob3Vtbl;

interface IBackgroundCopyJob3 {
    CONST_VTBL IBackgroundCopyJob3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJob3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJob3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJob3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob3_AddFileSet(This,cFileCount,pFileSet) \
    ((This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet))
#define IBackgroundCopyJob3_AddFile(This,RemoteUrl,LocalName) \
    ((This)->lpVtbl->AddFile(This,RemoteUrl,LocalName))
#define IBackgroundCopyJob3_EnumFiles(This,pEnum) \
    ((This)->lpVtbl->EnumFiles(This,pEnum))
#define IBackgroundCopyJob3_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IBackgroundCopyJob3_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IBackgroundCopyJob3_Cancel(This) \
    ((This)->lpVtbl->Cancel(This))
#define IBackgroundCopyJob3_Complete(This) \
    ((This)->lpVtbl->Complete(This))
#define IBackgroundCopyJob3_GetId(This,pVal) \
    ((This)->lpVtbl->GetId(This,pVal))
#define IBackgroundCopyJob3_GetType(This,pVal) \
    ((This)->lpVtbl->GetType(This,pVal))
#define IBackgroundCopyJob3_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
#define IBackgroundCopyJob3_GetTimes(This,pVal) \
    ((This)->lpVtbl->GetTimes(This,pVal))
#define IBackgroundCopyJob3_GetState(This,pVal) \
    ((This)->lpVtbl->GetState(This,pVal))
#define IBackgroundCopyJob3_GetError(This,ppError) \
    ((This)->lpVtbl->GetError(This,ppError))
#define IBackgroundCopyJob3_GetOwner(This,pVal) \
    ((This)->lpVtbl->GetOwner(This,pVal))
#define IBackgroundCopyJob3_SetDisplayName(This,Val) \
    ((This)->lpVtbl->SetDisplayName(This,Val))
#define IBackgroundCopyJob3_GetDisplayName(This,pVal) \
    ((This)->lpVtbl->GetDisplayName(This,pVal))
#define IBackgroundCopyJob3_SetDescription(This,Val) \
    ((This)->lpVtbl->SetDescription(This,Val))
#define IBackgroundCopyJob3_GetDescription(This,pVal) \
    ((This)->lpVtbl->GetDescription(This,pVal))
#define IBackgroundCopyJob3_SetPriority(This,Val) \
    ((This)->lpVtbl->SetPriority(This,Val))
#define IBackgroundCopyJob3_GetPriority(This,pVal) \
    ((This)->lpVtbl->GetPriority(This,pVal))
#define IBackgroundCopyJob3_SetNotifyFlags(This,Val) \
    ((This)->lpVtbl->SetNotifyFlags(This,Val))
#define IBackgroundCopyJob3_GetNotifyFlags(This,pVal) \
    ((This)->lpVtbl->GetNotifyFlags(This,pVal))
#define IBackgroundCopyJob3_SetNotifyInterface(This,Val) \
    ((This)->lpVtbl->SetNotifyInterface(This,Val))
#define IBackgroundCopyJob3_GetNotifyInterface(This,pVal) \
    ((This)->lpVtbl->GetNotifyInterface(This,pVal))
#define IBackgroundCopyJob3_SetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->SetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob3_GetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->GetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob3_SetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->SetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob3_GetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->GetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob3_GetErrorCount(This,Errors) \
    ((This)->lpVtbl->GetErrorCount(This,Errors))
#define IBackgroundCopyJob3_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) \
    ((This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList))
#define IBackgroundCopyJob3_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) \
    ((This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList))
#define IBackgroundCopyJob3_TakeOwnership(This) \
    ((This)->lpVtbl->TakeOwnership(This))
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob3_SetNotifyCmdLine(This,Program,Parameters) \
    ((This)->lpVtbl->SetNotifyCmdLine(This,Program,Parameters))
#define IBackgroundCopyJob3_GetNotifyCmdLine(This,pProgram,pParameters) \
    ((This)->lpVtbl->GetNotifyCmdLine(This,pProgram,pParameters))
#define IBackgroundCopyJob3_GetReplyProgress(This,pProgress) \
    ((This)->lpVtbl->GetReplyProgress(This,pProgress))
#define IBackgroundCopyJob3_GetReplyData(This,ppBuffer,pLength) \
    ((This)->lpVtbl->GetReplyData(This,ppBuffer,pLength))
#define IBackgroundCopyJob3_SetReplyFileName(This,ReplyFileName) \
    ((This)->lpVtbl->SetReplyFileName(This,ReplyFileName))
#define IBackgroundCopyJob3_GetReplyFileName(This,pReplyFileName) \
    ((This)->lpVtbl->GetReplyFileName(This,pReplyFileName))
#define IBackgroundCopyJob3_SetCredentials(This,credentials) \
    ((This)->lpVtbl->SetCredentials(This,credentials))
#define IBackgroundCopyJob3_RemoveCredentials(This,Target,Scheme) \
    ((This)->lpVtbl->RemoveCredentials(This,Target,Scheme))
/*** IBackgroundCopyJob3 methods ***/
#define IBackgroundCopyJob3_ReplaceRemotePrefix(This,OldPrefix,NewPrefix) \
    ((This)->lpVtbl->ReplaceRemotePrefix(This,OldPrefix,NewPrefix))
#define IBackgroundCopyJob3_AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) \
    ((This)->lpVtbl->AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges))
#define IBackgroundCopyJob3_SetFileACLFlags(This,Flags) \
    ((This)->lpVtbl->SetFileACLFlags(This,Flags))
#define IBackgroundCopyJob3_GetFileACLFlags(This,Flags) \
    ((This)->lpVtbl->GetFileACLFlags(This,Flags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJob3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBackgroundCopyFile2 interface
 */
#ifndef __IBackgroundCopyFile2_INTERFACE_DEFINED__
#define __IBackgroundCopyFile2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBackgroundCopyFile2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyFile2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyFile2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyFile2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyFile2 *This);

    /*** IBackgroundCopyFile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteName)(
        IBackgroundCopyFile2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IBackgroundCopyFile2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyFile2 *This,
        BG_FILE_PROGRESS *pVal);

    /*** IBackgroundCopyFile2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFileRanges)(
        IBackgroundCopyFile2 *This,
        DWORD *RangeCount,
        BG_FILE_RANGE **Ranges);

    HRESULT (STDMETHODCALLTYPE *SetRemoteName)(
        IBackgroundCopyFile2 *This,
        LPCWSTR Val);

    END_INTERFACE
} IBackgroundCopyFile2Vtbl;

interface IBackgroundCopyFile2 {
    CONST_VTBL IBackgroundCopyFile2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyFile2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyFile2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyFile2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyFile methods ***/
#define IBackgroundCopyFile2_GetRemoteName(This,pVal) \
    ((This)->lpVtbl->GetRemoteName(This,pVal))
#define IBackgroundCopyFile2_GetLocalName(This,pVal) \
    ((This)->lpVtbl->GetLocalName(This,pVal))
#define IBackgroundCopyFile2_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
/*** IBackgroundCopyFile2 methods ***/
#define IBackgroundCopyFile2_GetFileRanges(This,RangeCount,Ranges) \
    ((This)->lpVtbl->GetFileRanges(This,RangeCount,Ranges))
#define IBackgroundCopyFile2_SetRemoteName(This,Val) \
    ((This)->lpVtbl->SetRemoteName(This,Val))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyFile2_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager2_0_LIBRARY_DEFINED__
#define __BackgroundCopyManager2_0_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager2_0 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager2_0;


#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#endif /* __IBackgroundCopyCallback_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob3_FWD_DEFINED__
#define __IBackgroundCopyJob3_FWD_DEFINED__
typedef interface IBackgroundCopyJob3 IBackgroundCopyJob3;
#endif /* __IBackgroundCopyJob3_FWD_DEFINED__ */


#ifndef __IBackgroundCopyFile2_FWD_DEFINED__
#define __IBackgroundCopyFile2_FWD_DEFINED__
typedef interface IBackgroundCopyFile2 IBackgroundCopyFile2;
#endif /* __IBackgroundCopyFile2_FWD_DEFINED__ */
#endif /* __BackgroundCopyManager2_0_LIBRARY_DEFINED__ */

#include "bits2_5.h"

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

#endif /* __bits2_0_h__ */
