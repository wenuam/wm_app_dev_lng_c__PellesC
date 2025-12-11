/* Generated from docobj.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __docobj_h__
#define __docobj_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IOleDocument_FWD_DEFINED__
#define __IOleDocument_FWD_DEFINED__
typedef interface IOleDocument IOleDocument;
#endif /* __IOleDocument_FWD_DEFINED__ */

#ifndef __IOleDocumentSite_FWD_DEFINED__
#define __IOleDocumentSite_FWD_DEFINED__
typedef interface IOleDocumentSite IOleDocumentSite;
#endif /* __IOleDocumentSite_FWD_DEFINED__ */

#ifndef __IOleDocumentView_FWD_DEFINED__
#define __IOleDocumentView_FWD_DEFINED__
typedef interface IOleDocumentView IOleDocumentView;
#endif /* __IOleDocumentView_FWD_DEFINED__ */

#ifndef __IEnumOleDocumentViews_FWD_DEFINED__
#define __IEnumOleDocumentViews_FWD_DEFINED__
typedef interface IEnumOleDocumentViews IEnumOleDocumentViews;
#endif /* __IEnumOleDocumentViews_FWD_DEFINED__ */

#ifndef __IContinueCallback_FWD_DEFINED__
#define __IContinueCallback_FWD_DEFINED__
typedef interface IContinueCallback IContinueCallback;
#endif /* __IContinueCallback_FWD_DEFINED__ */

#ifndef __IPrint_FWD_DEFINED__
#define __IPrint_FWD_DEFINED__
typedef interface IPrint IPrint;
#endif /* __IPrint_FWD_DEFINED__ */

#ifndef __IOleCommandTarget_FWD_DEFINED__
#define __IOleCommandTarget_FWD_DEFINED__
typedef interface IOleCommandTarget IOleCommandTarget;
#endif /* __IOleCommandTarget_FWD_DEFINED__ */

#ifndef __IZoomEvents_FWD_DEFINED__
#define __IZoomEvents_FWD_DEFINED__
typedef interface IZoomEvents IZoomEvents;
#endif /* __IZoomEvents_FWD_DEFINED__ */

#ifndef __IProtectFocus_FWD_DEFINED__
#define __IProtectFocus_FWD_DEFINED__
typedef interface IProtectFocus IProtectFocus;
#endif /* __IProtectFocus_FWD_DEFINED__ */

#ifndef __IProtectedModeMenuServices_FWD_DEFINED__
#define __IProtectedModeMenuServices_FWD_DEFINED__
typedef interface IProtectedModeMenuServices IProtectedModeMenuServices;
#endif /* __IProtectedModeMenuServices_FWD_DEFINED__ */

/* Headers for imported files */

#include "ocidl.h"
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "servprov.h"

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#pragma comment(lib,"uuid.lib")

//--------------------------------------------------------------------------
// OLE Document Object Interfaces.


#ifndef __IOleDocument_FWD_DEFINED__
#define __IOleDocument_FWD_DEFINED__
typedef interface IOleDocument IOleDocument;
#endif /* __IOleDocument_FWD_DEFINED__ */

#ifndef __IOleDocumentSite_FWD_DEFINED__
#define __IOleDocumentSite_FWD_DEFINED__
typedef interface IOleDocumentSite IOleDocumentSite;
#endif /* __IOleDocumentSite_FWD_DEFINED__ */

#ifndef __IOleDocumentView_FWD_DEFINED__
#define __IOleDocumentView_FWD_DEFINED__
typedef interface IOleDocumentView IOleDocumentView;
#endif /* __IOleDocumentView_FWD_DEFINED__ */

#ifndef __IEnumOleDocumentViews_FWD_DEFINED__
#define __IEnumOleDocumentViews_FWD_DEFINED__
typedef interface IEnumOleDocumentViews IEnumOleDocumentViews;
#endif /* __IEnumOleDocumentViews_FWD_DEFINED__ */

#ifndef __IContinueCallback_FWD_DEFINED__
#define __IContinueCallback_FWD_DEFINED__
typedef interface IContinueCallback IContinueCallback;
#endif /* __IContinueCallback_FWD_DEFINED__ */

#ifndef __IPrint_FWD_DEFINED__
#define __IPrint_FWD_DEFINED__
typedef interface IPrint IPrint;
#endif /* __IPrint_FWD_DEFINED__ */

#ifndef __IOleCommandTarget_FWD_DEFINED__
#define __IOleCommandTarget_FWD_DEFINED__
typedef interface IOleCommandTarget IOleCommandTarget;
#endif /* __IOleCommandTarget_FWD_DEFINED__ */

#ifndef __IProtectedModeMenuServices_FWD_DEFINED__
#define __IProtectedModeMenuServices_FWD_DEFINED__
typedef interface IProtectedModeMenuServices IProtectedModeMenuServices;
#endif /* __IProtectedModeMenuServices_FWD_DEFINED__ */

////////////////////////////////////////////////////////////////////////////
//  Interface Definitions

#ifndef _LPOLEDOCUMENT_DEFINED
#define _LPOLEDOCUMENT_DEFINED

/*****************************************************************************
 * IOleDocument interface
 */
#ifndef __IOleDocument_INTERFACE_DEFINED__
#define __IOleDocument_INTERFACE_DEFINED__

typedef IOleDocument *LPOLEDOCUMENT;

typedef enum __POIDL_docobj_tag_00000013 {
    DOCMISC_CANCREATEMULTIPLEVIEWS = 1,
    DOCMISC_SUPPORTCOMPLEXRECTANGLES = 2,
    DOCMISC_CANTOPENEDIT = 4,
    DOCMISC_NOFILESUPPORT = 8
} DOCMISC;

