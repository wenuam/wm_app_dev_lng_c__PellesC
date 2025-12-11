/* Generated from exdisp.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __exdisp_h__
#define __exdisp_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IWebBrowser_FWD_DEFINED__
#define __IWebBrowser_FWD_DEFINED__
typedef interface IWebBrowser IWebBrowser;
#endif /* __IWebBrowser_FWD_DEFINED__ */

#ifndef __DWebBrowserEvents_FWD_DEFINED__
#define __DWebBrowserEvents_FWD_DEFINED__
typedef interface DWebBrowserEvents DWebBrowserEvents;
#endif /* __DWebBrowserEvents_FWD_DEFINED__ */

#ifndef __IWebBrowserApp_FWD_DEFINED__
#define __IWebBrowserApp_FWD_DEFINED__
typedef interface IWebBrowserApp IWebBrowserApp;
#endif /* __IWebBrowserApp_FWD_DEFINED__ */

#ifndef __IWebBrowser2_FWD_DEFINED__
#define __IWebBrowser2_FWD_DEFINED__
typedef interface IWebBrowser2 IWebBrowser2;
#endif /* __IWebBrowser2_FWD_DEFINED__ */

#ifndef __DWebBrowserEvents2_FWD_DEFINED__
#define __DWebBrowserEvents2_FWD_DEFINED__
typedef interface DWebBrowserEvents2 DWebBrowserEvents2;
#endif /* __DWebBrowserEvents2_FWD_DEFINED__ */

#ifndef __WebBrowser_V1_FWD_DEFINED__
#define __WebBrowser_V1_FWD_DEFINED__
typedef struct WebBrowser_V1 WebBrowser_V1;
#endif /* __WebBrowser_V1_FWD_DEFINED__ */

#ifndef __WebBrowser_FWD_DEFINED__
#define __WebBrowser_FWD_DEFINED__
typedef struct WebBrowser WebBrowser;
#endif /* __WebBrowser_FWD_DEFINED__ */

#ifndef __InternetExplorer_FWD_DEFINED__
#define __InternetExplorer_FWD_DEFINED__
typedef struct InternetExplorer InternetExplorer;
#endif /* __InternetExplorer_FWD_DEFINED__ */

#ifndef __InternetExplorerMedium_FWD_DEFINED__
#define __InternetExplorerMedium_FWD_DEFINED__
typedef struct InternetExplorerMedium InternetExplorerMedium;
#endif /* __InternetExplorerMedium_FWD_DEFINED__ */

#ifndef __ShellBrowserWindow_FWD_DEFINED__
#define __ShellBrowserWindow_FWD_DEFINED__
typedef struct ShellBrowserWindow ShellBrowserWindow;
#endif /* __ShellBrowserWindow_FWD_DEFINED__ */

#ifndef __DShellWindowsEvents_FWD_DEFINED__
#define __DShellWindowsEvents_FWD_DEFINED__
typedef interface DShellWindowsEvents DShellWindowsEvents;
#endif /* __DShellWindowsEvents_FWD_DEFINED__ */

#ifndef __IShellWindows_FWD_DEFINED__
#define __IShellWindows_FWD_DEFINED__
typedef interface IShellWindows IShellWindows;
#endif /* __IShellWindows_FWD_DEFINED__ */

#ifndef __ShellWindows_FWD_DEFINED__
#define __ShellWindows_FWD_DEFINED__
typedef struct ShellWindows ShellWindows;
#endif /* __ShellWindows_FWD_DEFINED__ */

#ifndef __IShellUIHelper_FWD_DEFINED__
#define __IShellUIHelper_FWD_DEFINED__
typedef interface IShellUIHelper IShellUIHelper;
#endif /* __IShellUIHelper_FWD_DEFINED__ */

#ifndef __IShellUIHelper2_FWD_DEFINED__
#define __IShellUIHelper2_FWD_DEFINED__
typedef interface IShellUIHelper2 IShellUIHelper2;
#endif /* __IShellUIHelper2_FWD_DEFINED__ */

#ifndef __IShellUIHelper3_FWD_DEFINED__
#define __IShellUIHelper3_FWD_DEFINED__
typedef interface IShellUIHelper3 IShellUIHelper3;
#endif /* __IShellUIHelper3_FWD_DEFINED__ */

#ifndef __IShellUIHelper4_FWD_DEFINED__
#define __IShellUIHelper4_FWD_DEFINED__
typedef interface IShellUIHelper4 IShellUIHelper4;
#endif /* __IShellUIHelper4_FWD_DEFINED__ */

#ifndef __IShellUIHelper5_FWD_DEFINED__
#define __IShellUIHelper5_FWD_DEFINED__
typedef interface IShellUIHelper5 IShellUIHelper5;
#endif /* __IShellUIHelper5_FWD_DEFINED__ */

#ifndef __IShellUIHelper6_FWD_DEFINED__
#define __IShellUIHelper6_FWD_DEFINED__
typedef interface IShellUIHelper6 IShellUIHelper6;
#endif /* __IShellUIHelper6_FWD_DEFINED__ */

#ifndef __IShellUIHelper7_FWD_DEFINED__
#define __IShellUIHelper7_FWD_DEFINED__
typedef interface IShellUIHelper7 IShellUIHelper7;
#endif /* __IShellUIHelper7_FWD_DEFINED__ */

#ifndef __IShellUIHelper8_FWD_DEFINED__
#define __IShellUIHelper8_FWD_DEFINED__
typedef interface IShellUIHelper8 IShellUIHelper8;
#endif /* __IShellUIHelper8_FWD_DEFINED__ */

#ifndef __IShellUIHelper9_FWD_DEFINED__
#define __IShellUIHelper9_FWD_DEFINED__
typedef interface IShellUIHelper9 IShellUIHelper9;
#endif /* __IShellUIHelper9_FWD_DEFINED__ */

#ifndef __ShellUIHelper_FWD_DEFINED__
#define __ShellUIHelper_FWD_DEFINED__
typedef struct ShellUIHelper ShellUIHelper;
#endif /* __ShellUIHelper_FWD_DEFINED__ */

#ifndef __DShellNameSpaceEvents_FWD_DEFINED__
#define __DShellNameSpaceEvents_FWD_DEFINED__
typedef interface DShellNameSpaceEvents DShellNameSpaceEvents;
#endif /* __DShellNameSpaceEvents_FWD_DEFINED__ */

#ifndef __IShellFavoritesNameSpace_FWD_DEFINED__
#define __IShellFavoritesNameSpace_FWD_DEFINED__
typedef interface IShellFavoritesNameSpace IShellFavoritesNameSpace;
#endif /* __IShellFavoritesNameSpace_FWD_DEFINED__ */

#ifndef __IShellNameSpace_FWD_DEFINED__
#define __IShellNameSpace_FWD_DEFINED__
typedef interface IShellNameSpace IShellNameSpace;
#endif /* __IShellNameSpace_FWD_DEFINED__ */

#ifndef __ShellNameSpace_FWD_DEFINED__
#define __ShellNameSpace_FWD_DEFINED__
typedef struct ShellNameSpace ShellNameSpace;
#endif /* __ShellNameSpace_FWD_DEFINED__ */

#ifndef __IScriptErrorList_FWD_DEFINED__
#define __IScriptErrorList_FWD_DEFINED__
typedef interface IScriptErrorList IScriptErrorList;
#endif /* __IScriptErrorList_FWD_DEFINED__ */

#ifndef __CScriptErrorList_FWD_DEFINED__
#define __CScriptErrorList_FWD_DEFINED__
typedef struct CScriptErrorList CScriptErrorList;
#endif /* __CScriptErrorList_FWD_DEFINED__ */

/* Headers for imported files */

#include "ocidl.h"
#include "docobj.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define SID_SkipHung IID_IEnumVARIANT

#ifndef __SHDocVw_LIBRARY_DEFINED__
#define __SHDocVw_LIBRARY_DEFINED__


/*****************************************************************************
 * IWebBrowser interface
 */
#ifndef __IWebBrowser_INTERFACE_DEFINED__
#define __IWebBrowser_INTERFACE_DEFINED__

typedef enum BrowserNavConstants {
    navOpenInNewWindow = 0x1,
    navNoHistory = 0x2,
    navNoReadFromCache = 0x4,
    navNoWriteToCache = 0x8,
    navAllowAutosearch = 0x10,
    navBrowserBar = 0x20,
    navHyperlink = 0x40,
    navEnforceRestricted = 0x80,
    navNewWindowsManaged = 0x100,
    navUntrustedForDownload = 0x200,
    navTrustedForActiveX = 0x400,
    navOpenInNewTab = 0x800,
    navOpenInBackgroundTab = 0x1000,
    navKeepWordWheelText = 0x2000,
    navVirtualTab = 0x4000,
    navBlockRedirectsXDomain = 0x8000,
    navOpenNewForegroundTab = 0x10000,
    navTravelLogScreenshot = 0x20000,
    navDeferUnload = 0x40000,
    navSpeculative = 0x80000,
    navSuggestNewWindow = 0x100000,
    navSuggestNewTab = 0x200000,
    navReserved1 = 0x400000,
    navHomepageNavigate = 0x800000,
    navRefresh = 0x1000000,
    navHostNavigation = 0x2000000,
    navReserved2 = 0x4000000,
    navReserved3 = 0x8000000,
    navReserved4 = 0x10000000,
    navReserved5 = 0x20000000,
    navReserved6 = 0x40000000,
    navReserved7 = 0x80000000
} BrowserNavConstants;

//;begin_internal
#define navUserInitiatedAction navReserved1
#define navDisableDownloadSave navReserved2
#define navServerRedirectedVtabSwitch navReserved3
#define navVtabSwitchNotUserInitiatedAction navReserved4
#define navCheckDontShowNeedIE navReserved5
#define navCheckDontShowNeedHVSI navReserved6
#define navCheckDontShowHVSINeedHost navReserved7
//;end_internal

typedef enum RefreshConstants {
    REFRESH_NORMAL = 0,
    REFRESH_IFEXPIRED = 1,
    REFRESH_COMPLETELY = 3
} RefreshConstants;

EXTERN_C const IID IID_IWebBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWebBrowserVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWebBrowser *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWebBrowser *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWebBrowser *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IWebBrowser *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IWebBrowser *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IWebBrowser *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IWebBrowser *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IWebBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *GoBack)(
        IWebBrowser *This);

    HRESULT (STDMETHODCALLTYPE *GoForward)(
        IWebBrowser *This);

    HRESULT (STDMETHODCALLTYPE *GoHome)(
        IWebBrowser *This);

    HRESULT (STDMETHODCALLTYPE *GoSearch)(
        IWebBrowser *This);

    HRESULT (STDMETHODCALLTYPE *Navigate)(
        IWebBrowser *This,
        BSTR URL,
        VARIANT *Flags,
        VARIANT *TargetFrameName,
        VARIANT *PostData,
        VARIANT *Headers);

    HRESULT (STDMETHODCALLTYPE *Refresh)(
        IWebBrowser *This);

    HRESULT (STDMETHODCALLTYPE *Refresh2)(
        IWebBrowser *This,
        VARIANT *Level);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IWebBrowser *This);

    HRESULT (STDMETHODCALLTYPE *get_Application)(
        IWebBrowser *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Parent)(
        IWebBrowser *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Container)(
        IWebBrowser *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Document)(
        IWebBrowser *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_TopLevelContainer)(
        IWebBrowser *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *get_Type)(
        IWebBrowser *This,
        BSTR *Type);

    HRESULT (STDMETHODCALLTYPE *get_Left)(
        IWebBrowser *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Left)(
        IWebBrowser *This,
        long Left);

    HRESULT (STDMETHODCALLTYPE *get_Top)(
        IWebBrowser *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Top)(
        IWebBrowser *This,
        long Top);

    HRESULT (STDMETHODCALLTYPE *get_Width)(
        IWebBrowser *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Width)(
        IWebBrowser *This,
        long Width);

    HRESULT (STDMETHODCALLTYPE *get_Height)(
        IWebBrowser *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Height)(
        IWebBrowser *This,
        long Height);

    HRESULT (STDMETHODCALLTYPE *get_LocationName)(
        IWebBrowser *This,
        BSTR *LocationName);

    HRESULT (STDMETHODCALLTYPE *get_LocationURL)(
        IWebBrowser *This,
        BSTR *LocationURL);

    HRESULT (STDMETHODCALLTYPE *get_Busy)(
        IWebBrowser *This,
        VARIANT_BOOL *pBool);

    END_INTERFACE
} IWebBrowserVtbl;

interface IWebBrowser {
    CONST_VTBL IWebBrowserVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWebBrowser_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWebBrowser_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWebBrowser_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IWebBrowser_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IWebBrowser_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IWebBrowser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IWebBrowser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IWebBrowser methods ***/
#define IWebBrowser_GoBack(This) \
    ((This)->lpVtbl->GoBack(This))
#define IWebBrowser_GoForward(This) \
    ((This)->lpVtbl->GoForward(This))
#define IWebBrowser_GoHome(This) \
    ((This)->lpVtbl->GoHome(This))
#define IWebBrowser_GoSearch(This) \
    ((This)->lpVtbl->GoSearch(This))
#define IWebBrowser_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) \
    ((This)->lpVtbl->Navigate(This,URL,Flags,TargetFrameName,PostData,Headers))
#define IWebBrowser_Refresh(This) \
    ((This)->lpVtbl->Refresh(This))
#define IWebBrowser_Refresh2(This,Level) \
    ((This)->lpVtbl->Refresh2(This,Level))
#define IWebBrowser_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IWebBrowser_get_Application(This,ppDisp) \
    ((This)->lpVtbl->get_Application(This,ppDisp))
#define IWebBrowser_get_Parent(This,ppDisp) \
    ((This)->lpVtbl->get_Parent(This,ppDisp))
#define IWebBrowser_get_Container(This,ppDisp) \
    ((This)->lpVtbl->get_Container(This,ppDisp))
#define IWebBrowser_get_Document(This,ppDisp) \
    ((This)->lpVtbl->get_Document(This,ppDisp))
#define IWebBrowser_get_TopLevelContainer(This,pBool) \
    ((This)->lpVtbl->get_TopLevelContainer(This,pBool))
#define IWebBrowser_get_Type(This,Type) \
    ((This)->lpVtbl->get_Type(This,Type))
#define IWebBrowser_get_Left(This,pl) \
    ((This)->lpVtbl->get_Left(This,pl))
#define IWebBrowser_put_Left(This,Left) \
    ((This)->lpVtbl->put_Left(This,Left))
#define IWebBrowser_get_Top(This,pl) \
    ((This)->lpVtbl->get_Top(This,pl))
#define IWebBrowser_put_Top(This,Top) \
    ((This)->lpVtbl->put_Top(This,Top))
#define IWebBrowser_get_Width(This,pl) \
    ((This)->lpVtbl->get_Width(This,pl))
#define IWebBrowser_put_Width(This,Width) \
    ((This)->lpVtbl->put_Width(This,Width))
#define IWebBrowser_get_Height(This,pl) \
    ((This)->lpVtbl->get_Height(This,pl))
#define IWebBrowser_put_Height(This,Height) \
    ((This)->lpVtbl->put_Height(This,Height))
#define IWebBrowser_get_LocationName(This,LocationName) \
    ((This)->lpVtbl->get_LocationName(This,LocationName))
#define IWebBrowser_get_LocationURL(This,LocationURL) \
    ((This)->lpVtbl->get_LocationURL(This,LocationURL))
#define IWebBrowser_get_Busy(This,pBool) \
    ((This)->lpVtbl->get_Busy(This,pBool))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWebBrowser_INTERFACE_DEFINED__ */

/*****************************************************************************
 * DWebBrowserEvents dispinterface
 */
#ifndef __DWebBrowserEvents_DISPINTERFACE_DEFINED__
#define __DWebBrowserEvents_DISPINTERFACE_DEFINED__

EXTERN_C const IID DIID_DWebBrowserEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct DWebBrowserEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        DWebBrowserEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        DWebBrowserEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        DWebBrowserEvents *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        DWebBrowserEvents *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        DWebBrowserEvents *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        DWebBrowserEvents *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        DWebBrowserEvents *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    END_INTERFACE
} DWebBrowserEventsVtbl;

