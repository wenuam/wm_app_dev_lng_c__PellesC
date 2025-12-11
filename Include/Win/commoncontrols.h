/* Generated from commoncontrols.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __commoncontrols_h__
#define __commoncontrols_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IImageList_FWD_DEFINED__
#define __IImageList_FWD_DEFINED__
typedef interface IImageList IImageList;
#endif /* __IImageList_FWD_DEFINED__ */

#ifndef __IImageList2_FWD_DEFINED__
#define __IImageList2_FWD_DEFINED__
typedef interface IImageList2 IImageList2;
#endif /* __IImageList2_FWD_DEFINED__ */

#ifndef __ImageList_FWD_DEFINED__
#define __ImageList_FWD_DEFINED__
typedef struct ImageList ImageList;
#endif /* __ImageList_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef WINCOMMCTRLAPI
#define WINCOMMCTRLAPI  DECLSPEC_IMPORT
#endif /* WINCOMMCTRLAPI */

#ifdef MIDL_PASS
typedef DWORD RGBQUAD;

typedef IUnknown *HIMAGELIST;
typedef struct _IMAGELIST* HIMAGELIST;

typedef struct _IMAGELISTDRAWPARAMS {
    DWORD cbSize;
    HIMAGELIST himl;
    int i;
    HDC hdcDst;
    int x;
    int y;
    int cx;
    int cy;
    int xBitmap;
    int yBitmap;
    COLORREF rgbBk;
    COLORREF rgbFg;
    UINT fStyle;
    DWORD dwRop;
    DWORD fState;
    DWORD Frame;
    COLORREF crEffect;
} IMAGELISTDRAWPARAMS;

typedef IMAGELISTDRAWPARAMS *LPIMAGELISTDRAWPARAMS;

typedef struct tagIMAGEINFO {
    HBITMAP hbmImage;
    HBITMAP hbmMask;
    int Unused1;
    int Unused2;
    RECT rcImage;
} IMAGEINFO;

typedef IMAGEINFO *LPIMAGEINFO;
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

WINCOMMCTRLAPI HRESULT WINAPI ImageList_CoCreateInstance(
           REFCLSID rclsid,
       const IUnknown *punkOuter,
           REFIID riid,
   void **ppv);
#endif

#define ILIF_ALPHA               0x00000001
#define ILIF_LOWQUALITY          0x00000002

#define ILDRF_IMAGELOWQUALITY    0x00000001
#define ILDRF_OVERLAYLOWQUALITY  0x00000010

/*****************************************************************************
 * IImageList interface
 */
#ifndef __IImageList_INTERFACE_DEFINED__
#define __IImageList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IImageList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IImageListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageList *This);

    /*** IImageList methods ***/
    HRESULT (STDMETHODCALLTYPE *Add)(
        IImageList *This,
        HBITMAP hbmImage,
        HBITMAP hbmMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *ReplaceIcon)(
        IImageList *This,
        int i,
        HICON hicon,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetOverlayImage)(
        IImageList *This,
        int iImage,
        int iOverlay);

    HRESULT (STDMETHODCALLTYPE *Replace)(
        IImageList *This,
        int i,
        HBITMAP hbmImage,
        HBITMAP hbmMask);

    HRESULT (STDMETHODCALLTYPE *AddMasked)(
        IImageList *This,
        HBITMAP hbmImage,
        COLORREF crMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *Draw)(
        IImageList *This,
        IMAGELISTDRAWPARAMS *pimldp);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        IImageList *This,
        int i);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        IImageList *This,
        int i,
        UINT flags,
        HICON *picon);

    HRESULT (STDMETHODCALLTYPE *GetImageInfo)(
        IImageList *This,
        int i,
        IMAGEINFO *pImageInfo);

    HRESULT (STDMETHODCALLTYPE *Copy)(
        IImageList *This,
        int iDst,
        IUnknown *punkSrc,
        int iSrc,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *Merge)(
        IImageList *This,
        int i1,
        IUnknown *punk2,
        int i2,
        int dx,
        int dy,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IImageList *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetImageRect)(
        IImageList *This,
        int i,
        RECT *prc);

    HRESULT (STDMETHODCALLTYPE *GetIconSize)(
        IImageList *This,
        int *cx,
        int *cy);

    HRESULT (STDMETHODCALLTYPE *SetIconSize)(
        IImageList *This,
        int cx,
        int cy);

    HRESULT (STDMETHODCALLTYPE *GetImageCount)(
        IImageList *This,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetImageCount)(
        IImageList *This,
        UINT uNewCount);

    HRESULT (STDMETHODCALLTYPE *SetBkColor)(
        IImageList *This,
        COLORREF clrBk,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *GetBkColor)(
        IImageList *This,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *BeginDrag)(
        IImageList *This,
        int iTrack,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *EndDrag)(
        IImageList *This);

    HRESULT (STDMETHODCALLTYPE *DragEnter)(
        IImageList *This,
        HWND hwndLock,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *DragLeave)(
        IImageList *This,
        HWND hwndLock);

    HRESULT (STDMETHODCALLTYPE *DragMove)(
        IImageList *This,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *SetDragCursorImage)(
        IImageList *This,
        IUnknown *punk,
        int iDrag,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *DragShowNolock)(
        IImageList *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *GetDragImage)(
        IImageList *This,
        POINT *ppt,
        POINT *pptHotspot,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetItemFlags)(
        IImageList *This,
        int i,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetOverlayImage)(
        IImageList *This,
        int iOverlay,
        int *piIndex);

    END_INTERFACE
} IImageListVtbl;