EXTERN_C const IID IID_IOleDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleDocumentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleDocument *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleDocument *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleDocument *This);

    /*** IOleDocument methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateView)(
        IOleDocument *This,
        IOleInPlaceSite *pIPSite,
        IStream *pstm,
        DWORD dwReserved,
        IOleDocumentView **ppView);

    HRESULT (STDMETHODCALLTYPE *GetDocMiscStatus)(
        IOleDocument *This,
        DWORD *pdwStatus);

    HRESULT (STDMETHODCALLTYPE *EnumViews)(
        IOleDocument *This,
        IEnumOleDocumentViews **ppEnum,
        IOleDocumentView **ppView);

    END_INTERFACE
} IOleDocumentVtbl;

interface IOleDocument {
    CONST_VTBL IOleDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleDocument_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleDocument_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleDocument_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleDocument methods ***/
#define IOleDocument_CreateView(This,pIPSite,pstm,dwReserved,ppView) \
    ((This)->lpVtbl->CreateView(This,pIPSite,pstm,dwReserved,ppView))
#define IOleDocument_GetDocMiscStatus(This,pdwStatus) \
    ((This)->lpVtbl->GetDocMiscStatus(This,pdwStatus))
#define IOleDocument_EnumViews(This,ppEnum,ppView) \
    ((This)->lpVtbl->EnumViews(This,ppEnum,ppView))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleDocument_INTERFACE_DEFINED__ */

#endif

#ifndef _LPOLEDOCUMENTSITE_DEFINED
#define _LPOLEDOCUMENTSITE_DEFINED

/*****************************************************************************
 * IOleDocumentSite interface
 */
#ifndef __IOleDocumentSite_INTERFACE_DEFINED__
#define __IOleDocumentSite_INTERFACE_DEFINED__

typedef IOleDocumentSite *LPOLEDOCUMENTSITE;

EXTERN_C const IID IID_IOleDocumentSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleDocumentSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleDocumentSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleDocumentSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleDocumentSite *This);

    /*** IOleDocumentSite methods ***/
    HRESULT (STDMETHODCALLTYPE *ActivateMe)(
        IOleDocumentSite *This,
        IOleDocumentView *pViewToActivate);

    END_INTERFACE
} IOleDocumentSiteVtbl;

interface IOleDocumentSite {
    CONST_VTBL IOleDocumentSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleDocumentSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleDocumentSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleDocumentSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleDocumentSite methods ***/
#define IOleDocumentSite_ActivateMe(This,pViewToActivate) \
    ((This)->lpVtbl->ActivateMe(This,pViewToActivate))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleDocumentSite_INTERFACE_DEFINED__ */

#endif

#ifndef _LPOLEDOCUMENTVIEW_DEFINED
#define _LPOLEDOCUMENTVIEW_DEFINED

/*****************************************************************************
 * IOleDocumentView interface
 */
#ifndef __IOleDocumentView_INTERFACE_DEFINED__
#define __IOleDocumentView_INTERFACE_DEFINED__

typedef IOleDocumentView *LPOLEDOCUMENTVIEW;

EXTERN_C const IID IID_IOleDocumentView;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleDocumentViewVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleDocumentView *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleDocumentView *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleDocumentView *This);

    /*** IOleDocumentView methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInPlaceSite)(
        IOleDocumentView *This,
        IOleInPlaceSite *pIPSite);

    HRESULT (STDMETHODCALLTYPE *GetInPlaceSite)(
        IOleDocumentView *This,
        IOleInPlaceSite **ppIPSite);

    HRESULT (STDMETHODCALLTYPE *GetDocument)(
        IOleDocumentView *This,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *SetRect)(
        IOleDocumentView *This,
        LPRECT prcView);

    HRESULT (STDMETHODCALLTYPE *GetRect)(
        IOleDocumentView *This,
        LPRECT prcView);

    HRESULT (STDMETHODCALLTYPE *SetRectComplex)(
        IOleDocumentView *This,
        LPRECT prcView,
        LPRECT prcHScroll,
        LPRECT prcVScroll,
        LPRECT prcSizeBox);

    HRESULT (STDMETHODCALLTYPE *Show)(
        IOleDocumentView *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *UIActivate)(
        IOleDocumentView *This,
        BOOL fUIActivate);

    HRESULT (STDMETHODCALLTYPE *Open)(
        IOleDocumentView *This);

    HRESULT (STDMETHODCALLTYPE *CloseView)(
        IOleDocumentView *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SaveViewState)(
        IOleDocumentView *This,
        LPSTREAM pstm);

    HRESULT (STDMETHODCALLTYPE *ApplyViewState)(
        IOleDocumentView *This,
        LPSTREAM pstm);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IOleDocumentView *This,
        IOleInPlaceSite *pIPSiteNew,
        IOleDocumentView **ppViewNew);

    END_INTERFACE
} IOleDocumentViewVtbl;

interface IOleDocumentView {
    CONST_VTBL IOleDocumentViewVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleDocumentView_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleDocumentView_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleDocumentView_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleDocumentView methods ***/
#define IOleDocumentView_SetInPlaceSite(This,pIPSite) \
    ((This)->lpVtbl->SetInPlaceSite(This,pIPSite))
#define IOleDocumentView_GetInPlaceSite(This,ppIPSite) \
    ((This)->lpVtbl->GetInPlaceSite(This,ppIPSite))
#define IOleDocumentView_GetDocument(This,ppunk) \
    ((This)->lpVtbl->GetDocument(This,ppunk))
#define IOleDocumentView_SetRect(This,prcView) \
    ((This)->lpVtbl->SetRect(This,prcView))
#define IOleDocumentView_GetRect(This,prcView) \
    ((This)->lpVtbl->GetRect(This,prcView))
#define IOleDocumentView_SetRectComplex(This,prcView,prcHScroll,prcVScroll,prcSizeBox) \
    ((This)->lpVtbl->SetRectComplex(This,prcView,prcHScroll,prcVScroll,prcSizeBox))