interface DWebBrowserEvents {
    CONST_VTBL DWebBrowserEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define DWebBrowserEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define DWebBrowserEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define DWebBrowserEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define DWebBrowserEvents_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define DWebBrowserEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define DWebBrowserEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define DWebBrowserEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __DWebBrowserEvents_DISPINTERFACE_DEFINED__ */

typedef enum CommandStateChangeConstants {
    CSC_UPDATECOMMANDS = (int)0xffffffff,
    CSC_NAVIGATEFORWARD = 0x1,
    CSC_NAVIGATEBACK = 0x2
} CommandStateChangeConstants;

/*****************************************************************************
 * IWebBrowserApp interface
 */
#ifndef __IWebBrowserApp_INTERFACE_DEFINED__
#define __IWebBrowserApp_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWebBrowserApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWebBrowserAppVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWebBrowserApp *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWebBrowserApp *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWebBrowserApp *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IWebBrowserApp *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IWebBrowserApp *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IWebBrowserApp *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IWebBrowserApp *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IWebBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *GoBack)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *GoForward)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *GoHome)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *GoSearch)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *Navigate)(
        IWebBrowserApp *This,
        BSTR URL,
        VARIANT *Flags,
        VARIANT *TargetFrameName,
        VARIANT *PostData,
        VARIANT *Headers);

    HRESULT (STDMETHODCALLTYPE *Refresh)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *Refresh2)(
        IWebBrowserApp *This,
        VARIANT *Level);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *get_Application)(
        IWebBrowserApp *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Parent)(
        IWebBrowserApp *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Container)(
        IWebBrowserApp *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Document)(
        IWebBrowserApp *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_TopLevelContainer)(
        IWebBrowserApp *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *get_Type)(
        IWebBrowserApp *This,
        BSTR *Type);

    HRESULT (STDMETHODCALLTYPE *get_Left)(
        IWebBrowserApp *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Left)(
        IWebBrowserApp *This,
        long Left);

    HRESULT (STDMETHODCALLTYPE *get_Top)(
        IWebBrowserApp *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Top)(
        IWebBrowserApp *This,
        long Top);

    HRESULT (STDMETHODCALLTYPE *get_Width)(
        IWebBrowserApp *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Width)(
        IWebBrowserApp *This,
        long Width);

    HRESULT (STDMETHODCALLTYPE *get_Height)(
        IWebBrowserApp *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Height)(
        IWebBrowserApp *This,
        long Height);

    HRESULT (STDMETHODCALLTYPE *get_LocationName)(
        IWebBrowserApp *This,
        BSTR *LocationName);

    HRESULT (STDMETHODCALLTYPE *get_LocationURL)(
        IWebBrowserApp *This,
        BSTR *LocationURL);

    HRESULT (STDMETHODCALLTYPE *get_Busy)(
        IWebBrowserApp *This,
        VARIANT_BOOL *pBool);

    /*** IWebBrowserApp methods ***/
    HRESULT (STDMETHODCALLTYPE *Quit)(
        IWebBrowserApp *This);

    HRESULT (STDMETHODCALLTYPE *ClientToWindow)(
        IWebBrowserApp *This,
        int *pcx,
        int *pcy);

    HRESULT (STDMETHODCALLTYPE *PutProperty)(
        IWebBrowserApp *This,
        BSTR Property,
        VARIANT vtValue);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IWebBrowserApp *This,
        BSTR Property,
        VARIANT *pvtValue);

    HRESULT (STDMETHODCALLTYPE *get_Name)(
        IWebBrowserApp *This,
        BSTR *Name);

    HRESULT (STDMETHODCALLTYPE *get_HWND)(
        IWebBrowserApp *This,
        SHANDLE_PTR *pHWND);

    HRESULT (STDMETHODCALLTYPE *get_FullName)(
        IWebBrowserApp *This,
        BSTR *FullName);

    HRESULT (STDMETHODCALLTYPE *get_Path)(
        IWebBrowserApp *This,
        BSTR *Path);

    HRESULT (STDMETHODCALLTYPE *get_Visible)(
        IWebBrowserApp *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *put_Visible)(
        IWebBrowserApp *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_StatusBar)(
        IWebBrowserApp *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *put_StatusBar)(
        IWebBrowserApp *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_StatusText)(
        IWebBrowserApp *This,
        BSTR *StatusText);

    HRESULT (STDMETHODCALLTYPE *put_StatusText)(
        IWebBrowserApp *This,
        BSTR StatusText);

    HRESULT (STDMETHODCALLTYPE *get_ToolBar)(
        IWebBrowserApp *This,
        int *Value);

    HRESULT (STDMETHODCALLTYPE *put_ToolBar)(
        IWebBrowserApp *This,
        int Value);

    HRESULT (STDMETHODCALLTYPE *get_MenuBar)(
        IWebBrowserApp *This,
        VARIANT_BOOL *Value);

    HRESULT (STDMETHODCALLTYPE *put_MenuBar)(
        IWebBrowserApp *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_FullScreen)(
        IWebBrowserApp *This,
        VARIANT_BOOL *pbFullScreen);

    HRESULT (STDMETHODCALLTYPE *put_FullScreen)(
        IWebBrowserApp *This,
        VARIANT_BOOL bFullScreen);

    END_INTERFACE
} IWebBrowserAppVtbl;

interface IWebBrowserApp {
    CONST_VTBL IWebBrowserAppVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWebBrowserApp_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWebBrowserApp_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWebBrowserApp_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IWebBrowserApp_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IWebBrowserApp_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IWebBrowserApp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IWebBrowserApp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IWebBrowser methods ***/
#define IWebBrowserApp_GoBack(This) \
    ((This)->lpVtbl->GoBack(This))
#define IWebBrowserApp_GoForward(This) \
    ((This)->lpVtbl->GoForward(This))
#define IWebBrowserApp_GoHome(This) \
    ((This)->lpVtbl->GoHome(This))
#define IWebBrowserApp_GoSearch(This) \
    ((This)->lpVtbl->GoSearch(This))
#define IWebBrowserApp_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) \
    ((This)->lpVtbl->Navigate(This,URL,Flags,TargetFrameName,PostData,Headers))
#define IWebBrowserApp_Refresh(This) \
    ((This)->lpVtbl->Refresh(This))
#define IWebBrowserApp_Refresh2(This,Level) \
    ((This)->lpVtbl->Refresh2(This,Level))
#define IWebBrowserApp_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IWebBrowserApp_get_Application(This,ppDisp) \
    ((This)->lpVtbl->get_Application(This,ppDisp))
#define IWebBrowserApp_get_Parent(This,ppDisp) \
    ((This)->lpVtbl->get_Parent(This,ppDisp))
#define IWebBrowserApp_get_Container(This,ppDisp) \
    ((This)->lpVtbl->get_Container(This,ppDisp))
#define IWebBrowserApp_get_Document(This,ppDisp) \
    ((This)->lpVtbl->get_Document(This,ppDisp))
#define IWebBrowserApp_get_TopLevelContainer(This,pBool) \
    ((This)->lpVtbl->get_TopLevelContainer(This,pBool))
#define IWebBrowserApp_get_Type(This,Type) \
    ((This)->lpVtbl->get_Type(This,Type))
#define IWebBrowserApp_get_Left(This,pl) \
    ((This)->lpVtbl->get_Left(This,pl))
#define IWebBrowserApp_put_Left(This,Left) \
    ((This)->lpVtbl->put_Left(This,Left))
#define IWebBrowserApp_get_Top(This,pl) \
    ((This)->lpVtbl->get_Top(This,pl))
#define IWebBrowserApp_put_Top(This,Top) \
    ((This)->lpVtbl->put_Top(This,Top))
#define IWebBrowserApp_get_Width(This,pl) \
    ((This)->lpVtbl->get_Width(This,pl))
#define IWebBrowserApp_put_Width(This,Width) \
    ((This)->lpVtbl->put_Width(This,Width))
#define IWebBrowserApp_get_Height(This,pl) \
    ((This)->lpVtbl->get_Height(This,pl))
#define IWebBrowserApp_put_Height(This,Height) \
    ((This)->lpVtbl->put_Height(This,Height))
#define IWebBrowserApp_get_LocationName(This,LocationName) \
    ((This)->lpVtbl->get_LocationName(This,LocationName))
#define IWebBrowserApp_get_LocationURL(This,LocationURL) \
    ((This)->lpVtbl->get_LocationURL(This,LocationURL))
#define IWebBrowserApp_get_Busy(This,pBool) \
    ((This)->lpVtbl->get_Busy(This,pBool))
/*** IWebBrowserApp methods ***/
#define IWebBrowserApp_Quit(This) \
    ((This)->lpVtbl->Quit(This))
#define IWebBrowserApp_ClientToWindow(This,pcx,pcy) \
    ((This)->lpVtbl->ClientToWindow(This,pcx,pcy))
#define IWebBrowserApp_PutProperty(This,Property,vtValue) \
    ((This)->lpVtbl->PutProperty(This,Property,vtValue))
#define IWebBrowserApp_GetProperty(This,Property,pvtValue) \
    ((This)->lpVtbl->GetProperty(This,Property,pvtValue))
#define IWebBrowserApp_get_Name(This,Name) \
    ((This)->lpVtbl->get_Name(This,Name))
#define IWebBrowserApp_get_HWND(This,pHWND) \
    ((This)->lpVtbl->get_HWND(This,pHWND))
#define IWebBrowserApp_get_FullName(This,FullName) \
    ((This)->lpVtbl->get_FullName(This,FullName))
#define IWebBrowserApp_get_Path(This,Path) \
    ((This)->lpVtbl->get_Path(This,Path))
#define IWebBrowserApp_get_Visible(This,pBool) \
    ((This)->lpVtbl->get_Visible(This,pBool))
#define IWebBrowserApp_put_Visible(This,Value) \
    ((This)->lpVtbl->put_Visible(This,Value))
#define IWebBrowserApp_get_StatusBar(This,pBool) \
    ((This)->lpVtbl->get_StatusBar(This,pBool))
#define IWebBrowserApp_put_StatusBar(This,Value) \
    ((This)->lpVtbl->put_StatusBar(This,Value))
#define IWebBrowserApp_get_StatusText(This,StatusText) \
    ((This)->lpVtbl->get_StatusText(This,StatusText))
#define IWebBrowserApp_put_StatusText(This,StatusText) \
    ((This)->lpVtbl->put_StatusText(This,StatusText))
#define IWebBrowserApp_get_ToolBar(This,Value) \
    ((This)->lpVtbl->get_ToolBar(This,Value))
#define IWebBrowserApp_put_ToolBar(This,Value) \
    ((This)->lpVtbl->put_ToolBar(This,Value))
#define IWebBrowserApp_get_MenuBar(This,Value) \
    ((This)->lpVtbl->get_MenuBar(This,Value))
#define IWebBrowserApp_put_MenuBar(This,Value) \
    ((This)->lpVtbl->put_MenuBar(This,Value))
#define IWebBrowserApp_get_FullScreen(This,pbFullScreen) \
    ((This)->lpVtbl->get_FullScreen(This,pbFullScreen))
#define IWebBrowserApp_put_FullScreen(This,bFullScreen) \
    ((This)->lpVtbl->put_FullScreen(This,bFullScreen))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWebBrowserApp_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWebBrowser2 interface
 */
#ifndef __IWebBrowser2_INTERFACE_DEFINED__
#define __IWebBrowser2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWebBrowser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWebBrowser2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWebBrowser2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWebBrowser2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWebBrowser2 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IWebBrowser2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IWebBrowser2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IWebBrowser2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IWebBrowser2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IWebBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *GoBack)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *GoForward)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *GoHome)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *GoSearch)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *Navigate)(
        IWebBrowser2 *This,
        BSTR URL,
        VARIANT *Flags,
        VARIANT *TargetFrameName,
        VARIANT *PostData,
        VARIANT *Headers);

    HRESULT (STDMETHODCALLTYPE *Refresh)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *Refresh2)(
        IWebBrowser2 *This,
        VARIANT *Level);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *get_Application)(
        IWebBrowser2 *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Parent)(
        IWebBrowser2 *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Container)(
        IWebBrowser2 *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_Document)(
        IWebBrowser2 *This,
        IDispatch **ppDisp);

    HRESULT (STDMETHODCALLTYPE *get_TopLevelContainer)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *get_Type)(
        IWebBrowser2 *This,
        BSTR *Type);

    HRESULT (STDMETHODCALLTYPE *get_Left)(
        IWebBrowser2 *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Left)(
        IWebBrowser2 *This,
        long Left);

    HRESULT (STDMETHODCALLTYPE *get_Top)(
        IWebBrowser2 *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Top)(
        IWebBrowser2 *This,
        long Top);

    HRESULT (STDMETHODCALLTYPE *get_Width)(
        IWebBrowser2 *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Width)(
        IWebBrowser2 *This,
        long Width);

    HRESULT (STDMETHODCALLTYPE *get_Height)(
        IWebBrowser2 *This,
        long *pl);

    HRESULT (STDMETHODCALLTYPE *put_Height)(
        IWebBrowser2 *This,
        long Height);

    HRESULT (STDMETHODCALLTYPE *get_LocationName)(
        IWebBrowser2 *This,
        BSTR *LocationName);

    HRESULT (STDMETHODCALLTYPE *get_LocationURL)(
        IWebBrowser2 *This,
        BSTR *LocationURL);

    HRESULT (STDMETHODCALLTYPE *get_Busy)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pBool);

    /*** IWebBrowserApp methods ***/
    HRESULT (STDMETHODCALLTYPE *Quit)(
        IWebBrowser2 *This);

    HRESULT (STDMETHODCALLTYPE *ClientToWindow)(
        IWebBrowser2 *This,
        int *pcx,
        int *pcy);

    HRESULT (STDMETHODCALLTYPE *PutProperty)(
        IWebBrowser2 *This,
        BSTR Property,
        VARIANT vtValue);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IWebBrowser2 *This,
        BSTR Property,
        VARIANT *pvtValue);

    HRESULT (STDMETHODCALLTYPE *get_Name)(
        IWebBrowser2 *This,
        BSTR *Name);

    HRESULT (STDMETHODCALLTYPE *get_HWND)(
        IWebBrowser2 *This,
        SHANDLE_PTR *pHWND);

    HRESULT (STDMETHODCALLTYPE *get_FullName)(
        IWebBrowser2 *This,
        BSTR *FullName);

    HRESULT (STDMETHODCALLTYPE *get_Path)(
        IWebBrowser2 *This,
        BSTR *Path);

    HRESULT (STDMETHODCALLTYPE *get_Visible)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *put_Visible)(
        IWebBrowser2 *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_StatusBar)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *put_StatusBar)(
        IWebBrowser2 *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_StatusText)(
        IWebBrowser2 *This,
        BSTR *StatusText);

    HRESULT (STDMETHODCALLTYPE *put_StatusText)(
        IWebBrowser2 *This,
        BSTR StatusText);

    HRESULT (STDMETHODCALLTYPE *get_ToolBar)(
        IWebBrowser2 *This,
        int *Value);

    HRESULT (STDMETHODCALLTYPE *put_ToolBar)(
        IWebBrowser2 *This,
        int Value);

    HRESULT (STDMETHODCALLTYPE *get_MenuBar)(
        IWebBrowser2 *This,
        VARIANT_BOOL *Value);

    HRESULT (STDMETHODCALLTYPE *put_MenuBar)(
        IWebBrowser2 *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_FullScreen)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pbFullScreen);

    HRESULT (STDMETHODCALLTYPE *put_FullScreen)(
        IWebBrowser2 *This,
        VARIANT_BOOL bFullScreen);

    /*** IWebBrowser2 methods ***/
    HRESULT (STDMETHODCALLTYPE *Navigate2)(
        IWebBrowser2 *This,
        VARIANT *URL,
        VARIANT *Flags,
        VARIANT *TargetFrameName,
        VARIANT *PostData,
        VARIANT *Headers);

    HRESULT (STDMETHODCALLTYPE *QueryStatusWB)(
        IWebBrowser2 *This,
        OLECMDID cmdID,
        OLECMDF *pcmdf);

    HRESULT (STDMETHODCALLTYPE *ExecWB)(
        IWebBrowser2 *This,
        OLECMDID cmdID,
        OLECMDEXECOPT cmdexecopt,
        VARIANT *pvaIn,
        VARIANT *pvaOut);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserBar)(
        IWebBrowser2 *This,
        VARIANT *pvaClsid,
        VARIANT *pvarShow,
        VARIANT *pvarSize);

    HRESULT (STDMETHODCALLTYPE *get_ReadyState)(
        IWebBrowser2 *This,
        READYSTATE *plReadyState);

    HRESULT (STDMETHODCALLTYPE *get_Offline)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pbOffline);

    HRESULT (STDMETHODCALLTYPE *put_Offline)(
        IWebBrowser2 *This,
        VARIANT_BOOL bOffline);

    HRESULT (STDMETHODCALLTYPE *get_Silent)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pbSilent);

    HRESULT (STDMETHODCALLTYPE *put_Silent)(
        IWebBrowser2 *This,
        VARIANT_BOOL bSilent);

    HRESULT (STDMETHODCALLTYPE *get_RegisterAsBrowser)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pbRegister);

    HRESULT (STDMETHODCALLTYPE *put_RegisterAsBrowser)(
        IWebBrowser2 *This,
        VARIANT_BOOL bRegister);

    HRESULT (STDMETHODCALLTYPE *get_RegisterAsDropTarget)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pbRegister);

    HRESULT (STDMETHODCALLTYPE *put_RegisterAsDropTarget)(
        IWebBrowser2 *This,
        VARIANT_BOOL bRegister);

    HRESULT (STDMETHODCALLTYPE *get_TheaterMode)(
        IWebBrowser2 *This,
        VARIANT_BOOL *pbRegister);

    HRESULT (STDMETHODCALLTYPE *put_TheaterMode)(
        IWebBrowser2 *This,
        VARIANT_BOOL bRegister);

    HRESULT (STDMETHODCALLTYPE *get_AddressBar)(
        IWebBrowser2 *This,
        VARIANT_BOOL *Value);

    HRESULT (STDMETHODCALLTYPE *put_AddressBar)(
        IWebBrowser2 *This,
        VARIANT_BOOL Value);

    HRESULT (STDMETHODCALLTYPE *get_Resizable)(
        IWebBrowser2 *This,
        VARIANT_BOOL *Value);

    HRESULT (STDMETHODCALLTYPE *put_Resizable)(
        IWebBrowser2 *This,
        VARIANT_BOOL Value);

    END_INTERFACE
} IWebBrowser2Vtbl;