interface IImageList {
    CONST_VTBL IImageListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IImageList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IImageList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IImageList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IImageList methods ***/
#define IImageList_Add(This,hbmImage,hbmMask,pi) \
    ((This)->lpVtbl->Add(This,hbmImage,hbmMask,pi))
#define IImageList_ReplaceIcon(This,i,hicon,pi) \
    ((This)->lpVtbl->ReplaceIcon(This,i,hicon,pi))
#define IImageList_SetOverlayImage(This,iImage,iOverlay) \
    ((This)->lpVtbl->SetOverlayImage(This,iImage,iOverlay))
#define IImageList_Replace(This,i,hbmImage,hbmMask) \
    ((This)->lpVtbl->Replace(This,i,hbmImage,hbmMask))
#define IImageList_AddMasked(This,hbmImage,crMask,pi) \
    ((This)->lpVtbl->AddMasked(This,hbmImage,crMask,pi))
#define IImageList_Draw(This,pimldp) \
    ((This)->lpVtbl->Draw(This,pimldp))
#define IImageList_Remove(This,i) \
    ((This)->lpVtbl->Remove(This,i))
#define IImageList_GetIcon(This,i,flags,picon) \
    ((This)->lpVtbl->GetIcon(This,i,flags,picon))
#define IImageList_GetImageInfo(This,i,pImageInfo) \
    ((This)->lpVtbl->GetImageInfo(This,i,pImageInfo))
#define IImageList_Copy(This,iDst,punkSrc,iSrc,uFlags) \
    ((This)->lpVtbl->Copy(This,iDst,punkSrc,iSrc,uFlags))
#define IImageList_Merge(This,i1,punk2,i2,dx,dy,riid,ppv) \
    ((This)->lpVtbl->Merge(This,i1,punk2,i2,dx,dy,riid,ppv))
#define IImageList_Clone(This,riid,ppv) \
    ((This)->lpVtbl->Clone(This,riid,ppv))
#define IImageList_GetImageRect(This,i,prc) \
    ((This)->lpVtbl->GetImageRect(This,i,prc))
#define IImageList_GetIconSize(This,cx,cy) \
    ((This)->lpVtbl->GetIconSize(This,cx,cy))
#define IImageList_SetIconSize(This,cx,cy) \
    ((This)->lpVtbl->SetIconSize(This,cx,cy))
#define IImageList_GetImageCount(This,pi) \
    ((This)->lpVtbl->GetImageCount(This,pi))
#define IImageList_SetImageCount(This,uNewCount) \
    ((This)->lpVtbl->SetImageCount(This,uNewCount))
#define IImageList_SetBkColor(This,clrBk,pclr) \
    ((This)->lpVtbl->SetBkColor(This,clrBk,pclr))
#define IImageList_GetBkColor(This,pclr) \
    ((This)->lpVtbl->GetBkColor(This,pclr))
#define IImageList_BeginDrag(This,iTrack,dxHotspot,dyHotspot) \
    ((This)->lpVtbl->BeginDrag(This,iTrack,dxHotspot,dyHotspot))
#define IImageList_EndDrag(This) \
    ((This)->lpVtbl->EndDrag(This))
#define IImageList_DragEnter(This,hwndLock,x,y) \
    ((This)->lpVtbl->DragEnter(This,hwndLock,x,y))
#define IImageList_DragLeave(This,hwndLock) \
    ((This)->lpVtbl->DragLeave(This,hwndLock))
#define IImageList_DragMove(This,x,y) \
    ((This)->lpVtbl->DragMove(This,x,y))
#define IImageList_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) \
    ((This)->lpVtbl->SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot))