#define IOleDocumentView_Show(This,fShow) \
    ((This)->lpVtbl->Show(This,fShow))
#define IOleDocumentView_UIActivate(This,fUIActivate) \
    ((This)->lpVtbl->UIActivate(This,fUIActivate))
#define IOleDocumentView_Open(This) \
    ((This)->lpVtbl->Open(This))
#define IOleDocumentView_CloseView(This,dwReserved) \
    ((This)->lpVtbl->CloseView(This,dwReserved))
#define IOleDocumentView_SaveViewState(This,pstm) \
    ((This)->lpVtbl->SaveViewState(This,pstm))
#define IOleDocumentView_ApplyViewState(This,pstm) \
    ((This)->lpVtbl->ApplyViewState(This,pstm))
#define IOleDocumentView_Clone(This,pIPSiteNew,ppViewNew) \
    ((This)->lpVtbl->Clone(This,pIPSiteNew,ppViewNew))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleDocumentView_INTERFACE_DEFINED__ */

#endif

#ifndef _LPENUMOLEDOCUMENTVIEWS_DEFINED
#define _LPENUMOLEDOCUMENTVIEWS_DEFINED

/*****************************************************************************
 * IEnumOleDocumentViews interface
 */
#ifndef __IEnumOleDocumentViews_INTERFACE_DEFINED__
#define __IEnumOleDocumentViews_INTERFACE_DEFINED__

typedef IEnumOleDocumentViews *LPENUMOLEDOCUMENTVIEWS;

EXTERN_C const IID IID_IEnumOleDocumentViews;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumOleDocumentViewsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumOleDocumentViews *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumOleDocumentViews *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumOleDocumentViews *This);

    /*** IEnumOleDocumentViews methods ***/
    HRESULT (__stdcall *Next)(
        IEnumOleDocumentViews *This,
        ULONG cViews,
        IOleDocumentView **rgpView,
        ULONG *pcFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumOleDocumentViews *This,
        ULONG cViews);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumOleDocumentViews *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumOleDocumentViews *This,
        IEnumOleDocumentViews **ppEnum);

    END_INTERFACE
} IEnumOleDocumentViewsVtbl;

interface IEnumOleDocumentViews {
    CONST_VTBL IEnumOleDocumentViewsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumOleDocumentViews_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumOleDocumentViews_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumOleDocumentViews_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumOleDocumentViews methods ***/
#define IEnumOleDocumentViews_Next(This,cViews,rgpView,pcFetched) \
    ((This)->lpVtbl->Next(This,cViews,rgpView,pcFetched))
#define IEnumOleDocumentViews_Skip(This,cViews) \
    ((This)->lpVtbl->Skip(This,cViews))
#define IEnumOleDocumentViews_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumOleDocumentViews_Clone(This,ppEnum) \
    ((This)->lpVtbl->Clone(This,ppEnum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT __stdcall IEnumOleDocumentViews_RemoteNext_Proxy(
    IEnumOleDocumentViews *This,
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched);

void __RPC_STUB IEnumOleDocumentViews_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT __stdcall IEnumOleDocumentViews_Next_Proxy(
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched);
HRESULT __stdcall IEnumOleDocumentViews_Next_Stub(
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched);
#endif /* __IEnumOleDocumentViews_INTERFACE_DEFINED__ */

#endif

#ifndef _LPCONTINUECALLBACK_DEFINED
#define _LPCONTINUECALLBACK_DEFINED

/*****************************************************************************
 * IContinueCallback interface
 */
#ifndef __IContinueCallback_INTERFACE_DEFINED__
#define __IContinueCallback_INTERFACE_DEFINED__

typedef IContinueCallback *LPCONTINUECALLBACK;

EXTERN_C const IID IID_IContinueCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContinueCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContinueCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContinueCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContinueCallback *This);

    /*** IContinueCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *FContinue)(
        IContinueCallback *This);

    HRESULT (STDMETHODCALLTYPE *FContinuePrinting)(
        IContinueCallback *This,
        LONG nCntPrinted,
        LONG nCurPage,
        wchar_t *pwszPrintStatus);

    END_INTERFACE
} IContinueCallbackVtbl;

interface IContinueCallback {
    CONST_VTBL IContinueCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContinueCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContinueCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContinueCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContinueCallback methods ***/
#define IContinueCallback_FContinue(This) \
    ((This)->lpVtbl->FContinue(This))
#define IContinueCallback_FContinuePrinting(This,nCntPrinted,nCurPage,pwszPrintStatus) \
    ((This)->lpVtbl->FContinuePrinting(This,nCntPrinted,nCurPage,pwszPrintStatus))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContinueCallback_INTERFACE_DEFINED__ */

#endif

#ifndef _LPPRINT_DEFINED
#define _LPPRINT_DEFINED

/*****************************************************************************
 * IPrint interface
 */
#ifndef __IPrint_INTERFACE_DEFINED__
#define __IPrint_INTERFACE_DEFINED__

typedef IPrint *LPPRINT;

typedef enum __POIDL_docobj_tag_00000014 {
    PRINTFLAG_MAYBOTHERUSER = 1,
    PRINTFLAG_PROMPTUSER = 2,
    PRINTFLAG_USERMAYCHANGEPRINTER = 4,
    PRINTFLAG_RECOMPOSETODEVICE = 8,
    PRINTFLAG_DONTACTUALLYPRINT = 16,
    PRINTFLAG_FORCEPROPERTIES = 32,
    PRINTFLAG_PRINTTOFILE = 64
} PRINTFLAG;

typedef struct tagPAGERANGE {
    LONG nFromPage;
    LONG nToPage;
} PAGERANGE;

typedef struct tagPAGESET {
    ULONG cbStruct;
    BOOL fOddPages;
    BOOL fEvenPages;
    ULONG cPageRange;
    PAGERANGE rgPages[ 1 ];
} PAGESET;

#define PAGESET_TOLASTPAGE   ((WORD)(-1L))

EXTERN_C const IID IID_IPrint;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPrintVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPrint *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPrint *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPrint *This);