interface IWebBrowser2 {
    CONST_VTBL IWebBrowser2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWebBrowser2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWebBrowser2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWebBrowser2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IWebBrowser2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IWebBrowser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IWebBrowser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IWebBrowser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IWebBrowser methods ***/
#define IWebBrowser2_GoBack(This) \
    ((This)->lpVtbl->GoBack(This))
#define IWebBrowser2_GoForward(This) \
    ((This)->lpVtbl->GoForward(This))
#define IWebBrowser2_GoHome(This) \
    ((This)->lpVtbl->GoHome(This))
#define IWebBrowser2_GoSearch(This) \
    ((This)->lpVtbl->GoSearch(This))
#define IWebBrowser2_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) \
    ((This)->lpVtbl->Navigate(This,URL,Flags,TargetFrameName,PostData,Headers))
#define IWebBrowser2_Refresh(This) \
    ((This)->lpVtbl->Refresh(This))
#define IWebBrowser2_Refresh2(This,Level) \
    ((This)->lpVtbl->Refresh2(This,Level))
#define IWebBrowser2_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#define IWebBrowser2_get_Application(This,ppDisp) \
    ((This)->lpVtbl->get_Application(This,ppDisp))
#define IWebBrowser2_get_Parent(This,ppDisp) \
    ((This)->lpVtbl->get_Parent(This,ppDisp))
#define IWebBrowser2_get_Container(This,ppDisp) \
    ((This)->lpVtbl->get_Container(This,ppDisp))
#define IWebBrowser2_get_Document(This,ppDisp) \
    ((This)->lpVtbl->get_Document(This,ppDisp))
#define IWebBrowser2_get_TopLevelContainer(This,pBool) \
    ((This)->lpVtbl->get_TopLevelContainer(This,pBool))
#define IWebBrowser2_get_Type(This,Type) \
    ((This)->lpVtbl->get_Type(This,Type))
#define IWebBrowser2_get_Left(This,pl) \
    ((This)->lpVtbl->get_Left(This,pl))
#define IWebBrowser2_put_Left(This,Left) \
    ((This)->lpVtbl->put_Left(This,Left))
#define IWebBrowser2_get_Top(This,pl) \
    ((This)->lpVtbl->get_Top(This,pl))
#define IWebBrowser2_put_Top(This,Top) \
    ((This)->lpVtbl->put_Top(This,Top))
#define IWebBrowser2_get_Width(This,pl) \
    ((This)->lpVtbl->get_Width(This,pl))
#define IWebBrowser2_put_Width(This,Width) \
    ((This)->lpVtbl->put_Width(This,Width))
#define IWebBrowser2_get_Height(This,pl) \
    ((This)->lpVtbl->get_Height(This,pl))
#define IWebBrowser2_put_Height(This,Height) \
    ((This)->lpVtbl->put_Height(This,Height))
#define IWebBrowser2_get_LocationName(This,LocationName) \
    ((This)->lpVtbl->get_LocationName(This,LocationName))
#define IWebBrowser2_get_LocationURL(This,LocationURL) \
    ((This)->lpVtbl->get_LocationURL(This,LocationURL))
#define IWebBrowser2_get_Busy(This,pBool) \
    ((This)->lpVtbl->get_Busy(This,pBool))
/*** IWebBrowserApp methods ***/
#define IWebBrowser2_Quit(This) \
    ((This)->lpVtbl->Quit(This))
#define IWebBrowser2_ClientToWindow(This,pcx,pcy) \
    ((This)->lpVtbl->ClientToWindow(This,pcx,pcy))
#define IWebBrowser2_PutProperty(This,Property,vtValue) \
    ((This)->lpVtbl->PutProperty(This,Property,vtValue))
#define IWebBrowser2_GetProperty(This,Property,pvtValue) \
    ((This)->lpVtbl->GetProperty(This,Property,pvtValue))
#define IWebBrowser2_get_Name(This,Name) \
    ((This)->lpVtbl->get_Name(This,Name))
#define IWebBrowser2_get_HWND(This,pHWND) \
    ((This)->lpVtbl->get_HWND(This,pHWND))
#define IWebBrowser2_get_FullName(This,FullName) \
    ((This)->lpVtbl->get_FullName(This,FullName))
#define IWebBrowser2_get_Path(This,Path) \
    ((This)->lpVtbl->get_Path(This,Path))
#define IWebBrowser2_get_Visible(This,pBool) \
    ((This)->lpVtbl->get_Visible(This,pBool))
#define IWebBrowser2_put_Visible(This,Value) \
    ((This)->lpVtbl->put_Visible(This,Value))
#define IWebBrowser2_get_StatusBar(This,pBool) \
    ((This)->lpVtbl->get_StatusBar(This,pBool))
#define IWebBrowser2_put_StatusBar(This,Value) \
    ((This)->lpVtbl->put_StatusBar(This,Value))
#define IWebBrowser2_get_StatusText(This,StatusText) \
    ((This)->lpVtbl->get_StatusText(This,StatusText))
#define IWebBrowser2_put_StatusText(This,StatusText) \
    ((This)->lpVtbl->put_StatusText(This,StatusText))
#define IWebBrowser2_get_ToolBar(This,Value) \
    ((This)->lpVtbl->get_ToolBar(This,Value))
#define IWebBrowser2_put_ToolBar(This,Value) \
    ((This)->lpVtbl->put_ToolBar(This,Value))
#define IWebBrowser2_get_MenuBar(This,Value) \
    ((This)->lpVtbl->get_MenuBar(This,Value))
#define IWebBrowser2_put_MenuBar(This,Value) \
    ((This)->lpVtbl->put_MenuBar(This,Value))
#define IWebBrowser2_get_FullScreen(This,pbFullScreen) \
    ((This)->lpVtbl->get_FullScreen(This,pbFullScreen))
#define IWebBrowser2_put_FullScreen(This,bFullScreen) \
    ((This)->lpVtbl->put_FullScreen(This,bFullScreen))
/*** IWebBrowser2 methods ***/
#define IWebBrowser2_Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers) \
    ((This)->lpVtbl->Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers))
#define IWebBrowser2_QueryStatusWB(This,cmdID,pcmdf) \
    ((This)->lpVtbl->QueryStatusWB(This,cmdID,pcmdf))
#define IWebBrowser2_ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut) \
    ((This)->lpVtbl->ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut))
#define IWebBrowser2_ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize) \
    ((This)->lpVtbl->ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize))
#define IWebBrowser2_get_ReadyState(This,plReadyState) \
    ((This)->lpVtbl->get_ReadyState(This,plReadyState))
#define IWebBrowser2_get_Offline(This,pbOffline) \
    ((This)->lpVtbl->get_Offline(This,pbOffline))
#define IWebBrowser2_put_Offline(This,bOffline) \
    ((This)->lpVtbl->put_Offline(This,bOffline))
#define IWebBrowser2_get_Silent(This,pbSilent) \
    ((This)->lpVtbl->get_Silent(This,pbSilent))
#define IWebBrowser2_put_Silent(This,bSilent) \
    ((This)->lpVtbl->put_Silent(This,bSilent))
#define IWebBrowser2_get_RegisterAsBrowser(This,pbRegister) \
    ((This)->lpVtbl->get_RegisterAsBrowser(This,pbRegister))
#define IWebBrowser2_put_RegisterAsBrowser(This,bRegister) \
    ((This)->lpVtbl->put_RegisterAsBrowser(This,bRegister))
#define IWebBrowser2_get_RegisterAsDropTarget(This,pbRegister) \
    ((This)->lpVtbl->get_RegisterAsDropTarget(This,pbRegister))
#define IWebBrowser2_put_RegisterAsDropTarget(This,bRegister) \
    ((This)->lpVtbl->put_RegisterAsDropTarget(This,bRegister))
#define IWebBrowser2_get_TheaterMode(This,pbRegister) \
    ((This)->lpVtbl->get_TheaterMode(This,pbRegister))
#define IWebBrowser2_put_TheaterMode(This,bRegister) \
    ((This)->lpVtbl->put_TheaterMode(This,bRegister))
#define IWebBrowser2_get_AddressBar(This,Value) \
    ((This)->lpVtbl->get_AddressBar(This,Value))
#define IWebBrowser2_put_AddressBar(This,Value) \
    ((This)->lpVtbl->put_AddressBar(This,Value))
#define IWebBrowser2_get_Resizable(This,Value) \
    ((This)->lpVtbl->get_Resizable(This,Value))
#define IWebBrowser2_put_Resizable(This,Value) \
    ((This)->lpVtbl->put_Resizable(This,Value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWebBrowser2_INTERFACE_DEFINED__ */

typedef enum SecureLockIconConstants {
    secureLockIconUnsecure = 0x0,
    secureLockIconMixed = 0x1,
    secureLockIconSecureUnknownBits = 0x2,
    secureLockIconSecure40Bit = 0x3,
    secureLockIconSecure56Bit = 0x4,
    secureLockIconSecureFortezza = 0x5,
    secureLockIconSecure128Bit = 0x6
} SecureLockIconConstants;

typedef enum NewProcessCauseConstants {
    ProtectedModeRedirect = 0x1
} NewProcessCauseConstants;

/*****************************************************************************
 * DWebBrowserEvents2 dispinterface
 */
#ifndef __DWebBrowserEvents2_DISPINTERFACE_DEFINED__
#define __DWebBrowserEvents2_DISPINTERFACE_DEFINED__

EXTERN_C const IID DIID_DWebBrowserEvents2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct DWebBrowserEvents2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        DWebBrowserEvents2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        DWebBrowserEvents2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        DWebBrowserEvents2 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        DWebBrowserEvents2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        DWebBrowserEvents2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        DWebBrowserEvents2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        DWebBrowserEvents2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    END_INTERFACE
} DWebBrowserEvents2Vtbl;

interface DWebBrowserEvents2 {
    CONST_VTBL DWebBrowserEvents2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define DWebBrowserEvents2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define DWebBrowserEvents2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define DWebBrowserEvents2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define DWebBrowserEvents2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define DWebBrowserEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define DWebBrowserEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define DWebBrowserEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __DWebBrowserEvents2_DISPINTERFACE_DEFINED__ */

/*****************************************************************************
 * WebBrowser_V1 coclass
 */

EXTERN_C const CLSID CLSID_WebBrowser_V1;

/*****************************************************************************
 * WebBrowser coclass
 */

EXTERN_C const CLSID CLSID_WebBrowser;

/*****************************************************************************
 * InternetExplorer coclass
 */

EXTERN_C const CLSID CLSID_InternetExplorer;

/*****************************************************************************
 * InternetExplorerMedium coclass
 */

EXTERN_C const CLSID CLSID_InternetExplorerMedium;

/*****************************************************************************
 * ShellBrowserWindow coclass
 */

EXTERN_C const CLSID CLSID_ShellBrowserWindow;

typedef enum ShellWindowTypeConstants {
    SWC_EXPLORER = 0x0,
    SWC_BROWSER = 0x1,
    SWC_3RDPARTY = 0x2,
    SWC_CALLBACK = 0x4,
    SWC_DESKTOP = 0x8
} ShellWindowTypeConstants;

typedef enum ShellWindowFindWindowOptions {
    SWFO_NEEDDISPATCH = 0x1,
    SWFO_INCLUDEPENDING = 0x2,
    SWFO_COOKIEPASSED = 0x4
} ShellWindowFindWindowOptions;

/*****************************************************************************
 * DShellWindowsEvents dispinterface
 */
#ifndef __DShellWindowsEvents_DISPINTERFACE_DEFINED__
#define __DShellWindowsEvents_DISPINTERFACE_DEFINED__

EXTERN_C const IID DIID_DShellWindowsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct DShellWindowsEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        DShellWindowsEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        DShellWindowsEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        DShellWindowsEvents *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        DShellWindowsEvents *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        DShellWindowsEvents *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        DShellWindowsEvents *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        DShellWindowsEvents *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    END_INTERFACE
} DShellWindowsEventsVtbl;

interface DShellWindowsEvents {
    CONST_VTBL DShellWindowsEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define DShellWindowsEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define DShellWindowsEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define DShellWindowsEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define DShellWindowsEvents_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define DShellWindowsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define DShellWindowsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define DShellWindowsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __DShellWindowsEvents_DISPINTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellWindows interface
 */
#ifndef __IShellWindows_INTERFACE_DEFINED__
#define __IShellWindows_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellWindows;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellWindowsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellWindows *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellWindows *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellWindows *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellWindows *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellWindows *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellWindows *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellWindows *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellWindows methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Count)(
        IShellWindows *This,
        long *Count);

    HRESULT (STDMETHODCALLTYPE *Item)(
        IShellWindows *This,
        VARIANT index,
        IDispatch **Folder);

    HRESULT (STDMETHODCALLTYPE *_NewEnum)(
        IShellWindows *This,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *Register)(
        IShellWindows *This,
        IDispatch *pid,
        long hwnd,
        int swClass,
        long *plCookie);

    HRESULT (STDMETHODCALLTYPE *RegisterPending)(
        IShellWindows *This,
        long lThreadId,
        VARIANT *pvarloc,
        VARIANT *pvarlocRoot,
        int swClass,
        long *plCookie);

    HRESULT (STDMETHODCALLTYPE *Revoke)(
        IShellWindows *This,
        long lCookie);

    HRESULT (STDMETHODCALLTYPE *OnNavigate)(
        IShellWindows *This,
        long lCookie,
        VARIANT *pvarLoc);

    HRESULT (STDMETHODCALLTYPE *OnActivated)(
        IShellWindows *This,
        long lCookie,
        VARIANT_BOOL fActive);

    HRESULT (STDMETHODCALLTYPE *FindWindowSW)(
        IShellWindows *This,
        VARIANT *pvarLoc,
        VARIANT *pvarLocRoot,
        int swClass,
        long *phwnd,
        int swfwOptions,
        IDispatch **ppdispOut);

    HRESULT (STDMETHODCALLTYPE *OnCreated)(
        IShellWindows *This,
        long lCookie,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *ProcessAttachDetach)(
        IShellWindows *This,
        VARIANT_BOOL fAttach);

    END_INTERFACE
} IShellWindowsVtbl;

interface IShellWindows {
    CONST_VTBL IShellWindowsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellWindows_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellWindows_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellWindows_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellWindows_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellWindows_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellWindows_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellWindows_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellWindows methods ***/
#define IShellWindows_get_Count(This,Count) \
    ((This)->lpVtbl->get_Count(This,Count))
#define IShellWindows_Item(This,index,Folder) \
    ((This)->lpVtbl->Item(This,index,Folder))
#define IShellWindows__NewEnum(This,ppunk) \
    ((This)->lpVtbl->_NewEnum(This,ppunk))
#define IShellWindows_Register(This,pid,hwnd,swClass,plCookie) \
    ((This)->lpVtbl->Register(This,pid,hwnd,swClass,plCookie))
#define IShellWindows_RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie) \
    ((This)->lpVtbl->RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie))
#define IShellWindows_Revoke(This,lCookie) \
    ((This)->lpVtbl->Revoke(This,lCookie))
#define IShellWindows_OnNavigate(This,lCookie,pvarLoc) \
    ((This)->lpVtbl->OnNavigate(This,lCookie,pvarLoc))
#define IShellWindows_OnActivated(This,lCookie,fActive) \
    ((This)->lpVtbl->OnActivated(This,lCookie,fActive))
#define IShellWindows_FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut) \
    ((This)->lpVtbl->FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut))
#define IShellWindows_OnCreated(This,lCookie,punk) \
    ((This)->lpVtbl->OnCreated(This,lCookie,punk))
#define IShellWindows_ProcessAttachDetach(This,fAttach) \
    ((This)->lpVtbl->ProcessAttachDetach(This,fAttach))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellWindows_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ShellWindows coclass
 */

EXTERN_C const CLSID CLSID_ShellWindows;

/*****************************************************************************
 * IShellUIHelper interface
 */
#ifndef __IShellUIHelper_INTERFACE_DEFINED__
#define __IShellUIHelper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    END_INTERFACE
} IShellUIHelperVtbl;

interface IShellUIHelper {
    CONST_VTBL IShellUIHelperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper2 interface
 */
#ifndef __IShellUIHelper2_INTERFACE_DEFINED__
#define __IShellUIHelper2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper2 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper2 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper2 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper2 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper2 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper2 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper2 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper2 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper2 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper2 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper2 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper2 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper2 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper2 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper2 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper2 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper2 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper2 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper2 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper2 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper2 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper2 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper2 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper2 *This,
        BSTR *pbstrUrl);

    END_INTERFACE
} IShellUIHelper2Vtbl;

interface IShellUIHelper2 {
    CONST_VTBL IShellUIHelper2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper2_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper2_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper2_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper2_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper2_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper2_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper2_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper2_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper2_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper2_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper2_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper2_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper2_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper2_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper2_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper2_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper2_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper2_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper2_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper2_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper2_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper2_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper2_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper2_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper2_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper2_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper2_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper2_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper2_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper3 interface
 */
#ifndef __IShellUIHelper3_INTERFACE_DEFINED__
#define __IShellUIHelper3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper3 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper3 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper3 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper3 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper3 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper3 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper3 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper3 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper3 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper3 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper3 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper3 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper3 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper3 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper3 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper3 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper3 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper3 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper3 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper3 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper3 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper3 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper3 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper3 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper3 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper3 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper3 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper3 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper3 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper3 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper3 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper3 *This);

    END_INTERFACE
} IShellUIHelper3Vtbl;

interface IShellUIHelper3 {
    CONST_VTBL IShellUIHelper3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper3_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper3_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper3_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper3_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper3_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper3_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper3_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper3_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper3_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper3_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper3_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper3_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper3_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper3_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper3_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper3_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper3_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper3_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper3_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper3_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper3_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper3_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper3_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper3_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper3_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper3_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper3_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper3_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper3_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper3_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper3_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper3_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper3_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper3_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper3_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper3_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper3_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper3_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper3_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper3_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper3_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper3_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper3_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper4 interface
 */
#ifndef __IShellUIHelper4_INTERFACE_DEFINED__
#define __IShellUIHelper4_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper4;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper4 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper4 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper4 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper4 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper4 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper4 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper4 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper4 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper4 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper4 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper4 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper4 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper4 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper4 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper4 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper4 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper4 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper4 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper4 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper4 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper4 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper4 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper4 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper4 *This);