#define IImageList_DragShowNolock(This,fShow) \
    ((This)->lpVtbl->DragShowNolock(This,fShow))
#define IImageList_GetDragImage(This,ppt,pptHotspot,riid,ppv) \
    ((This)->lpVtbl->GetDragImage(This,ppt,pptHotspot,riid,ppv))
#define IImageList_GetItemFlags(This,i,dwFlags) \
    ((This)->lpVtbl->GetItemFlags(This,i,dwFlags))
#define IImageList_GetOverlayImage(This,iOverlay,piIndex) \
    ((This)->lpVtbl->GetOverlayImage(This,iOverlay,piIndex))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IImageList_INTERFACE_DEFINED__ */

#define ILR_DEFAULT                  0x0000

#define ILR_HORIZONTAL_LEFT          0x0000
#define ILR_HORIZONTAL_CENTER        0x0001
#define ILR_HORIZONTAL_RIGHT         0x0002

#define ILR_VERTICAL_TOP             0x0000
#define ILR_VERTICAL_CENTER          0x0010
#define ILR_VERTICAL_BOTTOM          0x0020

#define ILR_SCALE_CLIP               0x0000
#define ILR_SCALE_ASPECTRATIO        0x0100

/*****************************************************************************
 * IImageList2 interface
 */
#ifndef __IImageList2_INTERFACE_DEFINED__
#define __IImageList2_INTERFACE_DEFINED__

#define ILGOS_ALWAYS         0x00000000
#define ILGOS_FROMSTANDBY    0x00000001

#define ILFIP_ALWAYS         0x00000000
#define ILFIP_FROMSTANDBY    0x00000001

#define ILDI_PURGE       0x00000001
#define ILDI_STANDBY     0x00000002

#define ILDI_RESETACCESS 0x00000004
#define ILDI_QUERYACCESS 0x00000008

typedef struct tagIMAGELISTSTATS {
    DWORD cbSize;
    int cAlloc;
    int cUsed;
    int cStandby;
} IMAGELISTSTATS;