    /*** IPrint methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInitialPageNum)(
        IPrint *This,
        LONG nFirstPage);

    HRESULT (STDMETHODCALLTYPE *GetPageInfo)(
        IPrint *This,
        LONG *pnFirstPage,
        LONG *pcPages);

    HRESULT (__stdcall *Print)(
        IPrint *This,
        DWORD grfFlags,
        DVTARGETDEVICE **pptd,
        PAGESET **ppPageSet,
        STGMEDIUM *pstgmOptions,
        IContinueCallback *pcallback,
        LONG nFirstPage,
        LONG *pcPagesPrinted,
        LONG *pnLastPage);

    END_INTERFACE
} IPrintVtbl;

interface IPrint {
    CONST_VTBL IPrintVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPrint_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPrint_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPrint_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPrint methods ***/
#define IPrint_SetInitialPageNum(This,nFirstPage) \
    ((This)->lpVtbl->SetInitialPageNum(This,nFirstPage))
#define IPrint_GetPageInfo(This,pnFirstPage,pcPages) \
    ((This)->lpVtbl->GetPageInfo(This,pnFirstPage,pcPages))
#define IPrint_Print(This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage) \
    ((This)->lpVtbl->Print(This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage))
#endif /* COBJMACROS */

#endif /* C */

HRESULT __stdcall IPrint_RemotePrint_Proxy(
    IPrint *This,
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **pppageset,
    RemSTGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage);

void __RPC_STUB IPrint_RemotePrint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT __stdcall IPrint_Print_Proxy(
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **ppPageSet,
    STGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage);
HRESULT __stdcall IPrint_Print_Stub(
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **pppageset,
    RemSTGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage);
#endif /* __IPrint_INTERFACE_DEFINED__ */

#endif

#ifndef _LPOLECOMMANDTARGET_DEFINED
#define _LPOLECOMMANDTARGET_DEFINED

/*****************************************************************************
 * IOleCommandTarget interface
 */
#ifndef __IOleCommandTarget_INTERFACE_DEFINED__
#define __IOleCommandTarget_INTERFACE_DEFINED__

typedef IOleCommandTarget *LPOLECOMMANDTARGET;

typedef enum OLECMDF {
    OLECMDF_SUPPORTED = 0x1,
    OLECMDF_ENABLED = 0x2,
    OLECMDF_LATCHED = 0x4,
    OLECMDF_NINCHED = 0x8,
    OLECMDF_INVISIBLE = 0x10,
    OLECMDF_DEFHIDEONCTXTMENU = 0x20
} OLECMDF;

typedef struct _tagOLECMD {
    ULONG cmdID;
    DWORD cmdf;
} OLECMD;

typedef struct _tagOLECMDTEXT {
    DWORD cmdtextf;
    ULONG cwActual;
    ULONG cwBuf;
    wchar_t rgwz[ 1 ];
} OLECMDTEXT;

typedef enum OLECMDTEXTF {
    OLECMDTEXTF_NONE = 0,
    OLECMDTEXTF_NAME = 1,
    OLECMDTEXTF_STATUS = 2
} OLECMDTEXTF;

typedef enum OLECMDEXECOPT {
    OLECMDEXECOPT_DODEFAULT = 0,
    OLECMDEXECOPT_PROMPTUSER = 1,
    OLECMDEXECOPT_DONTPROMPTUSER = 2,
    OLECMDEXECOPT_SHOWHELP = 3
} OLECMDEXECOPT;

/* OLECMDID_STOPDOWNLOAD and OLECMDID_ALLOWUILESSSAVEAS are supported for QueryStatus Only */

typedef enum OLECMDID {
    OLECMDID_OPEN = 1,
    OLECMDID_NEW = 2,
    OLECMDID_SAVE = 3,
    OLECMDID_SAVEAS = 4,
    OLECMDID_SAVECOPYAS = 5,
    OLECMDID_PRINT = 6,
    OLECMDID_PRINTPREVIEW = 7,
    OLECMDID_PAGESETUP = 8,
    OLECMDID_SPELL = 9,
    OLECMDID_PROPERTIES = 10,
    OLECMDID_CUT = 11,
    OLECMDID_COPY = 12,
    OLECMDID_PASTE = 13,
    OLECMDID_PASTESPECIAL = 14,
    OLECMDID_UNDO = 15,
    OLECMDID_REDO = 16,
    OLECMDID_SELECTALL = 17,
    OLECMDID_CLEARSELECTION = 18,
    OLECMDID_ZOOM = 19,
    OLECMDID_GETZOOMRANGE = 20,
    OLECMDID_UPDATECOMMANDS = 21,
    OLECMDID_REFRESH = 22,
    OLECMDID_STOP = 23,
    OLECMDID_HIDETOOLBARS = 24,
    OLECMDID_SETPROGRESSMAX = 25,
    OLECMDID_SETPROGRESSPOS = 26,
    OLECMDID_SETPROGRESSTEXT = 27,
    OLECMDID_SETTITLE = 28,
    OLECMDID_SETDOWNLOADSTATE = 29,
    OLECMDID_STOPDOWNLOAD = 30,
    OLECMDID_ONTOOLBARACTIVATED = 31,
    OLECMDID_FIND = 32,
    OLECMDID_DELETE = 33,
    OLECMDID_HTTPEQUIV = 34,
    OLECMDID_HTTPEQUIV_DONE = 35,
    OLECMDID_ENABLE_INTERACTION = 36,
    OLECMDID_ONUNLOAD = 37,
    OLECMDID_PROPERTYBAG2 = 38,
    OLECMDID_PREREFRESH = 39,
    OLECMDID_SHOWSCRIPTERROR = 40,
    OLECMDID_SHOWMESSAGE = 41,
    OLECMDID_SHOWFIND = 42,
    OLECMDID_SHOWPAGESETUP = 43,
    OLECMDID_SHOWPRINT = 44,
    OLECMDID_CLOSE = 45,
    OLECMDID_ALLOWUILESSSAVEAS = 46,
    OLECMDID_DONTDOWNLOADCSS = 47,
    OLECMDID_UPDATEPAGESTATUS = 48,
    OLECMDID_PRINT2 = 49,
    OLECMDID_PRINTPREVIEW2 = 50,
    OLECMDID_SETPRINTTEMPLATE = 51,
    OLECMDID_GETPRINTTEMPLATE = 52,
    OLECMDID_PAGEACTIONBLOCKED = 55,
    OLECMDID_PAGEACTIONUIQUERY = 56,
    OLECMDID_FOCUSVIEWCONTROLS = 57,
    OLECMDID_FOCUSVIEWCONTROLSQUERY = 58,
    OLECMDID_SHOWPAGEACTIONMENU = 59,
    OLECMDID_ADDTRAVELENTRY = 60,
    OLECMDID_UPDATETRAVELENTRY = 61,
    OLECMDID_UPDATEBACKFORWARDSTATE = 62,
    OLECMDID_OPTICAL_ZOOM = 63,
    OLECMDID_OPTICAL_GETZOOMRANGE = 64,
    OLECMDID_WINDOWSTATECHANGED = 65,
    OLECMDID_ACTIVEXINSTALLSCOPE = 66,
    OLECMDID_UPDATETRAVELENTRY_DATARECOVERY = 67,
    OLECMDID_SHOWTASKDLG = 68,
    OLECMDID_POPSTATEEVENT = 69,
    OLECMDID_VIEWPORT_MODE = 70,
    OLECMDID_LAYOUT_VIEWPORT_WIDTH = 71,
    OLECMDID_VISUAL_VIEWPORT_EXCLUDE_BOTTOM = 72,
    OLECMDID_USER_OPTICAL_ZOOM = 73,
    OLECMDID_PAGEAVAILABLE = 74,
    OLECMDID_GETUSERSCALABLE = 75,
    OLECMDID_UPDATE_CARET = 76,
    OLECMDID_ENABLE_VISIBILITY = 77,
    OLECMDID_MEDIA_PLAYBACK = 78,
    OLECMDID_SETFAVICON = 79,
    OLECMDID_SET_HOST_FULLSCREENMODE = 80,
    OLECMDID_EXITFULLSCREEN = 81,
    OLECMDID_SCROLLCOMPLETE = 82,
    OLECMDID_ONBEFOREUNLOAD = 83,
    OLECMDID_SHOWMESSAGE_BLOCKABLE = 84,
    OLECMDID_SHOWTASKDLG_BLOCKABLE = 85
} OLECMDID;

typedef enum MEDIAPLAYBACK_STATE {
    MEDIAPLAYBACK_RESUME = 0,
    MEDIAPLAYBACK_PAUSE = 1,
    MEDIAPLAYBACK_PAUSE_AND_SUSPEND = 2,
    MEDIAPLAYBACK_RESUME_FROM_SUSPEND = 3
} MEDIAPLAYBACK_STATE;

#define OLECMDERR_E_FIRST            (OLE_E_LAST+1)
#define OLECMDERR_E_NOTSUPPORTED     (OLECMDERR_E_FIRST)
#define OLECMDERR_E_DISABLED         (OLECMDERR_E_FIRST+1)
#define OLECMDERR_E_NOHELP           (OLECMDERR_E_FIRST+2)
#define OLECMDERR_E_CANCELED         (OLECMDERR_E_FIRST+3)
#define OLECMDERR_E_UNKNOWNGROUP     (OLECMDERR_E_FIRST+4)

#define MSOCMDERR_E_FIRST            OLECMDERR_E_FIRST
#define MSOCMDERR_E_NOTSUPPORTED     OLECMDERR_E_NOTSUPPORTED
#define MSOCMDERR_E_DISABLED         OLECMDERR_E_DISABLED
#define MSOCMDERR_E_NOHELP           OLECMDERR_E_NOHELP
#define MSOCMDERR_E_CANCELED         OLECMDERR_E_CANCELED
#define MSOCMDERR_E_UNKNOWNGROUP     OLECMDERR_E_UNKNOWNGROUP

#define OLECMD_TASKDLGID_ONBEFOREUNLOAD            1

#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
#define OLECMDARGINDEX_SHOWPAGEACTIONMENU_HWND     0
#define OLECMDARGINDEX_SHOWPAGEACTIONMENU_X        1
#define OLECMDARGINDEX_SHOWPAGEACTIONMENU_Y        2
#define OLECMDARGINDEX_ACTIVEXINSTALL_PUBLISHER    0
#define OLECMDARGINDEX_ACTIVEXINSTALL_DISPLAYNAME  1
#define OLECMDARGINDEX_ACTIVEXINSTALL_CLSID        2
#define OLECMDARGINDEX_ACTIVEXINSTALL_INSTALLSCOPE 3
#define OLECMDARGINDEX_ACTIVEXINSTALL_SOURCEURL    4

#define INSTALL_SCOPE_INVALID    0
#define INSTALL_SCOPE_MACHINE    1
#define INSTALL_SCOPE_USER       2

typedef enum IGNOREMIME {
    IGNOREMIME_PROMPT = 0x1,
    IGNOREMIME_TEXT = 0x2
} IGNOREMIME;

typedef enum WPCSETTING {
    WPCSETTING_LOGGING_ENABLED = 0x1,
    WPCSETTING_FILEDOWNLOAD_BLOCKED = 0x2
} WPCSETTING;
#endif

EXTERN_C const IID IID_IOleCommandTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleCommandTargetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleCommandTarget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleCommandTarget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleCommandTarget *This);

    /*** IOleCommandTarget methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryStatus)(
        IOleCommandTarget *This,
        const GUID *pguidCmdGroup,
        ULONG cCmds,
        OLECMD *prgCmds,
        OLECMDTEXT *pCmdText);

    HRESULT (STDMETHODCALLTYPE *Exec)(
        IOleCommandTarget *This,
        const GUID *pguidCmdGroup,
        DWORD nCmdID,
        DWORD nCmdexecopt,
        VARIANT *pvaIn,
        VARIANT *pvaOut);

    END_INTERFACE
} IOleCommandTargetVtbl;

interface IOleCommandTarget {
    CONST_VTBL IOleCommandTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleCommandTarget_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleCommandTarget_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleCommandTarget_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleCommandTarget methods ***/
