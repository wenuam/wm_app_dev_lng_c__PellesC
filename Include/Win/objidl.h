/* Generated from objidl.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __objidl_h__
#define __objidl_h__

#if __POCC__ >= 500
#pragma once
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2198)  /* Nameless field is not standard */
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

#ifndef __IMallocSpy_FWD_DEFINED__
#define __IMallocSpy_FWD_DEFINED__
typedef interface IMallocSpy IMallocSpy;
#endif /* __IMallocSpy_FWD_DEFINED__ */

#ifndef __IBindCtx_FWD_DEFINED__
#define __IBindCtx_FWD_DEFINED__
typedef interface IBindCtx IBindCtx;
#endif /* __IBindCtx_FWD_DEFINED__ */

#ifndef __IEnumMoniker_FWD_DEFINED__
#define __IEnumMoniker_FWD_DEFINED__
typedef interface IEnumMoniker IEnumMoniker;
#endif /* __IEnumMoniker_FWD_DEFINED__ */

#ifndef __IRunnableObject_FWD_DEFINED__
#define __IRunnableObject_FWD_DEFINED__
typedef interface IRunnableObject IRunnableObject;
#endif /* __IRunnableObject_FWD_DEFINED__ */

#ifndef __IRunningObjectTable_FWD_DEFINED__
#define __IRunningObjectTable_FWD_DEFINED__
typedef interface IRunningObjectTable IRunningObjectTable;
#endif /* __IRunningObjectTable_FWD_DEFINED__ */

#ifndef __IPersist_FWD_DEFINED__
#define __IPersist_FWD_DEFINED__
typedef interface IPersist IPersist;
#endif /* __IPersist_FWD_DEFINED__ */

#ifndef __IPersistStream_FWD_DEFINED__
#define __IPersistStream_FWD_DEFINED__
typedef interface IPersistStream IPersistStream;
#endif /* __IPersistStream_FWD_DEFINED__ */

#ifndef __IMoniker_FWD_DEFINED__
#define __IMoniker_FWD_DEFINED__
typedef interface IMoniker IMoniker;
#endif /* __IMoniker_FWD_DEFINED__ */

#ifndef __IROTData_FWD_DEFINED__
#define __IROTData_FWD_DEFINED__
typedef interface IROTData IROTData;
#endif /* __IROTData_FWD_DEFINED__ */

#ifndef __IEnumSTATSTG_FWD_DEFINED__
#define __IEnumSTATSTG_FWD_DEFINED__
typedef interface IEnumSTATSTG IEnumSTATSTG;
#endif /* __IEnumSTATSTG_FWD_DEFINED__ */

#ifndef __IStorage_FWD_DEFINED__
#define __IStorage_FWD_DEFINED__
typedef interface IStorage IStorage;
#endif /* __IStorage_FWD_DEFINED__ */

#ifndef __IPersistFile_FWD_DEFINED__
#define __IPersistFile_FWD_DEFINED__
typedef interface IPersistFile IPersistFile;
#endif /* __IPersistFile_FWD_DEFINED__ */

#ifndef __IPersistStorage_FWD_DEFINED__
#define __IPersistStorage_FWD_DEFINED__
typedef interface IPersistStorage IPersistStorage;
#endif /* __IPersistStorage_FWD_DEFINED__ */

#ifndef __ILockBytes_FWD_DEFINED__
#define __ILockBytes_FWD_DEFINED__
typedef interface ILockBytes ILockBytes;
#endif /* __ILockBytes_FWD_DEFINED__ */

#ifndef __IEnumFORMATETC_FWD_DEFINED__
#define __IEnumFORMATETC_FWD_DEFINED__
typedef interface IEnumFORMATETC IEnumFORMATETC;
#endif /* __IEnumFORMATETC_FWD_DEFINED__ */

#ifndef __IEnumSTATDATA_FWD_DEFINED__
#define __IEnumSTATDATA_FWD_DEFINED__
typedef interface IEnumSTATDATA IEnumSTATDATA;
#endif /* __IEnumSTATDATA_FWD_DEFINED__ */

#ifndef __IRootStorage_FWD_DEFINED__
#define __IRootStorage_FWD_DEFINED__
typedef interface IRootStorage IRootStorage;
#endif /* __IRootStorage_FWD_DEFINED__ */

#ifndef __IAdviseSink_FWD_DEFINED__
#define __IAdviseSink_FWD_DEFINED__
typedef interface IAdviseSink IAdviseSink;
#endif /* __IAdviseSink_FWD_DEFINED__ */

#ifndef __AsyncIAdviseSink_FWD_DEFINED__
#define __AsyncIAdviseSink_FWD_DEFINED__
typedef interface AsyncIAdviseSink AsyncIAdviseSink;
#endif /* __AsyncIAdviseSink_FWD_DEFINED__ */

#ifndef __IAdviseSink2_FWD_DEFINED__
#define __IAdviseSink2_FWD_DEFINED__
typedef interface IAdviseSink2 IAdviseSink2;
#endif /* __IAdviseSink2_FWD_DEFINED__ */

#ifndef __AsyncIAdviseSink2_FWD_DEFINED__
#define __AsyncIAdviseSink2_FWD_DEFINED__
typedef interface AsyncIAdviseSink2 AsyncIAdviseSink2;
#endif /* __AsyncIAdviseSink2_FWD_DEFINED__ */

#ifndef __IDataObject_FWD_DEFINED__
#define __IDataObject_FWD_DEFINED__
typedef interface IDataObject IDataObject;
#endif /* __IDataObject_FWD_DEFINED__ */

#ifndef __IDataAdviseHolder_FWD_DEFINED__
#define __IDataAdviseHolder_FWD_DEFINED__
typedef interface IDataAdviseHolder IDataAdviseHolder;
#endif /* __IDataAdviseHolder_FWD_DEFINED__ */

#ifndef __IMessageFilter_FWD_DEFINED__
#define __IMessageFilter_FWD_DEFINED__
typedef interface IMessageFilter IMessageFilter;
#endif /* __IMessageFilter_FWD_DEFINED__ */

#ifndef __IClassActivator_FWD_DEFINED__
#define __IClassActivator_FWD_DEFINED__
typedef interface IClassActivator IClassActivator;
#endif /* __IClassActivator_FWD_DEFINED__ */

#ifndef __IFillLockBytes_FWD_DEFINED__
#define __IFillLockBytes_FWD_DEFINED__
typedef interface IFillLockBytes IFillLockBytes;
#endif /* __IFillLockBytes_FWD_DEFINED__ */

#ifndef __IProgressNotify_FWD_DEFINED__
#define __IProgressNotify_FWD_DEFINED__
typedef interface IProgressNotify IProgressNotify;
#endif /* __IProgressNotify_FWD_DEFINED__ */

#ifndef __ILayoutStorage_FWD_DEFINED__
#define __ILayoutStorage_FWD_DEFINED__
typedef interface ILayoutStorage ILayoutStorage;
#endif /* __ILayoutStorage_FWD_DEFINED__ */

#ifndef __IBlockingLock_FWD_DEFINED__
#define __IBlockingLock_FWD_DEFINED__
typedef interface IBlockingLock IBlockingLock;
#endif /* __IBlockingLock_FWD_DEFINED__ */

#ifndef __ITimeAndNoticeControl_FWD_DEFINED__
#define __ITimeAndNoticeControl_FWD_DEFINED__
typedef interface ITimeAndNoticeControl ITimeAndNoticeControl;
#endif /* __ITimeAndNoticeControl_FWD_DEFINED__ */

#ifndef __IOplockStorage_FWD_DEFINED__
#define __IOplockStorage_FWD_DEFINED__
typedef interface IOplockStorage IOplockStorage;
#endif /* __IOplockStorage_FWD_DEFINED__ */

#ifndef __IDirectWriterLock_FWD_DEFINED__
#define __IDirectWriterLock_FWD_DEFINED__
typedef interface IDirectWriterLock IDirectWriterLock;
#endif /* __IDirectWriterLock_FWD_DEFINED__ */

#ifndef __IUrlMon_FWD_DEFINED__
#define __IUrlMon_FWD_DEFINED__
typedef interface IUrlMon IUrlMon;
#endif /* __IUrlMon_FWD_DEFINED__ */

#ifndef __IForegroundTransfer_FWD_DEFINED__
#define __IForegroundTransfer_FWD_DEFINED__
typedef interface IForegroundTransfer IForegroundTransfer;
#endif /* __IForegroundTransfer_FWD_DEFINED__ */

#ifndef __IThumbnailExtractor_FWD_DEFINED__
#define __IThumbnailExtractor_FWD_DEFINED__
typedef interface IThumbnailExtractor IThumbnailExtractor;
#endif /* __IThumbnailExtractor_FWD_DEFINED__ */

#ifndef __IDummyHICONIncluder_FWD_DEFINED__
#define __IDummyHICONIncluder_FWD_DEFINED__
typedef interface IDummyHICONIncluder IDummyHICONIncluder;
#endif /* __IDummyHICONIncluder_FWD_DEFINED__ */

#ifndef __IProcessLock_FWD_DEFINED__
#define __IProcessLock_FWD_DEFINED__
typedef interface IProcessLock IProcessLock;
#endif /* __IProcessLock_FWD_DEFINED__ */

#ifndef __ISurrogateService_FWD_DEFINED__
#define __ISurrogateService_FWD_DEFINED__
typedef interface ISurrogateService ISurrogateService;
#endif /* __ISurrogateService_FWD_DEFINED__ */

#ifndef __IInitializeSpy_FWD_DEFINED__
#define __IInitializeSpy_FWD_DEFINED__
typedef interface IInitializeSpy IInitializeSpy;
#endif /* __IInitializeSpy_FWD_DEFINED__ */

#ifndef __IApartmentShutdown_FWD_DEFINED__
#define __IApartmentShutdown_FWD_DEFINED__
typedef interface IApartmentShutdown IApartmentShutdown;
#endif /* __IApartmentShutdown_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwn.h"
#include "wtypes.h"


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

EXTERN_C const IID IID_IAgileReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
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

#endif /* C */

#endif /* __IAgileReference_INTERFACE_DEFINED__ */

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


#ifndef __IMoniker_FWD_DEFINED__
#define __IMoniker_FWD_DEFINED__
typedef interface IMoniker IMoniker;
#endif /* __IMoniker_FWD_DEFINED__ */

#ifndef __IEnumMoniker_FWD_DEFINED__
#define __IEnumMoniker_FWD_DEFINED__
typedef interface IEnumMoniker IEnumMoniker;
#endif /* __IEnumMoniker_FWD_DEFINED__ */

#ifndef __IRunningObjectTable_FWD_DEFINED__
#define __IRunningObjectTable_FWD_DEFINED__
typedef interface IRunningObjectTable IRunningObjectTable;
#endif /* __IRunningObjectTable_FWD_DEFINED__ */

#ifndef __IStorage_FWD_DEFINED__
#define __IStorage_FWD_DEFINED__
typedef interface IStorage IStorage;
#endif /* __IStorage_FWD_DEFINED__ */

#ifndef __IEnumSTATSTG_FWD_DEFINED__
#define __IEnumSTATSTG_FWD_DEFINED__
typedef interface IEnumSTATSTG IEnumSTATSTG;
#endif /* __IEnumSTATSTG_FWD_DEFINED__ */

#ifndef __IAdviseSink_FWD_DEFINED__
#define __IAdviseSink_FWD_DEFINED__
typedef interface IAdviseSink IAdviseSink;
#endif /* __IAdviseSink_FWD_DEFINED__ */

#ifndef __IBindCtx_FWD_DEFINED__
#define __IBindCtx_FWD_DEFINED__
typedef interface IBindCtx IBindCtx;
#endif /* __IBindCtx_FWD_DEFINED__ */


#ifndef __IEnumMoniker_FWD_DEFINED__
#define __IEnumMoniker_FWD_DEFINED__
typedef interface IEnumMoniker IEnumMoniker;
#endif /* __IEnumMoniker_FWD_DEFINED__ */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IMallocSpy interface
 */
#ifndef __IMallocSpy_INTERFACE_DEFINED__
#define __IMallocSpy_INTERFACE_DEFINED__

typedef IMallocSpy *LPMALLOCSPY;

EXTERN_C const IID IID_IMallocSpy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMallocSpyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMallocSpy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMallocSpy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMallocSpy *This);

    /*** IMallocSpy methods ***/
    SIZE_T (STDMETHODCALLTYPE *PreAlloc)(
        IMallocSpy *This,
        SIZE_T cbRequest);

    void * (STDMETHODCALLTYPE *PostAlloc)(
        IMallocSpy *This,
        void *pActual);

    void * (STDMETHODCALLTYPE *PreFree)(
        IMallocSpy *This,
        void *pRequest,
        BOOL fSpyed);

    void (STDMETHODCALLTYPE *PostFree)(
        IMallocSpy *This,
        BOOL fSpyed);

    SIZE_T (STDMETHODCALLTYPE *PreRealloc)(
        IMallocSpy *This,
        void *pRequest,
        SIZE_T cbRequest,
        void **ppNewRequest,
        BOOL fSpyed);

    void * (STDMETHODCALLTYPE *PostRealloc)(
        IMallocSpy *This,
        void *pActual,
        BOOL fSpyed);

    void * (STDMETHODCALLTYPE *PreGetSize)(
        IMallocSpy *This,
        void *pRequest,
        BOOL fSpyed);

    SIZE_T (STDMETHODCALLTYPE *PostGetSize)(
        IMallocSpy *This,
        SIZE_T cbActual,
        BOOL fSpyed);

    void * (STDMETHODCALLTYPE *PreDidAlloc)(
        IMallocSpy *This,
        void *pRequest,
        BOOL fSpyed);

    int (STDMETHODCALLTYPE *PostDidAlloc)(
        IMallocSpy *This,
        void *pRequest,
        BOOL fSpyed,
        int fActual);

    void (STDMETHODCALLTYPE *PreHeapMinimize)(
        IMallocSpy *This);

    void (STDMETHODCALLTYPE *PostHeapMinimize)(
        IMallocSpy *This);

    END_INTERFACE
} IMallocSpyVtbl;

