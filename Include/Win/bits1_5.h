/* Generated from bits1_5.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __bits1_5_h__
#define __bits1_5_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IBackgroundCopyJob2_FWD_DEFINED__
#define __IBackgroundCopyJob2_FWD_DEFINED__
typedef interface IBackgroundCopyJob2 IBackgroundCopyJob2;
#endif /* __IBackgroundCopyJob2_FWD_DEFINED__ */

#ifndef __BackgroundCopyManager1_5_FWD_DEFINED__
#define __BackgroundCopyManager1_5_FWD_DEFINED__
typedef struct BackgroundCopyManager1_5 BackgroundCopyManager1_5;
#endif /* __BackgroundCopyManager1_5_FWD_DEFINED__ */

/* Headers for imported files */

#include "bits.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IBackgroundCopyJob2 interface
 */
#ifndef __IBackgroundCopyJob2_INTERFACE_DEFINED__
#define __IBackgroundCopyJob2_INTERFACE_DEFINED__

typedef struct _BG_JOB_REPLY_PROGRESS {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
} BG_JOB_REPLY_PROGRESS;

typedef enum BG_AUTH_TARGET {
    BG_AUTH_TARGET_SERVER = 1,
    BG_AUTH_TARGET_PROXY = 2
} BG_AUTH_TARGET;

typedef enum BG_AUTH_SCHEME {
    BG_AUTH_SCHEME_BASIC = 1,
    BG_AUTH_SCHEME_DIGEST = 2,
    BG_AUTH_SCHEME_NTLM = 3,
    BG_AUTH_SCHEME_NEGOTIATE = 4,
    BG_AUTH_SCHEME_PASSPORT = 5
} BG_AUTH_SCHEME;

typedef struct __POIDL_bits1_5_tag_00000002 {
    LPWSTR UserName;
    LPWSTR Password;
} BG_BASIC_CREDENTIALS;

typedef BG_BASIC_CREDENTIALS *PBG_BASIC_CREDENTIALS;

typedef union __POIDL_bits1_5_tag_00000003 {
    BG_BASIC_CREDENTIALS Basic;
} BG_AUTH_CREDENTIALS_UNION;

typedef struct __POIDL_bits1_5_tag_00000004 {
    BG_AUTH_TARGET Target;
    BG_AUTH_SCHEME Scheme;
    BG_AUTH_CREDENTIALS_UNION Credentials;
} BG_AUTH_CREDENTIALS;

typedef BG_AUTH_CREDENTIALS *PBG_AUTH_CREDENTIALS;