#define IOleCommandTarget_QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText) \
    ((This)->lpVtbl->QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText))
#define IOleCommandTarget_Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut) \
    ((This)->lpVtbl->Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleCommandTarget_INTERFACE_DEFINED__ */

#endif

typedef enum
{
      OLECMDIDF_REFRESH_NORMAL          = 0,
      OLECMDIDF_REFRESH_IFEXPIRED       = 1,
      OLECMDIDF_REFRESH_CONTINUE        = 2,
      OLECMDIDF_REFRESH_COMPLETELY      = 3,
      OLECMDIDF_REFRESH_NO_CACHE        = 4,
      OLECMDIDF_REFRESH_RELOAD          = 5,
      OLECMDIDF_REFRESH_LEVELMASK       = 0x00FF,
      OLECMDIDF_REFRESH_CLEARUSERINPUT  = 0x1000,
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
      OLECMDIDF_REFRESH_PROMPTIFOFFLINE = 0x2000,
      OLECMDIDF_REFRESH_THROUGHSCRIPT   = 0x4000,
      OLECMDIDF_REFRESH_SKIPBEFOREUNLOADEVENT     = 0x8000,
      OLECMDIDF_REFRESH_PAGEACTION_ACTIVEXINSTALL = 0x00010000,
      OLECMDIDF_REFRESH_PAGEACTION_FILEDOWNLOAD   = 0x00020000,
      OLECMDIDF_REFRESH_PAGEACTION_LOCALMACHINE   = 0x00040000,
      OLECMDIDF_REFRESH_PAGEACTION_POPUPWINDOW    = 0x00080000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNLOCALMACHINE  = 0x00100000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNTRUSTED       = 0x00200000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNINTRANET      = 0x00400000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNINTERNET      = 0x00800000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNRESTRICTED    = 0x01000000,
#elif(NTDDI_VERSION >= NTDDI_WINXP)
      OLECMDIDF_REFRESH_PROMPTIFOFFLINE = 0x2000,
      OLECMDIDF_REFRESH_THROUGHSCRIPT   = 0x4000,
#else
      OLECMDIDF_REFRESH_PROMPTIFOFFLINE = 0x2000,
#endif
      OLECMDIDF_REFRESH_PAGEACTION_MIXEDCONTENT              = 0x02000000,
      OLECMDIDF_REFRESH_PAGEACTION_INVALID_CERT              = 0x04000000,
      OLECMDIDF_REFRESH_PAGEACTION_ALLOW_VERSION             = 0x08000000,

} OLECMDID_REFRESHFLAG;

#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
typedef enum
{
      OLECMDIDF_PAGEACTION_FILEDOWNLOAD                       = 0x00000001,
      OLECMDIDF_PAGEACTION_ACTIVEXINSTALL                     = 0x00000002,
      OLECMDIDF_PAGEACTION_ACTIVEXTRUSTFAIL                   = 0x00000004,
      OLECMDIDF_PAGEACTION_ACTIVEXUSERDISABLE                 = 0x00000008,
      OLECMDIDF_PAGEACTION_ACTIVEXDISALLOW                    = 0x00000010,
      OLECMDIDF_PAGEACTION_ACTIVEXUNSAFE                      = 0x00000020,
      OLECMDIDF_PAGEACTION_POPUPWINDOW                        = 0x00000040,
      OLECMDIDF_PAGEACTION_LOCALMACHINE                       = 0x00000080,
      OLECMDIDF_PAGEACTION_MIMETEXTPLAIN                      = 0x00000100,
      OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE                     = 0x00000200,
      OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE_ACTIVEXINSTALL      = 0x00000200,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNLOCALMACHINE           = 0x00000400,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNTRUSTED                = 0x00000800,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNINTRANET               = 0x00001000,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNINTERNET               = 0x00002000,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNRESTRICTED             = 0x00004000,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNDENY                   = 0x00008000,
      OLECMDIDF_PAGEACTION_POPUPALLOWED                       = 0x00010000,
      OLECMDIDF_PAGEACTION_SCRIPTPROMPT                       = 0x00020000,
      OLECMDIDF_PAGEACTION_ACTIVEXUSERAPPROVAL                = 0x00040000,
      OLECMDIDF_PAGEACTION_MIXEDCONTENT                       = 0x00080000,
      OLECMDIDF_PAGEACTION_INVALID_CERT                       = 0x00100000,
      OLECMDIDF_PAGEACTION_INTRANETZONEREQUEST                = 0x00200000,
      OLECMDIDF_PAGEACTION_XSSFILTERED                        = 0x00400000,
      OLECMDIDF_PAGEACTION_SPOOFABLEIDNHOST                   = 0x00800000,
      OLECMDIDF_PAGEACTION_ACTIVEX_EPM_INCOMPATIBLE           = 0x01000000,
      OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE_ACTIVEXUSERAPPROVAL = 0x02000000,
      OLECMDIDF_PAGEACTION_WPCBLOCKED                         = 0x04000000,
      OLECMDIDF_PAGEACTION_WPCBLOCKED_ACTIVEX                 = 0x08000000,
      OLECMDIDF_PAGEACTION_EXTENSION_COMPAT_BLOCKED           = 0x10000000,
      OLECMDIDF_PAGEACTION_NORESETACTIVEX                     = 0x20000000,
      OLECMDIDF_PAGEACTION_GENERIC_STATE                      = 0x40000000,
      OLECMDIDF_PAGEACTION_RESET                              = (int) 0x80000000,
} OLECMDID_PAGEACTIONFLAG;

typedef enum
{
      OLECMDIDF_BROWSERSTATE_EXTENSIONSOFF                      = 0x00000001,
      OLECMDIDF_BROWSERSTATE_IESECURITY                         = 0x00000002,

      OLECMDIDF_BROWSERSTATE_PROTECTEDMODE_OFF                  = 0x00000004,
      OLECMDIDF_BROWSERSTATE_RESET                              = 0x00000008,
      OLECMDIDF_BROWSERSTATE_REQUIRESACTIVEX                    = 0x00000010,
      OLECMDIDF_BROWSERSTATE_DESKTOPHTMLDIALOG                  = 0x00000020,
      OLECMDIDF_BROWSERSTATE_BLOCKEDVERSION                     = 0x00000040,
} OLECMDID_BROWSERSTATEFLAG;

typedef enum
{
      OLECMDIDF_OPTICAL_ZOOM_NOPERSIST                          = 0x00000001,

      OLECMDIDF_OPTICAL_ZOOM_NOLAYOUT                           = 0x00000010,
      OLECMDIDF_OPTICAL_ZOOM_NOTRANSIENT                        = 0x00000020,
      OLECMDIDF_OPTICAL_ZOOM_RELOADFORNEWTAB                    = 0x00000040,
} OLECMDID_OPTICAL_ZOOMFLAG;

typedef enum
{
    PAGEACTION_UI_DEFAULT     = 0,
    PAGEACTION_UI_MODAL       = 1,
    PAGEACTION_UI_MODELESS    = 2,
    PAGEACTION_UI_SILENT      = 3,
} PAGEACTION_UI;

#endif

typedef enum
{
    OLECMDIDF_WINDOWSTATE_USERVISIBLE        = 0x00000001,
    OLECMDIDF_WINDOWSTATE_ENABLED            = 0x00000002,
    OLECMDIDF_WINDOWSTATE_USERVISIBLE_VALID  = 0x00010000,
    OLECMDIDF_WINDOWSTATE_ENABLED_VALID      = 0x00020000,
} OLECMDID_WINDOWSTATE_FLAG;

typedef enum
{
    OLECMDIDF_VIEWPORTMODE_FIXED_LAYOUT_WIDTH          = 0x00000001,
    OLECMDIDF_VIEWPORTMODE_EXCLUDE_VISUAL_BOTTOM       = 0x00000002,
    OLECMDIDF_VIEWPORTMODE_FIXED_LAYOUT_WIDTH_VALID    = 0x00010000,
    OLECMDIDF_VIEWPORTMODE_EXCLUDE_VISUAL_BOTTOM_VALID = 0x00020000,
} OLECMDID_VIEWPORT_MODE_FLAG;

////////////////////////////////////////////////////////////////////////////
//  Aliases to original office-compatible names
#define IMsoDocument             IOleDocument
#define IMsoDocumentSite         IOleDocumentSite
#define IMsoView                 IOleDocumentView
#define IEnumMsoView             IEnumOleDocumentViews
#define IMsoCommandTarget        IOleCommandTarget
#define LPMSODOCUMENT            LPOLEDOCUMENT
#define LPMSODOCUMENTSITE        LPOLEDOCUMENTSITE
#define LPMSOVIEW                LPOLEDOCUMENTVIEW
#define LPENUMMSOVIEW            LPENUMOLEDOCUMENTVIEWS
#define LPMSOCOMMANDTARGET       LPOLECOMMANDTARGET
#define MSOCMD                   OLECMD
#define MSOCMDTEXT               OLECMDTEXT
#define IID_IMsoDocument         IID_IOleDocument
#define IID_IMsoDocumentSite     IID_IOleDocumentSite
#define IID_IMsoView             IID_IOleDocumentView
#define IID_IEnumMsoView         IID_IEnumOleDocumentViews
#define IID_IMsoCommandTarget    IID_IOleCommandTarget
#define MSOCMDF_SUPPORTED OLECMDF_SUPPORTED
#define MSOCMDF_ENABLED OLECMDF_ENABLED
#define MSOCMDF_LATCHED OLECMDF_LATCHED
#define MSOCMDF_NINCHED OLECMDF_NINCHED
#define MSOCMDTEXTF_NONE OLECMDTEXTF_NONE
#define MSOCMDTEXTF_NAME OLECMDTEXTF_NAME
#define MSOCMDTEXTF_STATUS OLECMDTEXTF_STATUS
#define MSOCMDEXECOPT_DODEFAULT OLECMDEXECOPT_DODEFAULT
#define MSOCMDEXECOPT_PROMPTUSER OLECMDEXECOPT_PROMPTUSER
#define MSOCMDEXECOPT_DONTPROMPTUSER OLECMDEXECOPT_DONTPROMPTUSER
#define MSOCMDEXECOPT_SHOWHELP OLECMDEXECOPT_SHOWHELP
#define MSOCMDID_OPEN OLECMDID_OPEN
#define MSOCMDID_NEW OLECMDID_NEW
#define MSOCMDID_SAVE OLECMDID_SAVE
#define MSOCMDID_SAVEAS OLECMDID_SAVEAS
#define MSOCMDID_SAVECOPYAS OLECMDID_SAVECOPYAS
#define MSOCMDID_PRINT OLECMDID_PRINT
#define MSOCMDID_PRINTPREVIEW OLECMDID_PRINTPREVIEW
#define MSOCMDID_PAGESETUP OLECMDID_PAGESETUP
#define MSOCMDID_SPELL OLECMDID_SPELL
#define MSOCMDID_PROPERTIES OLECMDID_PROPERTIES
#define MSOCMDID_CUT OLECMDID_CUT
#define MSOCMDID_COPY OLECMDID_COPY
#define MSOCMDID_PASTE OLECMDID_PASTE
#define MSOCMDID_PASTESPECIAL OLECMDID_PASTESPECIAL
#define MSOCMDID_UNDO OLECMDID_UNDO
#define MSOCMDID_REDO OLECMDID_REDO
#define MSOCMDID_SELECTALL OLECMDID_SELECTALL
#define MSOCMDID_CLEARSELECTION OLECMDID_CLEARSELECTION
#define MSOCMDID_ZOOM OLECMDID_ZOOM
#define MSOCMDID_GETZOOMRANGE OLECMDID_GETZOOMRANGE

EXTERN_C const GUID SID_SContainerDispatch;

/*****************************************************************************
 * IZoomEvents interface
 */
#ifndef __IZoomEvents_INTERFACE_DEFINED__
#define __IZoomEvents_INTERFACE_DEFINED__

EXTERN_C const IID IID_IZoomEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IZoomEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IZoomEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IZoomEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IZoomEvents *This);

    /*** IZoomEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnZoomPercentChanged)(
        IZoomEvents *This,
        ULONG ulZoomPercent);

    END_INTERFACE
} IZoomEventsVtbl;

interface IZoomEvents {
    CONST_VTBL IZoomEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IZoomEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IZoomEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IZoomEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IZoomEvents methods ***/
