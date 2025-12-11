/* Generated from evr.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __evr_h__
#define __evr_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IMFVideoPositionMapper_FWD_DEFINED__
#define __IMFVideoPositionMapper_FWD_DEFINED__
typedef interface IMFVideoPositionMapper IMFVideoPositionMapper;
#endif /* __IMFVideoPositionMapper_FWD_DEFINED__ */

#ifndef __IMFVideoDeviceID_FWD_DEFINED__
#define __IMFVideoDeviceID_FWD_DEFINED__
typedef interface IMFVideoDeviceID IMFVideoDeviceID;
#endif /* __IMFVideoDeviceID_FWD_DEFINED__ */

#ifndef __IMFVideoDisplayControl_FWD_DEFINED__
#define __IMFVideoDisplayControl_FWD_DEFINED__
typedef interface IMFVideoDisplayControl IMFVideoDisplayControl;
#endif /* __IMFVideoDisplayControl_FWD_DEFINED__ */

#ifndef __IMFVideoPresenter_FWD_DEFINED__
#define __IMFVideoPresenter_FWD_DEFINED__
typedef interface IMFVideoPresenter IMFVideoPresenter;
#endif /* __IMFVideoPresenter_FWD_DEFINED__ */

#ifndef __IMFDesiredSample_FWD_DEFINED__
#define __IMFDesiredSample_FWD_DEFINED__
typedef interface IMFDesiredSample IMFDesiredSample;
#endif /* __IMFDesiredSample_FWD_DEFINED__ */

#ifndef __IMFVideoMixerControl_FWD_DEFINED__
#define __IMFVideoMixerControl_FWD_DEFINED__
typedef interface IMFVideoMixerControl IMFVideoMixerControl;
#endif /* __IMFVideoMixerControl_FWD_DEFINED__ */

#ifndef __IMFVideoMixerControl2_FWD_DEFINED__
#define __IMFVideoMixerControl2_FWD_DEFINED__
typedef interface IMFVideoMixerControl2 IMFVideoMixerControl2;
#endif /* __IMFVideoMixerControl2_FWD_DEFINED__ */

#ifndef __IMFVideoRenderer_FWD_DEFINED__
#define __IMFVideoRenderer_FWD_DEFINED__
typedef interface IMFVideoRenderer IMFVideoRenderer;
#endif /* __IMFVideoRenderer_FWD_DEFINED__ */

#ifndef __IEVRFilterConfig_FWD_DEFINED__
#define __IEVRFilterConfig_FWD_DEFINED__
typedef interface IEVRFilterConfig IEVRFilterConfig;
#endif /* __IEVRFilterConfig_FWD_DEFINED__ */

#ifndef __IEVRFilterConfigEx_FWD_DEFINED__
#define __IEVRFilterConfigEx_FWD_DEFINED__
typedef interface IEVRFilterConfigEx IEVRFilterConfigEx;
#endif /* __IEVRFilterConfigEx_FWD_DEFINED__ */

#ifndef __IMFTopologyServiceLookup_FWD_DEFINED__
#define __IMFTopologyServiceLookup_FWD_DEFINED__
typedef interface IMFTopologyServiceLookup IMFTopologyServiceLookup;
#endif /* __IMFTopologyServiceLookup_FWD_DEFINED__ */

#ifndef __IMFTopologyServiceLookupClient_FWD_DEFINED__
#define __IMFTopologyServiceLookupClient_FWD_DEFINED__
typedef interface IMFTopologyServiceLookupClient IMFTopologyServiceLookupClient;
#endif /* __IMFTopologyServiceLookupClient_FWD_DEFINED__ */

#ifndef __IEVRTrustedVideoPlugin_FWD_DEFINED__
#define __IEVRTrustedVideoPlugin_FWD_DEFINED__
typedef interface IEVRTrustedVideoPlugin IEVRTrustedVideoPlugin;
#endif /* __IEVRTrustedVideoPlugin_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwn.h"
#include "propidl.h"
#include "mfidl.h"
#include "mftransform.h"

#include "mediaobj.h"

#include "strmif.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifdef __midl

typedef enum _D3DFORMAT {
    D3DFMT_UNKNOWN = 0,
    D3DFMT_R8G8B8 = 20,
    D3DFMT_A8R8G8B8 = 21,
    D3DFMT_X8R8G8B8 = 22,
    D3DFMT_R5G6B5 = 23,
    D3DFMT_X1R5G5B5 = 24,
    D3DFMT_A1R5G5B5 = 25,
    D3DFMT_A4R4G4B4 = 26,
    D3DFMT_R3G3B2 = 27,
    D3DFMT_A8 = 28,
    D3DFMT_A8R3G3B2 = 29,
    D3DFMT_X4R4G4B4 = 30,
    D3DFMT_A2B10G10R10 = 31,
    D3DFMT_G16R16 = 34,
    D3DFMT_A8P8 = 40,
    D3DFMT_P8 = 41,
    D3DFMT_L8 = 50,
    D3DFMT_A8L8 = 51,
    D3DFMT_A4L4 = 52,
    D3DFMT_V8U8 = 60,
    D3DFMT_L6V5U5 = 61,
    D3DFMT_X8L8V8U8 = 62,
    D3DFMT_Q8W8V8U8 = 63,
    D3DFMT_V16U16 = 64,
    D3DFMT_W11V11U10 = 65,
    D3DFMT_A2W10V10U10 = 67,
    D3DFMT_D16_LOCKABLE = 70,
    D3DFMT_D32 = 71,
    D3DFMT_D15S1 = 73,
    D3DFMT_D24S8 = 75,
    D3DFMT_D16 = 80,
    D3DFMT_D24X8 = 77,
    D3DFMT_D24X4S4 = 79,
    D3DFMT_VERTEXDATA = 100,
    D3DFMT_INDEX16 = 101,
    D3DFMT_INDEX32 = 102,
    D3DFMT_FORCE_DWORD = 0x7fffffff
} D3DFORMAT;

