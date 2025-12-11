
/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 501
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /* COM_NO_WINDOWS_H */

#ifndef __amsi_h__
#define __amsi_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward Declarations */

#ifndef __IAmsiStream_FWD_DEFINED__
#define __IAmsiStream_FWD_DEFINED__
typedef interface IAmsiStream IAmsiStream;
#endif  /* __IAmsiStream_FWD_DEFINED__ */

#ifndef __IAntimalwareProvider_FWD_DEFINED__
#define __IAntimalwareProvider_FWD_DEFINED__
typedef interface IAntimalwareProvider IAntimalwareProvider;
#endif  /* __IAntimalwareProvider_FWD_DEFINED__ */

#ifndef __IAntimalwareUacProvider_FWD_DEFINED__
#define __IAntimalwareUacProvider_FWD_DEFINED__
typedef interface IAntimalwareUacProvider IAntimalwareUacProvider;
#endif  /* __IAntimalwareUacProvider_FWD_DEFINED__ */

#ifndef __IAntimalwareProvider2_FWD_DEFINED__
#define __IAntimalwareProvider2_FWD_DEFINED__
typedef interface IAntimalwareProvider2 IAntimalwareProvider2;
#endif  /* __IAntimalwareProvider2_FWD_DEFINED__ */

#ifndef __IAntimalware_FWD_DEFINED__
#define __IAntimalware_FWD_DEFINED__
typedef interface IAntimalware IAntimalware;
#endif  /* __IAntimalware_FWD_DEFINED__ */

#ifndef __IAntimalware2_FWD_DEFINED__
#define __IAntimalware2_FWD_DEFINED__
typedef interface IAntimalware2 IAntimalware2;
#endif  /* __IAntimalware2_FWD_DEFINED__ */

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum AMSI_RESULT {
    AMSI_RESULT_CLEAN = 0,
    AMSI_RESULT_NOT_DETECTED = 1,
    AMSI_RESULT_BLOCKED_BY_ADMIN_START = 0x4000,
    AMSI_RESULT_BLOCKED_BY_ADMIN_END = 0x4fff,
    AMSI_RESULT_DETECTED = 32768
} AMSI_RESULT;

#define AmsiResultIsMalware(r)  ((r) >= AMSI_RESULT_DETECTED)
#define AmsiResultIsBlockedByAdmin(r)  ((r) >= AMSI_RESULT_BLOCKED_BY_ADMIN_START) && (r) <= AMSI_RESULT_BLOCKED_BY_ADMIN_END

typedef enum AMSI_ATTRIBUTE {
    AMSI_ATTRIBUTE_APP_NAME = 0,
    AMSI_ATTRIBUTE_CONTENT_NAME = 1,
    AMSI_ATTRIBUTE_CONTENT_SIZE = 2,
    AMSI_ATTRIBUTE_CONTENT_ADDRESS = 3,
    AMSI_ATTRIBUTE_SESSION = 4,
    AMSI_ATTRIBUTE_REDIRECT_CHAIN_SIZE = 5,
    AMSI_ATTRIBUTE_REDIRECT_CHAIN_ADDRESS = 6,
    AMSI_ATTRIBUTE_ALL_SIZE = 7,
    AMSI_ATTRIBUTE_ALL_ADDRESS = 8,
    AMSI_ATTRIBUTE_QUIET = 9
} AMSI_ATTRIBUTE;

typedef enum AMSI_UAC_REQUEST_TYPE {
    AMSI_UAC_REQUEST_TYPE_EXE = 0,
    AMSI_UAC_REQUEST_TYPE_COM = 1,
    AMSI_UAC_REQUEST_TYPE_MSI = 2,
    AMSI_UAC_REQUEST_TYPE_AX = 3,
    AMSI_UAC_REQUEST_TYPE_PACKAGED_APP = 4,
    AMSI_UAC_REQUEST_TYPE_MAX = 5
} AMSI_UAC_REQUEST_TYPE;

typedef enum AMSI_UAC_TRUST_STATE {
    AMSI_UAC_TRUST_STATE_TRUSTED = 0,
    AMSI_UAC_TRUST_STATE_UNTRUSTED = 1,
    AMSI_UAC_TRUST_STATE_BLOCKED = 2,
    AMSI_UAC_TRUST_STATE_MAX = 3
} AMSI_UAC_TRUST_STATE;

typedef enum AMSI_UAC_MSI_ACTION {
    AMSI_UAC_MSI_ACTION_INSTALL = 0,
    AMSI_UAC_MSI_ACTION_UNINSTALL = 1,
    AMSI_UAC_MSI_ACTION_UPDATE = 2,
    AMSI_UAC_MSI_ACTION_MAINTENANCE = 3,
    AMSI_UAC_MSI_ACTION_MAX = 4
} AMSI_UAC_MSI_ACTION;

