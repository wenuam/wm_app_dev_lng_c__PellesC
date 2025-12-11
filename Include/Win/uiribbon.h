/* Generated from uiribbon.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __uiribbon_h__
#define __uiribbon_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IUISimplePropertySet_FWD_DEFINED__
#define __IUISimplePropertySet_FWD_DEFINED__
typedef interface IUISimplePropertySet IUISimplePropertySet;
#endif /* __IUISimplePropertySet_FWD_DEFINED__ */

#ifndef __IUIRibbon_FWD_DEFINED__
#define __IUIRibbon_FWD_DEFINED__
typedef interface IUIRibbon IUIRibbon;
#endif /* __IUIRibbon_FWD_DEFINED__ */

#ifndef __IUIFramework_FWD_DEFINED__
#define __IUIFramework_FWD_DEFINED__
typedef interface IUIFramework IUIFramework;
#endif /* __IUIFramework_FWD_DEFINED__ */

#ifndef __IUIEventLogger_FWD_DEFINED__
#define __IUIEventLogger_FWD_DEFINED__
typedef interface IUIEventLogger IUIEventLogger;
#endif /* __IUIEventLogger_FWD_DEFINED__ */

#ifndef __IUIEventingManager_FWD_DEFINED__
#define __IUIEventingManager_FWD_DEFINED__
typedef interface IUIEventingManager IUIEventingManager;
#endif /* __IUIEventingManager_FWD_DEFINED__ */

#ifndef __IUIContextualUI_FWD_DEFINED__
#define __IUIContextualUI_FWD_DEFINED__
typedef interface IUIContextualUI IUIContextualUI;
#endif /* __IUIContextualUI_FWD_DEFINED__ */

#ifndef __IUICollection_FWD_DEFINED__
#define __IUICollection_FWD_DEFINED__
typedef interface IUICollection IUICollection;
#endif /* __IUICollection_FWD_DEFINED__ */

#ifndef __IUICollectionChangedEvent_FWD_DEFINED__
#define __IUICollectionChangedEvent_FWD_DEFINED__
typedef interface IUICollectionChangedEvent IUICollectionChangedEvent;
#endif /* __IUICollectionChangedEvent_FWD_DEFINED__ */

#ifndef __IUICommandHandler_FWD_DEFINED__
#define __IUICommandHandler_FWD_DEFINED__
typedef interface IUICommandHandler IUICommandHandler;
#endif /* __IUICommandHandler_FWD_DEFINED__ */

#ifndef __IUIApplication_FWD_DEFINED__
#define __IUIApplication_FWD_DEFINED__
typedef interface IUIApplication IUIApplication;
#endif /* __IUIApplication_FWD_DEFINED__ */

#ifndef __IUIImage_FWD_DEFINED__
#define __IUIImage_FWD_DEFINED__
typedef interface IUIImage IUIImage;
#endif /* __IUIImage_FWD_DEFINED__ */

#ifndef __IUIImageFromBitmap_FWD_DEFINED__
#define __IUIImageFromBitmap_FWD_DEFINED__
typedef interface IUIImageFromBitmap IUIImageFromBitmap;
#endif /* __IUIImageFromBitmap_FWD_DEFINED__ */

#ifndef __UIRibbonFramework_FWD_DEFINED__
#define __UIRibbonFramework_FWD_DEFINED__
typedef struct UIRibbonFramework UIRibbonFramework;
#endif /* __UIRibbonFramework_FWD_DEFINED__ */

#ifndef __UIRibbonImageFromBitmapFactory_FWD_DEFINED__
#define __UIRibbonImageFromBitmapFactory_FWD_DEFINED__
typedef struct UIRibbonImageFromBitmapFactory UIRibbonImageFromBitmapFactory;
#endif /* __UIRibbonImageFromBitmapFactory_FWD_DEFINED__ */

/* Headers for imported files */

#include "propsys.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <UIRibbonKeyDef.h>

