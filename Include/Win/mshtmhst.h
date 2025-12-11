/* Generated from mshtmhst.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __mshtmhst_h__
#define __mshtmhst_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IHostDialogHelper_FWD_DEFINED__
#define __IHostDialogHelper_FWD_DEFINED__
typedef interface IHostDialogHelper IHostDialogHelper;
#endif /* __IHostDialogHelper_FWD_DEFINED__ */

#ifndef __HostDialogHelper_FWD_DEFINED__
#define __HostDialogHelper_FWD_DEFINED__
typedef struct HostDialogHelper HostDialogHelper;
#endif /* __HostDialogHelper_FWD_DEFINED__ */

#ifndef __IDocHostUIHandler_FWD_DEFINED__
#define __IDocHostUIHandler_FWD_DEFINED__
typedef interface IDocHostUIHandler IDocHostUIHandler;
#endif /* __IDocHostUIHandler_FWD_DEFINED__ */

#ifndef __IDocHostUIHandler2_FWD_DEFINED__
#define __IDocHostUIHandler2_FWD_DEFINED__
typedef interface IDocHostUIHandler2 IDocHostUIHandler2;
#endif /* __IDocHostUIHandler2_FWD_DEFINED__ */

#ifndef __ICustomDoc_FWD_DEFINED__
#define __ICustomDoc_FWD_DEFINED__
typedef interface ICustomDoc ICustomDoc;
#endif /* __ICustomDoc_FWD_DEFINED__ */

#ifndef __IDocHostShowUI_FWD_DEFINED__
#define __IDocHostShowUI_FWD_DEFINED__
typedef interface IDocHostShowUI IDocHostShowUI;
#endif /* __IDocHostShowUI_FWD_DEFINED__ */

#ifndef __IClassFactoryEx_FWD_DEFINED__
#define __IClassFactoryEx_FWD_DEFINED__
typedef interface IClassFactoryEx IClassFactoryEx;
#endif /* __IClassFactoryEx_FWD_DEFINED__ */

#ifndef __IHTMLOMWindowServices_FWD_DEFINED__
#define __IHTMLOMWindowServices_FWD_DEFINED__
typedef interface IHTMLOMWindowServices IHTMLOMWindowServices;
#endif /* __IHTMLOMWindowServices_FWD_DEFINED__ */

/* Headers for imported files */

#include "ocidl.h"
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#pragma comment(lib,"uuid.lib")

//--------------------------------------------------------------------------
// MSTHML Advanced Host Interfaces.
#ifndef MSHTMHST_H
#define MSHTMHST_H

#define CONTEXT_MENU_DEFAULT        0
#define CONTEXT_MENU_IMAGE          1
#define CONTEXT_MENU_CONTROL        2
#define CONTEXT_MENU_TABLE          3
// in browse mode
#define CONTEXT_MENU_TEXTSELECT     4
#define CONTEXT_MENU_ANCHOR         5
#define CONTEXT_MENU_UNKNOWN        6
//;begin_internal
// These 2 are mapped to IMAGE for the public
#define CONTEXT_MENU_IMGDYNSRC      7
#define CONTEXT_MENU_DEBUG          8
//;end_internal
#define CONTEXT_MENU_VSCROLL        9
#define CONTEXT_MENU_HSCROLL        10
#define CONTEXT_MENU_MEDIA          11
//;begin_internal
#define CONTEXT_MENU_ENTITY         12
#define CONTEXT_MENU_PDF            13
#define CONTEXT_MENU_DISABLEDFLASH  14
//;end_internal

#define MENUEXT_SHOWDIALOG           0x1

#define DOCHOSTUIFLAG_BROWSER       (DOCHOSTUIFLAG_DISABLE_HELP_MENU | DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE)

#define HTMLDLG_NOUI                     0x0010
#define HTMLDLG_MODAL                    0x0020
#define HTMLDLG_MODELESS                 0x0040
#define HTMLDLG_PRINT_TEMPLATE           0x0080
#define HTMLDLG_VERIFY                   0x0100
#define HTMLDLG_ALLOW_UNKNOWN_THREAD     0x0200

#define PRINT_DONTBOTHERUSER             0x01
#define PRINT_WAITFORCOMPLETION          0x02