typedef struct AMSI_UAC_REQUEST_EXE_INFO {
    ULONG ulLength;
    LPWSTR lpwszApplicationName;
    LPWSTR lpwszCommandLine;
    LPWSTR lpwszDLLParameter;
} AMSI_UAC_REQUEST_EXE_INFO;

typedef struct AMSI_UAC_REQUEST_EXE_INFO *LPAMSI_UAC_REQUEST_EXE_INFO;

typedef struct AMSI_UAC_REQUEST_COM_INFO {
    ULONG ulLength;
    LPWSTR lpwszServerBinary;
    LPWSTR lpwszRequestor;
    GUID Clsid;
} AMSI_UAC_REQUEST_COM_INFO;

typedef struct AMSI_UAC_REQUEST_COM_INFO *LPAMSI_UAC_REQUEST_COM_INFO;

typedef struct AMSI_UAC_REQUEST_MSI_INFO {
    ULONG ulLength;
    AMSI_UAC_MSI_ACTION MsiAction;
    LPWSTR lpwszProductName;
    LPWSTR lpwszVersion;
    LPWSTR lpwszLanguage;
    LPWSTR lpwszManufacturer;
    LPWSTR lpwszPackagePath;
    LPWSTR lpwszPackageSource;
    ULONG ulUpdates;
    LPWSTR *ppwszUpdates;
    LPWSTR *ppwszUpdateSources;
} AMSI_UAC_REQUEST_MSI_INFO;

typedef struct AMSI_UAC_REQUEST_MSI_INFO *LPAMSI_UAC_REQUEST_MSI_INFO;

typedef struct AMSI_UAC_REQUEST_AX_INFO {
    ULONG ulLength;
    LPWSTR lpwszLocalInstallPath;
    LPWSTR lpwszSourceURL;
} AMSI_UAC_REQUEST_AX_INFO;

typedef struct AMSI_UAC_REQUEST_AX_INFO *LPAMSI_UAC_REQUEST_AX_INFO;

typedef struct AMSI_UAC_REQUEST_PACKAGED_APP_INFO {
    ULONG ulLength;
    LPWSTR lpwszApplicationName;
    LPWSTR lpwszCommandLine;
    LPWSTR lpPackageFamilyName;
    LPWSTR lpApplicationId;
} AMSI_UAC_REQUEST_PACKAGED_APP_INFO;

typedef struct AMSI_UAC_REQUEST_PACKAGED_APP_INFO *LPAMSI_UAC_REQUEST_PACKAGED_APP_INFO;

typedef struct AMSI_UAC_REQUEST_CONTEXT {
    ULONG ulLength;
    ULONG ulRequestorProcessId;
    AMSI_UAC_TRUST_STATE UACTrustState;
    AMSI_UAC_REQUEST_TYPE Type;
    union {
        AMSI_UAC_REQUEST_EXE_INFO ExeInfo;
        AMSI_UAC_REQUEST_COM_INFO ComInfo;
        AMSI_UAC_REQUEST_MSI_INFO MsiInfo;
        AMSI_UAC_REQUEST_AX_INFO ActiveXInfo;
        AMSI_UAC_REQUEST_PACKAGED_APP_INFO PackagedAppInfo;
    } RequestType;
    BOOL bAutoElevateRequest;
} AMSI_UAC_REQUEST_CONTEXT;

typedef struct AMSI_UAC_REQUEST_CONTEXT *LPAMSI_UAC_REQUEST_CONTEXT;

extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0000_v0_0_s_ifspec;

#ifndef __IAmsiStream_INTERFACE_DEFINED__
#define __IAmsiStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAmsiStream;

typedef struct IAmsiStreamVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        IAmsiStream * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        IAmsiStream * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        IAmsiStream * This);

    HRESULT (STDMETHODCALLTYPE *GetAttribute )(
        IAmsiStream * This,
        AMSI_ATTRIBUTE attribute,
        ULONG dataSize,
        unsigned char *data,
        ULONG *retData);

    HRESULT (STDMETHODCALLTYPE *Read )(
        IAmsiStream * This,
        ULONGLONG position,
        ULONG size,
        unsigned char *buffer,
        ULONG *readSize);

    END_INTERFACE
} IAmsiStreamVtbl;