#endif /* __midl */

DEFINE_GUID(MR_VIDEO_RENDER_SERVICE,
    0x1092a86c,
    0xab1a,
    0x459a,
    0xa3, 0x36, 0x83, 0x1f, 0xbc, 0x4d, 0x11, 0xff
);

DEFINE_GUID(MR_VIDEO_MIXER_SERVICE,
    0x73cd2fc,
    0x6cf4,
    0x40b7,
    0x88, 0x59, 0xe8, 0x95, 0x52, 0xc8, 0x41, 0xf8
);

DEFINE_GUID(MR_VIDEO_ACCELERATION_SERVICE,
    0xefef5175,
    0x5c7d,
    0x4ce2,
    0xbb, 0xbd, 0x34, 0xff, 0x8b, 0xca, 0x65, 0x54
);

DEFINE_GUID(MR_BUFFER_SERVICE,
    0xa562248c,
    0x9ac6,
    0x4ffc,
    0x9f, 0xba, 0x3a, 0xf8, 0xf8, 0xad, 0x1a, 0x4d
);

DEFINE_GUID(VIDEO_ZOOM_RECT,
    0x7aaa1638,
    0x1b7f,
    0x4c93,
    0xbd, 0x89, 0x5b, 0x9c, 0x9f, 0xb6, 0xfc, 0xf0
);


#ifndef __IMFTrackedSample_FWD_DEFINED__
#define __IMFTrackedSample_FWD_DEFINED__
typedef interface IMFTrackedSample IMFTrackedSample;
#endif /* __IMFTrackedSample_FWD_DEFINED__ */


#ifndef __IMFVideoDisplayControl_FWD_DEFINED__
#define __IMFVideoDisplayControl_FWD_DEFINED__
typedef interface IMFVideoDisplayControl IMFVideoDisplayControl;
#endif /* __IMFVideoDisplayControl_FWD_DEFINED__ */

#ifndef __IMFVideoPresenter_FWD_DEFINED__
#define __IMFVideoPresenter_FWD_DEFINED__
typedef interface IMFVideoPresenter IMFVideoPresenter;
#endif /* __IMFVideoPresenter_FWD_DEFINED__ */

#ifndef __IMFVideoPositionMapper_FWD_DEFINED__
#define __IMFVideoPositionMapper_FWD_DEFINED__
typedef interface IMFVideoPositionMapper IMFVideoPositionMapper;
#endif /* __IMFVideoPositionMapper_FWD_DEFINED__ */

#ifndef __IMFDesiredSample_FWD_DEFINED__
#define __IMFDesiredSample_FWD_DEFINED__
typedef interface IMFDesiredSample IMFDesiredSample;
#endif /* __IMFDesiredSample_FWD_DEFINED__ */

#ifndef __IMFVideoMixerControl_FWD_DEFINED__
#define __IMFVideoMixerControl_FWD_DEFINED__
typedef interface IMFVideoMixerControl IMFVideoMixerControl;
#endif /* __IMFVideoMixerControl_FWD_DEFINED__ */

#ifndef __IMFVideoRenderer_FWD_DEFINED__
#define __IMFVideoRenderer_FWD_DEFINED__
typedef interface IMFVideoRenderer IMFVideoRenderer;
#endif /* __IMFVideoRenderer_FWD_DEFINED__ */

#ifndef __IMFVideoDeviceID_FWD_DEFINED__
#define __IMFVideoDeviceID_FWD_DEFINED__
typedef interface IMFVideoDeviceID IMFVideoDeviceID;
#endif /* __IMFVideoDeviceID_FWD_DEFINED__ */

#ifndef __IEVRFilterConfig_FWD_DEFINED__
#define __IEVRFilterConfig_FWD_DEFINED__
typedef interface IEVRFilterConfig IEVRFilterConfig;
#endif /* __IEVRFilterConfig_FWD_DEFINED__ */

/*****************************************************************************
 * IMFVideoPositionMapper interface
 */
#ifndef __IMFVideoPositionMapper_INTERFACE_DEFINED__
#define __IMFVideoPositionMapper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoPositionMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoPositionMapperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoPositionMapper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoPositionMapper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoPositionMapper *This);

    /*** IMFVideoPositionMapper methods ***/
    HRESULT (STDMETHODCALLTYPE *MapOutputCoordinateToInputStream)(
        IMFVideoPositionMapper *This,
        float xOut,
        float yOut,
        DWORD dwOutputStreamIndex,
        DWORD dwInputStreamIndex,
        float *pxIn,
        float *pyIn);

    END_INTERFACE
} IMFVideoPositionMapperVtbl;