interface IMallocSpy {
    CONST_VTBL IMallocSpyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMallocSpy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMallocSpy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMallocSpy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMallocSpy methods ***/
#define IMallocSpy_PreAlloc(This,cbRequest) \
    ((This)->lpVtbl->PreAlloc(This,cbRequest))
#define IMallocSpy_PostAlloc(This,pActual) \
    ((This)->lpVtbl->PostAlloc(This,pActual))
#define IMallocSpy_PreFree(This,pRequest,fSpyed) \
    ((This)->lpVtbl->PreFree(This,pRequest,fSpyed))
#define IMallocSpy_PostFree(This,fSpyed) \
    ((This)->lpVtbl->PostFree(This,fSpyed))
#define IMallocSpy_PreRealloc(This,pRequest,cbRequest,ppNewRequest,fSpyed) \
    ((This)->lpVtbl->PreRealloc(This,pRequest,cbRequest,ppNewRequest,fSpyed))
#define IMallocSpy_PostRealloc(This,pActual,fSpyed) \
    ((This)->lpVtbl->PostRealloc(This,pActual,fSpyed))
#define IMallocSpy_PreGetSize(This,pRequest,fSpyed) \
    ((This)->lpVtbl->PreGetSize(This,pRequest,fSpyed))
#define IMallocSpy_PostGetSize(This,cbActual,fSpyed) \
    ((This)->lpVtbl->PostGetSize(This,cbActual,fSpyed))
#define IMallocSpy_PreDidAlloc(This,pRequest,fSpyed) \
    ((This)->lpVtbl->PreDidAlloc(This,pRequest,fSpyed))
#define IMallocSpy_PostDidAlloc(This,pRequest,fSpyed,fActual) \
    ((This)->lpVtbl->PostDidAlloc(This,pRequest,fSpyed,fActual))
#define IMallocSpy_PreHeapMinimize(This) \
    ((This)->lpVtbl->PreHeapMinimize(This))
#define IMallocSpy_PostHeapMinimize(This) \
    ((This)->lpVtbl->PostHeapMinimize(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMallocSpy_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IBindCtx interface
 */
#ifndef __IBindCtx_INTERFACE_DEFINED__
#define __IBindCtx_INTERFACE_DEFINED__

typedef IBindCtx *LPBC;

typedef IBindCtx *LPBINDCTX;

typedef struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
} BIND_OPTS;
typedef struct tagBIND_OPTS *LPBIND_OPTS;

typedef struct tagBIND_OPTS2 {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
    DWORD dwTrackFlags;
    DWORD dwClassContext;
    LCID locale;
    COSERVERINFO *pServerInfo;
} BIND_OPTS2;
typedef struct tagBIND_OPTS2 *LPBIND_OPTS2;

typedef struct tagBIND_OPTS3 {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
    DWORD dwTrackFlags;
    DWORD dwClassContext;
    LCID locale;
    COSERVERINFO *pServerInfo;
    HWND hwnd;
} BIND_OPTS3;
typedef struct tagBIND_OPTS3 *LPBIND_OPTS3;

typedef enum tagBIND_FLAGS {
    BIND_MAYBOTHERUSER = 1,
    BIND_JUSTTESTEXISTENCE = 2
} BIND_FLAGS;

EXTERN_C const IID IID_IBindCtx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindCtxVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindCtx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindCtx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindCtx *This);

    /*** IBindCtx methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterObjectBound)(
        IBindCtx *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *RevokeObjectBound)(
        IBindCtx *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *ReleaseBoundObjects)(
        IBindCtx *This);

    HRESULT (STDMETHODCALLTYPE *SetBindOptions)(
        IBindCtx *This,
        BIND_OPTS *pbindopts);

    HRESULT (STDMETHODCALLTYPE *GetBindOptions)(
        IBindCtx *This,
        BIND_OPTS *pbindopts);

    HRESULT (STDMETHODCALLTYPE *GetRunningObjectTable)(
        IBindCtx *This,
        IRunningObjectTable **pprot);

    HRESULT (STDMETHODCALLTYPE *RegisterObjectParam)(
        IBindCtx *This,
        LPOLESTR pszKey,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *GetObjectParam)(
        IBindCtx *This,
        LPOLESTR pszKey,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *EnumObjectParam)(
        IBindCtx *This,
        IEnumString **ppenum);

    HRESULT (STDMETHODCALLTYPE *RevokeObjectParam)(
        IBindCtx *This,
        LPOLESTR pszKey);

    END_INTERFACE
} IBindCtxVtbl;

interface IBindCtx {
    CONST_VTBL IBindCtxVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindCtx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindCtx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindCtx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindCtx methods ***/
#define IBindCtx_RegisterObjectBound(This,punk) \
    ((This)->lpVtbl->RegisterObjectBound(This,punk))
#define IBindCtx_RevokeObjectBound(This,punk) \
    ((This)->lpVtbl->RevokeObjectBound(This,punk))
#define IBindCtx_ReleaseBoundObjects(This) \
    ((This)->lpVtbl->ReleaseBoundObjects(This))
#define IBindCtx_SetBindOptions(This,pbindopts) \
    ((This)->lpVtbl->SetBindOptions(This,pbindopts))
#define IBindCtx_GetBindOptions(This,pbindopts) \
    ((This)->lpVtbl->GetBindOptions(This,pbindopts))
#define IBindCtx_GetRunningObjectTable(This,pprot) \
    ((This)->lpVtbl->GetRunningObjectTable(This,pprot))
#define IBindCtx_RegisterObjectParam(This,pszKey,punk) \
    ((This)->lpVtbl->RegisterObjectParam(This,pszKey,punk))
#define IBindCtx_GetObjectParam(This,pszKey,ppunk) \
    ((This)->lpVtbl->GetObjectParam(This,pszKey,ppunk))
#define IBindCtx_EnumObjectParam(This,ppenum) \
    ((This)->lpVtbl->EnumObjectParam(This,ppenum))
#define IBindCtx_RevokeObjectParam(This,pszKey) \
    ((This)->lpVtbl->RevokeObjectParam(This,pszKey))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBindCtx_RemoteSetBindOptions_Proxy(
    IBindCtx *This,
    BIND_OPTS2 *pbindopts);

void __RPC_STUB IBindCtx_RemoteSetBindOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IBindCtx_RemoteGetBindOptions_Proxy(
    IBindCtx *This,
    BIND_OPTS2 *pbindopts);

void __RPC_STUB IBindCtx_RemoteGetBindOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBindCtx_SetBindOptions_Proxy(
    BIND_OPTS *pbindopts);
HRESULT IBindCtx_SetBindOptions_Stub(
    BIND_OPTS2 *pbindopts);
HRESULT IBindCtx_GetBindOptions_Proxy(
    BIND_OPTS *pbindopts);
HRESULT IBindCtx_GetBindOptions_Stub(
    BIND_OPTS2 *pbindopts);
#endif /* __IBindCtx_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumMoniker interface
 */
#ifndef __IEnumMoniker_INTERFACE_DEFINED__
#define __IEnumMoniker_INTERFACE_DEFINED__

typedef IEnumMoniker *LPENUMMONIKER;

EXTERN_C const IID IID_IEnumMoniker;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumMonikerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumMoniker *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumMoniker *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumMoniker *This);

    /*** IEnumMoniker methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumMoniker *This,
        ULONG celt,
        IMoniker **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumMoniker *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumMoniker *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumMoniker *This,
        IEnumMoniker **ppenum);

    END_INTERFACE
} IEnumMonikerVtbl;

interface IEnumMoniker {
    CONST_VTBL IEnumMonikerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumMoniker_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumMoniker_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumMoniker_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumMoniker methods ***/
#define IEnumMoniker_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumMoniker_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumMoniker_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumMoniker_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumMoniker_RemoteNext_Proxy(
    IEnumMoniker *This,
    ULONG celt,
    IMoniker **rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumMoniker_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumMoniker_Next_Proxy(
    ULONG celt,
    IMoniker **rgelt,
    ULONG *pceltFetched);
HRESULT IEnumMoniker_Next_Stub(
    ULONG celt,
    IMoniker **rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumMoniker_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IRunnableObject interface
 */
#ifndef __IRunnableObject_INTERFACE_DEFINED__
#define __IRunnableObject_INTERFACE_DEFINED__

typedef IRunnableObject *LPRUNNABLEOBJECT;

EXTERN_C const IID IID_IRunnableObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRunnableObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRunnableObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRunnableObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRunnableObject *This);

    /*** IRunnableObject methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRunningClass)(
        IRunnableObject *This,
        LPCLSID lpClsid);

    HRESULT (STDMETHODCALLTYPE *Run)(
        IRunnableObject *This,
        LPBINDCTX pbc);

    BOOL (STDMETHODCALLTYPE *IsRunning)(
        IRunnableObject *This);

    HRESULT (STDMETHODCALLTYPE *LockRunning)(
        IRunnableObject *This,
        BOOL fLock,
        BOOL fLastUnlockCloses);

    HRESULT (STDMETHODCALLTYPE *SetContainedObject)(
        IRunnableObject *This,
        BOOL fContained);

    END_INTERFACE
} IRunnableObjectVtbl;

interface IRunnableObject {
    CONST_VTBL IRunnableObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRunnableObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRunnableObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRunnableObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRunnableObject methods ***/
#define IRunnableObject_GetRunningClass(This,lpClsid) \
    ((This)->lpVtbl->GetRunningClass(This,lpClsid))
#define IRunnableObject_Run(This,pbc) \
    ((This)->lpVtbl->Run(This,pbc))
#define IRunnableObject_IsRunning(This) \
    ((This)->lpVtbl->IsRunning(This))
#define IRunnableObject_LockRunning(This,fLock,fLastUnlockCloses) \
    ((This)->lpVtbl->LockRunning(This,fLock,fLastUnlockCloses))
#define IRunnableObject_SetContainedObject(This,fContained) \
    ((This)->lpVtbl->SetContainedObject(This,fContained))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IRunnableObject_RemoteIsRunning_Proxy(
    IRunnableObject *This);

void __RPC_STUB IRunnableObject_RemoteIsRunning_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

BOOL IRunnableObject_IsRunning_Proxy(
    void);
HRESULT IRunnableObject_IsRunning_Stub(
    void);
#endif /* __IRunnableObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRunningObjectTable interface
 */
#ifndef __IRunningObjectTable_INTERFACE_DEFINED__
#define __IRunningObjectTable_INTERFACE_DEFINED__

typedef IRunningObjectTable *LPRUNNINGOBJECTTABLE;

EXTERN_C const IID IID_IRunningObjectTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRunningObjectTableVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRunningObjectTable *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRunningObjectTable *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRunningObjectTable *This);

    /*** IRunningObjectTable methods ***/
    HRESULT (STDMETHODCALLTYPE *Register)(
        IRunningObjectTable *This,
        DWORD grfFlags,
        IUnknown *punkObject,
        IMoniker *pmkObjectName,
        DWORD *pdwRegister);

    HRESULT (STDMETHODCALLTYPE *Revoke)(
        IRunningObjectTable *This,
        DWORD dwRegister);

    HRESULT (STDMETHODCALLTYPE *IsRunning)(
        IRunningObjectTable *This,
        IMoniker *pmkObjectName);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IRunningObjectTable *This,
        IMoniker *pmkObjectName,
        IUnknown **ppunkObject);

    HRESULT (STDMETHODCALLTYPE *NoteChangeTime)(
        IRunningObjectTable *This,
        DWORD dwRegister,
        FILETIME *pfiletime);

    HRESULT (STDMETHODCALLTYPE *GetTimeOfLastChange)(
        IRunningObjectTable *This,
        IMoniker *pmkObjectName,
        FILETIME *pfiletime);

    HRESULT (STDMETHODCALLTYPE *EnumRunning)(
        IRunningObjectTable *This,
        IEnumMoniker **ppenumMoniker);

    END_INTERFACE
} IRunningObjectTableVtbl;

interface IRunningObjectTable {
    CONST_VTBL IRunningObjectTableVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRunningObjectTable_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRunningObjectTable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRunningObjectTable_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRunningObjectTable methods ***/
#define IRunningObjectTable_Register(This,grfFlags,punkObject,pmkObjectName,pdwRegister) \
    ((This)->lpVtbl->Register(This,grfFlags,punkObject,pmkObjectName,pdwRegister))
#define IRunningObjectTable_Revoke(This,dwRegister) \
    ((This)->lpVtbl->Revoke(This,dwRegister))
#define IRunningObjectTable_IsRunning(This,pmkObjectName) \
    ((This)->lpVtbl->IsRunning(This,pmkObjectName))
#define IRunningObjectTable_GetObject(This,pmkObjectName,ppunkObject) \
    ((This)->lpVtbl->GetObject(This,pmkObjectName,ppunkObject))
#define IRunningObjectTable_NoteChangeTime(This,dwRegister,pfiletime) \
    ((This)->lpVtbl->NoteChangeTime(This,dwRegister,pfiletime))
#define IRunningObjectTable_GetTimeOfLastChange(This,pmkObjectName,pfiletime) \
    ((This)->lpVtbl->GetTimeOfLastChange(This,pmkObjectName,pfiletime))
#define IRunningObjectTable_EnumRunning(This,ppenumMoniker) \
    ((This)->lpVtbl->EnumRunning(This,ppenumMoniker))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRunningObjectTable_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IPersist interface
 */
#ifndef __IPersist_INTERFACE_DEFINED__
#define __IPersist_INTERFACE_DEFINED__

typedef IPersist *LPPERSIST;

EXTERN_C const IID IID_IPersist;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersist *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersist *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersist *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersist *This,
        CLSID *pClassID);

    END_INTERFACE
} IPersistVtbl;

interface IPersist {
    CONST_VTBL IPersistVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersist_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersist_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersist_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersist_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersist_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPersistStream interface
 */
#ifndef __IPersistStream_INTERFACE_DEFINED__
#define __IPersistStream_INTERFACE_DEFINED__

typedef IPersistStream *LPPERSISTSTREAM;

EXTERN_C const IID IID_IPersistStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistStream *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistStream *This,
        CLSID *pClassID);

    /*** IPersistStream methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        IPersistStream *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        IPersistStream *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IPersistStream *This,
        IStream *pStm,
        BOOL fClearDirty);

    HRESULT (STDMETHODCALLTYPE *GetSizeMax)(
        IPersistStream *This,
        ULARGE_INTEGER *pcbSize);

    END_INTERFACE
} IPersistStreamVtbl;

interface IPersistStream {
    CONST_VTBL IPersistStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistStream_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistStream methods ***/