#define CMDID_SCRIPTSITE_URL                0
#define CMDID_SCRIPTSITE_HTMLDLGTRUST       1
#define CMDID_SCRIPTSITE_SECSTATE           2
#define CMDID_SCRIPTSITE_SID                3
#define CMDID_SCRIPTSITE_TRUSTEDDOC         4
#define CMDID_SCRIPTSITE_SECURITY_WINDOW    5
#define CMDID_SCRIPTSITE_NAMESPACE          6
#define CMDID_SCRIPTSITE_IURI               7
#define CMDID_HOSTCONTEXT_URL               8
#define CMDID_SCRIPTSITE_ALLOWRECOVERY      9
#define CMDID_SCRIPTSITE_BASEIURI          10

EXTERN_C const GUID CGID_ScriptSite;
EXTERN_C const GUID CGID_MSHTML;
#define CMDSETID_Forms3 CGID_MSHTML
#define SZ_HTML_CLIENTSITE_OBJECTPARAM L"{d4db6850-5385-11d0-89e9-00a0c90a90ac}"

#ifndef __IHTMLWindow2_FWD_DEFINED__
#define __IHTMLWindow2_FWD_DEFINED__
typedef interface IHTMLWindow2 IHTMLWindow2;
#endif

typedef HRESULT STDAPICALLTYPE SHOWHTMLDIALOGFN (HWND hwndParent, IMoniker *pmk, VARIANT *pvarArgIn, WCHAR* pchOptions, VARIANT *pvArgOut);

typedef HRESULT STDAPICALLTYPE SHOWHTMLDIALOGEXFN (HWND hwndParent, IMoniker *pmk, DWORD dwDialogFlags, VARIANT *pvarArgIn, WCHAR* pchOptions, VARIANT *pvArgOut);

typedef HRESULT STDAPICALLTYPE SHOWMODELESSHTMLDIALOGFN (HWND hwndParent, IMoniker *pmk, VARIANT *pvarArgIn, VARIANT* pvarOptions, IHTMLWindow2 ** ppWindow);

typedef HRESULT STDAPICALLTYPE IEREGISTERXMLNSFN ( LPCWSTR lpszURI,  GUID clsid,  BOOL fMachine);

typedef HRESULT STDAPICALLTYPE IEISXMLNSREGISTEREDFN ( LPCWSTR lpszURI,  GUID *pCLSID);

//;begin_internal
STDAPI ShowHTMLDialog(
    HWND        hwndParent,
    IMoniker *  pMk,
    VARIANT *   pvarArgIn,
     LPWSTR pchOptions,
    VARIANT *   pvarArgOut
    );

STDAPI ShowHTMLDialogEx(
    HWND        hwndParent,
    IMoniker *  pMk,
    DWORD       dwDialogFlags,
    VARIANT *   pvarArgIn,
     LPWSTR pchOptions,
    VARIANT *   pvarArgOut
    );

STDAPI ShowModelessHTMLDialog(
    HWND        hwndParent,
    IMoniker *  pMk,
    VARIANT *   pvarArgIn,
    VARIANT *   pvarOptions,
    IHTMLWindow2 ** ppWindow);
//;end_internal

#ifndef _ARM_
STDAPI RunHTMLApplication(
    HINSTANCE hinst,
    HINSTANCE hPrevInst,
     LPSTR szCmdLine,
    int nCmdShow
    );
#endif // !ARM

/* STDAPI CreateHTMLPropertyPage(
    IMoniker *          pmk,
    IPropertyPage **    ppPP
    ); */

/* STDAPI EarlyStartDisplaySystem(); */

STDAPI IERegisterXMLNS(
      LPCWSTR lpszURI,
      GUID clsid,
      BOOL fMachine
     );

STDAPI IEIsXMLNSRegistered(
     LPCWSTR lpszURI,
      GUID *pCLSID
     );

/* STDAPI GetColorValueFromString(
      LPCWSTR lpszColor,
      BOOL fStrictCSS1,
      BOOL fIsStandardsCSS,
      COLORREF *pColor
     ); */

/* STDAPI InitializeLocalHtmlEngine(); */
/* STDAPI UninitializeLocalHtmlEngine(); */

/*****************************************************************************
 * IHostDialogHelper interface
 */