    /*** IShellUIHelper4 methods ***/
    HRESULT (STDMETHODCALLTYPE *msIsSiteMode)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfSiteMode);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowThumbBar)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddThumbBarButton)(
        IShellUIHelper4 *This,
        BSTR bstrIconURL,
        BSTR bstrTooltip,
        VARIANT *pvarButtonID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton)(
        IShellUIHelper4 *This,
        VARIANT ButtonID,
        VARIANT_BOOL fEnabled,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *msSiteModeSetIconOverlay)(
        IShellUIHelper4 *This,
        BSTR IconUrl,
        VARIANT *pvarDescription);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearIconOverlay)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *msAddSiteMode)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeCreateJumpList)(
        IShellUIHelper4 *This,
        BSTR bstrHeader);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddJumpListItem)(
        IShellUIHelper4 *This,
        BSTR bstrName,
        BSTR bstrActionUri,
        BSTR bstrIconUri,
        VARIANT *pvarWindowType);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearJumpList)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowJumpList)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddButtonStyle)(
        IShellUIHelper4 *This,
        VARIANT uiButtonID,
        BSTR bstrIconUrl,
        BSTR bstrTooltip,
        VARIANT *pvarStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowButtonStyle)(
        IShellUIHelper4 *This,
        VARIANT uiButtonID,
        VARIANT uiStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeActivate)(
        IShellUIHelper4 *This);

    HRESULT (STDMETHODCALLTYPE *msIsSiteModeFirstRun)(
        IShellUIHelper4 *This,
        VARIANT_BOOL fPreserveState,
        VARIANT *puiFirstRun);

    HRESULT (STDMETHODCALLTYPE *msAddTrackingProtectionList)(
        IShellUIHelper4 *This,
        BSTR URL,
        BSTR bstrFilterName);

    HRESULT (STDMETHODCALLTYPE *msTrackingProtectionEnabled)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *msActiveXFilteringEnabled)(
        IShellUIHelper4 *This,
        VARIANT_BOOL *pfEnabled);

    END_INTERFACE
} IShellUIHelper4Vtbl;

interface IShellUIHelper4 {
    CONST_VTBL IShellUIHelper4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper4_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper4_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper4_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper4_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper4_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper4_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper4_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper4_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper4_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper4_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper4_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper4_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper4_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper4_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper4_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper4_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper4_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper4_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper4_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper4_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper4_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper4_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper4_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper4_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper4_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper4_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper4_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper4_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper4_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper4_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper4_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper4_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper4_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper4_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper4_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper4_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper4_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper4_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper4_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper4_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper4_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper4_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper4_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper4_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper4_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper4_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
/*** IShellUIHelper4 methods ***/
#define IShellUIHelper4_msIsSiteMode(This,pfSiteMode) \
    ((This)->lpVtbl->msIsSiteMode(This,pfSiteMode))
#define IShellUIHelper4_msSiteModeShowThumbBar(This) \
    ((This)->lpVtbl->msSiteModeShowThumbBar(This))
#define IShellUIHelper4_msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) \
    ((This)->lpVtbl->msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID))
#define IShellUIHelper4_msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) \
    ((This)->lpVtbl->msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible))
#define IShellUIHelper4_msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) \
    ((This)->lpVtbl->msSiteModeSetIconOverlay(This,IconUrl,pvarDescription))
#define IShellUIHelper4_msSiteModeClearIconOverlay(This) \
    ((This)->lpVtbl->msSiteModeClearIconOverlay(This))
#define IShellUIHelper4_msAddSiteMode(This) \
    ((This)->lpVtbl->msAddSiteMode(This))
#define IShellUIHelper4_msSiteModeCreateJumpList(This,bstrHeader) \
    ((This)->lpVtbl->msSiteModeCreateJumpList(This,bstrHeader))
#define IShellUIHelper4_msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) \
    ((This)->lpVtbl->msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType))
#define IShellUIHelper4_msSiteModeClearJumpList(This) \
    ((This)->lpVtbl->msSiteModeClearJumpList(This))
#define IShellUIHelper4_msSiteModeShowJumpList(This) \
    ((This)->lpVtbl->msSiteModeShowJumpList(This))
#define IShellUIHelper4_msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) \
    ((This)->lpVtbl->msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID))
#define IShellUIHelper4_msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) \
    ((This)->lpVtbl->msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID))
#define IShellUIHelper4_msSiteModeActivate(This) \
    ((This)->lpVtbl->msSiteModeActivate(This))
#define IShellUIHelper4_msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) \
    ((This)->lpVtbl->msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun))
#define IShellUIHelper4_msAddTrackingProtectionList(This,URL,bstrFilterName) \
    ((This)->lpVtbl->msAddTrackingProtectionList(This,URL,bstrFilterName))
#define IShellUIHelper4_msTrackingProtectionEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msTrackingProtectionEnabled(This,pfEnabled))
#define IShellUIHelper4_msActiveXFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msActiveXFilteringEnabled(This,pfEnabled))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper4_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper5 interface
 */
#ifndef __IShellUIHelper5_INTERFACE_DEFINED__
#define __IShellUIHelper5_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper5;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper5Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper5 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper5 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper5 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper5 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper5 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper5 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper5 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper5 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper5 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper5 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper5 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper5 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper5 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper5 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper5 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper5 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper5 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper5 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper5 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper5 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper5 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper5 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper5 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper5 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper5 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper5 *This);

    /*** IShellUIHelper4 methods ***/
    HRESULT (STDMETHODCALLTYPE *msIsSiteMode)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfSiteMode);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowThumbBar)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddThumbBarButton)(
        IShellUIHelper5 *This,
        BSTR bstrIconURL,
        BSTR bstrTooltip,
        VARIANT *pvarButtonID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton)(
        IShellUIHelper5 *This,
        VARIANT ButtonID,
        VARIANT_BOOL fEnabled,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *msSiteModeSetIconOverlay)(
        IShellUIHelper5 *This,
        BSTR IconUrl,
        VARIANT *pvarDescription);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearIconOverlay)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msAddSiteMode)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeCreateJumpList)(
        IShellUIHelper5 *This,
        BSTR bstrHeader);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddJumpListItem)(
        IShellUIHelper5 *This,
        BSTR bstrName,
        BSTR bstrActionUri,
        BSTR bstrIconUri,
        VARIANT *pvarWindowType);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearJumpList)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowJumpList)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddButtonStyle)(
        IShellUIHelper5 *This,
        VARIANT uiButtonID,
        BSTR bstrIconUrl,
        BSTR bstrTooltip,
        VARIANT *pvarStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowButtonStyle)(
        IShellUIHelper5 *This,
        VARIANT uiButtonID,
        VARIANT uiStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeActivate)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msIsSiteModeFirstRun)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fPreserveState,
        VARIANT *puiFirstRun);

    HRESULT (STDMETHODCALLTYPE *msAddTrackingProtectionList)(
        IShellUIHelper5 *This,
        BSTR URL,
        BSTR bstrFilterName);

    HRESULT (STDMETHODCALLTYPE *msTrackingProtectionEnabled)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *msActiveXFilteringEnabled)(
        IShellUIHelper5 *This,
        VARIANT_BOOL *pfEnabled);

    /*** IShellUIHelper5 methods ***/
    HRESULT (STDMETHODCALLTYPE *msProvisionNetworks)(
        IShellUIHelper5 *This,
        BSTR bstrProvisioningXml,
        VARIANT *puiResult);

    HRESULT (STDMETHODCALLTYPE *msReportSafeUrl)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeRefreshBadge)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearBadge)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msDiagnoseConnectionUILess)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchNetworkClientHelp)(
        IShellUIHelper5 *This);

    HRESULT (STDMETHODCALLTYPE *msChangeDefaultBrowser)(
        IShellUIHelper5 *This,
        VARIANT_BOOL fChange);

    END_INTERFACE
} IShellUIHelper5Vtbl;

interface IShellUIHelper5 {
    CONST_VTBL IShellUIHelper5Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper5_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper5_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper5_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper5_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper5_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper5_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper5_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper5_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper5_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper5_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper5_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper5_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper5_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper5_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper5_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper5_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper5_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper5_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper5_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper5_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper5_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper5_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper5_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper5_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper5_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper5_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper5_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper5_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper5_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper5_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper5_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper5_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper5_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper5_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper5_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper5_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper5_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper5_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper5_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper5_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper5_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper5_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper5_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper5_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper5_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper5_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper5_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
/*** IShellUIHelper4 methods ***/
#define IShellUIHelper5_msIsSiteMode(This,pfSiteMode) \
    ((This)->lpVtbl->msIsSiteMode(This,pfSiteMode))
#define IShellUIHelper5_msSiteModeShowThumbBar(This) \
    ((This)->lpVtbl->msSiteModeShowThumbBar(This))
#define IShellUIHelper5_msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) \
    ((This)->lpVtbl->msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID))
#define IShellUIHelper5_msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) \
    ((This)->lpVtbl->msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible))
#define IShellUIHelper5_msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) \
    ((This)->lpVtbl->msSiteModeSetIconOverlay(This,IconUrl,pvarDescription))
#define IShellUIHelper5_msSiteModeClearIconOverlay(This) \
    ((This)->lpVtbl->msSiteModeClearIconOverlay(This))
#define IShellUIHelper5_msAddSiteMode(This) \
    ((This)->lpVtbl->msAddSiteMode(This))
#define IShellUIHelper5_msSiteModeCreateJumpList(This,bstrHeader) \
    ((This)->lpVtbl->msSiteModeCreateJumpList(This,bstrHeader))
#define IShellUIHelper5_msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) \
    ((This)->lpVtbl->msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType))
#define IShellUIHelper5_msSiteModeClearJumpList(This) \
    ((This)->lpVtbl->msSiteModeClearJumpList(This))
#define IShellUIHelper5_msSiteModeShowJumpList(This) \
    ((This)->lpVtbl->msSiteModeShowJumpList(This))
#define IShellUIHelper5_msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) \
    ((This)->lpVtbl->msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID))
#define IShellUIHelper5_msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) \
    ((This)->lpVtbl->msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID))
#define IShellUIHelper5_msSiteModeActivate(This) \
    ((This)->lpVtbl->msSiteModeActivate(This))
#define IShellUIHelper5_msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) \
    ((This)->lpVtbl->msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun))
#define IShellUIHelper5_msAddTrackingProtectionList(This,URL,bstrFilterName) \
    ((This)->lpVtbl->msAddTrackingProtectionList(This,URL,bstrFilterName))
#define IShellUIHelper5_msTrackingProtectionEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msTrackingProtectionEnabled(This,pfEnabled))
#define IShellUIHelper5_msActiveXFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msActiveXFilteringEnabled(This,pfEnabled))
/*** IShellUIHelper5 methods ***/
#define IShellUIHelper5_msProvisionNetworks(This,bstrProvisioningXml,puiResult) \
    ((This)->lpVtbl->msProvisionNetworks(This,bstrProvisioningXml,puiResult))
#define IShellUIHelper5_msReportSafeUrl(This) \
    ((This)->lpVtbl->msReportSafeUrl(This))
#define IShellUIHelper5_msSiteModeRefreshBadge(This) \
    ((This)->lpVtbl->msSiteModeRefreshBadge(This))
#define IShellUIHelper5_msSiteModeClearBadge(This) \
    ((This)->lpVtbl->msSiteModeClearBadge(This))
#define IShellUIHelper5_msDiagnoseConnectionUILess(This) \
    ((This)->lpVtbl->msDiagnoseConnectionUILess(This))
#define IShellUIHelper5_msLaunchNetworkClientHelp(This) \
    ((This)->lpVtbl->msLaunchNetworkClientHelp(This))
#define IShellUIHelper5_msChangeDefaultBrowser(This,fChange) \
    ((This)->lpVtbl->msChangeDefaultBrowser(This,fChange))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper5_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper6 interface
 */
#ifndef __IShellUIHelper6_INTERFACE_DEFINED__
#define __IShellUIHelper6_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper6;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper6Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper6 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper6 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper6 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper6 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper6 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper6 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper6 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper6 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper6 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper6 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper6 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper6 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper6 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper6 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper6 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper6 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper6 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper6 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper6 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper6 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper6 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper6 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper6 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper6 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper6 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper6 *This);

    /*** IShellUIHelper4 methods ***/
    HRESULT (STDMETHODCALLTYPE *msIsSiteMode)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfSiteMode);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowThumbBar)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddThumbBarButton)(
        IShellUIHelper6 *This,
        BSTR bstrIconURL,
        BSTR bstrTooltip,
        VARIANT *pvarButtonID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton)(
        IShellUIHelper6 *This,
        VARIANT ButtonID,
        VARIANT_BOOL fEnabled,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *msSiteModeSetIconOverlay)(
        IShellUIHelper6 *This,
        BSTR IconUrl,
        VARIANT *pvarDescription);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearIconOverlay)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msAddSiteMode)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeCreateJumpList)(
        IShellUIHelper6 *This,
        BSTR bstrHeader);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddJumpListItem)(
        IShellUIHelper6 *This,
        BSTR bstrName,
        BSTR bstrActionUri,
        BSTR bstrIconUri,
        VARIANT *pvarWindowType);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearJumpList)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowJumpList)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddButtonStyle)(
        IShellUIHelper6 *This,
        VARIANT uiButtonID,
        BSTR bstrIconUrl,
        BSTR bstrTooltip,
        VARIANT *pvarStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowButtonStyle)(
        IShellUIHelper6 *This,
        VARIANT uiButtonID,
        VARIANT uiStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeActivate)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msIsSiteModeFirstRun)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fPreserveState,
        VARIANT *puiFirstRun);

    HRESULT (STDMETHODCALLTYPE *msAddTrackingProtectionList)(
        IShellUIHelper6 *This,
        BSTR URL,
        BSTR bstrFilterName);

    HRESULT (STDMETHODCALLTYPE *msTrackingProtectionEnabled)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *msActiveXFilteringEnabled)(
        IShellUIHelper6 *This,
        VARIANT_BOOL *pfEnabled);

    /*** IShellUIHelper5 methods ***/
    HRESULT (STDMETHODCALLTYPE *msProvisionNetworks)(
        IShellUIHelper6 *This,
        BSTR bstrProvisioningXml,
        VARIANT *puiResult);

    HRESULT (STDMETHODCALLTYPE *msReportSafeUrl)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeRefreshBadge)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearBadge)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msDiagnoseConnectionUILess)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchNetworkClientHelp)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msChangeDefaultBrowser)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fChange);

    /*** IShellUIHelper6 methods ***/
    HRESULT (STDMETHODCALLTYPE *msStopPeriodicTileUpdate)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdate)(
        IShellUIHelper6 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch)(
        IShellUIHelper6 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msClearTile)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueue)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msPinnedSiteState)(
        IShellUIHelper6 *This,
        VARIANT *pvarSiteState);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310)(
        IShellUIHelper6 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msScheduledTileNotification)(
        IShellUIHelper6 *This,
        BSTR bstrNotificationXml,
        BSTR bstrNotificationId,
        BSTR bstrNotificationTag,
        VARIANT startTime,
        VARIANT expirationTime);

    HRESULT (STDMETHODCALLTYPE *msRemoveScheduledTileNotification)(
        IShellUIHelper6 *This,
        BSTR bstrNotificationId);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate)(
        IShellUIHelper6 *This,
        BSTR pollingUri,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate)(
        IShellUIHelper6 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchInternetOptions)(
        IShellUIHelper6 *This);

    END_INTERFACE
} IShellUIHelper6Vtbl;

interface IShellUIHelper6 {
    CONST_VTBL IShellUIHelper6Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper6_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper6_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper6_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper6_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper6_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper6_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper6_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper6_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper6_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper6_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper6_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper6_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper6_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper6_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper6_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper6_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper6_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper6_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper6_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper6_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper6_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper6_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper6_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper6_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper6_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper6_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper6_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper6_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper6_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper6_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper6_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper6_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper6_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper6_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper6_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper6_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper6_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper6_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper6_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper6_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper6_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper6_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper6_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper6_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper6_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper6_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper6_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
/*** IShellUIHelper4 methods ***/
#define IShellUIHelper6_msIsSiteMode(This,pfSiteMode) \
    ((This)->lpVtbl->msIsSiteMode(This,pfSiteMode))
#define IShellUIHelper6_msSiteModeShowThumbBar(This) \
    ((This)->lpVtbl->msSiteModeShowThumbBar(This))
#define IShellUIHelper6_msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) \
    ((This)->lpVtbl->msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID))
#define IShellUIHelper6_msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) \
    ((This)->lpVtbl->msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible))
#define IShellUIHelper6_msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) \
    ((This)->lpVtbl->msSiteModeSetIconOverlay(This,IconUrl,pvarDescription))
#define IShellUIHelper6_msSiteModeClearIconOverlay(This) \
    ((This)->lpVtbl->msSiteModeClearIconOverlay(This))
#define IShellUIHelper6_msAddSiteMode(This) \
    ((This)->lpVtbl->msAddSiteMode(This))
#define IShellUIHelper6_msSiteModeCreateJumpList(This,bstrHeader) \
    ((This)->lpVtbl->msSiteModeCreateJumpList(This,bstrHeader))
#define IShellUIHelper6_msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) \
    ((This)->lpVtbl->msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType))
#define IShellUIHelper6_msSiteModeClearJumpList(This) \
    ((This)->lpVtbl->msSiteModeClearJumpList(This))
#define IShellUIHelper6_msSiteModeShowJumpList(This) \
    ((This)->lpVtbl->msSiteModeShowJumpList(This))
#define IShellUIHelper6_msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) \
    ((This)->lpVtbl->msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID))
#define IShellUIHelper6_msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) \
    ((This)->lpVtbl->msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID))
#define IShellUIHelper6_msSiteModeActivate(This) \
    ((This)->lpVtbl->msSiteModeActivate(This))
#define IShellUIHelper6_msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) \
    ((This)->lpVtbl->msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun))
#define IShellUIHelper6_msAddTrackingProtectionList(This,URL,bstrFilterName) \
    ((This)->lpVtbl->msAddTrackingProtectionList(This,URL,bstrFilterName))
#define IShellUIHelper6_msTrackingProtectionEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msTrackingProtectionEnabled(This,pfEnabled))
#define IShellUIHelper6_msActiveXFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msActiveXFilteringEnabled(This,pfEnabled))
/*** IShellUIHelper5 methods ***/
#define IShellUIHelper6_msProvisionNetworks(This,bstrProvisioningXml,puiResult) \
    ((This)->lpVtbl->msProvisionNetworks(This,bstrProvisioningXml,puiResult))
#define IShellUIHelper6_msReportSafeUrl(This) \
    ((This)->lpVtbl->msReportSafeUrl(This))
#define IShellUIHelper6_msSiteModeRefreshBadge(This) \
    ((This)->lpVtbl->msSiteModeRefreshBadge(This))