DEFINE_UIPROPERTYKEY(UI_PKEY_Enabled,                      VT_BOOL,                1);
DEFINE_UIPROPERTYKEY(UI_PKEY_LabelDescription,             VT_LPWSTR,              2);
DEFINE_UIPROPERTYKEY(UI_PKEY_Keytip,                       VT_LPWSTR,              3);
DEFINE_UIPROPERTYKEY(UI_PKEY_Label,                        VT_LPWSTR,              4);
DEFINE_UIPROPERTYKEY(UI_PKEY_TooltipDescription,           VT_LPWSTR,              5);
DEFINE_UIPROPERTYKEY(UI_PKEY_TooltipTitle,                 VT_LPWSTR,              6);
DEFINE_UIPROPERTYKEY(UI_PKEY_LargeImage,                   VT_UNKNOWN,             7);
DEFINE_UIPROPERTYKEY(UI_PKEY_LargeHighContrastImage,       VT_UNKNOWN,             8);
DEFINE_UIPROPERTYKEY(UI_PKEY_SmallImage,                   VT_UNKNOWN,             9);
DEFINE_UIPROPERTYKEY(UI_PKEY_SmallHighContrastImage,       VT_UNKNOWN,             10);

DEFINE_UIPROPERTYKEY(UI_PKEY_CommandId,                    VT_UI4,                 100);
DEFINE_UIPROPERTYKEY(UI_PKEY_ItemsSource,                  VT_UNKNOWN,             101);
DEFINE_UIPROPERTYKEY(UI_PKEY_Categories,                   VT_UNKNOWN,             102);
DEFINE_UIPROPERTYKEY(UI_PKEY_CategoryId,                   VT_UI4,                 103);
DEFINE_UIPROPERTYKEY(UI_PKEY_SelectedItem,                 VT_UI4,                 104);
DEFINE_UIPROPERTYKEY(UI_PKEY_CommandType,                  VT_UI4,                 105);
DEFINE_UIPROPERTYKEY(UI_PKEY_ItemImage,                    VT_UNKNOWN,             106);

DEFINE_UIPROPERTYKEY(UI_PKEY_BooleanValue,                 VT_BOOL,                200);
DEFINE_UIPROPERTYKEY(UI_PKEY_DecimalValue,                 VT_DECIMAL,             201);
DEFINE_UIPROPERTYKEY(UI_PKEY_StringValue,                  VT_LPWSTR,              202);
DEFINE_UIPROPERTYKEY(UI_PKEY_MaxValue,                     VT_DECIMAL,             203);
DEFINE_UIPROPERTYKEY(UI_PKEY_MinValue,                     VT_DECIMAL,             204);
DEFINE_UIPROPERTYKEY(UI_PKEY_Increment,                    VT_DECIMAL,             205);
DEFINE_UIPROPERTYKEY(UI_PKEY_DecimalPlaces,                VT_UI4,                 206);
DEFINE_UIPROPERTYKEY(UI_PKEY_FormatString,                 VT_LPWSTR,              207);
DEFINE_UIPROPERTYKEY(UI_PKEY_RepresentativeString,         VT_LPWSTR,              208);

DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties,                     VT_UNKNOWN,             300);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Family,              VT_LPWSTR,              301);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Size,                VT_DECIMAL,             302);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Bold,                VT_UI4,                 303);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Italic,              VT_UI4,                 304);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Underline,           VT_UI4,                 305);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_Strikethrough,       VT_UI4,                 306);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_VerticalPositioning, VT_UI4,                 307);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_ForegroundColor,     VT_UI4,                 308);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_BackgroundColor,     VT_UI4,                 309);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_ForegroundColorType, VT_UI4,                 310);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_BackgroundColorType, VT_UI4,                 311);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_ChangedProperties,   VT_UNKNOWN,             312);
DEFINE_UIPROPERTYKEY(UI_PKEY_FontProperties_DeltaSize,           VT_UI4,                 313);

DEFINE_UIPROPERTYKEY(UI_PKEY_RecentItems,                  VT_ARRAY|VT_UNKNOWN,    350);
DEFINE_UIPROPERTYKEY(UI_PKEY_Pinned,                       VT_BOOL,                351);