#ifndef __IHostDialogHelper_INTERFACE_DEFINED__
#define __IHostDialogHelper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHostDialogHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHostDialogHelperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHostDialogHelper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHostDialogHelper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHostDialogHelper *This);

    /*** IHostDialogHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowHTMLDialog)(
        IHostDialogHelper *This,
        HWND hwndParent,
        IMoniker *pMk,
        VARIANT *pvarArgIn,
        WCHAR *pchOptions,
        VARIANT *pvarArgOut,
        IUnknown *punkHost);

    END_INTERFACE
} IHostDialogHelperVtbl;

interface IHostDialogHelper {
    CONST_VTBL IHostDialogHelperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHostDialogHelper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHostDialogHelper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHostDialogHelper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHostDialogHelper methods ***/
#define IHostDialogHelper_ShowHTMLDialog(This,hwndParent,pMk,pvarArgIn,pchOptions,pvarArgOut,punkHost) \
    ((This)->lpVtbl->ShowHTMLDialog(This,hwndParent,pMk,pvarArgIn,pchOptions,pvarArgOut,punkHost))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHostDialogHelper_INTERFACE_DEFINED__ */

/*****************************************************************************
 * HostDialogHelper coclass
 */

EXTERN_C const CLSID CLSID_HostDialogHelper;

EXTERN_C const GUID CLSID_HostDialogHelper;

//;begin_internal

typedef enum tagDOCHOSTUITYPE {
    DOCHOSTUITYPE_BROWSE = 0,
    DOCHOSTUITYPE_AUTHOR = 1
} DOCHOSTUITYPE;
//;end_internal

typedef enum tagDOCHOSTUIDBLCLK {
    DOCHOSTUIDBLCLK_DEFAULT = 0,
    DOCHOSTUIDBLCLK_SHOWPROPERTIES = 1,
    DOCHOSTUIDBLCLK_SHOWCODE = 2
} DOCHOSTUIDBLCLK;

typedef enum tagDOCHOSTUIFLAG {
    DOCHOSTUIFLAG_DIALOG = 0x1,
    DOCHOSTUIFLAG_DISABLE_HELP_MENU = 0x2,
    DOCHOSTUIFLAG_NO3DBORDER = 0x4,
    DOCHOSTUIFLAG_SCROLL_NO = 0x8,
    DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE = 0x10,
    DOCHOSTUIFLAG_OPENNEWWIN = 0x20,
    DOCHOSTUIFLAG_DISABLE_OFFSCREEN = 0x40,
    DOCHOSTUIFLAG_FLAT_SCROLLBAR = 0x80,
    DOCHOSTUIFLAG_DIV_BLOCKDEFAULT = 0x100,
    DOCHOSTUIFLAG_ACTIVATE_CLIENTHIT_ONLY = 0x200,
    DOCHOSTUIFLAG_OVERRIDEBEHAVIORFACTORY = 0x400,
    DOCHOSTUIFLAG_CODEPAGELINKEDFONTS = 0x800,
    DOCHOSTUIFLAG_URL_ENCODING_DISABLE_UTF8 = 0x1000,
    DOCHOSTUIFLAG_URL_ENCODING_ENABLE_UTF8 = 0x2000,
    DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE = 0x4000,
    DOCHOSTUIFLAG_ENABLE_INPLACE_NAVIGATION = 0x10000,
    DOCHOSTUIFLAG_IME_ENABLE_RECONVERSION = 0x20000,
    DOCHOSTUIFLAG_THEME = 0x40000,
    DOCHOSTUIFLAG_NOTHEME = 0x80000,
    DOCHOSTUIFLAG_NOPICS = 0x100000,
    DOCHOSTUIFLAG_NO3DOUTERBORDER = 0x200000,
    DOCHOSTUIFLAG_DISABLE_EDIT_NS_FIXUP = 0x400000,
    DOCHOSTUIFLAG_LOCAL_MACHINE_ACCESS_CHECK = 0x800000,
    DOCHOSTUIFLAG_DISABLE_UNTRUSTEDPROTOCOL = 0x1000000,
    DOCHOSTUIFLAG_HOST_NAVIGATES = 0x2000000,
    DOCHOSTUIFLAG_ENABLE_REDIRECT_NOTIFICATION = 0x4000000,
    DOCHOSTUIFLAG_USE_WINDOWLESS_SELECTCONTROL = 0x8000000,
    DOCHOSTUIFLAG_USE_WINDOWED_SELECTCONTROL = 0x10000000,
    DOCHOSTUIFLAG_ENABLE_ACTIVEX_INACTIVATE_MODE = 0x20000000,
    DOCHOSTUIFLAG_DPI_AWARE = 0x40000000
} DOCHOSTUIFLAG;