#define IShellUIHelper6_msSiteModeClearBadge(This) \
    ((This)->lpVtbl->msSiteModeClearBadge(This))
#define IShellUIHelper6_msDiagnoseConnectionUILess(This) \
    ((This)->lpVtbl->msDiagnoseConnectionUILess(This))
#define IShellUIHelper6_msLaunchNetworkClientHelp(This) \
    ((This)->lpVtbl->msLaunchNetworkClientHelp(This))
#define IShellUIHelper6_msChangeDefaultBrowser(This,fChange) \
    ((This)->lpVtbl->msChangeDefaultBrowser(This,fChange))
/*** IShellUIHelper6 methods ***/
#define IShellUIHelper6_msStopPeriodicTileUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicTileUpdate(This))
#define IShellUIHelper6_msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper6_msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper6_msClearTile(This) \
    ((This)->lpVtbl->msClearTile(This))
#define IShellUIHelper6_msEnableTileNotificationQueue(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueue(This,fChange))
#define IShellUIHelper6_msPinnedSiteState(This,pvarSiteState) \
    ((This)->lpVtbl->msPinnedSiteState(This,pvarSiteState))
#define IShellUIHelper6_msEnableTileNotificationQueueForSquare150x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare150x150(This,fChange))
#define IShellUIHelper6_msEnableTileNotificationQueueForWide310x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForWide310x150(This,fChange))
#define IShellUIHelper6_msEnableTileNotificationQueueForSquare310x310(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare310x310(This,fChange))
#define IShellUIHelper6_msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) \
    ((This)->lpVtbl->msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime))
#define IShellUIHelper6_msRemoveScheduledTileNotification(This,bstrNotificationId) \
    ((This)->lpVtbl->msRemoveScheduledTileNotification(This,bstrNotificationId))
#define IShellUIHelper6_msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence))
#define IShellUIHelper6_msStopPeriodicBadgeUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicBadgeUpdate(This))
#define IShellUIHelper6_msLaunchInternetOptions(This) \
    ((This)->lpVtbl->msLaunchInternetOptions(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper6_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper7 interface
 */
#ifndef __IShellUIHelper7_INTERFACE_DEFINED__
#define __IShellUIHelper7_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper7;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper7Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper7 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper7 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper7 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper7 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper7 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper7 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper7 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper7 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper7 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper7 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper7 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper7 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper7 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper7 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper7 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper7 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper7 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper7 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper7 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper7 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper7 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper7 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper7 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper7 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper7 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper7 *This);

    /*** IShellUIHelper4 methods ***/
    HRESULT (STDMETHODCALLTYPE *msIsSiteMode)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfSiteMode);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowThumbBar)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddThumbBarButton)(
        IShellUIHelper7 *This,
        BSTR bstrIconURL,
        BSTR bstrTooltip,
        VARIANT *pvarButtonID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton)(
        IShellUIHelper7 *This,
        VARIANT ButtonID,
        VARIANT_BOOL fEnabled,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *msSiteModeSetIconOverlay)(
        IShellUIHelper7 *This,
        BSTR IconUrl,
        VARIANT *pvarDescription);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearIconOverlay)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msAddSiteMode)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeCreateJumpList)(
        IShellUIHelper7 *This,
        BSTR bstrHeader);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddJumpListItem)(
        IShellUIHelper7 *This,
        BSTR bstrName,
        BSTR bstrActionUri,
        BSTR bstrIconUri,
        VARIANT *pvarWindowType);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearJumpList)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowJumpList)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddButtonStyle)(
        IShellUIHelper7 *This,
        VARIANT uiButtonID,
        BSTR bstrIconUrl,
        BSTR bstrTooltip,
        VARIANT *pvarStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowButtonStyle)(
        IShellUIHelper7 *This,
        VARIANT uiButtonID,
        VARIANT uiStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeActivate)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msIsSiteModeFirstRun)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fPreserveState,
        VARIANT *puiFirstRun);

    HRESULT (STDMETHODCALLTYPE *msAddTrackingProtectionList)(
        IShellUIHelper7 *This,
        BSTR URL,
        BSTR bstrFilterName);

    HRESULT (STDMETHODCALLTYPE *msTrackingProtectionEnabled)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *msActiveXFilteringEnabled)(
        IShellUIHelper7 *This,
        VARIANT_BOOL *pfEnabled);

    /*** IShellUIHelper5 methods ***/
    HRESULT (STDMETHODCALLTYPE *msProvisionNetworks)(
        IShellUIHelper7 *This,
        BSTR bstrProvisioningXml,
        VARIANT *puiResult);

    HRESULT (STDMETHODCALLTYPE *msReportSafeUrl)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeRefreshBadge)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearBadge)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msDiagnoseConnectionUILess)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchNetworkClientHelp)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msChangeDefaultBrowser)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fChange);

    /*** IShellUIHelper6 methods ***/
    HRESULT (STDMETHODCALLTYPE *msStopPeriodicTileUpdate)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdate)(
        IShellUIHelper7 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch)(
        IShellUIHelper7 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msClearTile)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueue)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msPinnedSiteState)(
        IShellUIHelper7 *This,
        VARIANT *pvarSiteState);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310)(
        IShellUIHelper7 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msScheduledTileNotification)(
        IShellUIHelper7 *This,
        BSTR bstrNotificationXml,
        BSTR bstrNotificationId,
        BSTR bstrNotificationTag,
        VARIANT startTime,
        VARIANT expirationTime);

    HRESULT (STDMETHODCALLTYPE *msRemoveScheduledTileNotification)(
        IShellUIHelper7 *This,
        BSTR bstrNotificationId);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate)(
        IShellUIHelper7 *This,
        BSTR pollingUri,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchInternetOptions)(
        IShellUIHelper7 *This);

    /*** IShellUIHelper7 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetExperimentalFlag)(
        IShellUIHelper7 *This,
        BSTR bstrFlagString,
        VARIANT_BOOL vfFlag);

    HRESULT (STDMETHODCALLTYPE *GetExperimentalFlag)(
        IShellUIHelper7 *This,
        BSTR bstrFlagString,
        VARIANT_BOOL *vfFlag);

    HRESULT (STDMETHODCALLTYPE *SetExperimentalValue)(
        IShellUIHelper7 *This,
        BSTR bstrValueString,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetExperimentalValue)(
        IShellUIHelper7 *This,
        BSTR bstrValueString,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *ResetAllExperimentalFlagsAndValues)(
        IShellUIHelper7 *This);

    HRESULT (STDMETHODCALLTYPE *GetNeedIEAutoLaunchFlag)(
        IShellUIHelper7 *This,
        BSTR bstrUrl,
        VARIANT_BOOL *flag);

    HRESULT (STDMETHODCALLTYPE *SetNeedIEAutoLaunchFlag)(
        IShellUIHelper7 *This,
        BSTR bstrUrl,
        VARIANT_BOOL flag);

    HRESULT (STDMETHODCALLTYPE *HasNeedIEAutoLaunchFlag)(
        IShellUIHelper7 *This,
        BSTR bstrUrl,
        VARIANT_BOOL *exists);

    HRESULT (STDMETHODCALLTYPE *LaunchIE)(
        IShellUIHelper7 *This,
        BSTR bstrUrl,
        VARIANT_BOOL automated);

    END_INTERFACE
} IShellUIHelper7Vtbl;

interface IShellUIHelper7 {
    CONST_VTBL IShellUIHelper7Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper7_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper7_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper7_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper7_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper7_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper7_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper7_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper7_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper7_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper7_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper7_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper7_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper7_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper7_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper7_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper7_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper7_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper7_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper7_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper7_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper7_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper7_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper7_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper7_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper7_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper7_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper7_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper7_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper7_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper7_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper7_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper7_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper7_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper7_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper7_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper7_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper7_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper7_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper7_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper7_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper7_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper7_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper7_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper7_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper7_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper7_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper7_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
/*** IShellUIHelper4 methods ***/
#define IShellUIHelper7_msIsSiteMode(This,pfSiteMode) \
    ((This)->lpVtbl->msIsSiteMode(This,pfSiteMode))
#define IShellUIHelper7_msSiteModeShowThumbBar(This) \
    ((This)->lpVtbl->msSiteModeShowThumbBar(This))
#define IShellUIHelper7_msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) \
    ((This)->lpVtbl->msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID))
#define IShellUIHelper7_msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) \
    ((This)->lpVtbl->msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible))
#define IShellUIHelper7_msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) \
    ((This)->lpVtbl->msSiteModeSetIconOverlay(This,IconUrl,pvarDescription))
#define IShellUIHelper7_msSiteModeClearIconOverlay(This) \
    ((This)->lpVtbl->msSiteModeClearIconOverlay(This))
#define IShellUIHelper7_msAddSiteMode(This) \
    ((This)->lpVtbl->msAddSiteMode(This))
#define IShellUIHelper7_msSiteModeCreateJumpList(This,bstrHeader) \
    ((This)->lpVtbl->msSiteModeCreateJumpList(This,bstrHeader))
#define IShellUIHelper7_msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) \
    ((This)->lpVtbl->msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType))
#define IShellUIHelper7_msSiteModeClearJumpList(This) \
    ((This)->lpVtbl->msSiteModeClearJumpList(This))
#define IShellUIHelper7_msSiteModeShowJumpList(This) \
    ((This)->lpVtbl->msSiteModeShowJumpList(This))
#define IShellUIHelper7_msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) \
    ((This)->lpVtbl->msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID))
#define IShellUIHelper7_msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) \
    ((This)->lpVtbl->msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID))
#define IShellUIHelper7_msSiteModeActivate(This) \
    ((This)->lpVtbl->msSiteModeActivate(This))
#define IShellUIHelper7_msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) \
    ((This)->lpVtbl->msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun))
#define IShellUIHelper7_msAddTrackingProtectionList(This,URL,bstrFilterName) \
    ((This)->lpVtbl->msAddTrackingProtectionList(This,URL,bstrFilterName))
#define IShellUIHelper7_msTrackingProtectionEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msTrackingProtectionEnabled(This,pfEnabled))
#define IShellUIHelper7_msActiveXFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msActiveXFilteringEnabled(This,pfEnabled))
/*** IShellUIHelper5 methods ***/
#define IShellUIHelper7_msProvisionNetworks(This,bstrProvisioningXml,puiResult) \
    ((This)->lpVtbl->msProvisionNetworks(This,bstrProvisioningXml,puiResult))
#define IShellUIHelper7_msReportSafeUrl(This) \
    ((This)->lpVtbl->msReportSafeUrl(This))
#define IShellUIHelper7_msSiteModeRefreshBadge(This) \
    ((This)->lpVtbl->msSiteModeRefreshBadge(This))
#define IShellUIHelper7_msSiteModeClearBadge(This) \
    ((This)->lpVtbl->msSiteModeClearBadge(This))
#define IShellUIHelper7_msDiagnoseConnectionUILess(This) \
    ((This)->lpVtbl->msDiagnoseConnectionUILess(This))
#define IShellUIHelper7_msLaunchNetworkClientHelp(This) \
    ((This)->lpVtbl->msLaunchNetworkClientHelp(This))
#define IShellUIHelper7_msChangeDefaultBrowser(This,fChange) \
    ((This)->lpVtbl->msChangeDefaultBrowser(This,fChange))
/*** IShellUIHelper6 methods ***/
#define IShellUIHelper7_msStopPeriodicTileUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicTileUpdate(This))
#define IShellUIHelper7_msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper7_msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper7_msClearTile(This) \
    ((This)->lpVtbl->msClearTile(This))
#define IShellUIHelper7_msEnableTileNotificationQueue(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueue(This,fChange))
#define IShellUIHelper7_msPinnedSiteState(This,pvarSiteState) \
    ((This)->lpVtbl->msPinnedSiteState(This,pvarSiteState))
#define IShellUIHelper7_msEnableTileNotificationQueueForSquare150x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare150x150(This,fChange))
#define IShellUIHelper7_msEnableTileNotificationQueueForWide310x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForWide310x150(This,fChange))
#define IShellUIHelper7_msEnableTileNotificationQueueForSquare310x310(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare310x310(This,fChange))
#define IShellUIHelper7_msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) \
    ((This)->lpVtbl->msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime))
#define IShellUIHelper7_msRemoveScheduledTileNotification(This,bstrNotificationId) \
    ((This)->lpVtbl->msRemoveScheduledTileNotification(This,bstrNotificationId))
#define IShellUIHelper7_msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence))
#define IShellUIHelper7_msStopPeriodicBadgeUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicBadgeUpdate(This))
#define IShellUIHelper7_msLaunchInternetOptions(This) \
    ((This)->lpVtbl->msLaunchInternetOptions(This))
/*** IShellUIHelper7 methods ***/
#define IShellUIHelper7_SetExperimentalFlag(This,bstrFlagString,vfFlag) \
    ((This)->lpVtbl->SetExperimentalFlag(This,bstrFlagString,vfFlag))
#define IShellUIHelper7_GetExperimentalFlag(This,bstrFlagString,vfFlag) \
    ((This)->lpVtbl->GetExperimentalFlag(This,bstrFlagString,vfFlag))
#define IShellUIHelper7_SetExperimentalValue(This,bstrValueString,dwValue) \
    ((This)->lpVtbl->SetExperimentalValue(This,bstrValueString,dwValue))
#define IShellUIHelper7_GetExperimentalValue(This,bstrValueString,pdwValue) \
    ((This)->lpVtbl->GetExperimentalValue(This,bstrValueString,pdwValue))
#define IShellUIHelper7_ResetAllExperimentalFlagsAndValues(This) \
    ((This)->lpVtbl->ResetAllExperimentalFlagsAndValues(This))
#define IShellUIHelper7_GetNeedIEAutoLaunchFlag(This,bstrUrl,flag) \
    ((This)->lpVtbl->GetNeedIEAutoLaunchFlag(This,bstrUrl,flag))
#define IShellUIHelper7_SetNeedIEAutoLaunchFlag(This,bstrUrl,flag) \
    ((This)->lpVtbl->SetNeedIEAutoLaunchFlag(This,bstrUrl,flag))
#define IShellUIHelper7_HasNeedIEAutoLaunchFlag(This,bstrUrl,exists) \
    ((This)->lpVtbl->HasNeedIEAutoLaunchFlag(This,bstrUrl,exists))
#define IShellUIHelper7_LaunchIE(This,bstrUrl,automated) \
    ((This)->lpVtbl->LaunchIE(This,bstrUrl,automated))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper7_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper8 interface
 */
#ifndef __IShellUIHelper8_INTERFACE_DEFINED__
#define __IShellUIHelper8_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper8;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper8Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper8 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper8 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper8 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper8 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper8 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper8 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper8 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper8 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper8 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper8 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper8 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper8 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper8 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper8 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper8 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper8 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper8 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper8 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper8 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper8 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper8 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper8 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper8 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper8 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper8 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper8 *This);

    /*** IShellUIHelper4 methods ***/
    HRESULT (STDMETHODCALLTYPE *msIsSiteMode)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfSiteMode);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowThumbBar)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddThumbBarButton)(
        IShellUIHelper8 *This,
        BSTR bstrIconURL,
        BSTR bstrTooltip,
        VARIANT *pvarButtonID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton)(
        IShellUIHelper8 *This,
        VARIANT ButtonID,
        VARIANT_BOOL fEnabled,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *msSiteModeSetIconOverlay)(
        IShellUIHelper8 *This,
        BSTR IconUrl,
        VARIANT *pvarDescription);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearIconOverlay)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msAddSiteMode)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeCreateJumpList)(
        IShellUIHelper8 *This,
        BSTR bstrHeader);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddJumpListItem)(
        IShellUIHelper8 *This,
        BSTR bstrName,
        BSTR bstrActionUri,
        BSTR bstrIconUri,
        VARIANT *pvarWindowType);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearJumpList)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowJumpList)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddButtonStyle)(
        IShellUIHelper8 *This,
        VARIANT uiButtonID,
        BSTR bstrIconUrl,
        BSTR bstrTooltip,
        VARIANT *pvarStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowButtonStyle)(
        IShellUIHelper8 *This,
        VARIANT uiButtonID,
        VARIANT uiStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeActivate)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msIsSiteModeFirstRun)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fPreserveState,
        VARIANT *puiFirstRun);

    HRESULT (STDMETHODCALLTYPE *msAddTrackingProtectionList)(
        IShellUIHelper8 *This,
        BSTR URL,
        BSTR bstrFilterName);

    HRESULT (STDMETHODCALLTYPE *msTrackingProtectionEnabled)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *msActiveXFilteringEnabled)(
        IShellUIHelper8 *This,
        VARIANT_BOOL *pfEnabled);

    /*** IShellUIHelper5 methods ***/
    HRESULT (STDMETHODCALLTYPE *msProvisionNetworks)(
        IShellUIHelper8 *This,
        BSTR bstrProvisioningXml,
        VARIANT *puiResult);

    HRESULT (STDMETHODCALLTYPE *msReportSafeUrl)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeRefreshBadge)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearBadge)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msDiagnoseConnectionUILess)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchNetworkClientHelp)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msChangeDefaultBrowser)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fChange);

    /*** IShellUIHelper6 methods ***/
    HRESULT (STDMETHODCALLTYPE *msStopPeriodicTileUpdate)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdate)(
        IShellUIHelper8 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch)(
        IShellUIHelper8 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msClearTile)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueue)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msPinnedSiteState)(
        IShellUIHelper8 *This,
        VARIANT *pvarSiteState);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310)(
        IShellUIHelper8 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msScheduledTileNotification)(
        IShellUIHelper8 *This,
        BSTR bstrNotificationXml,
        BSTR bstrNotificationId,
        BSTR bstrNotificationTag,
        VARIANT startTime,
        VARIANT expirationTime);

    HRESULT (STDMETHODCALLTYPE *msRemoveScheduledTileNotification)(
        IShellUIHelper8 *This,
        BSTR bstrNotificationId);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate)(
        IShellUIHelper8 *This,
        BSTR pollingUri,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchInternetOptions)(
        IShellUIHelper8 *This);

    /*** IShellUIHelper7 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetExperimentalFlag)(
        IShellUIHelper8 *This,
        BSTR bstrFlagString,
        VARIANT_BOOL vfFlag);

    HRESULT (STDMETHODCALLTYPE *GetExperimentalFlag)(
        IShellUIHelper8 *This,
        BSTR bstrFlagString,
        VARIANT_BOOL *vfFlag);

    HRESULT (STDMETHODCALLTYPE *SetExperimentalValue)(
        IShellUIHelper8 *This,
        BSTR bstrValueString,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetExperimentalValue)(
        IShellUIHelper8 *This,
        BSTR bstrValueString,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *ResetAllExperimentalFlagsAndValues)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *GetNeedIEAutoLaunchFlag)(
        IShellUIHelper8 *This,
        BSTR bstrUrl,
        VARIANT_BOOL *flag);

    HRESULT (STDMETHODCALLTYPE *SetNeedIEAutoLaunchFlag)(
        IShellUIHelper8 *This,
        BSTR bstrUrl,
        VARIANT_BOOL flag);

    HRESULT (STDMETHODCALLTYPE *HasNeedIEAutoLaunchFlag)(
        IShellUIHelper8 *This,
        BSTR bstrUrl,
        VARIANT_BOOL *exists);

    HRESULT (STDMETHODCALLTYPE *LaunchIE)(
        IShellUIHelper8 *This,
        BSTR bstrUrl,
        VARIANT_BOOL automated);

    /*** IShellUIHelper8 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCVListData)(
        IShellUIHelper8 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *GetCVListLocalData)(
        IShellUIHelper8 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *GetEMIEListData)(
        IShellUIHelper8 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *GetEMIEListLocalData)(
        IShellUIHelper8 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *OpenFavoritesPane)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *OpenFavoritesSettings)(
        IShellUIHelper8 *This);

    HRESULT (STDMETHODCALLTYPE *LaunchInHVSI)(
        IShellUIHelper8 *This,
        BSTR bstrUrl);

    END_INTERFACE
} IShellUIHelper8Vtbl;

interface IShellUIHelper8 {
    CONST_VTBL IShellUIHelper8Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper8_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper8_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper8_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper8_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper8_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper8_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper8_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper8_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper8_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper8_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper8_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper8_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper8_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper8_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper8_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper8_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper8_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper8_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper8_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper8_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper8_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper8_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper8_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper8_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper8_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper8_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper8_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper8_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper8_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper8_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper8_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper8_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper8_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper8_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper8_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper8_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper8_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper8_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper8_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper8_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper8_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper8_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper8_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper8_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper8_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper8_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper8_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper8_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper8_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
/*** IShellUIHelper4 methods ***/
#define IShellUIHelper8_msIsSiteMode(This,pfSiteMode) \
    ((This)->lpVtbl->msIsSiteMode(This,pfSiteMode))