DEFINE_UIPROPERTYKEY(UI_PKEY_Color,                        VT_UI4,                 400);
DEFINE_UIPROPERTYKEY(UI_PKEY_ColorType,                    VT_UI4,                 401);
DEFINE_UIPROPERTYKEY(UI_PKEY_ColorMode,                    VT_UI4,                 402);
DEFINE_UIPROPERTYKEY(UI_PKEY_ThemeColorsCategoryLabel,     VT_LPWSTR,              403);
DEFINE_UIPROPERTYKEY(UI_PKEY_StandardColorsCategoryLabel,  VT_LPWSTR,              404);
DEFINE_UIPROPERTYKEY(UI_PKEY_RecentColorsCategoryLabel,    VT_LPWSTR,              405);
DEFINE_UIPROPERTYKEY(UI_PKEY_AutomaticColorLabel,          VT_LPWSTR,              406);
DEFINE_UIPROPERTYKEY(UI_PKEY_NoColorLabel,                 VT_LPWSTR,              407);
DEFINE_UIPROPERTYKEY(UI_PKEY_MoreColorsLabel,              VT_LPWSTR,              408);
DEFINE_UIPROPERTYKEY(UI_PKEY_ThemeColors,                  VT_VECTOR|VT_UI4,       409);
DEFINE_UIPROPERTYKEY(UI_PKEY_StandardColors,               VT_VECTOR|VT_UI4,       410);
DEFINE_UIPROPERTYKEY(UI_PKEY_ThemeColorsTooltips,          VT_VECTOR|VT_LPWSTR,    411);
DEFINE_UIPROPERTYKEY(UI_PKEY_StandardColorsTooltips,       VT_VECTOR|VT_LPWSTR,    412);

DEFINE_UIPROPERTYKEY(UI_PKEY_Viewable,                     VT_BOOL,                1000);
DEFINE_UIPROPERTYKEY(UI_PKEY_Minimized,                    VT_BOOL,                1001);
DEFINE_UIPROPERTYKEY(UI_PKEY_QuickAccessToolbarDock,       VT_UI4,                 1002);

DEFINE_UIPROPERTYKEY(UI_PKEY_ContextAvailable,             VT_UI4,                 1100);

DEFINE_UIPROPERTYKEY(UI_PKEY_GlobalBackgroundColor,        VT_UI4,                 2000);
DEFINE_UIPROPERTYKEY(UI_PKEY_GlobalHighlightColor,         VT_UI4,                 2001);
DEFINE_UIPROPERTYKEY(UI_PKEY_GlobalTextColor,              VT_UI4,                 2002);

typedef DWORD UI_HSBCOLOR;
__inline UI_HSBCOLOR UI_HSB(BYTE hue, BYTE saturation, BYTE brightness)
{
    return hue | (saturation << 8) | (brightness << 16);
}

typedef enum UI_CONTEXTAVAILABILITY {
    UI_CONTEXTAVAILABILITY_NOTAVAILABLE = 0,
    UI_CONTEXTAVAILABILITY_AVAILABLE = 1,
    UI_CONTEXTAVAILABILITY_ACTIVE = 2
} UI_CONTEXTAVAILABILITY;

typedef enum UI_FONTPROPERTIES {
    UI_FONTPROPERTIES_NOTAVAILABLE = 0,
    UI_FONTPROPERTIES_NOTSET = 1,
    UI_FONTPROPERTIES_SET = 2
} UI_FONTPROPERTIES;

typedef enum UI_FONTVERTICALPOSITION {
    UI_FONTVERTICALPOSITION_NOTAVAILABLE = 0,
    UI_FONTVERTICALPOSITION_NOTSET = 1,
    UI_FONTVERTICALPOSITION_SUPERSCRIPT = 2,
    UI_FONTVERTICALPOSITION_SUBSCRIPT = 3
} UI_FONTVERTICALPOSITION;

typedef enum UI_FONTUNDERLINE {
    UI_FONTUNDERLINE_NOTAVAILABLE = 0,
    UI_FONTUNDERLINE_NOTSET = 1,
    UI_FONTUNDERLINE_SET = 2
} UI_FONTUNDERLINE;

typedef enum UI_FONTDELTASIZE {
    UI_FONTDELTASIZE_GROW = 0,
    UI_FONTDELTASIZE_SHRINK = 1
} UI_FONTDELTASIZE;

typedef enum UI_CONTROLDOCK {
    UI_CONTROLDOCK_TOP = 1,
    UI_CONTROLDOCK_BOTTOM = 3
} UI_CONTROLDOCK;

typedef enum UI_SWATCHCOLORTYPE {
    UI_SWATCHCOLORTYPE_NOCOLOR = 0,
    UI_SWATCHCOLORTYPE_AUTOMATIC = 1,
    UI_SWATCHCOLORTYPE_RGB = 2
} UI_SWATCHCOLORTYPE;