/*****************************************************************************
 * IDocHostUIHandler interface
 */
#ifndef __IDocHostUIHandler_INTERFACE_DEFINED__
#define __IDocHostUIHandler_INTERFACE_DEFINED__

typedef struct _DOCHOSTUIINFO {
    ULONG cbSize;
    DWORD dwFlags;
    DWORD dwDoubleClick;
    OLECHAR *pchHostCss;
    OLECHAR *pchHostNS;
} DOCHOSTUIINFO;

EXTERN_C const IID IID_IDocHostUIHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDocHostUIHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocHostUIHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocHostUIHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocHostUIHandler *This);

    /*** IDocHostUIHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowContextMenu)(
        IDocHostUIHandler *This,
        DWORD dwID,
        POINT *ppt,
        IUnknown *pcmdtReserved,
        IDispatch *pdispReserved);

    HRESULT (STDMETHODCALLTYPE *GetHostInfo)(
        IDocHostUIHandler *This,
        DOCHOSTUIINFO *pInfo);

    HRESULT (STDMETHODCALLTYPE *ShowUI)(
        IDocHostUIHandler *This,
        DWORD dwID,
        IOleInPlaceActiveObject *pActiveObject,
        IOleCommandTarget *pCommandTarget,
        IOleInPlaceFrame *pFrame,
        IOleInPlaceUIWindow *pDoc);

    HRESULT (STDMETHODCALLTYPE *HideUI)(
        IDocHostUIHandler *This);

    HRESULT (STDMETHODCALLTYPE *UpdateUI)(
        IDocHostUIHandler *This);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IDocHostUIHandler *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *OnDocWindowActivate)(
        IDocHostUIHandler *This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *OnFrameWindowActivate)(
        IDocHostUIHandler *This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *ResizeBorder)(
        IDocHostUIHandler *This,
        LPCRECT prcBorder,
        IOleInPlaceUIWindow *pUIWindow,
        BOOL fRameWindow);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IDocHostUIHandler *This,
        LPMSG lpMsg,
        const GUID *pguidCmdGroup,
        DWORD nCmdID);

    HRESULT (STDMETHODCALLTYPE *GetOptionKeyPath)(
        IDocHostUIHandler *This,
        LPOLESTR *pchKey,
        DWORD dw);

    HRESULT (STDMETHODCALLTYPE *GetDropTarget)(
        IDocHostUIHandler *This,
        IDropTarget *pDropTarget,
        IDropTarget **ppDropTarget);

    HRESULT (STDMETHODCALLTYPE *GetExternal)(
        IDocHostUIHandler *This,
        IDispatch **ppDispatch);

    HRESULT (STDMETHODCALLTYPE *TranslateUrl)(
        IDocHostUIHandler *This,
        DWORD dwTranslate,
        LPWSTR pchURLIn,
        LPWSTR *ppchURLOut);

    HRESULT (STDMETHODCALLTYPE *FilterDataObject)(
        IDocHostUIHandler *This,
        IDataObject *pDO,
        IDataObject **ppDORet);

    END_INTERFACE
} IDocHostUIHandlerVtbl;

interface IDocHostUIHandler {
    CONST_VTBL IDocHostUIHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDocHostUIHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDocHostUIHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDocHostUIHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDocHostUIHandler methods ***/
#define IDocHostUIHandler_ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) \
    ((This)->lpVtbl->ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved))
#define IDocHostUIHandler_GetHostInfo(This,pInfo) \
    ((This)->lpVtbl->GetHostInfo(This,pInfo))
#define IDocHostUIHandler_ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) \
    ((This)->lpVtbl->ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc))
#define IDocHostUIHandler_HideUI(This) \
    ((This)->lpVtbl->HideUI(This))
#define IDocHostUIHandler_UpdateUI(This) \
    ((This)->lpVtbl->UpdateUI(This))
#define IDocHostUIHandler_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#define IDocHostUIHandler_OnDocWindowActivate(This,fActivate) \
    ((This)->lpVtbl->OnDocWindowActivate(This,fActivate))