EXTERN_C const IID IID_IBackgroundCopyJob2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBackgroundCopyJob2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyJob2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyJob2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyJob2 *This);

    /*** IBackgroundCopyJob methods ***/
    HRESULT (STDMETHODCALLTYPE *AddFileSet)(
        IBackgroundCopyJob2 *This,
        ULONG cFileCount,
        BG_FILE_INFO *pFileSet);

    HRESULT (STDMETHODCALLTYPE *AddFile)(
        IBackgroundCopyJob2 *This,
        LPCWSTR RemoteUrl,
        LPCWSTR LocalName);

    HRESULT (STDMETHODCALLTYPE *EnumFiles)(
        IBackgroundCopyJob2 *This,
        IEnumBackgroundCopyFiles **pEnum);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *Complete)(
        IBackgroundCopyJob2 *This);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IBackgroundCopyJob2 *This,
        GUID *pVal);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IBackgroundCopyJob2 *This,
        BG_JOB_TYPE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PROGRESS *pVal);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IBackgroundCopyJob2 *This,
        BG_JOB_TIMES *pVal);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IBackgroundCopyJob2 *This,
        BG_JOB_STATE *pVal);

    HRESULT (STDMETHODCALLTYPE *GetError)(
        IBackgroundCopyJob2 *This,
        IBackgroundCopyError **ppError);

    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IBackgroundCopyJob2 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IBackgroundCopyJob2 *This,
        LPCWSTR Val);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pVal);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PRIORITY Val);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PRIORITY *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyFlags)(
        IBackgroundCopyJob2 *This,
        ULONG Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyFlags)(
        IBackgroundCopyJob2 *This,
        ULONG *pVal);

    HRESULT (STDMETHODCALLTYPE *SetNotifyInterface)(
        IBackgroundCopyJob2 *This,
        IUnknown *Val);

    HRESULT (STDMETHODCALLTYPE *GetNotifyInterface)(
        IBackgroundCopyJob2 *This,
        IUnknown **pVal);

    HRESULT (STDMETHODCALLTYPE *SetMinimumRetryDelay)(
        IBackgroundCopyJob2 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetMinimumRetryDelay)(
        IBackgroundCopyJob2 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *SetNoProgressTimeout)(
        IBackgroundCopyJob2 *This,
        ULONG Seconds);

    HRESULT (STDMETHODCALLTYPE *GetNoProgressTimeout)(
        IBackgroundCopyJob2 *This,
        ULONG *Seconds);

    HRESULT (STDMETHODCALLTYPE *GetErrorCount)(
        IBackgroundCopyJob2 *This,
        ULONG *Errors);

    HRESULT (STDMETHODCALLTYPE *SetProxySettings)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PROXY_USAGE ProxyUsage,
        const WCHAR *ProxyList,
        const WCHAR *ProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *GetProxySettings)(
        IBackgroundCopyJob2 *This,
        BG_JOB_PROXY_USAGE *pProxyUsage,
        LPWSTR *pProxyList,
        LPWSTR *pProxyBypassList);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IBackgroundCopyJob2 *This);

    /*** IBackgroundCopyJob2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifyCmdLine)(
        IBackgroundCopyJob2 *This,
        LPCWSTR Program,
        LPCWSTR Parameters);

    HRESULT (STDMETHODCALLTYPE *GetNotifyCmdLine)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pProgram,
        LPWSTR *pParameters);

    HRESULT (STDMETHODCALLTYPE *GetReplyProgress)(
        IBackgroundCopyJob2 *This,
        BG_JOB_REPLY_PROGRESS *pProgress);

    HRESULT (STDMETHODCALLTYPE *GetReplyData)(
        IBackgroundCopyJob2 *This,
        byte **ppBuffer,
        UINT64 *pLength);

    HRESULT (STDMETHODCALLTYPE *SetReplyFileName)(
        IBackgroundCopyJob2 *This,
        LPCWSTR ReplyFileName);

    HRESULT (STDMETHODCALLTYPE *GetReplyFileName)(
        IBackgroundCopyJob2 *This,
        LPWSTR *pReplyFileName);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IBackgroundCopyJob2 *This,
        BG_AUTH_CREDENTIALS *credentials);

    HRESULT (STDMETHODCALLTYPE *RemoveCredentials)(
        IBackgroundCopyJob2 *This,
        BG_AUTH_TARGET Target,
        BG_AUTH_SCHEME Scheme);

    END_INTERFACE
} IBackgroundCopyJob2Vtbl;

interface IBackgroundCopyJob2 {
    CONST_VTBL IBackgroundCopyJob2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBackgroundCopyJob2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBackgroundCopyJob2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBackgroundCopyJob2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBackgroundCopyJob methods ***/
#define IBackgroundCopyJob2_AddFileSet(This,cFileCount,pFileSet) \
    ((This)->lpVtbl->AddFileSet(This,cFileCount,pFileSet))
#define IBackgroundCopyJob2_AddFile(This,RemoteUrl,LocalName) \
    ((This)->lpVtbl->AddFile(This,RemoteUrl,LocalName))
#define IBackgroundCopyJob2_EnumFiles(This,pEnum) \
    ((This)->lpVtbl->EnumFiles(This,pEnum))
#define IBackgroundCopyJob2_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IBackgroundCopyJob2_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IBackgroundCopyJob2_Cancel(This) \
    ((This)->lpVtbl->Cancel(This))
#define IBackgroundCopyJob2_Complete(This) \
    ((This)->lpVtbl->Complete(This))
#define IBackgroundCopyJob2_GetId(This,pVal) \
    ((This)->lpVtbl->GetId(This,pVal))
#define IBackgroundCopyJob2_GetType(This,pVal) \
    ((This)->lpVtbl->GetType(This,pVal))
#define IBackgroundCopyJob2_GetProgress(This,pVal) \
    ((This)->lpVtbl->GetProgress(This,pVal))
#define IBackgroundCopyJob2_GetTimes(This,pVal) \
    ((This)->lpVtbl->GetTimes(This,pVal))
#define IBackgroundCopyJob2_GetState(This,pVal) \
    ((This)->lpVtbl->GetState(This,pVal))
#define IBackgroundCopyJob2_GetError(This,ppError) \
    ((This)->lpVtbl->GetError(This,ppError))
#define IBackgroundCopyJob2_GetOwner(This,pVal) \
    ((This)->lpVtbl->GetOwner(This,pVal))
#define IBackgroundCopyJob2_SetDisplayName(This,Val) \
    ((This)->lpVtbl->SetDisplayName(This,Val))
#define IBackgroundCopyJob2_GetDisplayName(This,pVal) \
    ((This)->lpVtbl->GetDisplayName(This,pVal))