#define IPersistStream_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define IPersistStream_Load(This,pStm) \
    ((This)->lpVtbl->Load(This,pStm))
#define IPersistStream_Save(This,pStm,fClearDirty) \
    ((This)->lpVtbl->Save(This,pStm,fClearDirty))
#define IPersistStream_GetSizeMax(This,pcbSize) \
    ((This)->lpVtbl->GetSizeMax(This,pcbSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMoniker interface
 */
#ifndef __IMoniker_INTERFACE_DEFINED__
#define __IMoniker_INTERFACE_DEFINED__

typedef IMoniker *LPMONIKER;

typedef enum tagMKSYS {
    MKSYS_NONE = 0,
    MKSYS_GENERICCOMPOSITE = 1,
    MKSYS_FILEMONIKER = 2,
    MKSYS_ANTIMONIKER = 3,
    MKSYS_ITEMMONIKER = 4,
    MKSYS_POINTERMONIKER = 5,
    MKSYS_CLASSMONIKER = 7,
    MKSYS_OBJREFMONIKER = 8,
    MKSYS_SESSIONMONIKER = 9,
    MKSYS_LUAMONIKER = 10
} MKSYS;

typedef enum tagMKREDUCE {
    MKRREDUCE_ONE = 3 << 16,
    MKRREDUCE_TOUSER = 2 << 16,
    MKRREDUCE_THROUGHUSER = 1 << 16,
    MKRREDUCE_ALL = 0
} MKRREDUCE;

EXTERN_C const IID IID_IMoniker;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMonikerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMoniker *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMoniker *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMoniker *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IMoniker *This,
        CLSID *pClassID);

    /*** IPersistStream methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        IMoniker *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        IMoniker *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IMoniker *This,
        IStream *pStm,
        BOOL fClearDirty);

    HRESULT (STDMETHODCALLTYPE *GetSizeMax)(
        IMoniker *This,
        ULARGE_INTEGER *pcbSize);

    /*** IMoniker methods ***/
    HRESULT (STDMETHODCALLTYPE *BindToObject)(
        IMoniker *This,
        IBindCtx *pbc,
        IMoniker *pmkToLeft,
        REFIID riidResult,
        void **ppvResult);

    HRESULT (STDMETHODCALLTYPE *BindToStorage)(
        IMoniker *This,
        IBindCtx *pbc,
        IMoniker *pmkToLeft,
        REFIID riid,
        void **ppvObj);

    HRESULT (STDMETHODCALLTYPE *Reduce)(
        IMoniker *This,
        IBindCtx *pbc,
        DWORD dwReduceHowFar,
        IMoniker **ppmkToLeft,
        IMoniker **ppmkReduced);

    HRESULT (STDMETHODCALLTYPE *ComposeWith)(
        IMoniker *This,
        IMoniker *pmkRight,
        BOOL fOnlyIfNotGeneric,
        IMoniker **ppmkComposite);

    HRESULT (STDMETHODCALLTYPE *Enum)(
        IMoniker *This,
        BOOL fForward,
        IEnumMoniker **ppenumMoniker);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IMoniker *This,
        IMoniker *pmkOtherMoniker);

    HRESULT (STDMETHODCALLTYPE *Hash)(
        IMoniker *This,
        DWORD *pdwHash);

    HRESULT (STDMETHODCALLTYPE *IsRunning)(
        IMoniker *This,
        IBindCtx *pbc,
        IMoniker *pmkToLeft,
        IMoniker *pmkNewlyRunning);

    HRESULT (STDMETHODCALLTYPE *GetTimeOfLastChange)(
        IMoniker *This,
        IBindCtx *pbc,
        IMoniker *pmkToLeft,
        FILETIME *pFileTime);

    HRESULT (STDMETHODCALLTYPE *Inverse)(
        IMoniker *This,
        IMoniker **ppmk);

    HRESULT (STDMETHODCALLTYPE *CommonPrefixWith)(
        IMoniker *This,
        IMoniker *pmkOther,
        IMoniker **ppmkPrefix);

    HRESULT (STDMETHODCALLTYPE *RelativePathTo)(
        IMoniker *This,
        IMoniker *pmkOther,
        IMoniker **ppmkRelPath);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IMoniker *This,
        IBindCtx *pbc,
        IMoniker *pmkToLeft,
        LPOLESTR *ppszDisplayName);

    HRESULT (STDMETHODCALLTYPE *ParseDisplayName)(
        IMoniker *This,
        IBindCtx *pbc,
        IMoniker *pmkToLeft,
        LPOLESTR pszDisplayName,
        ULONG *pchEaten,
        IMoniker **ppmkOut);

    HRESULT (STDMETHODCALLTYPE *IsSystemMoniker)(
        IMoniker *This,
        DWORD *pdwMksys);

    END_INTERFACE
} IMonikerVtbl;

interface IMoniker {
    CONST_VTBL IMonikerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMoniker_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMoniker_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMoniker_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IMoniker_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistStream methods ***/
#define IMoniker_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define IMoniker_Load(This,pStm) \
    ((This)->lpVtbl->Load(This,pStm))
#define IMoniker_Save(This,pStm,fClearDirty) \
    ((This)->lpVtbl->Save(This,pStm,fClearDirty))
#define IMoniker_GetSizeMax(This,pcbSize) \
    ((This)->lpVtbl->GetSizeMax(This,pcbSize))
/*** IMoniker methods ***/
#define IMoniker_BindToObject(This,pbc,pmkToLeft,riidResult,ppvResult) \
    ((This)->lpVtbl->BindToObject(This,pbc,pmkToLeft,riidResult,ppvResult))
#define IMoniker_BindToStorage(This,pbc,pmkToLeft,riid,ppvObj) \
    ((This)->lpVtbl->BindToStorage(This,pbc,pmkToLeft,riid,ppvObj))
#define IMoniker_Reduce(This,pbc,dwReduceHowFar,ppmkToLeft,ppmkReduced) \
    ((This)->lpVtbl->Reduce(This,pbc,dwReduceHowFar,ppmkToLeft,ppmkReduced))
#define IMoniker_ComposeWith(This,pmkRight,fOnlyIfNotGeneric,ppmkComposite) \
    ((This)->lpVtbl->ComposeWith(This,pmkRight,fOnlyIfNotGeneric,ppmkComposite))
#define IMoniker_Enum(This,fForward,ppenumMoniker) \
    ((This)->lpVtbl->Enum(This,fForward,ppenumMoniker))
#define IMoniker_IsEqual(This,pmkOtherMoniker) \
    ((This)->lpVtbl->IsEqual(This,pmkOtherMoniker))
#define IMoniker_Hash(This,pdwHash) \
    ((This)->lpVtbl->Hash(This,pdwHash))
#define IMoniker_IsRunning(This,pbc,pmkToLeft,pmkNewlyRunning) \
    ((This)->lpVtbl->IsRunning(This,pbc,pmkToLeft,pmkNewlyRunning))
#define IMoniker_GetTimeOfLastChange(This,pbc,pmkToLeft,pFileTime) \
    ((This)->lpVtbl->GetTimeOfLastChange(This,pbc,pmkToLeft,pFileTime))
#define IMoniker_Inverse(This,ppmk) \
    ((This)->lpVtbl->Inverse(This,ppmk))
#define IMoniker_CommonPrefixWith(This,pmkOther,ppmkPrefix) \
    ((This)->lpVtbl->CommonPrefixWith(This,pmkOther,ppmkPrefix))
#define IMoniker_RelativePathTo(This,pmkOther,ppmkRelPath) \
    ((This)->lpVtbl->RelativePathTo(This,pmkOther,ppmkRelPath))
#define IMoniker_GetDisplayName(This,pbc,pmkToLeft,ppszDisplayName) \
    ((This)->lpVtbl->GetDisplayName(This,pbc,pmkToLeft,ppszDisplayName))
#define IMoniker_ParseDisplayName(This,pbc,pmkToLeft,pszDisplayName,pchEaten,ppmkOut) \
    ((This)->lpVtbl->ParseDisplayName(This,pbc,pmkToLeft,pszDisplayName,pchEaten,ppmkOut))
#define IMoniker_IsSystemMoniker(This,pdwMksys) \
    ((This)->lpVtbl->IsSystemMoniker(This,pdwMksys))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToObject_Proxy(
    IMoniker *This,
    IBindCtx *pbc,
    IMoniker *pmkToLeft,
    REFIID riidResult,
    IUnknown **ppvResult);

void __RPC_STUB IMoniker_RemoteBindToObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToStorage_Proxy(
    IMoniker *This,
    IBindCtx *pbc,
    IMoniker *pmkToLeft,
    REFIID riid,
    IUnknown **ppvObj);

void __RPC_STUB IMoniker_RemoteBindToStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMoniker_BindToObject_Proxy(
    IBindCtx *pbc,
    IMoniker *pmkToLeft,
    REFIID riidResult,
    void **ppvResult);
HRESULT IMoniker_BindToObject_Stub(
    IBindCtx *pbc,
    IMoniker *pmkToLeft,
    REFIID riidResult,
    IUnknown **ppvResult);
HRESULT IMoniker_BindToStorage_Proxy(
    IBindCtx *pbc,
    IMoniker *pmkToLeft,
    REFIID riid,
    void **ppvObj);
HRESULT IMoniker_BindToStorage_Stub(
    IBindCtx *pbc,
    IMoniker *pmkToLeft,
    REFIID riid,
    IUnknown **ppvObj);
#endif /* __IMoniker_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IROTData interface
 */
#ifndef __IROTData_INTERFACE_DEFINED__
#define __IROTData_INTERFACE_DEFINED__

EXTERN_C const IID IID_IROTData;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IROTDataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IROTData *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IROTData *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IROTData *This);

    /*** IROTData methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComparisonData)(
        IROTData *This,
        byte *pbData,
        ULONG cbMax,
        ULONG *pcbData);

    END_INTERFACE
} IROTDataVtbl;

interface IROTData {
    CONST_VTBL IROTDataVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IROTData_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IROTData_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IROTData_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IROTData methods ***/
#define IROTData_GetComparisonData(This,pbData,cbMax,pcbData) \
    ((This)->lpVtbl->GetComparisonData(This,pbData,cbMax,pcbData))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IROTData_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IEnumSTATSTG interface
 */
#ifndef __IEnumSTATSTG_INTERFACE_DEFINED__
#define __IEnumSTATSTG_INTERFACE_DEFINED__

typedef IEnumSTATSTG *LPENUMSTATSTG;

EXTERN_C const IID IID_IEnumSTATSTG;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumSTATSTGVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumSTATSTG *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumSTATSTG *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumSTATSTG *This);

    /*** IEnumSTATSTG methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumSTATSTG *This,
        ULONG celt,
        STATSTG *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumSTATSTG *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumSTATSTG *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumSTATSTG *This,
        IEnumSTATSTG **ppenum);

    END_INTERFACE
} IEnumSTATSTGVtbl;

interface IEnumSTATSTG {
    CONST_VTBL IEnumSTATSTGVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumSTATSTG_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumSTATSTG_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumSTATSTG_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumSTATSTG methods ***/
#define IEnumSTATSTG_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumSTATSTG_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumSTATSTG_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumSTATSTG_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumSTATSTG_RemoteNext_Proxy(
    IEnumSTATSTG *This,
    ULONG celt,
    STATSTG *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumSTATSTG_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumSTATSTG_Next_Proxy(
    ULONG celt,
    STATSTG *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumSTATSTG_Next_Stub(
    ULONG celt,
    STATSTG *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumSTATSTG_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IStorage interface
 */
#ifndef __IStorage_INTERFACE_DEFINED__
#define __IStorage_INTERFACE_DEFINED__

typedef IStorage *LPSTORAGE;

typedef struct tagRemSNB {
    ULONG ulCntStr;
    ULONG ulCntChar;
    OLECHAR rgString[ 1 ];
} RemSNB;

typedef RemSNB *wireSNB;

typedef LPOLESTR *SNB;

EXTERN_C const IID IID_IStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStorage *This);

    /*** IStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateStream)(
        IStorage *This,
        const OLECHAR *pwcsName,
        DWORD grfMode,
        DWORD reserved1,
        DWORD reserved2,
        IStream **ppstm);

    HRESULT (STDMETHODCALLTYPE *OpenStream)(
        IStorage *This,
        const OLECHAR *pwcsName,
        void *reserved1,
        DWORD grfMode,
        DWORD reserved2,
        IStream **ppstm);

    HRESULT (STDMETHODCALLTYPE *CreateStorage)(
        IStorage *This,
        const OLECHAR *pwcsName,
        DWORD grfMode,
        DWORD reserved1,
        DWORD reserved2,
        IStorage **ppstg);

    HRESULT (STDMETHODCALLTYPE *OpenStorage)(
        IStorage *This,
        const OLECHAR *pwcsName,
        IStorage *pstgPriority,
        DWORD grfMode,
        SNB snbExclude,
        DWORD reserved,
        IStorage **ppstg);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        IStorage *This,
        DWORD ciidExclude,
        const IID *rgiidExclude,
        SNB snbExclude,
        IStorage *pstgDest);

    HRESULT (STDMETHODCALLTYPE *MoveElementTo)(
        IStorage *This,
        const OLECHAR *pwcsName,
        IStorage *pstgDest,
        const OLECHAR *pwcsNewName,
        DWORD grfFlags);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IStorage *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        IStorage *This);

    HRESULT (STDMETHODCALLTYPE *EnumElements)(
        IStorage *This,
        DWORD reserved1,
        void *reserved2,
        DWORD reserved3,
        IEnumSTATSTG **ppenum);

    HRESULT (STDMETHODCALLTYPE *DestroyElement)(
        IStorage *This,
        const OLECHAR *pwcsName);

    HRESULT (STDMETHODCALLTYPE *RenameElement)(
        IStorage *This,
        const OLECHAR *pwcsOldName,
        const OLECHAR *pwcsNewName);

    HRESULT (STDMETHODCALLTYPE *SetElementTimes)(
        IStorage *This,
        const OLECHAR *pwcsName,
        const FILETIME *pctime,
        const FILETIME *patime,
        const FILETIME *pmtime);

    HRESULT (STDMETHODCALLTYPE *SetClass)(
        IStorage *This,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *SetStateBits)(
        IStorage *This,
        DWORD grfStateBits,
        DWORD grfMask);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        IStorage *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    END_INTERFACE
} IStorageVtbl;

interface IStorage {
    CONST_VTBL IStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStorage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStorage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStorage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IStorage methods ***/
#define IStorage_CreateStream(This,pwcsName,grfMode,reserved1,reserved2,ppstm) \
    ((This)->lpVtbl->CreateStream(This,pwcsName,grfMode,reserved1,reserved2,ppstm))
#define IStorage_OpenStream(This,pwcsName,reserved1,grfMode,reserved2,ppstm) \
    ((This)->lpVtbl->OpenStream(This,pwcsName,reserved1,grfMode,reserved2,ppstm))
#define IStorage_CreateStorage(This,pwcsName,grfMode,reserved1,reserved2,ppstg) \
    ((This)->lpVtbl->CreateStorage(This,pwcsName,grfMode,reserved1,reserved2,ppstg))
#define IStorage_OpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstg) \
    ((This)->lpVtbl->OpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstg))