#define IShellUIHelper8_msSiteModeShowThumbBar(This) \
    ((This)->lpVtbl->msSiteModeShowThumbBar(This))
#define IShellUIHelper8_msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) \
    ((This)->lpVtbl->msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID))
#define IShellUIHelper8_msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) \
    ((This)->lpVtbl->msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible))
#define IShellUIHelper8_msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) \
    ((This)->lpVtbl->msSiteModeSetIconOverlay(This,IconUrl,pvarDescription))
#define IShellUIHelper8_msSiteModeClearIconOverlay(This) \
    ((This)->lpVtbl->msSiteModeClearIconOverlay(This))
#define IShellUIHelper8_msAddSiteMode(This) \
    ((This)->lpVtbl->msAddSiteMode(This))
#define IShellUIHelper8_msSiteModeCreateJumpList(This,bstrHeader) \
    ((This)->lpVtbl->msSiteModeCreateJumpList(This,bstrHeader))
#define IShellUIHelper8_msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) \
    ((This)->lpVtbl->msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType))
#define IShellUIHelper8_msSiteModeClearJumpList(This) \
    ((This)->lpVtbl->msSiteModeClearJumpList(This))
#define IShellUIHelper8_msSiteModeShowJumpList(This) \
    ((This)->lpVtbl->msSiteModeShowJumpList(This))
#define IShellUIHelper8_msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) \
    ((This)->lpVtbl->msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID))
#define IShellUIHelper8_msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) \
    ((This)->lpVtbl->msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID))
#define IShellUIHelper8_msSiteModeActivate(This) \
    ((This)->lpVtbl->msSiteModeActivate(This))
#define IShellUIHelper8_msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) \
    ((This)->lpVtbl->msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun))
#define IShellUIHelper8_msAddTrackingProtectionList(This,URL,bstrFilterName) \
    ((This)->lpVtbl->msAddTrackingProtectionList(This,URL,bstrFilterName))
#define IShellUIHelper8_msTrackingProtectionEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msTrackingProtectionEnabled(This,pfEnabled))
#define IShellUIHelper8_msActiveXFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msActiveXFilteringEnabled(This,pfEnabled))
/*** IShellUIHelper5 methods ***/
#define IShellUIHelper8_msProvisionNetworks(This,bstrProvisioningXml,puiResult) \
    ((This)->lpVtbl->msProvisionNetworks(This,bstrProvisioningXml,puiResult))
#define IShellUIHelper8_msReportSafeUrl(This) \
    ((This)->lpVtbl->msReportSafeUrl(This))
#define IShellUIHelper8_msSiteModeRefreshBadge(This) \
    ((This)->lpVtbl->msSiteModeRefreshBadge(This))
#define IShellUIHelper8_msSiteModeClearBadge(This) \
    ((This)->lpVtbl->msSiteModeClearBadge(This))
#define IShellUIHelper8_msDiagnoseConnectionUILess(This) \
    ((This)->lpVtbl->msDiagnoseConnectionUILess(This))
#define IShellUIHelper8_msLaunchNetworkClientHelp(This) \
    ((This)->lpVtbl->msLaunchNetworkClientHelp(This))
#define IShellUIHelper8_msChangeDefaultBrowser(This,fChange) \
    ((This)->lpVtbl->msChangeDefaultBrowser(This,fChange))
/*** IShellUIHelper6 methods ***/
#define IShellUIHelper8_msStopPeriodicTileUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicTileUpdate(This))
#define IShellUIHelper8_msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper8_msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper8_msClearTile(This) \
    ((This)->lpVtbl->msClearTile(This))
#define IShellUIHelper8_msEnableTileNotificationQueue(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueue(This,fChange))
#define IShellUIHelper8_msPinnedSiteState(This,pvarSiteState) \
    ((This)->lpVtbl->msPinnedSiteState(This,pvarSiteState))
#define IShellUIHelper8_msEnableTileNotificationQueueForSquare150x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare150x150(This,fChange))
#define IShellUIHelper8_msEnableTileNotificationQueueForWide310x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForWide310x150(This,fChange))
#define IShellUIHelper8_msEnableTileNotificationQueueForSquare310x310(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare310x310(This,fChange))
#define IShellUIHelper8_msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) \
    ((This)->lpVtbl->msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime))
#define IShellUIHelper8_msRemoveScheduledTileNotification(This,bstrNotificationId) \
    ((This)->lpVtbl->msRemoveScheduledTileNotification(This,bstrNotificationId))
#define IShellUIHelper8_msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence))
#define IShellUIHelper8_msStopPeriodicBadgeUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicBadgeUpdate(This))
#define IShellUIHelper8_msLaunchInternetOptions(This) \
    ((This)->lpVtbl->msLaunchInternetOptions(This))
/*** IShellUIHelper7 methods ***/
#define IShellUIHelper8_SetExperimentalFlag(This,bstrFlagString,vfFlag) \
    ((This)->lpVtbl->SetExperimentalFlag(This,bstrFlagString,vfFlag))
#define IShellUIHelper8_GetExperimentalFlag(This,bstrFlagString,vfFlag) \
    ((This)->lpVtbl->GetExperimentalFlag(This,bstrFlagString,vfFlag))
#define IShellUIHelper8_SetExperimentalValue(This,bstrValueString,dwValue) \
    ((This)->lpVtbl->SetExperimentalValue(This,bstrValueString,dwValue))
#define IShellUIHelper8_GetExperimentalValue(This,bstrValueString,pdwValue) \
    ((This)->lpVtbl->GetExperimentalValue(This,bstrValueString,pdwValue))
#define IShellUIHelper8_ResetAllExperimentalFlagsAndValues(This) \
    ((This)->lpVtbl->ResetAllExperimentalFlagsAndValues(This))
#define IShellUIHelper8_GetNeedIEAutoLaunchFlag(This,bstrUrl,flag) \
    ((This)->lpVtbl->GetNeedIEAutoLaunchFlag(This,bstrUrl,flag))
#define IShellUIHelper8_SetNeedIEAutoLaunchFlag(This,bstrUrl,flag) \
    ((This)->lpVtbl->SetNeedIEAutoLaunchFlag(This,bstrUrl,flag))
#define IShellUIHelper8_HasNeedIEAutoLaunchFlag(This,bstrUrl,exists) \
    ((This)->lpVtbl->HasNeedIEAutoLaunchFlag(This,bstrUrl,exists))
#define IShellUIHelper8_LaunchIE(This,bstrUrl,automated) \
    ((This)->lpVtbl->LaunchIE(This,bstrUrl,automated))
/*** IShellUIHelper8 methods ***/
#define IShellUIHelper8_GetCVListData(This,pbstrResult) \
    ((This)->lpVtbl->GetCVListData(This,pbstrResult))
#define IShellUIHelper8_GetCVListLocalData(This,pbstrResult) \
    ((This)->lpVtbl->GetCVListLocalData(This,pbstrResult))
#define IShellUIHelper8_GetEMIEListData(This,pbstrResult) \
    ((This)->lpVtbl->GetEMIEListData(This,pbstrResult))
#define IShellUIHelper8_GetEMIEListLocalData(This,pbstrResult) \
    ((This)->lpVtbl->GetEMIEListLocalData(This,pbstrResult))
#define IShellUIHelper8_OpenFavoritesPane(This) \
    ((This)->lpVtbl->OpenFavoritesPane(This))
#define IShellUIHelper8_OpenFavoritesSettings(This) \
    ((This)->lpVtbl->OpenFavoritesSettings(This))
#define IShellUIHelper8_LaunchInHVSI(This,bstrUrl) \
    ((This)->lpVtbl->LaunchInHVSI(This,bstrUrl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper8_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellUIHelper9 interface
 */
#ifndef __IShellUIHelper9_INTERFACE_DEFINED__
#define __IShellUIHelper9_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellUIHelper9;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellUIHelper9Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellUIHelper9 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellUIHelper9 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellUIHelper9 *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellUIHelper9 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellUIHelper9 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellUIHelper9 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellUIHelper9 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellUIHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetFirstBootMode)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *ResetSafeMode)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *RefreshOfflineDesktop)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *AddFavorite)(
        IShellUIHelper9 *This,
        BSTR URL,
        VARIANT *Title);

    HRESULT (STDMETHODCALLTYPE *AddChannel)(
        IShellUIHelper9 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *AddDesktopComponent)(
        IShellUIHelper9 *This,
        BSTR URL,
        BSTR Type,
        VARIANT *Left,
        VARIANT *Top,
        VARIANT *Width,
        VARIANT *Height);

    HRESULT (STDMETHODCALLTYPE *IsSubscribed)(
        IShellUIHelper9 *This,
        BSTR URL,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *NavigateAndFind)(
        IShellUIHelper9 *This,
        BSTR URL,
        BSTR strQuery,
        VARIANT *varTargetFrame);

    HRESULT (STDMETHODCALLTYPE *ImportExportFavorites)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fImport,
        BSTR strImpExpPath);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteSaveForm)(
        IShellUIHelper9 *This,
        VARIANT *Form);

    HRESULT (STDMETHODCALLTYPE *AutoScan)(
        IShellUIHelper9 *This,
        BSTR strSearch,
        BSTR strFailureUrl,
        VARIANT *pvarTargetFrame);

    HRESULT (STDMETHODCALLTYPE *AutoCompleteAttach)(
        IShellUIHelper9 *This,
        VARIANT *Reserved);

    HRESULT (STDMETHODCALLTYPE *ShowBrowserUI)(
        IShellUIHelper9 *This,
        BSTR bstrName,
        VARIANT *pvarIn,
        VARIANT *pvarOut);

    /*** IShellUIHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddSearchProvider)(
        IShellUIHelper9 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *RunOnceShown)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *SkipRunOnce)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeSettings)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fSQM,
        VARIANT_BOOL fPhishing,
        BSTR bstrLocale);

    HRESULT (STDMETHODCALLTYPE *SqmEnabled)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *PhishingEnabled)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *BrandImageUri)(
        IShellUIHelper9 *This,
        BSTR *pbstrUri);

    HRESULT (STDMETHODCALLTYPE *SkipTabsWelcome)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *DiagnoseConnection)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *CustomizeClearType)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fSet);

    HRESULT (STDMETHODCALLTYPE *IsSearchProviderInstalled)(
        IShellUIHelper9 *This,
        BSTR URL,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *IsSearchMigrated)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfMigrated);

    HRESULT (STDMETHODCALLTYPE *DefaultSearchProvider)(
        IShellUIHelper9 *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fComplete);

    HRESULT (STDMETHODCALLTYPE *RunOnceHasShown)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfShown);

    HRESULT (STDMETHODCALLTYPE *SearchGuideUrl)(
        IShellUIHelper9 *This,
        BSTR *pbstrUrl);

    /*** IShellUIHelper3 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddService)(
        IShellUIHelper9 *This,
        BSTR URL);

    HRESULT (STDMETHODCALLTYPE *IsServiceInstalled)(
        IShellUIHelper9 *This,
        BSTR URL,
        BSTR Verb,
        DWORD *pdwResult);

    HRESULT (STDMETHODCALLTYPE *InPrivateFilteringEnabled)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *AddToFavoritesBar)(
        IShellUIHelper9 *This,
        BSTR URL,
        BSTR Title,
        VARIANT *Type);

    HRESULT (STDMETHODCALLTYPE *BuildNewTabPage)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *SetRecentlyClosedVisible)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *SetActivitiesVisible)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *ContentDiscoveryReset)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *IsSuggestedSitesEnabled)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *EnableSuggestedSites)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *NavigateToSuggestedSites)(
        IShellUIHelper9 *This,
        BSTR bstrRelativeUrl);

    HRESULT (STDMETHODCALLTYPE *ShowTabsHelp)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *ShowInPrivateHelp)(
        IShellUIHelper9 *This);

    /*** IShellUIHelper4 methods ***/
    HRESULT (STDMETHODCALLTYPE *msIsSiteMode)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfSiteMode);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowThumbBar)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddThumbBarButton)(
        IShellUIHelper9 *This,
        BSTR bstrIconURL,
        BSTR bstrTooltip,
        VARIANT *pvarButtonID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton)(
        IShellUIHelper9 *This,
        VARIANT ButtonID,
        VARIANT_BOOL fEnabled,
        VARIANT_BOOL fVisible);

    HRESULT (STDMETHODCALLTYPE *msSiteModeSetIconOverlay)(
        IShellUIHelper9 *This,
        BSTR IconUrl,
        VARIANT *pvarDescription);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearIconOverlay)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msAddSiteMode)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeCreateJumpList)(
        IShellUIHelper9 *This,
        BSTR bstrHeader);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddJumpListItem)(
        IShellUIHelper9 *This,
        BSTR bstrName,
        BSTR bstrActionUri,
        BSTR bstrIconUri,
        VARIANT *pvarWindowType);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearJumpList)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowJumpList)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeAddButtonStyle)(
        IShellUIHelper9 *This,
        VARIANT uiButtonID,
        BSTR bstrIconUrl,
        BSTR bstrTooltip,
        VARIANT *pvarStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeShowButtonStyle)(
        IShellUIHelper9 *This,
        VARIANT uiButtonID,
        VARIANT uiStyleID);

    HRESULT (STDMETHODCALLTYPE *msSiteModeActivate)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msIsSiteModeFirstRun)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fPreserveState,
        VARIANT *puiFirstRun);

    HRESULT (STDMETHODCALLTYPE *msAddTrackingProtectionList)(
        IShellUIHelper9 *This,
        BSTR URL,
        BSTR bstrFilterName);

    HRESULT (STDMETHODCALLTYPE *msTrackingProtectionEnabled)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfEnabled);

    HRESULT (STDMETHODCALLTYPE *msActiveXFilteringEnabled)(
        IShellUIHelper9 *This,
        VARIANT_BOOL *pfEnabled);

    /*** IShellUIHelper5 methods ***/
    HRESULT (STDMETHODCALLTYPE *msProvisionNetworks)(
        IShellUIHelper9 *This,
        BSTR bstrProvisioningXml,
        VARIANT *puiResult);

    HRESULT (STDMETHODCALLTYPE *msReportSafeUrl)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeRefreshBadge)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msSiteModeClearBadge)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msDiagnoseConnectionUILess)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchNetworkClientHelp)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msChangeDefaultBrowser)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fChange);

    /*** IShellUIHelper6 methods ***/
    HRESULT (STDMETHODCALLTYPE *msStopPeriodicTileUpdate)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdate)(
        IShellUIHelper9 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch)(
        IShellUIHelper9 *This,
        VARIANT pollingUris,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msClearTile)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueue)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msPinnedSiteState)(
        IShellUIHelper9 *This,
        VARIANT *pvarSiteState);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310)(
        IShellUIHelper9 *This,
        VARIANT_BOOL fChange);

    HRESULT (STDMETHODCALLTYPE *msScheduledTileNotification)(
        IShellUIHelper9 *This,
        BSTR bstrNotificationXml,
        BSTR bstrNotificationId,
        BSTR bstrNotificationTag,
        VARIANT startTime,
        VARIANT expirationTime);

    HRESULT (STDMETHODCALLTYPE *msRemoveScheduledTileNotification)(
        IShellUIHelper9 *This,
        BSTR bstrNotificationId);

    HRESULT (STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate)(
        IShellUIHelper9 *This,
        BSTR pollingUri,
        VARIANT startTime,
        VARIANT uiUpdateRecurrence);

    HRESULT (STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *msLaunchInternetOptions)(
        IShellUIHelper9 *This);

    /*** IShellUIHelper7 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetExperimentalFlag)(
        IShellUIHelper9 *This,
        BSTR bstrFlagString,
        VARIANT_BOOL vfFlag);

    HRESULT (STDMETHODCALLTYPE *GetExperimentalFlag)(
        IShellUIHelper9 *This,
        BSTR bstrFlagString,
        VARIANT_BOOL *vfFlag);

    HRESULT (STDMETHODCALLTYPE *SetExperimentalValue)(
        IShellUIHelper9 *This,
        BSTR bstrValueString,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetExperimentalValue)(
        IShellUIHelper9 *This,
        BSTR bstrValueString,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *ResetAllExperimentalFlagsAndValues)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *GetNeedIEAutoLaunchFlag)(
        IShellUIHelper9 *This,
        BSTR bstrUrl,
        VARIANT_BOOL *flag);

    HRESULT (STDMETHODCALLTYPE *SetNeedIEAutoLaunchFlag)(
        IShellUIHelper9 *This,
        BSTR bstrUrl,
        VARIANT_BOOL flag);

    HRESULT (STDMETHODCALLTYPE *HasNeedIEAutoLaunchFlag)(
        IShellUIHelper9 *This,
        BSTR bstrUrl,
        VARIANT_BOOL *exists);

    HRESULT (STDMETHODCALLTYPE *LaunchIE)(
        IShellUIHelper9 *This,
        BSTR bstrUrl,
        VARIANT_BOOL automated);

    /*** IShellUIHelper8 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCVListData)(
        IShellUIHelper9 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *GetCVListLocalData)(
        IShellUIHelper9 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *GetEMIEListData)(
        IShellUIHelper9 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *GetEMIEListLocalData)(
        IShellUIHelper9 *This,
        BSTR *pbstrResult);

    HRESULT (STDMETHODCALLTYPE *OpenFavoritesPane)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *OpenFavoritesSettings)(
        IShellUIHelper9 *This);

    HRESULT (STDMETHODCALLTYPE *LaunchInHVSI)(
        IShellUIHelper9 *This,
        BSTR bstrUrl);

    /*** IShellUIHelper9 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOSSku)(
        IShellUIHelper9 *This,
        DWORD *pdwResult);

    END_INTERFACE
} IShellUIHelper9Vtbl;

interface IShellUIHelper9 {
    CONST_VTBL IShellUIHelper9Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellUIHelper9_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellUIHelper9_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellUIHelper9_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellUIHelper9_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellUIHelper9_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellUIHelper9_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellUIHelper9_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellUIHelper methods ***/