#define IDocHostUIHandler_OnFrameWindowActivate(This,fActivate) \
    ((This)->lpVtbl->OnFrameWindowActivate(This,fActivate))
#define IDocHostUIHandler_ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) \
    ((This)->lpVtbl->ResizeBorder(This,prcBorder,pUIWindow,fRameWindow))
#define IDocHostUIHandler_TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) \
    ((This)->lpVtbl->TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID))
#define IDocHostUIHandler_GetOptionKeyPath(This,pchKey,dw) \
    ((This)->lpVtbl->GetOptionKeyPath(This,pchKey,dw))
#define IDocHostUIHandler_GetDropTarget(This,pDropTarget,ppDropTarget) \
    ((This)->lpVtbl->GetDropTarget(This,pDropTarget,ppDropTarget))
#define IDocHostUIHandler_GetExternal(This,ppDispatch) \
    ((This)->lpVtbl->GetExternal(This,ppDispatch))
#define IDocHostUIHandler_TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) \
    ((This)->lpVtbl->TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut))
#define IDocHostUIHandler_FilterDataObject(This,pDO,ppDORet) \
    ((This)->lpVtbl->FilterDataObject(This,pDO,ppDORet))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDocHostUIHandler_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDocHostUIHandler2 interface
 */
#ifndef __IDocHostUIHandler2_INTERFACE_DEFINED__
#define __IDocHostUIHandler2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDocHostUIHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDocHostUIHandler2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocHostUIHandler2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocHostUIHandler2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocHostUIHandler2 *This);

    /*** IDocHostUIHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowContextMenu)(
        IDocHostUIHandler2 *This,
        DWORD dwID,
        POINT *ppt,
        IUnknown *pcmdtReserved,
        IDispatch *pdispReserved);

    HRESULT (STDMETHODCALLTYPE *GetHostInfo)(
        IDocHostUIHandler2 *This,
        DOCHOSTUIINFO *pInfo);

    HRESULT (STDMETHODCALLTYPE *ShowUI)(
        IDocHostUIHandler2 *This,
        DWORD dwID,
        IOleInPlaceActiveObject *pActiveObject,
        IOleCommandTarget *pCommandTarget,
        IOleInPlaceFrame *pFrame,
        IOleInPlaceUIWindow *pDoc);

    HRESULT (STDMETHODCALLTYPE *HideUI)(
        IDocHostUIHandler2 *This);

    HRESULT (STDMETHODCALLTYPE *UpdateUI)(
        IDocHostUIHandler2 *This);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IDocHostUIHandler2 *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *OnDocWindowActivate)(
        IDocHostUIHandler2 *This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *OnFrameWindowActivate)(
        IDocHostUIHandler2 *This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *ResizeBorder)(
        IDocHostUIHandler2 *This,
        LPCRECT prcBorder,
        IOleInPlaceUIWindow *pUIWindow,
        BOOL fRameWindow);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IDocHostUIHandler2 *This,
        LPMSG lpMsg,
        const GUID *pguidCmdGroup,
        DWORD nCmdID);

    HRESULT (STDMETHODCALLTYPE *GetOptionKeyPath)(
        IDocHostUIHandler2 *This,
        LPOLESTR *pchKey,
        DWORD dw);

    HRESULT (STDMETHODCALLTYPE *GetDropTarget)(
        IDocHostUIHandler2 *This,
        IDropTarget *pDropTarget,
        IDropTarget **ppDropTarget);

    HRESULT (STDMETHODCALLTYPE *GetExternal)(
        IDocHostUIHandler2 *This,
        IDispatch **ppDispatch);

    HRESULT (STDMETHODCALLTYPE *TranslateUrl)(
        IDocHostUIHandler2 *This,
        DWORD dwTranslate,
        LPWSTR pchURLIn,
        LPWSTR *ppchURLOut);

    HRESULT (STDMETHODCALLTYPE *FilterDataObject)(
        IDocHostUIHandler2 *This,
        IDataObject *pDO,
        IDataObject **ppDORet);

    /*** IDocHostUIHandler2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOverrideKeyPath)(
        IDocHostUIHandler2 *This,
        LPOLESTR *pchKey,
        DWORD dw);

    END_INTERFACE
} IDocHostUIHandler2Vtbl;

interface IDocHostUIHandler2 {
    CONST_VTBL IDocHostUIHandler2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDocHostUIHandler2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDocHostUIHandler2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDocHostUIHandler2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDocHostUIHandler methods ***/