#define IBackgroundCopyJob2_SetDescription(This,Val) \
    ((This)->lpVtbl->SetDescription(This,Val))
#define IBackgroundCopyJob2_GetDescription(This,pVal) \
    ((This)->lpVtbl->GetDescription(This,pVal))
#define IBackgroundCopyJob2_SetPriority(This,Val) \
    ((This)->lpVtbl->SetPriority(This,Val))
#define IBackgroundCopyJob2_GetPriority(This,pVal) \
    ((This)->lpVtbl->GetPriority(This,pVal))
#define IBackgroundCopyJob2_SetNotifyFlags(This,Val) \
    ((This)->lpVtbl->SetNotifyFlags(This,Val))
#define IBackgroundCopyJob2_GetNotifyFlags(This,pVal) \
    ((This)->lpVtbl->GetNotifyFlags(This,pVal))
#define IBackgroundCopyJob2_SetNotifyInterface(This,Val) \
    ((This)->lpVtbl->SetNotifyInterface(This,Val))
#define IBackgroundCopyJob2_GetNotifyInterface(This,pVal) \
    ((This)->lpVtbl->GetNotifyInterface(This,pVal))
#define IBackgroundCopyJob2_SetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->SetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob2_GetMinimumRetryDelay(This,Seconds) \
    ((This)->lpVtbl->GetMinimumRetryDelay(This,Seconds))
#define IBackgroundCopyJob2_SetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->SetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob2_GetNoProgressTimeout(This,Seconds) \
    ((This)->lpVtbl->GetNoProgressTimeout(This,Seconds))
#define IBackgroundCopyJob2_GetErrorCount(This,Errors) \
    ((This)->lpVtbl->GetErrorCount(This,Errors))
#define IBackgroundCopyJob2_SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) \
    ((This)->lpVtbl->SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList))
#define IBackgroundCopyJob2_GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) \
    ((This)->lpVtbl->GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList))
#define IBackgroundCopyJob2_TakeOwnership(This) \
    ((This)->lpVtbl->TakeOwnership(This))
/*** IBackgroundCopyJob2 methods ***/
#define IBackgroundCopyJob2_SetNotifyCmdLine(This,Program,Parameters) \
    ((This)->lpVtbl->SetNotifyCmdLine(This,Program,Parameters))
#define IBackgroundCopyJob2_GetNotifyCmdLine(This,pProgram,pParameters) \
    ((This)->lpVtbl->GetNotifyCmdLine(This,pProgram,pParameters))
#define IBackgroundCopyJob2_GetReplyProgress(This,pProgress) \
    ((This)->lpVtbl->GetReplyProgress(This,pProgress))
#define IBackgroundCopyJob2_GetReplyData(This,ppBuffer,pLength) \
    ((This)->lpVtbl->GetReplyData(This,ppBuffer,pLength))
#define IBackgroundCopyJob2_SetReplyFileName(This,ReplyFileName) \
    ((This)->lpVtbl->SetReplyFileName(This,ReplyFileName))
#define IBackgroundCopyJob2_GetReplyFileName(This,pReplyFileName) \
    ((This)->lpVtbl->GetReplyFileName(This,pReplyFileName))
#define IBackgroundCopyJob2_SetCredentials(This,credentials) \
    ((This)->lpVtbl->SetCredentials(This,credentials))
#define IBackgroundCopyJob2_RemoveCredentials(This,Target,Scheme) \
    ((This)->lpVtbl->RemoveCredentials(This,Target,Scheme))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBackgroundCopyJob2_INTERFACE_DEFINED__ */

#ifndef __BackgroundCopyManager1_5_LIBRARY_DEFINED__
#define __BackgroundCopyManager1_5_LIBRARY_DEFINED__


/*****************************************************************************
 * BackgroundCopyManager1_5 coclass
 */

EXTERN_C const CLSID CLSID_BackgroundCopyManager1_5;


#ifndef __IBackgroundCopyCallback_FWD_DEFINED__
#define __IBackgroundCopyCallback_FWD_DEFINED__
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
#endif /* __IBackgroundCopyCallback_FWD_DEFINED__ */


#ifndef __IBackgroundCopyJob2_FWD_DEFINED__
#define __IBackgroundCopyJob2_FWD_DEFINED__
typedef interface IBackgroundCopyJob2 IBackgroundCopyJob2;
#endif /* __IBackgroundCopyJob2_FWD_DEFINED__ */
#endif /* __BackgroundCopyManager1_5_LIBRARY_DEFINED__ */

#include "bits2_0.h"

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

#endif /* __bits1_5_h__ */