EXTERN_C const IID IID_IImageList2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IImageList2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageList2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageList2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageList2 *This);

    /*** IImageList methods ***/
    HRESULT (STDMETHODCALLTYPE *Add)(
        IImageList2 *This,
        HBITMAP hbmImage,
        HBITMAP hbmMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *ReplaceIcon)(
        IImageList2 *This,
        int i,
        HICON hicon,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetOverlayImage)(
        IImageList2 *This,
        int iImage,
        int iOverlay);

    HRESULT (STDMETHODCALLTYPE *Replace)(
        IImageList2 *This,
        int i,
        HBITMAP hbmImage,
        HBITMAP hbmMask);

    HRESULT (STDMETHODCALLTYPE *AddMasked)(
        IImageList2 *This,
        HBITMAP hbmImage,
        COLORREF crMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *Draw)(
        IImageList2 *This,
        IMAGELISTDRAWPARAMS *pimldp);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        IImageList2 *This,
        int i);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        IImageList2 *This,
        int i,
        UINT flags,
        HICON *picon);

    HRESULT (STDMETHODCALLTYPE *GetImageInfo)(
        IImageList2 *This,
        int i,
        IMAGEINFO *pImageInfo);

    HRESULT (STDMETHODCALLTYPE *Copy)(
        IImageList2 *This,
        int iDst,
        IUnknown *punkSrc,
        int iSrc,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *Merge)(
        IImageList2 *This,
        int i1,
        IUnknown *punk2,
        int i2,
        int dx,
        int dy,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IImageList2 *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetImageRect)(
        IImageList2 *This,
        int i,
        RECT *prc);

    HRESULT (STDMETHODCALLTYPE *GetIconSize)(
        IImageList2 *This,
        int *cx,
        int *cy);

    HRESULT (STDMETHODCALLTYPE *SetIconSize)(
        IImageList2 *This,
        int cx,
        int cy);

    HRESULT (STDMETHODCALLTYPE *GetImageCount)(
        IImageList2 *This,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetImageCount)(
        IImageList2 *This,
        UINT uNewCount);

    HRESULT (STDMETHODCALLTYPE *SetBkColor)(
        IImageList2 *This,
        COLORREF clrBk,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *GetBkColor)(
        IImageList2 *This,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *BeginDrag)(
        IImageList2 *This,
        int iTrack,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *EndDrag)(
        IImageList2 *This);

    HRESULT (STDMETHODCALLTYPE *DragEnter)(
        IImageList2 *This,
        HWND hwndLock,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *DragLeave)(
        IImageList2 *This,
        HWND hwndLock);

    HRESULT (STDMETHODCALLTYPE *DragMove)(
        IImageList2 *This,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *SetDragCursorImage)(
        IImageList2 *This,
        IUnknown *punk,
        int iDrag,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *DragShowNolock)(
        IImageList2 *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *GetDragImage)(
        IImageList2 *This,
        POINT *ppt,
        POINT *pptHotspot,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetItemFlags)(
        IImageList2 *This,
        int i,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetOverlayImage)(
        IImageList2 *This,
        int iOverlay,
        int *piIndex);

    /*** IImageList2 methods ***/
    HRESULT (STDMETHODCALLTYPE *Resize)(
        IImageList2 *This,
        int cxNewIconSize,
        int cyNewIconSize);

    HRESULT (STDMETHODCALLTYPE *GetOriginalSize)(
        IImageList2 *This,
        int iImage,
        DWORD dwFlags,
        int *pcx,
        int *pcy);

    HRESULT (STDMETHODCALLTYPE *SetOriginalSize)(
        IImageList2 *This,
        int iImage,
        int cx,
        int cy);

    HRESULT (STDMETHODCALLTYPE *SetCallback)(
        IImageList2 *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *GetCallback)(
        IImageList2 *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *ForceImagePresent)(
        IImageList2 *This,
        int iImage,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *DiscardImages)(
        IImageList2 *This,
        int iFirstImage,
        int iLastImage,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *PreloadImages)(
        IImageList2 *This,
        IMAGELISTDRAWPARAMS *pimldp);

    HRESULT (STDMETHODCALLTYPE *GetStatistics)(
        IImageList2 *This,
        IMAGELISTSTATS *pils);

    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IImageList2 *This,
        int cx,
        int cy,
        UINT flags,
        int cInitial,
        int cGrow);

    HRESULT (STDMETHODCALLTYPE *Replace2)(
        IImageList2 *This,
        int i,
        HBITMAP hbmImage,
        HBITMAP hbmMask,
        IUnknown *punk,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *ReplaceFromImageList)(
        IImageList2 *This,
        int i,
        IImageList *pil,
        int iSrc,
        IUnknown *punk,
        DWORD dwFlags);

    END_INTERFACE
} IImageList2Vtbl;

interface IImageList2 {
    CONST_VTBL IImageList2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IImageList2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IImageList2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IImageList2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IImageList methods ***/
#define IImageList2_Add(This,hbmImage,hbmMask,pi) \
    ((This)->lpVtbl->Add(This,hbmImage,hbmMask,pi))
#define IImageList2_ReplaceIcon(This,i,hicon,pi) \
    ((This)->lpVtbl->ReplaceIcon(This,i,hicon,pi))
#define IImageList2_SetOverlayImage(This,iImage,iOverlay) \
    ((This)->lpVtbl->SetOverlayImage(This,iImage,iOverlay))
#define IImageList2_Replace(This,i,hbmImage,hbmMask) \
    ((This)->lpVtbl->Replace(This,i,hbmImage,hbmMask))
#define IImageList2_AddMasked(This,hbmImage,crMask,pi) \
    ((This)->lpVtbl->AddMasked(This,hbmImage,crMask,pi))
#define IImageList2_Draw(This,pimldp) \
    ((This)->lpVtbl->Draw(This,pimldp))
#define IImageList2_Remove(This,i) \
    ((This)->lpVtbl->Remove(This,i))
#define IImageList2_GetIcon(This,i,flags,picon) \
    ((This)->lpVtbl->GetIcon(This,i,flags,picon))
#define IImageList2_GetImageInfo(This,i,pImageInfo) \
    ((This)->lpVtbl->GetImageInfo(This,i,pImageInfo))
#define IImageList2_Copy(This,iDst,punkSrc,iSrc,uFlags) \
    ((This)->lpVtbl->Copy(This,iDst,punkSrc,iSrc,uFlags))
#define IImageList2_Merge(This,i1,punk2,i2,dx,dy,riid,ppv) \
    ((This)->lpVtbl->Merge(This,i1,punk2,i2,dx,dy,riid,ppv))
#define IImageList2_Clone(This,riid,ppv) \
    ((This)->lpVtbl->Clone(This,riid,ppv))
#define IImageList2_GetImageRect(This,i,prc) \
    ((This)->lpVtbl->GetImageRect(This,i,prc))
#define IImageList2_GetIconSize(This,cx,cy) \
    ((This)->lpVtbl->GetIconSize(This,cx,cy))
#define IImageList2_SetIconSize(This,cx,cy) \
    ((This)->lpVtbl->SetIconSize(This,cx,cy))
#define IImageList2_GetImageCount(This,pi) \
    ((This)->lpVtbl->GetImageCount(This,pi))
#define IImageList2_SetImageCount(This,uNewCount) \
    ((This)->lpVtbl->SetImageCount(This,uNewCount))
#define IImageList2_SetBkColor(This,clrBk,pclr) \
    ((This)->lpVtbl->SetBkColor(This,clrBk,pclr))
#define IImageList2_GetBkColor(This,pclr) \
    ((This)->lpVtbl->GetBkColor(This,pclr))
#define IImageList2_BeginDrag(This,iTrack,dxHotspot,dyHotspot) \
    ((This)->lpVtbl->BeginDrag(This,iTrack,dxHotspot,dyHotspot))
#define IImageList2_EndDrag(This) \
    ((This)->lpVtbl->EndDrag(This))
#define IImageList2_DragEnter(This,hwndLock,x,y) \
    ((This)->lpVtbl->DragEnter(This,hwndLock,x,y))
#define IImageList2_DragLeave(This,hwndLock) \
    ((This)->lpVtbl->DragLeave(This,hwndLock))
#define IImageList2_DragMove(This,x,y) \
    ((This)->lpVtbl->DragMove(This,x,y))
#define IImageList2_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) \
    ((This)->lpVtbl->SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot))