#define IStorage_CopyTo(This,ciidExclude,rgiidExclude,snbExclude,pstgDest) \
    ((This)->lpVtbl->CopyTo(This,ciidExclude,rgiidExclude,snbExclude,pstgDest))
#define IStorage_MoveElementTo(This,pwcsName,pstgDest,pwcsNewName,grfFlags) \
    ((This)->lpVtbl->MoveElementTo(This,pwcsName,pstgDest,pwcsNewName,grfFlags))
#define IStorage_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define IStorage_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define IStorage_EnumElements(This,reserved1,reserved2,reserved3,ppenum) \
    ((This)->lpVtbl->EnumElements(This,reserved1,reserved2,reserved3,ppenum))
#define IStorage_DestroyElement(This,pwcsName) \
    ((This)->lpVtbl->DestroyElement(This,pwcsName))
#define IStorage_RenameElement(This,pwcsOldName,pwcsNewName) \
    ((This)->lpVtbl->RenameElement(This,pwcsOldName,pwcsNewName))
#define IStorage_SetElementTimes(This,pwcsName,pctime,patime,pmtime) \
    ((This)->lpVtbl->SetElementTimes(This,pwcsName,pctime,patime,pmtime))
#define IStorage_SetClass(This,clsid) \
    ((This)->lpVtbl->SetClass(This,clsid))
#define IStorage_SetStateBits(This,grfStateBits,grfMask) \
    ((This)->lpVtbl->SetStateBits(This,grfStateBits,grfMask))
#define IStorage_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IStorage_RemoteOpenStream_Proxy(
    IStorage *This,
    const OLECHAR *pwcsName,
    ULONG cbReserved1,
    byte *reserved1,
    DWORD grfMode,
    DWORD reserved2,
    IStream **ppstm);

void __RPC_STUB IStorage_RemoteOpenStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IStorage_RemoteCopyTo_Proxy(
    IStorage *This,
    DWORD ciidExclude,
    const IID *rgiidExclude,
    SNB snbExclude,
    IStorage *pstgDest);

void __RPC_STUB IStorage_RemoteCopyTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IStorage_RemoteEnumElements_Proxy(
    IStorage *This,
    DWORD reserved1,
    ULONG cbReserved2,
    byte *reserved2,
    DWORD reserved3,
    IEnumSTATSTG **ppenum);

void __RPC_STUB IStorage_RemoteEnumElements_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IStorage_OpenStream_Proxy(
    const OLECHAR *pwcsName,
    void *reserved1,
    DWORD grfMode,
    DWORD reserved2,
    IStream **ppstm);
HRESULT IStorage_OpenStream_Stub(
    const OLECHAR *pwcsName,
    ULONG cbReserved1,
    byte *reserved1,
    DWORD grfMode,
    DWORD reserved2,
    IStream **ppstm);
HRESULT IStorage_CopyTo_Proxy(
    DWORD ciidExclude,
    const IID *rgiidExclude,
    SNB snbExclude,
    IStorage *pstgDest);
HRESULT IStorage_CopyTo_Stub(
    DWORD ciidExclude,
    const IID *rgiidExclude,
    SNB snbExclude,
    IStorage *pstgDest);
HRESULT IStorage_EnumElements_Proxy(
    DWORD reserved1,
    void *reserved2,
    DWORD reserved3,
    IEnumSTATSTG **ppenum);
HRESULT IStorage_EnumElements_Stub(
    DWORD reserved1,
    ULONG cbReserved2,
    byte *reserved2,
    DWORD reserved3,
    IEnumSTATSTG **ppenum);
#endif /* __IStorage_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IPersistFile interface
 */
#ifndef __IPersistFile_INTERFACE_DEFINED__
#define __IPersistFile_INTERFACE_DEFINED__

typedef IPersistFile *LPPERSISTFILE;

EXTERN_C const IID IID_IPersistFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistFileVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistFile *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistFile *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistFile *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistFile *This,
        CLSID *pClassID);

    /*** IPersistFile methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        IPersistFile *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        IPersistFile *This,
        LPCOLESTR pszFileName,
        DWORD dwMode);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IPersistFile *This,
        LPCOLESTR pszFileName,
        BOOL fRemember);

    HRESULT (STDMETHODCALLTYPE *SaveCompleted)(
        IPersistFile *This,
        LPCOLESTR pszFileName);

    HRESULT (STDMETHODCALLTYPE *GetCurFile)(
        IPersistFile *This,
        LPOLESTR *ppszFileName);

    END_INTERFACE
} IPersistFileVtbl;

interface IPersistFile {
    CONST_VTBL IPersistFileVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistFile_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistFile_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistFile_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistFile_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistFile methods ***/
#define IPersistFile_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define IPersistFile_Load(This,pszFileName,dwMode) \
    ((This)->lpVtbl->Load(This,pszFileName,dwMode))
#define IPersistFile_Save(This,pszFileName,fRemember) \
    ((This)->lpVtbl->Save(This,pszFileName,fRemember))
#define IPersistFile_SaveCompleted(This,pszFileName) \
    ((This)->lpVtbl->SaveCompleted(This,pszFileName))
#define IPersistFile_GetCurFile(This,ppszFileName) \
    ((This)->lpVtbl->GetCurFile(This,ppszFileName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistFile_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPersistStorage interface
 */
#ifndef __IPersistStorage_INTERFACE_DEFINED__
#define __IPersistStorage_INTERFACE_DEFINED__

typedef IPersistStorage *LPPERSISTSTORAGE;

EXTERN_C const IID IID_IPersistStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistStorage *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistStorage *This,
        CLSID *pClassID);

    /*** IPersistStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        IPersistStorage *This);

    HRESULT (STDMETHODCALLTYPE *InitNew)(
        IPersistStorage *This,
        IStorage *pStg);

    HRESULT (STDMETHODCALLTYPE *Load)(
        IPersistStorage *This,
        IStorage *pStg);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IPersistStorage *This,
        IStorage *pStgSave,
        BOOL fSameAsLoad);

    HRESULT (STDMETHODCALLTYPE *SaveCompleted)(
        IPersistStorage *This,
        IStorage *pStgNew);

    HRESULT (STDMETHODCALLTYPE *HandsOffStorage)(
        IPersistStorage *This);

    END_INTERFACE
} IPersistStorageVtbl;

interface IPersistStorage {
    CONST_VTBL IPersistStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistStorage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistStorage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistStorage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistStorage_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistStorage methods ***/
#define IPersistStorage_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define IPersistStorage_InitNew(This,pStg) \
    ((This)->lpVtbl->InitNew(This,pStg))
#define IPersistStorage_Load(This,pStg) \
    ((This)->lpVtbl->Load(This,pStg))
#define IPersistStorage_Save(This,pStgSave,fSameAsLoad) \
    ((This)->lpVtbl->Save(This,pStgSave,fSameAsLoad))
#define IPersistStorage_SaveCompleted(This,pStgNew) \
    ((This)->lpVtbl->SaveCompleted(This,pStgNew))
#define IPersistStorage_HandsOffStorage(This) \
    ((This)->lpVtbl->HandsOffStorage(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistStorage_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * ILockBytes interface
 */
#ifndef __ILockBytes_INTERFACE_DEFINED__
#define __ILockBytes_INTERFACE_DEFINED__

typedef ILockBytes *LPLOCKBYTES;

EXTERN_C const IID IID_ILockBytes;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILockBytesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILockBytes *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILockBytes *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILockBytes *This);

    /*** ILockBytes methods ***/
    HRESULT (STDMETHODCALLTYPE *ReadAt)(
        ILockBytes *This,
        ULARGE_INTEGER ulOffset,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *WriteAt)(
        ILockBytes *This,
        ULARGE_INTEGER ulOffset,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        ILockBytes *This);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ILockBytes *This,
        ULARGE_INTEGER cb);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        ILockBytes *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        ILockBytes *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        ILockBytes *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    END_INTERFACE
} ILockBytesVtbl;

interface ILockBytes {
    CONST_VTBL ILockBytesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILockBytes_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILockBytes_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILockBytes_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILockBytes methods ***/
#define ILockBytes_ReadAt(This,ulOffset,pv,cb,pcbRead) \
    ((This)->lpVtbl->ReadAt(This,ulOffset,pv,cb,pcbRead))
#define ILockBytes_WriteAt(This,ulOffset,pv,cb,pcbWritten) \
    ((This)->lpVtbl->WriteAt(This,ulOffset,pv,cb,pcbWritten))
#define ILockBytes_Flush(This) \
    ((This)->lpVtbl->Flush(This))
#define ILockBytes_SetSize(This,cb) \
    ((This)->lpVtbl->SetSize(This,cb))
#define ILockBytes_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define ILockBytes_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define ILockBytes_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#endif /* COBJMACROS */

#endif /* C */

HRESULT __stdcall ILockBytes_RemoteReadAt_Proxy(
    ILockBytes *This,
    ULARGE_INTEGER ulOffset,
    byte *pv,
    ULONG cb,
    ULONG *pcbRead);

void __RPC_STUB ILockBytes_RemoteReadAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ILockBytes_RemoteWriteAt_Proxy(
    ILockBytes *This,
    ULARGE_INTEGER ulOffset,
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);

void __RPC_STUB ILockBytes_RemoteWriteAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ILockBytes_ReadAt_Proxy(
    ULARGE_INTEGER ulOffset,
    void *pv,
    ULONG cb,
    ULONG *pcbRead);
HRESULT __stdcall ILockBytes_ReadAt_Stub(
    ULARGE_INTEGER ulOffset,
    byte *pv,
    ULONG cb,
    ULONG *pcbRead);
HRESULT ILockBytes_WriteAt_Proxy(
    ULARGE_INTEGER ulOffset,
    void *pv,
    ULONG cb,
    ULONG *pcbWritten);
HRESULT ILockBytes_WriteAt_Stub(
    ULARGE_INTEGER ulOffset,
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);
#endif /* __ILockBytes_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumFORMATETC interface
 */
#ifndef __IEnumFORMATETC_INTERFACE_DEFINED__
#define __IEnumFORMATETC_INTERFACE_DEFINED__

typedef IEnumFORMATETC *LPENUMFORMATETC;

typedef struct tagDVTARGETDEVICE {
    DWORD tdSize;
    WORD tdDriverNameOffset;
    WORD tdDeviceNameOffset;
    WORD tdPortNameOffset;
    WORD tdExtDevmodeOffset;
    BYTE tdData[ 1 ];
} DVTARGETDEVICE;

typedef CLIPFORMAT *LPCLIPFORMAT;

typedef struct tagFORMATETC {
    CLIPFORMAT cfFormat;
    DVTARGETDEVICE *ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
} FORMATETC;
typedef struct tagFORMATETC *LPFORMATETC;

EXTERN_C const IID IID_IEnumFORMATETC;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumFORMATETCVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumFORMATETC *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumFORMATETC *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumFORMATETC *This);

    /*** IEnumFORMATETC methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumFORMATETC *This,
        ULONG celt,
        FORMATETC *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumFORMATETC *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumFORMATETC *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumFORMATETC *This,
        IEnumFORMATETC **ppenum);

    END_INTERFACE
} IEnumFORMATETCVtbl;

interface IEnumFORMATETC {
    CONST_VTBL IEnumFORMATETCVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumFORMATETC_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumFORMATETC_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumFORMATETC_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumFORMATETC methods ***/