interface IMFVideoPositionMapper {
    CONST_VTBL IMFVideoPositionMapperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoPositionMapper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoPositionMapper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoPositionMapper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoPositionMapper methods ***/
#define IMFVideoPositionMapper_MapOutputCoordinateToInputStream(This,xOut,yOut,dwOutputStreamIndex,dwInputStreamIndex,pxIn,pyIn) \
    ((This)->lpVtbl->MapOutputCoordinateToInputStream(This,xOut,yOut,dwOutputStreamIndex,dwInputStreamIndex,pxIn,pyIn))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoPositionMapper_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFVideoDeviceID interface
 */
#ifndef __IMFVideoDeviceID_INTERFACE_DEFINED__
#define __IMFVideoDeviceID_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoDeviceID;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoDeviceIDVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoDeviceID *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoDeviceID *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoDeviceID *This);

    /*** IMFVideoDeviceID methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDeviceID)(
        IMFVideoDeviceID *This,
        IID *pDeviceID);

    END_INTERFACE
} IMFVideoDeviceIDVtbl;

interface IMFVideoDeviceID {
    CONST_VTBL IMFVideoDeviceIDVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoDeviceID_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoDeviceID_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoDeviceID_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoDeviceID methods ***/
#define IMFVideoDeviceID_GetDeviceID(This,pDeviceID) \
    ((This)->lpVtbl->GetDeviceID(This,pDeviceID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoDeviceID_INTERFACE_DEFINED__ */

typedef enum MFVideoAspectRatioMode {
    MFVideoARMode_None = 0x0,
    MFVideoARMode_PreservePicture = 0x1,
    MFVideoARMode_PreservePixel = 0x2,
    MFVideoARMode_NonLinearStretch = 0x4,
    MFVideoARMode_Mask = 0x7
} MFVideoAspectRatioMode;

typedef enum MFVideoRenderPrefs {
    MFVideoRenderPrefs_DoNotRenderBorder = 0x1,
    MFVideoRenderPrefs_DoNotClipToDevice = 0x2,
    MFVideoRenderPrefs_AllowOutputThrottling = 0x4,
    MFVideoRenderPrefs_ForceOutputThrottling = 0x8,
    MFVideoRenderPrefs_ForceBatching = 0x10,
    MFVideoRenderPrefs_AllowBatching = 0x20,
    MFVideoRenderPrefs_ForceScaling = 0x40,
    MFVideoRenderPrefs_AllowScaling = 0x80,
    MFVideoRenderPrefs_DoNotRepaintOnStop = 0x100,
    MFVideoRenderPrefs_Mask = 0x1ff
} MFVideoRenderPrefs;

#ifndef _MFVideoNormalizedRect_
#define _MFVideoNormalizedRect_

typedef struct MFVideoNormalizedRect {
    float left;
    float top;
    float right;
    float bottom;
} MFVideoNormalizedRect;
#endif

/*****************************************************************************
 * IMFVideoDisplayControl interface
 */
#ifndef __IMFVideoDisplayControl_INTERFACE_DEFINED__
#define __IMFVideoDisplayControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoDisplayControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoDisplayControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoDisplayControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoDisplayControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoDisplayControl *This);

    /*** IMFVideoDisplayControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNativeVideoSize)(
        IMFVideoDisplayControl *This,
        SIZE *pszVideo,
        SIZE *pszARVideo);

    HRESULT (STDMETHODCALLTYPE *GetIdealVideoSize)(
        IMFVideoDisplayControl *This,
        SIZE *pszMin,
        SIZE *pszMax);

    HRESULT (STDMETHODCALLTYPE *SetVideoPosition)(
        IMFVideoDisplayControl *This,
        const MFVideoNormalizedRect *pnrcSource,
        const LPRECT prcDest);

    HRESULT (STDMETHODCALLTYPE *GetVideoPosition)(
        IMFVideoDisplayControl *This,
        MFVideoNormalizedRect *pnrcSource,
        LPRECT prcDest);

    HRESULT (STDMETHODCALLTYPE *SetAspectRatioMode)(
        IMFVideoDisplayControl *This,
        DWORD dwAspectRatioMode);

    HRESULT (STDMETHODCALLTYPE *GetAspectRatioMode)(
        IMFVideoDisplayControl *This,
        DWORD *pdwAspectRatioMode);

    HRESULT (STDMETHODCALLTYPE *SetVideoWindow)(
        IMFVideoDisplayControl *This,
        HWND hwndVideo);

    HRESULT (STDMETHODCALLTYPE *GetVideoWindow)(
        IMFVideoDisplayControl *This,
        HWND *phwndVideo);

    HRESULT (STDMETHODCALLTYPE *RepaintVideo)(
        IMFVideoDisplayControl *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentImage)(
        IMFVideoDisplayControl *This,
        BITMAPINFOHEADER *pBih,
        BYTE **pDib,
        DWORD *pcbDib,
        LONGLONG *pTimeStamp);

    HRESULT (STDMETHODCALLTYPE *SetBorderColor)(
        IMFVideoDisplayControl *This,
        COLORREF Clr);

    HRESULT (STDMETHODCALLTYPE *GetBorderColor)(
        IMFVideoDisplayControl *This,
        COLORREF *pClr);

    HRESULT (STDMETHODCALLTYPE *SetRenderingPrefs)(
        IMFVideoDisplayControl *This,
        DWORD dwRenderFlags);

    HRESULT (STDMETHODCALLTYPE *GetRenderingPrefs)(
        IMFVideoDisplayControl *This,
        DWORD *pdwRenderFlags);

    HRESULT (STDMETHODCALLTYPE *SetFullscreen)(
        IMFVideoDisplayControl *This,
        BOOL fFullscreen);

    HRESULT (STDMETHODCALLTYPE *GetFullscreen)(
        IMFVideoDisplayControl *This,
        BOOL *pfFullscreen);

    END_INTERFACE
} IMFVideoDisplayControlVtbl;

interface IMFVideoDisplayControl {
    CONST_VTBL IMFVideoDisplayControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoDisplayControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoDisplayControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoDisplayControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoDisplayControl methods ***/
#define IMFVideoDisplayControl_GetNativeVideoSize(This,pszVideo,pszARVideo) \
    ((This)->lpVtbl->GetNativeVideoSize(This,pszVideo,pszARVideo))
#define IMFVideoDisplayControl_GetIdealVideoSize(This,pszMin,pszMax) \
    ((This)->lpVtbl->GetIdealVideoSize(This,pszMin,pszMax))
#define IMFVideoDisplayControl_SetVideoPosition(This,pnrcSource,prcDest) \
    ((This)->lpVtbl->SetVideoPosition(This,pnrcSource,prcDest))
#define IMFVideoDisplayControl_GetVideoPosition(This,pnrcSource,prcDest) \
    ((This)->lpVtbl->GetVideoPosition(This,pnrcSource,prcDest))
#define IMFVideoDisplayControl_SetAspectRatioMode(This,dwAspectRatioMode) \
    ((This)->lpVtbl->SetAspectRatioMode(This,dwAspectRatioMode))
#define IMFVideoDisplayControl_GetAspectRatioMode(This,pdwAspectRatioMode) \
    ((This)->lpVtbl->GetAspectRatioMode(This,pdwAspectRatioMode))
#define IMFVideoDisplayControl_SetVideoWindow(This,hwndVideo) \
    ((This)->lpVtbl->SetVideoWindow(This,hwndVideo))
#define IMFVideoDisplayControl_GetVideoWindow(This,phwndVideo) \
    ((This)->lpVtbl->GetVideoWindow(This,phwndVideo))
#define IMFVideoDisplayControl_RepaintVideo(This) \
    ((This)->lpVtbl->RepaintVideo(This))
#define IMFVideoDisplayControl_GetCurrentImage(This,pBih,pDib,pcbDib,pTimeStamp) \
    ((This)->lpVtbl->GetCurrentImage(This,pBih,pDib,pcbDib,pTimeStamp))
#define IMFVideoDisplayControl_SetBorderColor(This,Clr) \
    ((This)->lpVtbl->SetBorderColor(This,Clr))
#define IMFVideoDisplayControl_GetBorderColor(This,pClr) \
    ((This)->lpVtbl->GetBorderColor(This,pClr))
#define IMFVideoDisplayControl_SetRenderingPrefs(This,dwRenderFlags) \
    ((This)->lpVtbl->SetRenderingPrefs(This,dwRenderFlags))
#define IMFVideoDisplayControl_GetRenderingPrefs(This,pdwRenderFlags) \
    ((This)->lpVtbl->GetRenderingPrefs(This,pdwRenderFlags))
#define IMFVideoDisplayControl_SetFullscreen(This,fFullscreen) \
    ((This)->lpVtbl->SetFullscreen(This,fFullscreen))
#define IMFVideoDisplayControl_GetFullscreen(This,pfFullscreen) \
    ((This)->lpVtbl->GetFullscreen(This,pfFullscreen))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoDisplayControl_INTERFACE_DEFINED__ */

typedef enum MFVP_MESSAGE_TYPE {
    MFVP_MESSAGE_FLUSH = 0x0,
    MFVP_MESSAGE_INVALIDATEMEDIATYPE = 0x1,
    MFVP_MESSAGE_PROCESSINPUTNOTIFY = 0x2,
    MFVP_MESSAGE_BEGINSTREAMING = 0x3,
    MFVP_MESSAGE_ENDSTREAMING = 0x4,
    MFVP_MESSAGE_ENDOFSTREAM = 0x5,
    MFVP_MESSAGE_STEP = 0x6,
    MFVP_MESSAGE_CANCELSTEP = 0x7
} MFVP_MESSAGE_TYPE;

/*****************************************************************************
 * IMFVideoPresenter interface
 */
#ifndef __IMFVideoPresenter_INTERFACE_DEFINED__
#define __IMFVideoPresenter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoPresenter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoPresenterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoPresenter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoPresenter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoPresenter *This);

    /*** IMFClockStateSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnClockStart)(
        IMFVideoPresenter *This,
        MFTIME hnsSystemTime,
        LONGLONG llClockStartOffset);

    HRESULT (STDMETHODCALLTYPE *OnClockStop)(
        IMFVideoPresenter *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockPause)(
        IMFVideoPresenter *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockRestart)(
        IMFVideoPresenter *This,
        MFTIME hnsSystemTime);

    HRESULT (STDMETHODCALLTYPE *OnClockSetRate)(
        IMFVideoPresenter *This,
        MFTIME hnsSystemTime,
        float flRate);

    /*** IMFVideoPresenter methods ***/
    HRESULT (STDMETHODCALLTYPE *ProcessMessage)(
        IMFVideoPresenter *This,
        MFVP_MESSAGE_TYPE eMessage,
        ULONG_PTR ulParam);

    HRESULT (STDMETHODCALLTYPE *GetCurrentMediaType)(
        IMFVideoPresenter *This,
        IMFVideoMediaType **ppMediaType);

    END_INTERFACE
} IMFVideoPresenterVtbl;

interface IMFVideoPresenter {
    CONST_VTBL IMFVideoPresenterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoPresenter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoPresenter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoPresenter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFClockStateSink methods ***/
#define IMFVideoPresenter_OnClockStart(This,hnsSystemTime,llClockStartOffset) \
    ((This)->lpVtbl->OnClockStart(This,hnsSystemTime,llClockStartOffset))
#define IMFVideoPresenter_OnClockStop(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockStop(This,hnsSystemTime))
#define IMFVideoPresenter_OnClockPause(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockPause(This,hnsSystemTime))
#define IMFVideoPresenter_OnClockRestart(This,hnsSystemTime) \
    ((This)->lpVtbl->OnClockRestart(This,hnsSystemTime))
#define IMFVideoPresenter_OnClockSetRate(This,hnsSystemTime,flRate) \
    ((This)->lpVtbl->OnClockSetRate(This,hnsSystemTime,flRate))
/*** IMFVideoPresenter methods ***/
#define IMFVideoPresenter_ProcessMessage(This,eMessage,ulParam) \
    ((This)->lpVtbl->ProcessMessage(This,eMessage,ulParam))
#define IMFVideoPresenter_GetCurrentMediaType(This,ppMediaType) \
    ((This)->lpVtbl->GetCurrentMediaType(This,ppMediaType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoPresenter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFDesiredSample interface
 */
#ifndef __IMFDesiredSample_INTERFACE_DEFINED__
#define __IMFDesiredSample_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFDesiredSample;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFDesiredSampleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFDesiredSample *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFDesiredSample *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFDesiredSample *This);

    /*** IMFDesiredSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesiredSampleTimeAndDuration)(
        IMFDesiredSample *This,
        LONGLONG *phnsSampleTime,
        LONGLONG *phnsSampleDuration);

    void (STDMETHODCALLTYPE *SetDesiredSampleTimeAndDuration)(
        IMFDesiredSample *This,
        LONGLONG hnsSampleTime,
        LONGLONG hnsSampleDuration);

    void (STDMETHODCALLTYPE *Clear)(
        IMFDesiredSample *This);

    END_INTERFACE
} IMFDesiredSampleVtbl;

interface IMFDesiredSample {
    CONST_VTBL IMFDesiredSampleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFDesiredSample_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFDesiredSample_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFDesiredSample_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFDesiredSample methods ***/
#define IMFDesiredSample_GetDesiredSampleTimeAndDuration(This,phnsSampleTime,phnsSampleDuration) \
    ((This)->lpVtbl->GetDesiredSampleTimeAndDuration(This,phnsSampleTime,phnsSampleDuration))
#define IMFDesiredSample_SetDesiredSampleTimeAndDuration(This,hnsSampleTime,hnsSampleDuration) \
    ((This)->lpVtbl->SetDesiredSampleTimeAndDuration(This,hnsSampleTime,hnsSampleDuration))
#define IMFDesiredSample_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFDesiredSample_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IMFVideoMixerControl interface
 */
#ifndef __IMFVideoMixerControl_INTERFACE_DEFINED__
#define __IMFVideoMixerControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoMixerControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoMixerControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoMixerControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoMixerControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoMixerControl *This);

    /*** IMFVideoMixerControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetStreamZOrder)(
        IMFVideoMixerControl *This,
        DWORD dwStreamID,
        DWORD dwZ);

    HRESULT (STDMETHODCALLTYPE *GetStreamZOrder)(
        IMFVideoMixerControl *This,
        DWORD dwStreamID,
        DWORD *pdwZ);

    HRESULT (STDMETHODCALLTYPE *SetStreamOutputRect)(
        IMFVideoMixerControl *This,
        DWORD dwStreamID,
        const MFVideoNormalizedRect *pnrcOutput);

    HRESULT (STDMETHODCALLTYPE *GetStreamOutputRect)(
        IMFVideoMixerControl *This,
        DWORD dwStreamID,
        MFVideoNormalizedRect *pnrcOutput);

    END_INTERFACE
} IMFVideoMixerControlVtbl;

interface IMFVideoMixerControl {
    CONST_VTBL IMFVideoMixerControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoMixerControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoMixerControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoMixerControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoMixerControl methods ***/
#define IMFVideoMixerControl_SetStreamZOrder(This,dwStreamID,dwZ) \
    ((This)->lpVtbl->SetStreamZOrder(This,dwStreamID,dwZ))
#define IMFVideoMixerControl_GetStreamZOrder(This,dwStreamID,pdwZ) \
    ((This)->lpVtbl->GetStreamZOrder(This,dwStreamID,pdwZ))
#define IMFVideoMixerControl_SetStreamOutputRect(This,dwStreamID,pnrcOutput) \
    ((This)->lpVtbl->SetStreamOutputRect(This,dwStreamID,pnrcOutput))
#define IMFVideoMixerControl_GetStreamOutputRect(This,dwStreamID,pnrcOutput) \
    ((This)->lpVtbl->GetStreamOutputRect(This,dwStreamID,pnrcOutput))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoMixerControl_INTERFACE_DEFINED__ */

typedef enum _MFVideoMixPrefs {
    MFVideoMixPrefs_ForceHalfInterlace = 0x1,
    MFVideoMixPrefs_AllowDropToHalfInterlace = 0x2,
    MFVideoMixPrefs_AllowDropToBob = 0x4,
    MFVideoMixPrefs_ForceBob = 0x8,
    MFVideoMixPrefs_EnableRotation = 0x10,
    MFVideoMixPrefs_Mask = 0x1f
} MFVideoMixPrefs;

/*****************************************************************************
 * IMFVideoMixerControl2 interface
 */
#ifndef __IMFVideoMixerControl2_INTERFACE_DEFINED__
#define __IMFVideoMixerControl2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoMixerControl2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoMixerControl2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoMixerControl2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoMixerControl2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoMixerControl2 *This);

    /*** IMFVideoMixerControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetStreamZOrder)(
        IMFVideoMixerControl2 *This,
        DWORD dwStreamID,
        DWORD dwZ);

    HRESULT (STDMETHODCALLTYPE *GetStreamZOrder)(
        IMFVideoMixerControl2 *This,
        DWORD dwStreamID,
        DWORD *pdwZ);

    HRESULT (STDMETHODCALLTYPE *SetStreamOutputRect)(
        IMFVideoMixerControl2 *This,
        DWORD dwStreamID,
        const MFVideoNormalizedRect *pnrcOutput);

    HRESULT (STDMETHODCALLTYPE *GetStreamOutputRect)(
        IMFVideoMixerControl2 *This,
        DWORD dwStreamID,
        MFVideoNormalizedRect *pnrcOutput);

    /*** IMFVideoMixerControl2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMixingPrefs)(
        IMFVideoMixerControl2 *This,
        DWORD dwMixFlags);

    HRESULT (STDMETHODCALLTYPE *GetMixingPrefs)(
        IMFVideoMixerControl2 *This,
        DWORD *pdwMixFlags);

    END_INTERFACE
} IMFVideoMixerControl2Vtbl;

interface IMFVideoMixerControl2 {
    CONST_VTBL IMFVideoMixerControl2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoMixerControl2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoMixerControl2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoMixerControl2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoMixerControl methods ***/
#define IMFVideoMixerControl2_SetStreamZOrder(This,dwStreamID,dwZ) \
    ((This)->lpVtbl->SetStreamZOrder(This,dwStreamID,dwZ))
#define IMFVideoMixerControl2_GetStreamZOrder(This,dwStreamID,pdwZ) \
    ((This)->lpVtbl->GetStreamZOrder(This,dwStreamID,pdwZ))
#define IMFVideoMixerControl2_SetStreamOutputRect(This,dwStreamID,pnrcOutput) \
    ((This)->lpVtbl->SetStreamOutputRect(This,dwStreamID,pnrcOutput))
#define IMFVideoMixerControl2_GetStreamOutputRect(This,dwStreamID,pnrcOutput) \
    ((This)->lpVtbl->GetStreamOutputRect(This,dwStreamID,pnrcOutput))
/*** IMFVideoMixerControl2 methods ***/
#define IMFVideoMixerControl2_SetMixingPrefs(This,dwMixFlags) \
    ((This)->lpVtbl->SetMixingPrefs(This,dwMixFlags))
#define IMFVideoMixerControl2_GetMixingPrefs(This,pdwMixFlags) \
    ((This)->lpVtbl->GetMixingPrefs(This,pdwMixFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoMixerControl2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFVideoRenderer interface
 */
#ifndef __IMFVideoRenderer_INTERFACE_DEFINED__
#define __IMFVideoRenderer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoRendererVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoRenderer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoRenderer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoRenderer *This);

    /*** IMFVideoRenderer methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeRenderer)(
        IMFVideoRenderer *This,
        IMFTransform *pVideoMixer,
        IMFVideoPresenter *pVideoPresenter);

    END_INTERFACE
} IMFVideoRendererVtbl;

interface IMFVideoRenderer {
    CONST_VTBL IMFVideoRendererVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoRenderer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoRenderer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoRenderer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFVideoRenderer methods ***/
#define IMFVideoRenderer_InitializeRenderer(This,pVideoMixer,pVideoPresenter) \
    ((This)->lpVtbl->InitializeRenderer(This,pVideoMixer,pVideoPresenter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoRenderer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEVRFilterConfig interface
 */
#ifndef __IEVRFilterConfig_INTERFACE_DEFINED__
#define __IEVRFilterConfig_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEVRFilterConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEVRFilterConfigVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEVRFilterConfig *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEVRFilterConfig *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEVRFilterConfig *This);

    /*** IEVRFilterConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNumberOfStreams)(
        IEVRFilterConfig *This,
        DWORD dwMaxStreams);

    HRESULT (STDMETHODCALLTYPE *GetNumberOfStreams)(
        IEVRFilterConfig *This,
        DWORD *pdwMaxStreams);

    END_INTERFACE
} IEVRFilterConfigVtbl;

interface IEVRFilterConfig {
    CONST_VTBL IEVRFilterConfigVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEVRFilterConfig_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEVRFilterConfig_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEVRFilterConfig_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEVRFilterConfig methods ***/
#define IEVRFilterConfig_SetNumberOfStreams(This,dwMaxStreams) \
    ((This)->lpVtbl->SetNumberOfStreams(This,dwMaxStreams))
#define IEVRFilterConfig_GetNumberOfStreams(This,pdwMaxStreams) \
    ((This)->lpVtbl->GetNumberOfStreams(This,pdwMaxStreams))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEVRFilterConfig_INTERFACE_DEFINED__ */

typedef enum _EVRFilterConfig_Prefs {
    EVRFilterConfigPrefs_EnableQoS = 0x1,
    EVRFilterConfigPrefs_Mask = 0x1
} EVRFilterConfigPrefs;

/*****************************************************************************
 * IEVRFilterConfigEx interface
 */
#ifndef __IEVRFilterConfigEx_INTERFACE_DEFINED__
#define __IEVRFilterConfigEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEVRFilterConfigEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEVRFilterConfigExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEVRFilterConfigEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEVRFilterConfigEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEVRFilterConfigEx *This);

    /*** IEVRFilterConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNumberOfStreams)(
        IEVRFilterConfigEx *This,
        DWORD dwMaxStreams);

    HRESULT (STDMETHODCALLTYPE *GetNumberOfStreams)(
        IEVRFilterConfigEx *This,
        DWORD *pdwMaxStreams);

    /*** IEVRFilterConfigEx methods ***/
    HRESULT (STDMETHODCALLTYPE *SetConfigPrefs)(
        IEVRFilterConfigEx *This,
        DWORD dwConfigFlags);

    HRESULT (STDMETHODCALLTYPE *GetConfigPrefs)(
        IEVRFilterConfigEx *This,
        DWORD *pdwConfigFlags);

    END_INTERFACE
} IEVRFilterConfigExVtbl;

interface IEVRFilterConfigEx {
    CONST_VTBL IEVRFilterConfigExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEVRFilterConfigEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEVRFilterConfigEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEVRFilterConfigEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEVRFilterConfig methods ***/
#define IEVRFilterConfigEx_SetNumberOfStreams(This,dwMaxStreams) \
    ((This)->lpVtbl->SetNumberOfStreams(This,dwMaxStreams))
#define IEVRFilterConfigEx_GetNumberOfStreams(This,pdwMaxStreams) \
    ((This)->lpVtbl->GetNumberOfStreams(This,pdwMaxStreams))
/*** IEVRFilterConfigEx methods ***/
#define IEVRFilterConfigEx_SetConfigPrefs(This,dwConfigFlags) \
    ((This)->lpVtbl->SetConfigPrefs(This,dwConfigFlags))
#define IEVRFilterConfigEx_GetConfigPrefs(This,pdwConfigFlags) \
    ((This)->lpVtbl->GetConfigPrefs(This,pdwConfigFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEVRFilterConfigEx_INTERFACE_DEFINED__ */

typedef enum _MF_SERVICE_LOOKUP_TYPE {
    MF_SERVICE_LOOKUP_UPSTREAM = 0,
    MF_SERVICE_LOOKUP_UPSTREAM_DIRECT = 1,
    MF_SERVICE_LOOKUP_DOWNSTREAM = 2,
    MF_SERVICE_LOOKUP_DOWNSTREAM_DIRECT = 3,
    MF_SERVICE_LOOKUP_ALL = 4,
    MF_SERVICE_LOOKUP_GLOBAL = 5
} MF_SERVICE_LOOKUP_TYPE;

/*****************************************************************************
 * IMFTopologyServiceLookup interface
 */
#ifndef __IMFTopologyServiceLookup_INTERFACE_DEFINED__
#define __IMFTopologyServiceLookup_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTopologyServiceLookup;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTopologyServiceLookupVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTopologyServiceLookup *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTopologyServiceLookup *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTopologyServiceLookup *This);

    /*** IMFTopologyServiceLookup methods ***/
    HRESULT (STDMETHODCALLTYPE *LookupService)(
        IMFTopologyServiceLookup *This,
        MF_SERVICE_LOOKUP_TYPE Type,
        DWORD dwIndex,
        REFGUID guidService,
        REFIID riid,
        LPVOID *ppvObjects,
        DWORD *pnObjects);

    END_INTERFACE
} IMFTopologyServiceLookupVtbl;

interface IMFTopologyServiceLookup {
    CONST_VTBL IMFTopologyServiceLookupVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTopologyServiceLookup_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTopologyServiceLookup_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTopologyServiceLookup_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTopologyServiceLookup methods ***/
#define IMFTopologyServiceLookup_LookupService(This,Type,dwIndex,guidService,riid,ppvObjects,pnObjects) \
    ((This)->lpVtbl->LookupService(This,Type,dwIndex,guidService,riid,ppvObjects,pnObjects))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTopologyServiceLookup_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFTopologyServiceLookupClient interface
 */
#ifndef __IMFTopologyServiceLookupClient_INTERFACE_DEFINED__
#define __IMFTopologyServiceLookupClient_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFTopologyServiceLookupClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFTopologyServiceLookupClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTopologyServiceLookupClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTopologyServiceLookupClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTopologyServiceLookupClient *This);

    /*** IMFTopologyServiceLookupClient methods ***/
    HRESULT (STDMETHODCALLTYPE *InitServicePointers)(
        IMFTopologyServiceLookupClient *This,
        IMFTopologyServiceLookup *pLookup);

    HRESULT (STDMETHODCALLTYPE *ReleaseServicePointers)(
        IMFTopologyServiceLookupClient *This);

    END_INTERFACE
} IMFTopologyServiceLookupClientVtbl;

interface IMFTopologyServiceLookupClient {
    CONST_VTBL IMFTopologyServiceLookupClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFTopologyServiceLookupClient_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFTopologyServiceLookupClient_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFTopologyServiceLookupClient_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFTopologyServiceLookupClient methods ***/
#define IMFTopologyServiceLookupClient_InitServicePointers(This,pLookup) \
    ((This)->lpVtbl->InitServicePointers(This,pLookup))
#define IMFTopologyServiceLookupClient_ReleaseServicePointers(This) \
    ((This)->lpVtbl->ReleaseServicePointers(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFTopologyServiceLookupClient_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEVRTrustedVideoPlugin interface
 */
#ifndef __IEVRTrustedVideoPlugin_INTERFACE_DEFINED__
#define __IEVRTrustedVideoPlugin_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEVRTrustedVideoPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEVRTrustedVideoPluginVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEVRTrustedVideoPlugin *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEVRTrustedVideoPlugin *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEVRTrustedVideoPlugin *This);

    /*** IEVRTrustedVideoPlugin methods ***/
    HRESULT (STDMETHODCALLTYPE *IsInTrustedVideoMode)(
        IEVRTrustedVideoPlugin *This,
        BOOL *pYes);

    HRESULT (STDMETHODCALLTYPE *CanConstrict)(
        IEVRTrustedVideoPlugin *This,
        BOOL *pYes);

    HRESULT (STDMETHODCALLTYPE *SetConstriction)(
        IEVRTrustedVideoPlugin *This,
        DWORD dwKPix);

    HRESULT (STDMETHODCALLTYPE *DisableImageExport)(
        IEVRTrustedVideoPlugin *This,
        BOOL bDisable);

    END_INTERFACE
} IEVRTrustedVideoPluginVtbl;

interface IEVRTrustedVideoPlugin {
    CONST_VTBL IEVRTrustedVideoPluginVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEVRTrustedVideoPlugin_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEVRTrustedVideoPlugin_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEVRTrustedVideoPlugin_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEVRTrustedVideoPlugin methods ***/
#define IEVRTrustedVideoPlugin_IsInTrustedVideoMode(This,pYes) \
    ((This)->lpVtbl->IsInTrustedVideoMode(This,pYes))
#define IEVRTrustedVideoPlugin_CanConstrict(This,pYes) \
    ((This)->lpVtbl->CanConstrict(This,pYes))
#define IEVRTrustedVideoPlugin_SetConstriction(This,dwKPix) \
    ((This)->lpVtbl->SetConstriction(This,dwKPix))
#define IEVRTrustedVideoPlugin_DisableImageExport(This,bDisable) \
    ((This)->lpVtbl->DisableImageExport(This,bDisable))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEVRTrustedVideoPlugin_INTERFACE_DEFINED__ */

#ifndef MFEVRDLL
#define MFEVRDLL 0
#endif

#if MFEVRDLL
#define EVRPUBLIC(func) STDAPI _##func
#else
#define EVRPUBLIC(func) STDAPI func
#endif

EVRPUBLIC(MFCreateVideoPresenter)(
     IUnknown * pOwner,
    REFIID riidDevice,
    REFIID riid,
     void ** ppVideoPresenter
    );

EVRPUBLIC(MFCreateVideoMixer)(
     IUnknown * pOwner,
    REFIID riidDevice,
    REFIID riid,
     void ** ppv
    );

EVRPUBLIC(MFCreateVideoMixerAndPresenter)(
     IUnknown * pMixerOwner,
     IUnknown * pPresenterOwner,
    REFIID riidMixer,
     void ** ppvVideoMixer,
    REFIID riidPresenter,
     void ** ppvVideoPresenter
    );

EVRPUBLIC(MFCreateVideoRenderer)(
    REFIID riidRenderer,
     void ** ppVideoRenderer
    );

EVRPUBLIC(MFCreateVideoSampleFromSurface)(
     IUnknown* pUnkSurface,
     IMFSample** ppSample
    );

EVRPUBLIC(MFCreateVideoSampleAllocator)(
     REFIID riid,
     void** ppSampleAllocator
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);

/* End additional prototypes for all interfaces */

#endif /* __evr_h__ */