interface IAmsiStream {
    CONST_VTBL struct IAmsiStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define IAmsiStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define IAmsiStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define IAmsiStream_Release(This) \
    ((This)->lpVtbl->Release(This))

#define IAmsiStream_GetAttribute(This,attribute,dataSize,data,retData) \
    ((This)->lpVtbl->GetAttribute(This,attribute,dataSize,data,retData))

#define IAmsiStream_Read(This,position,size,buffer,readSize) \
    ((This)->lpVtbl->Read(This,position,size,buffer,readSize))

#endif /* COBJMACROS */

#endif /* __IAmsiStream_INTERFACE_DEFINED__ */

#ifndef __IAntimalwareProvider_INTERFACE_DEFINED__
#define __IAntimalwareProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAntimalwareProvider;

typedef struct IAntimalwareProviderVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        IAntimalwareProvider * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        IAntimalwareProvider * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        IAntimalwareProvider * This);

    HRESULT (STDMETHODCALLTYPE *Scan )(
        IAntimalwareProvider * This,
        IAmsiStream *stream,
        AMSI_RESULT *result);

    void (STDMETHODCALLTYPE *CloseSession )(
        IAntimalwareProvider * This,
        ULONGLONG session);

    HRESULT (STDMETHODCALLTYPE *DisplayName )(
        IAntimalwareProvider * This,

        LPWSTR *displayName);

    END_INTERFACE
} IAntimalwareProviderVtbl;

interface IAntimalwareProvider {
    CONST_VTBL struct IAntimalwareProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define IAntimalwareProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define IAntimalwareProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define IAntimalwareProvider_Release(This) \
    ((This)->lpVtbl->Release(This))

#define IAntimalwareProvider_Scan(This,stream,result) \
    ((This)->lpVtbl->Scan(This,stream,result))

#define IAntimalwareProvider_CloseSession(This,session) \
    ((This)->lpVtbl->CloseSession(This,session))

#define IAntimalwareProvider_DisplayName(This,displayName) \
    ((This)->lpVtbl->DisplayName(This,displayName))

#endif /* COBJMACROS */

#endif /* __IAntimalwareProvider_INTERFACE_DEFINED__ */

#ifndef __IAntimalwareUacProvider_INTERFACE_DEFINED__
#define __IAntimalwareUacProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAntimalwareUacProvider;

typedef struct IAntimalwareUacProviderVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        IAntimalwareUacProvider * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        IAntimalwareUacProvider * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        IAntimalwareUacProvider * This);

    HRESULT (STDMETHODCALLTYPE *UacScan )(
        IAntimalwareUacProvider * This,
        LPAMSI_UAC_REQUEST_CONTEXT context,
        AMSI_RESULT *result);

    HRESULT (STDMETHODCALLTYPE *DisplayName )(
        IAntimalwareUacProvider * This,
        LPWSTR *displayName);

    END_INTERFACE
} IAntimalwareUacProviderVtbl;

interface IAntimalwareUacProvider {
    CONST_VTBL struct IAntimalwareUacProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define IAntimalwareUacProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define IAntimalwareUacProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define IAntimalwareUacProvider_Release(This) \
    ((This)->lpVtbl->Release(This))

#define IAntimalwareUacProvider_UacScan(This,context,result) \
    ((This)->lpVtbl->UacScan(This,context,result))

#define IAntimalwareUacProvider_DisplayName(This,displayName) \
    ((This)->lpVtbl->DisplayName(This,displayName))

#endif /* COBJMACROS */

#endif /* __IAntimalwareUacProvider_INTERFACE_DEFINED__ */

#ifndef __IAntimalwareProvider2_INTERFACE_DEFINED__
#define __IAntimalwareProvider2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAntimalwareProvider2;

typedef struct IAntimalwareProvider2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        IAntimalwareProvider2 * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        IAntimalwareProvider2 * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        IAntimalwareProvider2 * This);

    HRESULT (STDMETHODCALLTYPE *Scan )(
        IAntimalwareProvider2 * This,
        IAmsiStream *stream,
        AMSI_RESULT *result);

    void (STDMETHODCALLTYPE *CloseSession )(
        IAntimalwareProvider2 * This,
        ULONGLONG session);

    HRESULT (STDMETHODCALLTYPE *DisplayName )(
        IAntimalwareProvider2 * This,
        LPWSTR *displayName);

    HRESULT (STDMETHODCALLTYPE *Notify )(
        IAntimalwareProvider2 * This,
        PVOID buffer,
        ULONG length,
        LPCWSTR contentName,
        LPCWSTR appName,
        AMSI_RESULT *pResult);

    END_INTERFACE
} IAntimalwareProvider2Vtbl;