#define IEnumFORMATETC_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumFORMATETC_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumFORMATETC_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumFORMATETC_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumFORMATETC_RemoteNext_Proxy(
    IEnumFORMATETC *This,
    ULONG celt,
    FORMATETC *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumFORMATETC_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumFORMATETC_Next_Proxy(
    ULONG celt,
    FORMATETC *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumFORMATETC_Next_Stub(
    ULONG celt,
    FORMATETC *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumFORMATETC_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumSTATDATA interface
 */
#ifndef __IEnumSTATDATA_INTERFACE_DEFINED__
#define __IEnumSTATDATA_INTERFACE_DEFINED__

typedef IEnumSTATDATA *LPENUMSTATDATA;

typedef enum tagADVF {
    ADVF_NODATA = 1,
    ADVF_PRIMEFIRST = 2,
    ADVF_ONLYONCE = 4,
    ADVF_DATAONSTOP = 64,
    ADVFCACHE_NOHANDLER = 8,
    ADVFCACHE_FORCEBUILTIN = 16,
    ADVFCACHE_ONSAVE = 32
} ADVF;

typedef struct tagSTATDATA {
    FORMATETC formatetc;
    DWORD advf;
    IAdviseSink *pAdvSink;
    DWORD dwConnection;
} STATDATA;
typedef STATDATA *LPSTATDATA;

EXTERN_C const IID IID_IEnumSTATDATA;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumSTATDATAVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumSTATDATA *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumSTATDATA *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumSTATDATA *This);

    /*** IEnumSTATDATA methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumSTATDATA *This,
        ULONG celt,
        STATDATA *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumSTATDATA *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumSTATDATA *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumSTATDATA *This,
        IEnumSTATDATA **ppenum);

    END_INTERFACE
} IEnumSTATDATAVtbl;

interface IEnumSTATDATA {
    CONST_VTBL IEnumSTATDATAVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumSTATDATA_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumSTATDATA_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumSTATDATA_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumSTATDATA methods ***/
#define IEnumSTATDATA_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumSTATDATA_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumSTATDATA_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumSTATDATA_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumSTATDATA_RemoteNext_Proxy(
    IEnumSTATDATA *This,
    ULONG celt,
    STATDATA *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumSTATDATA_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumSTATDATA_Next_Proxy(
    ULONG celt,
    STATDATA *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumSTATDATA_Next_Stub(
    ULONG celt,
    STATDATA *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumSTATDATA_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRootStorage interface
 */
#ifndef __IRootStorage_INTERFACE_DEFINED__
#define __IRootStorage_INTERFACE_DEFINED__

typedef IRootStorage *LPROOTSTORAGE;

EXTERN_C const IID IID_IRootStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRootStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRootStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRootStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRootStorage *This);

    /*** IRootStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *SwitchToFile)(
        IRootStorage *This,
        LPOLESTR pszFile);

    END_INTERFACE
} IRootStorageVtbl;

interface IRootStorage {
    CONST_VTBL IRootStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRootStorage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRootStorage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRootStorage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRootStorage methods ***/
#define IRootStorage_SwitchToFile(This,pszFile) \
    ((This)->lpVtbl->SwitchToFile(This,pszFile))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRootStorage_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAdviseSink interface
 */
#ifndef __IAdviseSink_INTERFACE_DEFINED__
#define __IAdviseSink_INTERFACE_DEFINED__

typedef IAdviseSink *LPADVISESINK;

typedef enum tagTYMED {
    TYMED_HGLOBAL = 1,
    TYMED_FILE = 2,
    TYMED_ISTREAM = 4,
    TYMED_ISTORAGE = 8,
    TYMED_GDI = 16,
    TYMED_MFPICT = 32,
    TYMED_ENHMF = 64,
    TYMED_NULL = 0
} TYMED;

typedef struct tagRemSTGMEDIUM {
    DWORD tymed;
    DWORD dwHandleType;
    ULONG pData;
    ULONG pUnkForRelease;
    ULONG cbData;
    byte data[ 1 ];
} RemSTGMEDIUM;

#ifdef NONAMELESSUNION
typedef struct tagSTGMEDIUM {
    DWORD tymed;
    union {
        HBITMAP hBitmap;
        HMETAFILEPICT hMetaFilePict;
        HENHMETAFILE hEnhMetaFile;
        HGLOBAL hGlobal;
        LPOLESTR lpszFileName;
        IStream *pstm;
        IStorage *pstg;
        } u;
    IUnknown *pUnkForRelease;
}uSTGMEDIUM;
#else
typedef struct tagSTGMEDIUM {
    DWORD tymed;
    union {
        HBITMAP hBitmap;
        HMETAFILEPICT hMetaFilePict;
        HENHMETAFILE hEnhMetaFile;
        HGLOBAL hGlobal;
        LPOLESTR lpszFileName;
        IStream *pstm;
        IStorage *pstg;
    } DUMMYUNIONNAME;
    IUnknown *pUnkForRelease;
} uSTGMEDIUM;
#endif /* !NONAMELESSUNION */

typedef struct _GDI_OBJECT {
    wireHBITMAP hBitmap;
    wireHPALETTE hPalette;
    wireHGLOBAL hGeneric;
} GDI_OBJECT;

typedef struct _userSTGMEDIUM {
    struct _STGMEDIUM_UNION {
        wireHMETAFILEPICT hMetaFilePict;
        wireHENHMETAFILE hHEnhMetaFile;
        GDI_OBJECT *hGdiHandle;
        wireHGLOBAL hGlobal;
        LPOLESTR lpszFileName;
        BYTE_BLOB *pstm;
        BYTE_BLOB *pstg;
    } DUMMYUNIONNAME;
    IUnknown *pUnkForRelease;
} userSTGMEDIUM;

typedef userSTGMEDIUM *wireSTGMEDIUM;
typedef uSTGMEDIUM STGMEDIUM;

typedef userSTGMEDIUM *wireASYNC_STGMEDIUM;
typedef STGMEDIUM ASYNC_STGMEDIUM;

typedef STGMEDIUM *LPSTGMEDIUM;

typedef struct _userFLAG_STGMEDIUM {
    LONG ContextFlags;
    LONG fPassOwnership;
    userSTGMEDIUM Stgmed;
} userFLAG_STGMEDIUM;

typedef userFLAG_STGMEDIUM *wireFLAG_STGMEDIUM;

typedef struct _FLAG_STGMEDIUM {
    LONG ContextFlags;
    LONG fPassOwnership;
    STGMEDIUM Stgmed;
} FLAG_STGMEDIUM;

EXTERN_C const IID IID_IAdviseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAdviseSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAdviseSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAdviseSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAdviseSink *This);

    /*** IAdviseSink methods ***/
    void (STDMETHODCALLTYPE *OnDataChange)(
        IAdviseSink *This,
        FORMATETC *pFormatetc,
        STGMEDIUM *pStgmed);

    void (STDMETHODCALLTYPE *OnViewChange)(
        IAdviseSink *This,
        DWORD dwAspect,
        LONG lindex);

    void (STDMETHODCALLTYPE *OnRename)(
        IAdviseSink *This,
        IMoniker *pmk);

    void (STDMETHODCALLTYPE *OnSave)(
        IAdviseSink *This);

    void (STDMETHODCALLTYPE *OnClose)(
        IAdviseSink *This);

    END_INTERFACE
} IAdviseSinkVtbl;