#define IDocHostUIHandler2_ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) \
    ((This)->lpVtbl->ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved))
#define IDocHostUIHandler2_GetHostInfo(This,pInfo) \
    ((This)->lpVtbl->GetHostInfo(This,pInfo))
#define IDocHostUIHandler2_ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) \
    ((This)->lpVtbl->ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc))
#define IDocHostUIHandler2_HideUI(This) \
    ((This)->lpVtbl->HideUI(This))
#define IDocHostUIHandler2_UpdateUI(This) \
    ((This)->lpVtbl->UpdateUI(This))
#define IDocHostUIHandler2_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#define IDocHostUIHandler2_OnDocWindowActivate(This,fActivate) \
    ((This)->lpVtbl->OnDocWindowActivate(This,fActivate))
#define IDocHostUIHandler2_OnFrameWindowActivate(This,fActivate) \
    ((This)->lpVtbl->OnFrameWindowActivate(This,fActivate))
#define IDocHostUIHandler2_ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) \
    ((This)->lpVtbl->ResizeBorder(This,prcBorder,pUIWindow,fRameWindow))
#define IDocHostUIHandler2_TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) \
    ((This)->lpVtbl->TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID))
#define IDocHostUIHandler2_GetOptionKeyPath(This,pchKey,dw) \
    ((This)->lpVtbl->GetOptionKeyPath(This,pchKey,dw))
#define IDocHostUIHandler2_GetDropTarget(This,pDropTarget,ppDropTarget) \
    ((This)->lpVtbl->GetDropTarget(This,pDropTarget,ppDropTarget))
#define IDocHostUIHandler2_GetExternal(This,ppDispatch) \
    ((This)->lpVtbl->GetExternal(This,ppDispatch))
#define IDocHostUIHandler2_TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) \
    ((This)->lpVtbl->TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut))
#define IDocHostUIHandler2_FilterDataObject(This,pDO,ppDORet) \
    ((This)->lpVtbl->FilterDataObject(This,pDO,ppDORet))
/*** IDocHostUIHandler2 methods ***/
#define IDocHostUIHandler2_GetOverrideKeyPath(This,pchKey,dw) \
    ((This)->lpVtbl->GetOverrideKeyPath(This,pchKey,dw))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDocHostUIHandler2_INTERFACE_DEFINED__ */

DEFINE_GUID(CGID_DocHostCommandHandler,0xf38bc242,0xb950,0x11d1,0x89,0x18,0x00,0xc0,0x4f,0xc2,0xc8,0x36);

/*****************************************************************************
 * ICustomDoc interface
 */
#ifndef __ICustomDoc_INTERFACE_DEFINED__
#define __ICustomDoc_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICustomDoc;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICustomDocVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICustomDoc *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICustomDoc *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICustomDoc *This);

    /*** ICustomDoc methods ***/
    HRESULT (STDMETHODCALLTYPE *SetUIHandler)(
        ICustomDoc *This,
        IDocHostUIHandler *pUIHandler);

    END_INTERFACE
} ICustomDocVtbl;

interface ICustomDoc {
    CONST_VTBL ICustomDocVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICustomDoc_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICustomDoc_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICustomDoc_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICustomDoc methods ***/
#define ICustomDoc_SetUIHandler(This,pUIHandler) \
    ((This)->lpVtbl->SetUIHandler(This,pUIHandler))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICustomDoc_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDocHostShowUI interface
 */
#ifndef __IDocHostShowUI_INTERFACE_DEFINED__
#define __IDocHostShowUI_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDocHostShowUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDocHostShowUIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocHostShowUI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocHostShowUI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocHostShowUI *This);