interface IAntimalwareProvider2 {
    CONST_VTBL struct IAntimalwareProvider2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define IAntimalwareProvider2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define IAntimalwareProvider2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define IAntimalwareProvider2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define IAntimalwareProvider2_Scan(This,stream,result) \
    ((This)->lpVtbl->Scan(This,stream,result))

#define IAntimalwareProvider2_CloseSession(This,session) \
    ((This)->lpVtbl->CloseSession(This,session))

#define IAntimalwareProvider2_DisplayName(This,displayName) \
    ((This)->lpVtbl->DisplayName(This,displayName))

#define IAntimalwareProvider2_Notify(This,buffer,length,contentName,appName,pResult) \
    ((This)->lpVtbl->Notify(This,buffer,length,contentName,appName,pResult))

#endif /* COBJMACROS */

#endif /* __IAntimalwareProvider2_INTERFACE_DEFINED__ */

#ifndef __IAntimalware_INTERFACE_DEFINED__
#define __IAntimalware_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAntimalware;

typedef struct IAntimalwareVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        IAntimalware * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        IAntimalware * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        IAntimalware * This);

    HRESULT (STDMETHODCALLTYPE *Scan )(
        IAntimalware * This,
        IAmsiStream *stream,
        AMSI_RESULT *result,
        IAntimalwareProvider * *provider);

    void (STDMETHODCALLTYPE *CloseSession )(
        IAntimalware * This,
        ULONGLONG session);

    END_INTERFACE
} IAntimalwareVtbl;

interface IAntimalware {
    CONST_VTBL struct IAntimalwareVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define IAntimalware_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define IAntimalware_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define IAntimalware_Release(This) \
    ((This)->lpVtbl->Release(This))

#define IAntimalware_Scan(This,stream,result,provider) \
    ((This)->lpVtbl->Scan(This,stream,result,provider))

#define IAntimalware_CloseSession(This,session) \
    ((This)->lpVtbl->CloseSession(This,session))

#endif /* COBJMACROS */

#endif /* __IAntimalware_INTERFACE_DEFINED__ */

#ifndef __IAntimalware2_INTERFACE_DEFINED__
#define __IAntimalware2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAntimalware2;

typedef struct IAntimalware2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        IAntimalware2 * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        IAntimalware2 * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        IAntimalware2 * This);

    HRESULT (STDMETHODCALLTYPE *Scan )(
        IAntimalware2 * This,
        IAmsiStream *stream,
        AMSI_RESULT *result,
        IAntimalwareProvider * *provider);

    void (STDMETHODCALLTYPE *CloseSession )(
        IAntimalware2 * This,
        ULONGLONG session);

    HRESULT (STDMETHODCALLTYPE *Notify )(
        IAntimalware2 * This,
        PVOID buffer,
        ULONG length,
        LPCWSTR contentName,
        LPCWSTR appName,
        AMSI_RESULT *pResult);

    END_INTERFACE
} IAntimalware2Vtbl;

interface IAntimalware2 {
    CONST_VTBL struct IAntimalware2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define IAntimalware2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define IAntimalware2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define IAntimalware2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define IAntimalware2_Scan(This,stream,result,provider) \
    ((This)->lpVtbl->Scan(This,stream,result,provider))

#define IAntimalware2_CloseSession(This,session) \
    ((This)->lpVtbl->CloseSession(This,session))

#define IAntimalware2_Notify(This,buffer,length,contentName,appName,pResult) \
    ((This)->lpVtbl->Notify(This,buffer,length,contentName,appName,pResult))

#endif /* COBJMACROS */

#endif /* C style interface */

EXTERN_C const CLSID CLSID_Antimalware;

DECLARE_HANDLE(HAMSICONTEXT);
DECLARE_HANDLE(HAMSISESSION);

STDAPI AmsiInitialize(LPCWSTR appName, HAMSICONTEXT *amsiContext);
STDAPI_(VOID) AmsiUninitialize(HAMSICONTEXT amsiContext);

STDAPI AmsiOpenSession(HAMSICONTEXT amsiContext, HAMSISESSION * amsiSession);
STDAPI_(VOID) AmsiCloseSession(HAMSICONTEXT amsiContext, HAMSISESSION amsiSession);

STDAPI AmsiScanBuffer(
    HAMSICONTEXT amsiContext,
    PVOID buffer,
    ULONG length,
    LPCWSTR contentName,
    HAMSISESSION amsiSession,
    AMSI_RESULT * result);

STDAPI AmsiNotifyOperation(
    HAMSICONTEXT amsiContext,
    PVOID buffer,
    ULONG length,
    LPCWSTR contentName,
    AMSI_RESULT * result);

STDAPI AmsiScanString(
    HAMSICONTEXT amsiContext,
    LPCWSTR string,
    LPCWSTR contentName,
    HAMSISESSION amsiSession,
    AMSI_RESULT * result);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amsi_0000_0006_v0_0_s_ifspec;

#endif /* __amsi_h__ */