#define IZoomEvents_OnZoomPercentChanged(This,ulZoomPercent) \
    ((This)->lpVtbl->OnZoomPercentChanged(This,ulZoomPercent))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IZoomEvents_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IProtectFocus interface
 */
#ifndef __IProtectFocus_INTERFACE_DEFINED__
#define __IProtectFocus_INTERFACE_DEFINED__

EXTERN_C const IID IID_IProtectFocus;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IProtectFocusVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProtectFocus *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProtectFocus *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProtectFocus *This);

    /*** IProtectFocus methods ***/
    HRESULT (STDMETHODCALLTYPE *AllowFocusChange)(
        IProtectFocus *This,
        BOOL *pfAllow);

    END_INTERFACE
} IProtectFocusVtbl;

interface IProtectFocus {
    CONST_VTBL IProtectFocusVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IProtectFocus_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IProtectFocus_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IProtectFocus_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IProtectFocus methods ***/
#define IProtectFocus_AllowFocusChange(This,pfAllow) \
    ((This)->lpVtbl->AllowFocusChange(This,pfAllow))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IProtectFocus_INTERFACE_DEFINED__ */

#define SID_SProtectFocus  IID_IProtectFocus

#ifndef _LPPROTECTEDMODEMENUSERVICES_DEFINED
#define _LPPROTECTEDMODEMENUSERVICES_DEFINED

/*****************************************************************************
 * IProtectedModeMenuServices interface
 */
#ifndef __IProtectedModeMenuServices_INTERFACE_DEFINED__
#define __IProtectedModeMenuServices_INTERFACE_DEFINED__

EXTERN_C const IID IID_IProtectedModeMenuServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IProtectedModeMenuServicesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProtectedModeMenuServices *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProtectedModeMenuServices *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProtectedModeMenuServices *This);

    /*** IProtectedModeMenuServices methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateMenu)(
        IProtectedModeMenuServices *This,
        HMENU *phMenu);

    HRESULT (STDMETHODCALLTYPE *LoadMenu)(
        IProtectedModeMenuServices *This,
        LPCWSTR pszModuleName,
        LPCWSTR pszMenuName,
        HMENU *phMenu);

    HRESULT (STDMETHODCALLTYPE *LoadMenuID)(
        IProtectedModeMenuServices *This,
        LPCWSTR pszModuleName,
        WORD wResourceID,
        HMENU *phMenu);

    END_INTERFACE
} IProtectedModeMenuServicesVtbl;

interface IProtectedModeMenuServices {
    CONST_VTBL IProtectedModeMenuServicesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IProtectedModeMenuServices_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IProtectedModeMenuServices_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IProtectedModeMenuServices_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IProtectedModeMenuServices methods ***/