    /*** IDocHostShowUI methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowMessage)(
        IDocHostShowUI *This,
        HWND hwnd,
        LPOLESTR lpstrText,
        LPOLESTR lpstrCaption,
        DWORD dwType,
        LPOLESTR lpstrHelpFile,
        DWORD dwHelpContext,
        LRESULT *plResult);

    HRESULT (STDMETHODCALLTYPE *ShowHelp)(
        IDocHostShowUI *This,
        HWND hwnd,
        LPOLESTR pszHelpFile,
        UINT uCommand,
        DWORD dwData,
        POINT ptMouse,
        IDispatch *pDispatchObjectHit);

    END_INTERFACE
} IDocHostShowUIVtbl;

interface IDocHostShowUI {
    CONST_VTBL IDocHostShowUIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDocHostShowUI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDocHostShowUI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDocHostShowUI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDocHostShowUI methods ***/
#define IDocHostShowUI_ShowMessage(This,hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext,plResult) \
    ((This)->lpVtbl->ShowMessage(This,hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext,plResult))
#define IDocHostShowUI_ShowHelp(This,hwnd,pszHelpFile,uCommand,dwData,ptMouse,pDispatchObjectHit) \
    ((This)->lpVtbl->ShowHelp(This,hwnd,pszHelpFile,uCommand,dwData,ptMouse,pDispatchObjectHit))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDocHostShowUI_INTERFACE_DEFINED__ */

#define IClassFactory3      IClassFactoryEx
#define IID_IClassFactory3  IID_IClassFactoryEx

/*****************************************************************************
 * IClassFactoryEx interface
 */
#ifndef __IClassFactoryEx_INTERFACE_DEFINED__
#define __IClassFactoryEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IClassFactoryEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IClassFactoryExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactoryEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactoryEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactoryEx *This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactoryEx *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactoryEx *This,
        BOOL fLock);

    /*** IClassFactoryEx methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstanceWithContext)(
        IClassFactoryEx *This,
        IUnknown *punkContext,
        IUnknown *punkOuter,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IClassFactoryExVtbl;

interface IClassFactoryEx {
    CONST_VTBL IClassFactoryExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClassFactoryEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IClassFactoryEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IClassFactoryEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IClassFactory methods ***/
#define IClassFactoryEx_CreateInstance(This,pUnkOuter,riid,ppvObject) \
    ((This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject))
#define IClassFactoryEx_LockServer(This,fLock) \
    ((This)->lpVtbl->LockServer(This,fLock))
/*** IClassFactoryEx methods ***/
#define IClassFactoryEx_CreateInstanceWithContext(This,punkContext,punkOuter,riid,ppv) \
    ((This)->lpVtbl->CreateInstanceWithContext(This,punkContext,punkOuter,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IClassFactoryEx_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IHTMLOMWindowServices interface
 */
#ifndef __IHTMLOMWindowServices_INTERFACE_DEFINED__
#define __IHTMLOMWindowServices_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHTMLOMWindowServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHTMLOMWindowServicesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHTMLOMWindowServices *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHTMLOMWindowServices *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHTMLOMWindowServices *This);

    /*** IHTMLOMWindowServices methods ***/
    HRESULT (STDMETHODCALLTYPE *moveTo)(
        IHTMLOMWindowServices *This,
        LONG x,
        LONG y);

    HRESULT (STDMETHODCALLTYPE *moveBy)(
        IHTMLOMWindowServices *This,
        LONG x,
        LONG y);

    HRESULT (STDMETHODCALLTYPE *resizeTo)(
        IHTMLOMWindowServices *This,
        LONG x,
        LONG y);

    HRESULT (STDMETHODCALLTYPE *resizeBy)(
        IHTMLOMWindowServices *This,
        LONG x,
        LONG y);

    END_INTERFACE
} IHTMLOMWindowServicesVtbl;

interface IHTMLOMWindowServices {
    CONST_VTBL IHTMLOMWindowServicesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHTMLOMWindowServices_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHTMLOMWindowServices_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHTMLOMWindowServices_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHTMLOMWindowServices methods ***/
#define IHTMLOMWindowServices_moveTo(This,x,y) \
    ((This)->lpVtbl->moveTo(This,x,y))
#define IHTMLOMWindowServices_moveBy(This,x,y) \
    ((This)->lpVtbl->moveBy(This,x,y))
#define IHTMLOMWindowServices_resizeTo(This,x,y) \
    ((This)->lpVtbl->resizeTo(This,x,y))
#define IHTMLOMWindowServices_resizeBy(This,x,y) \
    ((This)->lpVtbl->resizeBy(This,x,y))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHTMLOMWindowServices_INTERFACE_DEFINED__ */

#define SID_SHTMLOMWindowServices  IID_IHTMLOMWindowServices

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __mshtmhst_h__ */
