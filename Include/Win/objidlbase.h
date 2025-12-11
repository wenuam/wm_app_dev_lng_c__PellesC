/* Generated from objidlbase.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __objidlbase_h__
#define __objidlbase_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IMarshal_FWD_DEFINED__
#define __IMarshal_FWD_DEFINED__
typedef interface IMarshal IMarshal;
#endif /* __IMarshal_FWD_DEFINED__ */

#ifndef __INoMarshal_FWD_DEFINED__
#define __INoMarshal_FWD_DEFINED__
typedef interface INoMarshal INoMarshal;
#endif /* __INoMarshal_FWD_DEFINED__ */

#ifndef __IAgileObject_FWD_DEFINED__
#define __IAgileObject_FWD_DEFINED__
typedef interface IAgileObject IAgileObject;
#endif /* __IAgileObject_FWD_DEFINED__ */

#ifndef __IActivationFilter_FWD_DEFINED__
#define __IActivationFilter_FWD_DEFINED__
typedef interface IActivationFilter IActivationFilter;
#endif /* __IActivationFilter_FWD_DEFINED__ */

#ifndef __IMarshal2_FWD_DEFINED__
#define __IMarshal2_FWD_DEFINED__
typedef interface IMarshal2 IMarshal2;
#endif /* __IMarshal2_FWD_DEFINED__ */

#ifndef __IMalloc_FWD_DEFINED__
#define __IMalloc_FWD_DEFINED__
typedef interface IMalloc IMalloc;
#endif /* __IMalloc_FWD_DEFINED__ */

#ifndef __IStdMarshalInfo_FWD_DEFINED__
#define __IStdMarshalInfo_FWD_DEFINED__
typedef interface IStdMarshalInfo IStdMarshalInfo;
#endif /* __IStdMarshalInfo_FWD_DEFINED__ */

#ifndef __IExternalConnection_FWD_DEFINED__
#define __IExternalConnection_FWD_DEFINED__
typedef interface IExternalConnection IExternalConnection;
#endif /* __IExternalConnection_FWD_DEFINED__ */

#ifndef __IMultiQI_FWD_DEFINED__
#define __IMultiQI_FWD_DEFINED__
typedef interface IMultiQI IMultiQI;
#endif /* __IMultiQI_FWD_DEFINED__ */

#ifndef __AsyncIMultiQI_FWD_DEFINED__
#define __AsyncIMultiQI_FWD_DEFINED__
typedef interface AsyncIMultiQI AsyncIMultiQI;
#endif /* __AsyncIMultiQI_FWD_DEFINED__ */

#ifndef __IInternalUnknown_FWD_DEFINED__
#define __IInternalUnknown_FWD_DEFINED__
typedef interface IInternalUnknown IInternalUnknown;
#endif /* __IInternalUnknown_FWD_DEFINED__ */

#ifndef __IEnumUnknown_FWD_DEFINED__
#define __IEnumUnknown_FWD_DEFINED__
typedef interface IEnumUnknown IEnumUnknown;
#endif /* __IEnumUnknown_FWD_DEFINED__ */

#ifndef __IEnumString_FWD_DEFINED__
#define __IEnumString_FWD_DEFINED__
typedef interface IEnumString IEnumString;
#endif /* __IEnumString_FWD_DEFINED__ */

#ifndef __ISequentialStream_FWD_DEFINED__
#define __ISequentialStream_FWD_DEFINED__
typedef interface ISequentialStream ISequentialStream;
#endif /* __ISequentialStream_FWD_DEFINED__ */

#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#endif /* __IStream_FWD_DEFINED__ */

#ifndef __IRpcChannelBuffer_FWD_DEFINED__
#define __IRpcChannelBuffer_FWD_DEFINED__
typedef interface IRpcChannelBuffer IRpcChannelBuffer;
#endif /* __IRpcChannelBuffer_FWD_DEFINED__ */

#ifndef __IRpcChannelBuffer2_FWD_DEFINED__
#define __IRpcChannelBuffer2_FWD_DEFINED__
typedef interface IRpcChannelBuffer2 IRpcChannelBuffer2;
#endif /* __IRpcChannelBuffer2_FWD_DEFINED__ */

#ifndef __IAsyncRpcChannelBuffer_FWD_DEFINED__
#define __IAsyncRpcChannelBuffer_FWD_DEFINED__
typedef interface IAsyncRpcChannelBuffer IAsyncRpcChannelBuffer;
#endif /* __IAsyncRpcChannelBuffer_FWD_DEFINED__ */

#ifndef __IRpcChannelBuffer3_FWD_DEFINED__
#define __IRpcChannelBuffer3_FWD_DEFINED__
typedef interface IRpcChannelBuffer3 IRpcChannelBuffer3;
#endif /* __IRpcChannelBuffer3_FWD_DEFINED__ */

#ifndef __IRpcSyntaxNegotiate_FWD_DEFINED__
#define __IRpcSyntaxNegotiate_FWD_DEFINED__
typedef interface IRpcSyntaxNegotiate IRpcSyntaxNegotiate;
#endif /* __IRpcSyntaxNegotiate_FWD_DEFINED__ */

#ifndef __IRpcProxyBuffer_FWD_DEFINED__
#define __IRpcProxyBuffer_FWD_DEFINED__
typedef interface IRpcProxyBuffer IRpcProxyBuffer;
#endif /* __IRpcProxyBuffer_FWD_DEFINED__ */

#ifndef __IRpcStubBuffer_FWD_DEFINED__
#define __IRpcStubBuffer_FWD_DEFINED__
typedef interface IRpcStubBuffer IRpcStubBuffer;
#endif /* __IRpcStubBuffer_FWD_DEFINED__ */

#ifndef __IPSFactoryBuffer_FWD_DEFINED__
#define __IPSFactoryBuffer_FWD_DEFINED__
typedef interface IPSFactoryBuffer IPSFactoryBuffer;
#endif /* __IPSFactoryBuffer_FWD_DEFINED__ */

#ifndef __IChannelHook_FWD_DEFINED__
#define __IChannelHook_FWD_DEFINED__
typedef interface IChannelHook IChannelHook;
#endif /* __IChannelHook_FWD_DEFINED__ */

#ifndef __IClientSecurity_FWD_DEFINED__
#define __IClientSecurity_FWD_DEFINED__
typedef interface IClientSecurity IClientSecurity;
#endif /* __IClientSecurity_FWD_DEFINED__ */

#ifndef __IServerSecurity_FWD_DEFINED__
#define __IServerSecurity_FWD_DEFINED__
typedef interface IServerSecurity IServerSecurity;
#endif /* __IServerSecurity_FWD_DEFINED__ */

#ifndef __IRpcOptions_FWD_DEFINED__
#define __IRpcOptions_FWD_DEFINED__
typedef interface IRpcOptions IRpcOptions;
#endif /* __IRpcOptions_FWD_DEFINED__ */

#ifndef __IGlobalOptions_FWD_DEFINED__
#define __IGlobalOptions_FWD_DEFINED__
typedef interface IGlobalOptions IGlobalOptions;
#endif /* __IGlobalOptions_FWD_DEFINED__ */

#ifndef __ISurrogate_FWD_DEFINED__
#define __ISurrogate_FWD_DEFINED__
typedef interface ISurrogate ISurrogate;
#endif /* __ISurrogate_FWD_DEFINED__ */

#ifndef __IGlobalInterfaceTable_FWD_DEFINED__
#define __IGlobalInterfaceTable_FWD_DEFINED__
typedef interface IGlobalInterfaceTable IGlobalInterfaceTable;
#endif /* __IGlobalInterfaceTable_FWD_DEFINED__ */

#ifndef __ISynchronize_FWD_DEFINED__
#define __ISynchronize_FWD_DEFINED__
typedef interface ISynchronize ISynchronize;
#endif /* __ISynchronize_FWD_DEFINED__ */

#ifndef __ISynchronizeHandle_FWD_DEFINED__
#define __ISynchronizeHandle_FWD_DEFINED__
typedef interface ISynchronizeHandle ISynchronizeHandle;
#endif /* __ISynchronizeHandle_FWD_DEFINED__ */

#ifndef __ISynchronizeEvent_FWD_DEFINED__
#define __ISynchronizeEvent_FWD_DEFINED__
typedef interface ISynchronizeEvent ISynchronizeEvent;
#endif /* __ISynchronizeEvent_FWD_DEFINED__ */

#ifndef __ISynchronizeContainer_FWD_DEFINED__
#define __ISynchronizeContainer_FWD_DEFINED__
typedef interface ISynchronizeContainer ISynchronizeContainer;
#endif /* __ISynchronizeContainer_FWD_DEFINED__ */

#ifndef __ISynchronizeMutex_FWD_DEFINED__
#define __ISynchronizeMutex_FWD_DEFINED__
typedef interface ISynchronizeMutex ISynchronizeMutex;
#endif /* __ISynchronizeMutex_FWD_DEFINED__ */

#ifndef __ICancelMethodCalls_FWD_DEFINED__
#define __ICancelMethodCalls_FWD_DEFINED__
typedef interface ICancelMethodCalls ICancelMethodCalls;
#endif /* __ICancelMethodCalls_FWD_DEFINED__ */

#ifndef __IAsyncManager_FWD_DEFINED__
#define __IAsyncManager_FWD_DEFINED__
typedef interface IAsyncManager IAsyncManager;
#endif /* __IAsyncManager_FWD_DEFINED__ */

#ifndef __ICallFactory_FWD_DEFINED__
#define __ICallFactory_FWD_DEFINED__
typedef interface ICallFactory ICallFactory;
#endif /* __ICallFactory_FWD_DEFINED__ */

#ifndef __IRpcHelper_FWD_DEFINED__
#define __IRpcHelper_FWD_DEFINED__
typedef interface IRpcHelper IRpcHelper;
#endif /* __IRpcHelper_FWD_DEFINED__ */

#ifndef __IReleaseMarshalBuffers_FWD_DEFINED__
#define __IReleaseMarshalBuffers_FWD_DEFINED__
typedef interface IReleaseMarshalBuffers IReleaseMarshalBuffers;
#endif /* __IReleaseMarshalBuffers_FWD_DEFINED__ */

#ifndef __IWaitMultiple_FWD_DEFINED__
#define __IWaitMultiple_FWD_DEFINED__
typedef interface IWaitMultiple IWaitMultiple;
#endif /* __IWaitMultiple_FWD_DEFINED__ */

#ifndef __IAddrTrackingControl_FWD_DEFINED__
#define __IAddrTrackingControl_FWD_DEFINED__
typedef interface IAddrTrackingControl IAddrTrackingControl;
#endif /* __IAddrTrackingControl_FWD_DEFINED__ */

#ifndef __IAddrExclusionControl_FWD_DEFINED__
#define __IAddrExclusionControl_FWD_DEFINED__
typedef interface IAddrExclusionControl IAddrExclusionControl;
#endif /* __IAddrExclusionControl_FWD_DEFINED__ */

#ifndef __IPipeByte_FWD_DEFINED__
#define __IPipeByte_FWD_DEFINED__
typedef interface IPipeByte IPipeByte;
#endif /* __IPipeByte_FWD_DEFINED__ */

#ifndef __AsyncIPipeByte_FWD_DEFINED__
#define __AsyncIPipeByte_FWD_DEFINED__
typedef interface AsyncIPipeByte AsyncIPipeByte;
#endif /* __AsyncIPipeByte_FWD_DEFINED__ */

#ifndef __IPipeLong_FWD_DEFINED__
#define __IPipeLong_FWD_DEFINED__
typedef interface IPipeLong IPipeLong;
#endif /* __IPipeLong_FWD_DEFINED__ */

#ifndef __AsyncIPipeLong_FWD_DEFINED__
#define __AsyncIPipeLong_FWD_DEFINED__
typedef interface AsyncIPipeLong AsyncIPipeLong;
#endif /* __AsyncIPipeLong_FWD_DEFINED__ */

#ifndef __IPipeDouble_FWD_DEFINED__
#define __IPipeDouble_FWD_DEFINED__
typedef interface IPipeDouble IPipeDouble;
#endif /* __IPipeDouble_FWD_DEFINED__ */

#ifndef __AsyncIPipeDouble_FWD_DEFINED__
#define __AsyncIPipeDouble_FWD_DEFINED__
typedef interface AsyncIPipeDouble AsyncIPipeDouble;
#endif /* __AsyncIPipeDouble_FWD_DEFINED__ */

#ifndef __IEnumContextProps_FWD_DEFINED__
#define __IEnumContextProps_FWD_DEFINED__
typedef interface IEnumContextProps IEnumContextProps;
#endif /* __IEnumContextProps_FWD_DEFINED__ */

#ifndef __IContext_FWD_DEFINED__
#define __IContext_FWD_DEFINED__
typedef interface IContext IContext;
#endif /* __IContext_FWD_DEFINED__ */

#ifndef __IComThreadingInfo_FWD_DEFINED__
#define __IComThreadingInfo_FWD_DEFINED__
typedef interface IComThreadingInfo IComThreadingInfo;
#endif /* __IComThreadingInfo_FWD_DEFINED__ */

#ifndef __IProcessInitControl_FWD_DEFINED__
#define __IProcessInitControl_FWD_DEFINED__
typedef interface IProcessInitControl IProcessInitControl;
#endif /* __IProcessInitControl_FWD_DEFINED__ */

#ifndef __IFastRundown_FWD_DEFINED__
#define __IFastRundown_FWD_DEFINED__
typedef interface IFastRundown IFastRundown;
#endif /* __IFastRundown_FWD_DEFINED__ */

#ifndef __IMarshalingStream_FWD_DEFINED__
#define __IMarshalingStream_FWD_DEFINED__
typedef interface IMarshalingStream IMarshalingStream;
#endif /* __IMarshalingStream_FWD_DEFINED__ */