typedef enum UI_SWATCHCOLORMODE {
    UI_SWATCHCOLORMODE_NORMAL = 0,
    UI_SWATCHCOLORMODE_MONOCHROME = 1
} UI_SWATCHCOLORMODE;

typedef enum UI_EVENTTYPE {
    UI_EVENTTYPE_ApplicationMenuOpened = 0,
    UI_EVENTTYPE_RibbonMinimized = 1,
    UI_EVENTTYPE_RibbonExpanded = 2,
    UI_EVENTTYPE_ApplicationModeSwitched = 3,
    UI_EVENTTYPE_TabActivated = 4,
    UI_EVENTTYPE_MenuOpened = 5,
    UI_EVENTTYPE_CommandExecuted = 6,
    UI_EVENTTYPE_TooltipShown = 7
} UI_EVENTTYPE;

typedef enum UI_EVENTLOCATION {
    UI_EVENTLOCATION_Ribbon = 0,
    UI_EVENTLOCATION_QAT = 1,
    UI_EVENTLOCATION_ApplicationMenu = 2,
    UI_EVENTLOCATION_ContextPopup = 3
} UI_EVENTLOCATION;

/*****************************************************************************
 * IUISimplePropertySet interface
 */
#ifndef __IUISimplePropertySet_INTERFACE_DEFINED__
#define __IUISimplePropertySet_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUISimplePropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUISimplePropertySetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUISimplePropertySet *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUISimplePropertySet *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUISimplePropertySet *This);

    /*** IUISimplePropertySet methods ***/
    HRESULT (STDMETHODCALLTYPE *GetValue)(
        IUISimplePropertySet *This,
        REFPROPERTYKEY key,
        PROPVARIANT *value);

    END_INTERFACE
} IUISimplePropertySetVtbl;

