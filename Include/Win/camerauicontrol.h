/* Generated from camerauicontrol.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __camerauicontrol_h__
#define __camerauicontrol_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __ICameraUIControlEventCallback_FWD_DEFINED__
#define __ICameraUIControlEventCallback_FWD_DEFINED__
typedef interface ICameraUIControlEventCallback ICameraUIControlEventCallback;
#endif /* __ICameraUIControlEventCallback_FWD_DEFINED__ */

#ifndef __ICameraUIControl_FWD_DEFINED__
#define __ICameraUIControl_FWD_DEFINED__
typedef interface ICameraUIControl ICameraUIControl;
#endif /* __ICameraUIControl_FWD_DEFINED__ */

#ifndef __CameraUIControl_FWD_DEFINED__
#define __CameraUIControl_FWD_DEFINED__
typedef struct CameraUIControl CameraUIControl;
#endif /* __CameraUIControl_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef enum CameraUIControlMode {
    Browse = 0,
    Linear = 1
} CameraUIControlMode;

typedef enum CameraUIControlLinearSelectionMode {
    Single = 0,
    Multiple = 1
} CameraUIControlLinearSelectionMode;

typedef enum CameraUIControlCaptureMode {
    PhotoOrVideo = 0,
    Photo = 1,
    Video = 2
} CameraUIControlCaptureMode;

typedef enum CameraUIControlPhotoFormat {
    Jpeg = 0,
    Png = 1,
    JpegXR = 2
} CameraUIControlPhotoFormat;

typedef enum CameraUIControlVideoFormat {
    Mp4 = 0,
    Wmv = 1
} CameraUIControlVideoFormat;

typedef enum CameraUIControlViewType {
    SingleItem = 0,
    ItemList = 1
} CameraUIControlViewType;

/*****************************************************************************
 * ICameraUIControlEventCallback interface
 */
#ifndef __ICameraUIControlEventCallback_INTERFACE_DEFINED__
#define __ICameraUIControlEventCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICameraUIControlEventCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICameraUIControlEventCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICameraUIControlEventCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICameraUIControlEventCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICameraUIControlEventCallback *This);

    /*** ICameraUIControlEventCallback methods ***/
    void (STDMETHODCALLTYPE *OnStartupComplete)(
        ICameraUIControlEventCallback *This);

    void (STDMETHODCALLTYPE *OnSuspendComplete)(
        ICameraUIControlEventCallback *This);

    void (STDMETHODCALLTYPE *OnItemCaptured)(
        ICameraUIControlEventCallback *This,
        LPCWSTR pszPath);

    void (STDMETHODCALLTYPE *OnItemDeleted)(
        ICameraUIControlEventCallback *This,
        LPCWSTR pszPath);

    void (STDMETHODCALLTYPE *OnClosed)(
        ICameraUIControlEventCallback *This);

    END_INTERFACE
} ICameraUIControlEventCallbackVtbl;

interface ICameraUIControlEventCallback {
    CONST_VTBL ICameraUIControlEventCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICameraUIControlEventCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICameraUIControlEventCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICameraUIControlEventCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICameraUIControlEventCallback methods ***/
#define ICameraUIControlEventCallback_OnStartupComplete(This) \
    ((This)->lpVtbl->OnStartupComplete(This))
#define ICameraUIControlEventCallback_OnSuspendComplete(This) \
    ((This)->lpVtbl->OnSuspendComplete(This))
#define ICameraUIControlEventCallback_OnItemCaptured(This,pszPath) \
    ((This)->lpVtbl->OnItemCaptured(This,pszPath))
#define ICameraUIControlEventCallback_OnItemDeleted(This,pszPath) \
    ((This)->lpVtbl->OnItemDeleted(This,pszPath))
#define ICameraUIControlEventCallback_OnClosed(This) \
    ((This)->lpVtbl->OnClosed(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICameraUIControlEventCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICameraUIControl interface
 */
#ifndef __ICameraUIControl_INTERFACE_DEFINED__
#define __ICameraUIControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICameraUIControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICameraUIControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICameraUIControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICameraUIControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICameraUIControl *This);

    /*** ICameraUIControl methods ***/
    HRESULT (STDMETHODCALLTYPE *Show)(
        ICameraUIControl *This,
        IUnknown *pWindow,
        CameraUIControlMode mode,
        CameraUIControlLinearSelectionMode selectionMode,
        CameraUIControlCaptureMode captureMode,
        CameraUIControlPhotoFormat photoFormat,
        CameraUIControlVideoFormat videoFormat,
        BOOL bHasCloseButton,
        ICameraUIControlEventCallback *pEventCallback);

    HRESULT (STDMETHODCALLTYPE *Close)(
        ICameraUIControl *This);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        ICameraUIControl *This,
        BOOL *pbDeferralRequired);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        ICameraUIControl *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentViewType)(
        ICameraUIControl *This,
        CameraUIControlViewType *pViewType);

    HRESULT (STDMETHODCALLTYPE *GetActiveItem)(
        ICameraUIControl *This,
        BSTR *pbstrActiveItemPath);

    HRESULT (STDMETHODCALLTYPE *GetSelectedItems)(
        ICameraUIControl *This,
        SAFEARRAY **ppSelectedItemPaths);

    HRESULT (STDMETHODCALLTYPE *RemoveCapturedItem)(
        ICameraUIControl *This,
        LPCWSTR pszPath);

    END_INTERFACE
} ICameraUIControlVtbl;

interface ICameraUIControl {
    CONST_VTBL ICameraUIControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICameraUIControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICameraUIControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICameraUIControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICameraUIControl methods ***/
#define ICameraUIControl_Show(This,pWindow,mode,selectionMode,captureMode,photoFormat,videoFormat,bHasCloseButton,pEventCallback) \
    ((This)->lpVtbl->Show(This,pWindow,mode,selectionMode,captureMode,photoFormat,videoFormat,bHasCloseButton,pEventCallback))
#define ICameraUIControl_Close(This) \
    ((This)->lpVtbl->Close(This))
#define ICameraUIControl_Suspend(This,pbDeferralRequired) \
    ((This)->lpVtbl->Suspend(This,pbDeferralRequired))
#define ICameraUIControl_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define ICameraUIControl_GetCurrentViewType(This,pViewType) \
    ((This)->lpVtbl->GetCurrentViewType(This,pViewType))
#define ICameraUIControl_GetActiveItem(This,pbstrActiveItemPath) \
    ((This)->lpVtbl->GetActiveItem(This,pbstrActiveItemPath))
#define ICameraUIControl_GetSelectedItems(This,ppSelectedItemPaths) \
    ((This)->lpVtbl->GetSelectedItems(This,ppSelectedItemPaths))
#define ICameraUIControl_RemoveCapturedItem(This,pszPath) \
    ((This)->lpVtbl->RemoveCapturedItem(This,pszPath))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICameraUIControl_INTERFACE_DEFINED__ */

#ifndef __CameraUIControlTypesLib_LIBRARY_DEFINED__
#define __CameraUIControlTypesLib_LIBRARY_DEFINED__


/*****************************************************************************
 * CameraUIControl coclass
 */

EXTERN_C const CLSID CLSID_CameraUIControl;
#endif /* __CameraUIControlTypesLib_LIBRARY_DEFINED__ */

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __camerauicontrol_h__ */