#ifndef __IAgileReference_FWD_DEFINED__
#define __IAgileReference_FWD_DEFINED__
typedef interface IAgileReference IAgileReference;
#endif /* __IAgileReference_FWD_DEFINED__ */

#ifndef __IMachineGlobalObjectTable_FWD_DEFINED__
#define __IMachineGlobalObjectTable_FWD_DEFINED__
typedef interface IMachineGlobalObjectTable IMachineGlobalObjectTable;
#endif /* __IMachineGlobalObjectTable_FWD_DEFINED__ */

#ifndef __ISupportAllowLowerTrustActivation_FWD_DEFINED__
#define __ISupportAllowLowerTrustActivation_FWD_DEFINED__
typedef interface ISupportAllowLowerTrustActivation ISupportAllowLowerTrustActivation;
#endif /* __ISupportAllowLowerTrustActivation_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwnbase.h"
#include "wtypesbase.h"


#include <winapifamily.h>


#if (NTDDI_VERSION >= NTDDI_VISTA && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0600
#endif

#if (NTDDI_VERSION >= NTDDI_WS03 && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0502
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0501
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0500
#endif

#include <limits.h>

#ifndef _OBJIDLBASE_

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)


#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#endif /* __IStream_FWD_DEFINED__ */

#ifndef __IEnumString_FWD_DEFINED__
#define __IEnumString_FWD_DEFINED__
typedef interface IEnumString IEnumString;
#endif /* __IEnumString_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)


#ifndef __IAsyncManager_FWD_DEFINED__
#define __IAsyncManager_FWD_DEFINED__
typedef interface IAsyncManager IAsyncManager;
#endif /* __IAsyncManager_FWD_DEFINED__ */

#ifndef __ICallFactory_FWD_DEFINED__
#define __ICallFactory_FWD_DEFINED__
typedef interface ICallFactory ICallFactory;
#endif /* __ICallFactory_FWD_DEFINED__ */

#ifndef __ISynchronize_FWD_DEFINED__
#define __ISynchronize_FWD_DEFINED__
typedef interface ISynchronize ISynchronize;
#endif /* __ISynchronize_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef struct _COSERVERINFO {
    DWORD dwReserved1;
    LPWSTR pwszName;
    COAUTHINFO *pAuthInfo;
    DWORD dwReserved2;
} COSERVERINFO;

/*****************************************************************************
 * IMarshal interface
 */
#ifndef __IMarshal_INTERFACE_DEFINED__
#define __IMarshal_INTERFACE_DEFINED__

typedef IMarshal *LPMARSHAL;

EXTERN_C const IID IID_IMarshal;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMarshalVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMarshal *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMarshal *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMarshal *This);

    /*** IMarshal methods ***/
    HRESULT (STDMETHODCALLTYPE *GetUnmarshalClass)(
        IMarshal *This,
        REFIID riid,
        void *pv,
        DWORD dwDestContext,
        void *pvDestContext,
        DWORD mshlflags,
        CLSID *pCid);

    HRESULT (STDMETHODCALLTYPE *GetMarshalSizeMax)(
        IMarshal *This,
        REFIID riid,
        void *pv,
        DWORD dwDestContext,
        void *pvDestContext,
        DWORD mshlflags,
        DWORD *pSize);

    HRESULT (STDMETHODCALLTYPE *MarshalInterface)(
        IMarshal *This,
        IStream *pStm,
        REFIID riid,
        void *pv,
        DWORD dwDestContext,
        void *pvDestContext,
        DWORD mshlflags);

    HRESULT (STDMETHODCALLTYPE *UnmarshalInterface)(
        IMarshal *This,
        IStream *pStm,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *ReleaseMarshalData)(
        IMarshal *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *DisconnectObject)(
        IMarshal *This,
        DWORD dwReserved);

    END_INTERFACE
} IMarshalVtbl;

interface IMarshal {
    CONST_VTBL IMarshalVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMarshal_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMarshal_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMarshal_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMarshal methods ***/
#define IMarshal_GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid) \
    ((This)->lpVtbl->GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid))
#define IMarshal_GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize) \
    ((This)->lpVtbl->GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize))
#define IMarshal_MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags) \
    ((This)->lpVtbl->MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags))
#define IMarshal_UnmarshalInterface(This,pStm,riid,ppv) \
    ((This)->lpVtbl->UnmarshalInterface(This,pStm,riid,ppv))
#define IMarshal_ReleaseMarshalData(This,pStm) \
    ((This)->lpVtbl->ReleaseMarshalData(This,pStm))
#define IMarshal_DisconnectObject(This,dwReserved) \
    ((This)->lpVtbl->DisconnectObject(This,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMarshal_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INoMarshal interface
 */
#ifndef __INoMarshal_INTERFACE_DEFINED__
#define __INoMarshal_INTERFACE_DEFINED__

EXTERN_C const IID IID_INoMarshal;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INoMarshalVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INoMarshal *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INoMarshal *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INoMarshal *This);

    END_INTERFACE
} INoMarshalVtbl;

interface INoMarshal {
    CONST_VTBL INoMarshalVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INoMarshal_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INoMarshal_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INoMarshal_Release(This) \
    ((This)->lpVtbl->Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INoMarshal_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAgileObject interface
 */
#ifndef __IAgileObject_INTERFACE_DEFINED__
#define __IAgileObject_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAgileObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAgileObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAgileObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAgileObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAgileObject *This);

    END_INTERFACE
} IAgileObjectVtbl;

interface IAgileObject {
    CONST_VTBL IAgileObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAgileObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAgileObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAgileObject_Release(This) \
    ((This)->lpVtbl->Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAgileObject_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IActivationFilter interface
 */
#ifndef __IActivationFilter_INTERFACE_DEFINED__
#define __IActivationFilter_INTERFACE_DEFINED__

typedef enum tagACTIVATIONTYPE {
    ACTIVATIONTYPE_UNCATEGORIZED = 0x0,
    ACTIVATIONTYPE_FROM_MONIKER = 0x1,
    ACTIVATIONTYPE_FROM_DATA = 0x2,
    ACTIVATIONTYPE_FROM_STORAGE = 0x4,
    ACTIVATIONTYPE_FROM_STREAM = 0x8,
    ACTIVATIONTYPE_FROM_FILE = 0x10
} ACTIVATIONTYPE;

EXTERN_C const IID IID_IActivationFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IActivationFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IActivationFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IActivationFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IActivationFilter *This);

    /*** IActivationFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *HandleActivation)(
        IActivationFilter *This,
        DWORD dwActivationType,
        REFCLSID rclsid,
        CLSID *pReplacementClsId);

    END_INTERFACE
} IActivationFilterVtbl;

interface IActivationFilter {
    CONST_VTBL IActivationFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IActivationFilter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IActivationFilter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IActivationFilter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IActivationFilter methods ***/
#define IActivationFilter_HandleActivation(This,dwActivationType,rclsid,pReplacementClsId) \
    ((This)->lpVtbl->HandleActivation(This,dwActivationType,rclsid,pReplacementClsId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IActivationFilter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMarshal2 interface
 */
#ifndef __IMarshal2_INTERFACE_DEFINED__
#define __IMarshal2_INTERFACE_DEFINED__

typedef IMarshal2 *LPMARSHAL2;

EXTERN_C const IID IID_IMarshal2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMarshal2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMarshal2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMarshal2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMarshal2 *This);

    /*** IMarshal methods ***/
    HRESULT (STDMETHODCALLTYPE *GetUnmarshalClass)(
        IMarshal2 *This,
        REFIID riid,
        void *pv,
        DWORD dwDestContext,
        void *pvDestContext,
        DWORD mshlflags,
        CLSID *pCid);

    HRESULT (STDMETHODCALLTYPE *GetMarshalSizeMax)(
        IMarshal2 *This,
        REFIID riid,
        void *pv,
        DWORD dwDestContext,
        void *pvDestContext,
        DWORD mshlflags,
        DWORD *pSize);

    HRESULT (STDMETHODCALLTYPE *MarshalInterface)(
        IMarshal2 *This,
        IStream *pStm,
        REFIID riid,
        void *pv,
        DWORD dwDestContext,
        void *pvDestContext,
        DWORD mshlflags);

    HRESULT (STDMETHODCALLTYPE *UnmarshalInterface)(
        IMarshal2 *This,
        IStream *pStm,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *ReleaseMarshalData)(
        IMarshal2 *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *DisconnectObject)(
        IMarshal2 *This,
        DWORD dwReserved);

    END_INTERFACE
} IMarshal2Vtbl;

interface IMarshal2 {
    CONST_VTBL IMarshal2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMarshal2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMarshal2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMarshal2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMarshal methods ***/
#define IMarshal2_GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid) \
    ((This)->lpVtbl->GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid))
#define IMarshal2_GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize) \
    ((This)->lpVtbl->GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize))
#define IMarshal2_MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags) \
    ((This)->lpVtbl->MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags))
#define IMarshal2_UnmarshalInterface(This,pStm,riid,ppv) \
    ((This)->lpVtbl->UnmarshalInterface(This,pStm,riid,ppv))
#define IMarshal2_ReleaseMarshalData(This,pStm) \
    ((This)->lpVtbl->ReleaseMarshalData(This,pStm))
#define IMarshal2_DisconnectObject(This,dwReserved) \
    ((This)->lpVtbl->DisconnectObject(This,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMarshal2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMalloc interface
 */
#ifndef __IMalloc_INTERFACE_DEFINED__
#define __IMalloc_INTERFACE_DEFINED__

typedef IMalloc *LPMALLOC;

EXTERN_C const IID IID_IMalloc;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMallocVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMalloc *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMalloc *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMalloc *This);

    /*** IMalloc methods ***/
    void * (STDMETHODCALLTYPE *Alloc)(
        IMalloc *This,
        SIZE_T cb);

    void * (STDMETHODCALLTYPE *Realloc)(
        IMalloc *This,
        void *pv,
        SIZE_T cb);

    void (STDMETHODCALLTYPE *Free)(
        IMalloc *This,
        void *pv);

    SIZE_T (STDMETHODCALLTYPE *GetSize)(
        IMalloc *This,
        void *pv);

    int (STDMETHODCALLTYPE *DidAlloc)(
        IMalloc *This,
        void *pv);

    void (STDMETHODCALLTYPE *HeapMinimize)(
        IMalloc *This);

    END_INTERFACE
} IMallocVtbl;

