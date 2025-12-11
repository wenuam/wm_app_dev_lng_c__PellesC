/* Generated from mfidl.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __mfidl_h__
#define __mfidl_h__

#if __POCC__ >= 500
#pragma once
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2185)  /* Alignment of field 'x' can be less than the natural alignment */
#endif

/* Forward declarations */

#ifndef __IMFMediaSession_FWD_DEFINED__
#define __IMFMediaSession_FWD_DEFINED__
typedef interface IMFMediaSession IMFMediaSession;
#endif /* __IMFMediaSession_FWD_DEFINED__ */

#ifndef __IMFSourceResolver_FWD_DEFINED__
#define __IMFSourceResolver_FWD_DEFINED__
typedef interface IMFSourceResolver IMFSourceResolver;
#endif /* __IMFSourceResolver_FWD_DEFINED__ */

#ifndef __IMFMediaSource_FWD_DEFINED__
#define __IMFMediaSource_FWD_DEFINED__
typedef interface IMFMediaSource IMFMediaSource;
#endif /* __IMFMediaSource_FWD_DEFINED__ */

#ifndef __IMFMediaSourceEx_FWD_DEFINED__
#define __IMFMediaSourceEx_FWD_DEFINED__
typedef interface IMFMediaSourceEx IMFMediaSourceEx;
#endif /* __IMFMediaSourceEx_FWD_DEFINED__ */

#ifndef __IMFClockConsumer_FWD_DEFINED__
#define __IMFClockConsumer_FWD_DEFINED__
typedef interface IMFClockConsumer IMFClockConsumer;
#endif /* __IMFClockConsumer_FWD_DEFINED__ */

#ifndef __IMFMediaStream_FWD_DEFINED__
#define __IMFMediaStream_FWD_DEFINED__
typedef interface IMFMediaStream IMFMediaStream;
#endif /* __IMFMediaStream_FWD_DEFINED__ */

#ifndef __IMFMediaSink_FWD_DEFINED__
#define __IMFMediaSink_FWD_DEFINED__
typedef interface IMFMediaSink IMFMediaSink;
#endif /* __IMFMediaSink_FWD_DEFINED__ */

#ifndef __IMFStreamSink_FWD_DEFINED__
#define __IMFStreamSink_FWD_DEFINED__
typedef interface IMFStreamSink IMFStreamSink;
#endif /* __IMFStreamSink_FWD_DEFINED__ */

#ifndef __IMFVideoSampleAllocator_FWD_DEFINED__
#define __IMFVideoSampleAllocator_FWD_DEFINED__
typedef interface IMFVideoSampleAllocator IMFVideoSampleAllocator;
#endif /* __IMFVideoSampleAllocator_FWD_DEFINED__ */

#ifndef __IMFVideoSampleAllocatorNotify_FWD_DEFINED__
#define __IMFVideoSampleAllocatorNotify_FWD_DEFINED__
typedef interface IMFVideoSampleAllocatorNotify IMFVideoSampleAllocatorNotify;
#endif /* __IMFVideoSampleAllocatorNotify_FWD_DEFINED__ */

#ifndef __IMFVideoSampleAllocatorNotifyEx_FWD_DEFINED__
#define __IMFVideoSampleAllocatorNotifyEx_FWD_DEFINED__
typedef interface IMFVideoSampleAllocatorNotifyEx IMFVideoSampleAllocatorNotifyEx;
#endif /* __IMFVideoSampleAllocatorNotifyEx_FWD_DEFINED__ */

#ifndef __IMFVideoSampleAllocatorCallback_FWD_DEFINED__
#define __IMFVideoSampleAllocatorCallback_FWD_DEFINED__
typedef interface IMFVideoSampleAllocatorCallback IMFVideoSampleAllocatorCallback;
#endif /* __IMFVideoSampleAllocatorCallback_FWD_DEFINED__ */

#ifndef __IMFVideoSampleAllocatorEx_FWD_DEFINED__
#define __IMFVideoSampleAllocatorEx_FWD_DEFINED__
typedef interface IMFVideoSampleAllocatorEx IMFVideoSampleAllocatorEx;
#endif /* __IMFVideoSampleAllocatorEx_FWD_DEFINED__ */

#ifndef __IMFDXGIDeviceManagerSource_FWD_DEFINED__
#define __IMFDXGIDeviceManagerSource_FWD_DEFINED__
typedef interface IMFDXGIDeviceManagerSource IMFDXGIDeviceManagerSource;
#endif /* __IMFDXGIDeviceManagerSource_FWD_DEFINED__ */

#ifndef __IMFVideoProcessorControl_FWD_DEFINED__
#define __IMFVideoProcessorControl_FWD_DEFINED__
typedef interface IMFVideoProcessorControl IMFVideoProcessorControl;
#endif /* __IMFVideoProcessorControl_FWD_DEFINED__ */

#ifndef __IMFVideoProcessorControl2_FWD_DEFINED__
#define __IMFVideoProcessorControl2_FWD_DEFINED__
typedef interface IMFVideoProcessorControl2 IMFVideoProcessorControl2;
#endif /* __IMFVideoProcessorControl2_FWD_DEFINED__ */

#ifndef __IMFVideoProcessorControl3_FWD_DEFINED__
#define __IMFVideoProcessorControl3_FWD_DEFINED__
typedef interface IMFVideoProcessorControl3 IMFVideoProcessorControl3;
#endif /* __IMFVideoProcessorControl3_FWD_DEFINED__ */

#ifndef __IMFVideoRendererEffectControl_FWD_DEFINED__
#define __IMFVideoRendererEffectControl_FWD_DEFINED__
typedef interface IMFVideoRendererEffectControl IMFVideoRendererEffectControl;
#endif /* __IMFVideoRendererEffectControl_FWD_DEFINED__ */

#ifndef __IMFTopology_FWD_DEFINED__
#define __IMFTopology_FWD_DEFINED__
typedef interface IMFTopology IMFTopology;
#endif /* __IMFTopology_FWD_DEFINED__ */

#ifndef __IMFTopologyNode_FWD_DEFINED__
#define __IMFTopologyNode_FWD_DEFINED__
typedef interface IMFTopologyNode IMFTopologyNode;
#endif /* __IMFTopologyNode_FWD_DEFINED__ */

#ifndef __IMFGetService_FWD_DEFINED__
#define __IMFGetService_FWD_DEFINED__
typedef interface IMFGetService IMFGetService;
#endif /* __IMFGetService_FWD_DEFINED__ */

#ifndef __IMFClock_FWD_DEFINED__
#define __IMFClock_FWD_DEFINED__
typedef interface IMFClock IMFClock;
#endif /* __IMFClock_FWD_DEFINED__ */

#ifndef __IMFPresentationClock_FWD_DEFINED__
#define __IMFPresentationClock_FWD_DEFINED__
typedef interface IMFPresentationClock IMFPresentationClock;
#endif /* __IMFPresentationClock_FWD_DEFINED__ */

#ifndef __IMFPresentationTimeSource_FWD_DEFINED__
#define __IMFPresentationTimeSource_FWD_DEFINED__
typedef interface IMFPresentationTimeSource IMFPresentationTimeSource;
#endif /* __IMFPresentationTimeSource_FWD_DEFINED__ */

#ifndef __IMFClockStateSink_FWD_DEFINED__
#define __IMFClockStateSink_FWD_DEFINED__
typedef interface IMFClockStateSink IMFClockStateSink;
#endif /* __IMFClockStateSink_FWD_DEFINED__ */

#ifndef __IMFPresentationDescriptor_FWD_DEFINED__
#define __IMFPresentationDescriptor_FWD_DEFINED__
typedef interface IMFPresentationDescriptor IMFPresentationDescriptor;
#endif /* __IMFPresentationDescriptor_FWD_DEFINED__ */

#ifndef __IMFStreamDescriptor_FWD_DEFINED__
#define __IMFStreamDescriptor_FWD_DEFINED__
typedef interface IMFStreamDescriptor IMFStreamDescriptor;
#endif /* __IMFStreamDescriptor_FWD_DEFINED__ */

#ifndef __IMFMediaTypeHandler_FWD_DEFINED__
#define __IMFMediaTypeHandler_FWD_DEFINED__
typedef interface IMFMediaTypeHandler IMFMediaTypeHandler;
#endif /* __IMFMediaTypeHandler_FWD_DEFINED__ */

#ifndef __IMFTimer_FWD_DEFINED__
#define __IMFTimer_FWD_DEFINED__
typedef interface IMFTimer IMFTimer;
#endif /* __IMFTimer_FWD_DEFINED__ */

#ifndef __IMFShutdown_FWD_DEFINED__
#define __IMFShutdown_FWD_DEFINED__
typedef interface IMFShutdown IMFShutdown;
#endif /* __IMFShutdown_FWD_DEFINED__ */

#ifndef __IMFTopoLoader_FWD_DEFINED__
#define __IMFTopoLoader_FWD_DEFINED__
typedef interface IMFTopoLoader IMFTopoLoader;
#endif /* __IMFTopoLoader_FWD_DEFINED__ */

#ifndef __IMFContentProtectionManager_FWD_DEFINED__
#define __IMFContentProtectionManager_FWD_DEFINED__
typedef interface IMFContentProtectionManager IMFContentProtectionManager;
#endif /* __IMFContentProtectionManager_FWD_DEFINED__ */

#ifndef __IMFContentEnabler_FWD_DEFINED__
#define __IMFContentEnabler_FWD_DEFINED__
typedef interface IMFContentEnabler IMFContentEnabler;
#endif /* __IMFContentEnabler_FWD_DEFINED__ */

#ifndef __IMFMetadata_FWD_DEFINED__
#define __IMFMetadata_FWD_DEFINED__
typedef interface IMFMetadata IMFMetadata;
#endif /* __IMFMetadata_FWD_DEFINED__ */

#ifndef __IMFMetadataProvider_FWD_DEFINED__
#define __IMFMetadataProvider_FWD_DEFINED__
typedef interface IMFMetadataProvider IMFMetadataProvider;
#endif /* __IMFMetadataProvider_FWD_DEFINED__ */

#ifndef __IMFRateSupport_FWD_DEFINED__
#define __IMFRateSupport_FWD_DEFINED__
typedef interface IMFRateSupport IMFRateSupport;
#endif /* __IMFRateSupport_FWD_DEFINED__ */

#ifndef __IMFRateControl_FWD_DEFINED__
#define __IMFRateControl_FWD_DEFINED__
typedef interface IMFRateControl IMFRateControl;
#endif /* __IMFRateControl_FWD_DEFINED__ */

#ifndef __IMFTimecodeTranslate_FWD_DEFINED__
#define __IMFTimecodeTranslate_FWD_DEFINED__
typedef interface IMFTimecodeTranslate IMFTimecodeTranslate;
#endif /* __IMFTimecodeTranslate_FWD_DEFINED__ */

#ifndef __IMFSeekInfo_FWD_DEFINED__
#define __IMFSeekInfo_FWD_DEFINED__
typedef interface IMFSeekInfo IMFSeekInfo;
#endif /* __IMFSeekInfo_FWD_DEFINED__ */

#ifndef __IMFSimpleAudioVolume_FWD_DEFINED__
#define __IMFSimpleAudioVolume_FWD_DEFINED__
typedef interface IMFSimpleAudioVolume IMFSimpleAudioVolume;
#endif /* __IMFSimpleAudioVolume_FWD_DEFINED__ */

#ifndef __IMFAudioStreamVolume_FWD_DEFINED__
#define __IMFAudioStreamVolume_FWD_DEFINED__
typedef interface IMFAudioStreamVolume IMFAudioStreamVolume;
#endif /* __IMFAudioStreamVolume_FWD_DEFINED__ */

#ifndef __IMFAudioPolicy_FWD_DEFINED__
#define __IMFAudioPolicy_FWD_DEFINED__
typedef interface IMFAudioPolicy IMFAudioPolicy;
#endif /* __IMFAudioPolicy_FWD_DEFINED__ */

#ifndef __IMFSampleGrabberSinkCallback_FWD_DEFINED__
#define __IMFSampleGrabberSinkCallback_FWD_DEFINED__
typedef interface IMFSampleGrabberSinkCallback IMFSampleGrabberSinkCallback;
#endif /* __IMFSampleGrabberSinkCallback_FWD_DEFINED__ */

#ifndef __IMFSampleGrabberSinkCallback2_FWD_DEFINED__
#define __IMFSampleGrabberSinkCallback2_FWD_DEFINED__
typedef interface IMFSampleGrabberSinkCallback2 IMFSampleGrabberSinkCallback2;
#endif /* __IMFSampleGrabberSinkCallback2_FWD_DEFINED__ */

#ifndef __IMFWorkQueueServices_FWD_DEFINED__
#define __IMFWorkQueueServices_FWD_DEFINED__
typedef interface IMFWorkQueueServices IMFWorkQueueServices;
#endif /* __IMFWorkQueueServices_FWD_DEFINED__ */

#ifndef __IMFWorkQueueServicesEx_FWD_DEFINED__
#define __IMFWorkQueueServicesEx_FWD_DEFINED__
typedef interface IMFWorkQueueServicesEx IMFWorkQueueServicesEx;
#endif /* __IMFWorkQueueServicesEx_FWD_DEFINED__ */

#ifndef __IMFQualityManager_FWD_DEFINED__
#define __IMFQualityManager_FWD_DEFINED__
typedef interface IMFQualityManager IMFQualityManager;
#endif /* __IMFQualityManager_FWD_DEFINED__ */

#ifndef __IMFQualityAdvise_FWD_DEFINED__
#define __IMFQualityAdvise_FWD_DEFINED__
typedef interface IMFQualityAdvise IMFQualityAdvise;
#endif /* __IMFQualityAdvise_FWD_DEFINED__ */

#ifndef __IMFQualityAdvise2_FWD_DEFINED__
#define __IMFQualityAdvise2_FWD_DEFINED__
typedef interface IMFQualityAdvise2 IMFQualityAdvise2;
#endif /* __IMFQualityAdvise2_FWD_DEFINED__ */

#ifndef __IMFQualityAdviseLimits_FWD_DEFINED__
#define __IMFQualityAdviseLimits_FWD_DEFINED__
typedef interface IMFQualityAdviseLimits IMFQualityAdviseLimits;
#endif /* __IMFQualityAdviseLimits_FWD_DEFINED__ */

#ifndef __IMFRealTimeClient_FWD_DEFINED__
#define __IMFRealTimeClient_FWD_DEFINED__
typedef interface IMFRealTimeClient IMFRealTimeClient;
#endif /* __IMFRealTimeClient_FWD_DEFINED__ */

#ifndef __IMFRealTimeClientEx_FWD_DEFINED__
#define __IMFRealTimeClientEx_FWD_DEFINED__
typedef interface IMFRealTimeClientEx IMFRealTimeClientEx;
#endif /* __IMFRealTimeClientEx_FWD_DEFINED__ */

#ifndef __IMFSequencerSource_FWD_DEFINED__
#define __IMFSequencerSource_FWD_DEFINED__
typedef interface IMFSequencerSource IMFSequencerSource;
#endif /* __IMFSequencerSource_FWD_DEFINED__ */

#ifndef __IMFMediaSourceTopologyProvider_FWD_DEFINED__
#define __IMFMediaSourceTopologyProvider_FWD_DEFINED__
typedef interface IMFMediaSourceTopologyProvider IMFMediaSourceTopologyProvider;
#endif /* __IMFMediaSourceTopologyProvider_FWD_DEFINED__ */

#ifndef __IMFMediaSourcePresentationProvider_FWD_DEFINED__
#define __IMFMediaSourcePresentationProvider_FWD_DEFINED__
typedef interface IMFMediaSourcePresentationProvider IMFMediaSourcePresentationProvider;
#endif /* __IMFMediaSourcePresentationProvider_FWD_DEFINED__ */

#ifndef __IMFTopologyNodeAttributeEditor_FWD_DEFINED__
#define __IMFTopologyNodeAttributeEditor_FWD_DEFINED__
typedef interface IMFTopologyNodeAttributeEditor IMFTopologyNodeAttributeEditor;
#endif /* __IMFTopologyNodeAttributeEditor_FWD_DEFINED__ */

#ifndef __IMFByteStreamBuffering_FWD_DEFINED__
#define __IMFByteStreamBuffering_FWD_DEFINED__
typedef interface IMFByteStreamBuffering IMFByteStreamBuffering;
#endif /* __IMFByteStreamBuffering_FWD_DEFINED__ */

#ifndef __IMFByteStreamCacheControl_FWD_DEFINED__
#define __IMFByteStreamCacheControl_FWD_DEFINED__
typedef interface IMFByteStreamCacheControl IMFByteStreamCacheControl;
#endif /* __IMFByteStreamCacheControl_FWD_DEFINED__ */

#ifndef __IMFByteStreamTimeSeek_FWD_DEFINED__
#define __IMFByteStreamTimeSeek_FWD_DEFINED__
typedef interface IMFByteStreamTimeSeek IMFByteStreamTimeSeek;
#endif /* __IMFByteStreamTimeSeek_FWD_DEFINED__ */

#ifndef __IMFByteStreamCacheControl2_FWD_DEFINED__
#define __IMFByteStreamCacheControl2_FWD_DEFINED__
typedef interface IMFByteStreamCacheControl2 IMFByteStreamCacheControl2;
#endif /* __IMFByteStreamCacheControl2_FWD_DEFINED__ */

#ifndef __IMFNetCredential_FWD_DEFINED__
#define __IMFNetCredential_FWD_DEFINED__
typedef interface IMFNetCredential IMFNetCredential;
#endif /* __IMFNetCredential_FWD_DEFINED__ */

#ifndef __IMFNetCredentialManager_FWD_DEFINED__
#define __IMFNetCredentialManager_FWD_DEFINED__
typedef interface IMFNetCredentialManager IMFNetCredentialManager;
#endif /* __IMFNetCredentialManager_FWD_DEFINED__ */

#ifndef __IMFNetCredentialCache_FWD_DEFINED__
#define __IMFNetCredentialCache_FWD_DEFINED__
typedef interface IMFNetCredentialCache IMFNetCredentialCache;
#endif /* __IMFNetCredentialCache_FWD_DEFINED__ */

#ifndef __IMFSSLCertificateManager_FWD_DEFINED__
#define __IMFSSLCertificateManager_FWD_DEFINED__
typedef interface IMFSSLCertificateManager IMFSSLCertificateManager;
#endif /* __IMFSSLCertificateManager_FWD_DEFINED__ */

#ifndef __IMFNetResourceFilter_FWD_DEFINED__
#define __IMFNetResourceFilter_FWD_DEFINED__
typedef interface IMFNetResourceFilter IMFNetResourceFilter;
#endif /* __IMFNetResourceFilter_FWD_DEFINED__ */

#ifndef __IMFSourceOpenMonitor_FWD_DEFINED__
#define __IMFSourceOpenMonitor_FWD_DEFINED__
typedef interface IMFSourceOpenMonitor IMFSourceOpenMonitor;
#endif /* __IMFSourceOpenMonitor_FWD_DEFINED__ */

#ifndef __IMFNetProxyLocator_FWD_DEFINED__
#define __IMFNetProxyLocator_FWD_DEFINED__
typedef interface IMFNetProxyLocator IMFNetProxyLocator;
#endif /* __IMFNetProxyLocator_FWD_DEFINED__ */

#ifndef __IMFNetProxyLocatorFactory_FWD_DEFINED__
#define __IMFNetProxyLocatorFactory_FWD_DEFINED__
typedef interface IMFNetProxyLocatorFactory IMFNetProxyLocatorFactory;
#endif /* __IMFNetProxyLocatorFactory_FWD_DEFINED__ */

#ifndef __IMFSaveJob_FWD_DEFINED__
#define __IMFSaveJob_FWD_DEFINED__
typedef interface IMFSaveJob IMFSaveJob;
#endif /* __IMFSaveJob_FWD_DEFINED__ */

#ifndef __IMFNetSchemeHandlerConfig_FWD_DEFINED__
#define __IMFNetSchemeHandlerConfig_FWD_DEFINED__
typedef interface IMFNetSchemeHandlerConfig IMFNetSchemeHandlerConfig;
#endif /* __IMFNetSchemeHandlerConfig_FWD_DEFINED__ */

#ifndef __IMFSchemeHandler_FWD_DEFINED__
#define __IMFSchemeHandler_FWD_DEFINED__
typedef interface IMFSchemeHandler IMFSchemeHandler;
#endif /* __IMFSchemeHandler_FWD_DEFINED__ */

#ifndef __IMFByteStreamHandler_FWD_DEFINED__
#define __IMFByteStreamHandler_FWD_DEFINED__
typedef interface IMFByteStreamHandler IMFByteStreamHandler;
#endif /* __IMFByteStreamHandler_FWD_DEFINED__ */

#ifndef __IMFTrustedInput_FWD_DEFINED__
#define __IMFTrustedInput_FWD_DEFINED__
typedef interface IMFTrustedInput IMFTrustedInput;
#endif /* __IMFTrustedInput_FWD_DEFINED__ */

#ifndef __IMFInputTrustAuthority_FWD_DEFINED__
#define __IMFInputTrustAuthority_FWD_DEFINED__
typedef interface IMFInputTrustAuthority IMFInputTrustAuthority;
#endif /* __IMFInputTrustAuthority_FWD_DEFINED__ */

#ifndef __IMFTrustedOutput_FWD_DEFINED__
#define __IMFTrustedOutput_FWD_DEFINED__
typedef interface IMFTrustedOutput IMFTrustedOutput;
#endif /* __IMFTrustedOutput_FWD_DEFINED__ */

#ifndef __IMFOutputTrustAuthority_FWD_DEFINED__
#define __IMFOutputTrustAuthority_FWD_DEFINED__
typedef interface IMFOutputTrustAuthority IMFOutputTrustAuthority;
#endif /* __IMFOutputTrustAuthority_FWD_DEFINED__ */

#ifndef __IMFOutputPolicy_FWD_DEFINED__
#define __IMFOutputPolicy_FWD_DEFINED__
typedef interface IMFOutputPolicy IMFOutputPolicy;
#endif /* __IMFOutputPolicy_FWD_DEFINED__ */

#ifndef __IMFOutputSchema_FWD_DEFINED__
#define __IMFOutputSchema_FWD_DEFINED__
typedef interface IMFOutputSchema IMFOutputSchema;
#endif /* __IMFOutputSchema_FWD_DEFINED__ */

#ifndef __IMFSecureChannel_FWD_DEFINED__
#define __IMFSecureChannel_FWD_DEFINED__
typedef interface IMFSecureChannel IMFSecureChannel;
#endif /* __IMFSecureChannel_FWD_DEFINED__ */

#ifndef __IMFSampleProtection_FWD_DEFINED__
#define __IMFSampleProtection_FWD_DEFINED__
typedef interface IMFSampleProtection IMFSampleProtection;
#endif /* __IMFSampleProtection_FWD_DEFINED__ */

#ifndef __IMFMediaSinkPreroll_FWD_DEFINED__
#define __IMFMediaSinkPreroll_FWD_DEFINED__
typedef interface IMFMediaSinkPreroll IMFMediaSinkPreroll;
#endif /* __IMFMediaSinkPreroll_FWD_DEFINED__ */

#ifndef __IMFFinalizableMediaSink_FWD_DEFINED__
#define __IMFFinalizableMediaSink_FWD_DEFINED__
typedef interface IMFFinalizableMediaSink IMFFinalizableMediaSink;
#endif /* __IMFFinalizableMediaSink_FWD_DEFINED__ */

#ifndef __IMFStreamingSinkConfig_FWD_DEFINED__
#define __IMFStreamingSinkConfig_FWD_DEFINED__
typedef interface IMFStreamingSinkConfig IMFStreamingSinkConfig;
#endif /* __IMFStreamingSinkConfig_FWD_DEFINED__ */

#ifndef __IMFRemoteProxy_FWD_DEFINED__
#define __IMFRemoteProxy_FWD_DEFINED__
typedef interface IMFRemoteProxy IMFRemoteProxy;
#endif /* __IMFRemoteProxy_FWD_DEFINED__ */

#ifndef __IMFObjectReferenceStream_FWD_DEFINED__
#define __IMFObjectReferenceStream_FWD_DEFINED__
typedef interface IMFObjectReferenceStream IMFObjectReferenceStream;
#endif /* __IMFObjectReferenceStream_FWD_DEFINED__ */

#ifndef __IMFPMPHost_FWD_DEFINED__
#define __IMFPMPHost_FWD_DEFINED__
typedef interface IMFPMPHost IMFPMPHost;
#endif /* __IMFPMPHost_FWD_DEFINED__ */

#ifndef __IMFPMPClient_FWD_DEFINED__
#define __IMFPMPClient_FWD_DEFINED__
typedef interface IMFPMPClient IMFPMPClient;
#endif /* __IMFPMPClient_FWD_DEFINED__ */

#ifndef __IMFPMPServer_FWD_DEFINED__
#define __IMFPMPServer_FWD_DEFINED__
typedef interface IMFPMPServer IMFPMPServer;
#endif /* __IMFPMPServer_FWD_DEFINED__ */

#ifndef __IMFRemoteDesktopPlugin_FWD_DEFINED__
#define __IMFRemoteDesktopPlugin_FWD_DEFINED__
typedef interface IMFRemoteDesktopPlugin IMFRemoteDesktopPlugin;
#endif /* __IMFRemoteDesktopPlugin_FWD_DEFINED__ */

#ifndef __IMFSAMIStyle_FWD_DEFINED__
#define __IMFSAMIStyle_FWD_DEFINED__
typedef interface IMFSAMIStyle IMFSAMIStyle;
#endif /* __IMFSAMIStyle_FWD_DEFINED__ */

#ifndef __IMFTranscodeProfile_FWD_DEFINED__
#define __IMFTranscodeProfile_FWD_DEFINED__
typedef interface IMFTranscodeProfile IMFTranscodeProfile;
#endif /* __IMFTranscodeProfile_FWD_DEFINED__ */

#ifndef __IMFTranscodeSinkInfoProvider_FWD_DEFINED__
#define __IMFTranscodeSinkInfoProvider_FWD_DEFINED__
typedef interface IMFTranscodeSinkInfoProvider IMFTranscodeSinkInfoProvider;
#endif /* __IMFTranscodeSinkInfoProvider_FWD_DEFINED__ */

#ifndef __IMFFieldOfUseMFTUnlock_FWD_DEFINED__
#define __IMFFieldOfUseMFTUnlock_FWD_DEFINED__
typedef interface IMFFieldOfUseMFTUnlock IMFFieldOfUseMFTUnlock;
#endif /* __IMFFieldOfUseMFTUnlock_FWD_DEFINED__ */

#ifndef __IMFLocalMFTRegistration_FWD_DEFINED__
#define __IMFLocalMFTRegistration_FWD_DEFINED__
typedef interface IMFLocalMFTRegistration IMFLocalMFTRegistration;
#endif /* __IMFLocalMFTRegistration_FWD_DEFINED__ */

#ifndef __IMFCapturePhotoConfirmation_FWD_DEFINED__
#define __IMFCapturePhotoConfirmation_FWD_DEFINED__
typedef interface IMFCapturePhotoConfirmation IMFCapturePhotoConfirmation;
#endif /* __IMFCapturePhotoConfirmation_FWD_DEFINED__ */

#ifndef __IMFPMPHostApp_FWD_DEFINED__
#define __IMFPMPHostApp_FWD_DEFINED__
typedef interface IMFPMPHostApp IMFPMPHostApp;
#endif /* __IMFPMPHostApp_FWD_DEFINED__ */

#ifndef __IMFPMPClientApp_FWD_DEFINED__
#define __IMFPMPClientApp_FWD_DEFINED__
typedef interface IMFPMPClientApp IMFPMPClientApp;
#endif /* __IMFPMPClientApp_FWD_DEFINED__ */

#ifndef __IMFMediaStreamSourceSampleRequest_FWD_DEFINED__
#define __IMFMediaStreamSourceSampleRequest_FWD_DEFINED__
typedef interface IMFMediaStreamSourceSampleRequest IMFMediaStreamSourceSampleRequest;
#endif /* __IMFMediaStreamSourceSampleRequest_FWD_DEFINED__ */

#ifndef __IMFTrackedSample_FWD_DEFINED__
#define __IMFTrackedSample_FWD_DEFINED__
typedef interface IMFTrackedSample IMFTrackedSample;
#endif /* __IMFTrackedSample_FWD_DEFINED__ */

#ifndef __IMFProtectedEnvironmentAccess_FWD_DEFINED__
#define __IMFProtectedEnvironmentAccess_FWD_DEFINED__
typedef interface IMFProtectedEnvironmentAccess IMFProtectedEnvironmentAccess;
#endif /* __IMFProtectedEnvironmentAccess_FWD_DEFINED__ */

#ifndef __IMFSignedLibrary_FWD_DEFINED__
#define __IMFSignedLibrary_FWD_DEFINED__
typedef interface IMFSignedLibrary IMFSignedLibrary;
#endif /* __IMFSignedLibrary_FWD_DEFINED__ */

#ifndef __IMFSystemId_FWD_DEFINED__
#define __IMFSystemId_FWD_DEFINED__
typedef interface IMFSystemId IMFSystemId;
#endif /* __IMFSystemId_FWD_DEFINED__ */

#ifndef __IMFContentProtectionDevice_FWD_DEFINED__
#define __IMFContentProtectionDevice_FWD_DEFINED__
typedef interface IMFContentProtectionDevice IMFContentProtectionDevice;
#endif /* __IMFContentProtectionDevice_FWD_DEFINED__ */

#ifndef __IMFContentDecryptorContext_FWD_DEFINED__
#define __IMFContentDecryptorContext_FWD_DEFINED__
typedef interface IMFContentDecryptorContext IMFContentDecryptorContext;
#endif /* __IMFContentDecryptorContext_FWD_DEFINED__ */

#ifndef __IMFNetCrossOriginSupport_FWD_DEFINED__
#define __IMFNetCrossOriginSupport_FWD_DEFINED__
typedef interface IMFNetCrossOriginSupport IMFNetCrossOriginSupport;
#endif /* __IMFNetCrossOriginSupport_FWD_DEFINED__ */

#ifndef __IMFHttpDownloadRequest_FWD_DEFINED__
#define __IMFHttpDownloadRequest_FWD_DEFINED__
typedef interface IMFHttpDownloadRequest IMFHttpDownloadRequest;
#endif /* __IMFHttpDownloadRequest_FWD_DEFINED__ */

#ifndef __IMFHttpDownloadSession_FWD_DEFINED__
#define __IMFHttpDownloadSession_FWD_DEFINED__
typedef interface IMFHttpDownloadSession IMFHttpDownloadSession;
#endif /* __IMFHttpDownloadSession_FWD_DEFINED__ */

#ifndef __IMFHttpDownloadSessionProvider_FWD_DEFINED__
#define __IMFHttpDownloadSessionProvider_FWD_DEFINED__
typedef interface IMFHttpDownloadSessionProvider IMFHttpDownloadSessionProvider;
#endif /* __IMFHttpDownloadSessionProvider_FWD_DEFINED__ */

#ifndef __IMFMediaSource2_FWD_DEFINED__
#define __IMFMediaSource2_FWD_DEFINED__
typedef interface IMFMediaSource2 IMFMediaSource2;
#endif /* __IMFMediaSource2_FWD_DEFINED__ */

#ifndef __IMFMediaStream2_FWD_DEFINED__
#define __IMFMediaStream2_FWD_DEFINED__
typedef interface IMFMediaStream2 IMFMediaStream2;
#endif /* __IMFMediaStream2_FWD_DEFINED__ */

#ifndef __IMFSensorDevice_FWD_DEFINED__
#define __IMFSensorDevice_FWD_DEFINED__
typedef interface IMFSensorDevice IMFSensorDevice;
#endif /* __IMFSensorDevice_FWD_DEFINED__ */

#ifndef __IMFSensorGroup_FWD_DEFINED__
#define __IMFSensorGroup_FWD_DEFINED__
typedef interface IMFSensorGroup IMFSensorGroup;
#endif /* __IMFSensorGroup_FWD_DEFINED__ */

#ifndef __IMFSensorStream_FWD_DEFINED__
#define __IMFSensorStream_FWD_DEFINED__
typedef interface IMFSensorStream IMFSensorStream;
#endif /* __IMFSensorStream_FWD_DEFINED__ */

#ifndef __IMFSensorTransformFactory_FWD_DEFINED__
#define __IMFSensorTransformFactory_FWD_DEFINED__
typedef interface IMFSensorTransformFactory IMFSensorTransformFactory;
#endif /* __IMFSensorTransformFactory_FWD_DEFINED__ */

#ifndef __IMFSensorProfile_FWD_DEFINED__
#define __IMFSensorProfile_FWD_DEFINED__
typedef interface IMFSensorProfile IMFSensorProfile;
#endif /* __IMFSensorProfile_FWD_DEFINED__ */

#ifndef __IMFSensorProfileCollection_FWD_DEFINED__
#define __IMFSensorProfileCollection_FWD_DEFINED__
typedef interface IMFSensorProfileCollection IMFSensorProfileCollection;
#endif /* __IMFSensorProfileCollection_FWD_DEFINED__ */

#ifndef __IMFSensorProcessActivity_FWD_DEFINED__
#define __IMFSensorProcessActivity_FWD_DEFINED__
typedef interface IMFSensorProcessActivity IMFSensorProcessActivity;
#endif /* __IMFSensorProcessActivity_FWD_DEFINED__ */

#ifndef __IMFSensorActivityReport_FWD_DEFINED__
#define __IMFSensorActivityReport_FWD_DEFINED__
typedef interface IMFSensorActivityReport IMFSensorActivityReport;
#endif /* __IMFSensorActivityReport_FWD_DEFINED__ */

#ifndef __IMFSensorActivitiesReport_FWD_DEFINED__
#define __IMFSensorActivitiesReport_FWD_DEFINED__
typedef interface IMFSensorActivitiesReport IMFSensorActivitiesReport;
#endif /* __IMFSensorActivitiesReport_FWD_DEFINED__ */

#ifndef __IMFSensorActivitiesReportCallback_FWD_DEFINED__
#define __IMFSensorActivitiesReportCallback_FWD_DEFINED__
typedef interface IMFSensorActivitiesReportCallback IMFSensorActivitiesReportCallback;
#endif /* __IMFSensorActivitiesReportCallback_FWD_DEFINED__ */

#ifndef __IMFSensorActivityMonitor_FWD_DEFINED__
#define __IMFSensorActivityMonitor_FWD_DEFINED__
typedef interface IMFSensorActivityMonitor IMFSensorActivityMonitor;
#endif /* __IMFSensorActivityMonitor_FWD_DEFINED__ */

#ifndef __IMFExtendedCameraIntrinsicModel_FWD_DEFINED__
#define __IMFExtendedCameraIntrinsicModel_FWD_DEFINED__
typedef interface IMFExtendedCameraIntrinsicModel IMFExtendedCameraIntrinsicModel;
#endif /* __IMFExtendedCameraIntrinsicModel_FWD_DEFINED__ */

#ifndef __IMFExtendedCameraIntrinsicsDistortionModel6KT_FWD_DEFINED__
#define __IMFExtendedCameraIntrinsicsDistortionModel6KT_FWD_DEFINED__
typedef interface IMFExtendedCameraIntrinsicsDistortionModel6KT IMFExtendedCameraIntrinsicsDistortionModel6KT;
#endif /* __IMFExtendedCameraIntrinsicsDistortionModel6KT_FWD_DEFINED__ */

#ifndef __IMFExtendedCameraIntrinsicsDistortionModelArcTan_FWD_DEFINED__
#define __IMFExtendedCameraIntrinsicsDistortionModelArcTan_FWD_DEFINED__
typedef interface IMFExtendedCameraIntrinsicsDistortionModelArcTan IMFExtendedCameraIntrinsicsDistortionModelArcTan;
#endif /* __IMFExtendedCameraIntrinsicsDistortionModelArcTan_FWD_DEFINED__ */

#ifndef __IMFExtendedCameraIntrinsics_FWD_DEFINED__
#define __IMFExtendedCameraIntrinsics_FWD_DEFINED__
typedef interface IMFExtendedCameraIntrinsics IMFExtendedCameraIntrinsics;
#endif /* __IMFExtendedCameraIntrinsics_FWD_DEFINED__ */

#ifndef __IMFExtendedCameraControl_FWD_DEFINED__
#define __IMFExtendedCameraControl_FWD_DEFINED__
typedef interface IMFExtendedCameraControl IMFExtendedCameraControl;
#endif /* __IMFExtendedCameraControl_FWD_DEFINED__ */

#ifndef __IMFExtendedCameraController_FWD_DEFINED__
#define __IMFExtendedCameraController_FWD_DEFINED__
typedef interface IMFExtendedCameraController IMFExtendedCameraController;
#endif /* __IMFExtendedCameraController_FWD_DEFINED__ */

#ifndef __IMFRelativePanelReport_FWD_DEFINED__
#define __IMFRelativePanelReport_FWD_DEFINED__
typedef interface IMFRelativePanelReport IMFRelativePanelReport;
#endif /* __IMFRelativePanelReport_FWD_DEFINED__ */

#ifndef __IMFRelativePanelWatcher_FWD_DEFINED__
#define __IMFRelativePanelWatcher_FWD_DEFINED__
typedef interface IMFRelativePanelWatcher IMFRelativePanelWatcher;
#endif /* __IMFRelativePanelWatcher_FWD_DEFINED__ */

#ifndef __IMFVideoCaptureSampleAllocator_FWD_DEFINED__
#define __IMFVideoCaptureSampleAllocator_FWD_DEFINED__
typedef interface IMFVideoCaptureSampleAllocator IMFVideoCaptureSampleAllocator;
#endif /* __IMFVideoCaptureSampleAllocator_FWD_DEFINED__ */

#ifndef __IMFSampleAllocatorControl_FWD_DEFINED__
#define __IMFSampleAllocatorControl_FWD_DEFINED__
typedef interface IMFSampleAllocatorControl IMFSampleAllocatorControl;
#endif /* __IMFSampleAllocatorControl_FWD_DEFINED__ */

#ifndef __IMFCameraOcclusionStateReport_FWD_DEFINED__
#define __IMFCameraOcclusionStateReport_FWD_DEFINED__
typedef interface IMFCameraOcclusionStateReport IMFCameraOcclusionStateReport;
#endif /* __IMFCameraOcclusionStateReport_FWD_DEFINED__ */

#ifndef __IMFCameraOcclusionStateReportCallback_FWD_DEFINED__
#define __IMFCameraOcclusionStateReportCallback_FWD_DEFINED__
typedef interface IMFCameraOcclusionStateReportCallback IMFCameraOcclusionStateReportCallback;
#endif /* __IMFCameraOcclusionStateReportCallback_FWD_DEFINED__ */

#ifndef __IMFCameraOcclusionStateMonitor_FWD_DEFINED__
#define __IMFCameraOcclusionStateMonitor_FWD_DEFINED__
typedef interface IMFCameraOcclusionStateMonitor IMFCameraOcclusionStateMonitor;
#endif /* __IMFCameraOcclusionStateMonitor_FWD_DEFINED__ */

#ifndef __IMFCameraControlNotify_FWD_DEFINED__
#define __IMFCameraControlNotify_FWD_DEFINED__
typedef interface IMFCameraControlNotify IMFCameraControlNotify;
#endif /* __IMFCameraControlNotify_FWD_DEFINED__ */

#ifndef __IMFCameraControlMonitor_FWD_DEFINED__
#define __IMFCameraControlMonitor_FWD_DEFINED__
typedef interface IMFCameraControlMonitor IMFCameraControlMonitor;
#endif /* __IMFCameraControlMonitor_FWD_DEFINED__ */

#ifndef __IMFCameraControlDefaults_FWD_DEFINED__
#define __IMFCameraControlDefaults_FWD_DEFINED__
typedef interface IMFCameraControlDefaults IMFCameraControlDefaults;
#endif /* __IMFCameraControlDefaults_FWD_DEFINED__ */

#ifndef __IMFCameraControlDefaultsCollection_FWD_DEFINED__
#define __IMFCameraControlDefaultsCollection_FWD_DEFINED__
typedef interface IMFCameraControlDefaultsCollection IMFCameraControlDefaultsCollection;
#endif /* __IMFCameraControlDefaultsCollection_FWD_DEFINED__ */

#ifndef __IMFCameraConfigurationManager_FWD_DEFINED__
#define __IMFCameraConfigurationManager_FWD_DEFINED__
typedef interface IMFCameraConfigurationManager IMFCameraConfigurationManager;
#endif /* __IMFCameraConfigurationManager_FWD_DEFINED__ */

/* Headers for imported files */

#include "mfobjects.h"
#include "mftransform.h"


#include <winapifamily.h>

#include <windef.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum MFSESSION_SETTOPOLOGY_FLAGS {
    MFSESSION_SETTOPOLOGY_IMMEDIATE = 0x1,
    MFSESSION_SETTOPOLOGY_NORESOLUTION = 0x2,
    MFSESSION_SETTOPOLOGY_CLEAR_CURRENT = 0x4
} MFSESSION_SETTOPOLOGY_FLAGS;

typedef enum MFSESSION_GETFULLTOPOLOGY_FLAGS {
    MFSESSION_GETFULLTOPOLOGY_CURRENT = 0x1
} MFSESSION_GETFULLTOPOLOGY_FLAGS;

typedef enum MFPMPSESSION_CREATION_FLAGS {
    MFPMPSESSION_UNPROTECTED_PROCESS = 0x1,
    MFPMPSESSION_IN_PROCESS = 0x2
} MFPMPSESSION_CREATION_FLAGS;

typedef unsigned __int64 TOPOID;


#ifndef __IMFTopology_FWD_DEFINED__
#define __IMFTopology_FWD_DEFINED__
typedef interface IMFTopology IMFTopology;
#endif /* __IMFTopology_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)


#ifndef __IMFClock_FWD_DEFINED__
#define __IMFClock_FWD_DEFINED__
typedef interface IMFClock IMFClock;
#endif /* __IMFClock_FWD_DEFINED__ */

#ifndef __IMFPresentationTimeSource_FWD_DEFINED__
#define __IMFPresentationTimeSource_FWD_DEFINED__
typedef interface IMFPresentationTimeSource IMFPresentationTimeSource;
#endif /* __IMFPresentationTimeSource_FWD_DEFINED__ */

EXTERN_GUID( MF_WVC1_PROG_SINGLE_SLICE_CONTENT, 0x67EC2559, 0x0F2F, 0x4420, 0xA4, 0xDD, 0x2F, 0x8E, 0xE7, 0xA5, 0x73, 0x8B);

EXTERN_GUID( MF_PROGRESSIVE_CODING_CONTENT, 0x8F020EEA, 0x1508, 0x471F, 0x9D, 0xA6, 0x50, 0x7D, 0x7C, 0xFA, 0x40, 0xDB);

EXTERN_GUID( MF_NALU_LENGTH_SET, 0xA7911D53, 0x12A4, 0x4965, 0xAE, 0x70, 0x6E, 0xAD, 0xD6, 0xFF, 0x05, 0x51);

EXTERN_GUID( MF_NALU_LENGTH_INFORMATION,  0x19124E7C, 0xAD4B, 0x465F, 0xBB, 0x18, 0x20, 0x18, 0x62, 0x87, 0xB6, 0xAF);

EXTERN_GUID( MF_USER_DATA_PAYLOAD,  0xd1d4985d, 0xdc92, 0x457a, 0xb3, 0xa0, 0x65, 0x1a, 0x33, 0xa3, 0x10, 0x47);

EXTERN_GUID( MF_MPEG4SINK_SPSPPS_PASSTHROUGH, 0x5601a134, 0x2005, 0x4ad2, 0xb3, 0x7d, 0x22, 0xa6, 0xc5, 0x54, 0xde, 0xb2);

EXTERN_GUID( MF_MPEG4SINK_MOOV_BEFORE_MDAT, 0xf672e3ac, 0xe1e6, 0x4f10, 0xb5, 0xec, 0x5f, 0x3b, 0x30, 0x82, 0x88, 0x16);

EXTERN_GUID( MF_MPEG4SINK_MINIMUM_PROPERTIES_SIZE, 0xdca1ed52, 0x450e, 0x4a22, 0x8c, 0x62, 0x4e, 0xd4, 0x52, 0xf7, 0xa1, 0x87);

EXTERN_GUID(MF_MPEG4SINK_MIN_FRAGMENT_DURATION, 0xa30b570c, 0x8efd, 0x45e8, 0x94, 0xfe, 0x27, 0xc8, 0x4b, 0x5b, 0xdf, 0xf6);

EXTERN_GUID(MF_MPEG4SINK_MAX_CODED_SEQUENCES_PER_FRAGMENT, 0xfc1b3bd6, 0x692d, 0x4ce5, 0x92, 0x99, 0x73, 0x8a, 0xa5, 0x46, 0x3e, 0x9a);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFMediaSession interface
 */
#ifndef __IMFMediaSession_INTERFACE_DEFINED__
#define __IMFMediaSession_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSessionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSession *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSession *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSession *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaSession *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaSession *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaSession *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaSession *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFMediaSession methods ***/
    HRESULT (STDMETHODCALLTYPE *SetTopology)(
        IMFMediaSession *This,
        DWORD dwSetTopologyFlags,
        IMFTopology *pTopology);

    HRESULT (STDMETHODCALLTYPE *ClearTopologies)(
        IMFMediaSession *This);

    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFMediaSession *This,
        const GUID *pguidTimeFormat,
        const PROPVARIANT *pvarStartPosition);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        IMFMediaSession *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFMediaSession *This);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IMFMediaSession *This);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFMediaSession *This);

    HRESULT (STDMETHODCALLTYPE *GetClock)(
        IMFMediaSession *This,
        IMFClock **ppClock);

    HRESULT (STDMETHODCALLTYPE *GetSessionCapabilities)(
        IMFMediaSession *This,
        DWORD *pdwCaps);

    HRESULT (STDMETHODCALLTYPE *GetFullTopology)(
        IMFMediaSession *This,
        DWORD dwGetFullTopologyFlags,
        TOPOID TopoId,
        IMFTopology **ppFullTopology);

    END_INTERFACE
} IMFMediaSessionVtbl;

interface IMFMediaSession {
    CONST_VTBL IMFMediaSessionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSession_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSession_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSession_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaSession_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaSession_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaSession_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaSession_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFMediaSession methods ***/
#define IMFMediaSession_SetTopology(This,dwSetTopologyFlags,pTopology) \
    ((This)->lpVtbl->SetTopology(This,dwSetTopologyFlags,pTopology))
#define IMFMediaSession_ClearTopologies(This) \
    ((This)->lpVtbl->ClearTopologies(This))
#define IMFMediaSession_Start(This,pguidTimeFormat,pvarStartPosition) \
    ((This)->lpVtbl->Start(This,pguidTimeFormat,pvarStartPosition))
#define IMFMediaSession_Pause(This) \
    ((This)->lpVtbl->Pause(This))
#define IMFMediaSession_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFMediaSession_Close(This) \
    ((This)->lpVtbl->Close(This))
#define IMFMediaSession_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#define IMFMediaSession_GetClock(This,ppClock) \
    ((This)->lpVtbl->GetClock(This,ppClock))
#define IMFMediaSession_GetSessionCapabilities(This,pdwCaps) \
    ((This)->lpVtbl->GetSessionCapabilities(This,pdwCaps))
#define IMFMediaSession_GetFullTopology(This,dwGetFullTopologyFlags,TopoId,ppFullTopology) \
    ((This)->lpVtbl->GetFullTopology(This,dwGetFullTopologyFlags,TopoId,ppFullTopology))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSession_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_SESSION_TOPOLOADER, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x71);

EXTERN_GUID( MF_SESSION_GLOBAL_TIME, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x72);

EXTERN_GUID( MF_SESSION_QUALITY_MANAGER, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x73);

EXTERN_GUID( MF_SESSION_CONTENT_PROTECTION_MANAGER, 0x1e83d482, 0x1f1c, 0x4571, 0x84, 0x5, 0x88, 0xf4, 0xb2, 0x18, 0x1f, 0x74);

EXTERN_GUID( MF_SESSION_SERVER_CONTEXT, 0xafe5b291, 0x50fa, 0x46e8, 0xb9, 0xbe, 0xc, 0xc, 0x3c, 0xe4, 0xb3, 0xa5);

EXTERN_GUID( MF_SESSION_REMOTE_SOURCE_MODE, 0xf4033ef4, 0x9bb3, 0x4378, 0x94, 0x1f, 0x85, 0xa0, 0x85, 0x6b, 0xc2, 0x44);

EXTERN_GUID( MF_SESSION_APPROX_EVENT_OCCURRENCE_TIME, 0x190e852f, 0x6238, 0x42d1, 0xb5, 0xaf, 0x69, 0xea, 0x33, 0x8e, 0xf8, 0x50);

EXTERN_GUID( MF_PMP_SERVER_CONTEXT, 0x2f00c910, 0xd2cf, 0x4278, 0x8b, 0x6a, 0xd0, 0x77, 0xfa, 0xc3, 0xa2, 0x5f);

STDAPI MFCreateMediaSession(
    IMFAttributes* pConfiguration,
     IMFMediaSession** ppMediaSession
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)

STDAPI MFCreatePMPMediaSession(
    DWORD dwCreationFlags,
    IMFAttributes *pConfiguration,
     IMFMediaSession** ppMediaSession,
     IMFActivate **ppEnablerActivate
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef enum MF_OBJECT_TYPE {
    MF_OBJECT_MEDIASOURCE = 0,
    MF_OBJECT_BYTESTREAM = 1,
    MF_OBJECT_INVALID = 2
} MF_OBJECT_TYPE;

enum {
    MF_RESOLUTION_MEDIASOURCE = 0x1,
    MF_RESOLUTION_BYTESTREAM = 0x2,
    MF_RESOLUTION_CONTENT_DOES_NOT_HAVE_TO_MATCH_EXTENSION_OR_MIME_TYPE = 0x10,
    MF_RESOLUTION_KEEP_BYTE_STREAM_ALIVE_ON_FAIL = 0x20,
    MF_RESOLUTION_DISABLE_LOCAL_PLUGINS = 0x40,
    MF_RESOLUTION_PLUGIN_CONTROL_POLICY_APPROVED_ONLY = 0x80,
    MF_RESOLUTION_PLUGIN_CONTROL_POLICY_WEB_ONLY = 0x100,
    MF_RESOLUTION_PLUGIN_CONTROL_POLICY_WEB_ONLY_EDGEMODE = 0x200,
    MF_RESOLUTION_ENABLE_STORE_PLUGINS = 0x400,
    MF_RESOLUTION_READ = 0x10000,
    MF_RESOLUTION_WRITE = 0x20000
};
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum _MF_CONNECT_METHOD {
    MF_CONNECT_DIRECT = 0x0,
    MF_CONNECT_ALLOW_CONVERTER = 0x1,
    MF_CONNECT_ALLOW_DECODER = 0x3,
    MF_CONNECT_RESOLVE_INDEPENDENT_OUTPUTTYPES = 0x4,
    MF_CONNECT_AS_OPTIONAL = 0x10000,
    MF_CONNECT_AS_OPTIONAL_BRANCH = 0x20000
} MF_CONNECT_METHOD;

typedef enum _MF_TOPOLOGY_RESOLUTION_STATUS_FLAGS {
    MF_TOPOLOGY_RESOLUTION_SUCCEEDED = 0x0,
    MF_OPTIONAL_NODE_REJECTED_MEDIA_TYPE = 0x1,
    MF_OPTIONAL_NODE_REJECTED_PROTECTED_PROCESS = 0x2
} MF_TOPOLOGY_RESOLUTION_STATUS_FLAGS;


#ifndef __IMFByteStream_FWD_DEFINED__
#define __IMFByteStream_FWD_DEFINED__
typedef interface IMFByteStream IMFByteStream;
#endif /* __IMFByteStream_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFSourceResolver interface
 */
#ifndef __IMFSourceResolver_INTERFACE_DEFINED__
#define __IMFSourceResolver_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSourceResolver;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSourceResolverVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSourceResolver *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSourceResolver *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSourceResolver *This);

    /*** IMFSourceResolver methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateObjectFromURL)(
        IMFSourceResolver *This,
        LPCWSTR pwszURL,
        DWORD dwFlags,
        IPropertyStore *pProps,
        MF_OBJECT_TYPE *pObjectType,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *CreateObjectFromByteStream)(
        IMFSourceResolver *This,
        IMFByteStream *pByteStream,
        LPCWSTR pwszURL,
        DWORD dwFlags,
        IPropertyStore *pProps,
        MF_OBJECT_TYPE *pObjectType,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *BeginCreateObjectFromURL)(
        IMFSourceResolver *This,
        LPCWSTR pwszURL,
        DWORD dwFlags,
        IPropertyStore *pProps,
        IUnknown **ppIUnknownCancelCookie,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndCreateObjectFromURL)(
        IMFSourceResolver *This,
        IMFAsyncResult *pResult,
        MF_OBJECT_TYPE *pObjectType,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *BeginCreateObjectFromByteStream)(
        IMFSourceResolver *This,
        IMFByteStream *pByteStream,
        LPCWSTR pwszURL,
        DWORD dwFlags,
        IPropertyStore *pProps,
        IUnknown **ppIUnknownCancelCookie,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndCreateObjectFromByteStream)(
        IMFSourceResolver *This,
        IMFAsyncResult *pResult,
        MF_OBJECT_TYPE *pObjectType,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *CancelObjectCreation)(
        IMFSourceResolver *This,
        IUnknown *pIUnknownCancelCookie);

    END_INTERFACE
} IMFSourceResolverVtbl;

interface IMFSourceResolver {
    CONST_VTBL IMFSourceResolverVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSourceResolver_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSourceResolver_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSourceResolver_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSourceResolver methods ***/
#define IMFSourceResolver_CreateObjectFromURL(This,pwszURL,dwFlags,pProps,pObjectType,ppObject) \
    ((This)->lpVtbl->CreateObjectFromURL(This,pwszURL,dwFlags,pProps,pObjectType,ppObject))
#define IMFSourceResolver_CreateObjectFromByteStream(This,pByteStream,pwszURL,dwFlags,pProps,pObjectType,ppObject) \
    ((This)->lpVtbl->CreateObjectFromByteStream(This,pByteStream,pwszURL,dwFlags,pProps,pObjectType,ppObject))
#define IMFSourceResolver_BeginCreateObjectFromURL(This,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) \
    ((This)->lpVtbl->BeginCreateObjectFromURL(This,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState))
#define IMFSourceResolver_EndCreateObjectFromURL(This,pResult,pObjectType,ppObject) \
    ((This)->lpVtbl->EndCreateObjectFromURL(This,pResult,pObjectType,ppObject))
#define IMFSourceResolver_BeginCreateObjectFromByteStream(This,pByteStream,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) \
    ((This)->lpVtbl->BeginCreateObjectFromByteStream(This,pByteStream,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState))
#define IMFSourceResolver_EndCreateObjectFromByteStream(This,pResult,pObjectType,ppObject) \
    ((This)->lpVtbl->EndCreateObjectFromByteStream(This,pResult,pObjectType,ppObject))
#define IMFSourceResolver_CancelObjectCreation(This,pIUnknownCancelCookie) \
    ((This)->lpVtbl->CancelObjectCreation(This,pIUnknownCancelCookie))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteBeginCreateObjectFromURL_Proxy(
    IMFSourceResolver *This,
    LPCWSTR pwszURL,
    DWORD dwFlags,
    IPropertyStore *pProps,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFSourceResolver_RemoteBeginCreateObjectFromURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteEndCreateObjectFromURL_Proxy(
    IMFSourceResolver *This,
    IUnknown *pResult,
    MF_OBJECT_TYPE *pObjectType,
    IUnknown **ppObject);

void __RPC_STUB IMFSourceResolver_RemoteEndCreateObjectFromURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteBeginCreateObjectFromByteStream_Proxy(
    IMFSourceResolver *This,
    IMFByteStream *pByteStream,
    LPCWSTR pwszURL,
    DWORD dwFlags,
    IPropertyStore *pProps,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFSourceResolver_RemoteBeginCreateObjectFromByteStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFSourceResolver_RemoteEndCreateObjectFromByteStream_Proxy(
    IMFSourceResolver *This,
    IUnknown *pResult,
    MF_OBJECT_TYPE *pObjectType,
    IUnknown **ppObject);

void __RPC_STUB IMFSourceResolver_RemoteEndCreateObjectFromByteStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFSourceResolver_BeginCreateObjectFromURL_Proxy(
    LPCWSTR pwszURL,
    DWORD dwFlags,
    IPropertyStore *pProps,
    IUnknown **ppIUnknownCancelCookie,
    IMFAsyncCallback *pCallback,
    IUnknown *punkState);
HRESULT IMFSourceResolver_BeginCreateObjectFromURL_Stub(
    LPCWSTR pwszURL,
    DWORD dwFlags,
    IPropertyStore *pProps,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFSourceResolver_EndCreateObjectFromURL_Proxy(
    IMFAsyncResult *pResult,
    MF_OBJECT_TYPE *pObjectType,
    IUnknown **ppObject);
HRESULT IMFSourceResolver_EndCreateObjectFromURL_Stub(
    IUnknown *pResult,
    MF_OBJECT_TYPE *pObjectType,
    IUnknown **ppObject);
HRESULT IMFSourceResolver_BeginCreateObjectFromByteStream_Proxy(
    IMFByteStream *pByteStream,
    LPCWSTR pwszURL,
    DWORD dwFlags,
    IPropertyStore *pProps,
    IUnknown **ppIUnknownCancelCookie,
    IMFAsyncCallback *pCallback,
    IUnknown *punkState);
HRESULT IMFSourceResolver_BeginCreateObjectFromByteStream_Stub(
    IMFByteStream *pByteStream,
    LPCWSTR pwszURL,
    DWORD dwFlags,
    IPropertyStore *pProps,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFSourceResolver_EndCreateObjectFromByteStream_Proxy(
    IMFAsyncResult *pResult,
    MF_OBJECT_TYPE *pObjectType,
    IUnknown **ppObject);
HRESULT IMFSourceResolver_EndCreateObjectFromByteStream_Stub(
    IUnknown *pResult,
    MF_OBJECT_TYPE *pObjectType,
    IUnknown **ppObject);
#endif /* __IMFSourceResolver_INTERFACE_DEFINED__ */

STDAPI MFCreateSourceResolver(
        /* out */      IMFSourceResolver     **ppISourceResolver);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

STDAPI CreatePropertyStore(
        /* out */      IPropertyStore        **ppStore);

STDAPI MFGetSupportedSchemes(
        PROPVARIANT* pPropVarSchemeArray  );

STDAPI MFGetSupportedMimeTypes(
        PROPVARIANT* pPropVarMimeTypeArray  );

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_SourceOpenMonitor = { { 0x074d4637, 0xb5ae, 0x465d, 0xaf, 0x17, 0x1a, 0x53, 0x8d, 0x28, 0x59, 0xdd}, 0x02 };

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_ApproxSeek = { { 0xb4cd270f, 0x244d, 0x4969, 0xbb, 0x92, 0x3f, 0x0f, 0xb8, 0x31, 0x6f, 0x10}, 0x01 };
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_IterativeSeekIfNoIndex = { { 0x170b65dc, 0x4a4e, 0x407a, 0xac, 0x22, 0x57, 0x7f, 0x50, 0xe4, 0xa3, 0x7c }, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_IterativeSeek_Max_Count = { { 0x170b65dc, 0x4a4e, 0x407a, 0xac, 0x22, 0x57, 0x7f, 0x50, 0xe4, 0xa3, 0x7c }, 0x02 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMediaSource_IterativeSeek_Tolerance_In_MilliSecond = { { 0x170b65dc, 0x4a4e, 0x407a, 0xac, 0x22, 0x57, 0x7f, 0x50, 0xe4, 0xa3, 0x7c }, 0x03 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_Content_DLNA_Profile_ID = { { 0xcfa31b45, 0x525d, 0x4998, 0xbb, 0x44, 0x3f, 0x7d, 0x81, 0x54, 0x2f, 0xa4 }, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaSource_DisableReadAhead = { { 0x26366c14, 0xc5bf, 0x4c76, 0x88, 0x7b, 0x9f, 0x17, 0x54, 0xdb, 0x5f, 0x9}, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_SBESourceMode = { { 0x3fae10bb, 0xf859, 0x4192, 0xb5, 0x62, 0x18, 0x68, 0xd3, 0xda, 0x3a, 0x02}, 0x01 };

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_PMP_Creation_Callback = { { 0x28bb4de2, 0x26a2, 0x4870, 0xb7, 0x20, 0xd2, 0x6b, 0xbe, 0xb1, 0x49, 0x42}, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Enable_Urlmon = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Bind_Flags = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x02 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Security_Id = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x03 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Window = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x04 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Urlmon_Callback_QueryService = { { 0xeda8afdf, 0xc171, 0x417f, 0x8d, 0x17, 0x2e, 0x09, 0x18, 0x30, 0x32, 0x92}, 0x05 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemId =  { { 0x636b271d, 0xddc7, 0x49e9, 0xa6, 0xc6, 0x47, 0x38, 0x59, 0x62, 0xe5, 0xbd}, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemContext =  { { 0x636b271d, 0xddc7, 0x49e9, 0xa6, 0xc6, 0x47, 0x38, 0x59, 0x62, 0xe5, 0xbd}, 0x02 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemIdMapping =  { { 0x636b271d, 0xddc7, 0x49e9, 0xa6, 0xc6, 0x47, 0x38, 0x59, 0x62, 0xe5, 0xbd}, 0x03 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionContainerGuid =  { { 0x42af3d7c, 0xcf, 0x4a0f, 0x81, 0xf0, 0xad, 0xf5, 0x24, 0xa5, 0xa5, 0xb5}, 0x1 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MediaProtectionSystemContextsPerTrack =  { { 0x4454b092, 0xd3da, 0x49b0, 0x84, 0x52, 0x68, 0x50, 0xc7, 0xdb, 0x76, 0x4d }, 0x03 };

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Download_Mode = { { 0x817f11b7, 0xa982, 0x46ec, 0xa4, 0x49, 0xef, 0x58, 0xae, 0xd5, 0x3c, 0xa8 }, 0x01 };

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#if (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Caching_Mode = { { 0x86a2403e, 0xc78b, 0x44d7, 0x8b, 0xc8, 0xff, 0x72, 0x58, 0x11, 0x75, 0x08}, 0x01 };

EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_HTTP_ByteStream_Cache_Limit = { { 0x86a2403e, 0xc78b, 0x44d7, 0x8b, 0xc8, 0xff, 0x72, 0x58, 0x11, 0x75, 0x08}, 0x02 };

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef enum _MFMEDIASOURCE_CHARACTERISTICS {
    MFMEDIASOURCE_IS_LIVE = 0x1,
    MFMEDIASOURCE_CAN_SEEK = 0x2,
    MFMEDIASOURCE_CAN_PAUSE = 0x4,
    MFMEDIASOURCE_HAS_SLOW_SEEK = 0x8,
    MFMEDIASOURCE_HAS_MULTIPLE_PRESENTATIONS = 0x10,
    MFMEDIASOURCE_CAN_SKIPFORWARD = 0x20,
    MFMEDIASOURCE_CAN_SKIPBACKWARD = 0x40,
    MFMEDIASOURCE_DOES_NOT_USE_NETWORK = 0x80
} MFMEDIASOURCE_CHARACTERISTICS;

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MF_TIME_FORMAT_ENTRY_RELATIVE, 0x4399f178, 0x46d3, 0x4504, 0xaf, 0xda, 0x20, 0xd3, 0x2e, 0x9b, 0xa3, 0x60 );

#endif // (WINVER >= _WIN32_WINNT_WIN7)


#ifndef __IMFPresentationDescriptor_FWD_DEFINED__
#define __IMFPresentationDescriptor_FWD_DEFINED__
typedef interface IMFPresentationDescriptor IMFPresentationDescriptor;
#endif /* __IMFPresentationDescriptor_FWD_DEFINED__ */

#ifndef __IMFStreamDescriptor_FWD_DEFINED__
#define __IMFStreamDescriptor_FWD_DEFINED__
typedef interface IMFStreamDescriptor IMFStreamDescriptor;
#endif /* __IMFStreamDescriptor_FWD_DEFINED__ */

/*****************************************************************************
 * IMFMediaSource interface
 */
#ifndef __IMFMediaSource_INTERFACE_DEFINED__
#define __IMFMediaSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSource *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaSource *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaSource *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaSource *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaSource *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFMediaSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCharacteristics)(
        IMFMediaSource *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *CreatePresentationDescriptor)(
        IMFMediaSource *This,
        IMFPresentationDescriptor **ppPresentationDescriptor);

    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFMediaSource *This,
        IMFPresentationDescriptor *pPresentationDescriptor,
        const GUID *pguidTimeFormat,
        const PROPVARIANT *pvarStartPosition);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFMediaSource *This);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        IMFMediaSource *This);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFMediaSource *This);

    END_INTERFACE
} IMFMediaSourceVtbl;

interface IMFMediaSource {
    CONST_VTBL IMFMediaSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaSource_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaSource_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaSource_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaSource_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFMediaSource methods ***/
#define IMFMediaSource_GetCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics))
#define IMFMediaSource_CreatePresentationDescriptor(This,ppPresentationDescriptor) \
    ((This)->lpVtbl->CreatePresentationDescriptor(This,ppPresentationDescriptor))
#define IMFMediaSource_Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition) \
    ((This)->lpVtbl->Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition))
#define IMFMediaSource_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFMediaSource_Pause(This) \
    ((This)->lpVtbl->Pause(This))
#define IMFMediaSource_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFMediaSource_RemoteCreatePresentationDescriptor_Proxy(
    IMFMediaSource *This,
    DWORD *pcbPD,
    BYTE **pbPD,
    IMFPresentationDescriptor **ppRemotePD);

void __RPC_STUB IMFMediaSource_RemoteCreatePresentationDescriptor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFMediaSource_CreatePresentationDescriptor_Proxy(
    IMFPresentationDescriptor **ppPresentationDescriptor);
HRESULT IMFMediaSource_CreatePresentationDescriptor_Stub(
    DWORD *pcbPD,
    BYTE **pbPD,
    IMFPresentationDescriptor **ppRemotePD);
#endif /* __IMFMediaSource_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFMediaSourceEx interface
 */
#ifndef __IMFMediaSourceEx_INTERFACE_DEFINED__
#define __IMFMediaSourceEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSourceEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSourceExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSourceEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSourceEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSourceEx *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaSourceEx *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaSourceEx *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaSourceEx *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaSourceEx *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFMediaSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCharacteristics)(
        IMFMediaSourceEx *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *CreatePresentationDescriptor)(
        IMFMediaSourceEx *This,
        IMFPresentationDescriptor **ppPresentationDescriptor);

    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFMediaSourceEx *This,
        IMFPresentationDescriptor *pPresentationDescriptor,
        const GUID *pguidTimeFormat,
        const PROPVARIANT *pvarStartPosition);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFMediaSourceEx *This);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        IMFMediaSourceEx *This);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFMediaSourceEx *This);

    /*** IMFMediaSourceEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSourceAttributes)(
        IMFMediaSourceEx *This,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *GetStreamAttributes)(
        IMFMediaSourceEx *This,
        DWORD dwStreamIdentifier,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *SetD3DManager)(
        IMFMediaSourceEx *This,
        IUnknown *pManager);

    END_INTERFACE
} IMFMediaSourceExVtbl;

interface IMFMediaSourceEx {
    CONST_VTBL IMFMediaSourceExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSourceEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSourceEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSourceEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaSourceEx_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaSourceEx_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaSourceEx_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaSourceEx_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFMediaSource methods ***/
#define IMFMediaSourceEx_GetCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics))
#define IMFMediaSourceEx_CreatePresentationDescriptor(This,ppPresentationDescriptor) \
    ((This)->lpVtbl->CreatePresentationDescriptor(This,ppPresentationDescriptor))
#define IMFMediaSourceEx_Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition) \
    ((This)->lpVtbl->Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition))
#define IMFMediaSourceEx_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFMediaSourceEx_Pause(This) \
    ((This)->lpVtbl->Pause(This))
#define IMFMediaSourceEx_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
/*** IMFMediaSourceEx methods ***/
#define IMFMediaSourceEx_GetSourceAttributes(This,ppAttributes) \
    ((This)->lpVtbl->GetSourceAttributes(This,ppAttributes))
#define IMFMediaSourceEx_GetStreamAttributes(This,dwStreamIdentifier,ppAttributes) \
    ((This)->lpVtbl->GetStreamAttributes(This,dwStreamIdentifier,ppAttributes))
#define IMFMediaSourceEx_SetD3DManager(This,pManager) \
    ((This)->lpVtbl->SetD3DManager(This,pManager))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSourceEx_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_SOURCE_STREAM_SUPPORTS_HW_CONNECTION, 0xa38253aa, 0x6314, 0x42fd, 0xa3, 0xce, 0xbb, 0x27, 0xb6, 0x85, 0x99, 0x46);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN8)


#ifndef __IMFPresentationClock_FWD_DEFINED__
#define __IMFPresentationClock_FWD_DEFINED__
typedef interface IMFPresentationClock IMFPresentationClock;
#endif /* __IMFPresentationClock_FWD_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFClockConsumer interface
 */
#ifndef __IMFClockConsumer_INTERFACE_DEFINED__
#define __IMFClockConsumer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFClockConsumer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFClockConsumerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFClockConsumer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFClockConsumer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFClockConsumer *This);

    /*** IMFClockConsumer methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPresentationClock)(
        IMFClockConsumer *This,
        IMFPresentationClock *pPresentationClock);

    HRESULT (STDMETHODCALLTYPE *GetPresentationClock)(
        IMFClockConsumer *This,
        IMFPresentationClock **ppPresentationClock);

    END_INTERFACE
} IMFClockConsumerVtbl;

interface IMFClockConsumer {
    CONST_VTBL IMFClockConsumerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFClockConsumer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFClockConsumer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFClockConsumer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClockConsumer methods ***/
#define IMFClockConsumer_SetPresentationClock(This,pPresentationClock) \
    ((This)->lpVtbl->SetPresentationClock(This,pPresentationClock))
#define IMFClockConsumer_GetPresentationClock(This,ppPresentationClock) \
    ((This)->lpVtbl->GetPresentationClock(This,ppPresentationClock))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFClockConsumer_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFMediaStream interface
 */
#ifndef __IMFMediaStream_INTERFACE_DEFINED__
#define __IMFMediaStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaStream *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaStream *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaStream *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaStream *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaStream *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaSource)(
        IMFMediaStream *This,
        IMFMediaSource **ppMediaSource);

    HRESULT (STDMETHODCALLTYPE *GetStreamDescriptor)(
        IMFMediaStream *This,
        IMFStreamDescriptor **ppStreamDescriptor);

    HRESULT (STDMETHODCALLTYPE *RequestSample)(
        IMFMediaStream *This,
        IUnknown *pToken);

    END_INTERFACE
} IMFMediaStreamVtbl;

interface IMFMediaStream {
    CONST_VTBL IMFMediaStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaStream_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaStream_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaStream_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaStream_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFMediaStream methods ***/
#define IMFMediaStream_GetMediaSource(This,ppMediaSource) \
    ((This)->lpVtbl->GetMediaSource(This,ppMediaSource))
#define IMFMediaStream_GetStreamDescriptor(This,ppStreamDescriptor) \
    ((This)->lpVtbl->GetStreamDescriptor(This,ppStreamDescriptor))
#define IMFMediaStream_RequestSample(This,pToken) \
    ((This)->lpVtbl->RequestSample(This,pToken))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFMediaStream_RemoteRequestSample_Proxy(
    IMFMediaStream *This);

void __RPC_STUB IMFMediaStream_RemoteRequestSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFMediaStream_RequestSample_Proxy(
    IUnknown *pToken);
HRESULT IMFMediaStream_RequestSample_Stub(
    );
#endif /* __IMFMediaStream_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WIN8)

EXTERN_GUID( MF_STREAM_SINK_SUPPORTS_HW_CONNECTION, 0x9b465cbf, 0x597, 0x4f9e, 0x9f, 0x3c, 0xb9, 0x7e, 0xee, 0xf9, 0x3, 0x59);

EXTERN_GUID( MF_STREAM_SINK_SUPPORTS_ROTATION, 0xb3e96280, 0xbd05, 0x41a5, 0x97, 0xad, 0x8a, 0x7f, 0xee, 0x24, 0xb9, 0x12);

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#define MEDIASINK_FIXED_STREAMS         0x00000001
#define MEDIASINK_CANNOT_MATCH_CLOCK    0x00000002
#define MEDIASINK_RATELESS              0x00000004
#define MEDIASINK_CLOCK_REQUIRED        0x00000008
#define MEDIASINK_CAN_PREROLL           0x00000010

#define MEDIASINK_REQUIRE_REFERENCE_MEDIATYPE 0x00000020

typedef enum MF_TRANSFER_VIDEO_FRAME_FLAGS {
    MF_TRANSFER_VIDEO_FRAME_DEFAULT = 0,
    MF_TRANSFER_VIDEO_FRAME_STRETCH = 1,
    MF_TRANSFER_VIDEO_FRAME_IGNORE_PAR = 2
} MF_TRANSFER_VIDEO_FRAME_FLAGS;

EXTERN_GUID( MF_SINK_VIDEO_PTS,  0x2162bde7, 0x421e, 0x4b90, 0x9b, 0x33, 0xe5, 0x8f, 0xbf, 0x1d, 0x58, 0xb6);

EXTERN_GUID( MF_SINK_VIDEO_NATIVE_WIDTH,  0xe6d6a707, 0x1505, 0x4747, 0x9b, 0x10, 0x72, 0xd2, 0xd1, 0x58, 0xcb, 0x3a);

EXTERN_GUID( MF_SINK_VIDEO_NATIVE_HEIGHT,  0xf0ca6705, 0x490c, 0x43e8, 0x94, 0x1c, 0xc0, 0xb3, 0x20, 0x6b, 0x9a, 0x65);

EXTERN_GUID( MF_SINK_VIDEO_DISPLAY_ASPECT_RATIO_NUMERATOR,  0xd0f33b22, 0xb78a, 0x4879, 0xb4, 0x55, 0xf0, 0x3e, 0xf3, 0xfa, 0x82, 0xcd);

EXTERN_GUID( MF_SINK_VIDEO_DISPLAY_ASPECT_RATIO_DENOMINATOR,  0x6ea1eb97, 0x1fe0, 0x4f10, 0xa6, 0xe4, 0x1f, 0x4f, 0x66, 0x15, 0x64, 0xe0);

EXTERN_GUID( MF_BD_MVC_PLANE_OFFSET_METADATA,  0x62a654e4, 0xb76c, 0x4901, 0x98, 0x23, 0x2c, 0xb6, 0x15, 0xd4, 0x73, 0x18);

EXTERN_GUID( MF_LUMA_KEY_ENABLE, 0x7369820f, 0x76de, 0x43ca, 0x92, 0x84, 0x47, 0xb8, 0xf3, 0x7e, 0x06, 0x49);

EXTERN_GUID( MF_LUMA_KEY_LOWER,  0x93d7b8d5, 0x0b81, 0x4715, 0xae, 0xa0, 0x87, 0x25, 0x87, 0x16, 0x21, 0xe9);

EXTERN_GUID( MF_LUMA_KEY_UPPER,  0xd09f39bb, 0x4602, 0x4c31, 0xa7, 0x06, 0xa1, 0x21, 0x71, 0xa5, 0x11, 0x0a);

EXTERN_GUID( MF_USER_EXTENDED_ATTRIBUTES,  0xc02abac6, 0xfeb2, 0x4541, 0x92, 0x2f, 0x92, 0x0b, 0x43, 0x70, 0x27, 0x22);

EXTERN_GUID( MF_INDEPENDENT_STILL_IMAGE, 0xea12af41, 0x0710, 0x42c9, 0xa1, 0x27, 0xda, 0xa3, 0xe7, 0x84, 0x83, 0xa5);


#ifndef __IMFStreamSink_FWD_DEFINED__
#define __IMFStreamSink_FWD_DEFINED__
typedef interface IMFStreamSink IMFStreamSink;
#endif /* __IMFStreamSink_FWD_DEFINED__ */

/*****************************************************************************
 * IMFMediaSink interface
 */
#ifndef __IMFMediaSink_INTERFACE_DEFINED__
#define __IMFMediaSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSink *This);

    /*** IMFMediaSink methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCharacteristics)(
        IMFMediaSink *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *AddStreamSink)(
        IMFMediaSink *This,
        DWORD dwStreamSinkIdentifier,
        IMFMediaType *pMediaType,
        IMFStreamSink **ppStreamSink);

    HRESULT (STDMETHODCALLTYPE *RemoveStreamSink)(
        IMFMediaSink *This,
        DWORD dwStreamSinkIdentifier);

    HRESULT (STDMETHODCALLTYPE *GetStreamSinkCount)(
        IMFMediaSink *This,
        DWORD *pcStreamSinkCount);

    HRESULT (STDMETHODCALLTYPE *GetStreamSinkByIndex)(
        IMFMediaSink *This,
        DWORD dwIndex,
        IMFStreamSink **ppStreamSink);

    HRESULT (STDMETHODCALLTYPE *GetStreamSinkById)(
        IMFMediaSink *This,
        DWORD dwStreamSinkIdentifier,
        IMFStreamSink **ppStreamSink);

    HRESULT (STDMETHODCALLTYPE *SetPresentationClock)(
        IMFMediaSink *This,
        IMFPresentationClock *pPresentationClock);

    HRESULT (STDMETHODCALLTYPE *GetPresentationClock)(
        IMFMediaSink *This,
        IMFPresentationClock **ppPresentationClock);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFMediaSink *This);

    END_INTERFACE
} IMFMediaSinkVtbl;

interface IMFMediaSink {
    CONST_VTBL IMFMediaSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaSink methods ***/
#define IMFMediaSink_GetCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics))
#define IMFMediaSink_AddStreamSink(This,dwStreamSinkIdentifier,pMediaType,ppStreamSink) \
    ((This)->lpVtbl->AddStreamSink(This,dwStreamSinkIdentifier,pMediaType,ppStreamSink))
#define IMFMediaSink_RemoveStreamSink(This,dwStreamSinkIdentifier) \
    ((This)->lpVtbl->RemoveStreamSink(This,dwStreamSinkIdentifier))
#define IMFMediaSink_GetStreamSinkCount(This,pcStreamSinkCount) \
    ((This)->lpVtbl->GetStreamSinkCount(This,pcStreamSinkCount))
#define IMFMediaSink_GetStreamSinkByIndex(This,dwIndex,ppStreamSink) \
    ((This)->lpVtbl->GetStreamSinkByIndex(This,dwIndex,ppStreamSink))
#define IMFMediaSink_GetStreamSinkById(This,dwStreamSinkIdentifier,ppStreamSink) \
    ((This)->lpVtbl->GetStreamSinkById(This,dwStreamSinkIdentifier,ppStreamSink))
#define IMFMediaSink_SetPresentationClock(This,pPresentationClock) \
    ((This)->lpVtbl->SetPresentationClock(This,pPresentationClock))
#define IMFMediaSink_GetPresentationClock(This,ppPresentationClock) \
    ((This)->lpVtbl->GetPresentationClock(This,ppPresentationClock))
#define IMFMediaSink_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSink_INTERFACE_DEFINED__ */

typedef enum _MFSTREAMSINK_MARKER_TYPE {
    MFSTREAMSINK_MARKER_DEFAULT = 0,
    MFSTREAMSINK_MARKER_ENDOFSEGMENT = 1,
    MFSTREAMSINK_MARKER_TICK = 2,
    MFSTREAMSINK_MARKER_EVENT = 3
} MFSTREAMSINK_MARKER_TYPE;


#ifndef __IMFMediaTypeHandler_FWD_DEFINED__
#define __IMFMediaTypeHandler_FWD_DEFINED__
typedef interface IMFMediaTypeHandler IMFMediaTypeHandler;
#endif /* __IMFMediaTypeHandler_FWD_DEFINED__ */

/*****************************************************************************
 * IMFStreamSink interface
 */
#ifndef __IMFStreamSink_INTERFACE_DEFINED__
#define __IMFStreamSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFStreamSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFStreamSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFStreamSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFStreamSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFStreamSink *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFStreamSink *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFStreamSink *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFStreamSink *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFStreamSink *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFStreamSink methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaSink)(
        IMFStreamSink *This,
        IMFMediaSink **ppMediaSink);

    HRESULT (STDMETHODCALLTYPE *GetIdentifier)(
        IMFStreamSink *This,
        DWORD *pdwIdentifier);

    HRESULT (STDMETHODCALLTYPE *GetMediaTypeHandler)(
        IMFStreamSink *This,
        IMFMediaTypeHandler **ppHandler);

    HRESULT (STDMETHODCALLTYPE *ProcessSample)(
        IMFStreamSink *This,
        IMFSample *pSample);

    HRESULT (STDMETHODCALLTYPE *PlaceMarker)(
        IMFStreamSink *This,
        MFSTREAMSINK_MARKER_TYPE eMarkerType,
        const PROPVARIANT *pvarMarkerValue,
        const PROPVARIANT *pvarContextValue);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IMFStreamSink *This);

    END_INTERFACE
} IMFStreamSinkVtbl;

interface IMFStreamSink {
    CONST_VTBL IMFStreamSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFStreamSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFStreamSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFStreamSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFStreamSink_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFStreamSink_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFStreamSink_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFStreamSink_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFStreamSink methods ***/
#define IMFStreamSink_GetMediaSink(This,ppMediaSink) \
    ((This)->lpVtbl->GetMediaSink(This,ppMediaSink))
#define IMFStreamSink_GetIdentifier(This,pdwIdentifier) \
    ((This)->lpVtbl->GetIdentifier(This,pdwIdentifier))
#define IMFStreamSink_GetMediaTypeHandler(This,ppHandler) \
    ((This)->lpVtbl->GetMediaTypeHandler(This,ppHandler))
#define IMFStreamSink_ProcessSample(This,pSample) \
    ((This)->lpVtbl->ProcessSample(This,pSample))
#define IMFStreamSink_PlaceMarker(This,eMarkerType,pvarMarkerValue,pvarContextValue) \
    ((This)->lpVtbl->PlaceMarker(This,eMarkerType,pvarMarkerValue,pvarContextValue))
#define IMFStreamSink_Flush(This) \
    ((This)->lpVtbl->Flush(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFStreamSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFVideoSampleAllocator interface
 */
#ifndef __IMFVideoSampleAllocator_INTERFACE_DEFINED__
#define __IMFVideoSampleAllocator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoSampleAllocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoSampleAllocatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoSampleAllocator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoSampleAllocator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoSampleAllocator *This);

    /*** IMFVideoSampleAllocator methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDirectXManager)(
        IMFVideoSampleAllocator *This,
        IUnknown *pManager);

    HRESULT (STDMETHODCALLTYPE *UninitializeSampleAllocator)(
        IMFVideoSampleAllocator *This);

    HRESULT (STDMETHODCALLTYPE *InitializeSampleAllocator)(
        IMFVideoSampleAllocator *This,
        DWORD cRequestedFrames,
        IMFMediaType *pMediaType);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IMFVideoSampleAllocator *This,
        IMFSample **ppSample);

    END_INTERFACE
} IMFVideoSampleAllocatorVtbl;

interface IMFVideoSampleAllocator {
    CONST_VTBL IMFVideoSampleAllocatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoSampleAllocator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoSampleAllocator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoSampleAllocator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoSampleAllocator methods ***/
#define IMFVideoSampleAllocator_SetDirectXManager(This,pManager) \
    ((This)->lpVtbl->SetDirectXManager(This,pManager))
#define IMFVideoSampleAllocator_UninitializeSampleAllocator(This) \
    ((This)->lpVtbl->UninitializeSampleAllocator(This))
#define IMFVideoSampleAllocator_InitializeSampleAllocator(This,cRequestedFrames,pMediaType) \
    ((This)->lpVtbl->InitializeSampleAllocator(This,cRequestedFrames,pMediaType))
#define IMFVideoSampleAllocator_AllocateSample(This,ppSample) \
    ((This)->lpVtbl->AllocateSample(This,ppSample))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoSampleAllocator_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WIN7)

/*****************************************************************************
 * IMFVideoSampleAllocatorNotify interface
 */
#ifndef __IMFVideoSampleAllocatorNotify_INTERFACE_DEFINED__
#define __IMFVideoSampleAllocatorNotify_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoSampleAllocatorNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoSampleAllocatorNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoSampleAllocatorNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoSampleAllocatorNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoSampleAllocatorNotify *This);

    /*** IMFVideoSampleAllocatorNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *NotifyRelease)(
        IMFVideoSampleAllocatorNotify *This);

    END_INTERFACE
} IMFVideoSampleAllocatorNotifyVtbl;

interface IMFVideoSampleAllocatorNotify {
    CONST_VTBL IMFVideoSampleAllocatorNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoSampleAllocatorNotify_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoSampleAllocatorNotify_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoSampleAllocatorNotify_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoSampleAllocatorNotify methods ***/
#define IMFVideoSampleAllocatorNotify_NotifyRelease(This) \
    ((This)->lpVtbl->NotifyRelease(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoSampleAllocatorNotify_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFVideoSampleAllocatorNotifyEx interface
 */
#ifndef __IMFVideoSampleAllocatorNotifyEx_INTERFACE_DEFINED__
#define __IMFVideoSampleAllocatorNotifyEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoSampleAllocatorNotifyEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoSampleAllocatorNotifyExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoSampleAllocatorNotifyEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoSampleAllocatorNotifyEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoSampleAllocatorNotifyEx *This);

    /*** IMFVideoSampleAllocatorNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *NotifyRelease)(
        IMFVideoSampleAllocatorNotifyEx *This);

    /*** IMFVideoSampleAllocatorNotifyEx methods ***/
    HRESULT (STDMETHODCALLTYPE *NotifyPrune)(
        IMFVideoSampleAllocatorNotifyEx *This,
        IMFSample *__POIDL_param005A);

    END_INTERFACE
} IMFVideoSampleAllocatorNotifyExVtbl;

interface IMFVideoSampleAllocatorNotifyEx {
    CONST_VTBL IMFVideoSampleAllocatorNotifyExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoSampleAllocatorNotifyEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoSampleAllocatorNotifyEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoSampleAllocatorNotifyEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoSampleAllocatorNotify methods ***/
#define IMFVideoSampleAllocatorNotifyEx_NotifyRelease(This) \
    ((This)->lpVtbl->NotifyRelease(This))
/*** IMFVideoSampleAllocatorNotifyEx methods ***/
#define IMFVideoSampleAllocatorNotifyEx_NotifyPrune(This,__POIDL_param005A) \
    ((This)->lpVtbl->NotifyPrune(This,__POIDL_param005A))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoSampleAllocatorNotifyEx_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFVideoSampleAllocatorCallback interface
 */
#ifndef __IMFVideoSampleAllocatorCallback_INTERFACE_DEFINED__
#define __IMFVideoSampleAllocatorCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoSampleAllocatorCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoSampleAllocatorCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoSampleAllocatorCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoSampleAllocatorCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoSampleAllocatorCallback *This);

    /*** IMFVideoSampleAllocatorCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCallback)(
        IMFVideoSampleAllocatorCallback *This,
        IMFVideoSampleAllocatorNotify *pNotify);

    HRESULT (STDMETHODCALLTYPE *GetFreeSampleCount)(
        IMFVideoSampleAllocatorCallback *This,
        LONG *plSamples);

    END_INTERFACE
} IMFVideoSampleAllocatorCallbackVtbl;

interface IMFVideoSampleAllocatorCallback {
    CONST_VTBL IMFVideoSampleAllocatorCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoSampleAllocatorCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoSampleAllocatorCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoSampleAllocatorCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoSampleAllocatorCallback methods ***/
#define IMFVideoSampleAllocatorCallback_SetCallback(This,pNotify) \
    ((This)->lpVtbl->SetCallback(This,pNotify))
#define IMFVideoSampleAllocatorCallback_GetFreeSampleCount(This,plSamples) \
    ((This)->lpVtbl->GetFreeSampleCount(This,plSamples))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoSampleAllocatorCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFVideoSampleAllocatorEx interface
 */
#ifndef __IMFVideoSampleAllocatorEx_INTERFACE_DEFINED__
#define __IMFVideoSampleAllocatorEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoSampleAllocatorEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoSampleAllocatorExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoSampleAllocatorEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoSampleAllocatorEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoSampleAllocatorEx *This);

    /*** IMFVideoSampleAllocator methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDirectXManager)(
        IMFVideoSampleAllocatorEx *This,
        IUnknown *pManager);

    HRESULT (STDMETHODCALLTYPE *UninitializeSampleAllocator)(
        IMFVideoSampleAllocatorEx *This);

    HRESULT (STDMETHODCALLTYPE *InitializeSampleAllocator)(
        IMFVideoSampleAllocatorEx *This,
        DWORD cRequestedFrames,
        IMFMediaType *pMediaType);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IMFVideoSampleAllocatorEx *This,
        IMFSample **ppSample);

    /*** IMFVideoSampleAllocatorEx methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeSampleAllocatorEx)(
        IMFVideoSampleAllocatorEx *This,
        DWORD cInitialSamples,
        DWORD cMaximumSamples,
        IMFAttributes *pAttributes,
        IMFMediaType *pMediaType);

    END_INTERFACE
} IMFVideoSampleAllocatorExVtbl;

interface IMFVideoSampleAllocatorEx {
    CONST_VTBL IMFVideoSampleAllocatorExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoSampleAllocatorEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoSampleAllocatorEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoSampleAllocatorEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoSampleAllocator methods ***/
#define IMFVideoSampleAllocatorEx_SetDirectXManager(This,pManager) \
    ((This)->lpVtbl->SetDirectXManager(This,pManager))
#define IMFVideoSampleAllocatorEx_UninitializeSampleAllocator(This) \
    ((This)->lpVtbl->UninitializeSampleAllocator(This))
#define IMFVideoSampleAllocatorEx_InitializeSampleAllocator(This,cRequestedFrames,pMediaType) \
    ((This)->lpVtbl->InitializeSampleAllocator(This,cRequestedFrames,pMediaType))
#define IMFVideoSampleAllocatorEx_AllocateSample(This,ppSample) \
    ((This)->lpVtbl->AllocateSample(This,ppSample))
/*** IMFVideoSampleAllocatorEx methods ***/
#define IMFVideoSampleAllocatorEx_InitializeSampleAllocatorEx(This,cInitialSamples,cMaximumSamples,pAttributes,pMediaType) \
    ((This)->lpVtbl->InitializeSampleAllocatorEx(This,cInitialSamples,cMaximumSamples,pAttributes,pMediaType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoSampleAllocatorEx_INTERFACE_DEFINED__ */

#endif // (WINVER >= _WIN32_WINNT_WIN7)
#if (WINVER >= _WIN32_WINNT_WINBLUE)

/*****************************************************************************
 * IMFDXGIDeviceManagerSource interface
 */
#ifndef __IMFDXGIDeviceManagerSource_INTERFACE_DEFINED__
#define __IMFDXGIDeviceManagerSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFDXGIDeviceManagerSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFDXGIDeviceManagerSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFDXGIDeviceManagerSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFDXGIDeviceManagerSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFDXGIDeviceManagerSource *This);

    /*** IMFDXGIDeviceManagerSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetManager)(
        IMFDXGIDeviceManagerSource *This,
        IMFDXGIDeviceManager **ppManager);

    END_INTERFACE
} IMFDXGIDeviceManagerSourceVtbl;

interface IMFDXGIDeviceManagerSource {
    CONST_VTBL IMFDXGIDeviceManagerSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFDXGIDeviceManagerSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFDXGIDeviceManagerSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFDXGIDeviceManagerSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFDXGIDeviceManagerSource methods ***/
#define IMFDXGIDeviceManagerSource_GetManager(This,ppManager) \
    ((This)->lpVtbl->GetManager(This,ppManager))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFDXGIDeviceManagerSource_INTERFACE_DEFINED__ */

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

#if (WINVER >= _WIN32_WINNT_WIN8)

typedef enum _MF_VIDEO_PROCESSOR_ROTATION {
    ROTATION_NONE = 0,
    ROTATION_NORMAL = 1
} MF_VIDEO_PROCESSOR_ROTATION;

typedef enum _MF_VIDEO_PROCESSOR_MIRROR {
    MIRROR_NONE = 0,
    MIRROR_HORIZONTAL = 1,
    MIRROR_VERTICAL = 2
} MF_VIDEO_PROCESSOR_MIRROR;

/*****************************************************************************
 * IMFVideoProcessorControl interface
 */
#ifndef __IMFVideoProcessorControl_INTERFACE_DEFINED__
#define __IMFVideoProcessorControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoProcessorControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoProcessorControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoProcessorControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoProcessorControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoProcessorControl *This);

    /*** IMFVideoProcessorControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBorderColor)(
        IMFVideoProcessorControl *This,
        MFARGB *pBorderColor);

    HRESULT (STDMETHODCALLTYPE *SetSourceRectangle)(
        IMFVideoProcessorControl *This,
        RECT *pSrcRect);

    HRESULT (STDMETHODCALLTYPE *SetDestinationRectangle)(
        IMFVideoProcessorControl *This,
        RECT *pDstRect);

    HRESULT (STDMETHODCALLTYPE *SetMirror)(
        IMFVideoProcessorControl *This,
        MF_VIDEO_PROCESSOR_MIRROR eMirror);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IMFVideoProcessorControl *This,
        MF_VIDEO_PROCESSOR_ROTATION eRotation);

    HRESULT (STDMETHODCALLTYPE *SetConstrictionSize)(
        IMFVideoProcessorControl *This,
        SIZE *pConstrictionSize);

    END_INTERFACE
} IMFVideoProcessorControlVtbl;

interface IMFVideoProcessorControl {
    CONST_VTBL IMFVideoProcessorControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoProcessorControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoProcessorControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoProcessorControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoProcessorControl methods ***/
#define IMFVideoProcessorControl_SetBorderColor(This,pBorderColor) \
    ((This)->lpVtbl->SetBorderColor(This,pBorderColor))
#define IMFVideoProcessorControl_SetSourceRectangle(This,pSrcRect) \
    ((This)->lpVtbl->SetSourceRectangle(This,pSrcRect))
#define IMFVideoProcessorControl_SetDestinationRectangle(This,pDstRect) \
    ((This)->lpVtbl->SetDestinationRectangle(This,pDstRect))
#define IMFVideoProcessorControl_SetMirror(This,eMirror) \
    ((This)->lpVtbl->SetMirror(This,eMirror))
#define IMFVideoProcessorControl_SetRotation(This,eRotation) \
    ((This)->lpVtbl->SetRotation(This,eRotation))
#define IMFVideoProcessorControl_SetConstrictionSize(This,pConstrictionSize) \
    ((This)->lpVtbl->SetConstrictionSize(This,pConstrictionSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoProcessorControl_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WINBLUE)

/*****************************************************************************
 * IMFVideoProcessorControl2 interface
 */
#ifndef __IMFVideoProcessorControl2_INTERFACE_DEFINED__
#define __IMFVideoProcessorControl2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoProcessorControl2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoProcessorControl2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoProcessorControl2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoProcessorControl2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoProcessorControl2 *This);

    /*** IMFVideoProcessorControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBorderColor)(
        IMFVideoProcessorControl2 *This,
        MFARGB *pBorderColor);

    HRESULT (STDMETHODCALLTYPE *SetSourceRectangle)(
        IMFVideoProcessorControl2 *This,
        RECT *pSrcRect);

    HRESULT (STDMETHODCALLTYPE *SetDestinationRectangle)(
        IMFVideoProcessorControl2 *This,
        RECT *pDstRect);

    HRESULT (STDMETHODCALLTYPE *SetMirror)(
        IMFVideoProcessorControl2 *This,
        MF_VIDEO_PROCESSOR_MIRROR eMirror);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IMFVideoProcessorControl2 *This,
        MF_VIDEO_PROCESSOR_ROTATION eRotation);

    HRESULT (STDMETHODCALLTYPE *SetConstrictionSize)(
        IMFVideoProcessorControl2 *This,
        SIZE *pConstrictionSize);

    /*** IMFVideoProcessorControl2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetRotationOverride)(
        IMFVideoProcessorControl2 *This,
        UINT uiRotation);

    HRESULT (STDMETHODCALLTYPE *EnableHardwareEffects)(
        IMFVideoProcessorControl2 *This,
        BOOL fEnabled);

    HRESULT (STDMETHODCALLTYPE *GetSupportedHardwareEffects)(
        IMFVideoProcessorControl2 *This,
        UINT *puiSupport);

    END_INTERFACE
} IMFVideoProcessorControl2Vtbl;

interface IMFVideoProcessorControl2 {
    CONST_VTBL IMFVideoProcessorControl2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoProcessorControl2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoProcessorControl2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoProcessorControl2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoProcessorControl methods ***/
#define IMFVideoProcessorControl2_SetBorderColor(This,pBorderColor) \
    ((This)->lpVtbl->SetBorderColor(This,pBorderColor))
#define IMFVideoProcessorControl2_SetSourceRectangle(This,pSrcRect) \
    ((This)->lpVtbl->SetSourceRectangle(This,pSrcRect))
#define IMFVideoProcessorControl2_SetDestinationRectangle(This,pDstRect) \
    ((This)->lpVtbl->SetDestinationRectangle(This,pDstRect))
#define IMFVideoProcessorControl2_SetMirror(This,eMirror) \
    ((This)->lpVtbl->SetMirror(This,eMirror))
#define IMFVideoProcessorControl2_SetRotation(This,eRotation) \
    ((This)->lpVtbl->SetRotation(This,eRotation))
#define IMFVideoProcessorControl2_SetConstrictionSize(This,pConstrictionSize) \
    ((This)->lpVtbl->SetConstrictionSize(This,pConstrictionSize))
/*** IMFVideoProcessorControl2 methods ***/
#define IMFVideoProcessorControl2_SetRotationOverride(This,uiRotation) \
    ((This)->lpVtbl->SetRotationOverride(This,uiRotation))
#define IMFVideoProcessorControl2_EnableHardwareEffects(This,fEnabled) \
    ((This)->lpVtbl->EnableHardwareEffects(This,fEnabled))
#define IMFVideoProcessorControl2_GetSupportedHardwareEffects(This,puiSupport) \
    ((This)->lpVtbl->GetSupportedHardwareEffects(This,puiSupport))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoProcessorControl2_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WIN10)

typedef enum _MFVideoSphericalFormat {
    MFVideoSphericalFormat_Unsupported = 0,
    MFVideoSphericalFormat_Equirectangular = 1,
    MFVideoSphericalFormat_CubeMap = 2,
    MFVideoSphericalFormat_3DMesh = 3
} MFVideoSphericalFormat;

#endif /* (WINVER >= _WIN32_WINNT_WIN10) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)

EXTERN_GUID( MF_XVP_SAMPLE_LOCK_TIMEOUT, 0xaa4ddb29, 0x5134, 0x4363, 0xac, 0x72, 0x83, 0xec, 0x4b, 0xc1, 0x4, 0x26);

typedef enum MFVideoSphericalProjectionMode {
    MFVideoSphericalProjectionMode_Spherical = 0,
    MFVideoSphericalProjectionMode_Flat = 1
} MFVideoSphericalProjectionMode;

/*****************************************************************************
 * IMFVideoProcessorControl3 interface
 */
#ifndef __IMFVideoProcessorControl3_INTERFACE_DEFINED__
#define __IMFVideoProcessorControl3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoProcessorControl3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoProcessorControl3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoProcessorControl3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoProcessorControl3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoProcessorControl3 *This);

    /*** IMFVideoProcessorControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBorderColor)(
        IMFVideoProcessorControl3 *This,
        MFARGB *pBorderColor);

    HRESULT (STDMETHODCALLTYPE *SetSourceRectangle)(
        IMFVideoProcessorControl3 *This,
        RECT *pSrcRect);

    HRESULT (STDMETHODCALLTYPE *SetDestinationRectangle)(
        IMFVideoProcessorControl3 *This,
        RECT *pDstRect);

    HRESULT (STDMETHODCALLTYPE *SetMirror)(
        IMFVideoProcessorControl3 *This,
        MF_VIDEO_PROCESSOR_MIRROR eMirror);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IMFVideoProcessorControl3 *This,
        MF_VIDEO_PROCESSOR_ROTATION eRotation);

    HRESULT (STDMETHODCALLTYPE *SetConstrictionSize)(
        IMFVideoProcessorControl3 *This,
        SIZE *pConstrictionSize);

    /*** IMFVideoProcessorControl2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetRotationOverride)(
        IMFVideoProcessorControl3 *This,
        UINT uiRotation);

    HRESULT (STDMETHODCALLTYPE *EnableHardwareEffects)(
        IMFVideoProcessorControl3 *This,
        BOOL fEnabled);

    HRESULT (STDMETHODCALLTYPE *GetSupportedHardwareEffects)(
        IMFVideoProcessorControl3 *This,
        UINT *puiSupport);

    /*** IMFVideoProcessorControl3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNaturalOutputType)(
        IMFVideoProcessorControl3 *This,
        IMFMediaType **ppType);

    HRESULT (STDMETHODCALLTYPE *EnableSphericalVideoProcessing)(
        IMFVideoProcessorControl3 *This,
        BOOL fEnable,
        MFVideoSphericalFormat eFormat,
        MFVideoSphericalProjectionMode eProjectionMode);

    HRESULT (STDMETHODCALLTYPE *SetSphericalVideoProperties)(
        IMFVideoProcessorControl3 *This,
        float X,
        float Y,
        float Z,
        float W,
        float fieldOfView);

    HRESULT (STDMETHODCALLTYPE *SetOutputDevice)(
        IMFVideoProcessorControl3 *This,
        IUnknown *pOutputDevice);

    END_INTERFACE
} IMFVideoProcessorControl3Vtbl;

interface IMFVideoProcessorControl3 {
    CONST_VTBL IMFVideoProcessorControl3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoProcessorControl3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoProcessorControl3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoProcessorControl3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoProcessorControl methods ***/
#define IMFVideoProcessorControl3_SetBorderColor(This,pBorderColor) \
    ((This)->lpVtbl->SetBorderColor(This,pBorderColor))
#define IMFVideoProcessorControl3_SetSourceRectangle(This,pSrcRect) \
    ((This)->lpVtbl->SetSourceRectangle(This,pSrcRect))
#define IMFVideoProcessorControl3_SetDestinationRectangle(This,pDstRect) \
    ((This)->lpVtbl->SetDestinationRectangle(This,pDstRect))
#define IMFVideoProcessorControl3_SetMirror(This,eMirror) \
    ((This)->lpVtbl->SetMirror(This,eMirror))
#define IMFVideoProcessorControl3_SetRotation(This,eRotation) \
    ((This)->lpVtbl->SetRotation(This,eRotation))
#define IMFVideoProcessorControl3_SetConstrictionSize(This,pConstrictionSize) \
    ((This)->lpVtbl->SetConstrictionSize(This,pConstrictionSize))
/*** IMFVideoProcessorControl2 methods ***/
#define IMFVideoProcessorControl3_SetRotationOverride(This,uiRotation) \
    ((This)->lpVtbl->SetRotationOverride(This,uiRotation))
#define IMFVideoProcessorControl3_EnableHardwareEffects(This,fEnabled) \
    ((This)->lpVtbl->EnableHardwareEffects(This,fEnabled))
#define IMFVideoProcessorControl3_GetSupportedHardwareEffects(This,puiSupport) \
    ((This)->lpVtbl->GetSupportedHardwareEffects(This,puiSupport))
/*** IMFVideoProcessorControl3 methods ***/
#define IMFVideoProcessorControl3_GetNaturalOutputType(This,ppType) \
    ((This)->lpVtbl->GetNaturalOutputType(This,ppType))
#define IMFVideoProcessorControl3_EnableSphericalVideoProcessing(This,fEnable,eFormat,eProjectionMode) \
    ((This)->lpVtbl->EnableSphericalVideoProcessing(This,fEnable,eFormat,eProjectionMode))
#define IMFVideoProcessorControl3_SetSphericalVideoProperties(This,X,Y,Z,W,fieldOfView) \
    ((This)->lpVtbl->SetSphericalVideoProperties(This,X,Y,Z,W,fieldOfView))
#define IMFVideoProcessorControl3_SetOutputDevice(This,pOutputDevice) \
    ((This)->lpVtbl->SetOutputDevice(This,pOutputDevice))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoProcessorControl3_INTERFACE_DEFINED__ */

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS3) */

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

#if (NTDDI_VERSION >= NTDDI_WIN10_VB)

/*****************************************************************************
 * IMFVideoRendererEffectControl interface
 */
#ifndef __IMFVideoRendererEffectControl_INTERFACE_DEFINED__
#define __IMFVideoRendererEffectControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoRendererEffectControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoRendererEffectControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoRendererEffectControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoRendererEffectControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoRendererEffectControl *This);

    /*** IMFVideoRendererEffectControl methods ***/
    HRESULT (STDMETHODCALLTYPE *OnAppServiceConnectionEstablished)(
        IMFVideoRendererEffectControl *This,
        IUnknown *pAppServiceConnection);

    END_INTERFACE
} IMFVideoRendererEffectControlVtbl;

interface IMFVideoRendererEffectControl {
    CONST_VTBL IMFVideoRendererEffectControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoRendererEffectControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoRendererEffectControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoRendererEffectControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoRendererEffectControl methods ***/
#define IMFVideoRendererEffectControl_OnAppServiceConnectionEstablished(This,pAppServiceConnection) \
    ((This)->lpVtbl->OnAppServiceConnectionEstablished(This,pAppServiceConnection))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoRendererEffectControl_INTERFACE_DEFINED__ */

#endif // (WINVER >= NTDDI_WIN10_VB)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef __IMFTopologyNode_FWD_DEFINED__
#define __IMFTopologyNode_FWD_DEFINED__
typedef interface IMFTopologyNode IMFTopologyNode;
#endif /* __IMFTopologyNode_FWD_DEFINED__ */

/*****************************************************************************
 * IMFTopology interface
 */
#ifndef __IMFTopology_INTERFACE_DEFINED__
#define __IMFTopology_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTopology;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTopologyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTopology *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTopology *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTopology *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFTopology *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFTopology *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFTopology *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFTopology *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFTopology *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFTopology *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFTopology *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFTopology *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFTopology *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFTopology *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFTopology *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFTopology *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFTopology *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFTopology *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFTopology *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFTopology *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFTopology *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFTopology *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFTopology *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFTopology *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFTopology *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFTopology *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFTopology *This,
        IMFAttributes *pDest);

    /*** IMFTopology methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTopologyID)(
        IMFTopology *This,
        TOPOID *pID);

    HRESULT (STDMETHODCALLTYPE *AddNode)(
        IMFTopology *This,
        IMFTopologyNode *pNode);

    HRESULT (STDMETHODCALLTYPE *RemoveNode)(
        IMFTopology *This,
        IMFTopologyNode *pNode);

    HRESULT (STDMETHODCALLTYPE *GetNodeCount)(
        IMFTopology *This,
        WORD *pwNodes);

    HRESULT (STDMETHODCALLTYPE *GetNode)(
        IMFTopology *This,
        WORD wIndex,
        IMFTopologyNode **ppNode);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IMFTopology *This);

    HRESULT (STDMETHODCALLTYPE *CloneFrom)(
        IMFTopology *This,
        IMFTopology *pTopology);

    HRESULT (STDMETHODCALLTYPE *GetNodeByID)(
        IMFTopology *This,
        TOPOID qwTopoNodeID,
        IMFTopologyNode **ppNode);

    HRESULT (STDMETHODCALLTYPE *GetSourceNodeCollection)(
        IMFTopology *This,
        IMFCollection **ppCollection);

    HRESULT (STDMETHODCALLTYPE *GetOutputNodeCollection)(
        IMFTopology *This,
        IMFCollection **ppCollection);

    END_INTERFACE
} IMFTopologyVtbl;

interface IMFTopology {
    CONST_VTBL IMFTopologyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTopology_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTopology_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTopology_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFTopology_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFTopology_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFTopology_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFTopology_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFTopology_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFTopology_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFTopology_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFTopology_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFTopology_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFTopology_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFTopology_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFTopology_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFTopology_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFTopology_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFTopology_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFTopology_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFTopology_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFTopology_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFTopology_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFTopology_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFTopology_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFTopology_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFTopology_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFTopology_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFTopology_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFTopology_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFTopology_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFTopology_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFTopology_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFTopology_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFTopology methods ***/
#define IMFTopology_GetTopologyID(This,pID) \
    ((This)->lpVtbl->GetTopologyID(This,pID))
#define IMFTopology_AddNode(This,pNode) \
    ((This)->lpVtbl->AddNode(This,pNode))
#define IMFTopology_RemoveNode(This,pNode) \
    ((This)->lpVtbl->RemoveNode(This,pNode))
#define IMFTopology_GetNodeCount(This,pwNodes) \
    ((This)->lpVtbl->GetNodeCount(This,pwNodes))
#define IMFTopology_GetNode(This,wIndex,ppNode) \
    ((This)->lpVtbl->GetNode(This,wIndex,ppNode))
#define IMFTopology_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#define IMFTopology_CloneFrom(This,pTopology) \
    ((This)->lpVtbl->CloneFrom(This,pTopology))
#define IMFTopology_GetNodeByID(This,qwTopoNodeID,ppNode) \
    ((This)->lpVtbl->GetNodeByID(This,qwTopoNodeID,ppNode))
#define IMFTopology_GetSourceNodeCollection(This,ppCollection) \
    ((This)->lpVtbl->GetSourceNodeCollection(This,ppCollection))
#define IMFTopology_GetOutputNodeCollection(This,ppCollection) \
    ((This)->lpVtbl->GetOutputNodeCollection(This,ppCollection))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTopology_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

EXTERN_GUID( MF_TOPOLOGY_PROJECTSTART, 0x7ed3f802, 0x86bb, 0x4b3f, 0xb7, 0xe4, 0x7c, 0xb4, 0x3a, 0xfd, 0x4b, 0x80);

EXTERN_GUID( MF_TOPOLOGY_PROJECTSTOP, 0x7ed3f803, 0x86bb, 0x4b3f, 0xb7, 0xe4, 0x7c, 0xb4, 0x3a, 0xfd, 0x4b, 0x80);

EXTERN_GUID( MF_TOPOLOGY_NO_MARKIN_MARKOUT, 0x7ed3f804, 0x86bb, 0x4b3f, 0xb7, 0xe4, 0x7c, 0xb4, 0x3a, 0xfd, 0x4b, 0x80);

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum MFTOPOLOGY_DXVA_MODE {
    MFTOPOLOGY_DXVA_DEFAULT = 0,
    MFTOPOLOGY_DXVA_NONE = 1,
    MFTOPOLOGY_DXVA_FULL = 2
} MFTOPOLOGY_DXVA_MODE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

EXTERN_GUID(MF_TOPOLOGY_DXVA_MODE, 0x1e8d34f6, 0xf5ab, 0x4e23, 0xbb, 0x88, 0x87, 0x4a, 0xa3, 0xa1, 0xa7, 0x4d);

EXTERN_GUID(MF_TOPOLOGY_ENABLE_XVP_FOR_PLAYBACK, 0x1967731f, 0xcd78, 0x42fc, 0xb0, 0x26, 0x9, 0x92, 0xa5, 0x6e, 0x56, 0x93);

EXTERN_GUID(MF_TOPOLOGY_STATIC_PLAYBACK_OPTIMIZATIONS, 0xb86cac42, 0x41a6, 0x4b79, 0x89, 0x7a, 0x1a, 0xb0, 0xe5, 0x2b, 0x4a, 0x1b);

EXTERN_GUID(MF_TOPOLOGY_PLAYBACK_MAX_DIMS,  0x5715cf19, 0x5768, 0x44aa, 0xad, 0x6e, 0x87, 0x21, 0xf1, 0xb0, 0xf9, 0xbb);

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum MFTOPOLOGY_HARDWARE_MODE {
    MFTOPOLOGY_HWMODE_SOFTWARE_ONLY = 0,
    MFTOPOLOGY_HWMODE_USE_HARDWARE = 1,
    MFTOPOLOGY_HWMODE_USE_ONLY_HARDWARE = 2
} MFTOPOLOGY_HARDWARE_MODE;

EXTERN_GUID(MF_TOPOLOGY_HARDWARE_MODE, 0xd2d362fd, 0x4e4f, 0x4191, 0xa5, 0x79, 0xc6, 0x18, 0xb6, 0x67, 0x6, 0xaf);

EXTERN_GUID(MF_TOPOLOGY_PLAYBACK_FRAMERATE, 0xc164737a, 0xc2b1, 0x4553, 0x83, 0xbb, 0x5a, 0x52, 0x60, 0x72, 0x44, 0x8f);

EXTERN_GUID(MF_TOPOLOGY_DYNAMIC_CHANGE_NOT_ALLOWED, 0xd529950b, 0xd484, 0x4527, 0xa9, 0xcd, 0xb1, 0x90, 0x95, 0x32, 0xb5, 0xb0);

EXTERN_GUID(MF_TOPOLOGY_ENUMERATE_SOURCE_TYPES, 0x6248c36d, 0x5d0b, 0x4f40, 0xa0, 0xbb, 0xb0, 0xb3, 0x05, 0xf7, 0x76, 0x98);

EXTERN_GUID( MF_TOPOLOGY_START_TIME_ON_PRESENTATION_SWITCH, 0xc8cc113f, 0x7951, 0x4548, 0xaa, 0xd6, 0x9e, 0xd6, 0x20, 0x2e, 0x62, 0xb3);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if (WINVER >= _WIN32_WINNT_WIN8)

EXTERN_GUID( MF_DISABLE_LOCALLY_REGISTERED_PLUGINS, 0x66b16da9, 0xadd4, 0x47e0, 0xa1, 0x6b, 0x5a, 0xf1, 0xfb, 0x48, 0x36, 0x34);

EXTERN_GUID( MF_LOCAL_PLUGIN_CONTROL_POLICY, 0xd91b0085, 0xc86d, 0x4f81, 0x88, 0x22, 0x8c, 0x68, 0xe1, 0xd7, 0xfa, 0x04);

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)

STDAPI MFCreateTopology(
     IMFTopology ** ppTopo );

typedef enum MF_TOPOLOGY_TYPE {
    MF_TOPOLOGY_OUTPUT_NODE = 0,
    MF_TOPOLOGY_SOURCESTREAM_NODE = 1,
    MF_TOPOLOGY_TRANSFORM_NODE = 2,
    MF_TOPOLOGY_TEE_NODE = 3,
    MF_TOPOLOGY_MAX = 0xffffffff
} MF_TOPOLOGY_TYPE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFTopologyNode interface
 */
#ifndef __IMFTopologyNode_INTERFACE_DEFINED__
#define __IMFTopologyNode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTopologyNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTopologyNodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTopologyNode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTopologyNode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTopologyNode *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFTopologyNode *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFTopologyNode *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFTopologyNode *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFTopologyNode *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFTopologyNode *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFTopologyNode *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFTopologyNode *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFTopologyNode *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFTopologyNode *This,
        IMFAttributes *pDest);

    /*** IMFTopologyNode methods ***/
    HRESULT (STDMETHODCALLTYPE *SetObject)(
        IMFTopologyNode *This,
        IUnknown *pObject);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IMFTopologyNode *This,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *GetNodeType)(
        IMFTopologyNode *This,
        MF_TOPOLOGY_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *GetTopoNodeID)(
        IMFTopologyNode *This,
        TOPOID *pID);

    HRESULT (STDMETHODCALLTYPE *SetTopoNodeID)(
        IMFTopologyNode *This,
        TOPOID ullTopoID);

    HRESULT (STDMETHODCALLTYPE *GetInputCount)(
        IMFTopologyNode *This,
        DWORD *pcInputs);

    HRESULT (STDMETHODCALLTYPE *GetOutputCount)(
        IMFTopologyNode *This,
        DWORD *pcOutputs);

    HRESULT (STDMETHODCALLTYPE *ConnectOutput)(
        IMFTopologyNode *This,
        DWORD dwOutputIndex,
        IMFTopologyNode *pDownstreamNode,
        DWORD dwInputIndexOnDownstreamNode);

    HRESULT (STDMETHODCALLTYPE *DisconnectOutput)(
        IMFTopologyNode *This,
        DWORD dwOutputIndex);

    HRESULT (STDMETHODCALLTYPE *GetInput)(
        IMFTopologyNode *This,
        DWORD dwInputIndex,
        IMFTopologyNode **ppUpstreamNode,
        DWORD *pdwOutputIndexOnUpstreamNode);

    HRESULT (STDMETHODCALLTYPE *GetOutput)(
        IMFTopologyNode *This,
        DWORD dwOutputIndex,
        IMFTopologyNode **ppDownstreamNode,
        DWORD *pdwInputIndexOnDownstreamNode);

    HRESULT (STDMETHODCALLTYPE *SetOutputPrefType)(
        IMFTopologyNode *This,
        DWORD dwOutputIndex,
        IMFMediaType *pType);

    HRESULT (STDMETHODCALLTYPE *GetOutputPrefType)(
        IMFTopologyNode *This,
        DWORD dwOutputIndex,
        IMFMediaType **ppType);

    HRESULT (STDMETHODCALLTYPE *SetInputPrefType)(
        IMFTopologyNode *This,
        DWORD dwInputIndex,
        IMFMediaType *pType);

    HRESULT (STDMETHODCALLTYPE *GetInputPrefType)(
        IMFTopologyNode *This,
        DWORD dwInputIndex,
        IMFMediaType **ppType);

    HRESULT (STDMETHODCALLTYPE *CloneFrom)(
        IMFTopologyNode *This,
        IMFTopologyNode *pNode);

    END_INTERFACE
} IMFTopologyNodeVtbl;

interface IMFTopologyNode {
    CONST_VTBL IMFTopologyNodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTopologyNode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTopologyNode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTopologyNode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFTopologyNode_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFTopologyNode_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFTopologyNode_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFTopologyNode_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFTopologyNode_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFTopologyNode_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFTopologyNode_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFTopologyNode_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFTopologyNode_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFTopologyNode_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFTopologyNode_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFTopologyNode_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFTopologyNode_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFTopologyNode_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFTopologyNode_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFTopologyNode_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFTopologyNode_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFTopologyNode_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFTopologyNode_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFTopologyNode_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFTopologyNode_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFTopologyNode_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFTopologyNode_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFTopologyNode_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFTopologyNode_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFTopologyNode_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFTopologyNode_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFTopologyNode_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFTopologyNode_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFTopologyNode_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFTopologyNode methods ***/
#define IMFTopologyNode_SetObject(This,pObject) \
    ((This)->lpVtbl->SetObject(This,pObject))
#define IMFTopologyNode_GetObject(This,ppObject) \
    ((This)->lpVtbl->GetObject(This,ppObject))
#define IMFTopologyNode_GetNodeType(This,pType) \
    ((This)->lpVtbl->GetNodeType(This,pType))
#define IMFTopologyNode_GetTopoNodeID(This,pID) \
    ((This)->lpVtbl->GetTopoNodeID(This,pID))
#define IMFTopologyNode_SetTopoNodeID(This,ullTopoID) \
    ((This)->lpVtbl->SetTopoNodeID(This,ullTopoID))
#define IMFTopologyNode_GetInputCount(This,pcInputs) \
    ((This)->lpVtbl->GetInputCount(This,pcInputs))
#define IMFTopologyNode_GetOutputCount(This,pcOutputs) \
    ((This)->lpVtbl->GetOutputCount(This,pcOutputs))
#define IMFTopologyNode_ConnectOutput(This,dwOutputIndex,pDownstreamNode,dwInputIndexOnDownstreamNode) \
    ((This)->lpVtbl->ConnectOutput(This,dwOutputIndex,pDownstreamNode,dwInputIndexOnDownstreamNode))
#define IMFTopologyNode_DisconnectOutput(This,dwOutputIndex) \
    ((This)->lpVtbl->DisconnectOutput(This,dwOutputIndex))
#define IMFTopologyNode_GetInput(This,dwInputIndex,ppUpstreamNode,pdwOutputIndexOnUpstreamNode) \
    ((This)->lpVtbl->GetInput(This,dwInputIndex,ppUpstreamNode,pdwOutputIndexOnUpstreamNode))
#define IMFTopologyNode_GetOutput(This,dwOutputIndex,ppDownstreamNode,pdwInputIndexOnDownstreamNode) \
    ((This)->lpVtbl->GetOutput(This,dwOutputIndex,ppDownstreamNode,pdwInputIndexOnDownstreamNode))
#define IMFTopologyNode_SetOutputPrefType(This,dwOutputIndex,pType) \
    ((This)->lpVtbl->SetOutputPrefType(This,dwOutputIndex,pType))
#define IMFTopologyNode_GetOutputPrefType(This,dwOutputIndex,ppType) \
    ((This)->lpVtbl->GetOutputPrefType(This,dwOutputIndex,ppType))
#define IMFTopologyNode_SetInputPrefType(This,dwInputIndex,pType) \
    ((This)->lpVtbl->SetInputPrefType(This,dwInputIndex,pType))
#define IMFTopologyNode_GetInputPrefType(This,dwInputIndex,ppType) \
    ((This)->lpVtbl->GetInputPrefType(This,dwInputIndex,ppType))
#define IMFTopologyNode_CloneFrom(This,pNode) \
    ((This)->lpVtbl->CloneFrom(This,pNode))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFTopologyNode_RemoteGetOutputPrefType_Proxy(
    IMFTopologyNode *This,
    DWORD dwOutputIndex,
    DWORD *pcbData,
    BYTE **ppbData);

void __RPC_STUB IMFTopologyNode_RemoteGetOutputPrefType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFTopologyNode_RemoteGetInputPrefType_Proxy(
    IMFTopologyNode *This,
    DWORD dwInputIndex,
    DWORD *pcbData,
    BYTE **ppbData);

void __RPC_STUB IMFTopologyNode_RemoteGetInputPrefType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFTopologyNode_GetOutputPrefType_Proxy(
    DWORD dwOutputIndex,
    IMFMediaType **ppType);
HRESULT IMFTopologyNode_GetOutputPrefType_Stub(
    DWORD dwOutputIndex,
    DWORD *pcbData,
    BYTE **ppbData);
HRESULT IMFTopologyNode_GetInputPrefType_Proxy(
    DWORD dwInputIndex,
    IMFMediaType **ppType);
HRESULT IMFTopologyNode_GetInputPrefType_Stub(
    DWORD dwInputIndex,
    DWORD *pcbData,
    BYTE **ppbData);
#endif /* __IMFTopologyNode_INTERFACE_DEFINED__ */

typedef enum _MF_TOPONODE_FLUSH_MODE {
    MF_TOPONODE_FLUSH_ALWAYS = 0,
    MF_TOPONODE_FLUSH_SEEK = 1,
    MF_TOPONODE_FLUSH_NEVER = 2
} MF_TOPONODE_FLUSH_MODE;

EXTERN_GUID( MF_TOPONODE_FLUSH, 0x494bbce8, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

typedef enum _MF_TOPONODE_DRAIN_MODE {
    MF_TOPONODE_DRAIN_DEFAULT = 0,
    MF_TOPONODE_DRAIN_ALWAYS = 1,
    MF_TOPONODE_DRAIN_NEVER = 2
} MF_TOPONODE_DRAIN_MODE;

EXTERN_GUID( MF_TOPONODE_DRAIN, 0x494bbce9, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_D3DAWARE, 0x494bbced, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPOLOGY_RESOLUTION_STATUS, 0x494bbcde, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_ERRORCODE, 0x494bbcee, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_CONNECT_METHOD, 0x494bbcf1, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_LOCKED, 0x494bbcf7, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_WORKQUEUE_ID, 0x494bbcf8, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_WORKQUEUE_MMCSS_CLASS, 0x494bbcf9, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_DECRYPTOR, 0x494bbcfa, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_DISCARDABLE, 0x494bbcfb, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_ERROR_MAJORTYPE, 0x494bbcfd, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_ERROR_SUBTYPE, 0x494bbcfe, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_WORKQUEUE_MMCSS_TASKID, 0x494bbcff, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_WORKQUEUE_MMCSS_PRIORITY, 0x5001f840, 0x2816, 0x48f4, 0x93, 0x64, 0xad, 0x1e, 0xf6, 0x61, 0xa1, 0x23);

EXTERN_GUID( MF_TOPONODE_WORKQUEUE_ITEM_PRIORITY, 0xa1ff99be, 0x5e97, 0x4a53, 0xb4, 0x94, 0x56, 0x8c, 0x64, 0x2c, 0x0f, 0xf3);

EXTERN_GUID( MF_TOPONODE_MARKIN_HERE, 0x494bbd00, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_MARKOUT_HERE, 0x494bbd01, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_DECODER, 0x494bbd02, 0xb031,  0x4e38,  0x97, 0xc4, 0xd5, 0x42, 0x2d, 0xd6, 0x18, 0xdc);

EXTERN_GUID( MF_TOPONODE_MEDIASTART, 0x835c58ea, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);

EXTERN_GUID( MF_TOPONODE_MEDIASTOP, 0x835c58eb, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);

EXTERN_GUID( MF_TOPONODE_SOURCE, 0x835c58ec, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);

EXTERN_GUID( MF_TOPONODE_PRESENTATION_DESCRIPTOR, 0x835c58ed, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);

EXTERN_GUID( MF_TOPONODE_STREAM_DESCRIPTOR, 0x835c58ee, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);

EXTERN_GUID( MF_TOPONODE_SEQUENCE_ELEMENTID, 0x835c58ef, 0xe075, 0x4bc7, 0xbc, 0xba, 0x4d, 0xe0, 0x00, 0xdf, 0x9a, 0xe6);

EXTERN_GUID( MF_TOPONODE_TRANSFORM_OBJECTID, 0x88dcc0c9, 0x293e, 0x4e8b, 0x9a, 0xeb, 0xa, 0xd6, 0x4c, 0xc0, 0x16, 0xb0);

EXTERN_GUID( MF_TOPONODE_STREAMID, 0x14932f9b, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);

EXTERN_GUID( MF_TOPONODE_NOSHUTDOWN_ON_REMOVE, 0x14932f9c, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);

EXTERN_GUID( MF_TOPONODE_RATELESS, 0x14932f9d, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);

EXTERN_GUID( MF_TOPONODE_DISABLE_PREROLL, 0x14932f9e, 0x9087, 0x4bb4, 0x84, 0x12, 0x51, 0x67, 0x14, 0x5c, 0xbe, 0x04);

EXTERN_GUID( MF_TOPONODE_PRIMARYOUTPUT, 0x6304ef99, 0x16b2, 0x4ebe, 0x9d, 0x67, 0xe4, 0xc5, 0x39, 0xb3, 0xa2, 0x59);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)

STDAPI MFCreateTopologyNode(
    MF_TOPOLOGY_TYPE NodeType,
     IMFTopologyNode ** ppNode );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)

STDAPI MFGetTopoNodeCurrentType(
    IMFTopologyNode* pNode,
    DWORD dwStreamIndex,
    BOOL fOutput,
     IMFMediaType** ppType);
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFGetService interface
 */
#ifndef __IMFGetService_INTERFACE_DEFINED__
#define __IMFGetService_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFGetService;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFGetServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFGetService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFGetService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFGetService *This);

    /*** IMFGetService methods ***/
    HRESULT (STDMETHODCALLTYPE *GetService)(
        IMFGetService *This,
        REFGUID guidService,
        REFIID riid,
        LPVOID *ppvObject);

    END_INTERFACE
} IMFGetServiceVtbl;

interface IMFGetService {
    CONST_VTBL IMFGetServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFGetService_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFGetService_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFGetService_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFGetService methods ***/
#define IMFGetService_GetService(This,guidService,riid,ppvObject) \
    ((This)->lpVtbl->GetService(This,guidService,riid,ppvObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFGetService_INTERFACE_DEFINED__ */

STDAPI MFGetService(
    IUnknown* punkObject,
    REFGUID guidService,
    REFIID riid,
     LPVOID* ppvObject
    );

typedef LONGLONG MFTIME;

typedef enum _MFCLOCK_CHARACTERISTICS_FLAGS {
    MFCLOCK_CHARACTERISTICS_FLAG_FREQUENCY_10MHZ = 0x2,
    MFCLOCK_CHARACTERISTICS_FLAG_ALWAYS_RUNNING = 0x4,
    MFCLOCK_CHARACTERISTICS_FLAG_IS_SYSTEM_CLOCK = 0x8
} MFCLOCK_CHARACTERISTICS_FLAGS;

typedef enum _MFCLOCK_STATE {
    MFCLOCK_STATE_INVALID = 0,
    MFCLOCK_STATE_RUNNING = 1,
    MFCLOCK_STATE_STOPPED = 2,
    MFCLOCK_STATE_PAUSED = 3
} MFCLOCK_STATE;

typedef enum _MFCLOCK_RELATIONAL_FLAGS {
    MFCLOCK_RELATIONAL_FLAG_JITTER_NEVER_AHEAD = 0x1
} MFCLOCK_RELATIONAL_FLAGS;

typedef struct _MFCLOCK_PROPERTIES {
    unsigned __int64 qwCorrelationRate;
    GUID guidClockId;
    DWORD dwClockFlags;
    unsigned __int64 qwClockFrequency;
    DWORD dwClockTolerance;
    DWORD dwClockJitter;
} MFCLOCK_PROPERTIES;

#define MFCLOCK_FREQUENCY_HNS       10000000
#define MFCLOCK_TOLERANCE_UNKNOWN   50000
#define MFCLOCK_JITTER_ISR          1000
#define MFCLOCK_JITTER_DPC          4000
#define MFCLOCK_JITTER_PASSIVE      10000

/*****************************************************************************
 * IMFClock interface
 */
#ifndef __IMFClock_INTERFACE_DEFINED__
#define __IMFClock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFClock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFClockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFClock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFClock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFClock *This);

    /*** IMFClock methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClockCharacteristics)(
        IMFClock *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *GetCorrelatedTime)(
        IMFClock *This,
        DWORD dwReserved,
        LONGLONG *pllClockTime,
        MFTIME *phnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *GetContinuityKey)(
        IMFClock *This,
        DWORD *pdwContinuityKey);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMFClock *This,
        DWORD dwReserved,
        MFCLOCK_STATE *peClockState);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IMFClock *This,
        MFCLOCK_PROPERTIES *pClockProperties);

    END_INTERFACE
} IMFClockVtbl;

interface IMFClock {
    CONST_VTBL IMFClockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFClock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFClock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFClock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClock methods ***/
#define IMFClock_GetClockCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetClockCharacteristics(This,pdwCharacteristics))
#define IMFClock_GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime) \
    ((This)->lpVtbl->GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime))
#define IMFClock_GetContinuityKey(This,pdwContinuityKey) \
    ((This)->lpVtbl->GetContinuityKey(This,pdwContinuityKey))
#define IMFClock_GetState(This,dwReserved,peClockState) \
    ((This)->lpVtbl->GetState(This,dwReserved,peClockState))
#define IMFClock_GetProperties(This,pClockProperties) \
    ((This)->lpVtbl->GetProperties(This,pClockProperties))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFClock_INTERFACE_DEFINED__ */

STDAPI_(MFTIME)
MFGetSystemTime(
    );

#define PRESENTATION_CURRENT_POSITION   0x7fffffffffffffff


#ifndef __IMFClockStateSink_FWD_DEFINED__
#define __IMFClockStateSink_FWD_DEFINED__
typedef interface IMFClockStateSink IMFClockStateSink;
#endif /* __IMFClockStateSink_FWD_DEFINED__ */


#ifndef __IMFPresentationTimeSource_FWD_DEFINED__
#define __IMFPresentationTimeSource_FWD_DEFINED__
typedef interface IMFPresentationTimeSource IMFPresentationTimeSource;
#endif /* __IMFPresentationTimeSource_FWD_DEFINED__ */

/*****************************************************************************
 * IMFPresentationClock interface
 */
#ifndef __IMFPresentationClock_INTERFACE_DEFINED__
#define __IMFPresentationClock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPresentationClock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPresentationClockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPresentationClock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPresentationClock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPresentationClock *This);

    /*** IMFClock methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClockCharacteristics)(
        IMFPresentationClock *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *GetCorrelatedTime)(
        IMFPresentationClock *This,
        DWORD dwReserved,
        LONGLONG *pllClockTime,
        MFTIME *phnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *GetContinuityKey)(
        IMFPresentationClock *This,
        DWORD *pdwContinuityKey);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMFPresentationClock *This,
        DWORD dwReserved,
        MFCLOCK_STATE *peClockState);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IMFPresentationClock *This,
        MFCLOCK_PROPERTIES *pClockProperties);

    /*** IMFPresentationClock methods ***/
    HRESULT (STDMETHODCALLTYPE *SetTimeSource)(
        IMFPresentationClock *This,
        IMFPresentationTimeSource *pTimeSource);

    HRESULT (STDMETHODCALLTYPE *GetTimeSource)(
        IMFPresentationClock *This,
        IMFPresentationTimeSource **ppTimeSource);

    HRESULT (STDMETHODCALLTYPE *GetTime)(
        IMFPresentationClock *This,
        MFTIME *phnsClockTime);

    HRESULT (STDMETHODCALLTYPE *AddClockStateSink)(
        IMFPresentationClock *This,
        IMFClockStateSink *pStateSink);

    HRESULT (STDMETHODCALLTYPE *RemoveClockStateSink)(
        IMFPresentationClock *This,
        IMFClockStateSink *pStateSink);

    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFPresentationClock *This,
        LONGLONG llClockStartOffset);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFPresentationClock *This);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        IMFPresentationClock *This);

    END_INTERFACE
} IMFPresentationClockVtbl;

interface IMFPresentationClock {
    CONST_VTBL IMFPresentationClockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPresentationClock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPresentationClock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPresentationClock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClock methods ***/
#define IMFPresentationClock_GetClockCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetClockCharacteristics(This,pdwCharacteristics))
#define IMFPresentationClock_GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime) \
    ((This)->lpVtbl->GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime))
#define IMFPresentationClock_GetContinuityKey(This,pdwContinuityKey) \
    ((This)->lpVtbl->GetContinuityKey(This,pdwContinuityKey))
#define IMFPresentationClock_GetState(This,dwReserved,peClockState) \
    ((This)->lpVtbl->GetState(This,dwReserved,peClockState))
#define IMFPresentationClock_GetProperties(This,pClockProperties) \
    ((This)->lpVtbl->GetProperties(This,pClockProperties))
/*** IMFPresentationClock methods ***/
#define IMFPresentationClock_SetTimeSource(This,pTimeSource) \
    ((This)->lpVtbl->SetTimeSource(This,pTimeSource))
#define IMFPresentationClock_GetTimeSource(This,ppTimeSource) \
    ((This)->lpVtbl->GetTimeSource(This,ppTimeSource))
#define IMFPresentationClock_GetTime(This,phnsClockTime) \
    ((This)->lpVtbl->GetTime(This,phnsClockTime))
#define IMFPresentationClock_AddClockStateSink(This,pStateSink) \
    ((This)->lpVtbl->AddClockStateSink(This,pStateSink))
#define IMFPresentationClock_RemoveClockStateSink(This,pStateSink) \
    ((This)->lpVtbl->RemoveClockStateSink(This,pStateSink))
#define IMFPresentationClock_Start(This,llClockStartOffset) \
    ((This)->lpVtbl->Start(This,llClockStartOffset))
#define IMFPresentationClock_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFPresentationClock_Pause(This) \
    ((This)->lpVtbl->Pause(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPresentationClock_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)

STDAPI MFCreatePresentationClock(
     IMFPresentationClock** ppPresentationClock
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFPresentationTimeSource interface
 */
#ifndef __IMFPresentationTimeSource_INTERFACE_DEFINED__
#define __IMFPresentationTimeSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPresentationTimeSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPresentationTimeSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPresentationTimeSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPresentationTimeSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPresentationTimeSource *This);

    /*** IMFClock methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClockCharacteristics)(
        IMFPresentationTimeSource *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *GetCorrelatedTime)(
        IMFPresentationTimeSource *This,
        DWORD dwReserved,
        LONGLONG *pllClockTime,
        MFTIME *phnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *GetContinuityKey)(
        IMFPresentationTimeSource *This,
        DWORD *pdwContinuityKey);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMFPresentationTimeSource *This,
        DWORD dwReserved,
        MFCLOCK_STATE *peClockState);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IMFPresentationTimeSource *This,
        MFCLOCK_PROPERTIES *pClockProperties);

    /*** IMFPresentationTimeSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetUnderlyingClock)(
        IMFPresentationTimeSource *This,
        IMFClock **ppClock);

    END_INTERFACE
} IMFPresentationTimeSourceVtbl;

interface IMFPresentationTimeSource {
    CONST_VTBL IMFPresentationTimeSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPresentationTimeSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPresentationTimeSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPresentationTimeSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClock methods ***/
#define IMFPresentationTimeSource_GetClockCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetClockCharacteristics(This,pdwCharacteristics))
#define IMFPresentationTimeSource_GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime) \
    ((This)->lpVtbl->GetCorrelatedTime(This,dwReserved,pllClockTime,phnsSystemTime))
#define IMFPresentationTimeSource_GetContinuityKey(This,pdwContinuityKey) \
    ((This)->lpVtbl->GetContinuityKey(This,pdwContinuityKey))
#define IMFPresentationTimeSource_GetState(This,dwReserved,peClockState) \
    ((This)->lpVtbl->GetState(This,dwReserved,peClockState))
#define IMFPresentationTimeSource_GetProperties(This,pClockProperties) \
    ((This)->lpVtbl->GetProperties(This,pClockProperties))
/*** IMFPresentationTimeSource methods ***/
#define IMFPresentationTimeSource_GetUnderlyingClock(This,ppClock) \
    ((This)->lpVtbl->GetUnderlyingClock(This,ppClock))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPresentationTimeSource_INTERFACE_DEFINED__ */

STDAPI
MFCreateSystemTimeSource(
     IMFPresentationTimeSource** ppSystemTimeSource
    );

/*****************************************************************************
 * IMFClockStateSink interface
 */
#ifndef __IMFClockStateSink_INTERFACE_DEFINED__
#define __IMFClockStateSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFClockStateSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFClockStateSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFClockStateSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFClockStateSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFClockStateSink *This);

    /*** IMFClockStateSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnClockStart)(
        IMFClockStateSink *This,
        MFTIME hnsSystemTime,
        LONGLONG llClockStartOffset);

    HRESULT (STDMETHODCALLTYPE *OnClockStop)(
        IMFClockStateSink *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockPause)(
        IMFClockStateSink *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockRestart)(
        IMFClockStateSink *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockSetRate)(
        IMFClockStateSink *This,
        MFTIME hnsSystemTime,
        float flRate);

    END_INTERFACE
} IMFClockStateSinkVtbl;

interface IMFClockStateSink {
    CONST_VTBL IMFClockStateSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFClockStateSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFClockStateSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFClockStateSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClockStateSink methods ***/
#define IMFClockStateSink_OnClockStart(This,hnsSystemTime,llClockStartOffset) \
    ((This)->lpVtbl->OnClockStart(This,hnsSystemTime,llClockStartOffset))
#define IMFClockStateSink_OnClockStop(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockStop(This,hnsSystemTime))
#define IMFClockStateSink_OnClockPause(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockPause(This,hnsSystemTime))
#define IMFClockStateSink_OnClockRestart(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockRestart(This,hnsSystemTime))
#define IMFClockStateSink_OnClockSetRate(This,hnsSystemTime,flRate) \
    ((This)->lpVtbl->OnClockSetRate(This,hnsSystemTime,flRate))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFClockStateSink_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

EXTERN_GUID( MF_PD_PMPHOST_CONTEXT, 0x6c990d31, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_APP_CONTEXT, 0x6c990d32, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

EXTERN_GUID( MF_PD_DURATION, 0x6c990d33, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_TOTAL_FILE_SIZE, 0x6c990d34, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_AUDIO_ENCODING_BITRATE, 0x6c990d35, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_VIDEO_ENCODING_BITRATE, 0x6c990d36, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_MIME_TYPE, 0x6c990d37, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID(MF_PD_LAST_MODIFIED_TIME, 0x6c990d38, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID(MF_PD_PLAYBACK_ELEMENT_ID, 0x6c990d39, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_PREFERRED_LANGUAGE, 0x6c990d3A, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID(MF_PD_PLAYBACK_BOUNDARY_TIME, 0x6c990d3b, 0xbb8e, 0x477a, 0x85, 0x98, 0xd, 0x5d, 0x96, 0xfc, 0xd8, 0x8a );

EXTERN_GUID( MF_PD_AUDIO_ISVARIABLEBITRATE, 0x33026ee0, 0xe387, 0x4582, 0xae, 0x0a, 0x34, 0xa2, 0xad, 0x3b, 0xaa, 0x18 );

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

DEFINE_GUID( MF_PD_ADAPTIVE_STREAMING, 0xEA0D5D97, 0x29F9, 0x488B, 0xAE, 0x6B, 0x7D, 0x6B, 0x41, 0x36, 0x11, 0x2B);

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

/*****************************************************************************
 * IMFPresentationDescriptor interface
 */
#ifndef __IMFPresentationDescriptor_INTERFACE_DEFINED__
#define __IMFPresentationDescriptor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPresentationDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPresentationDescriptorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPresentationDescriptor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPresentationDescriptor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPresentationDescriptor *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFPresentationDescriptor *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFPresentationDescriptor *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFPresentationDescriptor *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFPresentationDescriptor *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFPresentationDescriptor *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFPresentationDescriptor *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFPresentationDescriptor *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFPresentationDescriptor *This,
        IMFAttributes *pDest);

    /*** IMFPresentationDescriptor methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamDescriptorCount)(
        IMFPresentationDescriptor *This,
        DWORD *pdwDescriptorCount);

    HRESULT (STDMETHODCALLTYPE *GetStreamDescriptorByIndex)(
        IMFPresentationDescriptor *This,
        DWORD dwIndex,
        BOOL *pfSelected,
        IMFStreamDescriptor **ppDescriptor);

    HRESULT (STDMETHODCALLTYPE *SelectStream)(
        IMFPresentationDescriptor *This,
        DWORD dwDescriptorIndex);

    HRESULT (STDMETHODCALLTYPE *DeselectStream)(
        IMFPresentationDescriptor *This,
        DWORD dwDescriptorIndex);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IMFPresentationDescriptor *This,
        IMFPresentationDescriptor **ppPresentationDescriptor);

    END_INTERFACE
} IMFPresentationDescriptorVtbl;

interface IMFPresentationDescriptor {
    CONST_VTBL IMFPresentationDescriptorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPresentationDescriptor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPresentationDescriptor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPresentationDescriptor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFPresentationDescriptor_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFPresentationDescriptor_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFPresentationDescriptor_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFPresentationDescriptor_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFPresentationDescriptor_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFPresentationDescriptor_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFPresentationDescriptor_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFPresentationDescriptor_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFPresentationDescriptor_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFPresentationDescriptor_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFPresentationDescriptor_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFPresentationDescriptor_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFPresentationDescriptor_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFPresentationDescriptor_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFPresentationDescriptor_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFPresentationDescriptor_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFPresentationDescriptor_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFPresentationDescriptor_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFPresentationDescriptor_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFPresentationDescriptor_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFPresentationDescriptor_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFPresentationDescriptor_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFPresentationDescriptor_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFPresentationDescriptor_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFPresentationDescriptor_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFPresentationDescriptor_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFPresentationDescriptor_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFPresentationDescriptor_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFPresentationDescriptor_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFPresentationDescriptor_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFPresentationDescriptor methods ***/
#define IMFPresentationDescriptor_GetStreamDescriptorCount(This,pdwDescriptorCount) \
    ((This)->lpVtbl->GetStreamDescriptorCount(This,pdwDescriptorCount))
#define IMFPresentationDescriptor_GetStreamDescriptorByIndex(This,dwIndex,pfSelected,ppDescriptor) \
    ((This)->lpVtbl->GetStreamDescriptorByIndex(This,dwIndex,pfSelected,ppDescriptor))
#define IMFPresentationDescriptor_SelectStream(This,dwDescriptorIndex) \
    ((This)->lpVtbl->SelectStream(This,dwDescriptorIndex))
#define IMFPresentationDescriptor_DeselectStream(This,dwDescriptorIndex) \
    ((This)->lpVtbl->DeselectStream(This,dwDescriptorIndex))
#define IMFPresentationDescriptor_Clone(This,ppPresentationDescriptor) \
    ((This)->lpVtbl->Clone(This,ppPresentationDescriptor))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPresentationDescriptor_INTERFACE_DEFINED__ */

STDAPI MFCreatePresentationDescriptor(
    DWORD cStreamDescriptors,
     IMFStreamDescriptor** apStreamDescriptors,
     IMFPresentationDescriptor** ppPresentationDescriptor
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

STDAPI MFRequireProtectedEnvironment(
      IMFPresentationDescriptor* pPresentationDescriptor
     );

STDAPI MFSerializePresentationDescriptor(
     IMFPresentationDescriptor * pPD,
     DWORD * pcbData,
     BYTE ** ppbData);

STDAPI MFDeserializePresentationDescriptor(
     DWORD cbData,
     BYTE * pbData,
     IMFPresentationDescriptor ** ppPD);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

EXTERN_GUID(MF_SD_LANGUAGE, 0xaf2180, 0xbdc2, 0x423c, 0xab, 0xca, 0xf5, 0x3, 0x59, 0x3b, 0xc1, 0x21);

EXTERN_GUID(MF_SD_PROTECTED, 0xaf2181, 0xbdc2, 0x423c, 0xab, 0xca, 0xf5, 0x3, 0x59, 0x3b, 0xc1, 0x21);

EXTERN_GUID(MF_SD_STREAM_NAME, 0x4f1b099d, 0xd314, 0x41e5, 0xa7, 0x81, 0x7f, 0xef, 0xaa, 0x4c, 0x50, 0x1f);

EXTERN_GUID(MF_SD_MUTUALLY_EXCLUSIVE, 0x23ef79c, 0x388d, 0x487f, 0xac, 0x17, 0x69, 0x6c, 0xd6, 0xe3, 0xc6, 0xf5);

/*****************************************************************************
 * IMFStreamDescriptor interface
 */
#ifndef __IMFStreamDescriptor_INTERFACE_DEFINED__
#define __IMFStreamDescriptor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFStreamDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFStreamDescriptorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFStreamDescriptor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFStreamDescriptor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFStreamDescriptor *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFStreamDescriptor *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFStreamDescriptor *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFStreamDescriptor *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFStreamDescriptor *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFStreamDescriptor *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFStreamDescriptor *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFStreamDescriptor *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFStreamDescriptor *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFStreamDescriptor *This,
        IMFAttributes *pDest);

    /*** IMFStreamDescriptor methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamIdentifier)(
        IMFStreamDescriptor *This,
        DWORD *pdwStreamIdentifier);

    HRESULT (STDMETHODCALLTYPE *GetMediaTypeHandler)(
        IMFStreamDescriptor *This,
        IMFMediaTypeHandler **ppMediaTypeHandler);

    END_INTERFACE
} IMFStreamDescriptorVtbl;

interface IMFStreamDescriptor {
    CONST_VTBL IMFStreamDescriptorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFStreamDescriptor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFStreamDescriptor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFStreamDescriptor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFStreamDescriptor_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFStreamDescriptor_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFStreamDescriptor_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFStreamDescriptor_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFStreamDescriptor_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFStreamDescriptor_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFStreamDescriptor_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFStreamDescriptor_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFStreamDescriptor_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFStreamDescriptor_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFStreamDescriptor_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFStreamDescriptor_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFStreamDescriptor_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFStreamDescriptor_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFStreamDescriptor_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFStreamDescriptor_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFStreamDescriptor_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFStreamDescriptor_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFStreamDescriptor_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFStreamDescriptor_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFStreamDescriptor_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFStreamDescriptor_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFStreamDescriptor_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFStreamDescriptor_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFStreamDescriptor_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFStreamDescriptor_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFStreamDescriptor_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFStreamDescriptor_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFStreamDescriptor_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFStreamDescriptor_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFStreamDescriptor methods ***/
#define IMFStreamDescriptor_GetStreamIdentifier(This,pdwStreamIdentifier) \
    ((This)->lpVtbl->GetStreamIdentifier(This,pdwStreamIdentifier))
#define IMFStreamDescriptor_GetMediaTypeHandler(This,ppMediaTypeHandler) \
    ((This)->lpVtbl->GetMediaTypeHandler(This,ppMediaTypeHandler))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFStreamDescriptor_INTERFACE_DEFINED__ */

STDAPI MFCreateStreamDescriptor(
    DWORD dwStreamIdentifier,
    DWORD cMediaTypes,
     IMFMediaType** apMediaTypes,
     IMFStreamDescriptor** ppDescriptor
    );

/*****************************************************************************
 * IMFMediaTypeHandler interface
 */
#ifndef __IMFMediaTypeHandler_INTERFACE_DEFINED__
#define __IMFMediaTypeHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaTypeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaTypeHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaTypeHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaTypeHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaTypeHandler *This);

    /*** IMFMediaTypeHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *IsMediaTypeSupported)(
        IMFMediaTypeHandler *This,
        IMFMediaType *pMediaType,
        IMFMediaType **ppMediaType);

    HRESULT (STDMETHODCALLTYPE *GetMediaTypeCount)(
        IMFMediaTypeHandler *This,
        DWORD *pdwTypeCount);

    HRESULT (STDMETHODCALLTYPE *GetMediaTypeByIndex)(
        IMFMediaTypeHandler *This,
        DWORD dwIndex,
        IMFMediaType **ppType);

    HRESULT (STDMETHODCALLTYPE *SetCurrentMediaType)(
        IMFMediaTypeHandler *This,
        IMFMediaType *pMediaType);

    HRESULT (STDMETHODCALLTYPE *GetCurrentMediaType)(
        IMFMediaTypeHandler *This,
        IMFMediaType **ppMediaType);

    HRESULT (STDMETHODCALLTYPE *GetMajorType)(
        IMFMediaTypeHandler *This,
        GUID *pguidMajorType);

    END_INTERFACE
} IMFMediaTypeHandlerVtbl;

interface IMFMediaTypeHandler {
    CONST_VTBL IMFMediaTypeHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaTypeHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaTypeHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaTypeHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaTypeHandler methods ***/
#define IMFMediaTypeHandler_IsMediaTypeSupported(This,pMediaType,ppMediaType) \
    ((This)->lpVtbl->IsMediaTypeSupported(This,pMediaType,ppMediaType))
#define IMFMediaTypeHandler_GetMediaTypeCount(This,pdwTypeCount) \
    ((This)->lpVtbl->GetMediaTypeCount(This,pdwTypeCount))
#define IMFMediaTypeHandler_GetMediaTypeByIndex(This,dwIndex,ppType) \
    ((This)->lpVtbl->GetMediaTypeByIndex(This,dwIndex,ppType))
#define IMFMediaTypeHandler_SetCurrentMediaType(This,pMediaType) \
    ((This)->lpVtbl->SetCurrentMediaType(This,pMediaType))
#define IMFMediaTypeHandler_GetCurrentMediaType(This,ppMediaType) \
    ((This)->lpVtbl->GetCurrentMediaType(This,ppMediaType))
#define IMFMediaTypeHandler_GetMajorType(This,pguidMajorType) \
    ((This)->lpVtbl->GetMajorType(This,pguidMajorType))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteIsMediaTypeSupported_Proxy(
    IMFMediaTypeHandler *This,
    BYTE *pbData,
    DWORD cbData,
    BYTE **ppbBestMatch,
    DWORD *pcbBestMatch);

void __RPC_STUB IMFMediaTypeHandler_RemoteIsMediaTypeSupported_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteGetMediaTypeByIndex_Proxy(
    IMFMediaTypeHandler *This,
    DWORD dwIndex,
    BYTE **ppbData,
    DWORD *pcbData);

void __RPC_STUB IMFMediaTypeHandler_RemoteGetMediaTypeByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteSetCurrentMediaType_Proxy(
    IMFMediaTypeHandler *This,
    BYTE *pbData,
    DWORD cbData);

void __RPC_STUB IMFMediaTypeHandler_RemoteSetCurrentMediaType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFMediaTypeHandler_RemoteGetCurrentMediaType_Proxy(
    IMFMediaTypeHandler *This,
    BYTE **ppbData,
    DWORD *pcbData);

void __RPC_STUB IMFMediaTypeHandler_RemoteGetCurrentMediaType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFMediaTypeHandler_IsMediaTypeSupported_Proxy(
    IMFMediaType *pMediaType,
    IMFMediaType **ppMediaType);
HRESULT IMFMediaTypeHandler_IsMediaTypeSupported_Stub(
    BYTE *pbData,
    DWORD cbData,
    BYTE **ppbBestMatch,
    DWORD *pcbBestMatch);
HRESULT IMFMediaTypeHandler_GetMediaTypeByIndex_Proxy(
    DWORD dwIndex,
    IMFMediaType **ppType);
HRESULT IMFMediaTypeHandler_GetMediaTypeByIndex_Stub(
    DWORD dwIndex,
    BYTE **ppbData,
    DWORD *pcbData);
HRESULT IMFMediaTypeHandler_SetCurrentMediaType_Proxy(
    IMFMediaType *pMediaType);
HRESULT IMFMediaTypeHandler_SetCurrentMediaType_Stub(
    BYTE *pbData,
    DWORD cbData);
HRESULT IMFMediaTypeHandler_GetCurrentMediaType_Proxy(
    IMFMediaType **ppMediaType);
HRESULT IMFMediaTypeHandler_GetCurrentMediaType_Stub(
    BYTE **ppbData,
    DWORD *pcbData);
#endif /* __IMFMediaTypeHandler_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI MFCreateSimpleTypeHandler(
     IMFMediaTypeHandler ** ppHandler );

typedef enum MFTIMER_FLAGS {
    MFTIMER_RELATIVE = 0x1
} MFTIMER_FLAGS;

/*****************************************************************************
 * IMFTimer interface
 */
#ifndef __IMFTimer_INTERFACE_DEFINED__
#define __IMFTimer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTimer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTimerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTimer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTimer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTimer *This);

    /*** IMFTimer methods ***/
    HRESULT (STDMETHODCALLTYPE *SetTimer)(
        IMFTimer *This,
        DWORD dwFlags,
        LONGLONG llClockTime,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState,
        IUnknown **ppunkKey);

    HRESULT (STDMETHODCALLTYPE *CancelTimer)(
        IMFTimer *This,
        IUnknown *punkKey);

    END_INTERFACE
} IMFTimerVtbl;

interface IMFTimer {
    CONST_VTBL IMFTimerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTimer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTimer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTimer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTimer methods ***/
#define IMFTimer_SetTimer(This,dwFlags,llClockTime,pCallback,punkState,ppunkKey) \
    ((This)->lpVtbl->SetTimer(This,dwFlags,llClockTime,pCallback,punkState,ppunkKey))
#define IMFTimer_CancelTimer(This,punkKey) \
    ((This)->lpVtbl->CancelTimer(This,punkKey))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTimer_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_MIXER_CLSID,          0xba491360, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_MIXER_ACTIVATE,       0xba491361, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_MIXER_FLAGS,          0xba491362, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_PRESENTER_CLSID,      0xba491364, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_PRESENTER_ACTIVATE,   0xba491365, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );
EXTERN_GUID( MF_ACTIVATE_CUSTOM_VIDEO_PRESENTER_FLAGS,      0xba491366, 0xbe50, 0x451e, 0x95, 0xab, 0x6d, 0x4a, 0xcc, 0xc7, 0xda, 0xd8 );

enum {
    MF_ACTIVATE_CUSTOM_MIXER_ALLOWFAIL = 0x1
};

enum {
    MF_ACTIVATE_CUSTOM_PRESENTER_ALLOWFAIL = 0x1
};

EXTERN_GUID( MF_ACTIVATE_MFT_LOCKED,  0xc1f6093c, 0x7f65, 0x4fbd, 0x9e, 0x39, 0x5f, 0xae, 0xc3, 0xc4, 0xfb, 0xd7 );

EXTERN_GUID( MF_ACTIVATE_VIDEO_WINDOW, 0x9a2dbbdd, 0xf57e, 0x4162, 0x82, 0xb9, 0x68, 0x31, 0x37, 0x76, 0x82, 0xd3 );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum _MFSHUTDOWN_STATUS {
    MFSHUTDOWN_INITIATED = 0,
    MFSHUTDOWN_COMPLETED = 1
} MFSHUTDOWN_STATUS;

/*****************************************************************************
 * IMFShutdown interface
 */
#ifndef __IMFShutdown_INTERFACE_DEFINED__
#define __IMFShutdown_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFShutdown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFShutdownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFShutdown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFShutdown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFShutdown *This);

    /*** IMFShutdown methods ***/
    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFShutdown *This);

    HRESULT (STDMETHODCALLTYPE *GetShutdownStatus)(
        IMFShutdown *This,
        MFSHUTDOWN_STATUS *pStatus);

    END_INTERFACE
} IMFShutdownVtbl;

interface IMFShutdown {
    CONST_VTBL IMFShutdownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFShutdown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFShutdown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFShutdown_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFShutdown methods ***/
#define IMFShutdown_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#define IMFShutdown_GetShutdownStatus(This,pStatus) \
    ((This)->lpVtbl->GetShutdownStatus(This,pStatus))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFShutdown_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI
MFShutdownObject(
    IUnknown * pUnk );

STDAPI
MFCreateAudioRenderer(
    IMFAttributes* pAudioAttributes,
     IMFMediaSink** ppSink
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region PC Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)

STDAPI
MFCreateAudioRendererActivate(
     IMFActivate ** ppActivate
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_FLAGS, 0xede4b5e0, 0xf805, 0x4d6c, 0x99, 0xb3, 0xdb, 0x01, 0xbf, 0x95, 0xdf, 0xab);

#define    MF_AUDIO_RENDERER_ATTRIBUTE_FLAGS_CROSSPROCESS          0x00000001

#define    MF_AUDIO_RENDERER_ATTRIBUTE_FLAGS_NOPERSIST          0x00000002

#if (WINVER >= _WIN32_WINNT_WIN7)

#define    MF_AUDIO_RENDERER_ATTRIBUTE_FLAGS_DONT_ALLOW_FORMAT_CHANGES          0x00000004
#endif // (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_SESSION_ID, 0xede4b5e3, 0xf805, 0x4d6c, 0x99, 0xb3, 0xdb, 0x01, 0xbf, 0x95, 0xdf, 0xab);

EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ID, 0xb10aaec3, 0xef71, 0x4cc3, 0xb8, 0x73, 0x5, 0xa9, 0xa0, 0x8b, 0x9f, 0x8e);

EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ROLE, 0x6ba644ff, 0x27c5, 0x4d02, 0x98, 0x87, 0xc2, 0x86, 0x19, 0xfd, 0xb9, 0x1b);

EXTERN_GUID( MF_AUDIO_RENDERER_ATTRIBUTE_STREAM_CATEGORY, 0xa9770471, 0x92ec, 0x4df4, 0x94, 0xfe, 0x81, 0xc3, 0x6f, 0xc, 0x3a, 0x7a);

STDAPI
MFCreateVideoRendererActivate(
     HWND hwndVideo,
     IMFActivate ** ppActivate
    );

#if (WINVER >= _WIN32_WINNT_WIN7)

STDAPI
MFCreateMPEG4MediaSink(
     IMFByteStream* pIByteStream,
     IMFMediaType* pVideoMediaType,
     IMFMediaType* pAudioMediaType,
     IMFMediaSink** ppIMediaSink
    );

STDAPI
MFCreate3GPMediaSink(
     IMFByteStream* pIByteStream,
     IMFMediaType* pVideoMediaType,
     IMFMediaType* pAudioMediaType,
     IMFMediaSink** ppIMediaSink
    );

STDAPI
MFCreateMP3MediaSink(
     IMFByteStream* pTargetByteStream,
     IMFMediaSink** ppMediaSink
    );
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if (WINVER >= _WIN32_WINNT_WIN8)

STDAPI
MFCreateAC3MediaSink(
     IMFByteStream* pTargetByteStream,
     IMFMediaType* pAudioMediaType,
      IMFMediaSink** ppMediaSink
    );

STDAPI
MFCreateADTSMediaSink(
     IMFByteStream* pTargetByteStream,
     IMFMediaType* pAudioMediaType,
      IMFMediaSink** ppMediaSink
    );

STDAPI
MFCreateMuxSink(
     GUID guidOutputSubType,
     IMFAttributes* pOutputAttributes,
     IMFByteStream* pOutputByteStream,
     IMFMediaSink** ppMuxSink
    );

STDAPI
MFCreateFMPEG4MediaSink(
     IMFByteStream* pIByteStream,
     IMFMediaType* pVideoMediaType,
     IMFMediaType* pAudioMediaType,
     IMFMediaSink** ppIMediaSink
    );

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#if (WINVER >= _WIN32_WINNT_WINBLUE)

STDAPI
MFCreateAVIMediaSink(
     IMFByteStream* pIByteStream,
     IMFMediaType* pVideoMediaType,
     IMFMediaType* pAudioMediaType,
     IMFMediaSink** ppIMediaSink
    );

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

#if (WINVER >= _WIN32_WINNT_WINBLUE)

STDAPI
MFCreateWAVEMediaSink(
     IMFByteStream* pTargetByteStream,
     IMFMediaType* pAudioMediaType,
      IMFMediaSink** ppMediaSink
    );

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

/*****************************************************************************
 * IMFTopoLoader interface
 */
#ifndef __IMFTopoLoader_INTERFACE_DEFINED__
#define __IMFTopoLoader_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTopoLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTopoLoaderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTopoLoader *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTopoLoader *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTopoLoader *This);

    /*** IMFTopoLoader methods ***/
    HRESULT (STDMETHODCALLTYPE *Load)(
        IMFTopoLoader *This,
        IMFTopology *pInputTopo,
        IMFTopology **ppOutputTopo,
        IMFTopology *pCurrentTopo);

    END_INTERFACE
} IMFTopoLoaderVtbl;

interface IMFTopoLoader {
    CONST_VTBL IMFTopoLoaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTopoLoader_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTopoLoader_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTopoLoader_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTopoLoader methods ***/
#define IMFTopoLoader_Load(This,pInputTopo,ppOutputTopo,pCurrentTopo) \
    ((This)->lpVtbl->Load(This,pInputTopo,ppOutputTopo,pCurrentTopo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTopoLoader_INTERFACE_DEFINED__ */

STDAPI MFCreateTopoLoader(
     IMFTopoLoader ** ppObj );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFContentProtectionManager interface
 */
#ifndef __IMFContentProtectionManager_INTERFACE_DEFINED__
#define __IMFContentProtectionManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFContentProtectionManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFContentProtectionManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFContentProtectionManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFContentProtectionManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFContentProtectionManager *This);

    /*** IMFContentProtectionManager methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginEnableContent)(
        IMFContentProtectionManager *This,
        IMFActivate *pEnablerActivate,
        IMFTopology *pTopo,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndEnableContent)(
        IMFContentProtectionManager *This,
        IMFAsyncResult *pResult);

    END_INTERFACE
} IMFContentProtectionManagerVtbl;

interface IMFContentProtectionManager {
    CONST_VTBL IMFContentProtectionManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFContentProtectionManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFContentProtectionManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFContentProtectionManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFContentProtectionManager methods ***/
#define IMFContentProtectionManager_BeginEnableContent(This,pEnablerActivate,pTopo,pCallback,punkState) \
    ((This)->lpVtbl->BeginEnableContent(This,pEnablerActivate,pTopo,pCallback,punkState))
#define IMFContentProtectionManager_EndEnableContent(This,pResult) \
    ((This)->lpVtbl->EndEnableContent(This,pResult))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_RemoteBeginEnableContent_Proxy(
    IMFContentProtectionManager *This,
    REFCLSID clsidType,
    BYTE *pbData,
    DWORD cbData,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFContentProtectionManager_RemoteBeginEnableContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFContentProtectionManager_RemoteEndEnableContent_Proxy(
    IMFContentProtectionManager *This,
    IUnknown *pResult);

void __RPC_STUB IMFContentProtectionManager_RemoteEndEnableContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFContentProtectionManager_BeginEnableContent_Proxy(
    IMFActivate *pEnablerActivate,
    IMFTopology *pTopo,
    IMFAsyncCallback *pCallback,
    IUnknown *punkState);
HRESULT IMFContentProtectionManager_BeginEnableContent_Stub(
    REFCLSID clsidType,
    BYTE *pbData,
    DWORD cbData,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFContentProtectionManager_EndEnableContent_Proxy(
    IMFAsyncResult *pResult);
HRESULT IMFContentProtectionManager_EndEnableContent_Stub(
    IUnknown *pResult);
#endif /* __IMFContentProtectionManager_INTERFACE_DEFINED__ */

typedef enum __POIDL_mfidl_tag_0000001A {
    MF_LICENSE_URL_UNTRUSTED = 0,
    MF_LICENSE_URL_TRUSTED = 1,
    MF_LICENSE_URL_TAMPERED = 2
} MF_URL_TRUST_STATUS;

/*****************************************************************************
 * IMFContentEnabler interface
 */
#ifndef __IMFContentEnabler_INTERFACE_DEFINED__
#define __IMFContentEnabler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFContentEnabler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFContentEnablerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFContentEnabler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFContentEnabler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFContentEnabler *This);

    /*** IMFContentEnabler methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEnableType)(
        IMFContentEnabler *This,
        GUID *pType);

    HRESULT (STDMETHODCALLTYPE *GetEnableURL)(
        IMFContentEnabler *This,
        LPWSTR *ppwszURL,
        DWORD *pcchURL,
        MF_URL_TRUST_STATUS *pTrustStatus);

    HRESULT (STDMETHODCALLTYPE *GetEnableData)(
        IMFContentEnabler *This,
        BYTE **ppbData,
        DWORD *pcbData);

    HRESULT (STDMETHODCALLTYPE *IsAutomaticSupported)(
        IMFContentEnabler *This,
        BOOL *pfAutomatic);

    HRESULT (STDMETHODCALLTYPE *AutomaticEnable)(
        IMFContentEnabler *This);

    HRESULT (STDMETHODCALLTYPE *MonitorEnable)(
        IMFContentEnabler *This);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IMFContentEnabler *This);

    END_INTERFACE
} IMFContentEnablerVtbl;

interface IMFContentEnabler {
    CONST_VTBL IMFContentEnablerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFContentEnabler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFContentEnabler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFContentEnabler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFContentEnabler methods ***/
#define IMFContentEnabler_GetEnableType(This,pType) \
    ((This)->lpVtbl->GetEnableType(This,pType))
#define IMFContentEnabler_GetEnableURL(This,ppwszURL,pcchURL,pTrustStatus) \
    ((This)->lpVtbl->GetEnableURL(This,ppwszURL,pcchURL,pTrustStatus))
#define IMFContentEnabler_GetEnableData(This,ppbData,pcbData) \
    ((This)->lpVtbl->GetEnableData(This,ppbData,pcbData))
#define IMFContentEnabler_IsAutomaticSupported(This,pfAutomatic) \
    ((This)->lpVtbl->IsAutomaticSupported(This,pfAutomatic))
#define IMFContentEnabler_AutomaticEnable(This) \
    ((This)->lpVtbl->AutomaticEnable(This))
#define IMFContentEnabler_MonitorEnable(This) \
    ((This)->lpVtbl->MonitorEnable(This))
#define IMFContentEnabler_Cancel(This) \
    ((This)->lpVtbl->Cancel(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFContentEnabler_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( MFENABLETYPE_WMDRMV1_LicenseAcquisition, 0x4ff6eeaf, 0xb43, 0x4797, 0x9b, 0x85, 0xab, 0xf3, 0x18, 0x15, 0xe7, 0xb0);
EXTERN_GUID( MFENABLETYPE_WMDRMV7_LicenseAcquisition, 0x3306df, 0x4a06, 0x4884,0xa0, 0x97, 0xef, 0x6d, 0x22, 0xec, 0x84, 0xa3);
EXTERN_GUID( MFENABLETYPE_WMDRMV7_Individualization, 0xacd2c84a, 0xb303, 0x4f65, 0xbc, 0x2c, 0x2c, 0x84, 0x8d, 0x1, 0xa9, 0x89);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MFENABLETYPE_MF_UpdateRevocationInformation, 0xe558b0b5, 0xb3c4, 0x44a0, 0x92, 0x4c, 0x50, 0xd1, 0x78, 0x93, 0x23, 0x85);
EXTERN_GUID( MFENABLETYPE_MF_UpdateUntrustedComponent, 0x9879f3d6, 0xcee2, 0x48e6, 0xb5, 0x73, 0x97, 0x67, 0xab, 0x17, 0x2f, 0x16);
EXTERN_GUID( MFENABLETYPE_MF_RebootRequired, 0x6d4d3d4b, 0x0ece, 0x4652, 0x8b, 0x3a, 0xf2, 0xd2, 0x42, 0x60, 0xd8, 0x87);

//
// Structs that contain information about revoked or unsigned binaries,
// returned by the IMFContentEnabler::GetEnableData() method of
// the Revocation content enabler
//

#ifndef MFRR_INFO_VERSION
#define MFRR_INFO_VERSION 0
#endif

//
// The values for MFRR_COMPONENT_HASH_INFO.ulReason
//

#define MF_USER_MODE_COMPONENT_LOAD        0x00000001
#define MF_KERNEL_MODE_COMPONENT_LOAD      0x00000002
#define MF_GRL_LOAD_FAILED                 0x00000010
#define MF_INVALID_GRL_SIGNATURE           0x00000020
#define MF_GRL_ABSENT                      0x00001000
#define MF_COMPONENT_REVOKED               0x00002000
#define MF_COMPONENT_INVALID_EKU           0x00004000
#define MF_COMPONENT_CERT_REVOKED          0x00008000
#define MF_COMPONENT_INVALID_ROOT          0x00010000
#define MF_COMPONENT_HS_CERT_REVOKED       0x00020000
#define MF_COMPONENT_LS_CERT_REVOKED       0x00040000
#define MF_BOOT_DRIVER_VERIFICATION_FAILED 0x00100000
#define MF_TEST_SIGNED_COMPONENT_LOADING   0x01000000
#define MF_MINCRYPT_FAILURE                0x10000000

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

//
// STR_HASH_LEN: Number of characters required to represent a SHA-1 hash
// (RTL_MAX_HASH_LEN_V1) as a string of the form "0x5a3b53463b672a4f..."
// Each byte of a SHA-1 hash takes two characters to represent, and
// we add in two leading characters "0x" as well as the NULL terminator
//

#define SHA_HASH_LEN   20

#define STR_HASH_LEN   (SHA_HASH_LEN*2 + 3)

typedef struct _MFRR_COMPONENT_HASH_INFO
{
    // Reason for failure (revoked or unsigned or badly signed).
    DWORD ulReason;
    // Header hash of the component
    WCHAR rgHeaderHash[STR_HASH_LEN];
    // Hash of public key if one of the certificates
    // in the signing certificate chain is revoked
    WCHAR rgPublicKeyHash[STR_HASH_LEN];
    // Component name (full path name)
    WCHAR wszName[MAX_PATH];
}   MFRR_COMPONENT_HASH_INFO, *PMFRR_COMPONENT_HASH_INFO;

typedef struct _MFRR_COMPONENTS
{
    // Version number
    DWORD dwRRInfoVersion;
    // Number of components in list
    DWORD dwRRComponents;
    // points to the end of this structure that has
    // allocated memory for the array of component info structures
    PMFRR_COMPONENT_HASH_INFO pRRComponents;
}   MFRR_COMPONENTS, *PMFRR_COMPONENTS;

#pragma pack ( push )
#pragma pack ( 1 )
typedef struct _ASFFlatPicture
{
    //
    // Direct mapped fields
    //
    BYTE bPictureType;
    DWORD dwDataLen;
}   ASF_FLAT_PICTURE;
#pragma pack ( pop )

#pragma pack ( push )
#pragma pack ( 1 )
typedef struct _ASFFlatSynchronisedLyrics
{
    //
    // Direct mapped fields
    //
    BYTE bTimeStampFormat;
    BYTE bContentType;
    DWORD dwLyricsLen;
}   ASF_FLAT_SYNCHRONISED_LYRICS;
#pragma pack ( pop )

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFMetadata interface
 */
#ifndef __IMFMetadata_INTERFACE_DEFINED__
#define __IMFMetadata_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMetadataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMetadata *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMetadata *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMetadata *This);

    /*** IMFMetadata methods ***/
    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IMFMetadata *This,
        LPCWSTR pwszRFC1766);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IMFMetadata *This,
        LPWSTR *ppwszRFC1766);

    HRESULT (STDMETHODCALLTYPE *GetAllLanguages)(
        IMFMetadata *This,
        PROPVARIANT *ppvLanguages);

    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IMFMetadata *This,
        LPCWSTR pwszName,
        const PROPVARIANT *ppvValue);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IMFMetadata *This,
        LPCWSTR pwszName,
        PROPVARIANT *ppvValue);

    HRESULT (STDMETHODCALLTYPE *DeleteProperty)(
        IMFMetadata *This,
        LPCWSTR pwszName);

    HRESULT (STDMETHODCALLTYPE *GetAllPropertyNames)(
        IMFMetadata *This,
        PROPVARIANT *ppvNames);

    END_INTERFACE
} IMFMetadataVtbl;

interface IMFMetadata {
    CONST_VTBL IMFMetadataVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMetadata_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMetadata_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMetadata_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMetadata methods ***/
#define IMFMetadata_SetLanguage(This,pwszRFC1766) \
    ((This)->lpVtbl->SetLanguage(This,pwszRFC1766))
#define IMFMetadata_GetLanguage(This,ppwszRFC1766) \
    ((This)->lpVtbl->GetLanguage(This,ppwszRFC1766))
#define IMFMetadata_GetAllLanguages(This,ppvLanguages) \
    ((This)->lpVtbl->GetAllLanguages(This,ppvLanguages))
#define IMFMetadata_SetProperty(This,pwszName,ppvValue) \
    ((This)->lpVtbl->SetProperty(This,pwszName,ppvValue))
#define IMFMetadata_GetProperty(This,pwszName,ppvValue) \
    ((This)->lpVtbl->GetProperty(This,pwszName,ppvValue))
#define IMFMetadata_DeleteProperty(This,pwszName) \
    ((This)->lpVtbl->DeleteProperty(This,pwszName))
#define IMFMetadata_GetAllPropertyNames(This,ppvNames) \
    ((This)->lpVtbl->GetAllPropertyNames(This,ppvNames))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMetadata_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMetadataProvider interface
 */
#ifndef __IMFMetadataProvider_INTERFACE_DEFINED__
#define __IMFMetadataProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMetadataProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMetadataProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMetadataProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMetadataProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMetadataProvider *This);

    /*** IMFMetadataProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMFMetadata)(
        IMFMetadataProvider *This,
        IMFPresentationDescriptor *pPresentationDescriptor,
        DWORD dwStreamIdentifier,
        DWORD dwFlags,
        IMFMetadata **ppMFMetadata);

    END_INTERFACE
} IMFMetadataProviderVtbl;

interface IMFMetadataProvider {
    CONST_VTBL IMFMetadataProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMetadataProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMetadataProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMetadataProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMetadataProvider methods ***/
#define IMFMetadataProvider_GetMFMetadata(This,pPresentationDescriptor,dwStreamIdentifier,dwFlags,ppMFMetadata) \
    ((This)->lpVtbl->GetMFMetadata(This,pPresentationDescriptor,dwStreamIdentifier,dwFlags,ppMFMetadata))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMetadataProvider_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_METADATA_PROVIDER_SERVICE, 0xdb214084, 0x58a4, 0x4d2e, 0xb8, 0x4f, 0x6f, 0x75, 0x5b, 0x2f, 0x7a, 0xd);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MF_PROPERTY_HANDLER_SERVICE, 0xa3face02, 0x32b8, 0x41dd, 0x90, 0xe7, 0x5f, 0xef, 0x7c, 0x89, 0x91, 0xb5);
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum _MFRATE_DIRECTION {
    MFRATE_FORWARD = 0,
    MFRATE_REVERSE = 1
} MFRATE_DIRECTION;

/*****************************************************************************
 * IMFRateSupport interface
 */
#ifndef __IMFRateSupport_INTERFACE_DEFINED__
#define __IMFRateSupport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRateSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRateSupportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRateSupport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRateSupport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRateSupport *This);

    /*** IMFRateSupport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSlowestRate)(
        IMFRateSupport *This,
        MFRATE_DIRECTION eDirection,
        BOOL fThin,
        float *pflRate);

    HRESULT (STDMETHODCALLTYPE *GetFastestRate)(
        IMFRateSupport *This,
        MFRATE_DIRECTION eDirection,
        BOOL fThin,
        float *pflRate);

    HRESULT (STDMETHODCALLTYPE *IsRateSupported)(
        IMFRateSupport *This,
        BOOL fThin,
        float flRate,
        float *pflNearestSupportedRate);

    END_INTERFACE
} IMFRateSupportVtbl;

interface IMFRateSupport {
    CONST_VTBL IMFRateSupportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRateSupport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRateSupport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRateSupport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRateSupport methods ***/
#define IMFRateSupport_GetSlowestRate(This,eDirection,fThin,pflRate) \
    ((This)->lpVtbl->GetSlowestRate(This,eDirection,fThin,pflRate))
#define IMFRateSupport_GetFastestRate(This,eDirection,fThin,pflRate) \
    ((This)->lpVtbl->GetFastestRate(This,eDirection,fThin,pflRate))
#define IMFRateSupport_IsRateSupported(This,fThin,flRate,pflNearestSupportedRate) \
    ((This)->lpVtbl->IsRateSupported(This,fThin,flRate,pflNearestSupportedRate))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRateSupport_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_RATE_CONTROL_SERVICE, 0x866fa297, 0xb802, 0x4bf8, 0x9d, 0xc9, 0x5e, 0x3b, 0x6a, 0x9f, 0x53, 0xc9);

/*****************************************************************************
 * IMFRateControl interface
 */
#ifndef __IMFRateControl_INTERFACE_DEFINED__
#define __IMFRateControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRateControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRateControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRateControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRateControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRateControl *This);

    /*** IMFRateControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetRate)(
        IMFRateControl *This,
        BOOL fThin,
        float flRate);

    HRESULT (STDMETHODCALLTYPE *GetRate)(
        IMFRateControl *This,
        BOOL *pfThin,
        float *pflRate);

    END_INTERFACE
} IMFRateControlVtbl;

interface IMFRateControl {
    CONST_VTBL IMFRateControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRateControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRateControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRateControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRateControl methods ***/
#define IMFRateControl_SetRate(This,fThin,flRate) \
    ((This)->lpVtbl->SetRate(This,fThin,flRate))
#define IMFRateControl_GetRate(This,pfThin,pflRate) \
    ((This)->lpVtbl->GetRate(This,pfThin,pflRate))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRateControl_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)

/*****************************************************************************
 * IMFTimecodeTranslate interface
 */
#ifndef __IMFTimecodeTranslate_INTERFACE_DEFINED__
#define __IMFTimecodeTranslate_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTimecodeTranslate;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTimecodeTranslateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTimecodeTranslate *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTimecodeTranslate *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTimecodeTranslate *This);

    /*** IMFTimecodeTranslate methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginConvertTimecodeToHNS)(
        IMFTimecodeTranslate *This,
        const PROPVARIANT *pPropVarTimecode,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndConvertTimecodeToHNS)(
        IMFTimecodeTranslate *This,
        IMFAsyncResult *pResult,
        MFTIME *phnsTime);

    HRESULT (STDMETHODCALLTYPE *BeginConvertHNSToTimecode)(
        IMFTimecodeTranslate *This,
        MFTIME hnsTime,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndConvertHNSToTimecode)(
        IMFTimecodeTranslate *This,
        IMFAsyncResult *pResult,
        PROPVARIANT *pPropVarTimecode);

    END_INTERFACE
} IMFTimecodeTranslateVtbl;

interface IMFTimecodeTranslate {
    CONST_VTBL IMFTimecodeTranslateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTimecodeTranslate_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTimecodeTranslate_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTimecodeTranslate_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTimecodeTranslate methods ***/
#define IMFTimecodeTranslate_BeginConvertTimecodeToHNS(This,pPropVarTimecode,pCallback,punkState) \
    ((This)->lpVtbl->BeginConvertTimecodeToHNS(This,pPropVarTimecode,pCallback,punkState))
#define IMFTimecodeTranslate_EndConvertTimecodeToHNS(This,pResult,phnsTime) \
    ((This)->lpVtbl->EndConvertTimecodeToHNS(This,pResult,phnsTime))
#define IMFTimecodeTranslate_BeginConvertHNSToTimecode(This,hnsTime,pCallback,punkState) \
    ((This)->lpVtbl->BeginConvertHNSToTimecode(This,hnsTime,pCallback,punkState))
#define IMFTimecodeTranslate_EndConvertHNSToTimecode(This,pResult,pPropVarTimecode) \
    ((This)->lpVtbl->EndConvertHNSToTimecode(This,pResult,pPropVarTimecode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTimecodeTranslate_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_TIMECODE_SERVICE, 0xa0d502a7, 0x0eb3, 0x4885, 0xb1, 0xb9, 0x9f, 0xeb, 0x0d, 0x08, 0x34, 0x54 );
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if (WINVER >= _WIN32_WINNT_WIN8)

/*****************************************************************************
 * IMFSeekInfo interface
 */
#ifndef __IMFSeekInfo_INTERFACE_DEFINED__
#define __IMFSeekInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSeekInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSeekInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSeekInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSeekInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSeekInfo *This);

    /*** IMFSeekInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNearestKeyFrames)(
        IMFSeekInfo *This,
        const GUID *pguidTimeFormat,
        const PROPVARIANT *pvarStartPosition,
        PROPVARIANT *pvarPreviousKeyFrame,
        PROPVARIANT *pvarNextKeyFrame);

    END_INTERFACE
} IMFSeekInfoVtbl;

interface IMFSeekInfo {
    CONST_VTBL IMFSeekInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSeekInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSeekInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSeekInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSeekInfo methods ***/
#define IMFSeekInfo_GetNearestKeyFrames(This,pguidTimeFormat,pvarStartPosition,pvarPreviousKeyFrame,pvarNextKeyFrame) \
    ((This)->lpVtbl->GetNearestKeyFrames(This,pguidTimeFormat,pvarStartPosition,pvarPreviousKeyFrame,pvarNextKeyFrame))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSeekInfo_INTERFACE_DEFINED__ */

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN8)
EXTERN_C const GUID MF_SCRUBBING_SERVICE;
#endif // (WINVER >= _WIN32_WINNT_WIN8)

/*****************************************************************************
 * IMFSimpleAudioVolume interface
 */
#ifndef __IMFSimpleAudioVolume_INTERFACE_DEFINED__
#define __IMFSimpleAudioVolume_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSimpleAudioVolume;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSimpleAudioVolumeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSimpleAudioVolume *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSimpleAudioVolume *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSimpleAudioVolume *This);

    /*** IMFSimpleAudioVolume methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMasterVolume)(
        IMFSimpleAudioVolume *This,
        float fLevel);

    HRESULT (STDMETHODCALLTYPE *GetMasterVolume)(
        IMFSimpleAudioVolume *This,
        float *pfLevel);

    HRESULT (STDMETHODCALLTYPE *SetMute)(
        IMFSimpleAudioVolume *This,
        const BOOL bMute);

    HRESULT (STDMETHODCALLTYPE *GetMute)(
        IMFSimpleAudioVolume *This,
        BOOL *pbMute);

    END_INTERFACE
} IMFSimpleAudioVolumeVtbl;

interface IMFSimpleAudioVolume {
    CONST_VTBL IMFSimpleAudioVolumeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSimpleAudioVolume_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSimpleAudioVolume_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSimpleAudioVolume_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSimpleAudioVolume methods ***/
#define IMFSimpleAudioVolume_SetMasterVolume(This,fLevel) \
    ((This)->lpVtbl->SetMasterVolume(This,fLevel))
#define IMFSimpleAudioVolume_GetMasterVolume(This,pfLevel) \
    ((This)->lpVtbl->GetMasterVolume(This,pfLevel))
#define IMFSimpleAudioVolume_SetMute(This,bMute) \
    ((This)->lpVtbl->SetMute(This,bMute))
#define IMFSimpleAudioVolume_GetMute(This,pbMute) \
    ((This)->lpVtbl->GetMute(This,pbMute))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSimpleAudioVolume_INTERFACE_DEFINED__ */

EXTERN_GUID( MR_POLICY_VOLUME_SERVICE, 0x1abaa2ac, 0x9d3b, 0x47c6, 0xab, 0x48, 0xc5, 0x95, 0x6, 0xde, 0x78, 0x4d);

#if (WINVER >= _WIN32_WINNT_WIN8)

EXTERN_GUID( MR_CAPTURE_POLICY_VOLUME_SERVICE, 0x24030acd, 0x107a, 0x4265, 0x97, 0x5c, 0x41, 0x4e, 0x33, 0xe6, 0x5f, 0x2a);
#endif // (WINVER >= _WIN32_WINNT_WIN8)

/*****************************************************************************
 * IMFAudioStreamVolume interface
 */
#ifndef __IMFAudioStreamVolume_INTERFACE_DEFINED__
#define __IMFAudioStreamVolume_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAudioStreamVolume;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAudioStreamVolumeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAudioStreamVolume *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAudioStreamVolume *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAudioStreamVolume *This);

    /*** IMFAudioStreamVolume methods ***/
    HRESULT (STDMETHODCALLTYPE *GetChannelCount)(
        IMFAudioStreamVolume *This,
        UINT32 *pdwCount);

    HRESULT (STDMETHODCALLTYPE *SetChannelVolume)(
        IMFAudioStreamVolume *This,
        UINT32 dwIndex,
        const float fLevel);

    HRESULT (STDMETHODCALLTYPE *GetChannelVolume)(
        IMFAudioStreamVolume *This,
        UINT32 dwIndex,
        float *pfLevel);

    HRESULT (STDMETHODCALLTYPE *SetAllVolumes)(
        IMFAudioStreamVolume *This,
        UINT32 dwCount,
        const float *pfVolumes);

    HRESULT (STDMETHODCALLTYPE *GetAllVolumes)(
        IMFAudioStreamVolume *This,
        UINT32 dwCount,
        float *pfVolumes);

    END_INTERFACE
} IMFAudioStreamVolumeVtbl;

interface IMFAudioStreamVolume {
    CONST_VTBL IMFAudioStreamVolumeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAudioStreamVolume_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAudioStreamVolume_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAudioStreamVolume_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAudioStreamVolume methods ***/
#define IMFAudioStreamVolume_GetChannelCount(This,pdwCount) \
    ((This)->lpVtbl->GetChannelCount(This,pdwCount))
#define IMFAudioStreamVolume_SetChannelVolume(This,dwIndex,fLevel) \
    ((This)->lpVtbl->SetChannelVolume(This,dwIndex,fLevel))
#define IMFAudioStreamVolume_GetChannelVolume(This,dwIndex,pfLevel) \
    ((This)->lpVtbl->GetChannelVolume(This,dwIndex,pfLevel))
#define IMFAudioStreamVolume_SetAllVolumes(This,dwCount,pfVolumes) \
    ((This)->lpVtbl->SetAllVolumes(This,dwCount,pfVolumes))
#define IMFAudioStreamVolume_GetAllVolumes(This,dwCount,pfVolumes) \
    ((This)->lpVtbl->GetAllVolumes(This,dwCount,pfVolumes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAudioStreamVolume_INTERFACE_DEFINED__ */

EXTERN_GUID( MR_STREAM_VOLUME_SERVICE, 0xf8b5fa2f, 0x32ef, 0x46f5, 0xb1, 0x72, 0x13, 0x21, 0x21, 0x2f, 0xb2, 0xc4);

/*****************************************************************************
 * IMFAudioPolicy interface
 */
#ifndef __IMFAudioPolicy_INTERFACE_DEFINED__
#define __IMFAudioPolicy_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAudioPolicy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAudioPolicyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAudioPolicy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAudioPolicy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAudioPolicy *This);

    /*** IMFAudioPolicy methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGroupingParam)(
        IMFAudioPolicy *This,
        REFGUID rguidClass);

    HRESULT (STDMETHODCALLTYPE *GetGroupingParam)(
        IMFAudioPolicy *This,
        GUID *pguidClass);

    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        IMFAudioPolicy *This,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IMFAudioPolicy *This,
        LPWSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *SetIconPath)(
        IMFAudioPolicy *This,
        LPCWSTR pszPath);

    HRESULT (STDMETHODCALLTYPE *GetIconPath)(
        IMFAudioPolicy *This,
        LPWSTR *pszPath);

    END_INTERFACE
} IMFAudioPolicyVtbl;

interface IMFAudioPolicy {
    CONST_VTBL IMFAudioPolicyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAudioPolicy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAudioPolicy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAudioPolicy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAudioPolicy methods ***/
#define IMFAudioPolicy_SetGroupingParam(This,rguidClass) \
    ((This)->lpVtbl->SetGroupingParam(This,rguidClass))
#define IMFAudioPolicy_GetGroupingParam(This,pguidClass) \
    ((This)->lpVtbl->GetGroupingParam(This,pguidClass))
#define IMFAudioPolicy_SetDisplayName(This,pszName) \
    ((This)->lpVtbl->SetDisplayName(This,pszName))
#define IMFAudioPolicy_GetDisplayName(This,pszName) \
    ((This)->lpVtbl->GetDisplayName(This,pszName))
#define IMFAudioPolicy_SetIconPath(This,pszPath) \
    ((This)->lpVtbl->SetIconPath(This,pszPath))
#define IMFAudioPolicy_GetIconPath(This,pszPath) \
    ((This)->lpVtbl->GetIconPath(This,pszPath))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAudioPolicy_INTERFACE_DEFINED__ */

EXTERN_GUID( MR_AUDIO_POLICY_SERVICE, 0x911fd737, 0x6775, 0x4ab0, 0xa6, 0x14, 0x29, 0x78, 0x62, 0xfd, 0xac, 0x88);

/*****************************************************************************
 * IMFSampleGrabberSinkCallback interface
 */
#ifndef __IMFSampleGrabberSinkCallback_INTERFACE_DEFINED__
#define __IMFSampleGrabberSinkCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSampleGrabberSinkCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSampleGrabberSinkCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSampleGrabberSinkCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSampleGrabberSinkCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSampleGrabberSinkCallback *This);

    /*** IMFClockStateSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnClockStart)(
        IMFSampleGrabberSinkCallback *This,
        MFTIME hnsSystemTime,
        LONGLONG llClockStartOffset);

    HRESULT (STDMETHODCALLTYPE *OnClockStop)(
        IMFSampleGrabberSinkCallback *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockPause)(
        IMFSampleGrabberSinkCallback *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockRestart)(
        IMFSampleGrabberSinkCallback *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockSetRate)(
        IMFSampleGrabberSinkCallback *This,
        MFTIME hnsSystemTime,
        float flRate);

    /*** IMFSampleGrabberSinkCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnSetPresentationClock)(
        IMFSampleGrabberSinkCallback *This,
        IMFPresentationClock *pPresentationClock);

    HRESULT (STDMETHODCALLTYPE *OnProcessSample)(
        IMFSampleGrabberSinkCallback *This,
        REFGUID guidMajorMediaType,
        DWORD dwSampleFlags,
        LONGLONG llSampleTime,
        LONGLONG llSampleDuration,
        const BYTE *pSampleBuffer,
        DWORD dwSampleSize);

    HRESULT (STDMETHODCALLTYPE *OnShutdown)(
        IMFSampleGrabberSinkCallback *This);

    END_INTERFACE
} IMFSampleGrabberSinkCallbackVtbl;

interface IMFSampleGrabberSinkCallback {
    CONST_VTBL IMFSampleGrabberSinkCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSampleGrabberSinkCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSampleGrabberSinkCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSampleGrabberSinkCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClockStateSink methods ***/
#define IMFSampleGrabberSinkCallback_OnClockStart(This,hnsSystemTime,llClockStartOffset) \
    ((This)->lpVtbl->OnClockStart(This,hnsSystemTime,llClockStartOffset))
#define IMFSampleGrabberSinkCallback_OnClockStop(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockStop(This,hnsSystemTime))
#define IMFSampleGrabberSinkCallback_OnClockPause(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockPause(This,hnsSystemTime))
#define IMFSampleGrabberSinkCallback_OnClockRestart(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockRestart(This,hnsSystemTime))
#define IMFSampleGrabberSinkCallback_OnClockSetRate(This,hnsSystemTime,flRate) \
    ((This)->lpVtbl->OnClockSetRate(This,hnsSystemTime,flRate))
/*** IMFSampleGrabberSinkCallback methods ***/
#define IMFSampleGrabberSinkCallback_OnSetPresentationClock(This,pPresentationClock) \
    ((This)->lpVtbl->OnSetPresentationClock(This,pPresentationClock))
#define IMFSampleGrabberSinkCallback_OnProcessSample(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize) \
    ((This)->lpVtbl->OnProcessSample(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize))
#define IMFSampleGrabberSinkCallback_OnShutdown(This) \
    ((This)->lpVtbl->OnShutdown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSampleGrabberSinkCallback_INTERFACE_DEFINED__ */

STDAPI
MFCreateSampleGrabberSinkActivate(
    IMFMediaType *pIMFMediaType,
    IMFSampleGrabberSinkCallback* pIMFSampleGrabberSinkCallback,
     IMFActivate** ppIActivate
    );

EXTERN_GUID( MF_SAMPLEGRABBERSINK_SAMPLE_TIME_OFFSET, 0x62e3d776, 0x8100, 0x4e03, 0xa6, 0xe8, 0xbd, 0x38, 0x57, 0xac, 0x9c, 0x47);

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MF_SAMPLEGRABBERSINK_IGNORE_CLOCK, 0x0efda2c0, 0x2b69, 0x4e2e, 0xab, 0x8d, 0x46, 0xdc, 0xbf, 0xf7, 0xd2, 0x5d);

/*****************************************************************************
 * IMFSampleGrabberSinkCallback2 interface
 */
#ifndef __IMFSampleGrabberSinkCallback2_INTERFACE_DEFINED__
#define __IMFSampleGrabberSinkCallback2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSampleGrabberSinkCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSampleGrabberSinkCallback2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSampleGrabberSinkCallback2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSampleGrabberSinkCallback2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSampleGrabberSinkCallback2 *This);

    /*** IMFClockStateSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnClockStart)(
        IMFSampleGrabberSinkCallback2 *This,
        MFTIME hnsSystemTime,
        LONGLONG llClockStartOffset);

    HRESULT (STDMETHODCALLTYPE *OnClockStop)(
        IMFSampleGrabberSinkCallback2 *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockPause)(
        IMFSampleGrabberSinkCallback2 *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockRestart)(
        IMFSampleGrabberSinkCallback2 *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockSetRate)(
        IMFSampleGrabberSinkCallback2 *This,
        MFTIME hnsSystemTime,
        float flRate);

    /*** IMFSampleGrabberSinkCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnSetPresentationClock)(
        IMFSampleGrabberSinkCallback2 *This,
        IMFPresentationClock *pPresentationClock);

    HRESULT (STDMETHODCALLTYPE *OnProcessSample)(
        IMFSampleGrabberSinkCallback2 *This,
        REFGUID guidMajorMediaType,
        DWORD dwSampleFlags,
        LONGLONG llSampleTime,
        LONGLONG llSampleDuration,
        const BYTE *pSampleBuffer,
        DWORD dwSampleSize);

    HRESULT (STDMETHODCALLTYPE *OnShutdown)(
        IMFSampleGrabberSinkCallback2 *This);

    /*** IMFSampleGrabberSinkCallback2 methods ***/
    HRESULT (STDMETHODCALLTYPE *OnProcessSampleEx)(
        IMFSampleGrabberSinkCallback2 *This,
        REFGUID guidMajorMediaType,
        DWORD dwSampleFlags,
        LONGLONG llSampleTime,
        LONGLONG llSampleDuration,
        const BYTE *pSampleBuffer,
        DWORD dwSampleSize,
        IMFAttributes *pAttributes);

    END_INTERFACE
} IMFSampleGrabberSinkCallback2Vtbl;

interface IMFSampleGrabberSinkCallback2 {
    CONST_VTBL IMFSampleGrabberSinkCallback2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSampleGrabberSinkCallback2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSampleGrabberSinkCallback2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSampleGrabberSinkCallback2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClockStateSink methods ***/
#define IMFSampleGrabberSinkCallback2_OnClockStart(This,hnsSystemTime,llClockStartOffset) \
    ((This)->lpVtbl->OnClockStart(This,hnsSystemTime,llClockStartOffset))
#define IMFSampleGrabberSinkCallback2_OnClockStop(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockStop(This,hnsSystemTime))
#define IMFSampleGrabberSinkCallback2_OnClockPause(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockPause(This,hnsSystemTime))
#define IMFSampleGrabberSinkCallback2_OnClockRestart(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockRestart(This,hnsSystemTime))
#define IMFSampleGrabberSinkCallback2_OnClockSetRate(This,hnsSystemTime,flRate) \
    ((This)->lpVtbl->OnClockSetRate(This,hnsSystemTime,flRate))
/*** IMFSampleGrabberSinkCallback methods ***/
#define IMFSampleGrabberSinkCallback2_OnSetPresentationClock(This,pPresentationClock) \
    ((This)->lpVtbl->OnSetPresentationClock(This,pPresentationClock))
#define IMFSampleGrabberSinkCallback2_OnProcessSample(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize) \
    ((This)->lpVtbl->OnProcessSample(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize))
#define IMFSampleGrabberSinkCallback2_OnShutdown(This) \
    ((This)->lpVtbl->OnShutdown(This))
/*** IMFSampleGrabberSinkCallback2 methods ***/
#define IMFSampleGrabberSinkCallback2_OnProcessSampleEx(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize,pAttributes) \
    ((This)->lpVtbl->OnProcessSampleEx(This,guidMajorMediaType,dwSampleFlags,llSampleTime,llSampleDuration,pSampleBuffer,dwSampleSize,pAttributes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSampleGrabberSinkCallback2_INTERFACE_DEFINED__ */

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MF_QUALITY_SERVICES, 0xb7e2be11, 0x2f96, 0x4640, 0xb5, 0x2c, 0x28, 0x23, 0x65, 0xbd, 0xf1, 0x6c);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFWorkQueueServices interface
 */
#ifndef __IMFWorkQueueServices_INTERFACE_DEFINED__
#define __IMFWorkQueueServices_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFWorkQueueServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFWorkQueueServicesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFWorkQueueServices *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFWorkQueueServices *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFWorkQueueServices *This);

    /*** IMFWorkQueueServices methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginRegisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServices *This,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndRegisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServices *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *BeginUnregisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServices *This,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndUnregisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServices *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSClass)(
        IMFWorkQueueServices *This,
        DWORD dwTopologyWorkQueueId,
        LPWSTR pwszClass,
        DWORD *pcchClass);

    HRESULT (STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSTaskId)(
        IMFWorkQueueServices *This,
        DWORD dwTopologyWorkQueueId,
        DWORD *pdwTaskId);

    HRESULT (STDMETHODCALLTYPE *BeginRegisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServices *This,
        DWORD dwPlatformWorkQueue,
        LPCWSTR wszClass,
        DWORD dwTaskId,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndRegisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServices *This,
        IMFAsyncResult *pResult,
        DWORD *pdwTaskId);

    HRESULT (STDMETHODCALLTYPE *BeginUnregisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServices *This,
        DWORD dwPlatformWorkQueue,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndUnregisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServices *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *GetPlaftormWorkQueueMMCSSClass)(
        IMFWorkQueueServices *This,
        DWORD dwPlatformWorkQueueId,
        LPWSTR pwszClass,
        DWORD *pcchClass);

    HRESULT (STDMETHODCALLTYPE *GetPlatformWorkQueueMMCSSTaskId)(
        IMFWorkQueueServices *This,
        DWORD dwPlatformWorkQueueId,
        DWORD *pdwTaskId);

    END_INTERFACE
} IMFWorkQueueServicesVtbl;

interface IMFWorkQueueServices {
    CONST_VTBL IMFWorkQueueServicesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFWorkQueueServices_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFWorkQueueServices_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFWorkQueueServices_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFWorkQueueServices methods ***/
#define IMFWorkQueueServices_BeginRegisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) \
    ((This)->lpVtbl->BeginRegisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState))
#define IMFWorkQueueServices_EndRegisterTopologyWorkQueuesWithMMCSS(This,pResult) \
    ((This)->lpVtbl->EndRegisterTopologyWorkQueuesWithMMCSS(This,pResult))
#define IMFWorkQueueServices_BeginUnregisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) \
    ((This)->lpVtbl->BeginUnregisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState))
#define IMFWorkQueueServices_EndUnregisterTopologyWorkQueuesWithMMCSS(This,pResult) \
    ((This)->lpVtbl->EndUnregisterTopologyWorkQueuesWithMMCSS(This,pResult))
#define IMFWorkQueueServices_GetTopologyWorkQueueMMCSSClass(This,dwTopologyWorkQueueId,pwszClass,pcchClass) \
    ((This)->lpVtbl->GetTopologyWorkQueueMMCSSClass(This,dwTopologyWorkQueueId,pwszClass,pcchClass))
#define IMFWorkQueueServices_GetTopologyWorkQueueMMCSSTaskId(This,dwTopologyWorkQueueId,pdwTaskId) \
    ((This)->lpVtbl->GetTopologyWorkQueueMMCSSTaskId(This,dwTopologyWorkQueueId,pdwTaskId))
#define IMFWorkQueueServices_BeginRegisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,wszClass,dwTaskId,pCallback,pState) \
    ((This)->lpVtbl->BeginRegisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,wszClass,dwTaskId,pCallback,pState))
#define IMFWorkQueueServices_EndRegisterPlatformWorkQueueWithMMCSS(This,pResult,pdwTaskId) \
    ((This)->lpVtbl->EndRegisterPlatformWorkQueueWithMMCSS(This,pResult,pdwTaskId))
#define IMFWorkQueueServices_BeginUnregisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,pCallback,pState) \
    ((This)->lpVtbl->BeginUnregisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,pCallback,pState))
#define IMFWorkQueueServices_EndUnregisterPlatformWorkQueueWithMMCSS(This,pResult) \
    ((This)->lpVtbl->EndUnregisterPlatformWorkQueueWithMMCSS(This,pResult))
#define IMFWorkQueueServices_GetPlaftormWorkQueueMMCSSClass(This,dwPlatformWorkQueueId,pwszClass,pcchClass) \
    ((This)->lpVtbl->GetPlaftormWorkQueueMMCSSClass(This,dwPlatformWorkQueueId,pwszClass,pcchClass))
#define IMFWorkQueueServices_GetPlatformWorkQueueMMCSSTaskId(This,dwPlatformWorkQueueId,pdwTaskId) \
    ((This)->lpVtbl->GetPlatformWorkQueueMMCSSTaskId(This,dwPlatformWorkQueueId,pdwTaskId))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFWorkQueueServices_RemoteBeginRegisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    IUnknown *pResult);

void __RPC_STUB IMFWorkQueueServices_RemoteEndRegisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFWorkQueueServices_RemoteBeginUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    IUnknown *pResult);

void __RPC_STUB IMFWorkQueueServices_RemoteEndUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginRegisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    DWORD dwPlatformWorkQueue,
    LPCWSTR wszClass,
    DWORD dwTaskId,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFWorkQueueServices_RemoteBeginRegisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndRegisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    IUnknown *pResult,
    DWORD *pdwTaskId);

void __RPC_STUB IMFWorkQueueServices_RemoteEndRegisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteBeginUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    DWORD dwPlatformWorkQueue,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFWorkQueueServices_RemoteBeginUnregisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFWorkQueueServices_RemoteEndUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFWorkQueueServices *This,
    IUnknown *pResult);

void __RPC_STUB IMFWorkQueueServices_RemoteEndUnregisterPlatformWorkQueueWithMMCSS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFWorkQueueServices_BeginRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFAsyncCallback *pCallback,
    IUnknown *pState);
HRESULT IMFWorkQueueServices_BeginRegisterTopologyWorkQueuesWithMMCSS_Stub(
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFWorkQueueServices_EndRegisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFAsyncResult *pResult);
HRESULT IMFWorkQueueServices_EndRegisterTopologyWorkQueuesWithMMCSS_Stub(
    IUnknown *pResult);
HRESULT IMFWorkQueueServices_BeginUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFAsyncCallback *pCallback,
    IUnknown *pState);
HRESULT IMFWorkQueueServices_BeginUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFWorkQueueServices_EndUnregisterTopologyWorkQueuesWithMMCSS_Proxy(
    IMFAsyncResult *pResult);
HRESULT IMFWorkQueueServices_EndUnregisterTopologyWorkQueuesWithMMCSS_Stub(
    IUnknown *pResult);
HRESULT IMFWorkQueueServices_BeginRegisterPlatformWorkQueueWithMMCSS_Proxy(
    DWORD dwPlatformWorkQueue,
    LPCWSTR wszClass,
    DWORD dwTaskId,
    IMFAsyncCallback *pCallback,
    IUnknown *pState);
HRESULT IMFWorkQueueServices_BeginRegisterPlatformWorkQueueWithMMCSS_Stub(
    DWORD dwPlatformWorkQueue,
    LPCWSTR wszClass,
    DWORD dwTaskId,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFWorkQueueServices_EndRegisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFAsyncResult *pResult,
    DWORD *pdwTaskId);
HRESULT IMFWorkQueueServices_EndRegisterPlatformWorkQueueWithMMCSS_Stub(
    IUnknown *pResult,
    DWORD *pdwTaskId);
HRESULT IMFWorkQueueServices_BeginUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    DWORD dwPlatformWorkQueue,
    IMFAsyncCallback *pCallback,
    IUnknown *pState);
HRESULT IMFWorkQueueServices_BeginUnregisterPlatformWorkQueueWithMMCSS_Stub(
    DWORD dwPlatformWorkQueue,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFWorkQueueServices_EndUnregisterPlatformWorkQueueWithMMCSS_Proxy(
    IMFAsyncResult *pResult);
HRESULT IMFWorkQueueServices_EndUnregisterPlatformWorkQueueWithMMCSS_Stub(
    IUnknown *pResult);
#endif /* __IMFWorkQueueServices_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_WORKQUEUE_SERVICES, 0x8e37d489, 0x41e0, 0x413a, 0x90, 0x68, 0x28, 0x7c, 0x88, 0x6d, 0x8d, 0xda);

/*****************************************************************************
 * IMFWorkQueueServicesEx interface
 */
#ifndef __IMFWorkQueueServicesEx_INTERFACE_DEFINED__
#define __IMFWorkQueueServicesEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFWorkQueueServicesEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFWorkQueueServicesExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFWorkQueueServicesEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFWorkQueueServicesEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFWorkQueueServicesEx *This);

    /*** IMFWorkQueueServices methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginRegisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndRegisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *BeginUnregisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndUnregisterTopologyWorkQueuesWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSClass)(
        IMFWorkQueueServicesEx *This,
        DWORD dwTopologyWorkQueueId,
        LPWSTR pwszClass,
        DWORD *pcchClass);

    HRESULT (STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSTaskId)(
        IMFWorkQueueServicesEx *This,
        DWORD dwTopologyWorkQueueId,
        DWORD *pdwTaskId);

    HRESULT (STDMETHODCALLTYPE *BeginRegisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        DWORD dwPlatformWorkQueue,
        LPCWSTR wszClass,
        DWORD dwTaskId,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndRegisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        IMFAsyncResult *pResult,
        DWORD *pdwTaskId);

    HRESULT (STDMETHODCALLTYPE *BeginUnregisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        DWORD dwPlatformWorkQueue,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndUnregisterPlatformWorkQueueWithMMCSS)(
        IMFWorkQueueServicesEx *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *GetPlaftormWorkQueueMMCSSClass)(
        IMFWorkQueueServicesEx *This,
        DWORD dwPlatformWorkQueueId,
        LPWSTR pwszClass,
        DWORD *pcchClass);

    HRESULT (STDMETHODCALLTYPE *GetPlatformWorkQueueMMCSSTaskId)(
        IMFWorkQueueServicesEx *This,
        DWORD dwPlatformWorkQueueId,
        DWORD *pdwTaskId);

    /*** IMFWorkQueueServicesEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTopologyWorkQueueMMCSSPriority)(
        IMFWorkQueueServicesEx *This,
        DWORD dwTopologyWorkQueueId,
        LONG *plPriority);

    HRESULT (STDMETHODCALLTYPE *BeginRegisterPlatformWorkQueueWithMMCSSEx)(
        IMFWorkQueueServicesEx *This,
        DWORD dwPlatformWorkQueue,
        LPCWSTR wszClass,
        DWORD dwTaskId,
        LONG lPriority,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *GetPlatformWorkQueueMMCSSPriority)(
        IMFWorkQueueServicesEx *This,
        DWORD dwPlatformWorkQueueId,
        LONG *plPriority);

    END_INTERFACE
} IMFWorkQueueServicesExVtbl;

interface IMFWorkQueueServicesEx {
    CONST_VTBL IMFWorkQueueServicesExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFWorkQueueServicesEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFWorkQueueServicesEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFWorkQueueServicesEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFWorkQueueServices methods ***/
#define IMFWorkQueueServicesEx_BeginRegisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) \
    ((This)->lpVtbl->BeginRegisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState))
#define IMFWorkQueueServicesEx_EndRegisterTopologyWorkQueuesWithMMCSS(This,pResult) \
    ((This)->lpVtbl->EndRegisterTopologyWorkQueuesWithMMCSS(This,pResult))
#define IMFWorkQueueServicesEx_BeginUnregisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState) \
    ((This)->lpVtbl->BeginUnregisterTopologyWorkQueuesWithMMCSS(This,pCallback,pState))
#define IMFWorkQueueServicesEx_EndUnregisterTopologyWorkQueuesWithMMCSS(This,pResult) \
    ((This)->lpVtbl->EndUnregisterTopologyWorkQueuesWithMMCSS(This,pResult))
#define IMFWorkQueueServicesEx_GetTopologyWorkQueueMMCSSClass(This,dwTopologyWorkQueueId,pwszClass,pcchClass) \
    ((This)->lpVtbl->GetTopologyWorkQueueMMCSSClass(This,dwTopologyWorkQueueId,pwszClass,pcchClass))
#define IMFWorkQueueServicesEx_GetTopologyWorkQueueMMCSSTaskId(This,dwTopologyWorkQueueId,pdwTaskId) \
    ((This)->lpVtbl->GetTopologyWorkQueueMMCSSTaskId(This,dwTopologyWorkQueueId,pdwTaskId))
#define IMFWorkQueueServicesEx_BeginRegisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,wszClass,dwTaskId,pCallback,pState) \
    ((This)->lpVtbl->BeginRegisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,wszClass,dwTaskId,pCallback,pState))
#define IMFWorkQueueServicesEx_EndRegisterPlatformWorkQueueWithMMCSS(This,pResult,pdwTaskId) \
    ((This)->lpVtbl->EndRegisterPlatformWorkQueueWithMMCSS(This,pResult,pdwTaskId))
#define IMFWorkQueueServicesEx_BeginUnregisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,pCallback,pState) \
    ((This)->lpVtbl->BeginUnregisterPlatformWorkQueueWithMMCSS(This,dwPlatformWorkQueue,pCallback,pState))
#define IMFWorkQueueServicesEx_EndUnregisterPlatformWorkQueueWithMMCSS(This,pResult) \
    ((This)->lpVtbl->EndUnregisterPlatformWorkQueueWithMMCSS(This,pResult))
#define IMFWorkQueueServicesEx_GetPlaftormWorkQueueMMCSSClass(This,dwPlatformWorkQueueId,pwszClass,pcchClass) \
    ((This)->lpVtbl->GetPlaftormWorkQueueMMCSSClass(This,dwPlatformWorkQueueId,pwszClass,pcchClass))
#define IMFWorkQueueServicesEx_GetPlatformWorkQueueMMCSSTaskId(This,dwPlatformWorkQueueId,pdwTaskId) \
    ((This)->lpVtbl->GetPlatformWorkQueueMMCSSTaskId(This,dwPlatformWorkQueueId,pdwTaskId))
/*** IMFWorkQueueServicesEx methods ***/
#define IMFWorkQueueServicesEx_GetTopologyWorkQueueMMCSSPriority(This,dwTopologyWorkQueueId,plPriority) \
    ((This)->lpVtbl->GetTopologyWorkQueueMMCSSPriority(This,dwTopologyWorkQueueId,plPriority))
#define IMFWorkQueueServicesEx_BeginRegisterPlatformWorkQueueWithMMCSSEx(This,dwPlatformWorkQueue,wszClass,dwTaskId,lPriority,pCallback,pState) \
    ((This)->lpVtbl->BeginRegisterPlatformWorkQueueWithMMCSSEx(This,dwPlatformWorkQueue,wszClass,dwTaskId,lPriority,pCallback,pState))
#define IMFWorkQueueServicesEx_GetPlatformWorkQueueMMCSSPriority(This,dwPlatformWorkQueueId,plPriority) \
    ((This)->lpVtbl->GetPlatformWorkQueueMMCSSPriority(This,dwPlatformWorkQueueId,plPriority))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFWorkQueueServicesEx_RemoteBeginRegisterPlatformWorkQueueWithMMCSSEx_Proxy(
    IMFWorkQueueServicesEx *This,
    DWORD dwPlatformWorkQueue,
    LPCWSTR wszClass,
    DWORD dwTaskId,
    LONG lPriority,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFWorkQueueServicesEx_RemoteBeginRegisterPlatformWorkQueueWithMMCSSEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFWorkQueueServicesEx_BeginRegisterPlatformWorkQueueWithMMCSSEx_Proxy(
    DWORD dwPlatformWorkQueue,
    LPCWSTR wszClass,
    DWORD dwTaskId,
    LONG lPriority,
    IMFAsyncCallback *pCallback,
    IUnknown *pState);
HRESULT IMFWorkQueueServicesEx_BeginRegisterPlatformWorkQueueWithMMCSSEx_Stub(
    DWORD dwPlatformWorkQueue,
    LPCWSTR wszClass,
    DWORD dwTaskId,
    LONG lPriority,
    IMFRemoteAsyncCallback *pCallback);
#endif /* __IMFWorkQueueServicesEx_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum _MF_QUALITY_DROP_MODE {
    MF_DROP_MODE_NONE = 0x0,
    MF_DROP_MODE_1 = 0x1,
    MF_DROP_MODE_2 = 0x2,
    MF_DROP_MODE_3 = 0x3,
    MF_DROP_MODE_4 = 0x4,
    MF_DROP_MODE_5 = 0x5,
    MF_NUM_DROP_MODES = 0x6
} MF_QUALITY_DROP_MODE;

typedef enum _MF_QUALITY_LEVEL {
    MF_QUALITY_NORMAL = 0x0,
    MF_QUALITY_NORMAL_MINUS_1 = 0x1,
    MF_QUALITY_NORMAL_MINUS_2 = 0x2,
    MF_QUALITY_NORMAL_MINUS_3 = 0x3,
    MF_QUALITY_NORMAL_MINUS_4 = 0x4,
    MF_QUALITY_NORMAL_MINUS_5 = 0x5,
    MF_NUM_QUALITY_LEVELS = 0x6
} MF_QUALITY_LEVEL;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum _MF_QUALITY_ADVISE_FLAGS {
    MF_QUALITY_CANNOT_KEEP_UP = 0x1
} MF_QUALITY_ADVISE_FLAGS;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFQualityManager interface
 */
#ifndef __IMFQualityManager_INTERFACE_DEFINED__
#define __IMFQualityManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFQualityManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFQualityManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFQualityManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFQualityManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFQualityManager *This);

    /*** IMFQualityManager methods ***/
    HRESULT (STDMETHODCALLTYPE *NotifyTopology)(
        IMFQualityManager *This,
        IMFTopology *pTopology);

    HRESULT (STDMETHODCALLTYPE *NotifyPresentationClock)(
        IMFQualityManager *This,
        IMFPresentationClock *pClock);

    HRESULT (STDMETHODCALLTYPE *NotifyProcessInput)(
        IMFQualityManager *This,
        IMFTopologyNode *pNode,
        long lInputIndex,
        IMFSample *pSample);

    HRESULT (STDMETHODCALLTYPE *NotifyProcessOutput)(
        IMFQualityManager *This,
        IMFTopologyNode *pNode,
        long lOutputIndex,
        IMFSample *pSample);

    HRESULT (STDMETHODCALLTYPE *NotifyQualityEvent)(
        IMFQualityManager *This,
        IUnknown *pObject,
        IMFMediaEvent *pEvent);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFQualityManager *This);

    END_INTERFACE
} IMFQualityManagerVtbl;

interface IMFQualityManager {
    CONST_VTBL IMFQualityManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFQualityManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFQualityManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFQualityManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFQualityManager methods ***/
#define IMFQualityManager_NotifyTopology(This,pTopology) \
    ((This)->lpVtbl->NotifyTopology(This,pTopology))
#define IMFQualityManager_NotifyPresentationClock(This,pClock) \
    ((This)->lpVtbl->NotifyPresentationClock(This,pClock))
#define IMFQualityManager_NotifyProcessInput(This,pNode,lInputIndex,pSample) \
    ((This)->lpVtbl->NotifyProcessInput(This,pNode,lInputIndex,pSample))
#define IMFQualityManager_NotifyProcessOutput(This,pNode,lOutputIndex,pSample) \
    ((This)->lpVtbl->NotifyProcessOutput(This,pNode,lOutputIndex,pSample))
#define IMFQualityManager_NotifyQualityEvent(This,pObject,pEvent) \
    ((This)->lpVtbl->NotifyQualityEvent(This,pObject,pEvent))
#define IMFQualityManager_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFQualityManager_INTERFACE_DEFINED__ */

STDAPI MFCreateStandardQualityManager(
     IMFQualityManager **ppQualityManager );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MF_QUALITY_NOTIFY_PROCESSING_LATENCY, 0xf6b44af8, 0x604d, 0x46fe, 0xa9, 0x5d, 0x45, 0x47, 0x9b, 0x10, 0xc9, 0xbc );

EXTERN_GUID( MF_QUALITY_NOTIFY_SAMPLE_LAG, 0x30d15206, 0xed2a, 0x4760, 0xbe, 0x17, 0xeb, 0x4a, 0x9f, 0x12, 0x29, 0x5c );

/*****************************************************************************
 * IMFQualityAdvise interface
 */
#ifndef __IMFQualityAdvise_INTERFACE_DEFINED__
#define __IMFQualityAdvise_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFQualityAdvise;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFQualityAdviseVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFQualityAdvise *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFQualityAdvise *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFQualityAdvise *This);

    /*** IMFQualityAdvise methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDropMode)(
        IMFQualityAdvise *This,
        MF_QUALITY_DROP_MODE eDropMode);

    HRESULT (STDMETHODCALLTYPE *SetQualityLevel)(
        IMFQualityAdvise *This,
        MF_QUALITY_LEVEL eQualityLevel);

    HRESULT (STDMETHODCALLTYPE *GetDropMode)(
        IMFQualityAdvise *This,
        MF_QUALITY_DROP_MODE *peDropMode);

    HRESULT (STDMETHODCALLTYPE *GetQualityLevel)(
        IMFQualityAdvise *This,
        MF_QUALITY_LEVEL *peQualityLevel);

    HRESULT (STDMETHODCALLTYPE *DropTime)(
        IMFQualityAdvise *This,
        LONGLONG hnsAmountToDrop);

    END_INTERFACE
} IMFQualityAdviseVtbl;

interface IMFQualityAdvise {
    CONST_VTBL IMFQualityAdviseVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFQualityAdvise_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFQualityAdvise_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFQualityAdvise_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFQualityAdvise methods ***/
#define IMFQualityAdvise_SetDropMode(This,eDropMode) \
    ((This)->lpVtbl->SetDropMode(This,eDropMode))
#define IMFQualityAdvise_SetQualityLevel(This,eQualityLevel) \
    ((This)->lpVtbl->SetQualityLevel(This,eQualityLevel))
#define IMFQualityAdvise_GetDropMode(This,peDropMode) \
    ((This)->lpVtbl->GetDropMode(This,peDropMode))
#define IMFQualityAdvise_GetQualityLevel(This,peQualityLevel) \
    ((This)->lpVtbl->GetQualityLevel(This,peQualityLevel))
#define IMFQualityAdvise_DropTime(This,hnsAmountToDrop) \
    ((This)->lpVtbl->DropTime(This,hnsAmountToDrop))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFQualityAdvise_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFQualityAdvise2 interface
 */
#ifndef __IMFQualityAdvise2_INTERFACE_DEFINED__
#define __IMFQualityAdvise2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFQualityAdvise2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFQualityAdvise2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFQualityAdvise2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFQualityAdvise2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFQualityAdvise2 *This);

    /*** IMFQualityAdvise methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDropMode)(
        IMFQualityAdvise2 *This,
        MF_QUALITY_DROP_MODE eDropMode);

    HRESULT (STDMETHODCALLTYPE *SetQualityLevel)(
        IMFQualityAdvise2 *This,
        MF_QUALITY_LEVEL eQualityLevel);

    HRESULT (STDMETHODCALLTYPE *GetDropMode)(
        IMFQualityAdvise2 *This,
        MF_QUALITY_DROP_MODE *peDropMode);

    HRESULT (STDMETHODCALLTYPE *GetQualityLevel)(
        IMFQualityAdvise2 *This,
        MF_QUALITY_LEVEL *peQualityLevel);

    HRESULT (STDMETHODCALLTYPE *DropTime)(
        IMFQualityAdvise2 *This,
        LONGLONG hnsAmountToDrop);

    /*** IMFQualityAdvise2 methods ***/
    HRESULT (STDMETHODCALLTYPE *NotifyQualityEvent)(
        IMFQualityAdvise2 *This,
        IMFMediaEvent *pEvent,
        DWORD *pdwFlags);

    END_INTERFACE
} IMFQualityAdvise2Vtbl;

interface IMFQualityAdvise2 {
    CONST_VTBL IMFQualityAdvise2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFQualityAdvise2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFQualityAdvise2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFQualityAdvise2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFQualityAdvise methods ***/
#define IMFQualityAdvise2_SetDropMode(This,eDropMode) \
    ((This)->lpVtbl->SetDropMode(This,eDropMode))
#define IMFQualityAdvise2_SetQualityLevel(This,eQualityLevel) \
    ((This)->lpVtbl->SetQualityLevel(This,eQualityLevel))
#define IMFQualityAdvise2_GetDropMode(This,peDropMode) \
    ((This)->lpVtbl->GetDropMode(This,peDropMode))
#define IMFQualityAdvise2_GetQualityLevel(This,peQualityLevel) \
    ((This)->lpVtbl->GetQualityLevel(This,peQualityLevel))
#define IMFQualityAdvise2_DropTime(This,hnsAmountToDrop) \
    ((This)->lpVtbl->DropTime(This,hnsAmountToDrop))
/*** IMFQualityAdvise2 methods ***/
#define IMFQualityAdvise2_NotifyQualityEvent(This,pEvent,pdwFlags) \
    ((This)->lpVtbl->NotifyQualityEvent(This,pEvent,pdwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFQualityAdvise2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFQualityAdviseLimits interface
 */
#ifndef __IMFQualityAdviseLimits_INTERFACE_DEFINED__
#define __IMFQualityAdviseLimits_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFQualityAdviseLimits;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFQualityAdviseLimitsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFQualityAdviseLimits *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFQualityAdviseLimits *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFQualityAdviseLimits *This);

    /*** IMFQualityAdviseLimits methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMaximumDropMode)(
        IMFQualityAdviseLimits *This,
        MF_QUALITY_DROP_MODE *peDropMode);

    HRESULT (STDMETHODCALLTYPE *GetMinimumQualityLevel)(
        IMFQualityAdviseLimits *This,
        MF_QUALITY_LEVEL *peQualityLevel);

    END_INTERFACE
} IMFQualityAdviseLimitsVtbl;

interface IMFQualityAdviseLimits {
    CONST_VTBL IMFQualityAdviseLimitsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFQualityAdviseLimits_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFQualityAdviseLimits_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFQualityAdviseLimits_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFQualityAdviseLimits methods ***/
#define IMFQualityAdviseLimits_GetMaximumDropMode(This,peDropMode) \
    ((This)->lpVtbl->GetMaximumDropMode(This,peDropMode))
#define IMFQualityAdviseLimits_GetMinimumQualityLevel(This,peQualityLevel) \
    ((This)->lpVtbl->GetMinimumQualityLevel(This,peQualityLevel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFQualityAdviseLimits_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFRealTimeClient interface
 */
#ifndef __IMFRealTimeClient_INTERFACE_DEFINED__
#define __IMFRealTimeClient_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRealTimeClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRealTimeClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRealTimeClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRealTimeClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRealTimeClient *This);

    /*** IMFRealTimeClient methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterThreads)(
        IMFRealTimeClient *This,
        DWORD dwTaskIndex,
        LPCWSTR wszClass);

    HRESULT (STDMETHODCALLTYPE *UnregisterThreads)(
        IMFRealTimeClient *This);

    HRESULT (STDMETHODCALLTYPE *SetWorkQueue)(
        IMFRealTimeClient *This,
        DWORD dwWorkQueueId);

    END_INTERFACE
} IMFRealTimeClientVtbl;

interface IMFRealTimeClient {
    CONST_VTBL IMFRealTimeClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRealTimeClient_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRealTimeClient_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRealTimeClient_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRealTimeClient methods ***/
#define IMFRealTimeClient_RegisterThreads(This,dwTaskIndex,wszClass) \
    ((This)->lpVtbl->RegisterThreads(This,dwTaskIndex,wszClass))
#define IMFRealTimeClient_UnregisterThreads(This) \
    ((This)->lpVtbl->UnregisterThreads(This))
#define IMFRealTimeClient_SetWorkQueue(This,dwWorkQueueId) \
    ((This)->lpVtbl->SetWorkQueue(This,dwWorkQueueId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRealTimeClient_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFRealTimeClientEx interface
 */
#ifndef __IMFRealTimeClientEx_INTERFACE_DEFINED__
#define __IMFRealTimeClientEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRealTimeClientEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRealTimeClientExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRealTimeClientEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRealTimeClientEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRealTimeClientEx *This);

    /*** IMFRealTimeClientEx methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterThreadsEx)(
        IMFRealTimeClientEx *This,
        DWORD *pdwTaskIndex,
        LPCWSTR wszClassName,
        LONG lBasePriority);

    HRESULT (STDMETHODCALLTYPE *UnregisterThreads)(
        IMFRealTimeClientEx *This);

    HRESULT (STDMETHODCALLTYPE *SetWorkQueueEx)(
        IMFRealTimeClientEx *This,
        DWORD dwMultithreadedWorkQueueId,
        LONG lWorkItemBasePriority);

    END_INTERFACE
} IMFRealTimeClientExVtbl;

interface IMFRealTimeClientEx {
    CONST_VTBL IMFRealTimeClientExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRealTimeClientEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRealTimeClientEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRealTimeClientEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRealTimeClientEx methods ***/
#define IMFRealTimeClientEx_RegisterThreadsEx(This,pdwTaskIndex,wszClassName,lBasePriority) \
    ((This)->lpVtbl->RegisterThreadsEx(This,pdwTaskIndex,wszClassName,lBasePriority))
#define IMFRealTimeClientEx_UnregisterThreads(This) \
    ((This)->lpVtbl->UnregisterThreads(This))
#define IMFRealTimeClientEx_SetWorkQueueEx(This,dwMultithreadedWorkQueueId,lWorkItemBasePriority) \
    ((This)->lpVtbl->SetWorkQueueEx(This,dwMultithreadedWorkQueueId,lWorkItemBasePriority))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRealTimeClientEx_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef DWORD MFSequencerElementId;
#define MFSEQUENCER_INVALID_ELEMENT_ID  (0xffffffff)

typedef enum _MFSequencerTopologyFlags {
    SequencerTopologyFlags_Last = 0x1
} MFSequencerTopologyFlags;

/*****************************************************************************
 * IMFSequencerSource interface
 */
#ifndef __IMFSequencerSource_INTERFACE_DEFINED__
#define __IMFSequencerSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSequencerSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSequencerSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSequencerSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSequencerSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSequencerSource *This);

    /*** IMFSequencerSource methods ***/
    HRESULT (STDMETHODCALLTYPE *AppendTopology)(
        IMFSequencerSource *This,
        IMFTopology *pTopology,
        DWORD dwFlags,
        MFSequencerElementId *pdwId);

    HRESULT (STDMETHODCALLTYPE *DeleteTopology)(
        IMFSequencerSource *This,
        MFSequencerElementId dwId);

    HRESULT (STDMETHODCALLTYPE *GetPresentationContext)(
        IMFSequencerSource *This,
        IMFPresentationDescriptor *pPD,
        MFSequencerElementId *pId,
        IMFTopology **ppTopology);

    HRESULT (STDMETHODCALLTYPE *UpdateTopology)(
        IMFSequencerSource *This,
        MFSequencerElementId dwId,
        IMFTopology *pTopology);

    HRESULT (STDMETHODCALLTYPE *UpdateTopologyFlags)(
        IMFSequencerSource *This,
        MFSequencerElementId dwId,
        DWORD dwFlags);

    END_INTERFACE
} IMFSequencerSourceVtbl;

interface IMFSequencerSource {
    CONST_VTBL IMFSequencerSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSequencerSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSequencerSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSequencerSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSequencerSource methods ***/
#define IMFSequencerSource_AppendTopology(This,pTopology,dwFlags,pdwId) \
    ((This)->lpVtbl->AppendTopology(This,pTopology,dwFlags,pdwId))
#define IMFSequencerSource_DeleteTopology(This,dwId) \
    ((This)->lpVtbl->DeleteTopology(This,dwId))
#define IMFSequencerSource_GetPresentationContext(This,pPD,pId,ppTopology) \
    ((This)->lpVtbl->GetPresentationContext(This,pPD,pId,ppTopology))
#define IMFSequencerSource_UpdateTopology(This,dwId,pTopology) \
    ((This)->lpVtbl->UpdateTopology(This,dwId,pTopology))
#define IMFSequencerSource_UpdateTopologyFlags(This,dwId,dwFlags) \
    ((This)->lpVtbl->UpdateTopologyFlags(This,dwId,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSequencerSource_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_TIME_FORMAT_SEGMENT_OFFSET, 0xc8b8be77, 0x869c, 0x431d, 0x81, 0x2e, 0x16, 0x96, 0x93, 0xf6, 0x5a, 0x39 );

STDAPI MFCreateSequencerSource(
    IUnknown *pReserved,
     IMFSequencerSource **ppSequencerSource
    );

STDAPI MFCreateSequencerSegmentOffset(
    MFSequencerElementId dwId,
    MFTIME hnsOffset,
     PROPVARIANT *pvarSegmentOffset
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if (WINVER >= _WIN32_WINNT_WIN7)

STDAPI MFCreateAggregateSource(
     IMFCollection *pSourceCollection,
     IMFMediaSource **ppAggSource
    );
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFMediaSourceTopologyProvider interface
 */
#ifndef __IMFMediaSourceTopologyProvider_INTERFACE_DEFINED__
#define __IMFMediaSourceTopologyProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSourceTopologyProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSourceTopologyProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSourceTopologyProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSourceTopologyProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSourceTopologyProvider *This);

    /*** IMFMediaSourceTopologyProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaSourceTopology)(
        IMFMediaSourceTopologyProvider *This,
        IMFPresentationDescriptor *pPresentationDescriptor,
        IMFTopology **ppTopology);

    END_INTERFACE
} IMFMediaSourceTopologyProviderVtbl;

interface IMFMediaSourceTopologyProvider {
    CONST_VTBL IMFMediaSourceTopologyProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSourceTopologyProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSourceTopologyProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSourceTopologyProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaSourceTopologyProvider methods ***/
#define IMFMediaSourceTopologyProvider_GetMediaSourceTopology(This,pPresentationDescriptor,ppTopology) \
    ((This)->lpVtbl->GetMediaSourceTopology(This,pPresentationDescriptor,ppTopology))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSourceTopologyProvider_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMediaSourcePresentationProvider interface
 */
#ifndef __IMFMediaSourcePresentationProvider_INTERFACE_DEFINED__
#define __IMFMediaSourcePresentationProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSourcePresentationProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSourcePresentationProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSourcePresentationProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSourcePresentationProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSourcePresentationProvider *This);

    /*** IMFMediaSourcePresentationProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *ForceEndOfPresentation)(
        IMFMediaSourcePresentationProvider *This,
        IMFPresentationDescriptor *pPresentationDescriptor);

    END_INTERFACE
} IMFMediaSourcePresentationProviderVtbl;

interface IMFMediaSourcePresentationProvider {
    CONST_VTBL IMFMediaSourcePresentationProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSourcePresentationProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSourcePresentationProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSourcePresentationProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaSourcePresentationProvider methods ***/
#define IMFMediaSourcePresentationProvider_ForceEndOfPresentation(This,pPresentationDescriptor) \
    ((This)->lpVtbl->ForceEndOfPresentation(This,pPresentationDescriptor))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSourcePresentationProvider_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_SOURCE_PRESENTATION_PROVIDER_SERVICE, 0xe002aadc, 0xf4af, 0x4ee5, 0x98, 0x47, 0x05, 0x3e, 0xdf, 0x84, 0x04, 0x26 );

typedef struct _MFTOPONODE_ATTRIBUTE_UPDATE {
    TOPOID NodeId;
    GUID guidAttributeKey;
    MF_ATTRIBUTE_TYPE attrType;
    union {
        UINT32 u32;
        UINT64 u64;
        double d;
    };
} MFTOPONODE_ATTRIBUTE_UPDATE;

/*****************************************************************************
 * IMFTopologyNodeAttributeEditor interface
 */
#ifndef __IMFTopologyNodeAttributeEditor_INTERFACE_DEFINED__
#define __IMFTopologyNodeAttributeEditor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTopologyNodeAttributeEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTopologyNodeAttributeEditorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTopologyNodeAttributeEditor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTopologyNodeAttributeEditor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTopologyNodeAttributeEditor *This);

    /*** IMFTopologyNodeAttributeEditor methods ***/
    HRESULT (STDMETHODCALLTYPE *UpdateNodeAttributes)(
        IMFTopologyNodeAttributeEditor *This,
        TOPOID TopoId,
        DWORD cUpdates,
        MFTOPONODE_ATTRIBUTE_UPDATE *pUpdates);

    END_INTERFACE
} IMFTopologyNodeAttributeEditorVtbl;

interface IMFTopologyNodeAttributeEditor {
    CONST_VTBL IMFTopologyNodeAttributeEditorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTopologyNodeAttributeEditor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTopologyNodeAttributeEditor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTopologyNodeAttributeEditor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTopologyNodeAttributeEditor methods ***/
#define IMFTopologyNodeAttributeEditor_UpdateNodeAttributes(This,TopoId,cUpdates,pUpdates) \
    ((This)->lpVtbl->UpdateNodeAttributes(This,TopoId,cUpdates,pUpdates))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTopologyNodeAttributeEditor_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_TOPONODE_ATTRIBUTE_EDITOR_SERVICE, 0x65656e1a, 0x077f, 0x4472, 0x83, 0xef, 0x31, 0x6f, 0x11, 0xd5, 0x08, 0x7a );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef struct _MF_LEAKY_BUCKET_PAIR {
    DWORD dwBitrate;
    DWORD msBufferWindow;
} MF_LEAKY_BUCKET_PAIR;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef struct _MFBYTESTREAM_BUFFERING_PARAMS {
    QWORD cbTotalFileSize;
    QWORD cbPlayableDataSize;
    MF_LEAKY_BUCKET_PAIR *prgBuckets;
    DWORD cBuckets;
    QWORD qwNetBufferingTime;
    QWORD qwExtraBufferingTimeDuringSeek;
    QWORD qwPlayDuration;
    float dRate;
} MFBYTESTREAM_BUFFERING_PARAMS;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFByteStreamBuffering interface
 */
#ifndef __IMFByteStreamBuffering_INTERFACE_DEFINED__
#define __IMFByteStreamBuffering_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStreamBuffering;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamBufferingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStreamBuffering *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStreamBuffering *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStreamBuffering *This);

    /*** IMFByteStreamBuffering methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBufferingParams)(
        IMFByteStreamBuffering *This,
        MFBYTESTREAM_BUFFERING_PARAMS *pParams);

    HRESULT (STDMETHODCALLTYPE *EnableBuffering)(
        IMFByteStreamBuffering *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *StopBuffering)(
        IMFByteStreamBuffering *This);

    END_INTERFACE
} IMFByteStreamBufferingVtbl;

interface IMFByteStreamBuffering {
    CONST_VTBL IMFByteStreamBufferingVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStreamBuffering_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStreamBuffering_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStreamBuffering_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStreamBuffering methods ***/
#define IMFByteStreamBuffering_SetBufferingParams(This,pParams) \
    ((This)->lpVtbl->SetBufferingParams(This,pParams))
#define IMFByteStreamBuffering_EnableBuffering(This,fEnable) \
    ((This)->lpVtbl->EnableBuffering(This,fEnable))
#define IMFByteStreamBuffering_StopBuffering(This) \
    ((This)->lpVtbl->StopBuffering(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFByteStreamBuffering_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFByteStreamCacheControl interface
 */
#ifndef __IMFByteStreamCacheControl_INTERFACE_DEFINED__
#define __IMFByteStreamCacheControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStreamCacheControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamCacheControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStreamCacheControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStreamCacheControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStreamCacheControl *This);

    /*** IMFByteStreamCacheControl methods ***/
    HRESULT (STDMETHODCALLTYPE *StopBackgroundTransfer)(
        IMFByteStreamCacheControl *This);

    END_INTERFACE
} IMFByteStreamCacheControlVtbl;

interface IMFByteStreamCacheControl {
    CONST_VTBL IMFByteStreamCacheControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStreamCacheControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStreamCacheControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStreamCacheControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStreamCacheControl methods ***/
#define IMFByteStreamCacheControl_StopBackgroundTransfer(This) \
    ((This)->lpVtbl->StopBackgroundTransfer(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFByteStreamCacheControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFByteStreamTimeSeek interface
 */
#ifndef __IMFByteStreamTimeSeek_INTERFACE_DEFINED__
#define __IMFByteStreamTimeSeek_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStreamTimeSeek;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamTimeSeekVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStreamTimeSeek *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStreamTimeSeek *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStreamTimeSeek *This);

    /*** IMFByteStreamTimeSeek methods ***/
    HRESULT (STDMETHODCALLTYPE *IsTimeSeekSupported)(
        IMFByteStreamTimeSeek *This,
        BOOL *pfTimeSeekIsSupported);

    HRESULT (STDMETHODCALLTYPE *TimeSeek)(
        IMFByteStreamTimeSeek *This,
        QWORD qwTimePosition);

    HRESULT (STDMETHODCALLTYPE *GetTimeSeekResult)(
        IMFByteStreamTimeSeek *This,
        QWORD *pqwStartTime,
        QWORD *pqwStopTime,
        QWORD *pqwDuration);

    END_INTERFACE
} IMFByteStreamTimeSeekVtbl;

interface IMFByteStreamTimeSeek {
    CONST_VTBL IMFByteStreamTimeSeekVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStreamTimeSeek_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStreamTimeSeek_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStreamTimeSeek_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStreamTimeSeek methods ***/
#define IMFByteStreamTimeSeek_IsTimeSeekSupported(This,pfTimeSeekIsSupported) \
    ((This)->lpVtbl->IsTimeSeekSupported(This,pfTimeSeekIsSupported))
#define IMFByteStreamTimeSeek_TimeSeek(This,qwTimePosition) \
    ((This)->lpVtbl->TimeSeek(This,qwTimePosition))
#define IMFByteStreamTimeSeek_GetTimeSeekResult(This,pqwStartTime,pqwStopTime,pqwDuration) \
    ((This)->lpVtbl->GetTimeSeekResult(This,pqwStartTime,pqwStopTime,pqwDuration))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFByteStreamTimeSeek_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WIN8)

typedef struct __POIDL_mfidl_tag_0000001B {
    QWORD qwStartOffset;
    QWORD qwEndOffset;
} MF_BYTE_STREAM_CACHE_RANGE;

/*****************************************************************************
 * IMFByteStreamCacheControl2 interface
 */
#ifndef __IMFByteStreamCacheControl2_INTERFACE_DEFINED__
#define __IMFByteStreamCacheControl2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStreamCacheControl2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamCacheControl2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStreamCacheControl2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStreamCacheControl2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStreamCacheControl2 *This);

    /*** IMFByteStreamCacheControl methods ***/
    HRESULT (STDMETHODCALLTYPE *StopBackgroundTransfer)(
        IMFByteStreamCacheControl2 *This);

    /*** IMFByteStreamCacheControl2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetByteRanges)(
        IMFByteStreamCacheControl2 *This,
        DWORD *pcRanges,
        MF_BYTE_STREAM_CACHE_RANGE **ppRanges);

    HRESULT (STDMETHODCALLTYPE *SetCacheLimit)(
        IMFByteStreamCacheControl2 *This,
        QWORD qwBytes);

    HRESULT (STDMETHODCALLTYPE *IsBackgroundTransferActive)(
        IMFByteStreamCacheControl2 *This,
        BOOL *pfActive);

    END_INTERFACE
} IMFByteStreamCacheControl2Vtbl;

interface IMFByteStreamCacheControl2 {
    CONST_VTBL IMFByteStreamCacheControl2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStreamCacheControl2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStreamCacheControl2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStreamCacheControl2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStreamCacheControl methods ***/
#define IMFByteStreamCacheControl2_StopBackgroundTransfer(This) \
    ((This)->lpVtbl->StopBackgroundTransfer(This))
/*** IMFByteStreamCacheControl2 methods ***/
#define IMFByteStreamCacheControl2_GetByteRanges(This,pcRanges,ppRanges) \
    ((This)->lpVtbl->GetByteRanges(This,pcRanges,ppRanges))
#define IMFByteStreamCacheControl2_SetCacheLimit(This,qwBytes) \
    ((This)->lpVtbl->SetCacheLimit(This,qwBytes))
#define IMFByteStreamCacheControl2_IsBackgroundTransferActive(This,pfActive) \
    ((This)->lpVtbl->IsBackgroundTransferActive(This,pfActive))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFByteStreamCacheControl2_INTERFACE_DEFINED__ */

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFNetCredential interface
 */
#ifndef __IMFNetCredential_INTERFACE_DEFINED__
#define __IMFNetCredential_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFNetCredential;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetCredentialVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetCredential *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetCredential *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetCredential *This);

    /*** IMFNetCredential methods ***/
    HRESULT (STDMETHODCALLTYPE *SetUser)(
        IMFNetCredential *This,
        BYTE *pbData,
        DWORD cbData,
        BOOL fDataIsEncrypted);

    HRESULT (STDMETHODCALLTYPE *SetPassword)(
        IMFNetCredential *This,
        BYTE *pbData,
        DWORD cbData,
        BOOL fDataIsEncrypted);

    HRESULT (STDMETHODCALLTYPE *GetUser)(
        IMFNetCredential *This,
        BYTE *pbData,
        DWORD *pcbData,
        BOOL fEncryptData);

    HRESULT (STDMETHODCALLTYPE *GetPassword)(
        IMFNetCredential *This,
        BYTE *pbData,
        DWORD *pcbData,
        BOOL fEncryptData);

    HRESULT (STDMETHODCALLTYPE *LoggedOnUser)(
        IMFNetCredential *This,
        BOOL *pfLoggedOnUser);

    END_INTERFACE
} IMFNetCredentialVtbl;

interface IMFNetCredential {
    CONST_VTBL IMFNetCredentialVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetCredential_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetCredential_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetCredential_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetCredential methods ***/
#define IMFNetCredential_SetUser(This,pbData,cbData,fDataIsEncrypted) \
    ((This)->lpVtbl->SetUser(This,pbData,cbData,fDataIsEncrypted))
#define IMFNetCredential_SetPassword(This,pbData,cbData,fDataIsEncrypted) \
    ((This)->lpVtbl->SetPassword(This,pbData,cbData,fDataIsEncrypted))
#define IMFNetCredential_GetUser(This,pbData,pcbData,fEncryptData) \
    ((This)->lpVtbl->GetUser(This,pbData,pcbData,fEncryptData))
#define IMFNetCredential_GetPassword(This,pbData,pcbData,fEncryptData) \
    ((This)->lpVtbl->GetPassword(This,pbData,pcbData,fEncryptData))
#define IMFNetCredential_LoggedOnUser(This,pfLoggedOnUser) \
    ((This)->lpVtbl->LoggedOnUser(This,pfLoggedOnUser))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetCredential_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFNetCredentialManager interface
 */
#ifndef __IMFNetCredentialManager_INTERFACE_DEFINED__
#define __IMFNetCredentialManager_INTERFACE_DEFINED__

typedef struct _MFNetCredentialManagerGetParam {
    HRESULT hrOp;
    BOOL fAllowLoggedOnUser;
    BOOL fClearTextPackage;
    LPCWSTR pszUrl;
    LPCWSTR pszSite;
    LPCWSTR pszRealm;
    LPCWSTR pszPackage;
    LONG nRetries;
} MFNetCredentialManagerGetParam;

EXTERN_C const IID IID_IMFNetCredentialManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetCredentialManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetCredentialManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetCredentialManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetCredentialManager *This);

    /*** IMFNetCredentialManager methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginGetCredentials)(
        IMFNetCredentialManager *This,
        MFNetCredentialManagerGetParam *pParam,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndGetCredentials)(
        IMFNetCredentialManager *This,
        IMFAsyncResult *pResult,
        IMFNetCredential **ppCred);

    HRESULT (STDMETHODCALLTYPE *SetGood)(
        IMFNetCredentialManager *This,
        IMFNetCredential *pCred,
        BOOL fGood);

    END_INTERFACE
} IMFNetCredentialManagerVtbl;

interface IMFNetCredentialManager {
    CONST_VTBL IMFNetCredentialManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetCredentialManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetCredentialManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetCredentialManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetCredentialManager methods ***/
#define IMFNetCredentialManager_BeginGetCredentials(This,pParam,pCallback,pState) \
    ((This)->lpVtbl->BeginGetCredentials(This,pParam,pCallback,pState))
#define IMFNetCredentialManager_EndGetCredentials(This,pResult,ppCred) \
    ((This)->lpVtbl->EndGetCredentials(This,pResult,ppCred))
#define IMFNetCredentialManager_SetGood(This,pCred,fGood) \
    ((This)->lpVtbl->SetGood(This,pCred,fGood))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetCredentialManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFNetCredentialCache interface
 */
#ifndef __IMFNetCredentialCache_INTERFACE_DEFINED__
#define __IMFNetCredentialCache_INTERFACE_DEFINED__

typedef enum _MFNetCredentialRequirements {
    REQUIRE_PROMPT = 0x1,
    REQUIRE_SAVE_SELECTED = 0x2
} MFNetCredentialRequirements;

typedef enum _MFNetCredentialOptions {
    MFNET_CREDENTIAL_SAVE = 0x1,
    MFNET_CREDENTIAL_DONT_CACHE = 0x2,
    MFNET_CREDENTIAL_ALLOW_CLEAR_TEXT = 0x4
} MFNetCredentialOptions;

typedef enum _MFNetAuthenticationFlags {
    MFNET_AUTHENTICATION_PROXY = 0x1,
    MFNET_AUTHENTICATION_CLEAR_TEXT = 0x2,
    MFNET_AUTHENTICATION_LOGGED_ON_USER = 0x4
} MFNetAuthenticationFlags;

EXTERN_C const IID IID_IMFNetCredentialCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetCredentialCacheVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetCredentialCache *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetCredentialCache *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetCredentialCache *This);

    /*** IMFNetCredentialCache methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCredential)(
        IMFNetCredentialCache *This,
        LPCWSTR pszUrl,
        LPCWSTR pszRealm,
        DWORD dwAuthenticationFlags,
        IMFNetCredential **ppCred,
        DWORD *pdwRequirementsFlags);

    HRESULT (STDMETHODCALLTYPE *SetGood)(
        IMFNetCredentialCache *This,
        IMFNetCredential *pCred,
        BOOL fGood);

    HRESULT (STDMETHODCALLTYPE *SetUserOptions)(
        IMFNetCredentialCache *This,
        IMFNetCredential *pCred,
        DWORD dwOptionsFlags);

    END_INTERFACE
} IMFNetCredentialCacheVtbl;

interface IMFNetCredentialCache {
    CONST_VTBL IMFNetCredentialCacheVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetCredentialCache_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetCredentialCache_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetCredentialCache_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetCredentialCache methods ***/
#define IMFNetCredentialCache_GetCredential(This,pszUrl,pszRealm,dwAuthenticationFlags,ppCred,pdwRequirementsFlags) \
    ((This)->lpVtbl->GetCredential(This,pszUrl,pszRealm,dwAuthenticationFlags,ppCred,pdwRequirementsFlags))
#define IMFNetCredentialCache_SetGood(This,pCred,fGood) \
    ((This)->lpVtbl->SetGood(This,pCred,fGood))
#define IMFNetCredentialCache_SetUserOptions(This,pCred,dwOptionsFlags) \
    ((This)->lpVtbl->SetUserOptions(This,pCred,dwOptionsFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetCredentialCache_INTERFACE_DEFINED__ */

STDAPI
MFCreateCredentialCache(
     IMFNetCredentialCache ** ppCache);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFSSLCertificateManager interface
 */
#ifndef __IMFSSLCertificateManager_INTERFACE_DEFINED__
#define __IMFSSLCertificateManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSSLCertificateManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSSLCertificateManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSSLCertificateManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSSLCertificateManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSSLCertificateManager *This);

    /*** IMFSSLCertificateManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClientCertificate)(
        IMFSSLCertificateManager *This,
        LPCWSTR pszURL,
        BYTE **ppbData,
        DWORD *pcbData);

    HRESULT (STDMETHODCALLTYPE *BeginGetClientCertificate)(
        IMFSSLCertificateManager *This,
        LPCWSTR pszURL,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndGetClientCertificate)(
        IMFSSLCertificateManager *This,
        IMFAsyncResult *pResult,
        BYTE **ppbData,
        DWORD *pcbData);

    HRESULT (STDMETHODCALLTYPE *GetCertificatePolicy)(
        IMFSSLCertificateManager *This,
        LPCWSTR pszURL,
        BOOL *pfOverrideAutomaticCheck,
        BOOL *pfClientCertificateAvailable);

    HRESULT (STDMETHODCALLTYPE *OnServerCertificate)(
        IMFSSLCertificateManager *This,
        LPCWSTR pszURL,
        BYTE *pbData,
        DWORD cbData,
        BOOL *pfIsGood);

    END_INTERFACE
} IMFSSLCertificateManagerVtbl;

interface IMFSSLCertificateManager {
    CONST_VTBL IMFSSLCertificateManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSSLCertificateManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSSLCertificateManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSSLCertificateManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSSLCertificateManager methods ***/
#define IMFSSLCertificateManager_GetClientCertificate(This,pszURL,ppbData,pcbData) \
    ((This)->lpVtbl->GetClientCertificate(This,pszURL,ppbData,pcbData))
#define IMFSSLCertificateManager_BeginGetClientCertificate(This,pszURL,pCallback,pState) \
    ((This)->lpVtbl->BeginGetClientCertificate(This,pszURL,pCallback,pState))
#define IMFSSLCertificateManager_EndGetClientCertificate(This,pResult,ppbData,pcbData) \
    ((This)->lpVtbl->EndGetClientCertificate(This,pResult,ppbData,pcbData))
#define IMFSSLCertificateManager_GetCertificatePolicy(This,pszURL,pfOverrideAutomaticCheck,pfClientCertificateAvailable) \
    ((This)->lpVtbl->GetCertificatePolicy(This,pszURL,pfOverrideAutomaticCheck,pfClientCertificateAvailable))
#define IMFSSLCertificateManager_OnServerCertificate(This,pszURL,pbData,cbData,pfIsGood) \
    ((This)->lpVtbl->OnServerCertificate(This,pszURL,pbData,cbData,pfIsGood))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSSLCertificateManager_INTERFACE_DEFINED__ */

EXTERN_GUID( MFNETSOURCE_SSLCERTIFICATE_MANAGER, 0x55e6cb27, 0xe69b, 0x4267, 0x94, 0x0c, 0x2d, 0x7e, 0xc5, 0xbb, 0x8a, 0x0f );

/*****************************************************************************
 * IMFNetResourceFilter interface
 */
#ifndef __IMFNetResourceFilter_INTERFACE_DEFINED__
#define __IMFNetResourceFilter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFNetResourceFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetResourceFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetResourceFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetResourceFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetResourceFilter *This);

    /*** IMFNetResourceFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *OnRedirect)(
        IMFNetResourceFilter *This,
        LPCWSTR pszUrl,
        VARIANT_BOOL *pvbCancel);

    HRESULT (STDMETHODCALLTYPE *OnSendingRequest)(
        IMFNetResourceFilter *This,
        LPCWSTR pszUrl);

    END_INTERFACE
} IMFNetResourceFilterVtbl;

interface IMFNetResourceFilter {
    CONST_VTBL IMFNetResourceFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetResourceFilter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetResourceFilter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetResourceFilter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetResourceFilter methods ***/
#define IMFNetResourceFilter_OnRedirect(This,pszUrl,pvbCancel) \
    ((This)->lpVtbl->OnRedirect(This,pszUrl,pvbCancel))
#define IMFNetResourceFilter_OnSendingRequest(This,pszUrl) \
    ((This)->lpVtbl->OnSendingRequest(This,pszUrl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetResourceFilter_INTERFACE_DEFINED__ */

EXTERN_GUID( MFNETSOURCE_RESOURCE_FILTER, 0x815d0ff6, 0x265a, 0x4477, 0x9e, 0x46, 0x7b, 0x80, 0xad, 0x80, 0xb5, 0xfb);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFSourceOpenMonitor interface
 */
#ifndef __IMFSourceOpenMonitor_INTERFACE_DEFINED__
#define __IMFSourceOpenMonitor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSourceOpenMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSourceOpenMonitorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSourceOpenMonitor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSourceOpenMonitor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSourceOpenMonitor *This);

    /*** IMFSourceOpenMonitor methods ***/
    HRESULT (STDMETHODCALLTYPE *OnSourceEvent)(
        IMFSourceOpenMonitor *This,
        IMFMediaEvent *pEvent);

    END_INTERFACE
} IMFSourceOpenMonitorVtbl;

interface IMFSourceOpenMonitor {
    CONST_VTBL IMFSourceOpenMonitorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSourceOpenMonitor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSourceOpenMonitor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSourceOpenMonitor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSourceOpenMonitor methods ***/
#define IMFSourceOpenMonitor_OnSourceEvent(This,pEvent) \
    ((This)->lpVtbl->OnSourceEvent(This,pEvent))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSourceOpenMonitor_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFNetProxyLocator interface
 */
#ifndef __IMFNetProxyLocator_INTERFACE_DEFINED__
#define __IMFNetProxyLocator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFNetProxyLocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetProxyLocatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetProxyLocator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetProxyLocator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetProxyLocator *This);

    /*** IMFNetProxyLocator methods ***/
    HRESULT (STDMETHODCALLTYPE *FindFirstProxy)(
        IMFNetProxyLocator *This,
        LPCWSTR pszHost,
        LPCWSTR pszUrl,
        BOOL fReserved);

    HRESULT (STDMETHODCALLTYPE *FindNextProxy)(
        IMFNetProxyLocator *This);

    HRESULT (STDMETHODCALLTYPE *RegisterProxyResult)(
        IMFNetProxyLocator *This,
        HRESULT hrOp);

    HRESULT (STDMETHODCALLTYPE *GetCurrentProxy)(
        IMFNetProxyLocator *This,
        LPWSTR pszStr,
        DWORD *pcchStr);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IMFNetProxyLocator *This,
        IMFNetProxyLocator **ppProxyLocator);

    END_INTERFACE
} IMFNetProxyLocatorVtbl;

interface IMFNetProxyLocator {
    CONST_VTBL IMFNetProxyLocatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetProxyLocator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetProxyLocator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetProxyLocator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetProxyLocator methods ***/
#define IMFNetProxyLocator_FindFirstProxy(This,pszHost,pszUrl,fReserved) \
    ((This)->lpVtbl->FindFirstProxy(This,pszHost,pszUrl,fReserved))
#define IMFNetProxyLocator_FindNextProxy(This) \
    ((This)->lpVtbl->FindNextProxy(This))
#define IMFNetProxyLocator_RegisterProxyResult(This,hrOp) \
    ((This)->lpVtbl->RegisterProxyResult(This,hrOp))
#define IMFNetProxyLocator_GetCurrentProxy(This,pszStr,pcchStr) \
    ((This)->lpVtbl->GetCurrentProxy(This,pszStr,pcchStr))
#define IMFNetProxyLocator_Clone(This,ppProxyLocator) \
    ((This)->lpVtbl->Clone(This,ppProxyLocator))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetProxyLocator_INTERFACE_DEFINED__ */

STDAPI MFCreateProxyLocator(
    LPCWSTR pszProtocol,
    IPropertyStore* pProxyConfig,
     IMFNetProxyLocator** ppProxyLocator );

/*****************************************************************************
 * IMFNetProxyLocatorFactory interface
 */
#ifndef __IMFNetProxyLocatorFactory_INTERFACE_DEFINED__
#define __IMFNetProxyLocatorFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFNetProxyLocatorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetProxyLocatorFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetProxyLocatorFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetProxyLocatorFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetProxyLocatorFactory *This);

    /*** IMFNetProxyLocatorFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateProxyLocator)(
        IMFNetProxyLocatorFactory *This,
        LPCWSTR pszProtocol,
        IMFNetProxyLocator **ppProxyLocator);

    END_INTERFACE
} IMFNetProxyLocatorFactoryVtbl;

interface IMFNetProxyLocatorFactory {
    CONST_VTBL IMFNetProxyLocatorFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetProxyLocatorFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetProxyLocatorFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetProxyLocatorFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetProxyLocatorFactory methods ***/
#define IMFNetProxyLocatorFactory_CreateProxyLocator(This,pszProtocol,ppProxyLocator) \
    ((This)->lpVtbl->CreateProxyLocator(This,pszProtocol,ppProxyLocator))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetProxyLocatorFactory_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSaveJob interface
 */
#ifndef __IMFSaveJob_INTERFACE_DEFINED__
#define __IMFSaveJob_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSaveJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSaveJobVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSaveJob *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSaveJob *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSaveJob *This);

    /*** IMFSaveJob methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginSave)(
        IMFSaveJob *This,
        IMFByteStream *pStream,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndSave)(
        IMFSaveJob *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *CancelSave)(
        IMFSaveJob *This);

    HRESULT (STDMETHODCALLTYPE *GetProgress)(
        IMFSaveJob *This,
        DWORD *pdwPercentComplete);

    END_INTERFACE
} IMFSaveJobVtbl;

interface IMFSaveJob {
    CONST_VTBL IMFSaveJobVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSaveJob_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSaveJob_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSaveJob_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSaveJob methods ***/
#define IMFSaveJob_BeginSave(This,pStream,pCallback,pState) \
    ((This)->lpVtbl->BeginSave(This,pStream,pCallback,pState))
#define IMFSaveJob_EndSave(This,pResult) \
    ((This)->lpVtbl->EndSave(This,pResult))
#define IMFSaveJob_CancelSave(This) \
    ((This)->lpVtbl->CancelSave(This))
#define IMFSaveJob_GetProgress(This,pdwPercentComplete) \
    ((This)->lpVtbl->GetProgress(This,pdwPercentComplete))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSaveJob_INTERFACE_DEFINED__ */

EXTERN_GUID( MFNET_SAVEJOB_SERVICE, 0xb85a587f, 0x3d02, 0x4e52, 0x95, 0x65, 0x55, 0xd3, 0xec, 0x1e, 0x7f, 0xf7 );

typedef enum _MFNETSOURCE_PROTOCOL_TYPE {
    MFNETSOURCE_UNDEFINED = 0x0,
    MFNETSOURCE_HTTP = 0x1,
    MFNETSOURCE_RTSP = 0x2,
    MFNETSOURCE_FILE = 0x3,
    MFNETSOURCE_MULTICAST = 0x4
} MFNETSOURCE_PROTOCOL_TYPE;

/*****************************************************************************
 * IMFNetSchemeHandlerConfig interface
 */
#ifndef __IMFNetSchemeHandlerConfig_INTERFACE_DEFINED__
#define __IMFNetSchemeHandlerConfig_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFNetSchemeHandlerConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetSchemeHandlerConfigVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetSchemeHandlerConfig *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetSchemeHandlerConfig *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetSchemeHandlerConfig *This);

    /*** IMFNetSchemeHandlerConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNumberOfSupportedProtocols)(
        IMFNetSchemeHandlerConfig *This,
        ULONG *pcProtocols);

    HRESULT (STDMETHODCALLTYPE *GetSupportedProtocolType)(
        IMFNetSchemeHandlerConfig *This,
        ULONG nProtocolIndex,
        MFNETSOURCE_PROTOCOL_TYPE *pnProtocolType);

    HRESULT (STDMETHODCALLTYPE *ResetProtocolRolloverSettings)(
        IMFNetSchemeHandlerConfig *This);

    END_INTERFACE
} IMFNetSchemeHandlerConfigVtbl;

interface IMFNetSchemeHandlerConfig {
    CONST_VTBL IMFNetSchemeHandlerConfigVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetSchemeHandlerConfig_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetSchemeHandlerConfig_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetSchemeHandlerConfig_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetSchemeHandlerConfig methods ***/
#define IMFNetSchemeHandlerConfig_GetNumberOfSupportedProtocols(This,pcProtocols) \
    ((This)->lpVtbl->GetNumberOfSupportedProtocols(This,pcProtocols))
#define IMFNetSchemeHandlerConfig_GetSupportedProtocolType(This,nProtocolIndex,pnProtocolType) \
    ((This)->lpVtbl->GetSupportedProtocolType(This,nProtocolIndex,pnProtocolType))
#define IMFNetSchemeHandlerConfig_ResetProtocolRolloverSettings(This) \
    ((This)->lpVtbl->ResetProtocolRolloverSettings(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetSchemeHandlerConfig_INTERFACE_DEFINED__ */

STDAPI MFCreateNetSchemePlugin(
    REFIID riid,
    LPVOID *ppvHandler );

typedef enum _MFNETSOURCE_TRANSPORT_TYPE {
    MFNETSOURCE_UDP = 0,
    MFNETSOURCE_TCP = 1
} MFNETSOURCE_TRANSPORT_TYPE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum _MFNETSOURCE_CACHE_STATE {
    MFNETSOURCE_CACHE_UNAVAILABLE = 0,
    MFNETSOURCE_CACHE_ACTIVE_WRITING = 1,
    MFNETSOURCE_CACHE_ACTIVE_COMPLETE = 2
} MFNETSOURCE_CACHE_STATE;

typedef enum _MFNETSOURCE_STATISTICS_IDS {
    MFNETSOURCE_RECVPACKETS_ID = 0,
    MFNETSOURCE_LOSTPACKETS_ID = 1,
    MFNETSOURCE_RESENDSREQUESTED_ID = 2,
    MFNETSOURCE_RESENDSRECEIVED_ID = 3,
    MFNETSOURCE_RECOVEREDBYECCPACKETS_ID = 4,
    MFNETSOURCE_RECOVEREDBYRTXPACKETS_ID = 5,
    MFNETSOURCE_OUTPACKETS_ID = 6,
    MFNETSOURCE_RECVRATE_ID = 7,
    MFNETSOURCE_AVGBANDWIDTHBPS_ID = 8,
    MFNETSOURCE_BYTESRECEIVED_ID = 9,
    MFNETSOURCE_PROTOCOL_ID = 10,
    MFNETSOURCE_TRANSPORT_ID = 11,
    MFNETSOURCE_CACHE_STATE_ID = 12,
    MFNETSOURCE_LINKBANDWIDTH_ID = 13,
    MFNETSOURCE_CONTENTBITRATE_ID = 14,
    MFNETSOURCE_SPEEDFACTOR_ID = 15,
    MFNETSOURCE_BUFFERSIZE_ID = 16,
    MFNETSOURCE_BUFFERPROGRESS_ID = 17,
    MFNETSOURCE_LASTBWSWITCHTS_ID = 18,
    MFNETSOURCE_SEEKRANGESTART_ID = 19,
    MFNETSOURCE_SEEKRANGEEND_ID = 20,
    MFNETSOURCE_BUFFERINGCOUNT_ID = 21,
    MFNETSOURCE_INCORRECTLYSIGNEDPACKETS_ID = 22,
    MFNETSOURCE_SIGNEDSESSION_ID = 23,
    MFNETSOURCE_MAXBITRATE_ID = 24,
    MFNETSOURCE_RECEPTION_QUALITY_ID = 25,
    MFNETSOURCE_RECOVEREDPACKETS_ID = 26,
    MFNETSOURCE_VBR_ID = 27,
    MFNETSOURCE_DOWNLOADPROGRESS_ID = 28,
    MFNETSOURCE_UNPREDEFINEDPROTOCOLNAME_ID = 29
} MFNETSOURCE_STATISTICS_IDS;

EXTERN_GUID( MFNETSOURCE_STATISTICS_SERVICE, 0x3cb1f275, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_STATISTICS, 0x3cb1f274, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

EXTERN_GUID( MFNETSOURCE_BUFFERINGTIME, 0x3cb1f276, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ACCELERATEDSTREAMINGDURATION, 0x3cb1f277, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_MAXUDPACCELERATEDSTREAMINGDURATION, 0x4aab2879, 0xbbe1, 0x4994, 0x9f, 0xf0, 0x54, 0x95, 0xbd, 0x25, 0x1, 0x29 );

EXTERN_GUID( MFNETSOURCE_MAXBUFFERTIMEMS, 0x408b24e6, 0x4038, 0x4401, 0xb5, 0xb2, 0xfe, 0x70, 0x1a, 0x9e, 0xbf, 0x10 );

EXTERN_GUID( MFNETSOURCE_CONNECTIONBANDWIDTH, 0x3cb1f278, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_CACHEENABLED, 0x3cb1f279, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_AUTORECONNECTLIMIT, 0x3cb1f27a, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_RESENDSENABLED, 0x3cb1f27b, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_THINNINGENABLED, 0x3cb1f27c, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROTOCOL, 0x3cb1f27d, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_TRANSPORT, 0x3cb1f27e, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MFNETSOURCE_PREVIEWMODEENABLED, 0x3cb1f27f, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );
#endif // (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MFNETSOURCE_CREDENTIAL_MANAGER, 0x3cb1f280, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PPBANDWIDTH, 0x3cb1f281, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_AUTORECONNECTPROGRESS, 0x3cb1f282, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYLOCATORFACTORY, 0x3cb1f283, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_BROWSERUSERAGENT, 0x3cb1f28b, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_BROWSERWEBPAGE, 0x3cb1f28c, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PLAYERVERSION, 0x3cb1f28d, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PLAYERID, 0x3cb1f28e, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_HOSTEXE, 0x3cb1f28f, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_HOSTVERSION, 0x3cb1f291, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PLAYERUSERAGENT, 0x3cb1f292, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MFNETSOURCE_CLIENTGUID, 0x60a2c4a6, 0xf197, 0x4c14, 0xa5, 0xbf, 0x88, 0x83, 0xd, 0x24, 0x58, 0xaf );
#endif // (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MFNETSOURCE_LOGURL, 0x3cb1f293, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_UDP, 0x3cb1f294, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_TCP, 0x3cb1f295, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_MSB, 0x3cb1f296, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_RTSP, 0x3cb1f298, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_HTTP, 0x3cb1f299, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_STREAMING, 0x3cb1f29c, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_DOWNLOAD, 0x3cb1f29d, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_ENABLE_PRIVATEMODE, 0x824779d8, 0xf18b, 0x4405, 0x8c, 0xf1, 0x46, 0x4f, 0xb5, 0xaa, 0x8f, 0x71 );

EXTERN_GUID( MFNETSOURCE_UDP_PORT_RANGE, 0x3cb1f29a, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYINFO, 0x3cb1f29b, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_DRMNET_LICENSE_REPRESENTATION, 0x47eae1bd, 0xbdfe, 0x42e2, 0x82, 0xf3, 0x54, 0xa4, 0x8c, 0x17, 0x96, 0x2d );

EXTERN_GUID( MFNETSOURCE_PROXYSETTINGS, 0x3cb1f287, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYHOSTNAME, 0x3cb1f284, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYPORT, 0x3cb1f288, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYEXCEPTIONLIST, 0x3cb1f285, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYBYPASSFORLOCAL, 0x3cb1f286, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

EXTERN_GUID( MFNETSOURCE_PROXYRERUNAUTODETECTION, 0x3cb1f289, 0x0505, 0x4c5d, 0xae, 0x71, 0x0a, 0x55, 0x63, 0x44, 0xef, 0xa1 );

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MFNETSOURCE_STREAM_LANGUAGE, 0x9ab44318, 0xf7cd, 0x4f2d, 0x8d, 0x6d, 0xfa, 0x35, 0xb4, 0x92, 0xce, 0xcb );

EXTERN_GUID( MFNETSOURCE_LOGPARAMS, 0x64936ae8, 0x9418, 0x453a, 0x8c, 0xda, 0x3e, 0xa, 0x66, 0x8b, 0x35, 0x3b );
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if (WINVER >= _WIN32_WINNT_WIN8)

EXTERN_GUID( MFNETSOURCE_PEERMANAGER, 0x48b29adb, 0xfebf, 0x45ee, 0xa9, 0xbf, 0xef, 0xb8, 0x1c, 0x49, 0x2e, 0xfc );

EXTERN_GUID( MFNETSOURCE_FRIENDLYNAME, 0x5b2a7757, 0xbc6b, 0x447e, 0xaa, 0x06, 0x0d, 0xda, 0x1c, 0x64, 0x6e, 0x2f );
#endif // (WINVER >= _WIN32_WINNT_WIN8)

typedef enum _MFNET_PROXYSETTINGS {
    MFNET_PROXYSETTING_NONE = 0,
    MFNET_PROXYSETTING_MANUAL = 1,
    MFNET_PROXYSETTING_AUTO = 2,
    MFNET_PROXYSETTING_BROWSER = 3
} MFNET_PROXYSETTINGS;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFSchemeHandler interface
 */
#ifndef __IMFSchemeHandler_INTERFACE_DEFINED__
#define __IMFSchemeHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSchemeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSchemeHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSchemeHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSchemeHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSchemeHandler *This);

    /*** IMFSchemeHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginCreateObject)(
        IMFSchemeHandler *This,
        LPCWSTR pwszURL,
        DWORD dwFlags,
        IPropertyStore *pProps,
        IUnknown **ppIUnknownCancelCookie,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndCreateObject)(
        IMFSchemeHandler *This,
        IMFAsyncResult *pResult,
        MF_OBJECT_TYPE *pObjectType,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *CancelObjectCreation)(
        IMFSchemeHandler *This,
        IUnknown *pIUnknownCancelCookie);

    END_INTERFACE
} IMFSchemeHandlerVtbl;

interface IMFSchemeHandler {
    CONST_VTBL IMFSchemeHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSchemeHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSchemeHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSchemeHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSchemeHandler methods ***/
#define IMFSchemeHandler_BeginCreateObject(This,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) \
    ((This)->lpVtbl->BeginCreateObject(This,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState))
#define IMFSchemeHandler_EndCreateObject(This,pResult,pObjectType,ppObject) \
    ((This)->lpVtbl->EndCreateObject(This,pResult,pObjectType,ppObject))
#define IMFSchemeHandler_CancelObjectCreation(This,pIUnknownCancelCookie) \
    ((This)->lpVtbl->CancelObjectCreation(This,pIUnknownCancelCookie))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSchemeHandler_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID(MF_BYTESTREAMHANDLER_ACCEPTS_SHARE_WRITE, 0xa6e1f733, 0x3001, 0x4915, 0x81, 0x50, 0x15, 0x58, 0xa2, 0x18, 0xe, 0xc8);
#endif // (WINVER >= _WIN32_WINNT_WIN7)

/*****************************************************************************
 * IMFByteStreamHandler interface
 */
#ifndef __IMFByteStreamHandler_INTERFACE_DEFINED__
#define __IMFByteStreamHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStreamHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStreamHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStreamHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStreamHandler *This);

    /*** IMFByteStreamHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginCreateObject)(
        IMFByteStreamHandler *This,
        IMFByteStream *pByteStream,
        LPCWSTR pwszURL,
        DWORD dwFlags,
        IPropertyStore *pProps,
        IUnknown **ppIUnknownCancelCookie,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndCreateObject)(
        IMFByteStreamHandler *This,
        IMFAsyncResult *pResult,
        MF_OBJECT_TYPE *pObjectType,
        IUnknown **ppObject);

    HRESULT (STDMETHODCALLTYPE *CancelObjectCreation)(
        IMFByteStreamHandler *This,
        IUnknown *pIUnknownCancelCookie);

    HRESULT (STDMETHODCALLTYPE *GetMaxNumberOfBytesRequiredForResolution)(
        IMFByteStreamHandler *This,
        QWORD *pqwBytes);

    END_INTERFACE
} IMFByteStreamHandlerVtbl;

interface IMFByteStreamHandler {
    CONST_VTBL IMFByteStreamHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStreamHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStreamHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStreamHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStreamHandler methods ***/
#define IMFByteStreamHandler_BeginCreateObject(This,pByteStream,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState) \
    ((This)->lpVtbl->BeginCreateObject(This,pByteStream,pwszURL,dwFlags,pProps,ppIUnknownCancelCookie,pCallback,punkState))
#define IMFByteStreamHandler_EndCreateObject(This,pResult,pObjectType,ppObject) \
    ((This)->lpVtbl->EndCreateObject(This,pResult,pObjectType,ppObject))
#define IMFByteStreamHandler_CancelObjectCreation(This,pIUnknownCancelCookie) \
    ((This)->lpVtbl->CancelObjectCreation(This,pIUnknownCancelCookie))
#define IMFByteStreamHandler_GetMaxNumberOfBytesRequiredForResolution(This,pqwBytes) \
    ((This)->lpVtbl->GetMaxNumberOfBytesRequiredForResolution(This,pqwBytes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFByteStreamHandler_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_BYTESTREAM_SERVICE, 0xab025e2b, 0x16d9, 0x4180, 0xa1, 0x27, 0xba, 0x6c, 0x70, 0x15, 0x61, 0x61 );

/*****************************************************************************
 * IMFTrustedInput interface
 */
#ifndef __IMFTrustedInput_INTERFACE_DEFINED__
#define __IMFTrustedInput_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTrustedInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTrustedInputVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTrustedInput *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTrustedInput *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTrustedInput *This);

    /*** IMFTrustedInput methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInputTrustAuthority)(
        IMFTrustedInput *This,
        DWORD dwStreamID,
        REFIID riid,
        IUnknown **ppunkObject);

    END_INTERFACE
} IMFTrustedInputVtbl;

interface IMFTrustedInput {
    CONST_VTBL IMFTrustedInputVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTrustedInput_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTrustedInput_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTrustedInput_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTrustedInput methods ***/
#define IMFTrustedInput_GetInputTrustAuthority(This,dwStreamID,riid,ppunkObject) \
    ((This)->lpVtbl->GetInputTrustAuthority(This,dwStreamID,riid,ppunkObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTrustedInput_INTERFACE_DEFINED__ */

typedef enum _MFPOLICYMANAGER_ACTION {
    PEACTION_NO = 0,
    PEACTION_PLAY = 1,
    PEACTION_COPY = 2,
    PEACTION_EXPORT = 3,
    PEACTION_EXTRACT = 4,
    PEACTION_RESERVED1 = 5,
    PEACTION_RESERVED2 = 6,
    PEACTION_RESERVED3 = 7,
    PEACTION_LAST = 7
} MFPOLICYMANAGER_ACTION;

typedef struct _MFINPUTTRUSTAUTHORITY_ACTION {
    MFPOLICYMANAGER_ACTION Action;
    BYTE *pbTicket;
    DWORD cbTicket;
} MFINPUTTRUSTAUTHORITY_ACCESS_ACTION;

typedef struct _MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS {
    DWORD dwSize;
    DWORD dwVer;
    DWORD cbSignatureOffset;
    DWORD cbSignatureSize;
    DWORD cbExtensionOffset;
    DWORD cbExtensionSize;
    DWORD cActions;
    MFINPUTTRUSTAUTHORITY_ACCESS_ACTION rgOutputActions[ 1 ];
} MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS;


#ifndef __IMFOutputPolicy_FWD_DEFINED__
#define __IMFOutputPolicy_FWD_DEFINED__
typedef interface IMFOutputPolicy IMFOutputPolicy;
#endif /* __IMFOutputPolicy_FWD_DEFINED__ */

EXTERN_GUID( MF_MEDIA_PROTECTION_MANAGER_PROPERTIES, 0x38BD81A9, 0xACEA, 0x4C73, 0x89, 0xB2, 0x55, 0x32, 0xC0, 0xAE, 0xCA, 0x79 );

/*****************************************************************************
 * IMFInputTrustAuthority interface
 */
#ifndef __IMFInputTrustAuthority_INTERFACE_DEFINED__
#define __IMFInputTrustAuthority_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFInputTrustAuthority;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFInputTrustAuthorityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFInputTrustAuthority *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFInputTrustAuthority *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFInputTrustAuthority *This);

    /*** IMFInputTrustAuthority methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDecrypter)(
        IMFInputTrustAuthority *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *RequestAccess)(
        IMFInputTrustAuthority *This,
        MFPOLICYMANAGER_ACTION Action,
        IMFActivate **ppContentEnablerActivate);

    HRESULT (STDMETHODCALLTYPE *GetPolicy)(
        IMFInputTrustAuthority *This,
        MFPOLICYMANAGER_ACTION Action,
        IMFOutputPolicy **ppPolicy);

    HRESULT (STDMETHODCALLTYPE *BindAccess)(
        IMFInputTrustAuthority *This,
        MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS *pParam);

    HRESULT (STDMETHODCALLTYPE *UpdateAccess)(
        IMFInputTrustAuthority *This,
        MFINPUTTRUSTAUTHORITY_ACCESS_PARAMS *pParam);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IMFInputTrustAuthority *This);

    END_INTERFACE
} IMFInputTrustAuthorityVtbl;

interface IMFInputTrustAuthority {
    CONST_VTBL IMFInputTrustAuthorityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFInputTrustAuthority_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFInputTrustAuthority_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFInputTrustAuthority_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFInputTrustAuthority methods ***/
#define IMFInputTrustAuthority_GetDecrypter(This,riid,ppv) \
    ((This)->lpVtbl->GetDecrypter(This,riid,ppv))
#define IMFInputTrustAuthority_RequestAccess(This,Action,ppContentEnablerActivate) \
    ((This)->lpVtbl->RequestAccess(This,Action,ppContentEnablerActivate))
#define IMFInputTrustAuthority_GetPolicy(This,Action,ppPolicy) \
    ((This)->lpVtbl->GetPolicy(This,Action,ppPolicy))
#define IMFInputTrustAuthority_BindAccess(This,pParam) \
    ((This)->lpVtbl->BindAccess(This,pParam))
#define IMFInputTrustAuthority_UpdateAccess(This,pParam) \
    ((This)->lpVtbl->UpdateAccess(This,pParam))
#define IMFInputTrustAuthority_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFInputTrustAuthority_INTERFACE_DEFINED__ */


#ifndef __IMFOutputTrustAuthority_FWD_DEFINED__
#define __IMFOutputTrustAuthority_FWD_DEFINED__
typedef interface IMFOutputTrustAuthority IMFOutputTrustAuthority;
#endif /* __IMFOutputTrustAuthority_FWD_DEFINED__ */

/*****************************************************************************
 * IMFTrustedOutput interface
 */
#ifndef __IMFTrustedOutput_INTERFACE_DEFINED__
#define __IMFTrustedOutput_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTrustedOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTrustedOutputVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTrustedOutput *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTrustedOutput *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTrustedOutput *This);

    /*** IMFTrustedOutput methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOutputTrustAuthorityCount)(
        IMFTrustedOutput *This,
        DWORD *pcOutputTrustAuthorities);

    HRESULT (STDMETHODCALLTYPE *GetOutputTrustAuthorityByIndex)(
        IMFTrustedOutput *This,
        DWORD dwIndex,
        IMFOutputTrustAuthority **ppauthority);

    HRESULT (STDMETHODCALLTYPE *IsFinal)(
        IMFTrustedOutput *This,
        BOOL *pfIsFinal);

    END_INTERFACE
} IMFTrustedOutputVtbl;

interface IMFTrustedOutput {
    CONST_VTBL IMFTrustedOutputVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTrustedOutput_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTrustedOutput_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTrustedOutput_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTrustedOutput methods ***/
#define IMFTrustedOutput_GetOutputTrustAuthorityCount(This,pcOutputTrustAuthorities) \
    ((This)->lpVtbl->GetOutputTrustAuthorityCount(This,pcOutputTrustAuthorities))
#define IMFTrustedOutput_GetOutputTrustAuthorityByIndex(This,dwIndex,ppauthority) \
    ((This)->lpVtbl->GetOutputTrustAuthorityByIndex(This,dwIndex,ppauthority))
#define IMFTrustedOutput_IsFinal(This,pfIsFinal) \
    ((This)->lpVtbl->IsFinal(This,pfIsFinal))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTrustedOutput_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFOutputTrustAuthority interface
 */
#ifndef __IMFOutputTrustAuthority_INTERFACE_DEFINED__
#define __IMFOutputTrustAuthority_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFOutputTrustAuthority;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFOutputTrustAuthorityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFOutputTrustAuthority *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFOutputTrustAuthority *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFOutputTrustAuthority *This);

    /*** IMFOutputTrustAuthority methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAction)(
        IMFOutputTrustAuthority *This,
        MFPOLICYMANAGER_ACTION *pAction);

    HRESULT (STDMETHODCALLTYPE *SetPolicy)(
        IMFOutputTrustAuthority *This,
        IMFOutputPolicy **ppPolicy,
        DWORD nPolicy,
        BYTE **ppbTicket,
        DWORD *pcbTicket);

    END_INTERFACE
} IMFOutputTrustAuthorityVtbl;

interface IMFOutputTrustAuthority {
    CONST_VTBL IMFOutputTrustAuthorityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFOutputTrustAuthority_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFOutputTrustAuthority_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFOutputTrustAuthority_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFOutputTrustAuthority methods ***/
#define IMFOutputTrustAuthority_GetAction(This,pAction) \
    ((This)->lpVtbl->GetAction(This,pAction))
#define IMFOutputTrustAuthority_SetPolicy(This,ppPolicy,nPolicy,ppbTicket,pcbTicket) \
    ((This)->lpVtbl->SetPolicy(This,ppPolicy,nPolicy,ppbTicket,pcbTicket))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFOutputTrustAuthority_INTERFACE_DEFINED__ */


#ifndef __IMFOutputSchema_FWD_DEFINED__
#define __IMFOutputSchema_FWD_DEFINED__
typedef interface IMFOutputSchema IMFOutputSchema;
#endif /* __IMFOutputSchema_FWD_DEFINED__ */

/*****************************************************************************
 * IMFOutputPolicy interface
 */
#ifndef __IMFOutputPolicy_INTERFACE_DEFINED__
#define __IMFOutputPolicy_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFOutputPolicy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFOutputPolicyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFOutputPolicy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFOutputPolicy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFOutputPolicy *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFOutputPolicy *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFOutputPolicy *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFOutputPolicy *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFOutputPolicy *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFOutputPolicy *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFOutputPolicy *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFOutputPolicy *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFOutputPolicy *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFOutputPolicy *This,
        IMFAttributes *pDest);

    /*** IMFOutputPolicy methods ***/
    HRESULT (STDMETHODCALLTYPE *GenerateRequiredSchemas)(
        IMFOutputPolicy *This,
        DWORD dwAttributes,
        GUID guidOutputSubType,
        GUID *rgGuidProtectionSchemasSupported,
        DWORD cProtectionSchemasSupported,
        IMFCollection **ppRequiredProtectionSchemas);

    HRESULT (STDMETHODCALLTYPE *GetOriginatorID)(
        IMFOutputPolicy *This,
        GUID *pguidOriginatorID);

    HRESULT (STDMETHODCALLTYPE *GetMinimumGRLVersion)(
        IMFOutputPolicy *This,
        DWORD *pdwMinimumGRLVersion);

    END_INTERFACE
} IMFOutputPolicyVtbl;

interface IMFOutputPolicy {
    CONST_VTBL IMFOutputPolicyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFOutputPolicy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFOutputPolicy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFOutputPolicy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFOutputPolicy_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFOutputPolicy_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFOutputPolicy_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFOutputPolicy_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFOutputPolicy_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFOutputPolicy_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFOutputPolicy_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFOutputPolicy_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFOutputPolicy_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFOutputPolicy_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFOutputPolicy_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFOutputPolicy_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFOutputPolicy_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFOutputPolicy_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFOutputPolicy_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFOutputPolicy_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFOutputPolicy_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFOutputPolicy_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFOutputPolicy_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFOutputPolicy_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFOutputPolicy_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFOutputPolicy_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFOutputPolicy_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFOutputPolicy_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFOutputPolicy_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFOutputPolicy_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFOutputPolicy_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFOutputPolicy_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFOutputPolicy_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFOutputPolicy_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFOutputPolicy methods ***/
#define IMFOutputPolicy_GenerateRequiredSchemas(This,dwAttributes,guidOutputSubType,rgGuidProtectionSchemasSupported,cProtectionSchemasSupported,ppRequiredProtectionSchemas) \
    ((This)->lpVtbl->GenerateRequiredSchemas(This,dwAttributes,guidOutputSubType,rgGuidProtectionSchemasSupported,cProtectionSchemasSupported,ppRequiredProtectionSchemas))
#define IMFOutputPolicy_GetOriginatorID(This,pguidOriginatorID) \
    ((This)->lpVtbl->GetOriginatorID(This,pguidOriginatorID))
#define IMFOutputPolicy_GetMinimumGRLVersion(This,pdwMinimumGRLVersion) \
    ((This)->lpVtbl->GetMinimumGRLVersion(This,pdwMinimumGRLVersion))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFOutputPolicy_INTERFACE_DEFINED__ */

#define MFOUTPUTATTRIBUTE_DIGITAL               ((DWORD) 0x00000001)
#define MFOUTPUTATTRIBUTE_NONSTANDARDIMPLEMENTATION ((DWORD) 0x00000002)
#define MFOUTPUTATTRIBUTE_VIDEO                 ((DWORD) 0x00000004)
#define MFOUTPUTATTRIBUTE_COMPRESSED            ((DWORD) 0x00000008)
#define MFOUTPUTATTRIBUTE_SOFTWARE              ((DWORD) 0x00000010)
#define MFOUTPUTATTRIBUTE_BUS                   ((DWORD) 0x00000020)
#define MFOUTPUTATTRIBUTE_BUSIMPLEMENTATION     ((DWORD) 0x0000FF00)

EXTERN_GUID( MFCONNECTOR_SPDIF, 0xb94a712, 0xad3e, 0x4cee, 0x83, 0xce, 0xce, 0x32, 0xe3, 0xdb, 0x65, 0x22);

EXTERN_GUID( MFCONNECTOR_UNKNOWN, 0xac3aef5c, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_PCI,  0xac3aef5d, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_PCIX, 0xac3aef5e, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_PCI_Express, 0xac3aef5f, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_AGP, 0xac3aef60, 0xce43, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);

EXTERN_GUID( MFCONNECTOR_VGA, 0x57cd5968, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_SVIDEO, 0x57cd5969, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_COMPOSITE, 0x57cd596a, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_COMPONENT, 0x57cd596b, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_DVI, 0x57cd596c, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_HDMI, 0x57cd596d, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_LVDS, 0x57cd596e, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);

EXTERN_GUID( MFCONNECTOR_D_JPN, 0x57cd5970, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_SDI, 0x57cd5971, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_DISPLAYPORT_EXTERNAL, 0x57cd5972, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_DISPLAYPORT_EMBEDDED, 0x57cd5973, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_UDI_EXTERNAL, 0x57cd5974, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_UDI_EMBEDDED, 0x57cd5975, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);

EXTERN_GUID( MFCONNECTOR_MIRACAST, 0x57cd5977, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_TRANSPORT_AGNOSTIC_DIGITAL_MODE_A, 0x57cd5978, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);
EXTERN_GUID( MFCONNECTOR_TRANSPORT_AGNOSTIC_DIGITAL_MODE_B, 0x57cd5979, 0xce47, 0x11d9, 0x92, 0xdb, 0x00, 0x0b, 0xdb, 0x28, 0xff, 0x98);

#if (NTDDI_VERSION >= NTDDI_WIN10_VB)

EXTERN_C const DECLSPEC_SELECTANY GUID MF_POLICY_ID = { 0xb160c24d, 0xc059, 0x48f1, { 0xa9, 0x1, 0x9e, 0xe2, 0x98, 0xa9, 0xa8, 0xc3 } };

#endif // (NTDDI_VERSION >= NTDDI_WIN10_VB)

/*****************************************************************************
 * IMFOutputSchema interface
 */
#ifndef __IMFOutputSchema_INTERFACE_DEFINED__
#define __IMFOutputSchema_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFOutputSchema;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFOutputSchemaVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFOutputSchema *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFOutputSchema *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFOutputSchema *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFOutputSchema *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFOutputSchema *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFOutputSchema *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFOutputSchema *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFOutputSchema *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFOutputSchema *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFOutputSchema *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFOutputSchema *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFOutputSchema *This,
        IMFAttributes *pDest);

    /*** IMFOutputSchema methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSchemaType)(
        IMFOutputSchema *This,
        GUID *pguidSchemaType);

    HRESULT (STDMETHODCALLTYPE *GetConfigurationData)(
        IMFOutputSchema *This,
        DWORD *pdwVal);

    HRESULT (STDMETHODCALLTYPE *GetOriginatorID)(
        IMFOutputSchema *This,
        GUID *pguidOriginatorID);

    END_INTERFACE
} IMFOutputSchemaVtbl;

interface IMFOutputSchema {
    CONST_VTBL IMFOutputSchemaVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFOutputSchema_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFOutputSchema_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFOutputSchema_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFOutputSchema_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFOutputSchema_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFOutputSchema_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFOutputSchema_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFOutputSchema_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFOutputSchema_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFOutputSchema_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFOutputSchema_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFOutputSchema_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFOutputSchema_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFOutputSchema_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFOutputSchema_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFOutputSchema_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFOutputSchema_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFOutputSchema_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFOutputSchema_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFOutputSchema_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFOutputSchema_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFOutputSchema_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFOutputSchema_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFOutputSchema_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFOutputSchema_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFOutputSchema_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFOutputSchema_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFOutputSchema_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFOutputSchema_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFOutputSchema_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFOutputSchema_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFOutputSchema_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFOutputSchema_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFOutputSchema methods ***/
#define IMFOutputSchema_GetSchemaType(This,pguidSchemaType) \
    ((This)->lpVtbl->GetSchemaType(This,pguidSchemaType))
#define IMFOutputSchema_GetConfigurationData(This,pdwVal) \
    ((This)->lpVtbl->GetConfigurationData(This,pdwVal))
#define IMFOutputSchema_GetOriginatorID(This,pguidOriginatorID) \
    ((This)->lpVtbl->GetOriginatorID(This,pguidOriginatorID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFOutputSchema_INTERFACE_DEFINED__ */

EXTERN_GUID( MFPROTECTION_DISABLE, 0x8cc6d81b, 0xfec6, 0x4d8f, 0x96, 0x4b, 0xcf, 0xba, 0x0b, 0x0d, 0xad, 0x0d);
EXTERN_GUID( MFPROTECTION_CONSTRICTVIDEO, 0x193370ce, 0xc5e4, 0x4c3a, 0x8a, 0x66, 0x69, 0x59, 0xb4, 0xda, 0x44, 0x42);
EXTERN_GUID( MFPROTECTION_CONSTRICTVIDEO_NOOPM, 0xa580e8cd, 0xc247, 0x4957, 0xb9, 0x83, 0x3c, 0x2e, 0xeb, 0xd1, 0xff, 0x59);
EXTERN_GUID( MFPROTECTION_CONSTRICTAUDIO, 0xffc99b44, 0xdf48, 0x4e16, 0x8e, 0x66, 0x09, 0x68, 0x92, 0xc1, 0x57, 0x8a);
EXTERN_GUID( MFPROTECTION_TRUSTEDAUDIODRIVERS, 0x65bdf3d2, 0x0168, 0x4816, 0xa5, 0x33, 0x55, 0xd4, 0x7b, 0x02, 0x71, 0x01);
EXTERN_GUID( MFPROTECTION_HDCP, 0xAE7CC03D, 0xC828, 0x4021, 0xac, 0xb7, 0xd5, 0x78, 0xd2, 0x7a, 0xaf, 0x13);
EXTERN_GUID( MFPROTECTION_CGMSA, 0xE57E69E9, 0x226B, 0x4d31, 0xB4, 0xE3, 0xD3, 0xDB, 0x00, 0x87, 0x36, 0xDD);
EXTERN_GUID( MFPROTECTION_ACP, 0xc3fd11c6, 0xf8b7, 0x4d20, 0xb0, 0x08, 0x1d, 0xb1, 0x7d, 0x61, 0xf2, 0xda);
EXTERN_GUID( MFPROTECTION_WMDRMOTA, 0xa267a6a1, 0x362e, 0x47d0, 0x88, 0x05, 0x46, 0x28, 0x59, 0x8a, 0x23, 0xe4);
EXTERN_GUID( MFPROTECTION_FFT, 0x462a56b2, 0x2866, 0x4bb6, 0x98, 0x0d, 0x6d, 0x8d, 0x9e, 0xdb, 0x1a, 0x8c);
EXTERN_GUID( MFPROTECTION_PROTECTED_SURFACE, 0x4f5d9566, 0xe742, 0x4a25, 0x8d, 0x1f, 0xd2, 0x87, 0xb5, 0xfa, 0x0a, 0xde);
EXTERN_GUID( MFPROTECTION_DISABLE_SCREEN_SCRAPE, 0xa21179a4, 0xb7cd, 0x40d8, 0x96, 0x14, 0x8e, 0xf2, 0x37, 0x1b, 0xa7, 0x8d);

EXTERN_GUID( MFPROTECTION_VIDEO_FRAMES, 0x36a59cbc, 0x7401, 0x4a8c, 0xbc, 0x20, 0x46, 0xa7, 0xc9, 0xe5, 0x97, 0xf0);

EXTERN_GUID(MFPROTECTION_HARDWARE, 0x4ee7f0c1, 0x9ed7, 0x424f, 0xb6, 0xbe, 0x99, 0x6b, 0x33, 0x52, 0x88, 0x56);

EXTERN_GUID( MFPROTECTION_HDCP_WITH_TYPE_ENFORCEMENT, 0xa4a585e8, 0xed60, 0x442d, 0x81, 0x4d, 0xdb, 0x4d, 0x42, 0x20, 0xa0, 0x6d);

typedef enum _MF_OPM_CGMSA_PROTECTION_LEVEL {
    MF_OPM_CGMSA_OFF = 0x0,
    MF_OPM_CGMSA_COPY_FREELY = 0x1,
    MF_OPM_CGMSA_COPY_NO_MORE = 0x2,
    MF_OPM_CGMSA_COPY_ONE_GENERATION = 0x3,
    MF_OPM_CGMSA_COPY_NEVER = 0x4,
    MF_OPM_CGMSA_REDISTRIBUTION_CONTROL_REQUIRED = 0x8
} MF_OPM_CGMSA_PROTECTION_LEVEL;

typedef enum _MF_OPM_ACP_PROTECTION_LEVEL {
    MF_OPM_ACP_OFF = 0,
    MF_OPM_ACP_LEVEL_ONE = 1,
    MF_OPM_ACP_LEVEL_TWO = 2,
    MF_OPM_ACP_LEVEL_THREE = 3,
    MF_OPM_ACP_FORCE_ULONG = 0x7fffffff
} MF_OPM_ACP_PROTECTION_LEVEL;

EXTERN_GUID( MFPROTECTIONATTRIBUTE_BEST_EFFORT, 0xc8e06331, 0x75f0, 0x4ec1, 0x8e, 0x77, 0x17, 0x57, 0x8f, 0x77, 0x3b, 0x46);

EXTERN_GUID( MFPROTECTIONATTRIBUTE_FAIL_OVER, 0x8536abc5, 0x38f1, 0x4151, 0x9c, 0xce, 0xf5, 0x5d, 0x94, 0x12, 0x29, 0xac);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN8)
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID(MFPROTECTION_GRAPHICS_TRANSFER_AES_ENCRYPTION, 0xc873de64, 0xd8a5, 0x49e6, 0x88, 0xbb, 0xfb, 0x96, 0x3f, 0xd3, 0xd4, 0xce);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MFPROTECTIONATTRIBUTE_CONSTRICTVIDEO_IMAGESIZE, 0x8476fc, 0x4b58, 0x4d80, 0xa7, 0x90, 0xe7, 0x29, 0x76, 0x73, 0x16, 0x1d);
EXTERN_GUID( MFPROTECTIONATTRIBUTE_HDCP_SRM, 0x6f302107, 0x3477, 0x4468, 0x8a, 0x8, 0xee, 0xf9, 0xdb, 0x10, 0xe2, 0xf);

#define MAKE_MFPROTECTIONDATA_DISABLE(Disable)  \
    ((DWORD)(Disable ? 0x00000001 : 0))
#define EXTRACT_MFPROTECTIONDATA_DISABLE_ON(Data) \
    (0 != ((Data) & 0x00000001))
#define EXTRACT_MFPROTECTIONDATA_DISABLE_RESERVED(Data) \
    (((DWORD)((Data) & 0xFFFFFFFE)) >> 1)

#define MAKE_MFPROTECTIONDATA_CONSTRICTAUDIO(Level) \
    ((DWORD)(Level))
#define EXTRACT_MFPROTECTIONDATA_CONSTRICTAUDIO_LEVEL(Data) \
    ((DWORD)((Data) & 0x000000FF))
#define EXTRACT_MFPROTECTIONDATA_CONSTRICTAUDIO_RESERVED(Data) \
    (((DWORD)((Data) & 0xFFFFFF00)) >> 8)

typedef enum _MFAudioConstriction
{
    MFaudioConstrictionOff   = 0,
    MFaudioConstriction48_16 = ( MFaudioConstrictionOff + 1 ) ,
    MFaudioConstriction44_16 = ( MFaudioConstriction48_16 + 1 ) ,
    MFaudioConstriction14_14 = ( MFaudioConstriction44_16 + 1 ) ,
    MFaudioConstrictionMute  = ( MFaudioConstriction14_14 + 1 )
} MFAudioConstriction;

#define MAKE_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS(TestCertificateEnable, DigitalOutputDisable, DrmLevel) \
    (((DWORD)((TestCertificateEnable) ? 0x00020000 : 0)) | \
     ((DWORD)((DigitalOutputDisable) ? 0x00010000 : 0)) | \
     ((DWORD)(DrmLevel)))
#if (WINVER >= _WIN32_WINNT_WIN7)
#define MAKE_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS2(TestCertificateEnable, DigitalOutputDisable, CopyOK, DrmLevel) \
    (((DWORD)((TestCertificateEnable) ? 0x00020000 : 0)) | \
     ((DWORD)((DigitalOutputDisable) ? 0x00010000 : 0)) | \
     ((DWORD)((CopyOK) ? 0x00040000 : 0)) | \
     ((DWORD)(DrmLevel)))
#endif // (WINVER >= _WIN32_WINNT_WIN7)
#define EXTRACT_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS_DRMLEVEL(Data) \
    ((DWORD)((Data) & 0x0000FFFF))
#define EXTRACT_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS_DIGITALOUTPUTDISABLE(Data) \
    (0 != ((Data) & 0x00010000))
#define EXTRACT_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS_TESTCERTIFICATEENABLE(Data) \
    (0 != ((Data) & 0x00020000))
#if (WINVER >= _WIN32_WINNT_WIN7)
#define EXTRACT_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS_COPYOK(Data) \
    (0 != ((Data) & 0x00040000))
#define EXTRACT_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS_RESERVED(Data) \
    (((DWORD)((Data) & 0xFFF80000)) >> 19)
#else
#define EXTRACT_MFPROTECTIONDATA_TRUSTEDAUDIODRIVERS_RESERVED(Data) \
    (((DWORD)((Data) & 0xFFF80000)) >> 18)
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFSecureChannel interface
 */
#ifndef __IMFSecureChannel_INTERFACE_DEFINED__
#define __IMFSecureChannel_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSecureChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSecureChannelVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSecureChannel *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSecureChannel *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSecureChannel *This);

    /*** IMFSecureChannel methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCertificate)(
        IMFSecureChannel *This,
        BYTE **ppCert,
        DWORD *pcbCert);

    HRESULT (STDMETHODCALLTYPE *SetupSession)(
        IMFSecureChannel *This,
        BYTE *pbEncryptedSessionKey,
        DWORD cbSessionKey);

    END_INTERFACE
} IMFSecureChannelVtbl;

interface IMFSecureChannel {
    CONST_VTBL IMFSecureChannelVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSecureChannel_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSecureChannel_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSecureChannel_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSecureChannel methods ***/
#define IMFSecureChannel_GetCertificate(This,ppCert,pcbCert) \
    ((This)->lpVtbl->GetCertificate(This,ppCert,pcbCert))
#define IMFSecureChannel_SetupSession(This,pbEncryptedSessionKey,cbSessionKey) \
    ((This)->lpVtbl->SetupSession(This,pbEncryptedSessionKey,cbSessionKey))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSecureChannel_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum SAMPLE_PROTECTION_VERSION {
    SAMPLE_PROTECTION_VERSION_NO = 0,
    SAMPLE_PROTECTION_VERSION_BASIC_LOKI = 1,
    SAMPLE_PROTECTION_VERSION_SCATTER = 2,
    SAMPLE_PROTECTION_VERSION_RC4 = 3,
    SAMPLE_PROTECTION_VERSION_AES128CTR = 4
} SAMPLE_PROTECTION_VERSION;

EXTERN_GUID( MF_SampleProtectionSalt, 0x5403deee, 0xb9ee, 0x438f, 0xaa, 0x83, 0x38, 0x4, 0x99, 0x7e, 0x56, 0x9d);

/*****************************************************************************
 * IMFSampleProtection interface
 */
#ifndef __IMFSampleProtection_INTERFACE_DEFINED__
#define __IMFSampleProtection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSampleProtection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSampleProtectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSampleProtection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSampleProtection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSampleProtection *This);

    /*** IMFSampleProtection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInputProtectionVersion)(
        IMFSampleProtection *This,
        DWORD *pdwVersion);

    HRESULT (STDMETHODCALLTYPE *GetOutputProtectionVersion)(
        IMFSampleProtection *This,
        DWORD *pdwVersion);

    HRESULT (STDMETHODCALLTYPE *GetProtectionCertificate)(
        IMFSampleProtection *This,
        DWORD dwVersion,
        BYTE **ppCert,
        DWORD *pcbCert);

    HRESULT (STDMETHODCALLTYPE *InitOutputProtection)(
        IMFSampleProtection *This,
        DWORD dwVersion,
        DWORD dwOutputId,
        BYTE *pbCert,
        DWORD cbCert,
        BYTE **ppbSeed,
        DWORD *pcbSeed);

    HRESULT (STDMETHODCALLTYPE *InitInputProtection)(
        IMFSampleProtection *This,
        DWORD dwVersion,
        DWORD dwInputId,
        BYTE *pbSeed,
        DWORD cbSeed);

    END_INTERFACE
} IMFSampleProtectionVtbl;

interface IMFSampleProtection {
    CONST_VTBL IMFSampleProtectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSampleProtection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSampleProtection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSampleProtection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSampleProtection methods ***/
#define IMFSampleProtection_GetInputProtectionVersion(This,pdwVersion) \
    ((This)->lpVtbl->GetInputProtectionVersion(This,pdwVersion))
#define IMFSampleProtection_GetOutputProtectionVersion(This,pdwVersion) \
    ((This)->lpVtbl->GetOutputProtectionVersion(This,pdwVersion))
#define IMFSampleProtection_GetProtectionCertificate(This,dwVersion,ppCert,pcbCert) \
    ((This)->lpVtbl->GetProtectionCertificate(This,dwVersion,ppCert,pcbCert))
#define IMFSampleProtection_InitOutputProtection(This,dwVersion,dwOutputId,pbCert,cbCert,ppbSeed,pcbSeed) \
    ((This)->lpVtbl->InitOutputProtection(This,dwVersion,dwOutputId,pbCert,cbCert,ppbSeed,pcbSeed))
#define IMFSampleProtection_InitInputProtection(This,dwVersion,dwInputId,pbSeed,cbSeed) \
    ((This)->lpVtbl->InitInputProtection(This,dwVersion,dwInputId,pbSeed,cbSeed))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSampleProtection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMediaSinkPreroll interface
 */
#ifndef __IMFMediaSinkPreroll_INTERFACE_DEFINED__
#define __IMFMediaSinkPreroll_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSinkPreroll;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSinkPrerollVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSinkPreroll *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSinkPreroll *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSinkPreroll *This);

    /*** IMFMediaSinkPreroll methods ***/
    HRESULT (STDMETHODCALLTYPE *NotifyPreroll)(
        IMFMediaSinkPreroll *This,
        MFTIME hnsUpcomingStartTime);

    END_INTERFACE
} IMFMediaSinkPrerollVtbl;

interface IMFMediaSinkPreroll {
    CONST_VTBL IMFMediaSinkPrerollVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSinkPreroll_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSinkPreroll_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSinkPreroll_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaSinkPreroll methods ***/
#define IMFMediaSinkPreroll_NotifyPreroll(This,hnsUpcomingStartTime) \
    ((This)->lpVtbl->NotifyPreroll(This,hnsUpcomingStartTime))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSinkPreroll_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFFinalizableMediaSink interface
 */
#ifndef __IMFFinalizableMediaSink_INTERFACE_DEFINED__
#define __IMFFinalizableMediaSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFFinalizableMediaSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFFinalizableMediaSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFFinalizableMediaSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFFinalizableMediaSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFFinalizableMediaSink *This);

    /*** IMFMediaSink methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCharacteristics)(
        IMFFinalizableMediaSink *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *AddStreamSink)(
        IMFFinalizableMediaSink *This,
        DWORD dwStreamSinkIdentifier,
        IMFMediaType *pMediaType,
        IMFStreamSink **ppStreamSink);

    HRESULT (STDMETHODCALLTYPE *RemoveStreamSink)(
        IMFFinalizableMediaSink *This,
        DWORD dwStreamSinkIdentifier);

    HRESULT (STDMETHODCALLTYPE *GetStreamSinkCount)(
        IMFFinalizableMediaSink *This,
        DWORD *pcStreamSinkCount);

    HRESULT (STDMETHODCALLTYPE *GetStreamSinkByIndex)(
        IMFFinalizableMediaSink *This,
        DWORD dwIndex,
        IMFStreamSink **ppStreamSink);

    HRESULT (STDMETHODCALLTYPE *GetStreamSinkById)(
        IMFFinalizableMediaSink *This,
        DWORD dwStreamSinkIdentifier,
        IMFStreamSink **ppStreamSink);

    HRESULT (STDMETHODCALLTYPE *SetPresentationClock)(
        IMFFinalizableMediaSink *This,
        IMFPresentationClock *pPresentationClock);

    HRESULT (STDMETHODCALLTYPE *GetPresentationClock)(
        IMFFinalizableMediaSink *This,
        IMFPresentationClock **ppPresentationClock);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFFinalizableMediaSink *This);

    /*** IMFFinalizableMediaSink methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginFinalize)(
        IMFFinalizableMediaSink *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndFinalize)(
        IMFFinalizableMediaSink *This,
        IMFAsyncResult *pResult);

    END_INTERFACE
} IMFFinalizableMediaSinkVtbl;

interface IMFFinalizableMediaSink {
    CONST_VTBL IMFFinalizableMediaSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFFinalizableMediaSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFFinalizableMediaSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFFinalizableMediaSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaSink methods ***/
#define IMFFinalizableMediaSink_GetCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics))
#define IMFFinalizableMediaSink_AddStreamSink(This,dwStreamSinkIdentifier,pMediaType,ppStreamSink) \
    ((This)->lpVtbl->AddStreamSink(This,dwStreamSinkIdentifier,pMediaType,ppStreamSink))
#define IMFFinalizableMediaSink_RemoveStreamSink(This,dwStreamSinkIdentifier) \
    ((This)->lpVtbl->RemoveStreamSink(This,dwStreamSinkIdentifier))
#define IMFFinalizableMediaSink_GetStreamSinkCount(This,pcStreamSinkCount) \
    ((This)->lpVtbl->GetStreamSinkCount(This,pcStreamSinkCount))
#define IMFFinalizableMediaSink_GetStreamSinkByIndex(This,dwIndex,ppStreamSink) \
    ((This)->lpVtbl->GetStreamSinkByIndex(This,dwIndex,ppStreamSink))
#define IMFFinalizableMediaSink_GetStreamSinkById(This,dwStreamSinkIdentifier,ppStreamSink) \
    ((This)->lpVtbl->GetStreamSinkById(This,dwStreamSinkIdentifier,ppStreamSink))
#define IMFFinalizableMediaSink_SetPresentationClock(This,pPresentationClock) \
    ((This)->lpVtbl->SetPresentationClock(This,pPresentationClock))
#define IMFFinalizableMediaSink_GetPresentationClock(This,ppPresentationClock) \
    ((This)->lpVtbl->GetPresentationClock(This,ppPresentationClock))
#define IMFFinalizableMediaSink_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
/*** IMFFinalizableMediaSink methods ***/
#define IMFFinalizableMediaSink_BeginFinalize(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginFinalize(This,pCallback,punkState))
#define IMFFinalizableMediaSink_EndFinalize(This,pResult) \
    ((This)->lpVtbl->EndFinalize(This,pResult))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFFinalizableMediaSink_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IMFStreamingSinkConfig interface
 */
#ifndef __IMFStreamingSinkConfig_INTERFACE_DEFINED__
#define __IMFStreamingSinkConfig_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFStreamingSinkConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFStreamingSinkConfigVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFStreamingSinkConfig *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFStreamingSinkConfig *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFStreamingSinkConfig *This);

    /*** IMFStreamingSinkConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *StartStreaming)(
        IMFStreamingSinkConfig *This,
        BOOL fSeekOffsetIsByteOffset,
        QWORD qwSeekOffset);

    END_INTERFACE
} IMFStreamingSinkConfigVtbl;

interface IMFStreamingSinkConfig {
    CONST_VTBL IMFStreamingSinkConfigVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFStreamingSinkConfig_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFStreamingSinkConfig_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFStreamingSinkConfig_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFStreamingSinkConfig methods ***/
#define IMFStreamingSinkConfig_StartStreaming(This,fSeekOffsetIsByteOffset,qwSeekOffset) \
    ((This)->lpVtbl->StartStreaming(This,fSeekOffsetIsByteOffset,qwSeekOffset))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFStreamingSinkConfig_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IMFRemoteProxy interface
 */
#ifndef __IMFRemoteProxy_INTERFACE_DEFINED__
#define __IMFRemoteProxy_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRemoteProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRemoteProxyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRemoteProxy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRemoteProxy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRemoteProxy *This);

    /*** IMFRemoteProxy methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRemoteObject)(
        IMFRemoteProxy *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetRemoteHost)(
        IMFRemoteProxy *This,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IMFRemoteProxyVtbl;

interface IMFRemoteProxy {
    CONST_VTBL IMFRemoteProxyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRemoteProxy_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRemoteProxy_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRemoteProxy_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRemoteProxy methods ***/
#define IMFRemoteProxy_GetRemoteObject(This,riid,ppv) \
    ((This)->lpVtbl->GetRemoteObject(This,riid,ppv))
#define IMFRemoteProxy_GetRemoteHost(This,riid,ppv) \
    ((This)->lpVtbl->GetRemoteHost(This,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRemoteProxy_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_REMOTE_PROXY, 0x2f00c90e, 0xd2cf, 0x4278, 0x8b, 0x6a, 0xd0, 0x77, 0xfa, 0xc3, 0xa2, 0x5f);

/*****************************************************************************
 * IMFObjectReferenceStream interface
 */
#ifndef __IMFObjectReferenceStream_INTERFACE_DEFINED__
#define __IMFObjectReferenceStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFObjectReferenceStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFObjectReferenceStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFObjectReferenceStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFObjectReferenceStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFObjectReferenceStream *This);

    /*** IMFObjectReferenceStream methods ***/
    HRESULT (STDMETHODCALLTYPE *SaveReference)(
        IMFObjectReferenceStream *This,
        REFIID riid,
        IUnknown *pUnk);

    HRESULT (STDMETHODCALLTYPE *LoadReference)(
        IMFObjectReferenceStream *This,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IMFObjectReferenceStreamVtbl;

interface IMFObjectReferenceStream {
    CONST_VTBL IMFObjectReferenceStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFObjectReferenceStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFObjectReferenceStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFObjectReferenceStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFObjectReferenceStream methods ***/
#define IMFObjectReferenceStream_SaveReference(This,riid,pUnk) \
    ((This)->lpVtbl->SaveReference(This,riid,pUnk))
#define IMFObjectReferenceStream_LoadReference(This,riid,ppv) \
    ((This)->lpVtbl->LoadReference(This,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFObjectReferenceStream_INTERFACE_DEFINED__ */

EXTERN_GUID( CLSID_CreateMediaExtensionObject, 0xef65a54d, 0x0788, 0x45b8, 0x8b, 0x14, 0xbc, 0x0f, 0x6a, 0x6b, 0x51, 0x37);

/*****************************************************************************
 * IMFPMPHost interface
 */
#ifndef __IMFPMPHost_INTERFACE_DEFINED__
#define __IMFPMPHost_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPMPHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPMPHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMPHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMPHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMPHost *This);

    /*** IMFPMPHost methods ***/
    HRESULT (STDMETHODCALLTYPE *LockProcess)(
        IMFPMPHost *This);

    HRESULT (STDMETHODCALLTYPE *UnlockProcess)(
        IMFPMPHost *This);

    HRESULT (STDMETHODCALLTYPE *CreateObjectByCLSID)(
        IMFPMPHost *This,
        REFCLSID clsid,
        IStream *pStream,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IMFPMPHostVtbl;

interface IMFPMPHost {
    CONST_VTBL IMFPMPHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPMPHost_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPMPHost_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPMPHost_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPMPHost methods ***/
#define IMFPMPHost_LockProcess(This) \
    ((This)->lpVtbl->LockProcess(This))
#define IMFPMPHost_UnlockProcess(This) \
    ((This)->lpVtbl->UnlockProcess(This))
#define IMFPMPHost_CreateObjectByCLSID(This,clsid,pStream,riid,ppv) \
    ((This)->lpVtbl->CreateObjectByCLSID(This,clsid,pStream,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFPMPHost_RemoteCreateObjectByCLSID_Proxy(
    IMFPMPHost *This,
    REFCLSID clsid,
    BYTE *pbData,
    DWORD cbData,
    REFIID riid,
    void **ppv);

void __RPC_STUB IMFPMPHost_RemoteCreateObjectByCLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFPMPHost_CreateObjectByCLSID_Proxy(
    REFCLSID clsid,
    IStream *pStream,
    REFIID riid,
    void **ppv);
HRESULT IMFPMPHost_CreateObjectByCLSID_Stub(
    REFCLSID clsid,
    BYTE *pbData,
    DWORD cbData,
    REFIID riid,
    void **ppv);
#endif /* __IMFPMPHost_INTERFACE_DEFINED__ */

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_C const GUID MF_PMP_SERVICE;
#endif // (WINVER >= _WIN32_WINNT_WIN7)

/*****************************************************************************
 * IMFPMPClient interface
 */
#ifndef __IMFPMPClient_INTERFACE_DEFINED__
#define __IMFPMPClient_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPMPClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPMPClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMPClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMPClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMPClient *This);

    /*** IMFPMPClient methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPMPHost)(
        IMFPMPClient *This,
        IMFPMPHost *pPMPHost);

    END_INTERFACE
} IMFPMPClientVtbl;

interface IMFPMPClient {
    CONST_VTBL IMFPMPClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPMPClient_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPMPClient_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPMPClient_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPMPClient methods ***/
#define IMFPMPClient_SetPMPHost(This,pPMPHost) \
    ((This)->lpVtbl->SetPMPHost(This,pPMPHost))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPMPClient_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFPMPServer interface
 */
#ifndef __IMFPMPServer_INTERFACE_DEFINED__
#define __IMFPMPServer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPMPServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPMPServerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMPServer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMPServer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMPServer *This);

    /*** IMFPMPServer methods ***/
    HRESULT (STDMETHODCALLTYPE *LockProcess)(
        IMFPMPServer *This);

    HRESULT (STDMETHODCALLTYPE *UnlockProcess)(
        IMFPMPServer *This);

    HRESULT (STDMETHODCALLTYPE *CreateObjectByCLSID)(
        IMFPMPServer *This,
        REFCLSID clsid,
        REFIID riid,
        void **ppObject);

    END_INTERFACE
} IMFPMPServerVtbl;

interface IMFPMPServer {
    CONST_VTBL IMFPMPServerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPMPServer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPMPServer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPMPServer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPMPServer methods ***/
#define IMFPMPServer_LockProcess(This) \
    ((This)->lpVtbl->LockProcess(This))
#define IMFPMPServer_UnlockProcess(This) \
    ((This)->lpVtbl->UnlockProcess(This))
#define IMFPMPServer_CreateObjectByCLSID(This,clsid,riid,ppObject) \
    ((This)->lpVtbl->CreateObjectByCLSID(This,clsid,riid,ppObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPMPServer_INTERFACE_DEFINED__ */

STDAPI MFCreatePMPServer(
    DWORD dwCreationFlags,
     IMFPMPServer** ppPMPServer
    );

/*****************************************************************************
 * IMFRemoteDesktopPlugin interface
 */
#ifndef __IMFRemoteDesktopPlugin_INTERFACE_DEFINED__
#define __IMFRemoteDesktopPlugin_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRemoteDesktopPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRemoteDesktopPluginVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRemoteDesktopPlugin *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRemoteDesktopPlugin *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRemoteDesktopPlugin *This);

    /*** IMFRemoteDesktopPlugin methods ***/
    HRESULT (STDMETHODCALLTYPE *UpdateTopology)(
        IMFRemoteDesktopPlugin *This,
        IMFTopology *pTopology);

    END_INTERFACE
} IMFRemoteDesktopPluginVtbl;

interface IMFRemoteDesktopPlugin {
    CONST_VTBL IMFRemoteDesktopPluginVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRemoteDesktopPlugin_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRemoteDesktopPlugin_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRemoteDesktopPlugin_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRemoteDesktopPlugin methods ***/
#define IMFRemoteDesktopPlugin_UpdateTopology(This,pTopology) \
    ((This)->lpVtbl->UpdateTopology(This,pTopology))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRemoteDesktopPlugin_INTERFACE_DEFINED__ */

STDAPI MFCreateRemoteDesktopPlugin(
     IMFRemoteDesktopPlugin** ppPlugin );

EXTERN_C HRESULT STDAPICALLTYPE CreateNamedPropertyStore(
         INamedPropertyStore **ppStore
        );

/*****************************************************************************
 * IMFSAMIStyle interface
 */
#ifndef __IMFSAMIStyle_INTERFACE_DEFINED__
#define __IMFSAMIStyle_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSAMIStyle;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSAMIStyleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSAMIStyle *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSAMIStyle *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSAMIStyle *This);

    /*** IMFSAMIStyle methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStyleCount)(
        IMFSAMIStyle *This,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *GetStyles)(
        IMFSAMIStyle *This,
        PROPVARIANT *pPropVarStyleArray);

    HRESULT (STDMETHODCALLTYPE *SetSelectedStyle)(
        IMFSAMIStyle *This,
        LPCWSTR pwszStyle);

    HRESULT (STDMETHODCALLTYPE *GetSelectedStyle)(
        IMFSAMIStyle *This,
        LPWSTR *ppwszStyle);

    END_INTERFACE
} IMFSAMIStyleVtbl;

interface IMFSAMIStyle {
    CONST_VTBL IMFSAMIStyleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSAMIStyle_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSAMIStyle_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSAMIStyle_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSAMIStyle methods ***/
#define IMFSAMIStyle_GetStyleCount(This,pdwCount) \
    ((This)->lpVtbl->GetStyleCount(This,pdwCount))
#define IMFSAMIStyle_GetStyles(This,pPropVarStyleArray) \
    ((This)->lpVtbl->GetStyles(This,pPropVarStyleArray))
#define IMFSAMIStyle_SetSelectedStyle(This,pwszStyle) \
    ((This)->lpVtbl->SetSelectedStyle(This,pwszStyle))
#define IMFSAMIStyle_GetSelectedStyle(This,ppwszStyle) \
    ((This)->lpVtbl->GetSelectedStyle(This,ppwszStyle))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSAMIStyle_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_SAMI_SERVICE, 0x49a89ae7, 0xb4d9, 0x4ef2, 0xaa, 0x5c, 0xf6, 0x5a, 0x3e, 0x5, 0xae, 0x4e );

EXTERN_GUID( MF_PD_SAMI_STYLELIST, 0xe0b73c7f, 0x486d, 0x484e, 0x98, 0x72, 0x4d, 0xe5, 0x19, 0x2a, 0x7b, 0xf8 );

EXTERN_GUID( MF_SD_SAMI_LANGUAGE, 0x36fcb98a, 0x6cd0, 0x44cb, 0xac, 0xb9, 0xa8, 0xf5, 0x60, 0xd, 0xd0, 0xbb );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI MFCreateSampleCopierMFT( IMFTransform** ppCopierMFT);

/*****************************************************************************
 * IMFTranscodeProfile interface
 */
#ifndef __IMFTranscodeProfile_INTERFACE_DEFINED__
#define __IMFTranscodeProfile_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTranscodeProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTranscodeProfileVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTranscodeProfile *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTranscodeProfile *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTranscodeProfile *This);

    /*** IMFTranscodeProfile methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAudioAttributes)(
        IMFTranscodeProfile *This,
        IMFAttributes *pAttrs);

    HRESULT (STDMETHODCALLTYPE *GetAudioAttributes)(
        IMFTranscodeProfile *This,
        IMFAttributes **ppAttrs);

    HRESULT (STDMETHODCALLTYPE *SetVideoAttributes)(
        IMFTranscodeProfile *This,
        IMFAttributes *pAttrs);

    HRESULT (STDMETHODCALLTYPE *GetVideoAttributes)(
        IMFTranscodeProfile *This,
        IMFAttributes **ppAttrs);

    HRESULT (STDMETHODCALLTYPE *SetContainerAttributes)(
        IMFTranscodeProfile *This,
        IMFAttributes *pAttrs);

    HRESULT (STDMETHODCALLTYPE *GetContainerAttributes)(
        IMFTranscodeProfile *This,
        IMFAttributes **ppAttrs);

    END_INTERFACE
} IMFTranscodeProfileVtbl;

interface IMFTranscodeProfile {
    CONST_VTBL IMFTranscodeProfileVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTranscodeProfile_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTranscodeProfile_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTranscodeProfile_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTranscodeProfile methods ***/
#define IMFTranscodeProfile_SetAudioAttributes(This,pAttrs) \
    ((This)->lpVtbl->SetAudioAttributes(This,pAttrs))
#define IMFTranscodeProfile_GetAudioAttributes(This,ppAttrs) \
    ((This)->lpVtbl->GetAudioAttributes(This,ppAttrs))
#define IMFTranscodeProfile_SetVideoAttributes(This,pAttrs) \
    ((This)->lpVtbl->SetVideoAttributes(This,pAttrs))
#define IMFTranscodeProfile_GetVideoAttributes(This,ppAttrs) \
    ((This)->lpVtbl->GetVideoAttributes(This,ppAttrs))
#define IMFTranscodeProfile_SetContainerAttributes(This,pAttrs) \
    ((This)->lpVtbl->SetContainerAttributes(This,pAttrs))
#define IMFTranscodeProfile_GetContainerAttributes(This,ppAttrs) \
    ((This)->lpVtbl->GetContainerAttributes(This,ppAttrs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTranscodeProfile_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MF_TRANSCODE_CONTAINERTYPE, 0x150ff23f, 0x4abc, 0x478b, 0xac, 0x4f, 0xe1, 0x91, 0x6f, 0xba, 0x1c, 0xca );

EXTERN_GUID( MFTranscodeContainerType_ASF, 0x430f6f6e, 0xb6bf, 0x4fc1, 0xa0, 0xbd, 0x9e, 0xe4, 0x6e, 0xee, 0x2a, 0xfb );

EXTERN_GUID( MFTranscodeContainerType_MPEG4, 0xdc6cd05d, 0xb9d0, 0x40ef, 0xbd, 0x35, 0xfa, 0x62, 0x2c, 0x1a, 0xb2, 0x8a );

EXTERN_GUID( MFTranscodeContainerType_MP3, 0xe438b912, 0x83f1, 0x4de6, 0x9e, 0x3a, 0x9f, 0xfb, 0xc6, 0xdd, 0x24, 0xd1 );

EXTERN_GUID( MFTranscodeContainerType_FLAC, 0x31344aa3, 0x05a9, 0x42b5, 0x90, 0x1b, 0x8e, 0x9d, 0x42, 0x57, 0xf7, 0x5e );

EXTERN_GUID( MFTranscodeContainerType_3GP, 0x34c50167, 0x4472, 0x4f34, 0x9e, 0xa0, 0xc4, 0x9f, 0xba, 0xcf, 0x03, 0x7d );

EXTERN_GUID( MFTranscodeContainerType_AC3, 0x6d8d91c3, 0x8c91, 0x4ed1, 0x87, 0x42, 0x8c, 0x34, 0x7d, 0x5b, 0x44, 0xd0 );

EXTERN_GUID( MFTranscodeContainerType_ADTS, 0x132fd27d, 0x0f02, 0x43de, 0xa3, 0x01, 0x38, 0xfb, 0xbb, 0xb3, 0x83, 0x4e );

EXTERN_GUID( MFTranscodeContainerType_MPEG2, 0xbfc2dbf9, 0x7bb4, 0x4f8f, 0xaf, 0xde, 0xe1, 0x12, 0xc4, 0x4b, 0xa8, 0x82 );

EXTERN_GUID( MFTranscodeContainerType_WAVE, 0x64c3453c, 0x0f26, 0x4741, 0xbe, 0x63, 0x87, 0xbd, 0xf8, 0xbb, 0x93, 0x5b );

EXTERN_GUID( MFTranscodeContainerType_AVI, 0x7edfe8af, 0x402f, 0x4d76, 0xa3, 0x3c, 0x61, 0x9f, 0xd1, 0x57, 0xd0, 0xf1 );

#if (WINVER >= _WIN32_WINNT_WIN8)

EXTERN_GUID( MFTranscodeContainerType_FMPEG4, 0x9ba876f1, 0x419f, 0x4b77, 0xa1, 0xe0, 0x35, 0x95, 0x9d, 0x9d, 0x40, 0x4 );
#endif // (WINVER >= _WIN32_WINNT_WIN8)

EXTERN_GUID( MFTranscodeContainerType_AMR, 0x25d5ad3, 0x621a, 0x475b, 0x96, 0x4d, 0x66, 0xb1, 0xc8, 0x24, 0xf0, 0x79 );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

EXTERN_GUID( MF_TRANSCODE_SKIP_METADATA_TRANSFER, 0x4e4469ef, 0xb571, 0x4959, 0x8f, 0x83, 0x3d, 0xcf, 0xba, 0x33, 0xa3, 0x93 );

EXTERN_GUID( MF_TRANSCODE_TOPOLOGYMODE, 0x3e3df610, 0x394a, 0x40b2, 0x9d, 0xea, 0x3b, 0xab, 0x65, 0xb, 0xeb, 0xf2 );

typedef enum _MF_TRANSCODE_TOPOLOGYMODE_FLAGS {
    MF_TRANSCODE_TOPOLOGYMODE_SOFTWARE_ONLY = 0,
    MF_TRANSCODE_TOPOLOGYMODE_HARDWARE_ALLOWED = 1
} MF_TRANSCODE_TOPOLOGYMODE_FLAGS;

EXTERN_GUID( MF_TRANSCODE_ADJUST_PROFILE, 0x9c37c21b, 0x60f, 0x487c, 0xa6, 0x90, 0x80, 0xd7, 0xf5, 0xd, 0x1c, 0x72 );

typedef enum _MF_TRANSCODE_ADJUST_PROFILE_FLAGS {
    MF_TRANSCODE_ADJUST_PROFILE_DEFAULT = 0,
    MF_TRANSCODE_ADJUST_PROFILE_USE_SOURCE_ATTRIBUTES = 1
} MF_TRANSCODE_ADJUST_PROFILE_FLAGS;

EXTERN_GUID( MF_TRANSCODE_ENCODINGPROFILE, 0x6947787c, 0xf508, 0x4ea9, 0xb1, 0xe9, 0xa1, 0xfe, 0x3a, 0x49, 0xfb, 0xc9 );

EXTERN_GUID( MF_TRANSCODE_QUALITYVSSPEED, 0x98332df8, 0x03cd, 0x476b, 0x89, 0xfa, 0x3f, 0x9e, 0x44, 0x2d, 0xec, 0x9f );

EXTERN_GUID( MF_TRANSCODE_DONOT_INSERT_ENCODER, 0xf45aa7ce, 0xab24, 0x4012, 0xa1, 0x1b, 0xdc, 0x82, 0x20, 0x20, 0x14, 0x10 );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum _MF_VIDEO_PROCESSOR_ALGORITHM_TYPE {
    MF_VIDEO_PROCESSOR_ALGORITHM_DEFAULT = 0,
    MF_VIDEO_PROCESSOR_ALGORITHM_MRF_CRF_444 = 1
} MF_VIDEO_PROCESSOR_ALGORITHM_TYPE;

EXTERN_GUID( MF_VIDEO_PROCESSOR_ALGORITHM, 0x4a0a1e1f, 0x272c, 0x4fb6, 0x9e, 0xb1, 0xdb, 0x33, 0xc, 0xbc, 0x97, 0xca);

EXTERN_GUID( MF_XVP_DISABLE_FRC, 0x2c0afa19, 0x7a97, 0x4d5a, 0x9e, 0xe8, 0x16, 0xd4, 0xfc, 0x51, 0x8d, 0x8c );

#if (WINVER >= _WIN32_WINNT_WINBLUE)

EXTERN_GUID( MF_XVP_CALLER_ALLOCATES_OUTPUT, 0x4a2cabc, 0xcab, 0x40b1, 0xa1, 0xb9, 0x75, 0xbc, 0x36, 0x58, 0xf0, 0x0 );

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WINBLUE)

#if (WINVER < _WIN32_WINNT_WINTHRESHOLD)

EXTERN_GUID(CLSID_VideoProcessorMFT, 0x88753b26, 0x5b24, 0x49bd, 0xb2, 0xe7, 0xc, 0x44, 0x5c, 0x78, 0xc9, 0x82);
#endif // (WINVER < _WIN32_WINNT_WINTHRESHOLD)

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

STDAPI MFCreateTranscodeProfile(
     IMFTranscodeProfile** ppTranscodeProfile
    );

STDAPI MFCreateTranscodeTopology(
     IMFMediaSource* pSrc,
     LPCWSTR pwszOutputFilePath,
     IMFTranscodeProfile* pProfile,
     IMFTopology** ppTranscodeTopo
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI MFCreateTranscodeTopologyFromByteStream(
     IMFMediaSource* pSrc,
     IMFByteStream* pOutputStream,
     IMFTranscodeProfile* pProfile,
     IMFTopology** ppTranscodeTopo
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN8)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI MFTranscodeGetAudioOutputAvailableTypes(
  REFGUID guidSubType,
  DWORD dwMFTFlags,
  IMFAttributes* pCodecConfig,
  IMFCollection** ppAvailableTypes );

typedef struct _MF_TRANSCODE_SINK_INFO {
    DWORD dwVideoStreamID;
    IMFMediaType *pVideoMediaType;
    DWORD dwAudioStreamID;
    IMFMediaType *pAudioMediaType;
} MF_TRANSCODE_SINK_INFO;

/*****************************************************************************
 * IMFTranscodeSinkInfoProvider interface
 */
#ifndef __IMFTranscodeSinkInfoProvider_INTERFACE_DEFINED__
#define __IMFTranscodeSinkInfoProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTranscodeSinkInfoProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTranscodeSinkInfoProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTranscodeSinkInfoProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTranscodeSinkInfoProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTranscodeSinkInfoProvider *This);

    /*** IMFTranscodeSinkInfoProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOutputFile)(
        IMFTranscodeSinkInfoProvider *This,
        LPCWSTR pwszFileName);

    HRESULT (STDMETHODCALLTYPE *SetOutputByteStream)(
        IMFTranscodeSinkInfoProvider *This,
        IMFActivate *pByteStreamActivate);

    HRESULT (STDMETHODCALLTYPE *SetProfile)(
        IMFTranscodeSinkInfoProvider *This,
        IMFTranscodeProfile *pProfile);

    HRESULT (STDMETHODCALLTYPE *GetSinkInfo)(
        IMFTranscodeSinkInfoProvider *This,
        MF_TRANSCODE_SINK_INFO *pSinkInfo);

    END_INTERFACE
} IMFTranscodeSinkInfoProviderVtbl;

interface IMFTranscodeSinkInfoProvider {
    CONST_VTBL IMFTranscodeSinkInfoProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTranscodeSinkInfoProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTranscodeSinkInfoProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTranscodeSinkInfoProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTranscodeSinkInfoProvider methods ***/
#define IMFTranscodeSinkInfoProvider_SetOutputFile(This,pwszFileName) \
    ((This)->lpVtbl->SetOutputFile(This,pwszFileName))
#define IMFTranscodeSinkInfoProvider_SetOutputByteStream(This,pByteStreamActivate) \
    ((This)->lpVtbl->SetOutputByteStream(This,pByteStreamActivate))
#define IMFTranscodeSinkInfoProvider_SetProfile(This,pProfile) \
    ((This)->lpVtbl->SetProfile(This,pProfile))
#define IMFTranscodeSinkInfoProvider_GetSinkInfo(This,pSinkInfo) \
    ((This)->lpVtbl->GetSinkInfo(This,pSinkInfo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTranscodeSinkInfoProvider_INTERFACE_DEFINED__ */

 STDAPI MFCreateTranscodeSinkActivate(
  IMFActivate** ppActivate );

/*****************************************************************************
 * IMFFieldOfUseMFTUnlock interface
 */
#ifndef __IMFFieldOfUseMFTUnlock_INTERFACE_DEFINED__
#define __IMFFieldOfUseMFTUnlock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFFieldOfUseMFTUnlock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFFieldOfUseMFTUnlockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFFieldOfUseMFTUnlock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFFieldOfUseMFTUnlock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFFieldOfUseMFTUnlock *This);

    /*** IMFFieldOfUseMFTUnlock methods ***/
    HRESULT (STDMETHODCALLTYPE *Unlock)(
        IMFFieldOfUseMFTUnlock *This,
        IUnknown *pUnkMFT);

    END_INTERFACE
} IMFFieldOfUseMFTUnlockVtbl;

interface IMFFieldOfUseMFTUnlock {
    CONST_VTBL IMFFieldOfUseMFTUnlockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFFieldOfUseMFTUnlock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFFieldOfUseMFTUnlock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFFieldOfUseMFTUnlock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFFieldOfUseMFTUnlock methods ***/
#define IMFFieldOfUseMFTUnlock_Unlock(This,pUnkMFT) \
    ((This)->lpVtbl->Unlock(This,pUnkMFT))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFFieldOfUseMFTUnlock_INTERFACE_DEFINED__ */

typedef struct _MFT_REGISTRATION_INFO {
    CLSID clsid;
    GUID guidCategory;
    UINT32 uiFlags;
    LPCWSTR pszName;
    DWORD cInTypes;
    MFT_REGISTER_TYPE_INFO *pInTypes;
    DWORD cOutTypes;
    MFT_REGISTER_TYPE_INFO *pOutTypes;
} MFT_REGISTRATION_INFO;

EXTERN_GUID(MF_LOCAL_MFT_REGISTRATION_SERVICE, 0xddf5cf9c, 0x4506, 0x45aa, 0xab, 0xf0, 0x6d, 0x5d, 0x94, 0xdd, 0x1b, 0x4a);

/*****************************************************************************
 * IMFLocalMFTRegistration interface
 */
#ifndef __IMFLocalMFTRegistration_INTERFACE_DEFINED__
#define __IMFLocalMFTRegistration_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFLocalMFTRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFLocalMFTRegistrationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFLocalMFTRegistration *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFLocalMFTRegistration *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFLocalMFTRegistration *This);

    /*** IMFLocalMFTRegistration methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterMFTs)(
        IMFLocalMFTRegistration *This,
        MFT_REGISTRATION_INFO *pMFTs,
        DWORD cMFTs);

    END_INTERFACE
} IMFLocalMFTRegistrationVtbl;

interface IMFLocalMFTRegistration {
    CONST_VTBL IMFLocalMFTRegistrationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFLocalMFTRegistration_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFLocalMFTRegistration_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFLocalMFTRegistration_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFLocalMFTRegistration methods ***/
#define IMFLocalMFTRegistration_RegisterMFTs(This,pMFTs,cMFTs) \
    ((This)->lpVtbl->RegisterMFTs(This,pMFTs,cMFTs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFLocalMFTRegistration_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFCapturePhotoConfirmation interface
 */
#ifndef __IMFCapturePhotoConfirmation_INTERFACE_DEFINED__
#define __IMFCapturePhotoConfirmation_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCapturePhotoConfirmation;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCapturePhotoConfirmationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCapturePhotoConfirmation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCapturePhotoConfirmation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCapturePhotoConfirmation *This);

    /*** IMFCapturePhotoConfirmation methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPhotoConfirmationCallback)(
        IMFCapturePhotoConfirmation *This,
        IMFAsyncCallback *pNotificationCallback);

    HRESULT (STDMETHODCALLTYPE *SetPixelFormat)(
        IMFCapturePhotoConfirmation *This,
        GUID subtype);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IMFCapturePhotoConfirmation *This,
        GUID *subtype);

    END_INTERFACE
} IMFCapturePhotoConfirmationVtbl;

interface IMFCapturePhotoConfirmation {
    CONST_VTBL IMFCapturePhotoConfirmationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCapturePhotoConfirmation_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCapturePhotoConfirmation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCapturePhotoConfirmation_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCapturePhotoConfirmation methods ***/
#define IMFCapturePhotoConfirmation_SetPhotoConfirmationCallback(This,pNotificationCallback) \
    ((This)->lpVtbl->SetPhotoConfirmationCallback(This,pNotificationCallback))
#define IMFCapturePhotoConfirmation_SetPixelFormat(This,subtype) \
    ((This)->lpVtbl->SetPixelFormat(This,subtype))
#define IMFCapturePhotoConfirmation_GetPixelFormat(This,subtype) \
    ((This)->lpVtbl->GetPixelFormat(This,subtype))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCapturePhotoConfirmation_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

#if (WINVER >= _WIN32_WINNT_WIN8)

/*****************************************************************************
 * IMFPMPHostApp interface
 */
#ifndef __IMFPMPHostApp_INTERFACE_DEFINED__
#define __IMFPMPHostApp_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPMPHostApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPMPHostAppVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMPHostApp *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMPHostApp *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMPHostApp *This);

    /*** IMFPMPHostApp methods ***/
    HRESULT (STDMETHODCALLTYPE *LockProcess)(
        IMFPMPHostApp *This);

    HRESULT (STDMETHODCALLTYPE *UnlockProcess)(
        IMFPMPHostApp *This);

    HRESULT (STDMETHODCALLTYPE *ActivateClassById)(
        IMFPMPHostApp *This,
        LPCWSTR id,
        IStream *pStream,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IMFPMPHostAppVtbl;

interface IMFPMPHostApp {
    CONST_VTBL IMFPMPHostAppVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPMPHostApp_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPMPHostApp_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPMPHostApp_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPMPHostApp methods ***/
#define IMFPMPHostApp_LockProcess(This) \
    ((This)->lpVtbl->LockProcess(This))
#define IMFPMPHostApp_UnlockProcess(This) \
    ((This)->lpVtbl->UnlockProcess(This))
#define IMFPMPHostApp_ActivateClassById(This,id,pStream,riid,ppv) \
    ((This)->lpVtbl->ActivateClassById(This,id,pStream,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPMPHostApp_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFPMPClientApp interface
 */
#ifndef __IMFPMPClientApp_INTERFACE_DEFINED__
#define __IMFPMPClientApp_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPMPClientApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPMPClientAppVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPMPClientApp *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPMPClientApp *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPMPClientApp *This);

    /*** IMFPMPClientApp methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPMPHost)(
        IMFPMPClientApp *This,
        IMFPMPHostApp *pPMPHost);

    END_INTERFACE
} IMFPMPClientAppVtbl;

interface IMFPMPClientApp {
    CONST_VTBL IMFPMPClientAppVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPMPClientApp_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPMPClientApp_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPMPClientApp_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPMPClientApp methods ***/
#define IMFPMPClientApp_SetPMPHost(This,pPMPHost) \
    ((This)->lpVtbl->SetPMPHost(This,pPMPHost))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPMPClientApp_INTERFACE_DEFINED__ */

#endif
#if (WINVER >= _WIN32_WINNT_WINBLUE)

/*****************************************************************************
 * IMFMediaStreamSourceSampleRequest interface
 */
#ifndef __IMFMediaStreamSourceSampleRequest_INTERFACE_DEFINED__
#define __IMFMediaStreamSourceSampleRequest_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaStreamSourceSampleRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaStreamSourceSampleRequestVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaStreamSourceSampleRequest *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaStreamSourceSampleRequest *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaStreamSourceSampleRequest *This);

    /*** IMFMediaStreamSourceSampleRequest methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSample)(
        IMFMediaStreamSourceSampleRequest *This,
        IMFSample *value);

    END_INTERFACE
} IMFMediaStreamSourceSampleRequestVtbl;

interface IMFMediaStreamSourceSampleRequest {
    CONST_VTBL IMFMediaStreamSourceSampleRequestVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaStreamSourceSampleRequest_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaStreamSourceSampleRequest_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaStreamSourceSampleRequest_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaStreamSourceSampleRequest methods ***/
#define IMFMediaStreamSourceSampleRequest_SetSample(This,value) \
    ((This)->lpVtbl->SetSample(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaStreamSourceSampleRequest_INTERFACE_DEFINED__ */

#endif

/*****************************************************************************
 * IMFTrackedSample interface
 */
#ifndef __IMFTrackedSample_INTERFACE_DEFINED__
#define __IMFTrackedSample_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTrackedSample;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTrackedSampleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTrackedSample *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTrackedSample *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTrackedSample *This);

    /*** IMFTrackedSample methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAllocator)(
        IMFTrackedSample *This,
        IMFAsyncCallback *pSampleAllocator,
        IUnknown *pUnkState);

    END_INTERFACE
} IMFTrackedSampleVtbl;

interface IMFTrackedSample {
    CONST_VTBL IMFTrackedSampleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTrackedSample_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTrackedSample_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTrackedSample_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTrackedSample methods ***/
#define IMFTrackedSample_SetAllocator(This,pSampleAllocator,pUnkState) \
    ((This)->lpVtbl->SetAllocator(This,pSampleAllocator,pUnkState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTrackedSample_INTERFACE_DEFINED__ */

STDAPI MFCreateTrackedSample(
     IMFTrackedSample** ppMFSample);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

STDAPI MFCreateMFByteStreamOnStream(
    IStream*        pStream,
     IMFByteStream** ppByteStream);

STDAPI MFCreateStreamOnMFByteStream(
     IMFByteStream* pByteStream,
     IStream** ppStream);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

STDAPI MFCreateMFByteStreamOnStreamEx(
     IUnknown* punkStream,
     IMFByteStream** ppByteStream );

STDAPI MFCreateStreamOnMFByteStreamEx(
     IMFByteStream* pByteStream,
     REFIID riid,
     void **ppv );

STDAPI MFCreateMediaTypeFromProperties(
     IUnknown* punkStream,
     IMFMediaType** ppMediaType );

STDAPI MFCreatePropertiesFromMediaType(
     IMFMediaType* pMediaType,
     REFIID riid,
     void **ppv );

#if (WINVER >= _WIN32_WINNT_WINBLUE)

DEFINE_GUID(MF_WRAPPED_BUFFER_SERVICE, 0xab544072, 0xc269, 0x4ebc, 0xa5, 0x52, 0x1c, 0x3b, 0x32, 0xbe, 0xd5, 0xca);

EXTERN_GUID(MF_WRAPPED_SAMPLE_SERVICE, 0x31f52bf2, 0xd03e, 0x4048, 0x80, 0xd0, 0x9c, 0x10, 0x46, 0xd8, 0x7c, 0x61);

#endif // (WINVER >= _WIN32_WINNT_WINBLUE)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

EXTERN_GUID( MF_WRAPPED_OBJECT, 0x2b182c4c, 0xd6ac, 0x49f4, 0x89, 0x15, 0xf7, 0x18, 0x87, 0xdb, 0x70, 0xcd);

EXTERN_GUID(CLSID_HttpSchemePlugin, 0x44cb442b, 0x9da9, 0x49df, 0xb3, 0xfd, 0x2, 0x37, 0x77, 0xb1, 0x6e, 0x50);

EXTERN_GUID(CLSID_UrlmonSchemePlugin, 0x9ec4b4f9, 0x3029, 0x45ad, 0x94, 0x7b, 0x34, 0x4d, 0xe2, 0xa2, 0x49, 0xe2);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID(CLSID_NetSchemePlugin, 0xe9f4ebab, 0xd97b, 0x463e, 0xa2, 0xb1, 0xc5, 0x4e, 0xe3, 0xf9, 0x41, 0x4d);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI MFEnumDeviceSources(
                    IMFAttributes*                      pAttributes,
     IMFActivate***    pppSourceActivate,
                   UINT32*                             pcSourceActivate
);

STDAPI MFCreateDeviceSource(
      IMFAttributes*   pAttributes,
     IMFMediaSource** ppSource
);

STDAPI MFCreateDeviceSourceActivate(
      IMFAttributes*   pAttributes,
     IMFActivate**   ppActivate
);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE, 0xc60ac5fe, 0x252a, 0x478f, 0xa0, 0xef, 0xbc, 0x8f, 0xa5, 0xf7, 0xca, 0xd3);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_HW_SOURCE, 0xde7046ba, 0x54d6, 0x4487, 0xa2, 0xa4, 0xec, 0x7c, 0xd, 0x1b, 0xd1, 0x63);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_FRIENDLY_NAME, 0x60d0e559, 0x52f8, 0x4fa2, 0xbb, 0xce, 0xac, 0xdb, 0x34, 0xa8, 0xec, 0x1);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_MEDIA_TYPE, 0x56a819ca, 0xc78, 0x4de4, 0xa0, 0xa7, 0x3d, 0xda, 0xba, 0xf, 0x24, 0xd4);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_CATEGORY, 0x77f0ae69, 0xc3bd, 0x4509, 0x94, 0x1d, 0x46, 0x7e, 0x4d, 0x24, 0x89, 0x9e);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_SYMBOLIC_LINK, 0x58f0aad8, 0x22bf, 0x4f8a, 0xbb, 0x3d, 0xd2, 0xc4, 0x97, 0x8c, 0x6e, 0x2f);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_SYMBOLIC_LINK, 0x98d24b5e, 0x5930, 0x4614, 0xb5, 0xa1, 0xf6, 0x0, 0xf9, 0x35, 0x5a, 0x78);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_MAX_BUFFERS, 0x7dd9b730, 0x4f2d, 0x41d5, 0x8f, 0x95, 0xc, 0xc9, 0xa9, 0x12, 0xba, 0x26);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_ENDPOINT_ID, 0x30da9258, 0xfeb9, 0x47a7, 0xa4, 0x53, 0x76, 0x3a, 0x7a, 0x8e, 0x1c, 0x5f);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_ROLE, 0xbc9d118e, 0x8c67, 0x4a18, 0x85, 0xd4, 0x12, 0xd3, 0x0, 0x40, 0x5, 0x52);

EXTERN_GUID( MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_PROVIDER_DEVICE_ID, 0x36689d42, 0xa06c, 0x40ae, 0x84, 0xcf, 0xf5, 0xa0, 0x34, 0x6, 0x7c, 0xc4);

EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_XADDRESS, 0xbca0be52, 0xc327, 0x44c7, 0x9b, 0x7d, 0x7f, 0xa8, 0xd9, 0xb5, 0xbc, 0xda);

EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_STREAM_URL, 0x9d7b40d2, 0x3617, 0x4043, 0x93, 0xe3, 0x8d, 0x6d, 0xa9, 0xbb, 0x34, 0x92);

EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_USERNAME,0x5d01add, 0x949f, 0x46eb, 0xbc, 0x8e, 0x8b, 0xd, 0x2b, 0x32, 0xd7, 0x9d);

EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_PASSWORD, 0xa0fd7e16, 0x42d9, 0x49df, 0x84, 0xc0, 0xe8, 0x2c, 0x5e, 0xab, 0x88, 0x74);

EXTERN_GUID(CLSID_FrameServerNetworkCameraSource, 0x7a213aa7, 0x866f, 0x414a, 0x8c, 0x1a, 0x27, 0x5c, 0x72, 0x83, 0xa3, 0x95);

EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_GUID, 0x14dd9a1c, 0x7cff, 0x41be, 0xb1, 0xb9, 0xba, 0x1a, 0xc6, 0xec, 0xb5, 0x71);

EXTERN_GUID(MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID, 0x8ac3587a, 0x4ae7, 0x42d8, 0x99, 0xe0, 0x0a, 0x60, 0x13, 0xee, 0xf9, 0x0f);

EXTERN_GUID( MF_DEVICESTREAM_IMAGE_STREAM, 0xa7ffb865, 0xe7b2, 0x43b0, 0x9f, 0x6f, 0x9a, 0xf2, 0xa0, 0xe5, 0xf, 0xc0);

EXTERN_GUID( MF_DEVICESTREAM_INDEPENDENT_IMAGE_STREAM, 0x3eeec7e, 0xd605, 0x4576, 0x8b, 0x29, 0x65, 0x80, 0xb4, 0x90, 0xd7, 0xd3);

EXTERN_GUID( MF_DEVICESTREAM_STREAM_ID, 0x11bd5120, 0xd124, 0x446b, 0x88, 0xe6, 0x17, 0x6, 0x2, 0x57, 0xff, 0xf9);

EXTERN_GUID( MF_DEVICESTREAM_STREAM_CATEGORY, 0x2939e7b8, 0xa62e, 0x4579, 0xb6, 0x74, 0xd4, 0x7, 0x3d, 0xfa, 0xbb, 0xba);

EXTERN_GUID( MF_DEVICESTREAM_FRAMESERVER_SHARED, 0x1CB378E9, 0xB279, 0x41D4, 0xAF, 0x97, 0x34, 0xA2, 0x43, 0xE6, 0x83, 0x20);

EXTERN_GUID( MF_DEVICESTREAM_TRANSFORM_STREAM_ID,  0xe63937b7, 0xdaaf, 0x4d49, 0x81, 0x5f, 0xd8, 0x26, 0xf8, 0xad, 0x31, 0xe7);

EXTERN_GUID( MF_DEVICESTREAM_EXTENSION_PLUGIN_CLSID, 0x048e6558, 0x60c4, 0x4173, 0xbd, 0x5b, 0x6a, 0x3c, 0xa2, 0x89, 0x6a, 0xee);

EXTERN_GUID( MF_DEVICEMFT_EXTENSION_PLUGIN_CLSID, 0x844dbae, 0x34fa, 0x48a0, 0xa7, 0x83, 0x8e, 0x69, 0x6f, 0xb1, 0xc9, 0xa8);

EXTERN_GUID( MF_DEVICESTREAM_EXTENSION_PLUGIN_CONNECTION_POINT,  0x37f9375c, 0xe664, 0x4ea4, 0xaa, 0xe4, 0xcb, 0x6d, 0x1d, 0xac, 0xa1, 0xf4);

EXTERN_GUID( MF_DEVICESTREAM_TAKEPHOTO_TRIGGER, 0x1d180e34, 0x538c, 0x4fbb, 0xa7, 0x5a, 0x85, 0x9a, 0xf7, 0xd2, 0x61, 0xa6 );

EXTERN_GUID( MF_DEVICESTREAM_MAX_FRAME_BUFFERS, 0x1684cebe, 0x3175, 0x4985, 0x88, 0x2c, 0x0e, 0xfd, 0x3e, 0x8a, 0xc1, 0x1e );

EXTERN_GUID( MF_DEVICEMFT_CONNECTED_FILTER_KSCONTROL, 0x6a2c4fa6, 0xd179, 0x41cd, 0x95, 0x23, 0x82, 0x23, 0x71, 0xea, 0x40, 0xe5);

EXTERN_GUID( MF_DEVICEMFT_CONNECTED_PIN_KSCONTROL, 0xe63310f7, 0xb244, 0x4ef8, 0x9a, 0x7d, 0x24, 0xc7, 0x4e, 0x32, 0xeb, 0xd0);

EXTERN_GUID( MF_DEVICE_THERMAL_STATE_CHANGED, 0x70ccd0af, 0xfc9f, 0x4deb, 0xa8, 0x75, 0x9f, 0xec, 0xd1, 0x6c, 0x5b, 0xd4 );

EXTERN_GUID(MFSampleExtension_DeviceTimestamp, 0x8f3e35e7, 0x2dcd, 0x4887, 0x86, 0x22, 0x2a, 0x58, 0xba, 0xa6, 0x52, 0xb0);

EXTERN_GUID(MFSampleExtension_Spatial_CameraViewTransform , 0x4e251fa4, 0x830f, 0x4770, 0x85, 0x9a, 0x4b, 0x8d, 0x99, 0xaa, 0x80, 0x9b);

EXTERN_GUID(MFSampleExtension_Spatial_CameraCoordinateSystem , 0x9d13c82f, 0x2199, 0x4e67, 0x91, 0xcd, 0xd1, 0xa4, 0x18, 0x1f, 0x25, 0x34);

EXTERN_GUID(MFSampleExtension_Spatial_CameraProjectionTransform , 0x47f9fcb5, 0x2a02, 0x4f26, 0xa4, 0x77, 0x79, 0x2f, 0xdf, 0x95, 0x88, 0x6a);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


#ifndef __IMFSignedLibrary_FWD_DEFINED__
#define __IMFSignedLibrary_FWD_DEFINED__
typedef interface IMFSignedLibrary IMFSignedLibrary;
#endif /* __IMFSignedLibrary_FWD_DEFINED__ */

/*****************************************************************************
 * IMFProtectedEnvironmentAccess interface
 */
#ifndef __IMFProtectedEnvironmentAccess_INTERFACE_DEFINED__
#define __IMFProtectedEnvironmentAccess_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFProtectedEnvironmentAccess;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFProtectedEnvironmentAccessVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFProtectedEnvironmentAccess *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFProtectedEnvironmentAccess *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFProtectedEnvironmentAccess *This);

    /*** IMFProtectedEnvironmentAccess methods ***/
    HRESULT (STDMETHODCALLTYPE *Call)(
        IMFProtectedEnvironmentAccess *This,
        UINT32 inputLength,
        const BYTE *input,
        UINT32 outputLength,
        BYTE *output);

    HRESULT (STDMETHODCALLTYPE *ReadGRL)(
        IMFProtectedEnvironmentAccess *This,
        UINT32 *outputLength,
        BYTE **output);

    END_INTERFACE
} IMFProtectedEnvironmentAccessVtbl;

interface IMFProtectedEnvironmentAccess {
    CONST_VTBL IMFProtectedEnvironmentAccessVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFProtectedEnvironmentAccess_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFProtectedEnvironmentAccess_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFProtectedEnvironmentAccess_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFProtectedEnvironmentAccess methods ***/
#define IMFProtectedEnvironmentAccess_Call(This,inputLength,input,outputLength,output) \
    ((This)->lpVtbl->Call(This,inputLength,input,outputLength,output))
#define IMFProtectedEnvironmentAccess_ReadGRL(This,outputLength,output) \
    ((This)->lpVtbl->ReadGRL(This,outputLength,output))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFProtectedEnvironmentAccess_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSignedLibrary interface
 */
#ifndef __IMFSignedLibrary_INTERFACE_DEFINED__
#define __IMFSignedLibrary_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSignedLibrary;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSignedLibraryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSignedLibrary *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSignedLibrary *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSignedLibrary *This);

    /*** IMFSignedLibrary methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProcedureAddress)(
        IMFSignedLibrary *This,
        LPCSTR name,
        PVOID *address);

    END_INTERFACE
} IMFSignedLibraryVtbl;

interface IMFSignedLibrary {
    CONST_VTBL IMFSignedLibraryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSignedLibrary_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSignedLibrary_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSignedLibrary_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSignedLibrary methods ***/
#define IMFSignedLibrary_GetProcedureAddress(This,name,address) \
    ((This)->lpVtbl->GetProcedureAddress(This,name,address))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSignedLibrary_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSystemId interface
 */
#ifndef __IMFSystemId_INTERFACE_DEFINED__
#define __IMFSystemId_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSystemId;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSystemIdVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSystemId *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSystemId *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSystemId *This);

    /*** IMFSystemId methods ***/
    HRESULT (STDMETHODCALLTYPE *GetData)(
        IMFSystemId *This,
        UINT32 *size,
        BYTE **data);

    HRESULT (STDMETHODCALLTYPE *Setup)(
        IMFSystemId *This,
        UINT32 stage,
        UINT32 cbIn,
        const BYTE *pbIn,
        UINT32 *pcbOut,
        BYTE **ppbOut);

    END_INTERFACE
} IMFSystemIdVtbl;

interface IMFSystemId {
    CONST_VTBL IMFSystemIdVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSystemId_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSystemId_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSystemId_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSystemId methods ***/
#define IMFSystemId_GetData(This,size,data) \
    ((This)->lpVtbl->GetData(This,size,data))
#define IMFSystemId_Setup(This,stage,cbIn,pbIn,pcbOut,ppbOut) \
    ((This)->lpVtbl->Setup(This,stage,cbIn,pbIn,pcbOut,ppbOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSystemId_INTERFACE_DEFINED__ */

STDAPI MFCreateProtectedEnvironmentAccess(
     IMFProtectedEnvironmentAccess**   ppAccess
);

STDAPI MFLoadSignedLibrary(
     LPCWSTR pszName,
     IMFSignedLibrary**   ppLib
);

STDAPI MFGetSystemId(
     IMFSystemId** ppId
);

STDAPI MFGetLocalId(
     const BYTE *verifier,
     UINT32 size,
     LPWSTR *id
);

// {40871C59-AB40-471F-8DC3-1F259D862479}
DEFINE_GUID(CLSID_MPEG2ByteStreamPlugin,
0x40871c59, 0xab40, 0x471f, 0x8d, 0xc3, 0x1f, 0x25, 0x9d, 0x86, 0x24, 0x79);

// {f09992f7-9fba-4c4a-a37f-8c47b4e1dfe7}
EXTERN_GUID( MF_MEDIASOURCE_SERVICE, 0xf09992f7, 0x9fba, 0x4c4a, 0xa3, 0x7f, 0x8c, 0x47, 0xb4, 0xe1, 0xdf, 0xe7 );

// {014A5031-2F05-4C6A-9F9C-7D0DC4EDA5F4}
EXTERN_GUID( MF_ACCESS_CONTROLLED_MEDIASOURCE_SERVICE, 0x14a5031, 0x2f05, 0x4c6a, 0x9f, 0x9c, 0x7d, 0xd, 0xc4, 0xed, 0xa5, 0xf4 );

typedef struct _MFCONTENTPROTECTIONDEVICE_INPUT_DATA {
    DWORD HWProtectionFunctionID;
    DWORD PrivateDataByteCount;
    DWORD HWProtectionDataByteCount;
    DWORD Reserved;
    BYTE InputData[ 4 ];
} MFCONTENTPROTECTIONDEVICE_INPUT_DATA;

typedef struct _MFCONTENTPROTECTIONDEVICE_OUTPUT_DATA {
    DWORD PrivateDataByteCount;
    DWORD MaxHWProtectionDataByteCount;
    DWORD HWProtectionDataByteCount;
    HRESULT Status;
    LONGLONG TransportTimeInHundredsOfNanoseconds;
    LONGLONG ExecutionTimeInHundredsOfNanoseconds;
    BYTE OutputData[ 4 ];
} MFCONTENTPROTECTIONDEVICE_OUTPUT_DATA;

#define MFCONTENTPROTECTIONDEVICE_FUNCTIONID_START 0x04000000
#define MFCONTENTPROTECTIONDEVICE_REALTIMECLIENT_DATA_FUNCTIONID MFCONTENTPROTECTIONDEVICE_FUNCTIONID_START

typedef struct _MFCONTENTPROTECTIONDEVICE_REALTIMECLIENT_DATA {
    DWORD TaskIndex;
    WCHAR ClassName[MAX_PATH];
    LONG BasePriority;
} MFCONTENTPROTECTIONDEVICE_REALTIMECLIENT_DATA;

/*****************************************************************************
 * IMFContentProtectionDevice interface
 */
#ifndef __IMFContentProtectionDevice_INTERFACE_DEFINED__
#define __IMFContentProtectionDevice_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFContentProtectionDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFContentProtectionDeviceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFContentProtectionDevice *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFContentProtectionDevice *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFContentProtectionDevice *This);

    /*** IMFContentProtectionDevice methods ***/
    HRESULT (STDMETHODCALLTYPE *InvokeFunction)(
        IMFContentProtectionDevice *This,
        DWORD FunctionId,
        DWORD InputBufferByteCount,
        const BYTE *InputBuffer,
        DWORD *OutputBufferByteCount,
        BYTE *OutputBuffer);

    HRESULT (STDMETHODCALLTYPE *GetPrivateDataByteCount)(
        IMFContentProtectionDevice *This,
        DWORD *PrivateInputByteCount,
        DWORD *PrivateOutputByteCount);

    END_INTERFACE
} IMFContentProtectionDeviceVtbl;

interface IMFContentProtectionDevice {
    CONST_VTBL IMFContentProtectionDeviceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFContentProtectionDevice_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFContentProtectionDevice_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFContentProtectionDevice_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFContentProtectionDevice methods ***/
#define IMFContentProtectionDevice_InvokeFunction(This,FunctionId,InputBufferByteCount,InputBuffer,OutputBufferByteCount,OutputBuffer) \
    ((This)->lpVtbl->InvokeFunction(This,FunctionId,InputBufferByteCount,InputBuffer,OutputBufferByteCount,OutputBuffer))
#define IMFContentProtectionDevice_GetPrivateDataByteCount(This,PrivateInputByteCount,PrivateOutputByteCount) \
    ((This)->lpVtbl->GetPrivateDataByteCount(This,PrivateInputByteCount,PrivateOutputByteCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFContentProtectionDevice_INTERFACE_DEFINED__ */

STDAPI MFCreateContentProtectionDevice(
    REFGUID ProtectionSystemId,
    IMFContentProtectionDevice **ContentProtectionDevice);

STDAPI MFIsContentProtectionDeviceSupported(
    REFGUID ProtectionSystemId,
    BOOL *isSupported);

/*****************************************************************************
 * IMFContentDecryptorContext interface
 */
#ifndef __IMFContentDecryptorContext_INTERFACE_DEFINED__
#define __IMFContentDecryptorContext_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFContentDecryptorContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFContentDecryptorContextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFContentDecryptorContext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFContentDecryptorContext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFContentDecryptorContext *This);

    /*** IMFContentDecryptorContext methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeHardwareKey)(
        IMFContentDecryptorContext *This,
        UINT InputPrivateDataByteCount,
        void *InputPrivateData,
        UINT64 *OutputPrivateData);

    END_INTERFACE
} IMFContentDecryptorContextVtbl;

interface IMFContentDecryptorContext {
    CONST_VTBL IMFContentDecryptorContextVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFContentDecryptorContext_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFContentDecryptorContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFContentDecryptorContext_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFContentDecryptorContext methods ***/
#define IMFContentDecryptorContext_InitializeHardwareKey(This,InputPrivateDataByteCount,InputPrivateData,OutputPrivateData) \
    ((This)->lpVtbl->InitializeHardwareKey(This,InputPrivateDataByteCount,InputPrivateData,OutputPrivateData))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFContentDecryptorContext_INTERFACE_DEFINED__ */

EXTERN_GUID( MF_CONTENT_DECRYPTOR_SERVICE, 0x68a72927, 0xfc7b, 0x44ee, 0x85, 0xf4, 0x7c, 0x51, 0xbd, 0x55, 0xa6, 0x59);

EXTERN_GUID( MF_CONTENT_PROTECTION_DEVICE_SERVICE, 0xff58436f, 0x76a0, 0x41fe, 0xb5, 0x66, 0x10, 0xcc, 0x53, 0x96, 0x2e, 0xdd);

STDAPI MFCreateContentDecryptorContext(
    REFGUID guidMediaProtectionSystemId,
    IMFDXGIDeviceManager *pD3DManager,
    IMFContentProtectionDevice *pContentProtectionDevice,
    IMFContentDecryptorContext **ppContentDecryptorContext);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#pragma region Application Family
#if (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

EXTERN_GUID( MF_SD_AUDIO_ENCODER_DELAY,   0x8e85422c, 0x73de, 0x403f, 0x9a, 0x35, 0x55, 0x0a, 0xd6, 0xe8, 0xb9, 0x51 );

EXTERN_GUID( MF_SD_AUDIO_ENCODER_PADDING, 0x529c7f2c, 0xac4b, 0x4e3f, 0xbf, 0xc3, 0x09, 0x02, 0x19, 0x49, 0x82, 0xcb );

EXTERN_GUID(CLSID_MSH264DecoderMFT, 0x62CE7E72, 0x4C71, 0x4d20, 0xB1, 0x5D, 0x45, 0x28, 0x31, 0xA8, 0x7D, 0x9D);

EXTERN_GUID(CLSID_MSH264EncoderMFT, 0x6ca50344, 0x051a, 0x4ded, 0x97, 0x79, 0xa4, 0x33, 0x05, 0x16, 0x5e, 0x35);

EXTERN_GUID(CLSID_MSDDPlusDecMFT, 0x177C0AFE, 0x900B, 0x48d4, 0x9E, 0x4C, 0x57, 0xAD, 0xD2, 0x50, 0xB3, 0xD4);

EXTERN_GUID(CLSID_MP3DecMediaObject, 0xbbeea841, 0x0a63, 0x4f52, 0xa7, 0xab, 0xa9, 0xb3, 0xa8, 0x4e, 0xd3, 0x8a);

EXTERN_GUID(CLSID_MSAACDecMFT, 0x32d186a7, 0x218f, 0x4c75, 0x88, 0x76, 0xdd, 0x77, 0x27, 0x3a, 0x89, 0x99);

EXTERN_GUID(CLSID_MSH265DecoderMFT, 0x420A51A3, 0xD605, 0x430C, 0xB4, 0xFC, 0x45, 0x27, 0x4F, 0xA6, 0xC5, 0x62);

EXTERN_GUID(CLSID_WMVDecoderMFT, 0x82d353df, 0x90bd, 0x4382, 0x8b, 0xc2, 0x3f, 0x61, 0x92, 0xb7, 0x6e, 0x34);

EXTERN_GUID(CLSID_WMADecMediaObject, 0x2eeb4adf, 0x4578, 0x4d10, 0xbc, 0xa7, 0xbb, 0x95, 0x5f, 0x56, 0x32, 0x0a);

EXTERN_GUID(CLSID_MSMPEGAudDecMFT, 0x70707B39, 0xB2CA, 0x4015, 0xAB, 0xEA, 0xF8, 0x44, 0x7D, 0x22, 0xD8, 0x8B);

EXTERN_GUID(CLSID_MSMPEGDecoderMFT, 0x2D709E52, 0x123F, 0x49b5, 0x9C, 0xBC, 0x9A, 0xF5, 0xCD, 0xE2, 0x8F, 0xB9);

EXTERN_GUID(CLSID_AudioResamplerMediaObject, 0xf447b69e, 0x1884, 0x4a7e, 0x80, 0x55, 0x34, 0x6f, 0x74, 0xd6, 0xed, 0xb3);

EXTERN_GUID(CLSID_MSVPxDecoder, 0xE3AAF548, 0xC9A4, 0x4C6E, 0x23, 0x4D, 0x5A, 0xDA, 0x37, 0x4B, 0x00, 0x00);

EXTERN_GUID(CLSID_MSOpusDecoder, 0x63e17c10, 0x2d43, 0x4c42, 0x8f, 0xe3, 0x8d, 0x8b, 0x63, 0xe4, 0x6a, 0x6a);

EXTERN_GUID(CLSID_VideoProcessorMFT, 0x88753b26, 0x5b24, 0x49bd, 0xb2, 0xe7, 0xc, 0x44, 0x5c, 0x78, 0xc9, 0x82);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)
#pragma endregion

#pragma region EME2 helper types
#if (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

typedef enum MF_MEDIAKEYSESSION_TYPE {
    MF_MEDIAKEYSESSION_TYPE_TEMPORARY = 0,
    MF_MEDIAKEYSESSION_TYPE_PERSISTENT_LICENSE = 1,
    MF_MEDIAKEYSESSION_TYPE_PERSISTENT_RELEASE_MESSAGE = 2,
    MF_MEDIAKEYSESSION_TYPE_PERSISTENT_USAGE_RECORD = 3
} MF_MEDIAKEYSESSION_TYPE;

typedef enum MF_MEDIAKEY_STATUS {
    MF_MEDIAKEY_STATUS_USABLE = 0,
    MF_MEDIAKEY_STATUS_EXPIRED = 1,
    MF_MEDIAKEY_STATUS_OUTPUT_DOWNSCALED = 2,
    MF_MEDIAKEY_STATUS_OUTPUT_NOT_ALLOWED = 3,
    MF_MEDIAKEY_STATUS_STATUS_PENDING = 4,
    MF_MEDIAKEY_STATUS_INTERNAL_ERROR = 5,
    MF_MEDIAKEY_STATUS_RELEASED = 6,
    MF_MEDIAKEY_STATUS_OUTPUT_RESTRICTED = 7
} MF_MEDIAKEY_STATUS;

typedef struct MFMediaKeyStatus {
    BYTE *pbKeyId;
    UINT cbKeyId;
    MF_MEDIAKEY_STATUS eMediaKeyStatus;
} MFMediaKeyStatus;

typedef enum MF_MEDIAKEYSESSION_MESSAGETYPE {
    MF_MEDIAKEYSESSION_MESSAGETYPE_LICENSE_REQUEST = 0,
    MF_MEDIAKEYSESSION_MESSAGETYPE_LICENSE_RENEWAL = 1,
    MF_MEDIAKEYSESSION_MESSAGETYPE_LICENSE_RELEASE = 2,
    MF_MEDIAKEYSESSION_MESSAGETYPE_INDIVIDUALIZATION_REQUEST = 3
} MF_MEDIAKEYSESSION_MESSAGETYPE;

typedef enum _MF_CROSS_ORIGIN_POLICY {
    MF_CROSS_ORIGIN_POLICY_NONE = 0,
    MF_CROSS_ORIGIN_POLICY_ANONYMOUS = 1,
    MF_CROSS_ORIGIN_POLICY_USE_CREDENTIALS = 2
} MF_CROSS_ORIGIN_POLICY;

/*****************************************************************************
 * IMFNetCrossOriginSupport interface
 */
#ifndef __IMFNetCrossOriginSupport_INTERFACE_DEFINED__
#define __IMFNetCrossOriginSupport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFNetCrossOriginSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFNetCrossOriginSupportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFNetCrossOriginSupport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFNetCrossOriginSupport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFNetCrossOriginSupport *This);

    /*** IMFNetCrossOriginSupport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCrossOriginPolicy)(
        IMFNetCrossOriginSupport *This,
        MF_CROSS_ORIGIN_POLICY *pPolicy);

    HRESULT (STDMETHODCALLTYPE *GetSourceOrigin)(
        IMFNetCrossOriginSupport *This,
        LPWSTR *wszSourceOrigin);

    HRESULT (STDMETHODCALLTYPE *IsSameOrigin)(
        IMFNetCrossOriginSupport *This,
        LPCWSTR wszURL,
        BOOL *pfIsSameOrigin);

    END_INTERFACE
} IMFNetCrossOriginSupportVtbl;

interface IMFNetCrossOriginSupport {
    CONST_VTBL IMFNetCrossOriginSupportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFNetCrossOriginSupport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFNetCrossOriginSupport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFNetCrossOriginSupport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFNetCrossOriginSupport methods ***/
#define IMFNetCrossOriginSupport_GetCrossOriginPolicy(This,pPolicy) \
    ((This)->lpVtbl->GetCrossOriginPolicy(This,pPolicy))
#define IMFNetCrossOriginSupport_GetSourceOrigin(This,wszSourceOrigin) \
    ((This)->lpVtbl->GetSourceOrigin(This,wszSourceOrigin))
#define IMFNetCrossOriginSupport_IsSameOrigin(This,wszURL,pfIsSameOrigin) \
    ((This)->lpVtbl->IsSameOrigin(This,wszURL,pfIsSameOrigin))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFNetCrossOriginSupport_INTERFACE_DEFINED__ */

EXTERN_GUID(MFNETSOURCE_CROSS_ORIGIN_SUPPORT, 0x9842207c, 0xb02c, 0x4271, 0xa2, 0xfc, 0x72, 0xe4, 0x93, 0x8, 0xe5, 0xc2);

/*****************************************************************************
 * IMFHttpDownloadRequest interface
 */
#ifndef __IMFHttpDownloadRequest_INTERFACE_DEFINED__
#define __IMFHttpDownloadRequest_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFHttpDownloadRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFHttpDownloadRequestVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFHttpDownloadRequest *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFHttpDownloadRequest *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFHttpDownloadRequest *This);

    /*** IMFHttpDownloadRequest methods ***/
    HRESULT (STDMETHODCALLTYPE *AddHeader)(
        IMFHttpDownloadRequest *This,
        LPCWSTR szHeader);

    HRESULT (STDMETHODCALLTYPE *BeginSendRequest)(
        IMFHttpDownloadRequest *This,
        const BYTE *pbPayload,
        ULONG cbPayload,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndSendRequest)(
        IMFHttpDownloadRequest *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *BeginReceiveResponse)(
        IMFHttpDownloadRequest *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndReceiveResponse)(
        IMFHttpDownloadRequest *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *BeginReadPayload)(
        IMFHttpDownloadRequest *This,
        BYTE *pb,
        ULONG cb,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndReadPayload)(
        IMFHttpDownloadRequest *This,
        IMFAsyncResult *pResult,
        QWORD *pqwOffset,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *QueryHeader)(
        IMFHttpDownloadRequest *This,
        LPCWSTR szHeaderName,
        DWORD dwIndex,
        LPWSTR *ppszHeaderValue);

    HRESULT (STDMETHODCALLTYPE *GetURL)(
        IMFHttpDownloadRequest *This,
        LPWSTR *ppszURL);

    HRESULT (STDMETHODCALLTYPE *HasNullSourceOrigin)(
        IMFHttpDownloadRequest *This,
        BOOL *pfNullSourceOrigin);

    HRESULT (STDMETHODCALLTYPE *GetTimeSeekResult)(
        IMFHttpDownloadRequest *This,
        QWORD *pqwStartTime,
        QWORD *pqwStopTime,
        QWORD *pqwDuration);

    HRESULT (STDMETHODCALLTYPE *GetHttpStatus)(
        IMFHttpDownloadRequest *This,
        DWORD *pdwHttpStatus);

    HRESULT (STDMETHODCALLTYPE *GetAtEndOfPayload)(
        IMFHttpDownloadRequest *This,
        BOOL *pfAtEndOfPayload);

    HRESULT (STDMETHODCALLTYPE *GetTotalLength)(
        IMFHttpDownloadRequest *This,
        QWORD *pqwTotalLength);

    HRESULT (STDMETHODCALLTYPE *GetRangeEndOffset)(
        IMFHttpDownloadRequest *This,
        QWORD *pqwRangeEnd);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IMFHttpDownloadRequest *This);

    END_INTERFACE
} IMFHttpDownloadRequestVtbl;

interface IMFHttpDownloadRequest {
    CONST_VTBL IMFHttpDownloadRequestVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFHttpDownloadRequest_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFHttpDownloadRequest_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFHttpDownloadRequest_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFHttpDownloadRequest methods ***/
#define IMFHttpDownloadRequest_AddHeader(This,szHeader) \
    ((This)->lpVtbl->AddHeader(This,szHeader))
#define IMFHttpDownloadRequest_BeginSendRequest(This,pbPayload,cbPayload,pCallback,punkState) \
    ((This)->lpVtbl->BeginSendRequest(This,pbPayload,cbPayload,pCallback,punkState))
#define IMFHttpDownloadRequest_EndSendRequest(This,pResult) \
    ((This)->lpVtbl->EndSendRequest(This,pResult))
#define IMFHttpDownloadRequest_BeginReceiveResponse(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginReceiveResponse(This,pCallback,punkState))
#define IMFHttpDownloadRequest_EndReceiveResponse(This,pResult) \
    ((This)->lpVtbl->EndReceiveResponse(This,pResult))
#define IMFHttpDownloadRequest_BeginReadPayload(This,pb,cb,pCallback,punkState) \
    ((This)->lpVtbl->BeginReadPayload(This,pb,cb,pCallback,punkState))
#define IMFHttpDownloadRequest_EndReadPayload(This,pResult,pqwOffset,pcbRead) \
    ((This)->lpVtbl->EndReadPayload(This,pResult,pqwOffset,pcbRead))
#define IMFHttpDownloadRequest_QueryHeader(This,szHeaderName,dwIndex,ppszHeaderValue) \
    ((This)->lpVtbl->QueryHeader(This,szHeaderName,dwIndex,ppszHeaderValue))
#define IMFHttpDownloadRequest_GetURL(This,ppszURL) \
    ((This)->lpVtbl->GetURL(This,ppszURL))
#define IMFHttpDownloadRequest_HasNullSourceOrigin(This,pfNullSourceOrigin) \
    ((This)->lpVtbl->HasNullSourceOrigin(This,pfNullSourceOrigin))
#define IMFHttpDownloadRequest_GetTimeSeekResult(This,pqwStartTime,pqwStopTime,pqwDuration) \
    ((This)->lpVtbl->GetTimeSeekResult(This,pqwStartTime,pqwStopTime,pqwDuration))
#define IMFHttpDownloadRequest_GetHttpStatus(This,pdwHttpStatus) \
    ((This)->lpVtbl->GetHttpStatus(This,pdwHttpStatus))
#define IMFHttpDownloadRequest_GetAtEndOfPayload(This,pfAtEndOfPayload) \
    ((This)->lpVtbl->GetAtEndOfPayload(This,pfAtEndOfPayload))
#define IMFHttpDownloadRequest_GetTotalLength(This,pqwTotalLength) \
    ((This)->lpVtbl->GetTotalLength(This,pqwTotalLength))
#define IMFHttpDownloadRequest_GetRangeEndOffset(This,pqwRangeEnd) \
    ((This)->lpVtbl->GetRangeEndOffset(This,pqwRangeEnd))
#define IMFHttpDownloadRequest_Close(This) \
    ((This)->lpVtbl->Close(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFHttpDownloadRequest_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFHttpDownloadSession interface
 */
#ifndef __IMFHttpDownloadSession_INTERFACE_DEFINED__
#define __IMFHttpDownloadSession_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFHttpDownloadSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFHttpDownloadSessionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFHttpDownloadSession *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFHttpDownloadSession *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFHttpDownloadSession *This);

    /*** IMFHttpDownloadSession methods ***/
    HRESULT (STDMETHODCALLTYPE *SetServer)(
        IMFHttpDownloadSession *This,
        LPCWSTR szServerName,
        DWORD nPort);

    HRESULT (STDMETHODCALLTYPE *CreateRequest)(
        IMFHttpDownloadSession *This,
        LPCWSTR szObjectName,
        BOOL fBypassProxyCache,
        BOOL fSecure,
        LPCWSTR szVerb,
        LPCWSTR szReferrer,
        IMFHttpDownloadRequest **ppRequest);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IMFHttpDownloadSession *This);

    END_INTERFACE
} IMFHttpDownloadSessionVtbl;

interface IMFHttpDownloadSession {
    CONST_VTBL IMFHttpDownloadSessionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFHttpDownloadSession_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFHttpDownloadSession_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFHttpDownloadSession_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFHttpDownloadSession methods ***/
#define IMFHttpDownloadSession_SetServer(This,szServerName,nPort) \
    ((This)->lpVtbl->SetServer(This,szServerName,nPort))
#define IMFHttpDownloadSession_CreateRequest(This,szObjectName,fBypassProxyCache,fSecure,szVerb,szReferrer,ppRequest) \
    ((This)->lpVtbl->CreateRequest(This,szObjectName,fBypassProxyCache,fSecure,szVerb,szReferrer,ppRequest))
#define IMFHttpDownloadSession_Close(This) \
    ((This)->lpVtbl->Close(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFHttpDownloadSession_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFHttpDownloadSessionProvider interface
 */
#ifndef __IMFHttpDownloadSessionProvider_INTERFACE_DEFINED__
#define __IMFHttpDownloadSessionProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFHttpDownloadSessionProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFHttpDownloadSessionProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFHttpDownloadSessionProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFHttpDownloadSessionProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFHttpDownloadSessionProvider *This);

    /*** IMFHttpDownloadSessionProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateHttpDownloadSession)(
        IMFHttpDownloadSessionProvider *This,
        LPCWSTR wszScheme,
        IMFHttpDownloadSession **ppDownloadSession);

    END_INTERFACE
} IMFHttpDownloadSessionProviderVtbl;

interface IMFHttpDownloadSessionProvider {
    CONST_VTBL IMFHttpDownloadSessionProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFHttpDownloadSessionProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFHttpDownloadSessionProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFHttpDownloadSessionProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFHttpDownloadSessionProvider methods ***/
#define IMFHttpDownloadSessionProvider_CreateHttpDownloadSession(This,wszScheme,ppDownloadSession) \
    ((This)->lpVtbl->CreateHttpDownloadSession(This,wszScheme,ppDownloadSession))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFHttpDownloadSessionProvider_INTERFACE_DEFINED__ */

EXTERN_GUID(MFNETSOURCE_HTTP_DOWNLOAD_SESSION_PROVIDER, 0x7d55081e, 0x307d, 0x4d6d, 0xa6, 0x63, 0xa9, 0x3b, 0xe9, 0x7c, 0x4b, 0x5c);

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)
#pragma endregion

#if (WINVER >= _WIN32_WINNT_WIN10)

typedef enum MF_MEDIASOURCE_STATUS_INFO {
    MF_MEDIASOURCE_STATUS_INFO_FULLYSUPPORTED = 0,
    MF_MEDIASOURCE_STATUS_INFO_UNKNOWN = 1
} MF_MEDIASOURCE_STATUS_INFO;

EXTERN_GUID(MF_SD_MEDIASOURCE_STATUS, 0x1913678b, 0xfc0f, 0x44da, 0x8f, 0x43, 0x1b, 0xa3, 0xb5, 0x26, 0xf4, 0xae);

typedef struct _MF_VIDEO_SPHERICAL_VIEWDIRECTION {
    int iHeading;
    int iPitch;
    int iRoll;
} MF_VIDEO_SPHERICAL_VIEWDIRECTION;

#define MF_UNKNOWN_DURATION 0

EXTERN_GUID(MF_SD_VIDEO_SPHERICAL, 0xa51da449, 0x3fdc, 0x478c, 0xbc, 0xb5, 0x30, 0xbe, 0x76, 0x59, 0x5f, 0x55);

EXTERN_GUID(MF_SD_VIDEO_SPHERICAL_FORMAT, 0x4a8fc407, 0x6ea1, 0x46c8, 0xb5, 0x67, 0x69, 0x71, 0xd4, 0xa1, 0x39, 0xc3);

EXTERN_GUID(MF_SD_VIDEO_SPHERICAL_INITIAL_VIEWDIRECTION, 0x11d25a49, 0xbb62, 0x467f, 0x9d, 0xb1, 0xc1, 0x71, 0x65, 0x71, 0x6c, 0x49);

EXTERN_GUID(MF_MEDIASOURCE_EXPOSE_ALL_STREAMS, 0xe7f250b8, 0x8fd9, 0x4a09, 0xb6, 0xc1, 0x6a, 0x31, 0x5c, 0x7c, 0x72, 0xe);

/*****************************************************************************
 * IMFMediaSource2 interface
 */
#ifndef __IMFMediaSource2_INTERFACE_DEFINED__
#define __IMFMediaSource2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaSource2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaSource2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaSource2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaSource2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaSource2 *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaSource2 *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaSource2 *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaSource2 *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaSource2 *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFMediaSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCharacteristics)(
        IMFMediaSource2 *This,
        DWORD *pdwCharacteristics);

    HRESULT (STDMETHODCALLTYPE *CreatePresentationDescriptor)(
        IMFMediaSource2 *This,
        IMFPresentationDescriptor **ppPresentationDescriptor);

    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFMediaSource2 *This,
        IMFPresentationDescriptor *pPresentationDescriptor,
        const GUID *pguidTimeFormat,
        const PROPVARIANT *pvarStartPosition);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFMediaSource2 *This);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        IMFMediaSource2 *This);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFMediaSource2 *This);

    /*** IMFMediaSourceEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSourceAttributes)(
        IMFMediaSource2 *This,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *GetStreamAttributes)(
        IMFMediaSource2 *This,
        DWORD dwStreamIdentifier,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *SetD3DManager)(
        IMFMediaSource2 *This,
        IUnknown *pManager);

    /*** IMFMediaSource2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMediaType)(
        IMFMediaSource2 *This,
        DWORD dwStreamID,
        IMFMediaType *pMediaType);

    END_INTERFACE
} IMFMediaSource2Vtbl;

interface IMFMediaSource2 {
    CONST_VTBL IMFMediaSource2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaSource2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaSource2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaSource2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaSource2_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaSource2_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaSource2_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaSource2_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFMediaSource methods ***/
#define IMFMediaSource2_GetCharacteristics(This,pdwCharacteristics) \
    ((This)->lpVtbl->GetCharacteristics(This,pdwCharacteristics))
#define IMFMediaSource2_CreatePresentationDescriptor(This,ppPresentationDescriptor) \
    ((This)->lpVtbl->CreatePresentationDescriptor(This,ppPresentationDescriptor))
#define IMFMediaSource2_Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition) \
    ((This)->lpVtbl->Start(This,pPresentationDescriptor,pguidTimeFormat,pvarStartPosition))
#define IMFMediaSource2_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFMediaSource2_Pause(This) \
    ((This)->lpVtbl->Pause(This))
#define IMFMediaSource2_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
/*** IMFMediaSourceEx methods ***/
#define IMFMediaSource2_GetSourceAttributes(This,ppAttributes) \
    ((This)->lpVtbl->GetSourceAttributes(This,ppAttributes))
#define IMFMediaSource2_GetStreamAttributes(This,dwStreamIdentifier,ppAttributes) \
    ((This)->lpVtbl->GetStreamAttributes(This,dwStreamIdentifier,ppAttributes))
#define IMFMediaSource2_SetD3DManager(This,pManager) \
    ((This)->lpVtbl->SetD3DManager(This,pManager))
/*** IMFMediaSource2 methods ***/
#define IMFMediaSource2_SetMediaType(This,dwStreamID,pMediaType) \
    ((This)->lpVtbl->SetMediaType(This,dwStreamID,pMediaType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaSource2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMediaStream2 interface
 */
#ifndef __IMFMediaStream2_INTERFACE_DEFINED__
#define __IMFMediaStream2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaStream2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaStream2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaStream2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaStream2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaStream2 *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaStream2 *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaStream2 *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaStream2 *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaStream2 *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    /*** IMFMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaSource)(
        IMFMediaStream2 *This,
        IMFMediaSource **ppMediaSource);

    HRESULT (STDMETHODCALLTYPE *GetStreamDescriptor)(
        IMFMediaStream2 *This,
        IMFStreamDescriptor **ppStreamDescriptor);

    HRESULT (STDMETHODCALLTYPE *RequestSample)(
        IMFMediaStream2 *This,
        IUnknown *pToken);

    /*** IMFMediaStream2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetStreamState)(
        IMFMediaStream2 *This,
        MF_STREAM_STATE value);

    HRESULT (STDMETHODCALLTYPE *GetStreamState)(
        IMFMediaStream2 *This,
        MF_STREAM_STATE *value);

    END_INTERFACE
} IMFMediaStream2Vtbl;

interface IMFMediaStream2 {
    CONST_VTBL IMFMediaStream2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaStream2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaStream2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaStream2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaStream2_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaStream2_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaStream2_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaStream2_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
/*** IMFMediaStream methods ***/
#define IMFMediaStream2_GetMediaSource(This,ppMediaSource) \
    ((This)->lpVtbl->GetMediaSource(This,ppMediaSource))
#define IMFMediaStream2_GetStreamDescriptor(This,ppStreamDescriptor) \
    ((This)->lpVtbl->GetStreamDescriptor(This,ppStreamDescriptor))
#define IMFMediaStream2_RequestSample(This,pToken) \
    ((This)->lpVtbl->RequestSample(This,pToken))
/*** IMFMediaStream2 methods ***/
#define IMFMediaStream2_SetStreamState(This,value) \
    ((This)->lpVtbl->SetStreamState(This,value))
#define IMFMediaStream2_GetStreamState(This,value) \
    ((This)->lpVtbl->GetStreamState(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaStream2_INTERFACE_DEFINED__ */

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#if (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

EXTERN_GUID(MF_ST_MEDIASOURCE_COLLECTION, 0x616DE972, 0x83AD, 0x4950, 0x81, 0x70, 0x63, 0x0D, 0x19, 0xCB, 0xE3, 0x07);

EXTERN_GUID(MF_DEVICESTREAM_FILTER_KSCONTROL, 0x46783CCA, 0x3DF5, 0x4923, 0xA9, 0xEF, 0x36, 0xB7, 0x22, 0x3E, 0xDD, 0xE0);

EXTERN_GUID(MF_DEVICESTREAM_PIN_KSCONTROL, 0xEF3EF9A7, 0x87F2, 0x48CA, 0xBE, 0x02, 0x67, 0x48, 0x78, 0x91, 0x8E, 0x98);

EXTERN_GUID(MF_DEVICESTREAM_SOURCE_ATTRIBUTES, 0x2F8CB617, 0x361B, 0x434F, 0x85, 0xEA, 0x99, 0xA0, 0x3E, 0x1C, 0xE4, 0xE0);

EXTERN_GUID( MF_DEVICESTREAM_FRAMESERVER_HIDDEN, 0xF402567B, 0x4D91, 0x4179, 0x96, 0xD1, 0x74, 0xC8, 0x48, 0x0C, 0x20, 0x34);

EXTERN_GUID( MF_STF_VERSION_INFO, 0x6770BD39, 0xEF82, 0x44EE, 0xA4, 0x9B, 0x93, 0x4B, 0xEB, 0x24, 0xAE, 0xF7);

EXTERN_GUID( MF_STF_VERSION_DATE, 0x31A165D5, 0xDF67, 0x4095, 0x8E, 0x44, 0x88, 0x68, 0xFC, 0x20, 0xDB, 0xFD);

EXTERN_GUID( MF_DEVICESTREAM_REQUIRED_CAPABILITIES, 0x6D8B957E, 0x7CF6, 0x43F4, 0xAF, 0x56, 0x9C, 0x0E, 0x1E, 0x4F, 0xCB, 0xE1);

EXTERN_GUID( MF_DEVICESTREAM_REQUIRED_SDDL, 0x331AE85D, 0xC0D3, 0x49BA, 0x83, 0xBA, 0x82, 0xA1, 0x2D, 0x63, 0xCD, 0xD6);

EXTERN_GUID(MF_DEVICEMFT_SENSORPROFILE_COLLECTION, 0x36EBDC44, 0xB12C, 0x441B, 0x89, 0xF4, 0x08, 0xB2, 0xF4, 0x1A, 0x9C, 0xFC );

EXTERN_GUID(MF_DEVICESTREAM_SENSORSTREAM_ID, 0xE35B9FE4, 0x0659, 0x4CAD, 0xBB, 0x51, 0x33, 0x16, 0x0B, 0xE7, 0xE4, 0x13 );

typedef enum __POIDL_mfidl_tag_0000001C {
    MFSensorDeviceType_Unknown = 0,
    MFSensorDeviceType_Device = 1,
    MFSensorDeviceType_MediaSource = 2,
    MFSensorDeviceType_FrameProvider = 3,
    MFSensorDeviceType_SensorTransform = 4
} MFSensorDeviceType;

typedef enum __POIDL_mfidl_tag_0000001D {
    MFSensorStreamType_Unknown = 0,
    MFSensorStreamType_Input = 1,
    MFSensorStreamType_Output = 2
} MFSensorStreamType;

typedef enum __POIDL_mfidl_tag_0000001E {
    MFSensorDeviceMode_Controller = 0,
    MFSensorDeviceMode_Shared = 1
} MFSensorDeviceMode;

/*****************************************************************************
 * IMFSensorDevice interface
 */
#ifndef __IMFSensorDevice_INTERFACE_DEFINED__
#define __IMFSensorDevice_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorDeviceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorDevice *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorDevice *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorDevice *This);

    /*** IMFSensorDevice methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDeviceId)(
        IMFSensorDevice *This,
        ULONGLONG *pDeviceId);

    HRESULT (STDMETHODCALLTYPE *GetDeviceType)(
        IMFSensorDevice *This,
        MFSensorDeviceType *pType);

    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        IMFSensorDevice *This,
        ULONGLONG *pFlags);

    HRESULT (STDMETHODCALLTYPE *GetSymbolicLink)(
        IMFSensorDevice *This,
        LPWSTR SymbolicLink,
        LONG cchSymbolicLink,
        LONG *pcchWritten);

    HRESULT (STDMETHODCALLTYPE *GetDeviceAttributes)(
        IMFSensorDevice *This,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *GetStreamAttributesCount)(
        IMFSensorDevice *This,
        MFSensorStreamType eType,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *GetStreamAttributes)(
        IMFSensorDevice *This,
        MFSensorStreamType eType,
        DWORD dwIndex,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *SetSensorDeviceMode)(
        IMFSensorDevice *This,
        MFSensorDeviceMode eMode);

    HRESULT (STDMETHODCALLTYPE *GetSensorDeviceMode)(
        IMFSensorDevice *This,
        MFSensorDeviceMode *peMode);

    END_INTERFACE
} IMFSensorDeviceVtbl;

interface IMFSensorDevice {
    CONST_VTBL IMFSensorDeviceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorDevice_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorDevice_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorDevice_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorDevice methods ***/
#define IMFSensorDevice_GetDeviceId(This,pDeviceId) \
    ((This)->lpVtbl->GetDeviceId(This,pDeviceId))
#define IMFSensorDevice_GetDeviceType(This,pType) \
    ((This)->lpVtbl->GetDeviceType(This,pType))
#define IMFSensorDevice_GetFlags(This,pFlags) \
    ((This)->lpVtbl->GetFlags(This,pFlags))
#define IMFSensorDevice_GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten) \
    ((This)->lpVtbl->GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten))
#define IMFSensorDevice_GetDeviceAttributes(This,ppAttributes) \
    ((This)->lpVtbl->GetDeviceAttributes(This,ppAttributes))
#define IMFSensorDevice_GetStreamAttributesCount(This,eType,pdwCount) \
    ((This)->lpVtbl->GetStreamAttributesCount(This,eType,pdwCount))
#define IMFSensorDevice_GetStreamAttributes(This,eType,dwIndex,ppAttributes) \
    ((This)->lpVtbl->GetStreamAttributes(This,eType,dwIndex,ppAttributes))
#define IMFSensorDevice_SetSensorDeviceMode(This,eMode) \
    ((This)->lpVtbl->SetSensorDeviceMode(This,eMode))
#define IMFSensorDevice_GetSensorDeviceMode(This,peMode) \
    ((This)->lpVtbl->GetSensorDeviceMode(This,peMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorDevice_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorGroup interface
 */
#ifndef __IMFSensorGroup_INTERFACE_DEFINED__
#define __IMFSensorGroup_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorGroupVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorGroup *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorGroup *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorGroup *This);

    /*** IMFSensorGroup methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSymbolicLink)(
        IMFSensorGroup *This,
        LPWSTR SymbolicLink,
        LONG cchSymbolicLink,
        LONG *pcchWritten);

    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        IMFSensorGroup *This,
        ULONGLONG *pFlags);

    HRESULT (STDMETHODCALLTYPE *GetSensorGroupAttributes)(
        IMFSensorGroup *This,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *GetSensorDeviceCount)(
        IMFSensorGroup *This,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *GetSensorDevice)(
        IMFSensorGroup *This,
        DWORD dwIndex,
        IMFSensorDevice **ppDevice);

    HRESULT (STDMETHODCALLTYPE *SetDefaultSensorDeviceIndex)(
        IMFSensorGroup *This,
        DWORD dwIndex);

    HRESULT (STDMETHODCALLTYPE *GetDefaultSensorDeviceIndex)(
        IMFSensorGroup *This,
        DWORD *pdwIndex);

    HRESULT (STDMETHODCALLTYPE *CreateMediaSource)(
        IMFSensorGroup *This,
        IMFMediaSource **ppSource);

    END_INTERFACE
} IMFSensorGroupVtbl;

interface IMFSensorGroup {
    CONST_VTBL IMFSensorGroupVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorGroup_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorGroup_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorGroup_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorGroup methods ***/
#define IMFSensorGroup_GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten) \
    ((This)->lpVtbl->GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten))
#define IMFSensorGroup_GetFlags(This,pFlags) \
    ((This)->lpVtbl->GetFlags(This,pFlags))
#define IMFSensorGroup_GetSensorGroupAttributes(This,ppAttributes) \
    ((This)->lpVtbl->GetSensorGroupAttributes(This,ppAttributes))
#define IMFSensorGroup_GetSensorDeviceCount(This,pdwCount) \
    ((This)->lpVtbl->GetSensorDeviceCount(This,pdwCount))
#define IMFSensorGroup_GetSensorDevice(This,dwIndex,ppDevice) \
    ((This)->lpVtbl->GetSensorDevice(This,dwIndex,ppDevice))
#define IMFSensorGroup_SetDefaultSensorDeviceIndex(This,dwIndex) \
    ((This)->lpVtbl->SetDefaultSensorDeviceIndex(This,dwIndex))
#define IMFSensorGroup_GetDefaultSensorDeviceIndex(This,pdwIndex) \
    ((This)->lpVtbl->GetDefaultSensorDeviceIndex(This,pdwIndex))
#define IMFSensorGroup_CreateMediaSource(This,ppSource) \
    ((This)->lpVtbl->CreateMediaSource(This,ppSource))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorGroup_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorStream interface
 */
#ifndef __IMFSensorStream_INTERFACE_DEFINED__
#define __IMFSensorStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorStream *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFSensorStream *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFSensorStream *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFSensorStream *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFSensorStream *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFSensorStream *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFSensorStream *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFSensorStream *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFSensorStream *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFSensorStream *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFSensorStream *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFSensorStream *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFSensorStream *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFSensorStream *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFSensorStream *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFSensorStream *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFSensorStream *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFSensorStream *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFSensorStream *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFSensorStream *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFSensorStream *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFSensorStream *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFSensorStream *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFSensorStream *This,
        IMFAttributes *pDest);

    /*** IMFSensorStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaTypeCount)(
        IMFSensorStream *This,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *GetMediaType)(
        IMFSensorStream *This,
        DWORD dwIndex,
        IMFMediaType **ppMediaType);

    HRESULT (STDMETHODCALLTYPE *CloneSensorStream)(
        IMFSensorStream *This,
        IMFSensorStream **ppStream);

    END_INTERFACE
} IMFSensorStreamVtbl;

interface IMFSensorStream {
    CONST_VTBL IMFSensorStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFSensorStream_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFSensorStream_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFSensorStream_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFSensorStream_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFSensorStream_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFSensorStream_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFSensorStream_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFSensorStream_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFSensorStream_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFSensorStream_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFSensorStream_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFSensorStream_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFSensorStream_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFSensorStream_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFSensorStream_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFSensorStream_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFSensorStream_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFSensorStream_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFSensorStream_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFSensorStream_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFSensorStream_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFSensorStream_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFSensorStream_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFSensorStream_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFSensorStream_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFSensorStream_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFSensorStream_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFSensorStream_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFSensorStream_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFSensorStream_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFSensorStream methods ***/
#define IMFSensorStream_GetMediaTypeCount(This,pdwCount) \
    ((This)->lpVtbl->GetMediaTypeCount(This,pdwCount))
#define IMFSensorStream_GetMediaType(This,dwIndex,ppMediaType) \
    ((This)->lpVtbl->GetMediaType(This,dwIndex,ppMediaType))
#define IMFSensorStream_CloneSensorStream(This,ppStream) \
    ((This)->lpVtbl->CloneSensorStream(This,ppStream))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorTransformFactory interface
 */
#ifndef __IMFSensorTransformFactory_INTERFACE_DEFINED__
#define __IMFSensorTransformFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorTransformFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorTransformFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorTransformFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorTransformFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorTransformFactory *This);

    /*** IMFSensorTransformFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFactoryAttributes)(
        IMFSensorTransformFactory *This,
        IMFAttributes **ppAttributes);

    HRESULT (STDMETHODCALLTYPE *InitializeFactory)(
        IMFSensorTransformFactory *This,
        DWORD dwMaxTransformCount,
        IMFCollection *pSensorDevices,
        IMFAttributes *pAttributes);

    HRESULT (STDMETHODCALLTYPE *GetTransformCount)(
        IMFSensorTransformFactory *This,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *GetTransformInformation)(
        IMFSensorTransformFactory *This,
        DWORD TransformIndex,
        GUID *pguidTransformId,
        IMFAttributes **ppAttributes,
        IMFCollection **ppStreamInformation);

    HRESULT (STDMETHODCALLTYPE *CreateTransform)(
        IMFSensorTransformFactory *This,
        REFGUID guidSensorTransformID,
        IMFAttributes *pAttributes,
        IMFDeviceTransform **ppDeviceMFT);

    END_INTERFACE
} IMFSensorTransformFactoryVtbl;

interface IMFSensorTransformFactory {
    CONST_VTBL IMFSensorTransformFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorTransformFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorTransformFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorTransformFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorTransformFactory methods ***/
#define IMFSensorTransformFactory_GetFactoryAttributes(This,ppAttributes) \
    ((This)->lpVtbl->GetFactoryAttributes(This,ppAttributes))
#define IMFSensorTransformFactory_InitializeFactory(This,dwMaxTransformCount,pSensorDevices,pAttributes) \
    ((This)->lpVtbl->InitializeFactory(This,dwMaxTransformCount,pSensorDevices,pAttributes))
#define IMFSensorTransformFactory_GetTransformCount(This,pdwCount) \
    ((This)->lpVtbl->GetTransformCount(This,pdwCount))
#define IMFSensorTransformFactory_GetTransformInformation(This,TransformIndex,pguidTransformId,ppAttributes,ppStreamInformation) \
    ((This)->lpVtbl->GetTransformInformation(This,TransformIndex,pguidTransformId,ppAttributes,ppStreamInformation))
#define IMFSensorTransformFactory_CreateTransform(This,guidSensorTransformID,pAttributes,ppDeviceMFT) \
    ((This)->lpVtbl->CreateTransform(This,guidSensorTransformID,pAttributes,ppDeviceMFT))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorTransformFactory_INTERFACE_DEFINED__ */

STDAPI
MFCreateSensorGroup(
     LPCWSTR SensorGroupSymbolicLink,
     IMFSensorGroup** ppSensorGroup
    );
STDAPI
MFCreateSensorStream(
     DWORD StreamId,
     IMFAttributes* pAttributes,
     IMFCollection* pMediaTypeCollection,
     IMFSensorStream** ppStream
    );

typedef struct __POIDL_mfidl_tag_0000001F {
    GUID Type;
    UINT32 Index;
    UINT32 Unused;
} SENSORPROFILEID;

/*****************************************************************************
 * IMFSensorProfile interface
 */
#ifndef __IMFSensorProfile_INTERFACE_DEFINED__
#define __IMFSensorProfile_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorProfileVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorProfile *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorProfile *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorProfile *This);

    /*** IMFSensorProfile methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProfileId)(
        IMFSensorProfile *This,
        SENSORPROFILEID *pId);

    HRESULT (STDMETHODCALLTYPE *AddProfileFilter)(
        IMFSensorProfile *This,
        UINT32 StreamId,
        LPCWSTR wzFilterSetString);

    HRESULT (STDMETHODCALLTYPE *IsMediaTypeSupported)(
        IMFSensorProfile *This,
        UINT32 StreamId,
        IMFMediaType *pMediaType,
        BOOL *pfSupported);

    HRESULT (STDMETHODCALLTYPE *AddBlockedControl)(
        IMFSensorProfile *This,
        LPCWSTR wzBlockedControl);

    END_INTERFACE
} IMFSensorProfileVtbl;

interface IMFSensorProfile {
    CONST_VTBL IMFSensorProfileVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorProfile_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorProfile_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorProfile_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorProfile methods ***/
#define IMFSensorProfile_GetProfileId(This,pId) \
    ((This)->lpVtbl->GetProfileId(This,pId))
#define IMFSensorProfile_AddProfileFilter(This,StreamId,wzFilterSetString) \
    ((This)->lpVtbl->AddProfileFilter(This,StreamId,wzFilterSetString))
#define IMFSensorProfile_IsMediaTypeSupported(This,StreamId,pMediaType,pfSupported) \
    ((This)->lpVtbl->IsMediaTypeSupported(This,StreamId,pMediaType,pfSupported))
#define IMFSensorProfile_AddBlockedControl(This,wzBlockedControl) \
    ((This)->lpVtbl->AddBlockedControl(This,wzBlockedControl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorProfile_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorProfileCollection interface
 */
#ifndef __IMFSensorProfileCollection_INTERFACE_DEFINED__
#define __IMFSensorProfileCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorProfileCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorProfileCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorProfileCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorProfileCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorProfileCollection *This);

    /*** IMFSensorProfileCollection methods ***/
    DWORD (STDMETHODCALLTYPE *GetProfileCount)(
        IMFSensorProfileCollection *This);

    HRESULT (STDMETHODCALLTYPE *GetProfile)(
        IMFSensorProfileCollection *This,
        DWORD Index,
        IMFSensorProfile **ppProfile);

    HRESULT (STDMETHODCALLTYPE *AddProfile)(
        IMFSensorProfileCollection *This,
        IMFSensorProfile *pProfile);

    HRESULT (STDMETHODCALLTYPE *FindProfile)(
        IMFSensorProfileCollection *This,
        SENSORPROFILEID *ProfileId,
        IMFSensorProfile **ppProfile);

    void (STDMETHODCALLTYPE *RemoveProfileByIndex)(
        IMFSensorProfileCollection *This,
        DWORD Index);

    void (STDMETHODCALLTYPE *RemoveProfile)(
        IMFSensorProfileCollection *This,
        SENSORPROFILEID *ProfileId);

    END_INTERFACE
} IMFSensorProfileCollectionVtbl;

interface IMFSensorProfileCollection {
    CONST_VTBL IMFSensorProfileCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorProfileCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorProfileCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorProfileCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorProfileCollection methods ***/
#define IMFSensorProfileCollection_GetProfileCount(This) \
    ((This)->lpVtbl->GetProfileCount(This))
#define IMFSensorProfileCollection_GetProfile(This,Index,ppProfile) \
    ((This)->lpVtbl->GetProfile(This,Index,ppProfile))
#define IMFSensorProfileCollection_AddProfile(This,pProfile) \
    ((This)->lpVtbl->AddProfile(This,pProfile))
#define IMFSensorProfileCollection_FindProfile(This,ProfileId,ppProfile) \
    ((This)->lpVtbl->FindProfile(This,ProfileId,ppProfile))
#define IMFSensorProfileCollection_RemoveProfileByIndex(This,Index) \
    ((This)->lpVtbl->RemoveProfileByIndex(This,Index))
#define IMFSensorProfileCollection_RemoveProfile(This,ProfileId) \
    ((This)->lpVtbl->RemoveProfile(This,ProfileId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorProfileCollection_INTERFACE_DEFINED__ */

STDAPI
MFCreateSensorProfile(
     REFGUID ProfileType,
     UINT32 ProfileIndex,
     LPCWSTR Constraints,
     IMFSensorProfile** ppProfile
    );

STDAPI
MFCreateSensorProfileCollection(
     IMFSensorProfileCollection** ppSensorProfile
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */
#pragma endregion

/*****************************************************************************
 * IMFSensorProcessActivity interface
 */
#ifndef __IMFSensorProcessActivity_INTERFACE_DEFINED__
#define __IMFSensorProcessActivity_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorProcessActivity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorProcessActivityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorProcessActivity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorProcessActivity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorProcessActivity *This);

    /*** IMFSensorProcessActivity methods ***/
    HRESULT (STDMETHODCALLTYPE *GetProcessId)(
        IMFSensorProcessActivity *This,
        ULONG *pPID);

    HRESULT (STDMETHODCALLTYPE *GetStreamingState)(
        IMFSensorProcessActivity *This,
        BOOL *pfStreaming);

    HRESULT (STDMETHODCALLTYPE *GetStreamingMode)(
        IMFSensorProcessActivity *This,
        MFSensorDeviceMode *pMode);

    HRESULT (STDMETHODCALLTYPE *GetReportTime)(
        IMFSensorProcessActivity *This,
        FILETIME *pft);

    END_INTERFACE
} IMFSensorProcessActivityVtbl;

interface IMFSensorProcessActivity {
    CONST_VTBL IMFSensorProcessActivityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorProcessActivity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorProcessActivity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorProcessActivity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorProcessActivity methods ***/
#define IMFSensorProcessActivity_GetProcessId(This,pPID) \
    ((This)->lpVtbl->GetProcessId(This,pPID))
#define IMFSensorProcessActivity_GetStreamingState(This,pfStreaming) \
    ((This)->lpVtbl->GetStreamingState(This,pfStreaming))
#define IMFSensorProcessActivity_GetStreamingMode(This,pMode) \
    ((This)->lpVtbl->GetStreamingMode(This,pMode))
#define IMFSensorProcessActivity_GetReportTime(This,pft) \
    ((This)->lpVtbl->GetReportTime(This,pft))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorProcessActivity_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorActivityReport interface
 */
#ifndef __IMFSensorActivityReport_INTERFACE_DEFINED__
#define __IMFSensorActivityReport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorActivityReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorActivityReportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorActivityReport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorActivityReport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorActivityReport *This);

    /*** IMFSensorActivityReport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IMFSensorActivityReport *This,
        LPWSTR FriendlyName,
        ULONG cchFriendlyName,
        ULONG *pcchWritten);

    HRESULT (STDMETHODCALLTYPE *GetSymbolicLink)(
        IMFSensorActivityReport *This,
        LPWSTR SymbolicLink,
        ULONG cchSymbolicLink,
        ULONG *pcchWritten);

    HRESULT (STDMETHODCALLTYPE *GetProcessCount)(
        IMFSensorActivityReport *This,
        ULONG *pcCount);

    HRESULT (STDMETHODCALLTYPE *GetProcessActivity)(
        IMFSensorActivityReport *This,
        ULONG Index,
        IMFSensorProcessActivity **ppProcessActivity);

    END_INTERFACE
} IMFSensorActivityReportVtbl;

interface IMFSensorActivityReport {
    CONST_VTBL IMFSensorActivityReportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorActivityReport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorActivityReport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorActivityReport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorActivityReport methods ***/
#define IMFSensorActivityReport_GetFriendlyName(This,FriendlyName,cchFriendlyName,pcchWritten) \
    ((This)->lpVtbl->GetFriendlyName(This,FriendlyName,cchFriendlyName,pcchWritten))
#define IMFSensorActivityReport_GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten) \
    ((This)->lpVtbl->GetSymbolicLink(This,SymbolicLink,cchSymbolicLink,pcchWritten))
#define IMFSensorActivityReport_GetProcessCount(This,pcCount) \
    ((This)->lpVtbl->GetProcessCount(This,pcCount))
#define IMFSensorActivityReport_GetProcessActivity(This,Index,ppProcessActivity) \
    ((This)->lpVtbl->GetProcessActivity(This,Index,ppProcessActivity))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorActivityReport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorActivitiesReport interface
 */
#ifndef __IMFSensorActivitiesReport_INTERFACE_DEFINED__
#define __IMFSensorActivitiesReport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorActivitiesReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorActivitiesReportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorActivitiesReport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorActivitiesReport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorActivitiesReport *This);

    /*** IMFSensorActivitiesReport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFSensorActivitiesReport *This,
        ULONG *pcCount);

    HRESULT (STDMETHODCALLTYPE *GetActivityReport)(
        IMFSensorActivitiesReport *This,
        ULONG Index,
        IMFSensorActivityReport **sensorActivityReport);

    HRESULT (STDMETHODCALLTYPE *GetActivityReportByDeviceName)(
        IMFSensorActivitiesReport *This,
        LPCWSTR SymbolicName,
        IMFSensorActivityReport **sensorActivityReport);

    END_INTERFACE
} IMFSensorActivitiesReportVtbl;

interface IMFSensorActivitiesReport {
    CONST_VTBL IMFSensorActivitiesReportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorActivitiesReport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorActivitiesReport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorActivitiesReport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorActivitiesReport methods ***/
#define IMFSensorActivitiesReport_GetCount(This,pcCount) \
    ((This)->lpVtbl->GetCount(This,pcCount))
#define IMFSensorActivitiesReport_GetActivityReport(This,Index,sensorActivityReport) \
    ((This)->lpVtbl->GetActivityReport(This,Index,sensorActivityReport))
#define IMFSensorActivitiesReport_GetActivityReportByDeviceName(This,SymbolicName,sensorActivityReport) \
    ((This)->lpVtbl->GetActivityReportByDeviceName(This,SymbolicName,sensorActivityReport))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorActivitiesReport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorActivitiesReportCallback interface
 */
#ifndef __IMFSensorActivitiesReportCallback_INTERFACE_DEFINED__
#define __IMFSensorActivitiesReportCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorActivitiesReportCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorActivitiesReportCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorActivitiesReportCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorActivitiesReportCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorActivitiesReportCallback *This);

    /*** IMFSensorActivitiesReportCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnActivitiesReport)(
        IMFSensorActivitiesReportCallback *This,
        IMFSensorActivitiesReport *sensorActivitiesReport);

    END_INTERFACE
} IMFSensorActivitiesReportCallbackVtbl;

interface IMFSensorActivitiesReportCallback {
    CONST_VTBL IMFSensorActivitiesReportCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorActivitiesReportCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorActivitiesReportCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorActivitiesReportCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorActivitiesReportCallback methods ***/
#define IMFSensorActivitiesReportCallback_OnActivitiesReport(This,sensorActivitiesReport) \
    ((This)->lpVtbl->OnActivitiesReport(This,sensorActivitiesReport))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorActivitiesReportCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSensorActivityMonitor interface
 */
#ifndef __IMFSensorActivityMonitor_INTERFACE_DEFINED__
#define __IMFSensorActivityMonitor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSensorActivityMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSensorActivityMonitorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSensorActivityMonitor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSensorActivityMonitor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSensorActivityMonitor *This);

    /*** IMFSensorActivityMonitor methods ***/
    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFSensorActivityMonitor *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFSensorActivityMonitor *This);

    END_INTERFACE
} IMFSensorActivityMonitorVtbl;

interface IMFSensorActivityMonitor {
    CONST_VTBL IMFSensorActivityMonitorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSensorActivityMonitor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSensorActivityMonitor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSensorActivityMonitor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSensorActivityMonitor methods ***/
#define IMFSensorActivityMonitor_Start(This) \
    ((This)->lpVtbl->Start(This))
#define IMFSensorActivityMonitor_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSensorActivityMonitor_INTERFACE_DEFINED__ */

STDAPI
MFCreateSensorActivityMonitor(
     IMFSensorActivitiesReportCallback* pCallback,
     IMFSensorActivityMonitor** ppActivityMonitor
    );

#endif // (WINVER >= _WIN32_WINNT_WINTHRESHOLD)

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef struct _MFCameraIntrinsic_CameraModel {
    FLOAT FocalLength_x;
    FLOAT FocalLength_y;
    FLOAT PrincipalPoint_x;
    FLOAT PrincipalPoint_y;
} MFCameraIntrinsic_CameraModel;

typedef struct _MFCameraIntrinsic_DistortionModel6KT {
    FLOAT Radial_k1;
    FLOAT Radial_k2;
    FLOAT Radial_k3;
    FLOAT Radial_k4;
    FLOAT Radial_k5;
    FLOAT Radial_k6;
    FLOAT Tangential_p1;
    FLOAT Tangential_p2;
} MFCameraIntrinsic_DistortionModel6KT;

typedef struct _MFCameraIntrinsic_DistortionModelArcTan {
    FLOAT Radial_k0;
    FLOAT DistortionCenter_x;
    FLOAT DistortionCenter_y;
    FLOAT Tangential_x;
    FLOAT Tangential_y;
} MFCameraIntrinsic_DistortionModelArcTan;

typedef enum _MFCameraIntrinsic_DistortionModelType {
    MFCameraIntrinsic_DistortionModelType_6KT = 0,
    MFCameraIntrinsic_DistortionModelType_ArcTan = 1
} MFCameraIntrinsic_DistortionModelType;

typedef struct _MFExtendedCameraIntrinsic_IntrinsicModel {
    UINT32 Width;
    UINT32 Height;
    UINT32 SplitFrameId;
    MFCameraIntrinsic_CameraModel CameraModel;
} MFExtendedCameraIntrinsic_IntrinsicModel;

/*****************************************************************************
 * IMFExtendedCameraIntrinsicModel interface
 */
#ifndef __IMFExtendedCameraIntrinsicModel_INTERFACE_DEFINED__
#define __IMFExtendedCameraIntrinsicModel_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFExtendedCameraIntrinsicModel;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFExtendedCameraIntrinsicModelVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFExtendedCameraIntrinsicModel *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFExtendedCameraIntrinsicModel *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFExtendedCameraIntrinsicModel *This);

    /*** IMFExtendedCameraIntrinsicModel methods ***/
    HRESULT (STDMETHODCALLTYPE *GetModel)(
        IMFExtendedCameraIntrinsicModel *This,
        MFExtendedCameraIntrinsic_IntrinsicModel *pIntrinsicModel);

    HRESULT (STDMETHODCALLTYPE *SetModel)(
        IMFExtendedCameraIntrinsicModel *This,
        const MFExtendedCameraIntrinsic_IntrinsicModel *pIntrinsicModel);

    HRESULT (STDMETHODCALLTYPE *GetDistortionModelType)(
        IMFExtendedCameraIntrinsicModel *This,
        MFCameraIntrinsic_DistortionModelType *pDistortionModelType);

    END_INTERFACE
} IMFExtendedCameraIntrinsicModelVtbl;

interface IMFExtendedCameraIntrinsicModel {
    CONST_VTBL IMFExtendedCameraIntrinsicModelVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFExtendedCameraIntrinsicModel_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFExtendedCameraIntrinsicModel_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFExtendedCameraIntrinsicModel_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFExtendedCameraIntrinsicModel methods ***/
#define IMFExtendedCameraIntrinsicModel_GetModel(This,pIntrinsicModel) \
    ((This)->lpVtbl->GetModel(This,pIntrinsicModel))
#define IMFExtendedCameraIntrinsicModel_SetModel(This,pIntrinsicModel) \
    ((This)->lpVtbl->SetModel(This,pIntrinsicModel))
#define IMFExtendedCameraIntrinsicModel_GetDistortionModelType(This,pDistortionModelType) \
    ((This)->lpVtbl->GetDistortionModelType(This,pDistortionModelType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFExtendedCameraIntrinsicModel_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFExtendedCameraIntrinsicsDistortionModel6KT interface
 */
#ifndef __IMFExtendedCameraIntrinsicsDistortionModel6KT_INTERFACE_DEFINED__
#define __IMFExtendedCameraIntrinsicsDistortionModel6KT_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFExtendedCameraIntrinsicsDistortionModel6KT;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFExtendedCameraIntrinsicsDistortionModel6KTVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFExtendedCameraIntrinsicsDistortionModel6KT *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFExtendedCameraIntrinsicsDistortionModel6KT *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFExtendedCameraIntrinsicsDistortionModel6KT *This);

    /*** IMFExtendedCameraIntrinsicsDistortionModel6KT methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDistortionModel)(
        IMFExtendedCameraIntrinsicsDistortionModel6KT *This,
        MFCameraIntrinsic_DistortionModel6KT *pDistortionModel);

    HRESULT (STDMETHODCALLTYPE *SetDistortionModel)(
        IMFExtendedCameraIntrinsicsDistortionModel6KT *This,
        const MFCameraIntrinsic_DistortionModel6KT *pDistortionModel);

    END_INTERFACE
} IMFExtendedCameraIntrinsicsDistortionModel6KTVtbl;

interface IMFExtendedCameraIntrinsicsDistortionModel6KT {
    CONST_VTBL IMFExtendedCameraIntrinsicsDistortionModel6KTVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFExtendedCameraIntrinsicsDistortionModel6KT_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFExtendedCameraIntrinsicsDistortionModel6KT_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFExtendedCameraIntrinsicsDistortionModel6KT_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFExtendedCameraIntrinsicsDistortionModel6KT methods ***/
#define IMFExtendedCameraIntrinsicsDistortionModel6KT_GetDistortionModel(This,pDistortionModel) \
    ((This)->lpVtbl->GetDistortionModel(This,pDistortionModel))
#define IMFExtendedCameraIntrinsicsDistortionModel6KT_SetDistortionModel(This,pDistortionModel) \
    ((This)->lpVtbl->SetDistortionModel(This,pDistortionModel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFExtendedCameraIntrinsicsDistortionModel6KT_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFExtendedCameraIntrinsicsDistortionModelArcTan interface
 */
#ifndef __IMFExtendedCameraIntrinsicsDistortionModelArcTan_INTERFACE_DEFINED__
#define __IMFExtendedCameraIntrinsicsDistortionModelArcTan_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFExtendedCameraIntrinsicsDistortionModelArcTan;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFExtendedCameraIntrinsicsDistortionModelArcTanVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFExtendedCameraIntrinsicsDistortionModelArcTan *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFExtendedCameraIntrinsicsDistortionModelArcTan *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFExtendedCameraIntrinsicsDistortionModelArcTan *This);

    /*** IMFExtendedCameraIntrinsicsDistortionModelArcTan methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDistortionModel)(
        IMFExtendedCameraIntrinsicsDistortionModelArcTan *This,
        MFCameraIntrinsic_DistortionModelArcTan *pDistortionModel);

    HRESULT (STDMETHODCALLTYPE *SetDistortionModel)(
        IMFExtendedCameraIntrinsicsDistortionModelArcTan *This,
        const MFCameraIntrinsic_DistortionModelArcTan *pDistortionModel);

    END_INTERFACE
} IMFExtendedCameraIntrinsicsDistortionModelArcTanVtbl;

interface IMFExtendedCameraIntrinsicsDistortionModelArcTan {
    CONST_VTBL IMFExtendedCameraIntrinsicsDistortionModelArcTanVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFExtendedCameraIntrinsicsDistortionModelArcTan_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFExtendedCameraIntrinsicsDistortionModelArcTan_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFExtendedCameraIntrinsicsDistortionModelArcTan_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFExtendedCameraIntrinsicsDistortionModelArcTan methods ***/
#define IMFExtendedCameraIntrinsicsDistortionModelArcTan_GetDistortionModel(This,pDistortionModel) \
    ((This)->lpVtbl->GetDistortionModel(This,pDistortionModel))
#define IMFExtendedCameraIntrinsicsDistortionModelArcTan_SetDistortionModel(This,pDistortionModel) \
    ((This)->lpVtbl->SetDistortionModel(This,pDistortionModel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFExtendedCameraIntrinsicsDistortionModelArcTan_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFExtendedCameraIntrinsics interface
 */
#ifndef __IMFExtendedCameraIntrinsics_INTERFACE_DEFINED__
#define __IMFExtendedCameraIntrinsics_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFExtendedCameraIntrinsics;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFExtendedCameraIntrinsicsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFExtendedCameraIntrinsics *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFExtendedCameraIntrinsics *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFExtendedCameraIntrinsics *This);

    /*** IMFExtendedCameraIntrinsics methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeFromBuffer)(
        IMFExtendedCameraIntrinsics *This,
        BYTE *pbBuffer,
        DWORD dwBufferSize);

    HRESULT (STDMETHODCALLTYPE *GetBufferSize)(
        IMFExtendedCameraIntrinsics *This,
        DWORD *pdwBufferSize);

    HRESULT (STDMETHODCALLTYPE *SerializeToBuffer)(
        IMFExtendedCameraIntrinsics *This,
        BYTE *pbBuffer,
        DWORD *pdwBufferSize);

    HRESULT (STDMETHODCALLTYPE *GetIntrinsicModelCount)(
        IMFExtendedCameraIntrinsics *This,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *GetIntrinsicModelByIndex)(
        IMFExtendedCameraIntrinsics *This,
        DWORD dwIndex,
        IMFExtendedCameraIntrinsicModel **ppIntrinsicModel);

    HRESULT (STDMETHODCALLTYPE *AddIntrinsicModel)(
        IMFExtendedCameraIntrinsics *This,
        IMFExtendedCameraIntrinsicModel *pIntrinsicModel);

    END_INTERFACE
} IMFExtendedCameraIntrinsicsVtbl;

interface IMFExtendedCameraIntrinsics {
    CONST_VTBL IMFExtendedCameraIntrinsicsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFExtendedCameraIntrinsics_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFExtendedCameraIntrinsics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFExtendedCameraIntrinsics_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFExtendedCameraIntrinsics methods ***/
#define IMFExtendedCameraIntrinsics_InitializeFromBuffer(This,pbBuffer,dwBufferSize) \
    ((This)->lpVtbl->InitializeFromBuffer(This,pbBuffer,dwBufferSize))
#define IMFExtendedCameraIntrinsics_GetBufferSize(This,pdwBufferSize) \
    ((This)->lpVtbl->GetBufferSize(This,pdwBufferSize))
#define IMFExtendedCameraIntrinsics_SerializeToBuffer(This,pbBuffer,pdwBufferSize) \
    ((This)->lpVtbl->SerializeToBuffer(This,pbBuffer,pdwBufferSize))
#define IMFExtendedCameraIntrinsics_GetIntrinsicModelCount(This,pdwCount) \
    ((This)->lpVtbl->GetIntrinsicModelCount(This,pdwCount))
#define IMFExtendedCameraIntrinsics_GetIntrinsicModelByIndex(This,dwIndex,ppIntrinsicModel) \
    ((This)->lpVtbl->GetIntrinsicModelByIndex(This,dwIndex,ppIntrinsicModel))
#define IMFExtendedCameraIntrinsics_AddIntrinsicModel(This,pIntrinsicModel) \
    ((This)->lpVtbl->AddIntrinsicModel(This,pIntrinsicModel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFExtendedCameraIntrinsics_INTERFACE_DEFINED__ */

DEFINE_GUID(MFStreamExtension_ExtendedCameraIntrinsics,
    0xaa74b3df, 0x9a2c, 0x48d6, 0x83, 0x93, 0x5b, 0xd1, 0xc1, 0xa8, 0x1e, 0x6e);

DEFINE_GUID(MFSampleExtension_ExtendedCameraIntrinsics,
    0x560bc4a5, 0x4de0, 0x4113, 0x9c, 0xdc, 0x83, 0x2d, 0xb9, 0x74, 0xf, 0x3d);

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)

STDAPI
MFCreateExtendedCameraIntrinsics(
     IMFExtendedCameraIntrinsics** ppExtendedCameraIntrinsics
    );

STDAPI
MFCreateExtendedCameraIntrinsicModel(
    const MFCameraIntrinsic_DistortionModelType distortionModelType,
     IMFExtendedCameraIntrinsicModel** ppExtendedCameraIntrinsicModel
    );

#endif // (NTDDI_VERSION >= NTDDI_WIN10_RS5)

#if (NTDDI_VERSION >= NTDDI_WIN10_VB)

/*****************************************************************************
 * IMFExtendedCameraControl interface
 */
#ifndef __IMFExtendedCameraControl_INTERFACE_DEFINED__
#define __IMFExtendedCameraControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFExtendedCameraControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFExtendedCameraControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFExtendedCameraControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFExtendedCameraControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFExtendedCameraControl *This);

    /*** IMFExtendedCameraControl methods ***/
    ULONGLONG (STDMETHODCALLTYPE *GetCapabilities)(
        IMFExtendedCameraControl *This);

    HRESULT (STDMETHODCALLTYPE *SetFlags)(
        IMFExtendedCameraControl *This,
        ULONGLONG ulFlags);

    ULONGLONG (STDMETHODCALLTYPE *GetFlags)(
        IMFExtendedCameraControl *This);

    HRESULT (STDMETHODCALLTYPE *LockPayload)(
        IMFExtendedCameraControl *This,
        BYTE **ppPayload,
        ULONG *pulPayload);

    HRESULT (STDMETHODCALLTYPE *UnlockPayload)(
        IMFExtendedCameraControl *This);

    HRESULT (STDMETHODCALLTYPE *CommitSettings)(
        IMFExtendedCameraControl *This);

    END_INTERFACE
} IMFExtendedCameraControlVtbl;

interface IMFExtendedCameraControl {
    CONST_VTBL IMFExtendedCameraControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFExtendedCameraControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFExtendedCameraControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFExtendedCameraControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFExtendedCameraControl methods ***/
#define IMFExtendedCameraControl_GetCapabilities(This) \
    ((This)->lpVtbl->GetCapabilities(This))
#define IMFExtendedCameraControl_SetFlags(This,ulFlags) \
    ((This)->lpVtbl->SetFlags(This,ulFlags))
#define IMFExtendedCameraControl_GetFlags(This) \
    ((This)->lpVtbl->GetFlags(This))
#define IMFExtendedCameraControl_LockPayload(This,ppPayload,pulPayload) \
    ((This)->lpVtbl->LockPayload(This,ppPayload,pulPayload))
#define IMFExtendedCameraControl_UnlockPayload(This) \
    ((This)->lpVtbl->UnlockPayload(This))
#define IMFExtendedCameraControl_CommitSettings(This) \
    ((This)->lpVtbl->CommitSettings(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFExtendedCameraControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFExtendedCameraController interface
 */
#ifndef __IMFExtendedCameraController_INTERFACE_DEFINED__
#define __IMFExtendedCameraController_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFExtendedCameraController;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFExtendedCameraControllerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFExtendedCameraController *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFExtendedCameraController *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFExtendedCameraController *This);

    /*** IMFExtendedCameraController methods ***/
    HRESULT (STDMETHODCALLTYPE *GetExtendedCameraControl)(
        IMFExtendedCameraController *This,
        DWORD dwStreamIndex,
        ULONG ulPropertyId,
        IMFExtendedCameraControl **ppControl);

    END_INTERFACE
} IMFExtendedCameraControllerVtbl;

interface IMFExtendedCameraController {
    CONST_VTBL IMFExtendedCameraControllerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFExtendedCameraController_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFExtendedCameraController_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFExtendedCameraController_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFExtendedCameraController methods ***/
#define IMFExtendedCameraController_GetExtendedCameraControl(This,dwStreamIndex,ulPropertyId,ppControl) \
    ((This)->lpVtbl->GetExtendedCameraControl(This,dwStreamIndex,ulPropertyId,ppControl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFExtendedCameraController_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFRelativePanelReport interface
 */
#ifndef __IMFRelativePanelReport_INTERFACE_DEFINED__
#define __IMFRelativePanelReport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRelativePanelReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRelativePanelReportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRelativePanelReport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRelativePanelReport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRelativePanelReport *This);

    /*** IMFRelativePanelReport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRelativePanel)(
        IMFRelativePanelReport *This,
        ULONG *panel);

    END_INTERFACE
} IMFRelativePanelReportVtbl;

interface IMFRelativePanelReport {
    CONST_VTBL IMFRelativePanelReportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRelativePanelReport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRelativePanelReport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRelativePanelReport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRelativePanelReport methods ***/
#define IMFRelativePanelReport_GetRelativePanel(This,panel) \
    ((This)->lpVtbl->GetRelativePanel(This,panel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRelativePanelReport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFRelativePanelWatcher interface
 */
#ifndef __IMFRelativePanelWatcher_INTERFACE_DEFINED__
#define __IMFRelativePanelWatcher_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRelativePanelWatcher;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRelativePanelWatcherVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRelativePanelWatcher *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRelativePanelWatcher *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRelativePanelWatcher *This);

    /*** IMFShutdown methods ***/
    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFRelativePanelWatcher *This);

    HRESULT (STDMETHODCALLTYPE *GetShutdownStatus)(
        IMFRelativePanelWatcher *This,
        MFSHUTDOWN_STATUS *pStatus);

    /*** IMFRelativePanelWatcher methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginGetReport)(
        IMFRelativePanelWatcher *This,
        IMFAsyncCallback *pCallback,
        IUnknown *pState);

    HRESULT (STDMETHODCALLTYPE *EndGetReport)(
        IMFRelativePanelWatcher *This,
        IMFAsyncResult *pResult,
        IMFRelativePanelReport **ppRelativePanelReport);

    HRESULT (STDMETHODCALLTYPE *GetReport)(
        IMFRelativePanelWatcher *This,
        IMFRelativePanelReport **ppRelativePanelReport);

    END_INTERFACE
} IMFRelativePanelWatcherVtbl;

interface IMFRelativePanelWatcher {
    CONST_VTBL IMFRelativePanelWatcherVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRelativePanelWatcher_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRelativePanelWatcher_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRelativePanelWatcher_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFShutdown methods ***/
#define IMFRelativePanelWatcher_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#define IMFRelativePanelWatcher_GetShutdownStatus(This,pStatus) \
    ((This)->lpVtbl->GetShutdownStatus(This,pStatus))
/*** IMFRelativePanelWatcher methods ***/
#define IMFRelativePanelWatcher_BeginGetReport(This,pCallback,pState) \
    ((This)->lpVtbl->BeginGetReport(This,pCallback,pState))
#define IMFRelativePanelWatcher_EndGetReport(This,pResult,ppRelativePanelReport) \
    ((This)->lpVtbl->EndGetReport(This,pResult,ppRelativePanelReport))
#define IMFRelativePanelWatcher_GetReport(This,ppRelativePanelReport) \
    ((This)->lpVtbl->GetReport(This,ppRelativePanelReport))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRelativePanelWatcher_INTERFACE_DEFINED__ */

STDAPI
MFCreateRelativePanelWatcher(
     PCWSTR videoDeviceId,
     PCWSTR displayMonitorDeviceId,
     IMFRelativePanelWatcher** ppRelativePanelWatcher
    );

/*****************************************************************************
 * IMFVideoCaptureSampleAllocator interface
 */
#ifndef __IMFVideoCaptureSampleAllocator_INTERFACE_DEFINED__
#define __IMFVideoCaptureSampleAllocator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoCaptureSampleAllocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoCaptureSampleAllocatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoCaptureSampleAllocator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoCaptureSampleAllocator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoCaptureSampleAllocator *This);

    /*** IMFVideoSampleAllocator methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDirectXManager)(
        IMFVideoCaptureSampleAllocator *This,
        IUnknown *pManager);

    HRESULT (STDMETHODCALLTYPE *UninitializeSampleAllocator)(
        IMFVideoCaptureSampleAllocator *This);

    HRESULT (STDMETHODCALLTYPE *InitializeSampleAllocator)(
        IMFVideoCaptureSampleAllocator *This,
        DWORD cRequestedFrames,
        IMFMediaType *pMediaType);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IMFVideoCaptureSampleAllocator *This,
        IMFSample **ppSample);

    /*** IMFVideoCaptureSampleAllocator methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeCaptureSampleAllocator)(
        IMFVideoCaptureSampleAllocator *This,
        DWORD cbSampleSize,
        DWORD cbCaptureMetadataSize,
        DWORD cbAlignment,
        DWORD cMinimumSamples,
        IMFAttributes *pAttributes,
        IMFMediaType *pMediaType);

    END_INTERFACE
} IMFVideoCaptureSampleAllocatorVtbl;

interface IMFVideoCaptureSampleAllocator {
    CONST_VTBL IMFVideoCaptureSampleAllocatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoCaptureSampleAllocator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoCaptureSampleAllocator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoCaptureSampleAllocator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoSampleAllocator methods ***/
#define IMFVideoCaptureSampleAllocator_SetDirectXManager(This,pManager) \
    ((This)->lpVtbl->SetDirectXManager(This,pManager))
#define IMFVideoCaptureSampleAllocator_UninitializeSampleAllocator(This) \
    ((This)->lpVtbl->UninitializeSampleAllocator(This))
#define IMFVideoCaptureSampleAllocator_InitializeSampleAllocator(This,cRequestedFrames,pMediaType) \
    ((This)->lpVtbl->InitializeSampleAllocator(This,cRequestedFrames,pMediaType))
#define IMFVideoCaptureSampleAllocator_AllocateSample(This,ppSample) \
    ((This)->lpVtbl->AllocateSample(This,ppSample))
/*** IMFVideoCaptureSampleAllocator methods ***/
#define IMFVideoCaptureSampleAllocator_InitializeCaptureSampleAllocator(This,cbSampleSize,cbCaptureMetadataSize,cbAlignment,cMinimumSamples,pAttributes,pMediaType) \
    ((This)->lpVtbl->InitializeCaptureSampleAllocator(This,cbSampleSize,cbCaptureMetadataSize,cbAlignment,cMinimumSamples,pAttributes,pMediaType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoCaptureSampleAllocator_INTERFACE_DEFINED__ */

typedef enum MFSampleAllocatorUsage {
    MFSampleAllocatorUsage_UsesProvidedAllocator = 0,
    MFSampleAllocatorUsage_UsesCustomAllocator = 1,
    MFSampleAllocatorUsage_DoesNotAllocate = 2
} MFSampleAllocatorUsage;

/*****************************************************************************
 * IMFSampleAllocatorControl interface
 */
#ifndef __IMFSampleAllocatorControl_INTERFACE_DEFINED__
#define __IMFSampleAllocatorControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSampleAllocatorControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSampleAllocatorControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSampleAllocatorControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSampleAllocatorControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSampleAllocatorControl *This);

    /*** IMFSampleAllocatorControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDefaultAllocator)(
        IMFSampleAllocatorControl *This,
        DWORD dwOutputStreamID,
        IUnknown *pAllocator);

    HRESULT (STDMETHODCALLTYPE *GetAllocatorUsage)(
        IMFSampleAllocatorControl *This,
        DWORD dwOutputStreamID,
        DWORD *pdwInputStreamID,
        MFSampleAllocatorUsage *peUsage);

    END_INTERFACE
} IMFSampleAllocatorControlVtbl;

interface IMFSampleAllocatorControl {
    CONST_VTBL IMFSampleAllocatorControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSampleAllocatorControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSampleAllocatorControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSampleAllocatorControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSampleAllocatorControl methods ***/
#define IMFSampleAllocatorControl_SetDefaultAllocator(This,dwOutputStreamID,pAllocator) \
    ((This)->lpVtbl->SetDefaultAllocator(This,dwOutputStreamID,pAllocator))
#define IMFSampleAllocatorControl_GetAllocatorUsage(This,dwOutputStreamID,pdwInputStreamID,peUsage) \
    ((This)->lpVtbl->GetAllocatorUsage(This,dwOutputStreamID,pdwInputStreamID,peUsage))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSampleAllocatorControl_INTERFACE_DEFINED__ */

#endif // (NTDDI_VERSION >= NTDDI_WIN10_VB)

#if (NTDDI_VERSION >= NTDDI_WIN10_CO)

typedef enum MFCameraOcclusionState {
    MFCameraOcclusionState_Open = 0x0,
    MFCameraOcclusionState_OccludedByLid = 0x1,
    MFCameraOcclusionState_OccludedByCameraHardware = 0x2
} MFCameraOcclusionState;

/*****************************************************************************
 * IMFCameraOcclusionStateReport interface
 */
#ifndef __IMFCameraOcclusionStateReport_INTERFACE_DEFINED__
#define __IMFCameraOcclusionStateReport_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraOcclusionStateReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraOcclusionStateReportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraOcclusionStateReport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraOcclusionStateReport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraOcclusionStateReport *This);

    /*** IMFCameraOcclusionStateReport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOcclusionState)(
        IMFCameraOcclusionStateReport *This,
        DWORD *occlusionState);

    END_INTERFACE
} IMFCameraOcclusionStateReportVtbl;

interface IMFCameraOcclusionStateReport {
    CONST_VTBL IMFCameraOcclusionStateReportVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraOcclusionStateReport_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraOcclusionStateReport_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraOcclusionStateReport_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraOcclusionStateReport methods ***/
#define IMFCameraOcclusionStateReport_GetOcclusionState(This,occlusionState) \
    ((This)->lpVtbl->GetOcclusionState(This,occlusionState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraOcclusionStateReport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFCameraOcclusionStateReportCallback interface
 */
#ifndef __IMFCameraOcclusionStateReportCallback_INTERFACE_DEFINED__
#define __IMFCameraOcclusionStateReportCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraOcclusionStateReportCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraOcclusionStateReportCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraOcclusionStateReportCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraOcclusionStateReportCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraOcclusionStateReportCallback *This);

    /*** IMFCameraOcclusionStateReportCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnOcclusionStateReport)(
        IMFCameraOcclusionStateReportCallback *This,
        IMFCameraOcclusionStateReport *occlusionStateReport);

    END_INTERFACE
} IMFCameraOcclusionStateReportCallbackVtbl;

interface IMFCameraOcclusionStateReportCallback {
    CONST_VTBL IMFCameraOcclusionStateReportCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraOcclusionStateReportCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraOcclusionStateReportCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraOcclusionStateReportCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraOcclusionStateReportCallback methods ***/
#define IMFCameraOcclusionStateReportCallback_OnOcclusionStateReport(This,occlusionStateReport) \
    ((This)->lpVtbl->OnOcclusionStateReport(This,occlusionStateReport))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraOcclusionStateReportCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFCameraOcclusionStateMonitor interface
 */
#ifndef __IMFCameraOcclusionStateMonitor_INTERFACE_DEFINED__
#define __IMFCameraOcclusionStateMonitor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraOcclusionStateMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraOcclusionStateMonitorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraOcclusionStateMonitor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraOcclusionStateMonitor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraOcclusionStateMonitor *This);

    /*** IMFCameraOcclusionStateMonitor methods ***/
    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFCameraOcclusionStateMonitor *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFCameraOcclusionStateMonitor *This);

    DWORD (STDMETHODCALLTYPE *GetSupportedStates)(
        IMFCameraOcclusionStateMonitor *This);

    END_INTERFACE
} IMFCameraOcclusionStateMonitorVtbl;

interface IMFCameraOcclusionStateMonitor {
    CONST_VTBL IMFCameraOcclusionStateMonitorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraOcclusionStateMonitor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraOcclusionStateMonitor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraOcclusionStateMonitor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraOcclusionStateMonitor methods ***/
#define IMFCameraOcclusionStateMonitor_Start(This) \
    ((This)->lpVtbl->Start(This))
#define IMFCameraOcclusionStateMonitor_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFCameraOcclusionStateMonitor_GetSupportedStates(This) \
    ((This)->lpVtbl->GetSupportedStates(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraOcclusionStateMonitor_INTERFACE_DEFINED__ */

STDAPI
MFCreateCameraOcclusionStateMonitor(
     LPCWSTR symbolicLink,
     IMFCameraOcclusionStateReportCallback* callback,
     IMFCameraOcclusionStateMonitor** occlusionStateMonitor
    );

#endif // (NTDDI_VERSION >= NTDDI_WIN10_CO)

#if (NTDDI_VERSION >= NTDDI_WIN10_NI)

EXTERN_GUID(KSPROPERTYSETID_ANYCAMERACONTROL, 0x94dd0c30, 0x28c7, 0x4efb, 0x9d, 0x6b, 0x81, 0x23, 0x0, 0xfb, 0xc, 0x7f);

/*****************************************************************************
 * IMFCameraControlNotify interface
 */
#ifndef __IMFCameraControlNotify_INTERFACE_DEFINED__
#define __IMFCameraControlNotify_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraControlNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraControlNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraControlNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraControlNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraControlNotify *This);

    /*** IMFCameraControlNotify methods ***/
    void (STDMETHODCALLTYPE *OnChange)(
        IMFCameraControlNotify *This,
        REFGUID controlSet,
        UINT32 id);

    void (STDMETHODCALLTYPE *OnError)(
        IMFCameraControlNotify *This,
        HRESULT hrStatus);

    END_INTERFACE
} IMFCameraControlNotifyVtbl;

interface IMFCameraControlNotify {
    CONST_VTBL IMFCameraControlNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraControlNotify_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraControlNotify_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraControlNotify_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraControlNotify methods ***/
#define IMFCameraControlNotify_OnChange(This,controlSet,id) \
    ((This)->lpVtbl->OnChange(This,controlSet,id))
#define IMFCameraControlNotify_OnError(This,hrStatus) \
    ((This)->lpVtbl->OnError(This,hrStatus))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraControlNotify_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFCameraControlMonitor interface
 */
#ifndef __IMFCameraControlMonitor_INTERFACE_DEFINED__
#define __IMFCameraControlMonitor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraControlMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraControlMonitorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraControlMonitor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraControlMonitor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraControlMonitor *This);

    /*** IMFCameraControlMonitor methods ***/
    HRESULT (STDMETHODCALLTYPE *Start)(
        IMFCameraControlMonitor *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IMFCameraControlMonitor *This);

    HRESULT (STDMETHODCALLTYPE *AddControlSubscription)(
        IMFCameraControlMonitor *This,
        GUID controlSet,
        UINT32 id);

    HRESULT (STDMETHODCALLTYPE *RemoveControlSubscription)(
        IMFCameraControlMonitor *This,
        GUID controlSet,
        UINT32 id);

    void (STDMETHODCALLTYPE *Shutdown)(
        IMFCameraControlMonitor *This);

    END_INTERFACE
} IMFCameraControlMonitorVtbl;

interface IMFCameraControlMonitor {
    CONST_VTBL IMFCameraControlMonitorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraControlMonitor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraControlMonitor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraControlMonitor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraControlMonitor methods ***/
#define IMFCameraControlMonitor_Start(This) \
    ((This)->lpVtbl->Start(This))
#define IMFCameraControlMonitor_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IMFCameraControlMonitor_AddControlSubscription(This,controlSet,id) \
    ((This)->lpVtbl->AddControlSubscription(This,controlSet,id))
#define IMFCameraControlMonitor_RemoveControlSubscription(This,controlSet,id) \
    ((This)->lpVtbl->RemoveControlSubscription(This,controlSet,id))
#define IMFCameraControlMonitor_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraControlMonitor_INTERFACE_DEFINED__ */

STDAPI
MFCreateCameraControlMonitor(
     LPCWSTR symbolicLink,
     IMFCameraControlNotify* callback,
     IMFCameraControlMonitor ** ppCameraControlMonitor
    );

typedef enum __POIDL_mfidl_tag_00000020 {
    MF_CAMERA_CONTROL_CONFIGURATION_TYPE_PRESTART = 0,
    MF_CAMERA_CONTROL_CONFIGURATION_TYPE_POSTSTART = 1
} MF_CAMERA_CONTROL_CONFIGURATION_TYPE;

typedef struct __POIDL_mfidl_tag_00000021 {
    LONG minValue;
    LONG maxValue;
    LONG stepValue;
    LONG defaultValue;
} MF_CAMERA_CONTROL_RANGE_INFO;

/*****************************************************************************
 * IMFCameraControlDefaults interface
 */
#ifndef __IMFCameraControlDefaults_INTERFACE_DEFINED__
#define __IMFCameraControlDefaults_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraControlDefaults;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraControlDefaultsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraControlDefaults *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraControlDefaults *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraControlDefaults *This);

    /*** IMFCameraControlDefaults methods ***/
    MF_CAMERA_CONTROL_CONFIGURATION_TYPE (STDMETHODCALLTYPE *GetType)(
        IMFCameraControlDefaults *This);

    HRESULT (STDMETHODCALLTYPE *GetRangeInfo)(
        IMFCameraControlDefaults *This,
        MF_CAMERA_CONTROL_RANGE_INFO *rangeInfo);

    HRESULT (STDMETHODCALLTYPE *LockControlData)(
        IMFCameraControlDefaults *This,
        void **control,
        ULONG *controlSize,
        void **data,
        ULONG *dataSize);

    HRESULT (STDMETHODCALLTYPE *UnlockControlData)(
        IMFCameraControlDefaults *This);

    END_INTERFACE
} IMFCameraControlDefaultsVtbl;

interface IMFCameraControlDefaults {
    CONST_VTBL IMFCameraControlDefaultsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraControlDefaults_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraControlDefaults_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraControlDefaults_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraControlDefaults methods ***/
#define IMFCameraControlDefaults_GetType(This) \
    ((This)->lpVtbl->GetType(This))
#define IMFCameraControlDefaults_GetRangeInfo(This,rangeInfo) \
    ((This)->lpVtbl->GetRangeInfo(This,rangeInfo))
#define IMFCameraControlDefaults_LockControlData(This,control,controlSize,data,dataSize) \
    ((This)->lpVtbl->LockControlData(This,control,controlSize,data,dataSize))
#define IMFCameraControlDefaults_UnlockControlData(This) \
    ((This)->lpVtbl->UnlockControlData(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraControlDefaults_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFCameraControlDefaultsCollection interface
 */
#ifndef __IMFCameraControlDefaultsCollection_INTERFACE_DEFINED__
#define __IMFCameraControlDefaultsCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraControlDefaultsCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraControlDefaultsCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraControlDefaultsCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraControlDefaultsCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraControlDefaultsCollection *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFCameraControlDefaultsCollection *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFCameraControlDefaultsCollection *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFCameraControlDefaultsCollection *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFCameraControlDefaultsCollection *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFCameraControlDefaultsCollection *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFCameraControlDefaultsCollection *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFCameraControlDefaultsCollection *This,
        IMFAttributes *pDest);

    /*** IMFCameraControlDefaultsCollection methods ***/
    ULONG (STDMETHODCALLTYPE *GetControlCount)(
        IMFCameraControlDefaultsCollection *This);

    HRESULT (STDMETHODCALLTYPE *GetControl)(
        IMFCameraControlDefaultsCollection *This,
        ULONG index,
        IMFCameraControlDefaults **configuration);

    HRESULT (STDMETHODCALLTYPE *GetOrAddExtendedControl)(
        IMFCameraControlDefaultsCollection *This,
        MF_CAMERA_CONTROL_CONFIGURATION_TYPE configType,
        ULONG constrolId,
        DWORD streamId,
        ULONG dataSize,
        IMFCameraControlDefaults **defaults);

    HRESULT (STDMETHODCALLTYPE *GetOrAddControl)(
        IMFCameraControlDefaultsCollection *This,
        MF_CAMERA_CONTROL_CONFIGURATION_TYPE configType,
        REFGUID controlSet,
        ULONG constrolId,
        ULONG controlSize,
        ULONG dataSize,
        IMFCameraControlDefaults **defaults);

    HRESULT (STDMETHODCALLTYPE *RemoveControl)(
        IMFCameraControlDefaultsCollection *This,
        REFGUID controlSet,
        ULONG constrolId);

    HRESULT (STDMETHODCALLTYPE *RemoveAllControls)(
        IMFCameraControlDefaultsCollection *This);

    END_INTERFACE
} IMFCameraControlDefaultsCollectionVtbl;

interface IMFCameraControlDefaultsCollection {
    CONST_VTBL IMFCameraControlDefaultsCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraControlDefaultsCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraControlDefaultsCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraControlDefaultsCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFCameraControlDefaultsCollection_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFCameraControlDefaultsCollection_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFCameraControlDefaultsCollection_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFCameraControlDefaultsCollection_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFCameraControlDefaultsCollection_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFCameraControlDefaultsCollection_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFCameraControlDefaultsCollection_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFCameraControlDefaultsCollection_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFCameraControlDefaultsCollection_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFCameraControlDefaultsCollection_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFCameraControlDefaultsCollection_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFCameraControlDefaultsCollection_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFCameraControlDefaultsCollection_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFCameraControlDefaultsCollection_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFCameraControlDefaultsCollection_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFCameraControlDefaultsCollection_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFCameraControlDefaultsCollection_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFCameraControlDefaultsCollection_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFCameraControlDefaultsCollection_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFCameraControlDefaultsCollection_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFCameraControlDefaultsCollection_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFCameraControlDefaultsCollection_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFCameraControlDefaultsCollection_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFCameraControlDefaultsCollection_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFCameraControlDefaultsCollection_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFCameraControlDefaultsCollection_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFCameraControlDefaultsCollection_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFCameraControlDefaultsCollection_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFCameraControlDefaultsCollection_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFCameraControlDefaultsCollection_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFCameraControlDefaultsCollection methods ***/
#define IMFCameraControlDefaultsCollection_GetControlCount(This) \
    ((This)->lpVtbl->GetControlCount(This))
#define IMFCameraControlDefaultsCollection_GetControl(This,index,configuration) \
    ((This)->lpVtbl->GetControl(This,index,configuration))
#define IMFCameraControlDefaultsCollection_GetOrAddExtendedControl(This,configType,constrolId,streamId,dataSize,defaults) \
    ((This)->lpVtbl->GetOrAddExtendedControl(This,configType,constrolId,streamId,dataSize,defaults))
#define IMFCameraControlDefaultsCollection_GetOrAddControl(This,configType,controlSet,constrolId,controlSize,dataSize,defaults) \
    ((This)->lpVtbl->GetOrAddControl(This,configType,controlSet,constrolId,controlSize,dataSize,defaults))
#define IMFCameraControlDefaultsCollection_RemoveControl(This,controlSet,constrolId) \
    ((This)->lpVtbl->RemoveControl(This,controlSet,constrolId))
#define IMFCameraControlDefaultsCollection_RemoveAllControls(This) \
    ((This)->lpVtbl->RemoveAllControls(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraControlDefaultsCollection_INTERFACE_DEFINED__ */

EXTERN_GUID(CLSID_CameraConfigurationManager, 0x6C92B540, 0x5854, 0x4A17,0x92, 0xB6, 0xAC, 0x89, 0xC9, 0x6E, 0x96, 0x83);

/*****************************************************************************
 * IMFCameraConfigurationManager interface
 */
#ifndef __IMFCameraConfigurationManager_INTERFACE_DEFINED__
#define __IMFCameraConfigurationManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCameraConfigurationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCameraConfigurationManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCameraConfigurationManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCameraConfigurationManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCameraConfigurationManager *This);

    /*** IMFCameraConfigurationManager methods ***/
    HRESULT (STDMETHODCALLTYPE *LoadDefaults)(
        IMFCameraConfigurationManager *This,
        IMFAttributes *cameraAttributes,
        IMFCameraControlDefaultsCollection **configurations);

    HRESULT (STDMETHODCALLTYPE *SaveDefaults)(
        IMFCameraConfigurationManager *This,
        IMFCameraControlDefaultsCollection *configurations);

    void (STDMETHODCALLTYPE *Shutdown)(
        IMFCameraConfigurationManager *This);

    END_INTERFACE
} IMFCameraConfigurationManagerVtbl;

interface IMFCameraConfigurationManager {
    CONST_VTBL IMFCameraConfigurationManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCameraConfigurationManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCameraConfigurationManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCameraConfigurationManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCameraConfigurationManager methods ***/
#define IMFCameraConfigurationManager_LoadDefaults(This,cameraAttributes,configurations) \
    ((This)->lpVtbl->LoadDefaults(This,cameraAttributes,configurations))
#define IMFCameraConfigurationManager_SaveDefaults(This,configurations) \
    ((This)->lpVtbl->SaveDefaults(This,configurations))
#define IMFCameraConfigurationManager_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCameraConfigurationManager_INTERFACE_DEFINED__ */

#endif // (NTDDI_VERSION >= NTDDI_WIN10_NI)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER LPSAFEARRAY_UserSize(ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(ULONG *, LPSAFEARRAY *);

/* End additional prototypes for all interfaces */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* __mfidl_h__ */