interface IUISimplePropertySet {
    CONST_VTBL IUISimplePropertySetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUISimplePropertySet_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUISimplePropertySet_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUISimplePropertySet_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUISimplePropertySet methods ***/
#define IUISimplePropertySet_GetValue(This,key,value) \
    ((This)->lpVtbl->GetValue(This,key,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUISimplePropertySet_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUIRibbon interface
 */
#ifndef __IUIRibbon_INTERFACE_DEFINED__
#define __IUIRibbon_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUIRibbon;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIRibbonVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIRibbon *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIRibbon *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIRibbon *This);

    /*** IUIRibbon methods ***/
    HRESULT (STDMETHODCALLTYPE *GetHeight)(
        IUIRibbon *This,
        UINT32 *cy);

    HRESULT (STDMETHODCALLTYPE *LoadSettingsFromStream)(
        IUIRibbon *This,
        IStream *pStream);

    HRESULT (STDMETHODCALLTYPE *SaveSettingsToStream)(
        IUIRibbon *This,
        IStream *pStream);

    END_INTERFACE
} IUIRibbonVtbl;

interface IUIRibbon {
    CONST_VTBL IUIRibbonVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIRibbon_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIRibbon_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIRibbon_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIRibbon methods ***/
#define IUIRibbon_GetHeight(This,cy) \
    ((This)->lpVtbl->GetHeight(This,cy))
#define IUIRibbon_LoadSettingsFromStream(This,pStream) \
    ((This)->lpVtbl->LoadSettingsFromStream(This,pStream))
#define IUIRibbon_SaveSettingsToStream(This,pStream) \
    ((This)->lpVtbl->SaveSettingsToStream(This,pStream))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIRibbon_INTERFACE_DEFINED__ */


#ifndef __IUIApplication_FWD_DEFINED__
#define __IUIApplication_FWD_DEFINED__
typedef interface IUIApplication IUIApplication;
#endif /* __IUIApplication_FWD_DEFINED__ */

/*****************************************************************************
 * IUIFramework interface
 */
#ifndef __IUIFramework_INTERFACE_DEFINED__
#define __IUIFramework_INTERFACE_DEFINED__

typedef enum UI_INVALIDATIONS {
    UI_INVALIDATIONS_STATE = 0x1,
    UI_INVALIDATIONS_VALUE = 0x2,
    UI_INVALIDATIONS_PROPERTY = 0x4,
    UI_INVALIDATIONS_ALLPROPERTIES = 0x8
} UI_INVALIDATIONS;

#define UI_ALL_COMMANDS  (0)

EXTERN_C const IID IID_IUIFramework;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIFrameworkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIFramework *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIFramework *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIFramework *This);

    /*** IUIFramework methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IUIFramework *This,
        HWND frameWnd,
        IUIApplication *application);

    HRESULT (STDMETHODCALLTYPE *Destroy)(
        IUIFramework *This);

    HRESULT (STDMETHODCALLTYPE *LoadUI)(
        IUIFramework *This,
        HINSTANCE instance,
        LPCWSTR resourceName);

    HRESULT (STDMETHODCALLTYPE *GetView)(
        IUIFramework *This,
        UINT32 viewId,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetUICommandProperty)(
        IUIFramework *This,
        UINT32 commandId,
        REFPROPERTYKEY key,
        PROPVARIANT *value);

    HRESULT (STDMETHODCALLTYPE *SetUICommandProperty)(
        IUIFramework *This,
        UINT32 commandId,
        REFPROPERTYKEY key,
        REFPROPVARIANT value);

    HRESULT (STDMETHODCALLTYPE *InvalidateUICommand)(
        IUIFramework *This,
        UINT32 commandId,
        UI_INVALIDATIONS flags,
        const PROPERTYKEY *key);

    HRESULT (STDMETHODCALLTYPE *FlushPendingInvalidations)(
        IUIFramework *This);

    HRESULT (STDMETHODCALLTYPE *SetModes)(
        IUIFramework *This,
        INT32 iModes);

    END_INTERFACE
} IUIFrameworkVtbl;

interface IUIFramework {
    CONST_VTBL IUIFrameworkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIFramework_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIFramework_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIFramework_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIFramework methods ***/
#define IUIFramework_Initialize(This,frameWnd,application) \
    ((This)->lpVtbl->Initialize(This,frameWnd,application))
#define IUIFramework_Destroy(This) \
    ((This)->lpVtbl->Destroy(This))
#define IUIFramework_LoadUI(This,instance,resourceName) \
    ((This)->lpVtbl->LoadUI(This,instance,resourceName))
#define IUIFramework_GetView(This,viewId,riid,ppv) \
    ((This)->lpVtbl->GetView(This,viewId,riid,ppv))
#define IUIFramework_GetUICommandProperty(This,commandId,key,value) \
    ((This)->lpVtbl->GetUICommandProperty(This,commandId,key,value))
#define IUIFramework_SetUICommandProperty(This,commandId,key,value) \
    ((This)->lpVtbl->SetUICommandProperty(This,commandId,key,value))
#define IUIFramework_InvalidateUICommand(This,commandId,flags,key) \
    ((This)->lpVtbl->InvalidateUICommand(This,commandId,flags,key))
#define IUIFramework_FlushPendingInvalidations(This) \
    ((This)->lpVtbl->FlushPendingInvalidations(This))
#define IUIFramework_SetModes(This,iModes) \
    ((This)->lpVtbl->SetModes(This,iModes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIFramework_INTERFACE_DEFINED__ */

#ifdef __midl
typedef void *UI_EVENTPARAMS;
#else /* !__midl */
typedef struct _UI_EVENTPARAMS_COMMAND {
    UINT CommandID;
    PCWSTR CommandName;
    UINT ParentCommandID;
    PCWSTR ParentCommandName;
    UINT SelectionIndex;
    UI_EVENTLOCATION Location;
} UI_EVENTPARAMS_COMMAND;
typedef struct _UI_EVENTPARAMS {
    UI_EVENTTYPE EventType;
    union {
        INT32 Modes;
        UI_EVENTPARAMS_COMMAND Params;
    };
} UI_EVENTPARAMS;
#endif /* !__midl */

/*****************************************************************************
 * IUIEventLogger interface
 */
#ifndef __IUIEventLogger_INTERFACE_DEFINED__
#define __IUIEventLogger_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUIEventLogger;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIEventLoggerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIEventLogger *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIEventLogger *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIEventLogger *This);

    /*** IUIEventLogger methods ***/
    void (STDMETHODCALLTYPE *OnUIEvent)(
        IUIEventLogger *This,
        UI_EVENTPARAMS *pEventParams);

    END_INTERFACE
} IUIEventLoggerVtbl;

interface IUIEventLogger {
    CONST_VTBL IUIEventLoggerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIEventLogger_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIEventLogger_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIEventLogger_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIEventLogger methods ***/
#define IUIEventLogger_OnUIEvent(This,pEventParams) \
    ((This)->lpVtbl->OnUIEvent(This,pEventParams))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIEventLogger_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUIEventingManager interface
 */
#ifndef __IUIEventingManager_INTERFACE_DEFINED__
#define __IUIEventingManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUIEventingManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIEventingManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIEventingManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIEventingManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIEventingManager *This);

    /*** IUIEventingManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetEventLogger)(
        IUIEventingManager *This,
        IUIEventLogger *eventLogger);

    END_INTERFACE
} IUIEventingManagerVtbl;

interface IUIEventingManager {
    CONST_VTBL IUIEventingManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIEventingManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIEventingManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIEventingManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIEventingManager methods ***/
#define IUIEventingManager_SetEventLogger(This,eventLogger) \
    ((This)->lpVtbl->SetEventLogger(This,eventLogger))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIEventingManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUIContextualUI interface
 */
#ifndef __IUIContextualUI_INTERFACE_DEFINED__
#define __IUIContextualUI_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUIContextualUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIContextualUIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIContextualUI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIContextualUI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIContextualUI *This);

    /*** IUIContextualUI methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowAtLocation)(
        IUIContextualUI *This,
        INT32 x,
        INT32 y);

    END_INTERFACE
} IUIContextualUIVtbl;

interface IUIContextualUI {
    CONST_VTBL IUIContextualUIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIContextualUI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIContextualUI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIContextualUI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIContextualUI methods ***/
#define IUIContextualUI_ShowAtLocation(This,x,y) \
    ((This)->lpVtbl->ShowAtLocation(This,x,y))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIContextualUI_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUICollection interface
 */
#ifndef __IUICollection_INTERFACE_DEFINED__
#define __IUICollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUICollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUICollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUICollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUICollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUICollection *This);

    /*** IUICollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IUICollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IUICollection *This,
        UINT32 index,
        IUnknown **item);

    HRESULT (STDMETHODCALLTYPE *Add)(
        IUICollection *This,
        IUnknown *item);

    HRESULT (STDMETHODCALLTYPE *Insert)(
        IUICollection *This,
        UINT32 index,
        IUnknown *item);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IUICollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *Replace)(
        IUICollection *This,
        UINT32 indexReplaced,
        IUnknown *itemReplaceWith);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IUICollection *This);

    END_INTERFACE
} IUICollectionVtbl;

interface IUICollection {
    CONST_VTBL IUICollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUICollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUICollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUICollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUICollection methods ***/
#define IUICollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IUICollection_GetItem(This,index,item) \
    ((This)->lpVtbl->GetItem(This,index,item))
#define IUICollection_Add(This,item) \
    ((This)->lpVtbl->Add(This,item))
#define IUICollection_Insert(This,index,item) \
    ((This)->lpVtbl->Insert(This,index,item))
#define IUICollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IUICollection_Replace(This,indexReplaced,itemReplaceWith) \
    ((This)->lpVtbl->Replace(This,indexReplaced,itemReplaceWith))
#define IUICollection_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUICollection_INTERFACE_DEFINED__ */

typedef enum UI_COLLECTIONCHANGE {
    UI_COLLECTIONCHANGE_INSERT = 0,
    UI_COLLECTIONCHANGE_REMOVE = 1,
    UI_COLLECTIONCHANGE_REPLACE = 2,
    UI_COLLECTIONCHANGE_RESET = 3
} UI_COLLECTIONCHANGE;

#define UI_COLLECTION_INVALIDINDEX  (0xffffffff)

/*****************************************************************************
 * IUICollectionChangedEvent interface
 */
#ifndef __IUICollectionChangedEvent_INTERFACE_DEFINED__
#define __IUICollectionChangedEvent_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUICollectionChangedEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUICollectionChangedEventVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUICollectionChangedEvent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUICollectionChangedEvent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUICollectionChangedEvent *This);

    /*** IUICollectionChangedEvent methods ***/
    HRESULT (STDMETHODCALLTYPE *OnChanged)(
        IUICollectionChangedEvent *This,
        UI_COLLECTIONCHANGE action,
        UINT32 oldIndex,
        IUnknown *oldItem,
        UINT32 newIndex,
        IUnknown *newItem);

    END_INTERFACE
} IUICollectionChangedEventVtbl;

interface IUICollectionChangedEvent {
    CONST_VTBL IUICollectionChangedEventVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUICollectionChangedEvent_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUICollectionChangedEvent_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUICollectionChangedEvent_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUICollectionChangedEvent methods ***/
#define IUICollectionChangedEvent_OnChanged(This,action,oldIndex,oldItem,newIndex,newItem) \
    ((This)->lpVtbl->OnChanged(This,action,oldIndex,oldItem,newIndex,newItem))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUICollectionChangedEvent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUICommandHandler interface
 */
#ifndef __IUICommandHandler_INTERFACE_DEFINED__
#define __IUICommandHandler_INTERFACE_DEFINED__

typedef enum UI_EXECUTIONVERB {
    UI_EXECUTIONVERB_EXECUTE = 0,
    UI_EXECUTIONVERB_PREVIEW = 1,
    UI_EXECUTIONVERB_CANCELPREVIEW = 2
} UI_EXECUTIONVERB;

EXTERN_C const IID IID_IUICommandHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUICommandHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUICommandHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUICommandHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUICommandHandler *This);

    /*** IUICommandHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *Execute)(
        IUICommandHandler *This,
        UINT32 commandId,
        UI_EXECUTIONVERB verb,
        const PROPERTYKEY *key,
        const PROPVARIANT *currentValue,
        IUISimplePropertySet *commandExecutionProperties);

    HRESULT (STDMETHODCALLTYPE *UpdateProperty)(
        IUICommandHandler *This,
        UINT32 commandId,
        REFPROPERTYKEY key,
        const PROPVARIANT *currentValue,
        PROPVARIANT *newValue);

    END_INTERFACE
} IUICommandHandlerVtbl;

interface IUICommandHandler {
    CONST_VTBL IUICommandHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUICommandHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUICommandHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUICommandHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUICommandHandler methods ***/
#define IUICommandHandler_Execute(This,commandId,verb,key,currentValue,commandExecutionProperties) \
    ((This)->lpVtbl->Execute(This,commandId,verb,key,currentValue,commandExecutionProperties))
#define IUICommandHandler_UpdateProperty(This,commandId,key,currentValue,newValue) \
    ((This)->lpVtbl->UpdateProperty(This,commandId,key,currentValue,newValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUICommandHandler_INTERFACE_DEFINED__ */

typedef enum UI_COMMANDTYPE {
    UI_COMMANDTYPE_UNKNOWN = 0,
    UI_COMMANDTYPE_GROUP = 1,
    UI_COMMANDTYPE_ACTION = 2,
    UI_COMMANDTYPE_ANCHOR = 3,
    UI_COMMANDTYPE_CONTEXT = 4,
    UI_COMMANDTYPE_COLLECTION = 5,
    UI_COMMANDTYPE_COMMANDCOLLECTION = 6,
    UI_COMMANDTYPE_DECIMAL = 7,
    UI_COMMANDTYPE_BOOLEAN = 8,
    UI_COMMANDTYPE_FONT = 9,
    UI_COMMANDTYPE_RECENTITEMS = 10,
    UI_COMMANDTYPE_COLORANCHOR = 11,
    UI_COMMANDTYPE_COLORCOLLECTION = 12
} UI_COMMANDTYPE;

typedef enum UI_VIEWTYPE {
    UI_VIEWTYPE_RIBBON = 1
} UI_VIEWTYPE;

/*****************************************************************************
 * IUIApplication interface
 */
#ifndef __IUIApplication_INTERFACE_DEFINED__
#define __IUIApplication_INTERFACE_DEFINED__

typedef enum UI_VIEWVERB {
    UI_VIEWVERB_CREATE = 0,
    UI_VIEWVERB_DESTROY = 1,
    UI_VIEWVERB_SIZE = 2,
    UI_VIEWVERB_ERROR = 3
} UI_VIEWVERB;

EXTERN_C const IID IID_IUIApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIApplicationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIApplication *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIApplication *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIApplication *This);

    /*** IUIApplication methods ***/
    HRESULT (STDMETHODCALLTYPE *OnViewChanged)(
        IUIApplication *This,
        UINT32 viewId,
        UI_VIEWTYPE typeID,
        IUnknown *view,
        UI_VIEWVERB verb,
        INT32 uReasonCode);

    HRESULT (STDMETHODCALLTYPE *OnCreateUICommand)(
        IUIApplication *This,
        UINT32 commandId,
        UI_COMMANDTYPE typeID,
        IUICommandHandler **commandHandler);

    HRESULT (STDMETHODCALLTYPE *OnDestroyUICommand)(
        IUIApplication *This,
        UINT32 commandId,
        UI_COMMANDTYPE typeID,
        IUICommandHandler *commandHandler);

    END_INTERFACE
} IUIApplicationVtbl;

interface IUIApplication {
    CONST_VTBL IUIApplicationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIApplication_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIApplication_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIApplication_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIApplication methods ***/
#define IUIApplication_OnViewChanged(This,viewId,typeID,view,verb,uReasonCode) \
    ((This)->lpVtbl->OnViewChanged(This,viewId,typeID,view,verb,uReasonCode))
#define IUIApplication_OnCreateUICommand(This,commandId,typeID,commandHandler) \
    ((This)->lpVtbl->OnCreateUICommand(This,commandId,typeID,commandHandler))
#define IUIApplication_OnDestroyUICommand(This,commandId,typeID,commandHandler) \
    ((This)->lpVtbl->OnDestroyUICommand(This,commandId,typeID,commandHandler))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIApplication_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUIImage interface
 */
#ifndef __IUIImage_INTERFACE_DEFINED__
#define __IUIImage_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUIImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIImageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIImage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIImage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIImage *This);

    /*** IUIImage methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBitmap)(
        IUIImage *This,
        HBITMAP *bitmap);

    END_INTERFACE
} IUIImageVtbl;

interface IUIImage {
    CONST_VTBL IUIImageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIImage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIImage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIImage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIImage methods ***/
#define IUIImage_GetBitmap(This,bitmap) \
    ((This)->lpVtbl->GetBitmap(This,bitmap))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIImage_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUIImageFromBitmap interface
 */
#ifndef __IUIImageFromBitmap_INTERFACE_DEFINED__
#define __IUIImageFromBitmap_INTERFACE_DEFINED__

typedef enum UI_OWNERSHIP {
    UI_OWNERSHIP_TRANSFER = 0,
    UI_OWNERSHIP_COPY = 1
} UI_OWNERSHIP;

EXTERN_C const IID IID_IUIImageFromBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUIImageFromBitmapVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUIImageFromBitmap *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUIImageFromBitmap *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUIImageFromBitmap *This);

    /*** IUIImageFromBitmap methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateImage)(
        IUIImageFromBitmap *This,
        HBITMAP bitmap,
        UI_OWNERSHIP options,
        IUIImage **image);

    END_INTERFACE
} IUIImageFromBitmapVtbl;

interface IUIImageFromBitmap {
    CONST_VTBL IUIImageFromBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUIImageFromBitmap_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUIImageFromBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUIImageFromBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUIImageFromBitmap methods ***/
#define IUIImageFromBitmap_CreateImage(This,bitmap,options,image) \
    ((This)->lpVtbl->CreateImage(This,bitmap,options,image))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUIImageFromBitmap_INTERFACE_DEFINED__ */

#define UI_MAKEAPPMODE(x) (1 << (x))

DEFINE_GUID(CLSID_UIRibbonFramework,0x926749fa, 0x2615, 0x4987, 0x88, 0x45, 0xc3, 0x3e, 0x65, 0xf2, 0xb9, 0x57);
DEFINE_GUID(CLSID_UIRibbonImageFromBitmapFactory,
                                    0x0f7434b6, 0x59b6, 0x4250, 0x99, 0x9e, 0xd1, 0x68, 0xd6, 0xae, 0x42, 0x93);
DEFINE_GUID(LIBID_UIRibbon,         0x942f35c2, 0xe83b, 0x45ef, 0xb0, 0x85, 0xac, 0x29, 0x5d, 0xd6, 0x3d, 0x5b);

#ifndef __UIRibbon_LIBRARY_DEFINED__
#define __UIRibbon_LIBRARY_DEFINED__


/*****************************************************************************
 * UIRibbonFramework coclass
 */

EXTERN_C const CLSID CLSID_UIRibbonFramework;

/*****************************************************************************
 * UIRibbonImageFromBitmapFactory coclass
 */

EXTERN_C const CLSID CLSID_UIRibbonImageFromBitmapFactory;
#endif /* __UIRibbon_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __uiribbon_h__ */