interface IMalloc {
    CONST_VTBL IMallocVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMalloc_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMalloc_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMalloc_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMalloc methods ***/
#define IMalloc_Alloc(This,cb) \
    ((This)->lpVtbl->Alloc(This,cb))
#define IMalloc_Realloc(This,pv,cb) \
    ((This)->lpVtbl->Realloc(This,pv,cb))
#define IMalloc_Free(This,pv) \
    ((This)->lpVtbl->Free(This,pv))
#define IMalloc_GetSize(This,pv) \
    ((This)->lpVtbl->GetSize(This,pv))
#define IMalloc_DidAlloc(This,pv) \
    ((This)->lpVtbl->DidAlloc(This,pv))
#define IMalloc_HeapMinimize(This) \
    ((This)->lpVtbl->HeapMinimize(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMalloc_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IStdMarshalInfo interface
 */
#ifndef __IStdMarshalInfo_INTERFACE_DEFINED__
#define __IStdMarshalInfo_INTERFACE_DEFINED__

typedef IStdMarshalInfo *LPSTDMARSHALINFO;

EXTERN_C const IID IID_IStdMarshalInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStdMarshalInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStdMarshalInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStdMarshalInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStdMarshalInfo *This);

    /*** IStdMarshalInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassForHandler)(
        IStdMarshalInfo *This,
        DWORD dwDestContext,
        void *pvDestContext,
        CLSID *pClsid);

    END_INTERFACE
} IStdMarshalInfoVtbl;

interface IStdMarshalInfo {
    CONST_VTBL IStdMarshalInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStdMarshalInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStdMarshalInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStdMarshalInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IStdMarshalInfo methods ***/
#define IStdMarshalInfo_GetClassForHandler(This,dwDestContext,pvDestContext,pClsid) \
    ((This)->lpVtbl->GetClassForHandler(This,dwDestContext,pvDestContext,pClsid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IStdMarshalInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IExternalConnection interface
 */
#ifndef __IExternalConnection_INTERFACE_DEFINED__
#define __IExternalConnection_INTERFACE_DEFINED__

typedef IExternalConnection *LPEXTERNALCONNECTION;

typedef enum tagEXTCONN {
    EXTCONN_STRONG = 0x1,
    EXTCONN_WEAK = 0x2,
    EXTCONN_CALLABLE = 0x4
} EXTCONN;

EXTERN_C const IID IID_IExternalConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExternalConnectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExternalConnection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExternalConnection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExternalConnection *This);

    /*** IExternalConnection methods ***/
    DWORD (STDMETHODCALLTYPE *AddConnection)(
        IExternalConnection *This,
        DWORD extconn,
        DWORD reserved);

    DWORD (STDMETHODCALLTYPE *ReleaseConnection)(
        IExternalConnection *This,
        DWORD extconn,
        DWORD reserved,
        BOOL fLastReleaseCloses);

    END_INTERFACE
} IExternalConnectionVtbl;

interface IExternalConnection {
    CONST_VTBL IExternalConnectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExternalConnection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExternalConnection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExternalConnection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExternalConnection methods ***/
#define IExternalConnection_AddConnection(This,extconn,reserved) \
    ((This)->lpVtbl->AddConnection(This,extconn,reserved))
#define IExternalConnection_ReleaseConnection(This,extconn,reserved,fLastReleaseCloses) \
    ((This)->lpVtbl->ReleaseConnection(This,extconn,reserved,fLastReleaseCloses))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExternalConnection_INTERFACE_DEFINED__ */

typedef IMultiQI *LPMULTIQI;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef struct tagMULTI_QI {
    const IID *pIID;
    IUnknown *pItf;
    HRESULT hr;
} MULTI_QI;

/*****************************************************************************
 * IMultiQI interface
 */
#ifndef __IMultiQI_INTERFACE_DEFINED__
#define __IMultiQI_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMultiQI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMultiQIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMultiQI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMultiQI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMultiQI *This);

    /*** IMultiQI methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryMultipleInterfaces)(
        IMultiQI *This,
        ULONG cMQIs,
        MULTI_QI *pMQIs);

    END_INTERFACE
} IMultiQIVtbl;

interface IMultiQI {
    CONST_VTBL IMultiQIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMultiQI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMultiQI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMultiQI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMultiQI methods ***/
#define IMultiQI_QueryMultipleInterfaces(This,cMQIs,pMQIs) \
    ((This)->lpVtbl->QueryMultipleInterfaces(This,cMQIs,pMQIs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMultiQI_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIMultiQI interface
 */
#ifndef __AsyncIMultiQI_INTERFACE_DEFINED__
#define __AsyncIMultiQI_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIMultiQI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIMultiQIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIMultiQI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIMultiQI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIMultiQI *This);

    /*** AsyncIMultiQI methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_QueryMultipleInterfaces)(
        AsyncIMultiQI *This,
        ULONG cMQIs,
        MULTI_QI *pMQIs);

    HRESULT (STDMETHODCALLTYPE *Finish_QueryMultipleInterfaces)(
        AsyncIMultiQI *This,
        MULTI_QI *pMQIs);

    END_INTERFACE
} AsyncIMultiQIVtbl;

interface AsyncIMultiQI {
    CONST_VTBL AsyncIMultiQIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIMultiQI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIMultiQI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIMultiQI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIMultiQI methods ***/
#define AsyncIMultiQI_Begin_QueryMultipleInterfaces(This,cMQIs,pMQIs) \
    ((This)->lpVtbl->Begin_QueryMultipleInterfaces(This,cMQIs,pMQIs))
#define AsyncIMultiQI_Finish_QueryMultipleInterfaces(This,pMQIs) \
    ((This)->lpVtbl->Finish_QueryMultipleInterfaces(This,pMQIs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __AsyncIMultiQI_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IInternalUnknown interface
 */
#ifndef __IInternalUnknown_INTERFACE_DEFINED__
#define __IInternalUnknown_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInternalUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternalUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternalUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternalUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternalUnknown *This);

    /*** IInternalUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInternalInterface)(
        IInternalUnknown *This,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IInternalUnknownVtbl;

interface IInternalUnknown {
    CONST_VTBL IInternalUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternalUnknown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternalUnknown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternalUnknown_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternalUnknown methods ***/
#define IInternalUnknown_QueryInternalInterface(This,riid,ppv) \
    ((This)->lpVtbl->QueryInternalInterface(This,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternalUnknown_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IEnumUnknown interface
 */
#ifndef __IEnumUnknown_INTERFACE_DEFINED__
#define __IEnumUnknown_INTERFACE_DEFINED__

typedef IEnumUnknown *LPENUMUNKNOWN;

EXTERN_C const IID IID_IEnumUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumUnknown *This);

    /*** IEnumUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumUnknown *This,
        ULONG celt,
        IUnknown **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumUnknown *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumUnknown *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumUnknown *This,
        IEnumUnknown **ppenum);

    END_INTERFACE
} IEnumUnknownVtbl;

interface IEnumUnknown {
    CONST_VTBL IEnumUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumUnknown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumUnknown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumUnknown_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumUnknown methods ***/
#define IEnumUnknown_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumUnknown_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumUnknown_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumUnknown_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumUnknown_RemoteNext_Proxy(
    IEnumUnknown *This,
    ULONG celt,
    IUnknown **rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumUnknown_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumUnknown_Next_Proxy(
    ULONG celt,
    IUnknown **rgelt,
    ULONG *pceltFetched);
HRESULT IEnumUnknown_Next_Stub(
    ULONG celt,
    IUnknown **rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumUnknown_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumString interface
 */
#ifndef __IEnumString_INTERFACE_DEFINED__
#define __IEnumString_INTERFACE_DEFINED__

typedef IEnumString *LPENUMSTRING;

EXTERN_C const IID IID_IEnumString;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumStringVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumString *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumString *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumString *This);

    /*** IEnumString methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumString *This,
        ULONG celt,
        LPOLESTR *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumString *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumString *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumString *This,
        IEnumString **ppenum);

    END_INTERFACE
} IEnumStringVtbl;

interface IEnumString {
    CONST_VTBL IEnumStringVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumString_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumString_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumString_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumString methods ***/
#define IEnumString_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumString_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumString_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumString_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumString_RemoteNext_Proxy(
    IEnumString *This,
    ULONG celt,
    LPOLESTR *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumString_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumString_Next_Proxy(
    ULONG celt,
    LPOLESTR *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumString_Next_Stub(
    ULONG celt,
    LPOLESTR *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumString_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISequentialStream interface
 */
#ifndef __ISequentialStream_INTERFACE_DEFINED__
#define __ISequentialStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISequentialStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISequentialStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISequentialStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISequentialStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISequentialStream *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        ISequentialStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        ISequentialStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    END_INTERFACE
} ISequentialStreamVtbl;

interface ISequentialStream {
    CONST_VTBL ISequentialStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISequentialStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISequentialStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISequentialStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define ISequentialStream_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define ISequentialStream_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteRead_Proxy(
    ISequentialStream *This,
    byte *pv,
    ULONG cb,
    ULONG *pcbRead);

void __RPC_STUB ISequentialStream_RemoteRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteWrite_Proxy(
    ISequentialStream *This,
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);

void __RPC_STUB ISequentialStream_RemoteWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ISequentialStream_Read_Proxy(
    void *pv,
    ULONG cb,
    ULONG *pcbRead);
HRESULT ISequentialStream_Read_Stub(
    byte *pv,
    ULONG cb,
    ULONG *pcbRead);
HRESULT ISequentialStream_Write_Proxy(
    void *pv,
    ULONG cb,
    ULONG *pcbWritten);
HRESULT ISequentialStream_Write_Stub(
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);
#endif /* __ISequentialStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IStream interface
 */
#ifndef __IStream_INTERFACE_DEFINED__
#define __IStream_INTERFACE_DEFINED__

typedef IStream *LPSTREAM;

typedef struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
} STATSTG;

typedef enum tagSTGTY {
    STGTY_STORAGE = 1,
    STGTY_STREAM = 2,
    STGTY_LOCKBYTES = 3,
    STGTY_PROPERTY = 4
} STGTY;

typedef enum tagSTREAM_SEEK {
    STREAM_SEEK_SET = 0,
    STREAM_SEEK_CUR = 1,
    STREAM_SEEK_END = 2
} STREAM_SEEK;

typedef enum tagLOCKTYPE {
    LOCK_WRITE = 1,
    LOCK_EXCLUSIVE = 2,
    LOCK_ONLYONCE = 4
} LOCKTYPE;

EXTERN_C const IID IID_IStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStream *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        IStream *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        IStream *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        IStream *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IStream *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        IStream *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        IStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        IStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        IStream *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IStream *This,
        IStream **ppstm);

    END_INTERFACE
} IStreamVtbl;

interface IStream {
    CONST_VTBL IStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define IStream_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define IStream_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define IStream_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define IStream_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define IStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define IStream_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define IStream_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define IStream_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define IStream_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define IStream_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define IStream_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IStream_RemoteSeek_Proxy(
    IStream *This,
    LARGE_INTEGER dlibMove,
    DWORD dwOrigin,
    ULARGE_INTEGER *plibNewPosition);

void __RPC_STUB IStream_RemoteSeek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IStream_RemoteCopyTo_Proxy(
    IStream *This,
    IStream *pstm,
    ULARGE_INTEGER cb,
    ULARGE_INTEGER *pcbRead,
    ULARGE_INTEGER *pcbWritten);

void __RPC_STUB IStream_RemoteCopyTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IStream_Seek_Proxy(
    LARGE_INTEGER dlibMove,
    DWORD dwOrigin,
    ULARGE_INTEGER *plibNewPosition);
HRESULT IStream_Seek_Stub(
    LARGE_INTEGER dlibMove,
    DWORD dwOrigin,
    ULARGE_INTEGER *plibNewPosition);
HRESULT IStream_CopyTo_Proxy(
    IStream *pstm,
    ULARGE_INTEGER cb,
    ULARGE_INTEGER *pcbRead,
    ULARGE_INTEGER *pcbWritten);
HRESULT IStream_CopyTo_Stub(
    IStream *pstm,
    ULARGE_INTEGER cb,
    ULARGE_INTEGER *pcbRead,
    ULARGE_INTEGER *pcbWritten);
#endif /* __IStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRpcChannelBuffer interface
 */
#ifndef __IRpcChannelBuffer_INTERFACE_DEFINED__
#define __IRpcChannelBuffer_INTERFACE_DEFINED__

typedef ULONG RPCOLEDATAREP;

typedef struct tagRPCOLEMESSAGE {
    void *reserved1;
    RPCOLEDATAREP dataRepresentation;
    void *Buffer;
    ULONG cbBuffer;
    ULONG iMethod;
    void * reserved2[ 5 ];
    ULONG rpcFlags;
} RPCOLEMESSAGE;

typedef RPCOLEMESSAGE *PRPCOLEMESSAGE;

EXTERN_C const IID IID_IRpcChannelBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcChannelBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcChannelBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcChannelBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcChannelBuffer *This);

    /*** IRpcChannelBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMessage,
        REFIID riid);

    HRESULT (STDMETHODCALLTYPE *SendReceive)(
        IRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMessage,
        ULONG *pStatus);

    HRESULT (STDMETHODCALLTYPE *FreeBuffer)(
        IRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMessage);

    HRESULT (STDMETHODCALLTYPE *GetDestCtx)(
        IRpcChannelBuffer *This,
        DWORD *pdwDestContext,
        void **ppvDestContext);

    HRESULT (STDMETHODCALLTYPE *IsConnected)(
        IRpcChannelBuffer *This);

    END_INTERFACE
} IRpcChannelBufferVtbl;

interface IRpcChannelBuffer {
    CONST_VTBL IRpcChannelBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcChannelBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcChannelBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcChannelBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcChannelBuffer methods ***/
#define IRpcChannelBuffer_GetBuffer(This,pMessage,riid) \
    ((This)->lpVtbl->GetBuffer(This,pMessage,riid))
#define IRpcChannelBuffer_SendReceive(This,pMessage,pStatus) \
    ((This)->lpVtbl->SendReceive(This,pMessage,pStatus))
#define IRpcChannelBuffer_FreeBuffer(This,pMessage) \
    ((This)->lpVtbl->FreeBuffer(This,pMessage))
#define IRpcChannelBuffer_GetDestCtx(This,pdwDestContext,ppvDestContext) \
    ((This)->lpVtbl->GetDestCtx(This,pdwDestContext,ppvDestContext))
#define IRpcChannelBuffer_IsConnected(This) \
    ((This)->lpVtbl->IsConnected(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcChannelBuffer_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IRpcChannelBuffer2 interface
 */
#ifndef __IRpcChannelBuffer2_INTERFACE_DEFINED__
#define __IRpcChannelBuffer2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcChannelBuffer2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcChannelBuffer2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcChannelBuffer2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcChannelBuffer2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcChannelBuffer2 *This);

    /*** IRpcChannelBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IRpcChannelBuffer2 *This,
        RPCOLEMESSAGE *pMessage,
        REFIID riid);

    HRESULT (STDMETHODCALLTYPE *SendReceive)(
        IRpcChannelBuffer2 *This,
        RPCOLEMESSAGE *pMessage,
        ULONG *pStatus);

    HRESULT (STDMETHODCALLTYPE *FreeBuffer)(
        IRpcChannelBuffer2 *This,
        RPCOLEMESSAGE *pMessage);

    HRESULT (STDMETHODCALLTYPE *GetDestCtx)(
        IRpcChannelBuffer2 *This,
        DWORD *pdwDestContext,
        void **ppvDestContext);

    HRESULT (STDMETHODCALLTYPE *IsConnected)(
        IRpcChannelBuffer2 *This);

    /*** IRpcChannelBuffer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProtocolVersion)(
        IRpcChannelBuffer2 *This,
        DWORD *pdwVersion);

    END_INTERFACE
} IRpcChannelBuffer2Vtbl;

interface IRpcChannelBuffer2 {
    CONST_VTBL IRpcChannelBuffer2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcChannelBuffer2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcChannelBuffer2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcChannelBuffer2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcChannelBuffer methods ***/
#define IRpcChannelBuffer2_GetBuffer(This,pMessage,riid) \
    ((This)->lpVtbl->GetBuffer(This,pMessage,riid))
#define IRpcChannelBuffer2_SendReceive(This,pMessage,pStatus) \
    ((This)->lpVtbl->SendReceive(This,pMessage,pStatus))
#define IRpcChannelBuffer2_FreeBuffer(This,pMessage) \
    ((This)->lpVtbl->FreeBuffer(This,pMessage))
#define IRpcChannelBuffer2_GetDestCtx(This,pdwDestContext,ppvDestContext) \
    ((This)->lpVtbl->GetDestCtx(This,pdwDestContext,ppvDestContext))
#define IRpcChannelBuffer2_IsConnected(This) \
    ((This)->lpVtbl->IsConnected(This))
/*** IRpcChannelBuffer2 methods ***/
#define IRpcChannelBuffer2_GetProtocolVersion(This,pdwVersion) \
    ((This)->lpVtbl->GetProtocolVersion(This,pdwVersion))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcChannelBuffer2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAsyncRpcChannelBuffer interface
 */
#ifndef __IAsyncRpcChannelBuffer_INTERFACE_DEFINED__
#define __IAsyncRpcChannelBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAsyncRpcChannelBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAsyncRpcChannelBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAsyncRpcChannelBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAsyncRpcChannelBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAsyncRpcChannelBuffer *This);

    /*** IRpcChannelBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IAsyncRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMessage,
        REFIID riid);

    HRESULT (STDMETHODCALLTYPE *SendReceive)(
        IAsyncRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMessage,
        ULONG *pStatus);

    HRESULT (STDMETHODCALLTYPE *FreeBuffer)(
        IAsyncRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMessage);

    HRESULT (STDMETHODCALLTYPE *GetDestCtx)(
        IAsyncRpcChannelBuffer *This,
        DWORD *pdwDestContext,
        void **ppvDestContext);

    HRESULT (STDMETHODCALLTYPE *IsConnected)(
        IAsyncRpcChannelBuffer *This);

    /*** IRpcChannelBuffer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProtocolVersion)(
        IAsyncRpcChannelBuffer *This,
        DWORD *pdwVersion);

    /*** IAsyncRpcChannelBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *Send)(
        IAsyncRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMsg,
        ISynchronize *pSync,
        ULONG *pulStatus);

    HRESULT (STDMETHODCALLTYPE *Receive)(
        IAsyncRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMsg,
        ULONG *pulStatus);

    HRESULT (STDMETHODCALLTYPE *GetDestCtxEx)(
        IAsyncRpcChannelBuffer *This,
        RPCOLEMESSAGE *pMsg,
        DWORD *pdwDestContext,
        void **ppvDestContext);

    END_INTERFACE
} IAsyncRpcChannelBufferVtbl;

interface IAsyncRpcChannelBuffer {
    CONST_VTBL IAsyncRpcChannelBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAsyncRpcChannelBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAsyncRpcChannelBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAsyncRpcChannelBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcChannelBuffer methods ***/
#define IAsyncRpcChannelBuffer_GetBuffer(This,pMessage,riid) \
    ((This)->lpVtbl->GetBuffer(This,pMessage,riid))
#define IAsyncRpcChannelBuffer_SendReceive(This,pMessage,pStatus) \
    ((This)->lpVtbl->SendReceive(This,pMessage,pStatus))
#define IAsyncRpcChannelBuffer_FreeBuffer(This,pMessage) \
    ((This)->lpVtbl->FreeBuffer(This,pMessage))
#define IAsyncRpcChannelBuffer_GetDestCtx(This,pdwDestContext,ppvDestContext) \
    ((This)->lpVtbl->GetDestCtx(This,pdwDestContext,ppvDestContext))
#define IAsyncRpcChannelBuffer_IsConnected(This) \
    ((This)->lpVtbl->IsConnected(This))
/*** IRpcChannelBuffer2 methods ***/
#define IAsyncRpcChannelBuffer_GetProtocolVersion(This,pdwVersion) \
    ((This)->lpVtbl->GetProtocolVersion(This,pdwVersion))
/*** IAsyncRpcChannelBuffer methods ***/
#define IAsyncRpcChannelBuffer_Send(This,pMsg,pSync,pulStatus) \
    ((This)->lpVtbl->Send(This,pMsg,pSync,pulStatus))
#define IAsyncRpcChannelBuffer_Receive(This,pMsg,pulStatus) \
    ((This)->lpVtbl->Receive(This,pMsg,pulStatus))
#define IAsyncRpcChannelBuffer_GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext) \
    ((This)->lpVtbl->GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAsyncRpcChannelBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRpcChannelBuffer3 interface
 */
#ifndef __IRpcChannelBuffer3_INTERFACE_DEFINED__
#define __IRpcChannelBuffer3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcChannelBuffer3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcChannelBuffer3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcChannelBuffer3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcChannelBuffer3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcChannelBuffer3 *This);

    /*** IRpcChannelBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMessage,
        REFIID riid);

    HRESULT (STDMETHODCALLTYPE *SendReceive)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMessage,
        ULONG *pStatus);

    HRESULT (STDMETHODCALLTYPE *FreeBuffer)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMessage);

    HRESULT (STDMETHODCALLTYPE *GetDestCtx)(
        IRpcChannelBuffer3 *This,
        DWORD *pdwDestContext,
        void **ppvDestContext);

    HRESULT (STDMETHODCALLTYPE *IsConnected)(
        IRpcChannelBuffer3 *This);

    /*** IRpcChannelBuffer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProtocolVersion)(
        IRpcChannelBuffer3 *This,
        DWORD *pdwVersion);

    /*** IRpcChannelBuffer3 methods ***/
    HRESULT (STDMETHODCALLTYPE *Send)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg,
        ULONG *pulStatus);

    HRESULT (STDMETHODCALLTYPE *Receive)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg,
        ULONG ulSize,
        ULONG *pulStatus);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg);

    HRESULT (STDMETHODCALLTYPE *GetCallContext)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg,
        REFIID riid,
        void **pInterface);

    HRESULT (STDMETHODCALLTYPE *GetDestCtxEx)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg,
        DWORD *pdwDestContext,
        void **ppvDestContext);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg,
        DWORD *pState);

    HRESULT (STDMETHODCALLTYPE *RegisterAsync)(
        IRpcChannelBuffer3 *This,
        RPCOLEMESSAGE *pMsg,
        IAsyncManager *pAsyncMgr);

    END_INTERFACE
} IRpcChannelBuffer3Vtbl;

interface IRpcChannelBuffer3 {
    CONST_VTBL IRpcChannelBuffer3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcChannelBuffer3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcChannelBuffer3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcChannelBuffer3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcChannelBuffer methods ***/
#define IRpcChannelBuffer3_GetBuffer(This,pMessage,riid) \
    ((This)->lpVtbl->GetBuffer(This,pMessage,riid))
#define IRpcChannelBuffer3_SendReceive(This,pMessage,pStatus) \
    ((This)->lpVtbl->SendReceive(This,pMessage,pStatus))
#define IRpcChannelBuffer3_FreeBuffer(This,pMessage) \
    ((This)->lpVtbl->FreeBuffer(This,pMessage))
#define IRpcChannelBuffer3_GetDestCtx(This,pdwDestContext,ppvDestContext) \
    ((This)->lpVtbl->GetDestCtx(This,pdwDestContext,ppvDestContext))
#define IRpcChannelBuffer3_IsConnected(This) \
    ((This)->lpVtbl->IsConnected(This))
/*** IRpcChannelBuffer2 methods ***/
#define IRpcChannelBuffer3_GetProtocolVersion(This,pdwVersion) \
    ((This)->lpVtbl->GetProtocolVersion(This,pdwVersion))
/*** IRpcChannelBuffer3 methods ***/
#define IRpcChannelBuffer3_Send(This,pMsg,pulStatus) \
    ((This)->lpVtbl->Send(This,pMsg,pulStatus))
#define IRpcChannelBuffer3_Receive(This,pMsg,ulSize,pulStatus) \
    ((This)->lpVtbl->Receive(This,pMsg,ulSize,pulStatus))
#define IRpcChannelBuffer3_Cancel(This,pMsg) \
    ((This)->lpVtbl->Cancel(This,pMsg))
#define IRpcChannelBuffer3_GetCallContext(This,pMsg,riid,pInterface) \
    ((This)->lpVtbl->GetCallContext(This,pMsg,riid,pInterface))
#define IRpcChannelBuffer3_GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext) \
    ((This)->lpVtbl->GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext))
#define IRpcChannelBuffer3_GetState(This,pMsg,pState) \
    ((This)->lpVtbl->GetState(This,pMsg,pState))
#define IRpcChannelBuffer3_RegisterAsync(This,pMsg,pAsyncMgr) \
    ((This)->lpVtbl->RegisterAsync(This,pMsg,pAsyncMgr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcChannelBuffer3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRpcSyntaxNegotiate interface
 */
#ifndef __IRpcSyntaxNegotiate_INTERFACE_DEFINED__
#define __IRpcSyntaxNegotiate_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcSyntaxNegotiate;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcSyntaxNegotiateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcSyntaxNegotiate *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcSyntaxNegotiate *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcSyntaxNegotiate *This);

    /*** IRpcSyntaxNegotiate methods ***/
    HRESULT (STDMETHODCALLTYPE *NegotiateSyntax)(
        IRpcSyntaxNegotiate *This,
        RPCOLEMESSAGE *pMsg);

    END_INTERFACE
} IRpcSyntaxNegotiateVtbl;

interface IRpcSyntaxNegotiate {
    CONST_VTBL IRpcSyntaxNegotiateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcSyntaxNegotiate_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcSyntaxNegotiate_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcSyntaxNegotiate_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcSyntaxNegotiate methods ***/
#define IRpcSyntaxNegotiate_NegotiateSyntax(This,pMsg) \
    ((This)->lpVtbl->NegotiateSyntax(This,pMsg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcSyntaxNegotiate_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRpcProxyBuffer interface
 */
#ifndef __IRpcProxyBuffer_INTERFACE_DEFINED__
#define __IRpcProxyBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcProxyBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcProxyBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcProxyBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcProxyBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcProxyBuffer *This);

    /*** IRpcProxyBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *Connect)(
        IRpcProxyBuffer *This,
        IRpcChannelBuffer *pRpcChannelBuffer);

    void (STDMETHODCALLTYPE *Disconnect)(
        IRpcProxyBuffer *This);

    END_INTERFACE
} IRpcProxyBufferVtbl;

interface IRpcProxyBuffer {
    CONST_VTBL IRpcProxyBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcProxyBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcProxyBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcProxyBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcProxyBuffer methods ***/
#define IRpcProxyBuffer_Connect(This,pRpcChannelBuffer) \
    ((This)->lpVtbl->Connect(This,pRpcChannelBuffer))
#define IRpcProxyBuffer_Disconnect(This) \
    ((This)->lpVtbl->Disconnect(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcProxyBuffer_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IRpcStubBuffer interface
 */
#ifndef __IRpcStubBuffer_INTERFACE_DEFINED__
#define __IRpcStubBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcStubBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcStubBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcStubBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcStubBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcStubBuffer *This);

    /*** IRpcStubBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *Connect)(
        IRpcStubBuffer *This,
        IUnknown *pUnkServer);

    void (STDMETHODCALLTYPE *Disconnect)(
        IRpcStubBuffer *This);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IRpcStubBuffer *This,
        RPCOLEMESSAGE *_prpcmsg,
        IRpcChannelBuffer *_pRpcChannelBuffer);

    IRpcStubBuffer * (STDMETHODCALLTYPE *IsIIDSupported)(
        IRpcStubBuffer *This,
        REFIID riid);

    ULONG (STDMETHODCALLTYPE *CountRefs)(
        IRpcStubBuffer *This);

    HRESULT (STDMETHODCALLTYPE *DebugServerQueryInterface)(
        IRpcStubBuffer *This,
        void **ppv);

    void (STDMETHODCALLTYPE *DebugServerRelease)(
        IRpcStubBuffer *This,
        void *pv);

    END_INTERFACE
} IRpcStubBufferVtbl;

interface IRpcStubBuffer {
    CONST_VTBL IRpcStubBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcStubBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcStubBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcStubBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcStubBuffer methods ***/
#define IRpcStubBuffer_Connect(This,pUnkServer) \
    ((This)->lpVtbl->Connect(This,pUnkServer))
#define IRpcStubBuffer_Disconnect(This) \
    ((This)->lpVtbl->Disconnect(This))
#define IRpcStubBuffer_Invoke(This,_prpcmsg,_pRpcChannelBuffer) \
    ((This)->lpVtbl->Invoke(This,_prpcmsg,_pRpcChannelBuffer))
#define IRpcStubBuffer_IsIIDSupported(This,riid) \
    ((This)->lpVtbl->IsIIDSupported(This,riid))
#define IRpcStubBuffer_CountRefs(This) \
    ((This)->lpVtbl->CountRefs(This))
#define IRpcStubBuffer_DebugServerQueryInterface(This,ppv) \
    ((This)->lpVtbl->DebugServerQueryInterface(This,ppv))
#define IRpcStubBuffer_DebugServerRelease(This,pv) \
    ((This)->lpVtbl->DebugServerRelease(This,pv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcStubBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPSFactoryBuffer interface
 */
#ifndef __IPSFactoryBuffer_INTERFACE_DEFINED__
#define __IPSFactoryBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPSFactoryBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPSFactoryBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPSFactoryBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPSFactoryBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPSFactoryBuffer *This);

    /*** IPSFactoryBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateProxy)(
        IPSFactoryBuffer *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        IRpcProxyBuffer **ppProxy,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *CreateStub)(
        IPSFactoryBuffer *This,
        REFIID riid,
        IUnknown *pUnkServer,
        IRpcStubBuffer **ppStub);

    END_INTERFACE
} IPSFactoryBufferVtbl;

interface IPSFactoryBuffer {
    CONST_VTBL IPSFactoryBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPSFactoryBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPSFactoryBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPSFactoryBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPSFactoryBuffer methods ***/
#define IPSFactoryBuffer_CreateProxy(This,pUnkOuter,riid,ppProxy,ppv) \
    ((This)->lpVtbl->CreateProxy(This,pUnkOuter,riid,ppProxy,ppv))
#define IPSFactoryBuffer_CreateStub(This,riid,pUnkServer,ppStub) \
    ((This)->lpVtbl->CreateStub(This,riid,pUnkServer,ppStub))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPSFactoryBuffer_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if  (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM) // DCOM
// This interface is only valid on Windows NT 4.0

typedef struct SChannelHookCallInfo {
    IID iid;
    DWORD cbSize;
    GUID uCausality;
    DWORD dwServerPid;
    DWORD iMethod;
    void *pObject;
} SChannelHookCallInfo;

/*****************************************************************************
 * IChannelHook interface
 */
#ifndef __IChannelHook_INTERFACE_DEFINED__
#define __IChannelHook_INTERFACE_DEFINED__

EXTERN_C const IID IID_IChannelHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IChannelHookVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IChannelHook *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IChannelHook *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IChannelHook *This);

    /*** IChannelHook methods ***/
    void (STDMETHODCALLTYPE *ClientGetSize)(
        IChannelHook *This,
        REFGUID uExtent,
        REFIID riid,
        ULONG *pDataSize);

    void (STDMETHODCALLTYPE *ClientFillBuffer)(
        IChannelHook *This,
        REFGUID uExtent,
        REFIID riid,
        ULONG *pDataSize,
        void *pDataBuffer);

    void (STDMETHODCALLTYPE *ClientNotify)(
        IChannelHook *This,
        REFGUID uExtent,
        REFIID riid,
        ULONG cbDataSize,
        void *pDataBuffer,
        DWORD lDataRep,
        HRESULT hrFault);

    void (STDMETHODCALLTYPE *ServerNotify)(
        IChannelHook *This,
        REFGUID uExtent,
        REFIID riid,
        ULONG cbDataSize,
        void *pDataBuffer,
        DWORD lDataRep);

    void (STDMETHODCALLTYPE *ServerGetSize)(
        IChannelHook *This,
        REFGUID uExtent,
        REFIID riid,
        HRESULT hrFault,
        ULONG *pDataSize);

    void (STDMETHODCALLTYPE *ServerFillBuffer)(
        IChannelHook *This,
        REFGUID uExtent,
        REFIID riid,
        ULONG *pDataSize,
        void *pDataBuffer,
        HRESULT hrFault);

    END_INTERFACE
} IChannelHookVtbl;

interface IChannelHook {
    CONST_VTBL IChannelHookVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IChannelHook_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IChannelHook_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IChannelHook_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IChannelHook methods ***/
#define IChannelHook_ClientGetSize(This,uExtent,riid,pDataSize) \
    ((This)->lpVtbl->ClientGetSize(This,uExtent,riid,pDataSize))
#define IChannelHook_ClientFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer) \
    ((This)->lpVtbl->ClientFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer))
#define IChannelHook_ClientNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep,hrFault) \
    ((This)->lpVtbl->ClientNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep,hrFault))
#define IChannelHook_ServerNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep) \
    ((This)->lpVtbl->ServerNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep))
#define IChannelHook_ServerGetSize(This,uExtent,riid,hrFault,pDataSize) \
    ((This)->lpVtbl->ServerGetSize(This,uExtent,riid,hrFault,pDataSize))
#define IChannelHook_ServerFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer,hrFault) \
    ((This)->lpVtbl->ServerFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer,hrFault))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IChannelHook_INTERFACE_DEFINED__ */

#endif //DCOM

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if  (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM) // DCOM
// This interface is only valid on Windows NT 4.0

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IClientSecurity interface
 */
#ifndef __IClientSecurity_INTERFACE_DEFINED__
#define __IClientSecurity_INTERFACE_DEFINED__

typedef struct tagSOLE_AUTHENTICATION_SERVICE {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    OLECHAR *pPrincipalName;
    HRESULT hr;
} SOLE_AUTHENTICATION_SERVICE;

typedef SOLE_AUTHENTICATION_SERVICE *PSOLE_AUTHENTICATION_SERVICE;

typedef enum tagEOLE_AUTHENTICATION_CAPABILITIES {
    EOAC_NONE = 0x0,
    EOAC_MUTUAL_AUTH = 0x1,
    EOAC_STATIC_CLOAKING = 0x20,
    EOAC_DYNAMIC_CLOAKING = 0x40,
    EOAC_ANY_AUTHORITY = 0x80,
    EOAC_MAKE_FULLSIC = 0x100,
    EOAC_DEFAULT = 0x800,
    EOAC_SECURE_REFS = 0x2,
    EOAC_ACCESS_CONTROL = 0x4,
    EOAC_APPID = 0x8,
    EOAC_DYNAMIC = 0x10,
    EOAC_REQUIRE_FULLSIC = 0x200,
    EOAC_AUTO_IMPERSONATE = 0x400,
    EOAC_DISABLE_AAA = 0x1000,
    EOAC_NO_CUSTOM_MARSHAL = 0x2000,
    EOAC_RESERVED1 = 0x4000
} EOLE_AUTHENTICATION_CAPABILITIES;

#define COLE_DEFAULT_PRINCIPAL  ((OLECHAR *)(INT_PTR)-1)
#define COLE_DEFAULT_AUTHINFO  ((void *)(INT_PTR)-1)

typedef struct tagSOLE_AUTHENTICATION_INFO {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    void *pAuthInfo;
} SOLE_AUTHENTICATION_INFO;
typedef struct tagSOLE_AUTHENTICATION_INFO *PSOLE_AUTHENTICATION_INFO;

typedef struct tagSOLE_AUTHENTICATION_LIST {
    DWORD cAuthInfo;
    SOLE_AUTHENTICATION_INFO *aAuthInfo;
} SOLE_AUTHENTICATION_LIST;
typedef struct tagSOLE_AUTHENTICATION_LIST *PSOLE_AUTHENTICATION_LIST;

EXTERN_C const IID IID_IClientSecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IClientSecurityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClientSecurity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClientSecurity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClientSecurity *This);

    /*** IClientSecurity methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryBlanket)(
        IClientSecurity *This,
        IUnknown *pProxy,
        DWORD *pAuthnSvc,
        DWORD *pAuthzSvc,
        OLECHAR **pServerPrincName,
        DWORD *pAuthnLevel,
        DWORD *pImpLevel,
        void **pAuthInfo,
        DWORD *pCapabilites);

    HRESULT (STDMETHODCALLTYPE *SetBlanket)(
        IClientSecurity *This,
        IUnknown *pProxy,
        DWORD dwAuthnSvc,
        DWORD dwAuthzSvc,
        OLECHAR *pServerPrincName,
        DWORD dwAuthnLevel,
        DWORD dwImpLevel,
        void *pAuthInfo,
        DWORD dwCapabilities);

    HRESULT (STDMETHODCALLTYPE *CopyProxy)(
        IClientSecurity *This,
        IUnknown *pProxy,
        IUnknown **ppCopy);

    END_INTERFACE
} IClientSecurityVtbl;

interface IClientSecurity {
    CONST_VTBL IClientSecurityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClientSecurity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IClientSecurity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IClientSecurity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IClientSecurity methods ***/
#define IClientSecurity_QueryBlanket(This,pProxy,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pAuthInfo,pCapabilites) \
    ((This)->lpVtbl->QueryBlanket(This,pProxy,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pAuthInfo,pCapabilites))
#define IClientSecurity_SetBlanket(This,pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,pAuthInfo,dwCapabilities) \
    ((This)->lpVtbl->SetBlanket(This,pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,pAuthInfo,dwCapabilities))
#define IClientSecurity_CopyProxy(This,pProxy,ppCopy) \
    ((This)->lpVtbl->CopyProxy(This,pProxy,ppCopy))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IClientSecurity_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IServerSecurity interface
 */
#ifndef __IServerSecurity_INTERFACE_DEFINED__
#define __IServerSecurity_INTERFACE_DEFINED__

EXTERN_C const IID IID_IServerSecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IServerSecurityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IServerSecurity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IServerSecurity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IServerSecurity *This);

    /*** IServerSecurity methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryBlanket)(
        IServerSecurity *This,
        DWORD *pAuthnSvc,
        DWORD *pAuthzSvc,
        OLECHAR **pServerPrincName,
        DWORD *pAuthnLevel,
        DWORD *pImpLevel,
        void **pPrivs,
        DWORD *pCapabilities);

    HRESULT (STDMETHODCALLTYPE *ImpersonateClient)(
        IServerSecurity *This);

    HRESULT (STDMETHODCALLTYPE *RevertToSelf)(
        IServerSecurity *This);

    BOOL (STDMETHODCALLTYPE *IsImpersonating)(
        IServerSecurity *This);

    END_INTERFACE
} IServerSecurityVtbl;

interface IServerSecurity {
    CONST_VTBL IServerSecurityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IServerSecurity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IServerSecurity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IServerSecurity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IServerSecurity methods ***/
#define IServerSecurity_QueryBlanket(This,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pPrivs,pCapabilities) \
    ((This)->lpVtbl->QueryBlanket(This,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pPrivs,pCapabilities))
#define IServerSecurity_ImpersonateClient(This) \
    ((This)->lpVtbl->ImpersonateClient(This))
#define IServerSecurity_RevertToSelf(This) \
    ((This)->lpVtbl->RevertToSelf(This))
#define IServerSecurity_IsImpersonating(This) \
    ((This)->lpVtbl->IsImpersonating(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IServerSecurity_INTERFACE_DEFINED__ */

typedef enum tagRPCOPT_PROPERTIES {
    COMBND_RPCTIMEOUT = 0x1,
    COMBND_SERVER_LOCALITY = 0x2,
    COMBND_RESERVED1 = 0x4,
    COMBND_RESERVED2 = 0x5,
    COMBND_RESERVED3 = 0x8,
    COMBND_RESERVED4 = 0x10
} RPCOPT_PROPERTIES;

typedef enum tagRPCOPT_SERVER_LOCALITY_VALUES {
    SERVER_LOCALITY_PROCESS_LOCAL = 0,
    SERVER_LOCALITY_MACHINE_LOCAL = 1,
    SERVER_LOCALITY_REMOTE = 2
} RPCOPT_SERVER_LOCALITY_VALUES;

/*****************************************************************************
 * IRpcOptions interface
 */
#ifndef __IRpcOptions_INTERFACE_DEFINED__
#define __IRpcOptions_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcOptions *This);

    /*** IRpcOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *Set)(
        IRpcOptions *This,
        IUnknown *pPrx,
        RPCOPT_PROPERTIES dwProperty,
        ULONG_PTR dwValue);

    HRESULT (STDMETHODCALLTYPE *Query)(
        IRpcOptions *This,
        IUnknown *pPrx,
        RPCOPT_PROPERTIES dwProperty,
        ULONG_PTR *pdwValue);

    END_INTERFACE
} IRpcOptionsVtbl;

interface IRpcOptions {
    CONST_VTBL IRpcOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcOptions_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcOptions_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcOptions methods ***/
#define IRpcOptions_Set(This,pPrx,dwProperty,dwValue) \
    ((This)->lpVtbl->Set(This,pPrx,dwProperty,dwValue))
#define IRpcOptions_Query(This,pPrx,dwProperty,pdwValue) \
    ((This)->lpVtbl->Query(This,pPrx,dwProperty,pdwValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcOptions_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef enum tagGLOBALOPT_PROPERTIES {
    COMGLB_EXCEPTION_HANDLING = 1,
    COMGLB_APPID = 2,
    COMGLB_RPC_THREADPOOL_SETTING = 3,
    COMGLB_RO_SETTINGS = 4,
    COMGLB_UNMARSHALING_POLICY = 5,
    COMGLB_PROPERTIES_RESERVED1 = 6,
    COMGLB_PROPERTIES_RESERVED2 = 7,
    COMGLB_PROPERTIES_RESERVED3 = 8
} GLOBALOPT_PROPERTIES;

typedef enum tagGLOBALOPT_EH_VALUES {
    COMGLB_EXCEPTION_HANDLE = 0,
    COMGLB_EXCEPTION_DONOT_HANDLE_FATAL = 1,
    COMGLB_EXCEPTION_DONOT_HANDLE = COMGLB_EXCEPTION_DONOT_HANDLE_FATAL,
    COMGLB_EXCEPTION_DONOT_HANDLE_ANY = 2
} GLOBALOPT_EH_VALUES;

typedef enum tagGLOBALOPT_RPCTP_VALUES {
    COMGLB_RPC_THREADPOOL_SETTING_DEFAULT_POOL = 0,
    COMGLB_RPC_THREADPOOL_SETTING_PRIVATE_POOL = 1
} GLOBALOPT_RPCTP_VALUES;

typedef enum tagGLOBALOPT_RO_FLAGS {
    COMGLB_STA_MODALLOOP_REMOVE_TOUCH_MESSAGES = 0x1,
    COMGLB_STA_MODALLOOP_SHARED_QUEUE_REMOVE_INPUT_MESSAGES = 0x2,
    COMGLB_STA_MODALLOOP_SHARED_QUEUE_DONOT_REMOVE_INPUT_MESSAGES = 0x4,
    COMGLB_FAST_RUNDOWN = 0x8,
    COMGLB_RESERVED1 = 0x10,
    COMGLB_RESERVED2 = 0x20,
    COMGLB_RESERVED3 = 0x40,
    COMGLB_STA_MODALLOOP_SHARED_QUEUE_REORDER_POINTER_MESSAGES = 0x80,
    COMGLB_RESERVED4 = 0x100,
    COMGLB_RESERVED5 = 0x200,
    COMGLB_RESERVED6 = 0x400
} GLOBALOPT_RO_FLAGS;

typedef enum tagGLOBALOPT_UNMARSHALING_POLICY_VALUES {
    COMGLB_UNMARSHALING_POLICY_NORMAL = 0,
    COMGLB_UNMARSHALING_POLICY_STRONG = 1,
    COMGLB_UNMARSHALING_POLICY_HYBRID = 2
} GLOBALOPT_UNMARSHALING_POLICY_VALUES;

/*****************************************************************************
 * IGlobalOptions interface
 */
#ifndef __IGlobalOptions_INTERFACE_DEFINED__
#define __IGlobalOptions_INTERFACE_DEFINED__

EXTERN_C const IID IID_IGlobalOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IGlobalOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGlobalOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGlobalOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGlobalOptions *This);

    /*** IGlobalOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *Set)(
        IGlobalOptions *This,
        GLOBALOPT_PROPERTIES dwProperty,
        ULONG_PTR dwValue);

    HRESULT (STDMETHODCALLTYPE *Query)(
        IGlobalOptions *This,
        GLOBALOPT_PROPERTIES dwProperty,
        ULONG_PTR *pdwValue);

    END_INTERFACE
} IGlobalOptionsVtbl;

interface IGlobalOptions {
    CONST_VTBL IGlobalOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IGlobalOptions_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IGlobalOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IGlobalOptions_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IGlobalOptions methods ***/
#define IGlobalOptions_Set(This,dwProperty,dwValue) \
    ((This)->lpVtbl->Set(This,dwProperty,dwValue))
#define IGlobalOptions_Query(This,dwProperty,pdwValue) \
    ((This)->lpVtbl->Query(This,dwProperty,pdwValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IGlobalOptions_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif //DCOM

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * ISurrogate interface
 */
#ifndef __ISurrogate_INTERFACE_DEFINED__
#define __ISurrogate_INTERFACE_DEFINED__

typedef ISurrogate *LPSURROGATE;

EXTERN_C const IID IID_ISurrogate;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISurrogateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISurrogate *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISurrogate *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISurrogate *This);

    /*** ISurrogate methods ***/
    HRESULT (STDMETHODCALLTYPE *LoadDllServer)(
        ISurrogate *This,
        REFCLSID Clsid);

    HRESULT (STDMETHODCALLTYPE *FreeSurrogate)(
        ISurrogate *This);

    END_INTERFACE
} ISurrogateVtbl;

interface ISurrogate {
    CONST_VTBL ISurrogateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISurrogate_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISurrogate_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISurrogate_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISurrogate methods ***/
#define ISurrogate_LoadDllServer(This,Clsid) \
    ((This)->lpVtbl->LoadDllServer(This,Clsid))
#define ISurrogate_FreeSurrogate(This) \
    ((This)->lpVtbl->FreeSurrogate(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISurrogate_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IGlobalInterfaceTable interface
 */
#ifndef __IGlobalInterfaceTable_INTERFACE_DEFINED__
#define __IGlobalInterfaceTable_INTERFACE_DEFINED__

typedef IGlobalInterfaceTable *LPGLOBALINTERFACETABLE;

EXTERN_C const IID IID_IGlobalInterfaceTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IGlobalInterfaceTableVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGlobalInterfaceTable *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGlobalInterfaceTable *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGlobalInterfaceTable *This);

    /*** IGlobalInterfaceTable methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterInterfaceInGlobal)(
        IGlobalInterfaceTable *This,
        IUnknown *pUnk,
        REFIID riid,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *RevokeInterfaceFromGlobal)(
        IGlobalInterfaceTable *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *GetInterfaceFromGlobal)(
        IGlobalInterfaceTable *This,
        DWORD dwCookie,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IGlobalInterfaceTableVtbl;

interface IGlobalInterfaceTable {
    CONST_VTBL IGlobalInterfaceTableVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IGlobalInterfaceTable_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IGlobalInterfaceTable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IGlobalInterfaceTable_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IGlobalInterfaceTable methods ***/
#define IGlobalInterfaceTable_RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie) \
    ((This)->lpVtbl->RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie))
#define IGlobalInterfaceTable_RevokeInterfaceFromGlobal(This,dwCookie) \
    ((This)->lpVtbl->RevokeInterfaceFromGlobal(This,dwCookie))
#define IGlobalInterfaceTable_GetInterfaceFromGlobal(This,dwCookie,riid,ppv) \
    ((This)->lpVtbl->GetInterfaceFromGlobal(This,dwCookie,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IGlobalInterfaceTable_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * ISynchronize interface
 */
#ifndef __ISynchronize_INTERFACE_DEFINED__
#define __ISynchronize_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISynchronize;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISynchronizeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISynchronize *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISynchronize *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISynchronize *This);

    /*** ISynchronize methods ***/
    HRESULT (STDMETHODCALLTYPE *Wait)(
        ISynchronize *This,
        DWORD dwFlags,
        DWORD dwMilliseconds);

    HRESULT (STDMETHODCALLTYPE *Signal)(
        ISynchronize *This);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ISynchronize *This);

    END_INTERFACE
} ISynchronizeVtbl;

interface ISynchronize {
    CONST_VTBL ISynchronizeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISynchronize_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISynchronize_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISynchronize_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISynchronize methods ***/
#define ISynchronize_Wait(This,dwFlags,dwMilliseconds) \
    ((This)->lpVtbl->Wait(This,dwFlags,dwMilliseconds))
#define ISynchronize_Signal(This) \
    ((This)->lpVtbl->Signal(This))
#define ISynchronize_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISynchronize_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISynchronizeHandle interface
 */
#ifndef __ISynchronizeHandle_INTERFACE_DEFINED__
#define __ISynchronizeHandle_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISynchronizeHandle;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISynchronizeHandleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISynchronizeHandle *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISynchronizeHandle *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISynchronizeHandle *This);

    /*** ISynchronizeHandle methods ***/
    HRESULT (STDMETHODCALLTYPE *GetHandle)(
        ISynchronizeHandle *This,
        HANDLE *ph);

    END_INTERFACE
} ISynchronizeHandleVtbl;

interface ISynchronizeHandle {
    CONST_VTBL ISynchronizeHandleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISynchronizeHandle_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISynchronizeHandle_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISynchronizeHandle_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISynchronizeHandle methods ***/
#define ISynchronizeHandle_GetHandle(This,ph) \
    ((This)->lpVtbl->GetHandle(This,ph))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISynchronizeHandle_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISynchronizeEvent interface
 */
#ifndef __ISynchronizeEvent_INTERFACE_DEFINED__
#define __ISynchronizeEvent_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISynchronizeEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISynchronizeEventVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISynchronizeEvent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISynchronizeEvent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISynchronizeEvent *This);

    /*** ISynchronizeHandle methods ***/
    HRESULT (STDMETHODCALLTYPE *GetHandle)(
        ISynchronizeEvent *This,
        HANDLE *ph);

    /*** ISynchronizeEvent methods ***/
    HRESULT (STDMETHODCALLTYPE *SetEventHandle)(
        ISynchronizeEvent *This,
        HANDLE *ph);

    END_INTERFACE
} ISynchronizeEventVtbl;

interface ISynchronizeEvent {
    CONST_VTBL ISynchronizeEventVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISynchronizeEvent_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISynchronizeEvent_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISynchronizeEvent_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISynchronizeHandle methods ***/
#define ISynchronizeEvent_GetHandle(This,ph) \
    ((This)->lpVtbl->GetHandle(This,ph))
/*** ISynchronizeEvent methods ***/
#define ISynchronizeEvent_SetEventHandle(This,ph) \
    ((This)->lpVtbl->SetEventHandle(This,ph))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISynchronizeEvent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISynchronizeContainer interface
 */
#ifndef __ISynchronizeContainer_INTERFACE_DEFINED__
#define __ISynchronizeContainer_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISynchronizeContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISynchronizeContainerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISynchronizeContainer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISynchronizeContainer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISynchronizeContainer *This);

    /*** ISynchronizeContainer methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSynchronize)(
        ISynchronizeContainer *This,
        ISynchronize *pSync);

    HRESULT (STDMETHODCALLTYPE *WaitMultiple)(
        ISynchronizeContainer *This,
        DWORD dwFlags,
        DWORD dwTimeOut,
        ISynchronize **ppSync);

    END_INTERFACE
} ISynchronizeContainerVtbl;

interface ISynchronizeContainer {
    CONST_VTBL ISynchronizeContainerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISynchronizeContainer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISynchronizeContainer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISynchronizeContainer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISynchronizeContainer methods ***/
#define ISynchronizeContainer_AddSynchronize(This,pSync) \
    ((This)->lpVtbl->AddSynchronize(This,pSync))
#define ISynchronizeContainer_WaitMultiple(This,dwFlags,dwTimeOut,ppSync) \
    ((This)->lpVtbl->WaitMultiple(This,dwFlags,dwTimeOut,ppSync))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISynchronizeContainer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISynchronizeMutex interface
 */
#ifndef __ISynchronizeMutex_INTERFACE_DEFINED__
#define __ISynchronizeMutex_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISynchronizeMutex;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISynchronizeMutexVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISynchronizeMutex *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISynchronizeMutex *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISynchronizeMutex *This);

    /*** ISynchronize methods ***/
    HRESULT (STDMETHODCALLTYPE *Wait)(
        ISynchronizeMutex *This,
        DWORD dwFlags,
        DWORD dwMilliseconds);

    HRESULT (STDMETHODCALLTYPE *Signal)(
        ISynchronizeMutex *This);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ISynchronizeMutex *This);

    /*** ISynchronizeMutex methods ***/
    HRESULT (STDMETHODCALLTYPE *ReleaseMutex)(
        ISynchronizeMutex *This);

    END_INTERFACE
} ISynchronizeMutexVtbl;

interface ISynchronizeMutex {
    CONST_VTBL ISynchronizeMutexVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISynchronizeMutex_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISynchronizeMutex_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISynchronizeMutex_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISynchronize methods ***/
#define ISynchronizeMutex_Wait(This,dwFlags,dwMilliseconds) \
    ((This)->lpVtbl->Wait(This,dwFlags,dwMilliseconds))
#define ISynchronizeMutex_Signal(This) \
    ((This)->lpVtbl->Signal(This))
#define ISynchronizeMutex_Reset(This) \
    ((This)->lpVtbl->Reset(This))
/*** ISynchronizeMutex methods ***/
#define ISynchronizeMutex_ReleaseMutex(This) \
    ((This)->lpVtbl->ReleaseMutex(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISynchronizeMutex_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICancelMethodCalls interface
 */
#ifndef __ICancelMethodCalls_INTERFACE_DEFINED__
#define __ICancelMethodCalls_INTERFACE_DEFINED__

typedef ICancelMethodCalls *LPCANCELMETHODCALLS;

EXTERN_C const IID IID_ICancelMethodCalls;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICancelMethodCallsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICancelMethodCalls *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICancelMethodCalls *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICancelMethodCalls *This);

    /*** ICancelMethodCalls methods ***/
    HRESULT (STDMETHODCALLTYPE *Cancel)(
        ICancelMethodCalls *This,
        ULONG ulSeconds);

    HRESULT (STDMETHODCALLTYPE *TestCancel)(
        ICancelMethodCalls *This);

    END_INTERFACE
} ICancelMethodCallsVtbl;

interface ICancelMethodCalls {
    CONST_VTBL ICancelMethodCallsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICancelMethodCalls_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICancelMethodCalls_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICancelMethodCalls_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICancelMethodCalls methods ***/
#define ICancelMethodCalls_Cancel(This,ulSeconds) \
    ((This)->lpVtbl->Cancel(This,ulSeconds))
#define ICancelMethodCalls_TestCancel(This) \
    ((This)->lpVtbl->TestCancel(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICancelMethodCalls_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAsyncManager interface
 */
#ifndef __IAsyncManager_INTERFACE_DEFINED__
#define __IAsyncManager_INTERFACE_DEFINED__

typedef enum tagDCOM_CALL_STATE {
    DCOM_NONE = 0x0,
    DCOM_CALL_COMPLETE = 0x1,
    DCOM_CALL_CANCELED = 0x2
} DCOM_CALL_STATE;

EXTERN_C const IID IID_IAsyncManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAsyncManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAsyncManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAsyncManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAsyncManager *This);

    /*** IAsyncManager methods ***/
    HRESULT (STDMETHODCALLTYPE *CompleteCall)(
        IAsyncManager *This,
        HRESULT Result);

    HRESULT (STDMETHODCALLTYPE *GetCallContext)(
        IAsyncManager *This,
        REFIID riid,
        void **pInterface);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IAsyncManager *This,
        ULONG *pulStateFlags);

    END_INTERFACE
} IAsyncManagerVtbl;

interface IAsyncManager {
    CONST_VTBL IAsyncManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAsyncManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAsyncManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAsyncManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAsyncManager methods ***/
#define IAsyncManager_CompleteCall(This,Result) \
    ((This)->lpVtbl->CompleteCall(This,Result))
#define IAsyncManager_GetCallContext(This,riid,pInterface) \
    ((This)->lpVtbl->GetCallContext(This,riid,pInterface))
#define IAsyncManager_GetState(This,pulStateFlags) \
    ((This)->lpVtbl->GetState(This,pulStateFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAsyncManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICallFactory interface
 */
#ifndef __ICallFactory_INTERFACE_DEFINED__
#define __ICallFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICallFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICallFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICallFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICallFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICallFactory *This);

    /*** ICallFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateCall)(
        ICallFactory *This,
        REFIID riid,
        IUnknown *pCtrlUnk,
        REFIID riid2,
        IUnknown **ppv);

    END_INTERFACE
} ICallFactoryVtbl;

interface ICallFactory {
    CONST_VTBL ICallFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICallFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICallFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICallFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICallFactory methods ***/
#define ICallFactory_CreateCall(This,riid,pCtrlUnk,riid2,ppv) \
    ((This)->lpVtbl->CreateCall(This,riid,pCtrlUnk,riid2,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICallFactory_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRpcHelper interface
 */
#ifndef __IRpcHelper_INTERFACE_DEFINED__
#define __IRpcHelper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRpcHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRpcHelperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRpcHelper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRpcHelper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRpcHelper *This);

    /*** IRpcHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDCOMProtocolVersion)(
        IRpcHelper *This,
        DWORD *pComVersion);

    HRESULT (STDMETHODCALLTYPE *GetIIDFromOBJREF)(
        IRpcHelper *This,
        void *pObjRef,
        IID **piid);

    END_INTERFACE
} IRpcHelperVtbl;

interface IRpcHelper {
    CONST_VTBL IRpcHelperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRpcHelper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRpcHelper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRpcHelper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRpcHelper methods ***/
#define IRpcHelper_GetDCOMProtocolVersion(This,pComVersion) \
    ((This)->lpVtbl->GetDCOMProtocolVersion(This,pComVersion))
#define IRpcHelper_GetIIDFromOBJREF(This,pObjRef,piid) \
    ((This)->lpVtbl->GetIIDFromOBJREF(This,pObjRef,piid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRpcHelper_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IReleaseMarshalBuffers interface
 */
#ifndef __IReleaseMarshalBuffers_INTERFACE_DEFINED__
#define __IReleaseMarshalBuffers_INTERFACE_DEFINED__

EXTERN_C const IID IID_IReleaseMarshalBuffers;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IReleaseMarshalBuffersVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IReleaseMarshalBuffers *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IReleaseMarshalBuffers *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IReleaseMarshalBuffers *This);

    /*** IReleaseMarshalBuffers methods ***/
    HRESULT (STDMETHODCALLTYPE *ReleaseMarshalBuffer)(
        IReleaseMarshalBuffers *This,
        RPCOLEMESSAGE *pMsg,
        DWORD dwFlags,
        IUnknown *pChnl);

    END_INTERFACE
} IReleaseMarshalBuffersVtbl;

interface IReleaseMarshalBuffers {
    CONST_VTBL IReleaseMarshalBuffersVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IReleaseMarshalBuffers_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IReleaseMarshalBuffers_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IReleaseMarshalBuffers_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IReleaseMarshalBuffers methods ***/
#define IReleaseMarshalBuffers_ReleaseMarshalBuffer(This,pMsg,dwFlags,pChnl) \
    ((This)->lpVtbl->ReleaseMarshalBuffer(This,pMsg,dwFlags,pChnl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IReleaseMarshalBuffers_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWaitMultiple interface
 */
#ifndef __IWaitMultiple_INTERFACE_DEFINED__
#define __IWaitMultiple_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWaitMultiple;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWaitMultipleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWaitMultiple *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWaitMultiple *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWaitMultiple *This);

    /*** IWaitMultiple methods ***/
    HRESULT (STDMETHODCALLTYPE *WaitMultiple)(
        IWaitMultiple *This,
        DWORD timeout,
        ISynchronize **pSync);

    HRESULT (STDMETHODCALLTYPE *AddSynchronize)(
        IWaitMultiple *This,
        ISynchronize *pSync);

    END_INTERFACE
} IWaitMultipleVtbl;

interface IWaitMultiple {
    CONST_VTBL IWaitMultipleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWaitMultiple_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWaitMultiple_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWaitMultiple_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWaitMultiple methods ***/
#define IWaitMultiple_WaitMultiple(This,timeout,pSync) \
    ((This)->lpVtbl->WaitMultiple(This,timeout,pSync))
#define IWaitMultiple_AddSynchronize(This,pSync) \
    ((This)->lpVtbl->AddSynchronize(This,pSync))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWaitMultiple_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAddrTrackingControl interface
 */
#ifndef __IAddrTrackingControl_INTERFACE_DEFINED__
#define __IAddrTrackingControl_INTERFACE_DEFINED__

typedef IAddrTrackingControl *LPADDRTRACKINGCONTROL;

EXTERN_C const IID IID_IAddrTrackingControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAddrTrackingControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAddrTrackingControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAddrTrackingControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAddrTrackingControl *This);

    /*** IAddrTrackingControl methods ***/
    HRESULT (STDMETHODCALLTYPE *EnableCOMDynamicAddrTracking)(
        IAddrTrackingControl *This);

    HRESULT (STDMETHODCALLTYPE *DisableCOMDynamicAddrTracking)(
        IAddrTrackingControl *This);

    END_INTERFACE
} IAddrTrackingControlVtbl;

interface IAddrTrackingControl {
    CONST_VTBL IAddrTrackingControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAddrTrackingControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAddrTrackingControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAddrTrackingControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAddrTrackingControl methods ***/
#define IAddrTrackingControl_EnableCOMDynamicAddrTracking(This) \
    ((This)->lpVtbl->EnableCOMDynamicAddrTracking(This))
#define IAddrTrackingControl_DisableCOMDynamicAddrTracking(This) \
    ((This)->lpVtbl->DisableCOMDynamicAddrTracking(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAddrTrackingControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAddrExclusionControl interface
 */
#ifndef __IAddrExclusionControl_INTERFACE_DEFINED__
#define __IAddrExclusionControl_INTERFACE_DEFINED__

typedef IAddrExclusionControl *LPADDREXCLUSIONCONTROL;

EXTERN_C const IID IID_IAddrExclusionControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAddrExclusionControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAddrExclusionControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAddrExclusionControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAddrExclusionControl *This);

    /*** IAddrExclusionControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCurrentAddrExclusionList)(
        IAddrExclusionControl *This,
        REFIID riid,
        void **ppEnumerator);

    HRESULT (STDMETHODCALLTYPE *UpdateAddrExclusionList)(
        IAddrExclusionControl *This,
        IUnknown *pEnumerator);

    END_INTERFACE
} IAddrExclusionControlVtbl;

interface IAddrExclusionControl {
    CONST_VTBL IAddrExclusionControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAddrExclusionControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAddrExclusionControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAddrExclusionControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAddrExclusionControl methods ***/
#define IAddrExclusionControl_GetCurrentAddrExclusionList(This,riid,ppEnumerator) \
    ((This)->lpVtbl->GetCurrentAddrExclusionList(This,riid,ppEnumerator))
#define IAddrExclusionControl_UpdateAddrExclusionList(This,pEnumerator) \
    ((This)->lpVtbl->UpdateAddrExclusionList(This,pEnumerator))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAddrExclusionControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPipeByte interface
 */
#ifndef __IPipeByte_INTERFACE_DEFINED__
#define __IPipeByte_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPipeByte;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPipeByteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPipeByte *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPipeByte *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPipeByte *This);

    /*** IPipeByte methods ***/
    HRESULT (STDMETHODCALLTYPE *Pull)(
        IPipeByte *This,
        BYTE *buf,
        ULONG cRequest,
        ULONG *pcReturned);

    HRESULT (STDMETHODCALLTYPE *Push)(
        IPipeByte *This,
        BYTE *buf,
        ULONG cSent);

    END_INTERFACE
} IPipeByteVtbl;

interface IPipeByte {
    CONST_VTBL IPipeByteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPipeByte_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPipeByte_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPipeByte_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPipeByte methods ***/
#define IPipeByte_Pull(This,buf,cRequest,pcReturned) \
    ((This)->lpVtbl->Pull(This,buf,cRequest,pcReturned))
#define IPipeByte_Push(This,buf,cSent) \
    ((This)->lpVtbl->Push(This,buf,cSent))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPipeByte_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIPipeByte interface
 */
#ifndef __AsyncIPipeByte_INTERFACE_DEFINED__
#define __AsyncIPipeByte_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIPipeByte;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIPipeByteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIPipeByte *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIPipeByte *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIPipeByte *This);

    /*** AsyncIPipeByte methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_Pull)(
        AsyncIPipeByte *This,
        ULONG cRequest);

    HRESULT (STDMETHODCALLTYPE *Finish_Pull)(
        AsyncIPipeByte *This,
        BYTE *buf,
        ULONG *pcReturned);

    HRESULT (STDMETHODCALLTYPE *Begin_Push)(
        AsyncIPipeByte *This,
        BYTE *buf,
        ULONG cSent);

    HRESULT (STDMETHODCALLTYPE *Finish_Push)(
        AsyncIPipeByte *This);

    END_INTERFACE
} AsyncIPipeByteVtbl;

interface AsyncIPipeByte {
    CONST_VTBL AsyncIPipeByteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIPipeByte_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIPipeByte_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIPipeByte_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIPipeByte methods ***/
#define AsyncIPipeByte_Begin_Pull(This,cRequest) \
    ((This)->lpVtbl->Begin_Pull(This,cRequest))
#define AsyncIPipeByte_Finish_Pull(This,buf,pcReturned) \
    ((This)->lpVtbl->Finish_Pull(This,buf,pcReturned))
#define AsyncIPipeByte_Begin_Push(This,buf,cSent) \
    ((This)->lpVtbl->Begin_Push(This,buf,cSent))
#define AsyncIPipeByte_Finish_Push(This) \
    ((This)->lpVtbl->Finish_Push(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __AsyncIPipeByte_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPipeLong interface
 */
#ifndef __IPipeLong_INTERFACE_DEFINED__
#define __IPipeLong_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPipeLong;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPipeLongVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPipeLong *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPipeLong *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPipeLong *This);

    /*** IPipeLong methods ***/
    HRESULT (STDMETHODCALLTYPE *Pull)(
        IPipeLong *This,
        LONG *buf,
        ULONG cRequest,
        ULONG *pcReturned);

    HRESULT (STDMETHODCALLTYPE *Push)(
        IPipeLong *This,
        LONG *buf,
        ULONG cSent);

    END_INTERFACE
} IPipeLongVtbl;

interface IPipeLong {
    CONST_VTBL IPipeLongVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPipeLong_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPipeLong_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPipeLong_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPipeLong methods ***/
#define IPipeLong_Pull(This,buf,cRequest,pcReturned) \
    ((This)->lpVtbl->Pull(This,buf,cRequest,pcReturned))
#define IPipeLong_Push(This,buf,cSent) \
    ((This)->lpVtbl->Push(This,buf,cSent))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPipeLong_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIPipeLong interface
 */
#ifndef __AsyncIPipeLong_INTERFACE_DEFINED__
#define __AsyncIPipeLong_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIPipeLong;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIPipeLongVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIPipeLong *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIPipeLong *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIPipeLong *This);

    /*** AsyncIPipeLong methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_Pull)(
        AsyncIPipeLong *This,
        ULONG cRequest);

    HRESULT (STDMETHODCALLTYPE *Finish_Pull)(
        AsyncIPipeLong *This,
        LONG *buf,
        ULONG *pcReturned);

    HRESULT (STDMETHODCALLTYPE *Begin_Push)(
        AsyncIPipeLong *This,
        LONG *buf,
        ULONG cSent);

    HRESULT (STDMETHODCALLTYPE *Finish_Push)(
        AsyncIPipeLong *This);

    END_INTERFACE
} AsyncIPipeLongVtbl;

interface AsyncIPipeLong {
    CONST_VTBL AsyncIPipeLongVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIPipeLong_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIPipeLong_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIPipeLong_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIPipeLong methods ***/
#define AsyncIPipeLong_Begin_Pull(This,cRequest) \
    ((This)->lpVtbl->Begin_Pull(This,cRequest))
#define AsyncIPipeLong_Finish_Pull(This,buf,pcReturned) \
    ((This)->lpVtbl->Finish_Pull(This,buf,pcReturned))
#define AsyncIPipeLong_Begin_Push(This,buf,cSent) \
    ((This)->lpVtbl->Begin_Push(This,buf,cSent))
#define AsyncIPipeLong_Finish_Push(This) \
    ((This)->lpVtbl->Finish_Push(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __AsyncIPipeLong_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPipeDouble interface
 */
#ifndef __IPipeDouble_INTERFACE_DEFINED__
#define __IPipeDouble_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPipeDouble;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPipeDoubleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPipeDouble *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPipeDouble *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPipeDouble *This);

    /*** IPipeDouble methods ***/
    HRESULT (STDMETHODCALLTYPE *Pull)(
        IPipeDouble *This,
        DOUBLE *buf,
        ULONG cRequest,
        ULONG *pcReturned);

    HRESULT (STDMETHODCALLTYPE *Push)(
        IPipeDouble *This,
        DOUBLE *buf,
        ULONG cSent);

    END_INTERFACE
} IPipeDoubleVtbl;

interface IPipeDouble {
    CONST_VTBL IPipeDoubleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPipeDouble_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPipeDouble_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPipeDouble_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPipeDouble methods ***/
#define IPipeDouble_Pull(This,buf,cRequest,pcReturned) \
    ((This)->lpVtbl->Pull(This,buf,cRequest,pcReturned))
#define IPipeDouble_Push(This,buf,cSent) \
    ((This)->lpVtbl->Push(This,buf,cSent))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPipeDouble_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIPipeDouble interface
 */
#ifndef __AsyncIPipeDouble_INTERFACE_DEFINED__
#define __AsyncIPipeDouble_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIPipeDouble;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIPipeDoubleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIPipeDouble *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIPipeDouble *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIPipeDouble *This);

    /*** AsyncIPipeDouble methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_Pull)(
        AsyncIPipeDouble *This,
        ULONG cRequest);

    HRESULT (STDMETHODCALLTYPE *Finish_Pull)(
        AsyncIPipeDouble *This,
        DOUBLE *buf,
        ULONG *pcReturned);

    HRESULT (STDMETHODCALLTYPE *Begin_Push)(
        AsyncIPipeDouble *This,
        DOUBLE *buf,
        ULONG cSent);

    HRESULT (STDMETHODCALLTYPE *Finish_Push)(
        AsyncIPipeDouble *This);

    END_INTERFACE
} AsyncIPipeDoubleVtbl;

interface AsyncIPipeDouble {
    CONST_VTBL AsyncIPipeDoubleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIPipeDouble_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIPipeDouble_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIPipeDouble_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIPipeDouble methods ***/
#define AsyncIPipeDouble_Begin_Pull(This,cRequest) \
    ((This)->lpVtbl->Begin_Pull(This,cRequest))
#define AsyncIPipeDouble_Finish_Pull(This,buf,pcReturned) \
    ((This)->lpVtbl->Finish_Pull(This,buf,pcReturned))
#define AsyncIPipeDouble_Begin_Push(This,buf,cSent) \
    ((This)->lpVtbl->Begin_Push(This,buf,cSent))
#define AsyncIPipeDouble_Finish_Push(This) \
    ((This)->lpVtbl->Finish_Push(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __AsyncIPipeDouble_INTERFACE_DEFINED__ */

#if defined USE_COM_CONTEXT_DEF || defined BUILDTYPE_COMSVCS || defined _COMBASEAPI_ || defined _OLE32_

typedef DWORD CPFLAGS;

typedef struct tagContextProperty {
    GUID policyId;
    CPFLAGS flags;
    IUnknown *pUnk;
} ContextProperty;

/*****************************************************************************
 * IEnumContextProps interface
 */
#ifndef __IEnumContextProps_INTERFACE_DEFINED__
#define __IEnumContextProps_INTERFACE_DEFINED__

typedef IEnumContextProps *LPENUMCONTEXTPROPS;

EXTERN_C const IID IID_IEnumContextProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumContextPropsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumContextProps *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumContextProps *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumContextProps *This);

    /*** IEnumContextProps methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumContextProps *This,
        ULONG celt,
        ContextProperty *pContextProperties,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumContextProps *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumContextProps *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumContextProps *This,
        IEnumContextProps **ppEnumContextProps);

    HRESULT (STDMETHODCALLTYPE *Count)(
        IEnumContextProps *This,
        ULONG *pcelt);

    END_INTERFACE
} IEnumContextPropsVtbl;

interface IEnumContextProps {
    CONST_VTBL IEnumContextPropsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumContextProps_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumContextProps_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumContextProps_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumContextProps methods ***/
#define IEnumContextProps_Next(This,celt,pContextProperties,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,pContextProperties,pceltFetched))
#define IEnumContextProps_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumContextProps_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumContextProps_Clone(This,ppEnumContextProps) \
    ((This)->lpVtbl->Clone(This,ppEnumContextProps))
#define IEnumContextProps_Count(This,pcelt) \
    ((This)->lpVtbl->Count(This,pcelt))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumContextProps_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IContext interface
 */
#ifndef __IContext_INTERFACE_DEFINED__
#define __IContext_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContext *This);

    /*** IContext methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IContext *This,
        REFGUID rpolicyId,
        CPFLAGS flags,
        IUnknown *pUnk);

    HRESULT (STDMETHODCALLTYPE *RemoveProperty)(
        IContext *This,
        REFGUID rPolicyId);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IContext *This,
        REFGUID rGuid,
        CPFLAGS *pFlags,
        IUnknown **ppUnk);

    HRESULT (STDMETHODCALLTYPE *EnumContextProps)(
        IContext *This,
        IEnumContextProps **ppEnumContextProps);

    END_INTERFACE
} IContextVtbl;

interface IContext {
    CONST_VTBL IContextVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContext_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContext_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContext methods ***/
#define IContext_SetProperty(This,rpolicyId,flags,pUnk) \
    ((This)->lpVtbl->SetProperty(This,rpolicyId,flags,pUnk))
#define IContext_RemoveProperty(This,rPolicyId) \
    ((This)->lpVtbl->RemoveProperty(This,rPolicyId))
#define IContext_GetProperty(This,rGuid,pFlags,ppUnk) \
    ((This)->lpVtbl->GetProperty(This,rGuid,pFlags,ppUnk))
#define IContext_EnumContextProps(This,ppEnumContextProps) \
    ((This)->lpVtbl->EnumContextProps(This,ppEnumContextProps))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContext_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef enum _APTTYPEQUALIFIER {
    APTTYPEQUALIFIER_NONE = 0,
    APTTYPEQUALIFIER_IMPLICIT_MTA = 1,
    APTTYPEQUALIFIER_NA_ON_MTA = 2,
    APTTYPEQUALIFIER_NA_ON_STA = 3,
    APTTYPEQUALIFIER_NA_ON_IMPLICIT_MTA = 4,
    APTTYPEQUALIFIER_NA_ON_MAINSTA = 5,
    APTTYPEQUALIFIER_APPLICATION_STA = 6,
    APTTYPEQUALIFIER_RESERVED_1 = 7
} APTTYPEQUALIFIER;

typedef enum _APTTYPE {
    APTTYPE_CURRENT = -1,
    APTTYPE_STA = 0,
    APTTYPE_MTA = 1,
    APTTYPE_NA = 2,
    APTTYPE_MAINSTA = 3
} APTTYPE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef enum _THDTYPE {
    THDTYPE_BLOCKMESSAGES = 0,
    THDTYPE_PROCESSMESSAGES = 1
} THDTYPE;

typedef DWORD APARTMENTID;

/*****************************************************************************
 * IComThreadingInfo interface
 */
#ifndef __IComThreadingInfo_INTERFACE_DEFINED__
#define __IComThreadingInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IComThreadingInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IComThreadingInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IComThreadingInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IComThreadingInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IComThreadingInfo *This);

    /*** IComThreadingInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCurrentApartmentType)(
        IComThreadingInfo *This,
        APTTYPE *pAptType);

    HRESULT (STDMETHODCALLTYPE *GetCurrentThreadType)(
        IComThreadingInfo *This,
        THDTYPE *pThreadType);

    HRESULT (STDMETHODCALLTYPE *GetCurrentLogicalThreadId)(
        IComThreadingInfo *This,
        GUID *pguidLogicalThreadId);

    HRESULT (STDMETHODCALLTYPE *SetCurrentLogicalThreadId)(
        IComThreadingInfo *This,
        REFGUID rguid);

    END_INTERFACE
} IComThreadingInfoVtbl;

interface IComThreadingInfo {
    CONST_VTBL IComThreadingInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IComThreadingInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IComThreadingInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IComThreadingInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IComThreadingInfo methods ***/
#define IComThreadingInfo_GetCurrentApartmentType(This,pAptType) \
    ((This)->lpVtbl->GetCurrentApartmentType(This,pAptType))
#define IComThreadingInfo_GetCurrentThreadType(This,pThreadType) \
    ((This)->lpVtbl->GetCurrentThreadType(This,pThreadType))
#define IComThreadingInfo_GetCurrentLogicalThreadId(This,pguidLogicalThreadId) \
    ((This)->lpVtbl->GetCurrentLogicalThreadId(This,pguidLogicalThreadId))
#define IComThreadingInfo_SetCurrentLogicalThreadId(This,rguid) \
    ((This)->lpVtbl->SetCurrentLogicalThreadId(This,rguid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IComThreadingInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IProcessInitControl interface
 */
#ifndef __IProcessInitControl_INTERFACE_DEFINED__
#define __IProcessInitControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IProcessInitControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IProcessInitControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProcessInitControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProcessInitControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProcessInitControl *This);

    /*** IProcessInitControl methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetInitializerTimeout)(
        IProcessInitControl *This,
        DWORD dwSecondsRemaining);

    END_INTERFACE
} IProcessInitControlVtbl;

interface IProcessInitControl {
    CONST_VTBL IProcessInitControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IProcessInitControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IProcessInitControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IProcessInitControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IProcessInitControl methods ***/
#define IProcessInitControl_ResetInitializerTimeout(This,dwSecondsRemaining) \
    ((This)->lpVtbl->ResetInitializerTimeout(This,dwSecondsRemaining))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IProcessInitControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFastRundown interface
 */
#ifndef __IFastRundown_INTERFACE_DEFINED__
#define __IFastRundown_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFastRundown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFastRundownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFastRundown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFastRundown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFastRundown *This);

    END_INTERFACE
} IFastRundownVtbl;

interface IFastRundown {
    CONST_VTBL IFastRundownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFastRundown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFastRundown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFastRundown_Release(This) \
    ((This)->lpVtbl->Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFastRundown_INTERFACE_DEFINED__ */

typedef enum CO_MARSHALING_CONTEXT_ATTRIBUTES {
    CO_MARSHALING_SOURCE_IS_APP_CONTAINER = 0,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_1 = 0x80000000,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_2 = 0x80000001,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_3 = 0x80000002,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_4 = 0x80000003,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_5 = 0x80000004,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_6 = 0x80000005,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_7 = 0x80000006,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_8 = 0x80000007,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_9 = 0x80000008,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_10 = 0x80000009,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_11 = 0x8000000a,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_12 = 0x8000000b,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_13 = 0x8000000c,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_14 = 0x8000000d,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_15 = 0x8000000e,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_16 = 0x8000000f,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_17 = 0x80000010,
    CO_MARSHALING_CONTEXT_ATTRIBUTE_RESERVED_18 = 0x80000011
} CO_MARSHALING_CONTEXT_ATTRIBUTES;

/*****************************************************************************
 * IMarshalingStream interface
 */
#ifndef __IMarshalingStream_INTERFACE_DEFINED__
#define __IMarshalingStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMarshalingStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMarshalingStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMarshalingStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMarshalingStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMarshalingStream *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IMarshalingStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IMarshalingStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        IMarshalingStream *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        IMarshalingStream *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        IMarshalingStream *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IMarshalingStream *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        IMarshalingStream *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        IMarshalingStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        IMarshalingStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        IMarshalingStream *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IMarshalingStream *This,
        IStream **ppstm);

    /*** IMarshalingStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMarshalingContextAttribute)(
        IMarshalingStream *This,
        CO_MARSHALING_CONTEXT_ATTRIBUTES attribute,
        ULONG_PTR *pAttributeValue);

    END_INTERFACE
} IMarshalingStreamVtbl;

interface IMarshalingStream {
    CONST_VTBL IMarshalingStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMarshalingStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMarshalingStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMarshalingStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define IMarshalingStream_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define IMarshalingStream_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define IMarshalingStream_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define IMarshalingStream_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define IMarshalingStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define IMarshalingStream_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define IMarshalingStream_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define IMarshalingStream_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define IMarshalingStream_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define IMarshalingStream_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define IMarshalingStream_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** IMarshalingStream methods ***/
#define IMarshalingStream_GetMarshalingContextAttribute(This,attribute,pAttributeValue) \
    ((This)->lpVtbl->GetMarshalingContextAttribute(This,attribute,pAttributeValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMarshalingStream_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IAgileReference interface
 */
#ifndef __IAgileReference_INTERFACE_DEFINED__
#define __IAgileReference_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else

EXTERN_C const IID IID_IAgileReference;

typedef struct IAgileReferenceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAgileReference *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAgileReference *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAgileReference *This);

    /*** IAgileReference methods ***/
    HRESULT (STDMETHODCALLTYPE *Resolve)(
        IAgileReference *This,
        REFIID riid,
        void **ppvObjectReference);

    END_INTERFACE
} IAgileReferenceVtbl;

interface IAgileReference {
    CONST_VTBL IAgileReferenceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAgileReference_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAgileReference_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAgileReference_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAgileReference methods ***/
#define IAgileReference_Resolve(This,riid,ppvObjectReference) \
    ((This)->lpVtbl->Resolve(This,riid,ppvObjectReference))
#endif /* COBJMACROS */

#endif /* __IAgileReference_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

EXTERN_C const GUID  IID_ICallbackWithNoReentrancyToApplicationSTA;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef struct MachineGlobalObjectTableRegistrationToken__ {
    int unused;
} *MachineGlobalObjectTableRegistrationToken;

/*****************************************************************************
 * IMachineGlobalObjectTable interface
 */
#ifndef __IMachineGlobalObjectTable_INTERFACE_DEFINED__
#define __IMachineGlobalObjectTable_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMachineGlobalObjectTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMachineGlobalObjectTableVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMachineGlobalObjectTable *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMachineGlobalObjectTable *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMachineGlobalObjectTable *This);

    /*** IMachineGlobalObjectTable methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterObject)(
        IMachineGlobalObjectTable *This,
        REFCLSID clsid,
        LPCWSTR identifier,
        IUnknown *object,
        MachineGlobalObjectTableRegistrationToken *token);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IMachineGlobalObjectTable *This,
        REFCLSID clsid,
        LPCWSTR identifier,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *RevokeObject)(
        IMachineGlobalObjectTable *This,
        MachineGlobalObjectTableRegistrationToken token);

    END_INTERFACE
} IMachineGlobalObjectTableVtbl;

interface IMachineGlobalObjectTable {
    CONST_VTBL IMachineGlobalObjectTableVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMachineGlobalObjectTable_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMachineGlobalObjectTable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMachineGlobalObjectTable_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMachineGlobalObjectTable methods ***/
#define IMachineGlobalObjectTable_RegisterObject(This,clsid,identifier,object,token) \
    ((This)->lpVtbl->RegisterObject(This,clsid,identifier,object,token))
#define IMachineGlobalObjectTable_GetObject(This,clsid,identifier,riid,ppv) \
    ((This)->lpVtbl->GetObject(This,clsid,identifier,riid,ppv))
#define IMachineGlobalObjectTable_RevokeObject(This,token) \
    ((This)->lpVtbl->RevokeObject(This,token))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMachineGlobalObjectTable_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * ISupportAllowLowerTrustActivation interface
 */
#ifndef __ISupportAllowLowerTrustActivation_INTERFACE_DEFINED__
#define __ISupportAllowLowerTrustActivation_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISupportAllowLowerTrustActivation;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISupportAllowLowerTrustActivationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISupportAllowLowerTrustActivation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISupportAllowLowerTrustActivation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISupportAllowLowerTrustActivation *This);

    END_INTERFACE
} ISupportAllowLowerTrustActivationVtbl;

interface ISupportAllowLowerTrustActivation {
    CONST_VTBL ISupportAllowLowerTrustActivationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISupportAllowLowerTrustActivation_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISupportAllowLowerTrustActivation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISupportAllowLowerTrustActivation_Release(This) \
    ((This)->lpVtbl->Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISupportAllowLowerTrustActivation_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#define _OBJIDLBASE_
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __objidlbase_h__ */