interface IAdviseSink {
    CONST_VTBL IAdviseSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAdviseSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAdviseSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAdviseSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAdviseSink methods ***/
#define IAdviseSink_OnDataChange(This,pFormatetc,pStgmed) \
    ((This)->lpVtbl->OnDataChange(This,pFormatetc,pStgmed))
#define IAdviseSink_OnViewChange(This,dwAspect,lindex) \
    ((This)->lpVtbl->OnViewChange(This,dwAspect,lindex))
#define IAdviseSink_OnRename(This,pmk) \
    ((This)->lpVtbl->OnRename(This,pmk))
#define IAdviseSink_OnSave(This) \
    ((This)->lpVtbl->OnSave(This))
#define IAdviseSink_OnClose(This) \
    ((This)->lpVtbl->OnClose(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnDataChange_Proxy(
    IAdviseSink *This,
    FORMATETC *pFormatetc,
    ASYNC_STGMEDIUM *pStgmed);

void __RPC_STUB IAdviseSink_RemoteOnDataChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnViewChange_Proxy(
    IAdviseSink *This,
    DWORD dwAspect,
    LONG lindex);

void __RPC_STUB IAdviseSink_RemoteOnViewChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnRename_Proxy(
    IAdviseSink *This,
    IMoniker *pmk);

void __RPC_STUB IAdviseSink_RemoteOnRename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnSave_Proxy(
    IAdviseSink *This);

void __RPC_STUB IAdviseSink_RemoteOnSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnClose_Proxy(
    IAdviseSink *This);

void __RPC_STUB IAdviseSink_RemoteOnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

void IAdviseSink_OnDataChange_Proxy(
    FORMATETC *pFormatetc,
    STGMEDIUM *pStgmed);
HRESULT IAdviseSink_OnDataChange_Stub(
    FORMATETC *pFormatetc,
    ASYNC_STGMEDIUM *pStgmed);
void IAdviseSink_OnViewChange_Proxy(
    DWORD dwAspect,
    LONG lindex);
HRESULT IAdviseSink_OnViewChange_Stub(
    DWORD dwAspect,
    LONG lindex);
void IAdviseSink_OnRename_Proxy(
    IMoniker *pmk);
HRESULT IAdviseSink_OnRename_Stub(
    IMoniker *pmk);
void IAdviseSink_OnSave_Proxy(
    void);
HRESULT IAdviseSink_OnSave_Stub(
    void);
void IAdviseSink_OnClose_Proxy(
    void);
HRESULT IAdviseSink_OnClose_Stub(
    void);
#endif /* __IAdviseSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIAdviseSink interface
 */
#ifndef __AsyncIAdviseSink_INTERFACE_DEFINED__
#define __AsyncIAdviseSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIAdviseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIAdviseSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIAdviseSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIAdviseSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIAdviseSink *This);

    /*** AsyncIAdviseSink methods ***/
    void (STDMETHODCALLTYPE *Begin_OnDataChange)(
        AsyncIAdviseSink *This,
        FORMATETC *pFormatetc,
        STGMEDIUM *pStgmed);

    void (STDMETHODCALLTYPE *Finish_OnDataChange)(
        AsyncIAdviseSink *This);

    void (STDMETHODCALLTYPE *Begin_OnViewChange)(
        AsyncIAdviseSink *This,
        DWORD dwAspect,
        LONG lindex);

    void (STDMETHODCALLTYPE *Finish_OnViewChange)(
        AsyncIAdviseSink *This);

    void (STDMETHODCALLTYPE *Begin_OnRename)(
        AsyncIAdviseSink *This,
        IMoniker *pmk);

    void (STDMETHODCALLTYPE *Finish_OnRename)(
        AsyncIAdviseSink *This);

    void (STDMETHODCALLTYPE *Begin_OnSave)(
        AsyncIAdviseSink *This);

    void (STDMETHODCALLTYPE *Finish_OnSave)(
        AsyncIAdviseSink *This);

    void (STDMETHODCALLTYPE *Begin_OnClose)(
        AsyncIAdviseSink *This);

    void (STDMETHODCALLTYPE *Finish_OnClose)(
        AsyncIAdviseSink *This);

    END_INTERFACE
} AsyncIAdviseSinkVtbl;

interface AsyncIAdviseSink {
    CONST_VTBL AsyncIAdviseSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIAdviseSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIAdviseSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIAdviseSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** AsyncIAdviseSink methods ***/
#define AsyncIAdviseSink_Begin_OnDataChange(This,pFormatetc,pStgmed) \
    ((This)->lpVtbl->Begin_OnDataChange(This,pFormatetc,pStgmed))
#define AsyncIAdviseSink_Finish_OnDataChange(This) \
    ((This)->lpVtbl->Finish_OnDataChange(This))
#define AsyncIAdviseSink_Begin_OnViewChange(This,dwAspect,lindex) \
    ((This)->lpVtbl->Begin_OnViewChange(This,dwAspect,lindex))
#define AsyncIAdviseSink_Finish_OnViewChange(This) \
    ((This)->lpVtbl->Finish_OnViewChange(This))
#define AsyncIAdviseSink_Begin_OnRename(This,pmk) \
    ((This)->lpVtbl->Begin_OnRename(This,pmk))
#define AsyncIAdviseSink_Finish_OnRename(This) \
    ((This)->lpVtbl->Finish_OnRename(This))
#define AsyncIAdviseSink_Begin_OnSave(This) \
    ((This)->lpVtbl->Begin_OnSave(This))
#define AsyncIAdviseSink_Finish_OnSave(This) \
    ((This)->lpVtbl->Finish_OnSave(This))
#define AsyncIAdviseSink_Begin_OnClose(This) \
    ((This)->lpVtbl->Begin_OnClose(This))
#define AsyncIAdviseSink_Finish_OnClose(This) \
    ((This)->lpVtbl->Finish_OnClose(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnDataChange_Proxy(
    AsyncIAdviseSink *This,
    FORMATETC *pFormatetc,
    ASYNC_STGMEDIUM *pStgmed);

void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnDataChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnDataChange_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnDataChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnViewChange_Proxy(
    AsyncIAdviseSink *This,
    DWORD dwAspect,
    LONG lindex);

void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnViewChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnViewChange_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnViewChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnRename_Proxy(
    AsyncIAdviseSink *This,
    IMoniker *pmk);

void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnRename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnRename_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnRename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnSave_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnSave_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnSave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnClose_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnClose_Proxy(
    AsyncIAdviseSink *This);

void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

void AsyncIAdviseSink_Begin_OnDataChange_Proxy(
    FORMATETC *pFormatetc,
    STGMEDIUM *pStgmed);
HRESULT AsyncIAdviseSink_Begin_OnDataChange_Stub(
    FORMATETC *pFormatetc,
    ASYNC_STGMEDIUM *pStgmed);
void AsyncIAdviseSink_Finish_OnDataChange_Proxy(
    void);
HRESULT AsyncIAdviseSink_Finish_OnDataChange_Stub(
    void);
void AsyncIAdviseSink_Begin_OnViewChange_Proxy(
    DWORD dwAspect,
    LONG lindex);
HRESULT AsyncIAdviseSink_Begin_OnViewChange_Stub(
    DWORD dwAspect,
    LONG lindex);
void AsyncIAdviseSink_Finish_OnViewChange_Proxy(
    void);
HRESULT AsyncIAdviseSink_Finish_OnViewChange_Stub(
    void);
void AsyncIAdviseSink_Begin_OnRename_Proxy(
    IMoniker *pmk);
HRESULT AsyncIAdviseSink_Begin_OnRename_Stub(
    IMoniker *pmk);
void AsyncIAdviseSink_Finish_OnRename_Proxy(
    void);
HRESULT AsyncIAdviseSink_Finish_OnRename_Stub(
    void);
void AsyncIAdviseSink_Begin_OnSave_Proxy(
    void);
HRESULT AsyncIAdviseSink_Begin_OnSave_Stub(
    void);
void AsyncIAdviseSink_Finish_OnSave_Proxy(
    void);
HRESULT AsyncIAdviseSink_Finish_OnSave_Stub(
    void);
void AsyncIAdviseSink_Begin_OnClose_Proxy(
    void);
HRESULT AsyncIAdviseSink_Begin_OnClose_Stub(
    void);
void AsyncIAdviseSink_Finish_OnClose_Proxy(
    void);
HRESULT AsyncIAdviseSink_Finish_OnClose_Stub(
    void);
#endif /* __AsyncIAdviseSink_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IAdviseSink2 interface
 */
#ifndef __IAdviseSink2_INTERFACE_DEFINED__
#define __IAdviseSink2_INTERFACE_DEFINED__

typedef IAdviseSink2 *LPADVISESINK2;

EXTERN_C const IID IID_IAdviseSink2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAdviseSink2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAdviseSink2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAdviseSink2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAdviseSink2 *This);

    /*** IAdviseSink methods ***/
    void (STDMETHODCALLTYPE *OnDataChange)(
        IAdviseSink2 *This,
        FORMATETC *pFormatetc,
        STGMEDIUM *pStgmed);

    void (STDMETHODCALLTYPE *OnViewChange)(
        IAdviseSink2 *This,
        DWORD dwAspect,
        LONG lindex);

    void (STDMETHODCALLTYPE *OnRename)(
        IAdviseSink2 *This,
        IMoniker *pmk);

    void (STDMETHODCALLTYPE *OnSave)(
        IAdviseSink2 *This);

    void (STDMETHODCALLTYPE *OnClose)(
        IAdviseSink2 *This);

    /*** IAdviseSink2 methods ***/
    void (STDMETHODCALLTYPE *OnLinkSrcChange)(
        IAdviseSink2 *This,
        IMoniker *pmk);

    END_INTERFACE
} IAdviseSink2Vtbl;

interface IAdviseSink2 {
    CONST_VTBL IAdviseSink2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAdviseSink2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAdviseSink2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAdviseSink2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAdviseSink methods ***/
#define IAdviseSink2_OnDataChange(This,pFormatetc,pStgmed) \
    ((This)->lpVtbl->OnDataChange(This,pFormatetc,pStgmed))
#define IAdviseSink2_OnViewChange(This,dwAspect,lindex) \
    ((This)->lpVtbl->OnViewChange(This,dwAspect,lindex))
#define IAdviseSink2_OnRename(This,pmk) \
    ((This)->lpVtbl->OnRename(This,pmk))
#define IAdviseSink2_OnSave(This) \
    ((This)->lpVtbl->OnSave(This))
#define IAdviseSink2_OnClose(This) \
    ((This)->lpVtbl->OnClose(This))
/*** IAdviseSink2 methods ***/
#define IAdviseSink2_OnLinkSrcChange(This,pmk) \
    ((This)->lpVtbl->OnLinkSrcChange(This,pmk))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IAdviseSink2_RemoteOnLinkSrcChange_Proxy(
    IAdviseSink2 *This,
    IMoniker *pmk);

void __RPC_STUB IAdviseSink2_RemoteOnLinkSrcChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

void IAdviseSink2_OnLinkSrcChange_Proxy(
    IMoniker *pmk);
HRESULT IAdviseSink2_OnLinkSrcChange_Stub(
    IMoniker *pmk);
#endif /* __IAdviseSink2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncIAdviseSink2 interface
 */
#ifndef __AsyncIAdviseSink2_INTERFACE_DEFINED__
#define __AsyncIAdviseSink2_INTERFACE_DEFINED__

EXTERN_C const IID IID_AsyncIAdviseSink2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct AsyncIAdviseSink2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIAdviseSink2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIAdviseSink2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIAdviseSink2 *This);

    /*** IAdviseSink methods ***/
    void (STDMETHODCALLTYPE *OnDataChange)(
        AsyncIAdviseSink2 *This,
        FORMATETC *pFormatetc,
        STGMEDIUM *pStgmed);

    void (STDMETHODCALLTYPE *OnViewChange)(
        AsyncIAdviseSink2 *This,
        DWORD dwAspect,
        LONG lindex);

    void (STDMETHODCALLTYPE *OnRename)(
        AsyncIAdviseSink2 *This,
        IMoniker *pmk);

    void (STDMETHODCALLTYPE *OnSave)(
        AsyncIAdviseSink2 *This);

    void (STDMETHODCALLTYPE *OnClose)(
        AsyncIAdviseSink2 *This);

    /*** AsyncIAdviseSink2 methods ***/
    void (STDMETHODCALLTYPE *Begin_OnLinkSrcChange)(
        AsyncIAdviseSink2 *This,
        IMoniker *pmk);

    void (STDMETHODCALLTYPE *Finish_OnLinkSrcChange)(
        AsyncIAdviseSink2 *This);

    END_INTERFACE
} AsyncIAdviseSink2Vtbl;

interface AsyncIAdviseSink2 {
    CONST_VTBL AsyncIAdviseSink2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define AsyncIAdviseSink2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define AsyncIAdviseSink2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define AsyncIAdviseSink2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAdviseSink methods ***/
#define AsyncIAdviseSink2_OnDataChange(This,pFormatetc,pStgmed) \
    ((This)->lpVtbl->OnDataChange(This,pFormatetc,pStgmed))
#define AsyncIAdviseSink2_OnViewChange(This,dwAspect,lindex) \
    ((This)->lpVtbl->OnViewChange(This,dwAspect,lindex))
#define AsyncIAdviseSink2_OnRename(This,pmk) \
    ((This)->lpVtbl->OnRename(This,pmk))
#define AsyncIAdviseSink2_OnSave(This) \
    ((This)->lpVtbl->OnSave(This))
#define AsyncIAdviseSink2_OnClose(This) \
    ((This)->lpVtbl->OnClose(This))
/*** AsyncIAdviseSink2 methods ***/
#define AsyncIAdviseSink2_Begin_OnLinkSrcChange(This,pmk) \
    ((This)->lpVtbl->Begin_OnLinkSrcChange(This,pmk))
#define AsyncIAdviseSink2_Finish_OnLinkSrcChange(This) \
    ((This)->lpVtbl->Finish_OnLinkSrcChange(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Proxy(
    AsyncIAdviseSink2 *This,
    IMoniker *pmk);

void __RPC_STUB AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Proxy(
    AsyncIAdviseSink2 *This);

void __RPC_STUB AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

void AsyncIAdviseSink2_Begin_OnLinkSrcChange_Proxy(
    IMoniker *pmk);
HRESULT AsyncIAdviseSink2_Begin_OnLinkSrcChange_Stub(
    IMoniker *pmk);
void AsyncIAdviseSink2_Finish_OnLinkSrcChange_Proxy(
    void);
HRESULT AsyncIAdviseSink2_Finish_OnLinkSrcChange_Stub(
    void);
#endif /* __AsyncIAdviseSink2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IDataObject interface
 */
#ifndef __IDataObject_INTERFACE_DEFINED__
#define __IDataObject_INTERFACE_DEFINED__

typedef IDataObject *LPDATAOBJECT;

typedef enum tagDATADIR {
    DATADIR_GET = 1,
    DATADIR_SET = 2
} DATADIR;

EXTERN_C const IID IID_IDataObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDataObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDataObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDataObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDataObject *This);

    /*** IDataObject methods ***/
    HRESULT (STDMETHODCALLTYPE *GetData)(
        IDataObject *This,
        FORMATETC *pformatetcIn,
        STGMEDIUM *pmedium);

    HRESULT (STDMETHODCALLTYPE *GetDataHere)(
        IDataObject *This,
        FORMATETC *pformatetc,
        STGMEDIUM *pmedium);

    HRESULT (STDMETHODCALLTYPE *QueryGetData)(
        IDataObject *This,
        FORMATETC *pformatetc);

    HRESULT (STDMETHODCALLTYPE *GetCanonicalFormatEtc)(
        IDataObject *This,
        FORMATETC *pformatectIn,
        FORMATETC *pformatetcOut);

    HRESULT (STDMETHODCALLTYPE *SetData)(
        IDataObject *This,
        FORMATETC *pformatetc,
        STGMEDIUM *pmedium,
        BOOL fRelease);

    HRESULT (STDMETHODCALLTYPE *EnumFormatEtc)(
        IDataObject *This,
        DWORD dwDirection,
        IEnumFORMATETC **ppenumFormatEtc);

    HRESULT (STDMETHODCALLTYPE *DAdvise)(
        IDataObject *This,
        FORMATETC *pformatetc,
        DWORD advf,
        IAdviseSink *pAdvSink,
        DWORD *pdwConnection);

    HRESULT (STDMETHODCALLTYPE *DUnadvise)(
        IDataObject *This,
        DWORD dwConnection);

    HRESULT (STDMETHODCALLTYPE *EnumDAdvise)(
        IDataObject *This,
        IEnumSTATDATA **ppenumAdvise);

    END_INTERFACE
} IDataObjectVtbl;

interface IDataObject {
    CONST_VTBL IDataObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDataObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDataObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDataObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDataObject methods ***/
#define IDataObject_GetData(This,pformatetcIn,pmedium) \
    ((This)->lpVtbl->GetData(This,pformatetcIn,pmedium))
#define IDataObject_GetDataHere(This,pformatetc,pmedium) \
    ((This)->lpVtbl->GetDataHere(This,pformatetc,pmedium))
#define IDataObject_QueryGetData(This,pformatetc) \
    ((This)->lpVtbl->QueryGetData(This,pformatetc))
#define IDataObject_GetCanonicalFormatEtc(This,pformatectIn,pformatetcOut) \
    ((This)->lpVtbl->GetCanonicalFormatEtc(This,pformatectIn,pformatetcOut))
#define IDataObject_SetData(This,pformatetc,pmedium,fRelease) \
    ((This)->lpVtbl->SetData(This,pformatetc,pmedium,fRelease))
#define IDataObject_EnumFormatEtc(This,dwDirection,ppenumFormatEtc) \
    ((This)->lpVtbl->EnumFormatEtc(This,dwDirection,ppenumFormatEtc))
#define IDataObject_DAdvise(This,pformatetc,advf,pAdvSink,pdwConnection) \
    ((This)->lpVtbl->DAdvise(This,pformatetc,advf,pAdvSink,pdwConnection))
#define IDataObject_DUnadvise(This,dwConnection) \
    ((This)->lpVtbl->DUnadvise(This,dwConnection))
#define IDataObject_EnumDAdvise(This,ppenumAdvise) \
    ((This)->lpVtbl->EnumDAdvise(This,ppenumAdvise))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetData_Proxy(
    IDataObject *This,
    FORMATETC *pformatetcIn,
    STGMEDIUM *pRemoteMedium);

void __RPC_STUB IDataObject_RemoteGetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetDataHere_Proxy(
    IDataObject *This,
    FORMATETC *pformatetc,
    STGMEDIUM *pRemoteMedium);

void __RPC_STUB IDataObject_RemoteGetDataHere_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IDataObject_RemoteSetData_Proxy(
    IDataObject *This,
    FORMATETC *pformatetc,
    FLAG_STGMEDIUM *pmedium,
    BOOL fRelease);

void __RPC_STUB IDataObject_RemoteSetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IDataObject_GetData_Proxy(
    FORMATETC *pformatetcIn,
    STGMEDIUM *pmedium);
HRESULT IDataObject_GetData_Stub(
    FORMATETC *pformatetcIn,
    STGMEDIUM *pRemoteMedium);
HRESULT IDataObject_GetDataHere_Proxy(
    FORMATETC *pformatetc,
    STGMEDIUM *pmedium);
HRESULT IDataObject_GetDataHere_Stub(
    FORMATETC *pformatetc,
    STGMEDIUM *pRemoteMedium);
HRESULT IDataObject_SetData_Proxy(
    FORMATETC *pformatetc,
    STGMEDIUM *pmedium,
    BOOL fRelease);
HRESULT IDataObject_SetData_Stub(
    FORMATETC *pformatetc,
    FLAG_STGMEDIUM *pmedium,
    BOOL fRelease);
#endif /* __IDataObject_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IDataAdviseHolder interface
 */
#ifndef __IDataAdviseHolder_INTERFACE_DEFINED__
#define __IDataAdviseHolder_INTERFACE_DEFINED__

typedef IDataAdviseHolder *LPDATAADVISEHOLDER;

EXTERN_C const IID IID_IDataAdviseHolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDataAdviseHolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDataAdviseHolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDataAdviseHolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDataAdviseHolder *This);

    /*** IDataAdviseHolder methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        IDataAdviseHolder *This,
        IDataObject *pDataObject,
        FORMATETC *pFetc,
        DWORD advf,
        IAdviseSink *pAdvise,
        DWORD *pdwConnection);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IDataAdviseHolder *This,
        DWORD dwConnection);

    HRESULT (STDMETHODCALLTYPE *EnumAdvise)(
        IDataAdviseHolder *This,
        IEnumSTATDATA **ppenumAdvise);

    HRESULT (STDMETHODCALLTYPE *SendOnDataChange)(
        IDataAdviseHolder *This,
        IDataObject *pDataObject,
        DWORD dwReserved,
        DWORD advf);

    END_INTERFACE
} IDataAdviseHolderVtbl;

interface IDataAdviseHolder {
    CONST_VTBL IDataAdviseHolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDataAdviseHolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDataAdviseHolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDataAdviseHolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDataAdviseHolder methods ***/
#define IDataAdviseHolder_Advise(This,pDataObject,pFetc,advf,pAdvise,pdwConnection) \
    ((This)->lpVtbl->Advise(This,pDataObject,pFetc,advf,pAdvise,pdwConnection))
#define IDataAdviseHolder_Unadvise(This,dwConnection) \
    ((This)->lpVtbl->Unadvise(This,dwConnection))
#define IDataAdviseHolder_EnumAdvise(This,ppenumAdvise) \
    ((This)->lpVtbl->EnumAdvise(This,ppenumAdvise))
#define IDataAdviseHolder_SendOnDataChange(This,pDataObject,dwReserved,advf) \
    ((This)->lpVtbl->SendOnDataChange(This,pDataObject,dwReserved,advf))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDataAdviseHolder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMessageFilter interface
 */
#ifndef __IMessageFilter_INTERFACE_DEFINED__
#define __IMessageFilter_INTERFACE_DEFINED__

typedef IMessageFilter *LPMESSAGEFILTER;

typedef enum tagCALLTYPE {
    CALLTYPE_TOPLEVEL = 1,
    CALLTYPE_NESTED = 2,
    CALLTYPE_ASYNC = 3,
    CALLTYPE_TOPLEVEL_CALLPENDING = 4,
    CALLTYPE_ASYNC_CALLPENDING = 5
} CALLTYPE;

typedef enum tagSERVERCALL {
    SERVERCALL_ISHANDLED = 0,
    SERVERCALL_REJECTED = 1,
    SERVERCALL_RETRYLATER = 2
} SERVERCALL;

typedef enum tagPENDINGTYPE {
    PENDINGTYPE_TOPLEVEL = 1,
    PENDINGTYPE_NESTED = 2
} PENDINGTYPE;

typedef enum tagPENDINGMSG {
    PENDINGMSG_CANCELCALL = 0,
    PENDINGMSG_WAITNOPROCESS = 1,
    PENDINGMSG_WAITDEFPROCESS = 2
} PENDINGMSG;

typedef struct tagINTERFACEINFO {
    IUnknown *pUnk;
    IID iid;
    WORD wMethod;
} INTERFACEINFO;
typedef struct tagINTERFACEINFO *LPINTERFACEINFO;

EXTERN_C const IID IID_IMessageFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMessageFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMessageFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMessageFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMessageFilter *This);

    /*** IMessageFilter methods ***/
    DWORD (STDMETHODCALLTYPE *HandleInComingCall)(
        IMessageFilter *This,
        DWORD dwCallType,
        HTASK htaskCaller,
        DWORD dwTickCount,
        LPINTERFACEINFO lpInterfaceInfo);

    DWORD (STDMETHODCALLTYPE *RetryRejectedCall)(
        IMessageFilter *This,
        HTASK htaskCallee,
        DWORD dwTickCount,
        DWORD dwRejectType);

    DWORD (STDMETHODCALLTYPE *MessagePending)(
        IMessageFilter *This,
        HTASK htaskCallee,
        DWORD dwTickCount,
        DWORD dwPendingType);

    END_INTERFACE
} IMessageFilterVtbl;

interface IMessageFilter {
    CONST_VTBL IMessageFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMessageFilter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMessageFilter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMessageFilter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMessageFilter methods ***/
#define IMessageFilter_HandleInComingCall(This,dwCallType,htaskCaller,dwTickCount,lpInterfaceInfo) \
    ((This)->lpVtbl->HandleInComingCall(This,dwCallType,htaskCaller,dwTickCount,lpInterfaceInfo))
#define IMessageFilter_RetryRejectedCall(This,htaskCallee,dwTickCount,dwRejectType) \
    ((This)->lpVtbl->RetryRejectedCall(This,htaskCallee,dwTickCount,dwRejectType))
#define IMessageFilter_MessagePending(This,htaskCallee,dwTickCount,dwPendingType) \
    ((This)->lpVtbl->MessagePending(This,htaskCallee,dwTickCount,dwPendingType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMessageFilter_INTERFACE_DEFINED__ */

// Well-known Property Set Format IDs
extern const FMTID FMTID_SummaryInformation;
extern const FMTID FMTID_DocSummaryInformation;
extern const FMTID FMTID_UserDefinedProperties;
extern const FMTID FMTID_DiscardableInformation;
extern const FMTID FMTID_ImageSummaryInformation;
extern const FMTID FMTID_AudioSummaryInformation;
extern const FMTID FMTID_VideoSummaryInformation;
extern const FMTID FMTID_MediaFileSummaryInformation;

/*****************************************************************************
 * IClassActivator interface
 */
#ifndef __IClassActivator_INTERFACE_DEFINED__
#define __IClassActivator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IClassActivator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IClassActivatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassActivator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassActivator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassActivator *This);

    /*** IClassActivator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassObject)(
        IClassActivator *This,
        REFCLSID rclsid,
        DWORD dwClassContext,
        LCID locale,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IClassActivatorVtbl;

interface IClassActivator {
    CONST_VTBL IClassActivatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClassActivator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IClassActivator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IClassActivator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IClassActivator methods ***/
#define IClassActivator_GetClassObject(This,rclsid,dwClassContext,locale,riid,ppv) \
    ((This)->lpVtbl->GetClassObject(This,rclsid,dwClassContext,locale,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IClassActivator_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IFillLockBytes interface
 */
#ifndef __IFillLockBytes_INTERFACE_DEFINED__
#define __IFillLockBytes_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFillLockBytes;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFillLockBytesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFillLockBytes *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFillLockBytes *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFillLockBytes *This);

    /*** IFillLockBytes methods ***/
    HRESULT (STDMETHODCALLTYPE *FillAppend)(
        IFillLockBytes *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *FillAt)(
        IFillLockBytes *This,
        ULARGE_INTEGER ulOffset,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *SetFillSize)(
        IFillLockBytes *This,
        ULARGE_INTEGER ulSize);

    HRESULT (STDMETHODCALLTYPE *Terminate)(
        IFillLockBytes *This,
        BOOL bCanceled);

    END_INTERFACE
} IFillLockBytesVtbl;

interface IFillLockBytes {
    CONST_VTBL IFillLockBytesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFillLockBytes_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFillLockBytes_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFillLockBytes_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFillLockBytes methods ***/
#define IFillLockBytes_FillAppend(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->FillAppend(This,pv,cb,pcbWritten))
#define IFillLockBytes_FillAt(This,ulOffset,pv,cb,pcbWritten) \
    ((This)->lpVtbl->FillAt(This,ulOffset,pv,cb,pcbWritten))
#define IFillLockBytes_SetFillSize(This,ulSize) \
    ((This)->lpVtbl->SetFillSize(This,ulSize))
#define IFillLockBytes_Terminate(This,bCanceled) \
    ((This)->lpVtbl->Terminate(This,bCanceled))
#endif /* COBJMACROS */

#endif /* C */

HRESULT __stdcall IFillLockBytes_RemoteFillAppend_Proxy(
    IFillLockBytes *This,
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);

void __RPC_STUB IFillLockBytes_RemoteFillAppend_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT __stdcall IFillLockBytes_RemoteFillAt_Proxy(
    IFillLockBytes *This,
    ULARGE_INTEGER ulOffset,
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);

void __RPC_STUB IFillLockBytes_RemoteFillAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IFillLockBytes_FillAppend_Proxy(
    void *pv,
    ULONG cb,
    ULONG *pcbWritten);
HRESULT __stdcall IFillLockBytes_FillAppend_Stub(
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);
HRESULT IFillLockBytes_FillAt_Proxy(
    ULARGE_INTEGER ulOffset,
    void *pv,
    ULONG cb,
    ULONG *pcbWritten);
HRESULT __stdcall IFillLockBytes_FillAt_Stub(
    ULARGE_INTEGER ulOffset,
    const byte *pv,
    ULONG cb,
    ULONG *pcbWritten);
#endif /* __IFillLockBytes_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IProgressNotify interface
 */
#ifndef __IProgressNotify_INTERFACE_DEFINED__
#define __IProgressNotify_INTERFACE_DEFINED__

EXTERN_C const IID IID_IProgressNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IProgressNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProgressNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProgressNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProgressNotify *This);

    /*** IProgressNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *OnProgress)(
        IProgressNotify *This,
        DWORD dwProgressCurrent,
        DWORD dwProgressMaximum,
        BOOL fAccurate,
        BOOL fOwner);

    END_INTERFACE
} IProgressNotifyVtbl;

interface IProgressNotify {
    CONST_VTBL IProgressNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IProgressNotify_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IProgressNotify_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IProgressNotify_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IProgressNotify methods ***/
#define IProgressNotify_OnProgress(This,dwProgressCurrent,dwProgressMaximum,fAccurate,fOwner) \
    ((This)->lpVtbl->OnProgress(This,dwProgressCurrent,dwProgressMaximum,fAccurate,fOwner))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IProgressNotify_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * ILayoutStorage interface
 */
#ifndef __ILayoutStorage_INTERFACE_DEFINED__
#define __ILayoutStorage_INTERFACE_DEFINED__

typedef struct tagStorageLayout {
    DWORD LayoutType;
    OLECHAR *pwcsElementName;
    LARGE_INTEGER cOffset;
    LARGE_INTEGER cBytes;
} StorageLayout;

EXTERN_C const IID IID_ILayoutStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILayoutStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILayoutStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILayoutStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILayoutStorage *This);

    /*** ILayoutStorage methods ***/
    HRESULT (__stdcall *LayoutScript)(
        ILayoutStorage *This,
        StorageLayout *pStorageLayout,
        DWORD nEntries,
        DWORD glfInterleavedFlag);

    HRESULT (__stdcall *BeginMonitor)(
        ILayoutStorage *This);

    HRESULT (__stdcall *EndMonitor)(
        ILayoutStorage *This);

    HRESULT (__stdcall *ReLayoutDocfile)(
        ILayoutStorage *This,
        OLECHAR *pwcsNewDfName);

    HRESULT (__stdcall *ReLayoutDocfileOnILockBytes)(
        ILayoutStorage *This,
        ILockBytes *pILockBytes);

    END_INTERFACE
} ILayoutStorageVtbl;

interface ILayoutStorage {
    CONST_VTBL ILayoutStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILayoutStorage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILayoutStorage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILayoutStorage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILayoutStorage methods ***/
#define ILayoutStorage_LayoutScript(This,pStorageLayout,nEntries,glfInterleavedFlag) \
    ((This)->lpVtbl->LayoutScript(This,pStorageLayout,nEntries,glfInterleavedFlag))
#define ILayoutStorage_BeginMonitor(This) \
    ((This)->lpVtbl->BeginMonitor(This))
#define ILayoutStorage_EndMonitor(This) \
    ((This)->lpVtbl->EndMonitor(This))
#define ILayoutStorage_ReLayoutDocfile(This,pwcsNewDfName) \
    ((This)->lpVtbl->ReLayoutDocfile(This,pwcsNewDfName))
#define ILayoutStorage_ReLayoutDocfileOnILockBytes(This,pILockBytes) \
    ((This)->lpVtbl->ReLayoutDocfileOnILockBytes(This,pILockBytes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILayoutStorage_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IBlockingLock interface
 */
#ifndef __IBlockingLock_INTERFACE_DEFINED__
#define __IBlockingLock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBlockingLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBlockingLockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBlockingLock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBlockingLock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBlockingLock *This);

    /*** IBlockingLock methods ***/
    HRESULT (STDMETHODCALLTYPE *Lock)(
        IBlockingLock *This,
        DWORD dwTimeout);

    HRESULT (STDMETHODCALLTYPE *Unlock)(
        IBlockingLock *This);

    END_INTERFACE
} IBlockingLockVtbl;

interface IBlockingLock {
    CONST_VTBL IBlockingLockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBlockingLock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBlockingLock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBlockingLock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBlockingLock methods ***/
#define IBlockingLock_Lock(This,dwTimeout) \
    ((This)->lpVtbl->Lock(This,dwTimeout))
#define IBlockingLock_Unlock(This) \
    ((This)->lpVtbl->Unlock(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBlockingLock_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITimeAndNoticeControl interface
 */
#ifndef __ITimeAndNoticeControl_INTERFACE_DEFINED__
#define __ITimeAndNoticeControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITimeAndNoticeControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITimeAndNoticeControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimeAndNoticeControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimeAndNoticeControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimeAndNoticeControl *This);

    /*** ITimeAndNoticeControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SuppressChanges)(
        ITimeAndNoticeControl *This,
        DWORD res1,
        DWORD res2);

    END_INTERFACE
} ITimeAndNoticeControlVtbl;

interface ITimeAndNoticeControl {
    CONST_VTBL ITimeAndNoticeControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITimeAndNoticeControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITimeAndNoticeControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITimeAndNoticeControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITimeAndNoticeControl methods ***/
#define ITimeAndNoticeControl_SuppressChanges(This,res1,res2) \
    ((This)->lpVtbl->SuppressChanges(This,res1,res2))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITimeAndNoticeControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOplockStorage interface
 */
#ifndef __IOplockStorage_INTERFACE_DEFINED__
#define __IOplockStorage_INTERFACE_DEFINED__

EXTERN_C const IID IID_IOplockStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOplockStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOplockStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOplockStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOplockStorage *This);

    /*** IOplockStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateStorageEx)(
        IOplockStorage *This,
        LPCWSTR pwcsName,
        DWORD grfMode,
        DWORD stgfmt,
        DWORD grfAttrs,
        REFIID riid,
        void **ppstgOpen);

    HRESULT (STDMETHODCALLTYPE *OpenStorageEx)(
        IOplockStorage *This,
        LPCWSTR pwcsName,
        DWORD grfMode,
        DWORD stgfmt,
        DWORD grfAttrs,
        REFIID riid,
        void **ppstgOpen);

    END_INTERFACE
} IOplockStorageVtbl;

interface IOplockStorage {
    CONST_VTBL IOplockStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOplockStorage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOplockStorage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOplockStorage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOplockStorage methods ***/
#define IOplockStorage_CreateStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen) \
    ((This)->lpVtbl->CreateStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen))
#define IOplockStorage_OpenStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen) \
    ((This)->lpVtbl->OpenStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOplockStorage_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IDirectWriterLock interface
 */
#ifndef __IDirectWriterLock_INTERFACE_DEFINED__
#define __IDirectWriterLock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDirectWriterLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDirectWriterLockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDirectWriterLock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDirectWriterLock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDirectWriterLock *This);

    /*** IDirectWriterLock methods ***/
    HRESULT (STDMETHODCALLTYPE *WaitForWriteAccess)(
        IDirectWriterLock *This,
        DWORD dwTimeout);

    HRESULT (STDMETHODCALLTYPE *ReleaseWriteAccess)(
        IDirectWriterLock *This);

    HRESULT (STDMETHODCALLTYPE *HaveWriteAccess)(
        IDirectWriterLock *This);

    END_INTERFACE
} IDirectWriterLockVtbl;

interface IDirectWriterLock {
    CONST_VTBL IDirectWriterLockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDirectWriterLock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDirectWriterLock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDirectWriterLock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDirectWriterLock methods ***/
#define IDirectWriterLock_WaitForWriteAccess(This,dwTimeout) \
    ((This)->lpVtbl->WaitForWriteAccess(This,dwTimeout))
#define IDirectWriterLock_ReleaseWriteAccess(This) \
    ((This)->lpVtbl->ReleaseWriteAccess(This))
#define IDirectWriterLock_HaveWriteAccess(This) \
    ((This)->lpVtbl->HaveWriteAccess(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDirectWriterLock_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IUrlMon interface
 */
#ifndef __IUrlMon_INTERFACE_DEFINED__
#define __IUrlMon_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUrlMon;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUrlMonVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUrlMon *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUrlMon *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUrlMon *This);

    /*** IUrlMon methods ***/
    HRESULT (STDMETHODCALLTYPE *AsyncGetClassBits)(
        IUrlMon *This,
        REFCLSID rclsid,
        LPCWSTR pszTYPE,
        LPCWSTR pszExt,
        DWORD dwFileVersionMS,
        DWORD dwFileVersionLS,
        LPCWSTR pszCodeBase,
        IBindCtx *pbc,
        DWORD dwClassContext,
        REFIID riid,
        DWORD flags);

    END_INTERFACE
} IUrlMonVtbl;

interface IUrlMon {
    CONST_VTBL IUrlMonVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUrlMon_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUrlMon_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUrlMon_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUrlMon methods ***/
#define IUrlMon_AsyncGetClassBits(This,rclsid,pszTYPE,pszExt,dwFileVersionMS,dwFileVersionLS,pszCodeBase,pbc,dwClassContext,riid,flags) \
    ((This)->lpVtbl->AsyncGetClassBits(This,rclsid,pszTYPE,pszExt,dwFileVersionMS,dwFileVersionLS,pszCodeBase,pbc,dwClassContext,riid,flags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUrlMon_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IForegroundTransfer interface
 */
#ifndef __IForegroundTransfer_INTERFACE_DEFINED__
#define __IForegroundTransfer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IForegroundTransfer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IForegroundTransferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IForegroundTransfer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IForegroundTransfer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IForegroundTransfer *This);

    /*** IForegroundTransfer methods ***/
    HRESULT (STDMETHODCALLTYPE *AllowForegroundTransfer)(
        IForegroundTransfer *This,
        void *lpvReserved);

    END_INTERFACE
} IForegroundTransferVtbl;

interface IForegroundTransfer {
    CONST_VTBL IForegroundTransferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IForegroundTransfer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IForegroundTransfer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IForegroundTransfer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IForegroundTransfer methods ***/
#define IForegroundTransfer_AllowForegroundTransfer(This,lpvReserved) \
    ((This)->lpVtbl->AllowForegroundTransfer(This,lpvReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IForegroundTransfer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IThumbnailExtractor interface
 */
#ifndef __IThumbnailExtractor_INTERFACE_DEFINED__
#define __IThumbnailExtractor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IThumbnailExtractor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IThumbnailExtractorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IThumbnailExtractor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IThumbnailExtractor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IThumbnailExtractor *This);

    /*** IThumbnailExtractor methods ***/
    HRESULT (STDMETHODCALLTYPE *ExtractThumbnail)(
        IThumbnailExtractor *This,
        IStorage *pStg,
        ULONG ulLength,
        ULONG ulHeight,
        ULONG *pulOutputLength,
        ULONG *pulOutputHeight,
        HBITMAP *phOutputBitmap);

    HRESULT (STDMETHODCALLTYPE *OnFileUpdated)(
        IThumbnailExtractor *This,
        IStorage *pStg);

    END_INTERFACE
} IThumbnailExtractorVtbl;

interface IThumbnailExtractor {
    CONST_VTBL IThumbnailExtractorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IThumbnailExtractor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IThumbnailExtractor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IThumbnailExtractor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IThumbnailExtractor methods ***/
#define IThumbnailExtractor_ExtractThumbnail(This,pStg,ulLength,ulHeight,pulOutputLength,pulOutputHeight,phOutputBitmap) \
    ((This)->lpVtbl->ExtractThumbnail(This,pStg,ulLength,ulHeight,pulOutputLength,pulOutputHeight,phOutputBitmap))
#define IThumbnailExtractor_OnFileUpdated(This,pStg) \
    ((This)->lpVtbl->OnFileUpdated(This,pStg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IThumbnailExtractor_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDummyHICONIncluder interface
 */
#ifndef __IDummyHICONIncluder_INTERFACE_DEFINED__
#define __IDummyHICONIncluder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDummyHICONIncluder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDummyHICONIncluderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDummyHICONIncluder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDummyHICONIncluder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDummyHICONIncluder *This);

    /*** IDummyHICONIncluder methods ***/
    HRESULT (STDMETHODCALLTYPE *Dummy)(
        IDummyHICONIncluder *This,
        HICON h1,
        HDC h2);

    END_INTERFACE
} IDummyHICONIncluderVtbl;

interface IDummyHICONIncluder {
    CONST_VTBL IDummyHICONIncluderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDummyHICONIncluder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDummyHICONIncluder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDummyHICONIncluder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDummyHICONIncluder methods ***/
#define IDummyHICONIncluder_Dummy(This,h1,h2) \
    ((This)->lpVtbl->Dummy(This,h1,h2))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDummyHICONIncluder_INTERFACE_DEFINED__ */

typedef enum tagApplicationType {
    ServerApplication = 0,
    LibraryApplication = 1
} ApplicationType;

typedef enum tagShutdownType {
    IdleShutdown = 0,
    ForcedShutdown = 1
} ShutdownType;

/*****************************************************************************
 * IProcessLock interface
 */
#ifndef __IProcessLock_INTERFACE_DEFINED__
#define __IProcessLock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IProcessLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IProcessLockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProcessLock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProcessLock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProcessLock *This);

    /*** IProcessLock methods ***/
    ULONG (STDMETHODCALLTYPE *AddRefOnProcess)(
        IProcessLock *This);

    ULONG (STDMETHODCALLTYPE *ReleaseRefOnProcess)(
        IProcessLock *This);

    END_INTERFACE
} IProcessLockVtbl;

interface IProcessLock {
    CONST_VTBL IProcessLockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IProcessLock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IProcessLock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IProcessLock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IProcessLock methods ***/
#define IProcessLock_AddRefOnProcess(This) \
    ((This)->lpVtbl->AddRefOnProcess(This))
#define IProcessLock_ReleaseRefOnProcess(This) \
    ((This)->lpVtbl->ReleaseRefOnProcess(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IProcessLock_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISurrogateService interface
 */
#ifndef __ISurrogateService_INTERFACE_DEFINED__
#define __ISurrogateService_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISurrogateService;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISurrogateServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISurrogateService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISurrogateService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISurrogateService *This);

    /*** ISurrogateService methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        ISurrogateService *This,
        REFGUID rguidProcessID,
        IProcessLock *pProcessLock,
        BOOL *pfApplicationAware);

    HRESULT (STDMETHODCALLTYPE *ApplicationLaunch)(
        ISurrogateService *This,
        REFGUID rguidApplID,
        ApplicationType appType);

    HRESULT (STDMETHODCALLTYPE *ApplicationFree)(
        ISurrogateService *This,
        REFGUID rguidApplID);

    HRESULT (STDMETHODCALLTYPE *CatalogRefresh)(
        ISurrogateService *This,
        ULONG ulReserved);

    HRESULT (STDMETHODCALLTYPE *ProcessShutdown)(
        ISurrogateService *This,
        ShutdownType shutdownType);

    END_INTERFACE
} ISurrogateServiceVtbl;

interface ISurrogateService {
    CONST_VTBL ISurrogateServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISurrogateService_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISurrogateService_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISurrogateService_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISurrogateService methods ***/
#define ISurrogateService_Init(This,rguidProcessID,pProcessLock,pfApplicationAware) \
    ((This)->lpVtbl->Init(This,rguidProcessID,pProcessLock,pfApplicationAware))
#define ISurrogateService_ApplicationLaunch(This,rguidApplID,appType) \
    ((This)->lpVtbl->ApplicationLaunch(This,rguidApplID,appType))
#define ISurrogateService_ApplicationFree(This,rguidApplID) \
    ((This)->lpVtbl->ApplicationFree(This,rguidApplID))
#define ISurrogateService_CatalogRefresh(This,ulReserved) \
    ((This)->lpVtbl->CatalogRefresh(This,ulReserved))
#define ISurrogateService_ProcessShutdown(This,shutdownType) \
    ((This)->lpVtbl->ProcessShutdown(This,shutdownType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISurrogateService_INTERFACE_DEFINED__ */

#if  (_WIN32_WINNT >= 0x0501 )

/*****************************************************************************
 * IInitializeSpy interface
 */
#ifndef __IInitializeSpy_INTERFACE_DEFINED__
#define __IInitializeSpy_INTERFACE_DEFINED__

typedef IInitializeSpy *LPINITIALIZESPY;

EXTERN_C const IID IID_IInitializeSpy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeSpyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeSpy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeSpy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeSpy *This);

    /*** IInitializeSpy methods ***/
    HRESULT (STDMETHODCALLTYPE *PreInitialize)(
        IInitializeSpy *This,
        DWORD dwCoInit,
        DWORD dwCurThreadAptRefs);

    HRESULT (STDMETHODCALLTYPE *PostInitialize)(
        IInitializeSpy *This,
        HRESULT hrCoInit,
        DWORD dwCoInit,
        DWORD dwNewThreadAptRefs);

    HRESULT (STDMETHODCALLTYPE *PreUninitialize)(
        IInitializeSpy *This,
        DWORD dwCurThreadAptRefs);

    HRESULT (STDMETHODCALLTYPE *PostUninitialize)(
        IInitializeSpy *This,
        DWORD dwNewThreadAptRefs);

    END_INTERFACE
} IInitializeSpyVtbl;

interface IInitializeSpy {
    CONST_VTBL IInitializeSpyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeSpy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeSpy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeSpy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeSpy methods ***/
#define IInitializeSpy_PreInitialize(This,dwCoInit,dwCurThreadAptRefs) \
    ((This)->lpVtbl->PreInitialize(This,dwCoInit,dwCurThreadAptRefs))
#define IInitializeSpy_PostInitialize(This,hrCoInit,dwCoInit,dwNewThreadAptRefs) \
    ((This)->lpVtbl->PostInitialize(This,hrCoInit,dwCoInit,dwNewThreadAptRefs))
#define IInitializeSpy_PreUninitialize(This,dwCurThreadAptRefs) \
    ((This)->lpVtbl->PreUninitialize(This,dwCurThreadAptRefs))
#define IInitializeSpy_PostUninitialize(This,dwNewThreadAptRefs) \
    ((This)->lpVtbl->PostUninitialize(This,dwNewThreadAptRefs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeSpy_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IApartmentShutdown interface
 */
#ifndef __IApartmentShutdown_INTERFACE_DEFINED__
#define __IApartmentShutdown_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApartmentShutdown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApartmentShutdownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApartmentShutdown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApartmentShutdown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApartmentShutdown *This);

    /*** IApartmentShutdown methods ***/
    void (STDMETHODCALLTYPE *OnUninitialize)(
        IApartmentShutdown *This,
        UINT64 ui64ApartmentIdentifier);

    END_INTERFACE
} IApartmentShutdownVtbl;

interface IApartmentShutdown {
    CONST_VTBL IApartmentShutdownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApartmentShutdown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApartmentShutdown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApartmentShutdown_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApartmentShutdown methods ***/
#define IApartmentShutdown_OnUninitialize(This,ui64ApartmentIdentifier) \
    ((This)->lpVtbl->OnUninitialize(This,ui64ApartmentIdentifier))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApartmentShutdown_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER SNB_UserSize(ULONG *, ULONG, SNB *);
unsigned char * __RPC_USER SNB_UserMarshal(ULONG *, unsigned char *, SNB *);
unsigned char * __RPC_USER SNB_UserUnmarshal(ULONG *, unsigned char *, SNB *);
void __RPC_USER SNB_UserFree(ULONG *, SNB *);
ULONG __RPC_USER CLIPFORMAT_UserSize(ULONG *, ULONG, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal(ULONG *, unsigned char *, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(ULONG *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(ULONG *, CLIPFORMAT *);
ULONG __RPC_USER STGMEDIUM_UserSize(ULONG *, ULONG, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserMarshal(ULONG *, unsigned char *, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(ULONG *, STGMEDIUM *);
ULONG __RPC_USER ASYNC_STGMEDIUM_UserSize(ULONG *, ULONG, ASYNC_STGMEDIUM *);
unsigned char * __RPC_USER ASYNC_STGMEDIUM_UserMarshal(ULONG *, unsigned char *, ASYNC_STGMEDIUM *);
unsigned char * __RPC_USER ASYNC_STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, ASYNC_STGMEDIUM *);
void __RPC_USER ASYNC_STGMEDIUM_UserFree(ULONG *, ASYNC_STGMEDIUM *);
ULONG __RPC_USER FLAG_STGMEDIUM_UserSize(ULONG *, ULONG, FLAG_STGMEDIUM *);
unsigned char * __RPC_USER FLAG_STGMEDIUM_UserMarshal(ULONG *, unsigned char *, FLAG_STGMEDIUM *);
unsigned char * __RPC_USER FLAG_STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, FLAG_STGMEDIUM *);
void __RPC_USER FLAG_STGMEDIUM_UserFree(ULONG *, FLAG_STGMEDIUM *);
ULONG __RPC_USER HBITMAP_UserSize(ULONG *, ULONG, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserMarshal(ULONG *, unsigned char *, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(ULONG *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(ULONG *, HBITMAP *);
ULONG __RPC_USER HICON_UserSize(ULONG *, ULONG, HICON *);
unsigned char * __RPC_USER HICON_UserMarshal(ULONG *, unsigned char *, HICON *);
unsigned char * __RPC_USER HICON_UserUnmarshal(ULONG *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(ULONG *, HICON *);
ULONG __RPC_USER HDC_UserSize(ULONG *, ULONG, HDC *);
unsigned char * __RPC_USER HDC_UserMarshal(ULONG *, unsigned char *, HDC *);
unsigned char * __RPC_USER HDC_UserUnmarshal(ULONG *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree(ULONG *, HDC *);

/* End additional prototypes for all interfaces */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* __objidl_h__ */