#define IImageList2_DragShowNolock(This,fShow) \
    ((This)->lpVtbl->DragShowNolock(This,fShow))
#define IImageList2_GetDragImage(This,ppt,pptHotspot,riid,ppv) \
    ((This)->lpVtbl->GetDragImage(This,ppt,pptHotspot,riid,ppv))
#define IImageList2_GetItemFlags(This,i,dwFlags) \
    ((This)->lpVtbl->GetItemFlags(This,i,dwFlags))
#define IImageList2_GetOverlayImage(This,iOverlay,piIndex) \
    ((This)->lpVtbl->GetOverlayImage(This,iOverlay,piIndex))
/*** IImageList2 methods ***/
#define IImageList2_Resize(This,cxNewIconSize,cyNewIconSize) \
    ((This)->lpVtbl->Resize(This,cxNewIconSize,cyNewIconSize))
#define IImageList2_GetOriginalSize(This,iImage,dwFlags,pcx,pcy) \
    ((This)->lpVtbl->GetOriginalSize(This,iImage,dwFlags,pcx,pcy))
#define IImageList2_SetOriginalSize(This,iImage,cx,cy) \
    ((This)->lpVtbl->SetOriginalSize(This,iImage,cx,cy))
#define IImageList2_SetCallback(This,punk) \
    ((This)->lpVtbl->SetCallback(This,punk))
#define IImageList2_GetCallback(This,riid,ppv) \
    ((This)->lpVtbl->GetCallback(This,riid,ppv))
#define IImageList2_ForceImagePresent(This,iImage,dwFlags) \
    ((This)->lpVtbl->ForceImagePresent(This,iImage,dwFlags))
#define IImageList2_DiscardImages(This,iFirstImage,iLastImage,dwFlags) \
    ((This)->lpVtbl->DiscardImages(This,iFirstImage,iLastImage,dwFlags))
#define IImageList2_PreloadImages(This,pimldp) \
    ((This)->lpVtbl->PreloadImages(This,pimldp))
#define IImageList2_GetStatistics(This,pils) \
    ((This)->lpVtbl->GetStatistics(This,pils))
#define IImageList2_Initialize(This,cx,cy,flags,cInitial,cGrow) \
    ((This)->lpVtbl->Initialize(This,cx,cy,flags,cInitial,cGrow))
#define IImageList2_Replace2(This,i,hbmImage,hbmMask,punk,dwFlags) \
    ((This)->lpVtbl->Replace2(This,i,hbmImage,hbmMask,punk,dwFlags))
#define IImageList2_ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags) \
    ((This)->lpVtbl->ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IImageList2_INTERFACE_DEFINED__ */

#ifndef __CommonControlObjects_LIBRARY_DEFINED__
#define __CommonControlObjects_LIBRARY_DEFINED__


/*****************************************************************************
 * ImageList coclass
 */

EXTERN_C const CLSID CLSID_ImageList;
#endif /* __CommonControlObjects_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __commoncontrols_h__ */