#define IProtectedModeMenuServices_CreateMenu(This,phMenu) \
    ((This)->lpVtbl->CreateMenu(This,phMenu))
#define IProtectedModeMenuServices_LoadMenu(This,pszModuleName,pszMenuName,phMenu) \
    ((This)->lpVtbl->LoadMenu(This,pszModuleName,pszMenuName,phMenu))
#define IProtectedModeMenuServices_LoadMenuID(This,pszModuleName,wResourceID,phMenu) \
    ((This)->lpVtbl->LoadMenuID(This,pszModuleName,wResourceID,phMenu))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IProtectedModeMenuServices_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagPAGESET {} PAGESET;
#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER STGMEDIUM_UserSize(ULONG *, ULONG, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserMarshal(ULONG *, unsigned char *, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(ULONG *, STGMEDIUM *);
ULONG __RPC_USER VARIANT_UserSize(ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal(ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(ULONG *, VARIANT *);
ULONG __RPC_USER HMENU_UserSize(ULONG *, ULONG, HMENU *);
unsigned char * __RPC_USER HMENU_UserMarshal(ULONG *, unsigned char *, HMENU *);
unsigned char * __RPC_USER HMENU_UserUnmarshal(ULONG *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(ULONG *, HMENU *);

/* End additional prototypes for all interfaces */

#endif /* __docobj_h__ */