#define IShellUIHelper9_ResetFirstBootMode(This) \
    ((This)->lpVtbl->ResetFirstBootMode(This))
#define IShellUIHelper9_ResetSafeMode(This) \
    ((This)->lpVtbl->ResetSafeMode(This))
#define IShellUIHelper9_RefreshOfflineDesktop(This) \
    ((This)->lpVtbl->RefreshOfflineDesktop(This))
#define IShellUIHelper9_AddFavorite(This,URL,Title) \
    ((This)->lpVtbl->AddFavorite(This,URL,Title))
#define IShellUIHelper9_AddChannel(This,URL) \
    ((This)->lpVtbl->AddChannel(This,URL))
#define IShellUIHelper9_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) \
    ((This)->lpVtbl->AddDesktopComponent(This,URL,Type,Left,Top,Width,Height))
#define IShellUIHelper9_IsSubscribed(This,URL,pBool) \
    ((This)->lpVtbl->IsSubscribed(This,URL,pBool))
#define IShellUIHelper9_NavigateAndFind(This,URL,strQuery,varTargetFrame) \
    ((This)->lpVtbl->NavigateAndFind(This,URL,strQuery,varTargetFrame))
#define IShellUIHelper9_ImportExportFavorites(This,fImport,strImpExpPath) \
    ((This)->lpVtbl->ImportExportFavorites(This,fImport,strImpExpPath))
#define IShellUIHelper9_AutoCompleteSaveForm(This,Form) \
    ((This)->lpVtbl->AutoCompleteSaveForm(This,Form))
#define IShellUIHelper9_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) \
    ((This)->lpVtbl->AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame))
#define IShellUIHelper9_AutoCompleteAttach(This,Reserved) \
    ((This)->lpVtbl->AutoCompleteAttach(This,Reserved))
#define IShellUIHelper9_ShowBrowserUI(This,bstrName,pvarIn,pvarOut) \
    ((This)->lpVtbl->ShowBrowserUI(This,bstrName,pvarIn,pvarOut))
/*** IShellUIHelper2 methods ***/
#define IShellUIHelper9_AddSearchProvider(This,URL) \
    ((This)->lpVtbl->AddSearchProvider(This,URL))
#define IShellUIHelper9_RunOnceShown(This) \
    ((This)->lpVtbl->RunOnceShown(This))
#define IShellUIHelper9_SkipRunOnce(This) \
    ((This)->lpVtbl->SkipRunOnce(This))
#define IShellUIHelper9_CustomizeSettings(This,fSQM,fPhishing,bstrLocale) \
    ((This)->lpVtbl->CustomizeSettings(This,fSQM,fPhishing,bstrLocale))
#define IShellUIHelper9_SqmEnabled(This,pfEnabled) \
    ((This)->lpVtbl->SqmEnabled(This,pfEnabled))
#define IShellUIHelper9_PhishingEnabled(This,pfEnabled) \
    ((This)->lpVtbl->PhishingEnabled(This,pfEnabled))
#define IShellUIHelper9_BrandImageUri(This,pbstrUri) \
    ((This)->lpVtbl->BrandImageUri(This,pbstrUri))
#define IShellUIHelper9_SkipTabsWelcome(This) \
    ((This)->lpVtbl->SkipTabsWelcome(This))
#define IShellUIHelper9_DiagnoseConnection(This) \
    ((This)->lpVtbl->DiagnoseConnection(This))
#define IShellUIHelper9_CustomizeClearType(This,fSet) \
    ((This)->lpVtbl->CustomizeClearType(This,fSet))
#define IShellUIHelper9_IsSearchProviderInstalled(This,URL,pdwResult) \
    ((This)->lpVtbl->IsSearchProviderInstalled(This,URL,pdwResult))
#define IShellUIHelper9_IsSearchMigrated(This,pfMigrated) \
    ((This)->lpVtbl->IsSearchMigrated(This,pfMigrated))
#define IShellUIHelper9_DefaultSearchProvider(This,pbstrName) \
    ((This)->lpVtbl->DefaultSearchProvider(This,pbstrName))
#define IShellUIHelper9_RunOnceRequiredSettingsComplete(This,fComplete) \
    ((This)->lpVtbl->RunOnceRequiredSettingsComplete(This,fComplete))
#define IShellUIHelper9_RunOnceHasShown(This,pfShown) \
    ((This)->lpVtbl->RunOnceHasShown(This,pfShown))
#define IShellUIHelper9_SearchGuideUrl(This,pbstrUrl) \
    ((This)->lpVtbl->SearchGuideUrl(This,pbstrUrl))
/*** IShellUIHelper3 methods ***/
#define IShellUIHelper9_AddService(This,URL) \
    ((This)->lpVtbl->AddService(This,URL))
#define IShellUIHelper9_IsServiceInstalled(This,URL,Verb,pdwResult) \
    ((This)->lpVtbl->IsServiceInstalled(This,URL,Verb,pdwResult))
#define IShellUIHelper9_InPrivateFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->InPrivateFilteringEnabled(This,pfEnabled))
#define IShellUIHelper9_AddToFavoritesBar(This,URL,Title,Type) \
    ((This)->lpVtbl->AddToFavoritesBar(This,URL,Title,Type))
#define IShellUIHelper9_BuildNewTabPage(This) \
    ((This)->lpVtbl->BuildNewTabPage(This))
#define IShellUIHelper9_SetRecentlyClosedVisible(This,fVisible) \
    ((This)->lpVtbl->SetRecentlyClosedVisible(This,fVisible))
#define IShellUIHelper9_SetActivitiesVisible(This,fVisible) \
    ((This)->lpVtbl->SetActivitiesVisible(This,fVisible))
#define IShellUIHelper9_ContentDiscoveryReset(This) \
    ((This)->lpVtbl->ContentDiscoveryReset(This))
#define IShellUIHelper9_IsSuggestedSitesEnabled(This,pfEnabled) \
    ((This)->lpVtbl->IsSuggestedSitesEnabled(This,pfEnabled))
#define IShellUIHelper9_EnableSuggestedSites(This,fEnable) \
    ((This)->lpVtbl->EnableSuggestedSites(This,fEnable))
#define IShellUIHelper9_NavigateToSuggestedSites(This,bstrRelativeUrl) \
    ((This)->lpVtbl->NavigateToSuggestedSites(This,bstrRelativeUrl))
#define IShellUIHelper9_ShowTabsHelp(This) \
    ((This)->lpVtbl->ShowTabsHelp(This))
#define IShellUIHelper9_ShowInPrivateHelp(This) \
    ((This)->lpVtbl->ShowInPrivateHelp(This))
/*** IShellUIHelper4 methods ***/
#define IShellUIHelper9_msIsSiteMode(This,pfSiteMode) \
    ((This)->lpVtbl->msIsSiteMode(This,pfSiteMode))
#define IShellUIHelper9_msSiteModeShowThumbBar(This) \
    ((This)->lpVtbl->msSiteModeShowThumbBar(This))
#define IShellUIHelper9_msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) \
    ((This)->lpVtbl->msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID))
#define IShellUIHelper9_msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) \
    ((This)->lpVtbl->msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible))
#define IShellUIHelper9_msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) \
    ((This)->lpVtbl->msSiteModeSetIconOverlay(This,IconUrl,pvarDescription))
#define IShellUIHelper9_msSiteModeClearIconOverlay(This) \
    ((This)->lpVtbl->msSiteModeClearIconOverlay(This))
#define IShellUIHelper9_msAddSiteMode(This) \
    ((This)->lpVtbl->msAddSiteMode(This))
#define IShellUIHelper9_msSiteModeCreateJumpList(This,bstrHeader) \
    ((This)->lpVtbl->msSiteModeCreateJumpList(This,bstrHeader))
#define IShellUIHelper9_msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) \
    ((This)->lpVtbl->msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType))
#define IShellUIHelper9_msSiteModeClearJumpList(This) \
    ((This)->lpVtbl->msSiteModeClearJumpList(This))
#define IShellUIHelper9_msSiteModeShowJumpList(This) \
    ((This)->lpVtbl->msSiteModeShowJumpList(This))
#define IShellUIHelper9_msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) \
    ((This)->lpVtbl->msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID))
#define IShellUIHelper9_msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) \
    ((This)->lpVtbl->msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID))
#define IShellUIHelper9_msSiteModeActivate(This) \
    ((This)->lpVtbl->msSiteModeActivate(This))
#define IShellUIHelper9_msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) \
    ((This)->lpVtbl->msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun))
#define IShellUIHelper9_msAddTrackingProtectionList(This,URL,bstrFilterName) \
    ((This)->lpVtbl->msAddTrackingProtectionList(This,URL,bstrFilterName))
#define IShellUIHelper9_msTrackingProtectionEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msTrackingProtectionEnabled(This,pfEnabled))
#define IShellUIHelper9_msActiveXFilteringEnabled(This,pfEnabled) \
    ((This)->lpVtbl->msActiveXFilteringEnabled(This,pfEnabled))
/*** IShellUIHelper5 methods ***/
#define IShellUIHelper9_msProvisionNetworks(This,bstrProvisioningXml,puiResult) \
    ((This)->lpVtbl->msProvisionNetworks(This,bstrProvisioningXml,puiResult))
#define IShellUIHelper9_msReportSafeUrl(This) \
    ((This)->lpVtbl->msReportSafeUrl(This))
#define IShellUIHelper9_msSiteModeRefreshBadge(This) \
    ((This)->lpVtbl->msSiteModeRefreshBadge(This))
#define IShellUIHelper9_msSiteModeClearBadge(This) \
    ((This)->lpVtbl->msSiteModeClearBadge(This))
#define IShellUIHelper9_msDiagnoseConnectionUILess(This) \
    ((This)->lpVtbl->msDiagnoseConnectionUILess(This))
#define IShellUIHelper9_msLaunchNetworkClientHelp(This) \
    ((This)->lpVtbl->msLaunchNetworkClientHelp(This))
#define IShellUIHelper9_msChangeDefaultBrowser(This,fChange) \
    ((This)->lpVtbl->msChangeDefaultBrowser(This,fChange))
/*** IShellUIHelper6 methods ***/
#define IShellUIHelper9_msStopPeriodicTileUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicTileUpdate(This))
#define IShellUIHelper9_msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper9_msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence))
#define IShellUIHelper9_msClearTile(This) \
    ((This)->lpVtbl->msClearTile(This))
#define IShellUIHelper9_msEnableTileNotificationQueue(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueue(This,fChange))
#define IShellUIHelper9_msPinnedSiteState(This,pvarSiteState) \
    ((This)->lpVtbl->msPinnedSiteState(This,pvarSiteState))
#define IShellUIHelper9_msEnableTileNotificationQueueForSquare150x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare150x150(This,fChange))
#define IShellUIHelper9_msEnableTileNotificationQueueForWide310x150(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForWide310x150(This,fChange))
#define IShellUIHelper9_msEnableTileNotificationQueueForSquare310x310(This,fChange) \
    ((This)->lpVtbl->msEnableTileNotificationQueueForSquare310x310(This,fChange))
#define IShellUIHelper9_msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) \
    ((This)->lpVtbl->msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime))
#define IShellUIHelper9_msRemoveScheduledTileNotification(This,bstrNotificationId) \
    ((This)->lpVtbl->msRemoveScheduledTileNotification(This,bstrNotificationId))
#define IShellUIHelper9_msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) \
    ((This)->lpVtbl->msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence))
#define IShellUIHelper9_msStopPeriodicBadgeUpdate(This) \
    ((This)->lpVtbl->msStopPeriodicBadgeUpdate(This))
#define IShellUIHelper9_msLaunchInternetOptions(This) \
    ((This)->lpVtbl->msLaunchInternetOptions(This))
/*** IShellUIHelper7 methods ***/
#define IShellUIHelper9_SetExperimentalFlag(This,bstrFlagString,vfFlag) \
    ((This)->lpVtbl->SetExperimentalFlag(This,bstrFlagString,vfFlag))
#define IShellUIHelper9_GetExperimentalFlag(This,bstrFlagString,vfFlag) \
    ((This)->lpVtbl->GetExperimentalFlag(This,bstrFlagString,vfFlag))
#define IShellUIHelper9_SetExperimentalValue(This,bstrValueString,dwValue) \
    ((This)->lpVtbl->SetExperimentalValue(This,bstrValueString,dwValue))
#define IShellUIHelper9_GetExperimentalValue(This,bstrValueString,pdwValue) \
    ((This)->lpVtbl->GetExperimentalValue(This,bstrValueString,pdwValue))
#define IShellUIHelper9_ResetAllExperimentalFlagsAndValues(This) \
    ((This)->lpVtbl->ResetAllExperimentalFlagsAndValues(This))
#define IShellUIHelper9_GetNeedIEAutoLaunchFlag(This,bstrUrl,flag) \
    ((This)->lpVtbl->GetNeedIEAutoLaunchFlag(This,bstrUrl,flag))
#define IShellUIHelper9_SetNeedIEAutoLaunchFlag(This,bstrUrl,flag) \
    ((This)->lpVtbl->SetNeedIEAutoLaunchFlag(This,bstrUrl,flag))
#define IShellUIHelper9_HasNeedIEAutoLaunchFlag(This,bstrUrl,exists) \
    ((This)->lpVtbl->HasNeedIEAutoLaunchFlag(This,bstrUrl,exists))
#define IShellUIHelper9_LaunchIE(This,bstrUrl,automated) \
    ((This)->lpVtbl->LaunchIE(This,bstrUrl,automated))
/*** IShellUIHelper8 methods ***/
#define IShellUIHelper9_GetCVListData(This,pbstrResult) \
    ((This)->lpVtbl->GetCVListData(This,pbstrResult))
#define IShellUIHelper9_GetCVListLocalData(This,pbstrResult) \
    ((This)->lpVtbl->GetCVListLocalData(This,pbstrResult))
#define IShellUIHelper9_GetEMIEListData(This,pbstrResult) \
    ((This)->lpVtbl->GetEMIEListData(This,pbstrResult))
#define IShellUIHelper9_GetEMIEListLocalData(This,pbstrResult) \
    ((This)->lpVtbl->GetEMIEListLocalData(This,pbstrResult))
#define IShellUIHelper9_OpenFavoritesPane(This) \
    ((This)->lpVtbl->OpenFavoritesPane(This))
#define IShellUIHelper9_OpenFavoritesSettings(This) \
    ((This)->lpVtbl->OpenFavoritesSettings(This))
#define IShellUIHelper9_LaunchInHVSI(This,bstrUrl) \
    ((This)->lpVtbl->LaunchInHVSI(This,bstrUrl))
/*** IShellUIHelper9 methods ***/
#define IShellUIHelper9_GetOSSku(This,pdwResult) \
    ((This)->lpVtbl->GetOSSku(This,pdwResult))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellUIHelper9_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ShellUIHelper coclass
 */

EXTERN_C const CLSID CLSID_ShellUIHelper;

/*****************************************************************************
 * DShellNameSpaceEvents dispinterface
 */
#ifndef __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__
#define __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__

EXTERN_C const IID DIID_DShellNameSpaceEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct DShellNameSpaceEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        DShellNameSpaceEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        DShellNameSpaceEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        DShellNameSpaceEvents *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        DShellNameSpaceEvents *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        DShellNameSpaceEvents *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        DShellNameSpaceEvents *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        DShellNameSpaceEvents *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    END_INTERFACE
} DShellNameSpaceEventsVtbl;

interface DShellNameSpaceEvents {
    CONST_VTBL DShellNameSpaceEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define DShellNameSpaceEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define DShellNameSpaceEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define DShellNameSpaceEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define DShellNameSpaceEvents_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define DShellNameSpaceEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define DShellNameSpaceEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define DShellNameSpaceEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellFavoritesNameSpace interface
 */
#ifndef __IShellFavoritesNameSpace_INTERFACE_DEFINED__
#define __IShellFavoritesNameSpace_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellFavoritesNameSpace;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellFavoritesNameSpaceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellFavoritesNameSpace *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellFavoritesNameSpace *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellFavoritesNameSpace *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellFavoritesNameSpace *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellFavoritesNameSpace *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellFavoritesNameSpace *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellFavoritesNameSpace *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellFavoritesNameSpace methods ***/
    HRESULT (STDMETHODCALLTYPE *MoveSelectionUp)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *MoveSelectionDown)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *ResetSort)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *NewFolder)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *Synchronize)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *Import)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *Export)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *InvokeContextMenuCommand)(
        IShellFavoritesNameSpace *This,
        BSTR strCommand);

    HRESULT (STDMETHODCALLTYPE *MoveSelectionTo)(
        IShellFavoritesNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *get_SubscriptionsEnabled)(
        IShellFavoritesNameSpace *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *CreateSubscriptionForSelection)(
        IShellFavoritesNameSpace *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *DeleteSubscriptionForSelection)(
        IShellFavoritesNameSpace *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *SetRoot)(
        IShellFavoritesNameSpace *This,
        BSTR bstrFullPath);

    END_INTERFACE
} IShellFavoritesNameSpaceVtbl;

interface IShellFavoritesNameSpace {
    CONST_VTBL IShellFavoritesNameSpaceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellFavoritesNameSpace_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellFavoritesNameSpace_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellFavoritesNameSpace_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellFavoritesNameSpace_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellFavoritesNameSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellFavoritesNameSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellFavoritesNameSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellFavoritesNameSpace methods ***/
#define IShellFavoritesNameSpace_MoveSelectionUp(This) \
    ((This)->lpVtbl->MoveSelectionUp(This))
#define IShellFavoritesNameSpace_MoveSelectionDown(This) \
    ((This)->lpVtbl->MoveSelectionDown(This))
#define IShellFavoritesNameSpace_ResetSort(This) \
    ((This)->lpVtbl->ResetSort(This))
#define IShellFavoritesNameSpace_NewFolder(This) \
    ((This)->lpVtbl->NewFolder(This))
#define IShellFavoritesNameSpace_Synchronize(This) \
    ((This)->lpVtbl->Synchronize(This))
#define IShellFavoritesNameSpace_Import(This) \
    ((This)->lpVtbl->Import(This))
#define IShellFavoritesNameSpace_Export(This) \
    ((This)->lpVtbl->Export(This))
#define IShellFavoritesNameSpace_InvokeContextMenuCommand(This,strCommand) \
    ((This)->lpVtbl->InvokeContextMenuCommand(This,strCommand))
#define IShellFavoritesNameSpace_MoveSelectionTo(This) \
    ((This)->lpVtbl->MoveSelectionTo(This))
#define IShellFavoritesNameSpace_get_SubscriptionsEnabled(This,pBool) \
    ((This)->lpVtbl->get_SubscriptionsEnabled(This,pBool))
#define IShellFavoritesNameSpace_CreateSubscriptionForSelection(This,pBool) \
    ((This)->lpVtbl->CreateSubscriptionForSelection(This,pBool))
#define IShellFavoritesNameSpace_DeleteSubscriptionForSelection(This,pBool) \
    ((This)->lpVtbl->DeleteSubscriptionForSelection(This,pBool))
#define IShellFavoritesNameSpace_SetRoot(This,bstrFullPath) \
    ((This)->lpVtbl->SetRoot(This,bstrFullPath))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellFavoritesNameSpace_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellNameSpace interface
 */
#ifndef __IShellNameSpace_INTERFACE_DEFINED__
#define __IShellNameSpace_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellNameSpace;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellNameSpaceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellNameSpace *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellNameSpace *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellNameSpace *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IShellNameSpace *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IShellNameSpace *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IShellNameSpace *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IShellNameSpace *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IShellFavoritesNameSpace methods ***/
    HRESULT (STDMETHODCALLTYPE *MoveSelectionUp)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *MoveSelectionDown)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *ResetSort)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *NewFolder)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *Synchronize)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *Import)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *Export)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *InvokeContextMenuCommand)(
        IShellNameSpace *This,
        BSTR strCommand);

    HRESULT (STDMETHODCALLTYPE *MoveSelectionTo)(
        IShellNameSpace *This);

    HRESULT (STDMETHODCALLTYPE *get_SubscriptionsEnabled)(
        IShellNameSpace *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *CreateSubscriptionForSelection)(
        IShellNameSpace *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *DeleteSubscriptionForSelection)(
        IShellNameSpace *This,
        VARIANT_BOOL *pBool);

    HRESULT (STDMETHODCALLTYPE *SetRoot)(
        IShellNameSpace *This,
        BSTR bstrFullPath);

    /*** IShellNameSpace methods ***/
    HRESULT (STDMETHODCALLTYPE *get_EnumOptions)(
        IShellNameSpace *This,
        LONG *pgrfEnumFlags);

    HRESULT (STDMETHODCALLTYPE *put_EnumOptions)(
        IShellNameSpace *This,
        LONG lVal);

    HRESULT (STDMETHODCALLTYPE *get_SelectedItem)(
        IShellNameSpace *This,
        IDispatch **pItem);

    HRESULT (STDMETHODCALLTYPE *put_SelectedItem)(
        IShellNameSpace *This,
        IDispatch *pItem);

    HRESULT (STDMETHODCALLTYPE *get_Root)(
        IShellNameSpace *This,
        VARIANT *pvar);

    HRESULT (STDMETHODCALLTYPE *put_Root)(
        IShellNameSpace *This,
        VARIANT var);

    HRESULT (STDMETHODCALLTYPE *get_Depth)(
        IShellNameSpace *This,
        int *piDepth);

    HRESULT (STDMETHODCALLTYPE *put_Depth)(
        IShellNameSpace *This,
        int iDepth);

    HRESULT (STDMETHODCALLTYPE *get_Mode)(
        IShellNameSpace *This,
        UINT *puMode);

    HRESULT (STDMETHODCALLTYPE *put_Mode)(
        IShellNameSpace *This,
        UINT uMode);

    HRESULT (STDMETHODCALLTYPE *get_Flags)(
        IShellNameSpace *This,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *put_Flags)(
        IShellNameSpace *This,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *put_TVFlags)(
        IShellNameSpace *This,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *get_TVFlags)(
        IShellNameSpace *This,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *get_Columns)(
        IShellNameSpace *This,
        BSTR *bstrColumns);

    HRESULT (STDMETHODCALLTYPE *put_Columns)(
        IShellNameSpace *This,
        BSTR bstrColumns);

    HRESULT (STDMETHODCALLTYPE *get_CountViewTypes)(
        IShellNameSpace *This,
        int *piTypes);

    HRESULT (STDMETHODCALLTYPE *SetViewType)(
        IShellNameSpace *This,
        int iType);

    HRESULT (STDMETHODCALLTYPE *SelectedItems)(
        IShellNameSpace *This,
        IDispatch **ppid);

    HRESULT (STDMETHODCALLTYPE *Expand)(
        IShellNameSpace *This,
        VARIANT var,
        int iDepth);

    HRESULT (STDMETHODCALLTYPE *UnselectAll)(
        IShellNameSpace *This);

    END_INTERFACE
} IShellNameSpaceVtbl;

interface IShellNameSpace {
    CONST_VTBL IShellNameSpaceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellNameSpace_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellNameSpace_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellNameSpace_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IShellNameSpace_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IShellNameSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IShellNameSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IShellNameSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IShellFavoritesNameSpace methods ***/
#define IShellNameSpace_MoveSelectionUp(This) \
    ((This)->lpVtbl->MoveSelectionUp(This))
#define IShellNameSpace_MoveSelectionDown(This) \
    ((This)->lpVtbl->MoveSelectionDown(This))
#define IShellNameSpace_ResetSort(This) \
    ((This)->lpVtbl->ResetSort(This))
#define IShellNameSpace_NewFolder(This) \
    ((This)->lpVtbl->NewFolder(This))
#define IShellNameSpace_Synchronize(This) \
    ((This)->lpVtbl->Synchronize(This))
#define IShellNameSpace_Import(This) \
    ((This)->lpVtbl->Import(This))
#define IShellNameSpace_Export(This) \
    ((This)->lpVtbl->Export(This))
#define IShellNameSpace_InvokeContextMenuCommand(This,strCommand) \
    ((This)->lpVtbl->InvokeContextMenuCommand(This,strCommand))
#define IShellNameSpace_MoveSelectionTo(This) \
    ((This)->lpVtbl->MoveSelectionTo(This))
#define IShellNameSpace_get_SubscriptionsEnabled(This,pBool) \
    ((This)->lpVtbl->get_SubscriptionsEnabled(This,pBool))
#define IShellNameSpace_CreateSubscriptionForSelection(This,pBool) \
    ((This)->lpVtbl->CreateSubscriptionForSelection(This,pBool))
#define IShellNameSpace_DeleteSubscriptionForSelection(This,pBool) \
    ((This)->lpVtbl->DeleteSubscriptionForSelection(This,pBool))
#define IShellNameSpace_SetRoot(This,bstrFullPath) \
    ((This)->lpVtbl->SetRoot(This,bstrFullPath))
/*** IShellNameSpace methods ***/
#define IShellNameSpace_get_EnumOptions(This,pgrfEnumFlags) \
    ((This)->lpVtbl->get_EnumOptions(This,pgrfEnumFlags))
#define IShellNameSpace_put_EnumOptions(This,lVal) \
    ((This)->lpVtbl->put_EnumOptions(This,lVal))
#define IShellNameSpace_get_SelectedItem(This,pItem) \
    ((This)->lpVtbl->get_SelectedItem(This,pItem))
#define IShellNameSpace_put_SelectedItem(This,pItem) \
    ((This)->lpVtbl->put_SelectedItem(This,pItem))
#define IShellNameSpace_get_Root(This,pvar) \
    ((This)->lpVtbl->get_Root(This,pvar))
#define IShellNameSpace_put_Root(This,var) \
    ((This)->lpVtbl->put_Root(This,var))
#define IShellNameSpace_get_Depth(This,piDepth) \
    ((This)->lpVtbl->get_Depth(This,piDepth))
#define IShellNameSpace_put_Depth(This,iDepth) \
    ((This)->lpVtbl->put_Depth(This,iDepth))
#define IShellNameSpace_get_Mode(This,puMode) \
    ((This)->lpVtbl->get_Mode(This,puMode))
#define IShellNameSpace_put_Mode(This,uMode) \
    ((This)->lpVtbl->put_Mode(This,uMode))
#define IShellNameSpace_get_Flags(This,pdwFlags) \
    ((This)->lpVtbl->get_Flags(This,pdwFlags))
#define IShellNameSpace_put_Flags(This,dwFlags) \
    ((This)->lpVtbl->put_Flags(This,dwFlags))
#define IShellNameSpace_put_TVFlags(This,dwFlags) \
    ((This)->lpVtbl->put_TVFlags(This,dwFlags))
#define IShellNameSpace_get_TVFlags(This,dwFlags) \
    ((This)->lpVtbl->get_TVFlags(This,dwFlags))
#define IShellNameSpace_get_Columns(This,bstrColumns) \
    ((This)->lpVtbl->get_Columns(This,bstrColumns))
#define IShellNameSpace_put_Columns(This,bstrColumns) \
    ((This)->lpVtbl->put_Columns(This,bstrColumns))
#define IShellNameSpace_get_CountViewTypes(This,piTypes) \
    ((This)->lpVtbl->get_CountViewTypes(This,piTypes))
#define IShellNameSpace_SetViewType(This,iType) \
    ((This)->lpVtbl->SetViewType(This,iType))
#define IShellNameSpace_SelectedItems(This,ppid) \
    ((This)->lpVtbl->SelectedItems(This,ppid))
#define IShellNameSpace_Expand(This,var,iDepth) \
    ((This)->lpVtbl->Expand(This,var,iDepth))
#define IShellNameSpace_UnselectAll(This) \
    ((This)->lpVtbl->UnselectAll(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellNameSpace_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ShellNameSpace coclass
 */

EXTERN_C const CLSID CLSID_ShellNameSpace;

/*****************************************************************************
 * IScriptErrorList interface
 */
#ifndef __IScriptErrorList_INTERFACE_DEFINED__
#define __IScriptErrorList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IScriptErrorList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IScriptErrorListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IScriptErrorList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IScriptErrorList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IScriptErrorList *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IScriptErrorList *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IScriptErrorList *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IScriptErrorList *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IScriptErrorList *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IScriptErrorList methods ***/
    HRESULT (STDMETHODCALLTYPE *advanceError)(
        IScriptErrorList *This);

    HRESULT (STDMETHODCALLTYPE *retreatError)(
        IScriptErrorList *This);

    HRESULT (STDMETHODCALLTYPE *canAdvanceError)(
        IScriptErrorList *This,
        BOOL *pfCanAdvance);

    HRESULT (STDMETHODCALLTYPE *canRetreatError)(
        IScriptErrorList *This,
        BOOL *pfCanRetreat);

    HRESULT (STDMETHODCALLTYPE *getErrorLine)(
        IScriptErrorList *This,
        LONG *plLine);

    HRESULT (STDMETHODCALLTYPE *getErrorChar)(
        IScriptErrorList *This,
        LONG *plChar);

    HRESULT (STDMETHODCALLTYPE *getErrorCode)(
        IScriptErrorList *This,
        LONG *plCode);

    HRESULT (STDMETHODCALLTYPE *getErrorMsg)(
        IScriptErrorList *This,
        BSTR *pstr);

    HRESULT (STDMETHODCALLTYPE *getErrorUrl)(
        IScriptErrorList *This,
        BSTR *pstr);

    HRESULT (STDMETHODCALLTYPE *getAlwaysShowLockState)(
        IScriptErrorList *This,
        BOOL *pfAlwaysShowLocked);

    HRESULT (STDMETHODCALLTYPE *getDetailsPaneOpen)(
        IScriptErrorList *This,
        BOOL *pfDetailsPaneOpen);

    HRESULT (STDMETHODCALLTYPE *setDetailsPaneOpen)(
        IScriptErrorList *This,
        BOOL fDetailsPaneOpen);

    HRESULT (STDMETHODCALLTYPE *getPerErrorDisplay)(
        IScriptErrorList *This,
        BOOL *pfPerErrorDisplay);

    HRESULT (STDMETHODCALLTYPE *setPerErrorDisplay)(
        IScriptErrorList *This,
        BOOL fPerErrorDisplay);

    END_INTERFACE
} IScriptErrorListVtbl;

interface IScriptErrorList {
    CONST_VTBL IScriptErrorListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IScriptErrorList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IScriptErrorList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IScriptErrorList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IScriptErrorList_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IScriptErrorList_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IScriptErrorList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IScriptErrorList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** IScriptErrorList methods ***/
#define IScriptErrorList_advanceError(This) \
    ((This)->lpVtbl->advanceError(This))
#define IScriptErrorList_retreatError(This) \
    ((This)->lpVtbl->retreatError(This))
#define IScriptErrorList_canAdvanceError(This,pfCanAdvance) \
    ((This)->lpVtbl->canAdvanceError(This,pfCanAdvance))
#define IScriptErrorList_canRetreatError(This,pfCanRetreat) \
    ((This)->lpVtbl->canRetreatError(This,pfCanRetreat))
#define IScriptErrorList_getErrorLine(This,plLine) \
    ((This)->lpVtbl->getErrorLine(This,plLine))
#define IScriptErrorList_getErrorChar(This,plChar) \
    ((This)->lpVtbl->getErrorChar(This,plChar))
#define IScriptErrorList_getErrorCode(This,plCode) \
    ((This)->lpVtbl->getErrorCode(This,plCode))
#define IScriptErrorList_getErrorMsg(This,pstr) \
    ((This)->lpVtbl->getErrorMsg(This,pstr))
#define IScriptErrorList_getErrorUrl(This,pstr) \
    ((This)->lpVtbl->getErrorUrl(This,pstr))
#define IScriptErrorList_getAlwaysShowLockState(This,pfAlwaysShowLocked) \
    ((This)->lpVtbl->getAlwaysShowLockState(This,pfAlwaysShowLocked))
#define IScriptErrorList_getDetailsPaneOpen(This,pfDetailsPaneOpen) \
    ((This)->lpVtbl->getDetailsPaneOpen(This,pfDetailsPaneOpen))
#define IScriptErrorList_setDetailsPaneOpen(This,fDetailsPaneOpen) \
    ((This)->lpVtbl->setDetailsPaneOpen(This,fDetailsPaneOpen))
#define IScriptErrorList_getPerErrorDisplay(This,pfPerErrorDisplay) \
    ((This)->lpVtbl->getPerErrorDisplay(This,pfPerErrorDisplay))
#define IScriptErrorList_setPerErrorDisplay(This,fPerErrorDisplay) \
    ((This)->lpVtbl->setPerErrorDisplay(This,fPerErrorDisplay))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IScriptErrorList_INTERFACE_DEFINED__ */

/*****************************************************************************
 * CScriptErrorList coclass
 */

EXTERN_C const CLSID CLSID_CScriptErrorList;
#endif /* __SHDocVw_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER VARIANT_UserSize(ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal(ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(ULONG *, VARIANT *);

/* End additional prototypes for all interfaces */

#endif /* __exdisp_h__ */
