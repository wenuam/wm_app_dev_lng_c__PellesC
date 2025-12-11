/* Generated from shobjidl.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __shobjidl_h__
#define __shobjidl_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IQueryCodePage_FWD_DEFINED__
#define __IQueryCodePage_FWD_DEFINED__
typedef interface IQueryCodePage IQueryCodePage;
#endif /* __IQueryCodePage_FWD_DEFINED__ */

#ifndef __IFolderViewOptions_FWD_DEFINED__
#define __IFolderViewOptions_FWD_DEFINED__
typedef interface IFolderViewOptions IFolderViewOptions;
#endif /* __IFolderViewOptions_FWD_DEFINED__ */

#ifndef __IShellView3_FWD_DEFINED__
#define __IShellView3_FWD_DEFINED__
typedef interface IShellView3 IShellView3;
#endif /* __IShellView3_FWD_DEFINED__ */

#ifndef __ISearchBoxInfo_FWD_DEFINED__
#define __ISearchBoxInfo_FWD_DEFINED__
typedef interface ISearchBoxInfo ISearchBoxInfo;
#endif /* __ISearchBoxInfo_FWD_DEFINED__ */

#ifndef __IVisualProperties_FWD_DEFINED__
#define __IVisualProperties_FWD_DEFINED__
typedef interface IVisualProperties IVisualProperties;
#endif /* __IVisualProperties_FWD_DEFINED__ */

#ifndef __ICommDlgBrowser3_FWD_DEFINED__
#define __ICommDlgBrowser3_FWD_DEFINED__
typedef interface ICommDlgBrowser3 ICommDlgBrowser3;
#endif /* __ICommDlgBrowser3_FWD_DEFINED__ */

#ifndef __IUserAccountChangeCallback_FWD_DEFINED__
#define __IUserAccountChangeCallback_FWD_DEFINED__
typedef interface IUserAccountChangeCallback IUserAccountChangeCallback;
#endif /* __IUserAccountChangeCallback_FWD_DEFINED__ */

#ifndef __IStreamAsync_FWD_DEFINED__
#define __IStreamAsync_FWD_DEFINED__
typedef interface IStreamAsync IStreamAsync;
#endif /* __IStreamAsync_FWD_DEFINED__ */

#ifndef __IStreamUnbufferedInfo_FWD_DEFINED__
#define __IStreamUnbufferedInfo_FWD_DEFINED__
typedef interface IStreamUnbufferedInfo IStreamUnbufferedInfo;
#endif /* __IStreamUnbufferedInfo_FWD_DEFINED__ */

#ifndef __IDragSourceHelper2_FWD_DEFINED__
#define __IDragSourceHelper2_FWD_DEFINED__
typedef interface IDragSourceHelper2 IDragSourceHelper2;
#endif /* __IDragSourceHelper2_FWD_DEFINED__ */

#ifndef __IHWEventHandler_FWD_DEFINED__
#define __IHWEventHandler_FWD_DEFINED__
typedef interface IHWEventHandler IHWEventHandler;
#endif /* __IHWEventHandler_FWD_DEFINED__ */

#ifndef __IHWEventHandler2_FWD_DEFINED__
#define __IHWEventHandler2_FWD_DEFINED__
typedef interface IHWEventHandler2 IHWEventHandler2;
#endif /* __IHWEventHandler2_FWD_DEFINED__ */

#ifndef __IQueryCancelAutoPlay_FWD_DEFINED__
#define __IQueryCancelAutoPlay_FWD_DEFINED__
typedef interface IQueryCancelAutoPlay IQueryCancelAutoPlay;
#endif /* __IQueryCancelAutoPlay_FWD_DEFINED__ */

#ifndef __IDynamicHWHandler_FWD_DEFINED__
#define __IDynamicHWHandler_FWD_DEFINED__
typedef interface IDynamicHWHandler IDynamicHWHandler;
#endif /* __IDynamicHWHandler_FWD_DEFINED__ */

#ifndef __IUserNotificationCallback_FWD_DEFINED__
#define __IUserNotificationCallback_FWD_DEFINED__
typedef interface IUserNotificationCallback IUserNotificationCallback;
#endif /* __IUserNotificationCallback_FWD_DEFINED__ */

#ifndef __IUserNotification2_FWD_DEFINED__
#define __IUserNotification2_FWD_DEFINED__
typedef interface IUserNotification2 IUserNotification2;
#endif /* __IUserNotification2_FWD_DEFINED__ */

#ifndef __IDeskBand2_FWD_DEFINED__
#define __IDeskBand2_FWD_DEFINED__
typedef interface IDeskBand2 IDeskBand2;
#endif /* __IDeskBand2_FWD_DEFINED__ */

#ifndef __IStartMenuPinnedList_FWD_DEFINED__
#define __IStartMenuPinnedList_FWD_DEFINED__
typedef interface IStartMenuPinnedList IStartMenuPinnedList;
#endif /* __IStartMenuPinnedList_FWD_DEFINED__ */

#ifndef __ICDBurn_FWD_DEFINED__
#define __ICDBurn_FWD_DEFINED__
typedef interface ICDBurn ICDBurn;
#endif /* __ICDBurn_FWD_DEFINED__ */

#ifndef __IWizardSite_FWD_DEFINED__
#define __IWizardSite_FWD_DEFINED__
typedef interface IWizardSite IWizardSite;
#endif /* __IWizardSite_FWD_DEFINED__ */

#ifndef __IWizardExtension_FWD_DEFINED__
#define __IWizardExtension_FWD_DEFINED__
typedef interface IWizardExtension IWizardExtension;
#endif /* __IWizardExtension_FWD_DEFINED__ */

#ifndef __IWebWizardExtension_FWD_DEFINED__
#define __IWebWizardExtension_FWD_DEFINED__
typedef interface IWebWizardExtension IWebWizardExtension;
#endif /* __IWebWizardExtension_FWD_DEFINED__ */

#ifndef __IPublishingWizard_FWD_DEFINED__
#define __IPublishingWizard_FWD_DEFINED__
typedef interface IPublishingWizard IPublishingWizard;
#endif /* __IPublishingWizard_FWD_DEFINED__ */

#ifndef __IFolderViewHost_FWD_DEFINED__
#define __IFolderViewHost_FWD_DEFINED__
typedef interface IFolderViewHost IFolderViewHost;
#endif /* __IFolderViewHost_FWD_DEFINED__ */

#ifndef __IAccessibleObject_FWD_DEFINED__
#define __IAccessibleObject_FWD_DEFINED__
typedef interface IAccessibleObject IAccessibleObject;
#endif /* __IAccessibleObject_FWD_DEFINED__ */

#ifndef __IResultsFolder_FWD_DEFINED__
#define __IResultsFolder_FWD_DEFINED__
typedef interface IResultsFolder IResultsFolder;
#endif /* __IResultsFolder_FWD_DEFINED__ */

#ifndef __IAutoCompleteDropDown_FWD_DEFINED__
#define __IAutoCompleteDropDown_FWD_DEFINED__
typedef interface IAutoCompleteDropDown IAutoCompleteDropDown;
#endif /* __IAutoCompleteDropDown_FWD_DEFINED__ */

#ifndef __ICDBurnExt_FWD_DEFINED__
#define __ICDBurnExt_FWD_DEFINED__
typedef interface ICDBurnExt ICDBurnExt;
#endif /* __ICDBurnExt_FWD_DEFINED__ */

#ifndef __IEnumReadyCallback_FWD_DEFINED__
#define __IEnumReadyCallback_FWD_DEFINED__
typedef interface IEnumReadyCallback IEnumReadyCallback;
#endif /* __IEnumReadyCallback_FWD_DEFINED__ */

#ifndef __IEnumerableView_FWD_DEFINED__
#define __IEnumerableView_FWD_DEFINED__
typedef interface IEnumerableView IEnumerableView;
#endif /* __IEnumerableView_FWD_DEFINED__ */

#ifndef __IInsertItem_FWD_DEFINED__
#define __IInsertItem_FWD_DEFINED__
typedef interface IInsertItem IInsertItem;
#endif /* __IInsertItem_FWD_DEFINED__ */

#ifndef __IFolderBandPriv_FWD_DEFINED__
#define __IFolderBandPriv_FWD_DEFINED__
typedef interface IFolderBandPriv IFolderBandPriv;
#endif /* __IFolderBandPriv_FWD_DEFINED__ */

#ifndef __IImageRecompress_FWD_DEFINED__
#define __IImageRecompress_FWD_DEFINED__
typedef interface IImageRecompress IImageRecompress;
#endif /* __IImageRecompress_FWD_DEFINED__ */

#ifndef __IFileDialogControlEvents_FWD_DEFINED__
#define __IFileDialogControlEvents_FWD_DEFINED__
typedef interface IFileDialogControlEvents IFileDialogControlEvents;
#endif /* __IFileDialogControlEvents_FWD_DEFINED__ */

#ifndef __IFileDialog2_FWD_DEFINED__
#define __IFileDialog2_FWD_DEFINED__
typedef interface IFileDialog2 IFileDialog2;
#endif /* __IFileDialog2_FWD_DEFINED__ */

#ifndef __IApplicationAssociationRegistrationUI_FWD_DEFINED__
#define __IApplicationAssociationRegistrationUI_FWD_DEFINED__
typedef interface IApplicationAssociationRegistrationUI IApplicationAssociationRegistrationUI;
#endif /* __IApplicationAssociationRegistrationUI_FWD_DEFINED__ */

#ifndef __IShellRunDll_FWD_DEFINED__
#define __IShellRunDll_FWD_DEFINED__
typedef interface IShellRunDll IShellRunDll;
#endif /* __IShellRunDll_FWD_DEFINED__ */

#ifndef __IPreviousVersionsInfo_FWD_DEFINED__
#define __IPreviousVersionsInfo_FWD_DEFINED__
typedef interface IPreviousVersionsInfo IPreviousVersionsInfo;
#endif /* __IPreviousVersionsInfo_FWD_DEFINED__ */

#ifndef __IUseToBrowseItem_FWD_DEFINED__
#define __IUseToBrowseItem_FWD_DEFINED__
typedef interface IUseToBrowseItem IUseToBrowseItem;
#endif /* __IUseToBrowseItem_FWD_DEFINED__ */

#ifndef __INameSpaceTreeControl2_FWD_DEFINED__
#define __INameSpaceTreeControl2_FWD_DEFINED__
typedef interface INameSpaceTreeControl2 INameSpaceTreeControl2;
#endif /* __INameSpaceTreeControl2_FWD_DEFINED__ */

#ifndef __INameSpaceTreeControlEvents_FWD_DEFINED__
#define __INameSpaceTreeControlEvents_FWD_DEFINED__
typedef interface INameSpaceTreeControlEvents INameSpaceTreeControlEvents;
#endif /* __INameSpaceTreeControlEvents_FWD_DEFINED__ */

#ifndef __INameSpaceTreeControlDropHandler_FWD_DEFINED__
#define __INameSpaceTreeControlDropHandler_FWD_DEFINED__
typedef interface INameSpaceTreeControlDropHandler INameSpaceTreeControlDropHandler;
#endif /* __INameSpaceTreeControlDropHandler_FWD_DEFINED__ */

#ifndef __INameSpaceTreeAccessible_FWD_DEFINED__
#define __INameSpaceTreeAccessible_FWD_DEFINED__
typedef interface INameSpaceTreeAccessible INameSpaceTreeAccessible;
#endif /* __INameSpaceTreeAccessible_FWD_DEFINED__ */

#ifndef __INameSpaceTreeControlCustomDraw_FWD_DEFINED__
#define __INameSpaceTreeControlCustomDraw_FWD_DEFINED__
typedef interface INameSpaceTreeControlCustomDraw INameSpaceTreeControlCustomDraw;
#endif /* __INameSpaceTreeControlCustomDraw_FWD_DEFINED__ */

#ifndef __ITrayDeskBand_FWD_DEFINED__
#define __ITrayDeskBand_FWD_DEFINED__
typedef interface ITrayDeskBand ITrayDeskBand;
#endif /* __ITrayDeskBand_FWD_DEFINED__ */

#ifndef __IBandHost_FWD_DEFINED__
#define __IBandHost_FWD_DEFINED__
typedef interface IBandHost IBandHost;
#endif /* __IBandHost_FWD_DEFINED__ */

#ifndef __IComputerInfoChangeNotify_FWD_DEFINED__
#define __IComputerInfoChangeNotify_FWD_DEFINED__
typedef interface IComputerInfoChangeNotify IComputerInfoChangeNotify;
#endif /* __IComputerInfoChangeNotify_FWD_DEFINED__ */

#ifndef __IDesktopGadget_FWD_DEFINED__
#define __IDesktopGadget_FWD_DEFINED__
typedef interface IDesktopGadget IDesktopGadget;
#endif /* __IDesktopGadget_FWD_DEFINED__ */

#ifndef __QueryCancelAutoPlay_FWD_DEFINED__
#define __QueryCancelAutoPlay_FWD_DEFINED__
typedef struct QueryCancelAutoPlay QueryCancelAutoPlay;
#endif /* __QueryCancelAutoPlay_FWD_DEFINED__ */

#ifndef __TimeCategorizer_FWD_DEFINED__
#define __TimeCategorizer_FWD_DEFINED__
typedef struct TimeCategorizer TimeCategorizer;
#endif /* __TimeCategorizer_FWD_DEFINED__ */

#ifndef __AlphabeticalCategorizer_FWD_DEFINED__
#define __AlphabeticalCategorizer_FWD_DEFINED__
typedef struct AlphabeticalCategorizer AlphabeticalCategorizer;
#endif /* __AlphabeticalCategorizer_FWD_DEFINED__ */

#ifndef __MergedCategorizer_FWD_DEFINED__
#define __MergedCategorizer_FWD_DEFINED__
typedef struct MergedCategorizer MergedCategorizer;
#endif /* __MergedCategorizer_FWD_DEFINED__ */

#ifndef __ImageProperties_FWD_DEFINED__
#define __ImageProperties_FWD_DEFINED__
typedef struct ImageProperties ImageProperties;
#endif /* __ImageProperties_FWD_DEFINED__ */

#ifndef __CDBurn_FWD_DEFINED__
#define __CDBurn_FWD_DEFINED__
typedef struct CDBurn CDBurn;
#endif /* __CDBurn_FWD_DEFINED__ */

#ifndef __StartMenuPin_FWD_DEFINED__
#define __StartMenuPin_FWD_DEFINED__
typedef struct StartMenuPin StartMenuPin;
#endif /* __StartMenuPin_FWD_DEFINED__ */

#ifndef __WebWizardHost_FWD_DEFINED__
#define __WebWizardHost_FWD_DEFINED__
typedef struct WebWizardHost WebWizardHost;
#endif /* __WebWizardHost_FWD_DEFINED__ */

#ifndef __PublishDropTarget_FWD_DEFINED__
#define __PublishDropTarget_FWD_DEFINED__
typedef struct PublishDropTarget PublishDropTarget;
#endif /* __PublishDropTarget_FWD_DEFINED__ */

#ifndef __PublishingWizard_FWD_DEFINED__
#define __PublishingWizard_FWD_DEFINED__
typedef struct PublishingWizard PublishingWizard;
#endif /* __PublishingWizard_FWD_DEFINED__ */

#ifndef __InternetPrintOrdering_FWD_DEFINED__
#define __InternetPrintOrdering_FWD_DEFINED__
typedef struct InternetPrintOrdering InternetPrintOrdering;
#endif /* __InternetPrintOrdering_FWD_DEFINED__ */

#ifndef __FolderViewHost_FWD_DEFINED__
#define __FolderViewHost_FWD_DEFINED__
typedef struct FolderViewHost FolderViewHost;
#endif /* __FolderViewHost_FWD_DEFINED__ */

#ifndef __ExplorerBrowser_FWD_DEFINED__
#define __ExplorerBrowser_FWD_DEFINED__
typedef struct ExplorerBrowser ExplorerBrowser;
#endif /* __ExplorerBrowser_FWD_DEFINED__ */

#ifndef __ImageRecompress_FWD_DEFINED__
#define __ImageRecompress_FWD_DEFINED__
typedef struct ImageRecompress ImageRecompress;
#endif /* __ImageRecompress_FWD_DEFINED__ */

#ifndef __TrayBandSiteService_FWD_DEFINED__
#define __TrayBandSiteService_FWD_DEFINED__
typedef struct TrayBandSiteService TrayBandSiteService;
#endif /* __TrayBandSiteService_FWD_DEFINED__ */

#ifndef __TrayDeskBand_FWD_DEFINED__
#define __TrayDeskBand_FWD_DEFINED__
typedef struct TrayDeskBand TrayDeskBand;
#endif /* __TrayDeskBand_FWD_DEFINED__ */

#ifndef __AttachmentServices_FWD_DEFINED__
#define __AttachmentServices_FWD_DEFINED__
typedef struct AttachmentServices AttachmentServices;
#endif /* __AttachmentServices_FWD_DEFINED__ */

#ifndef __DocPropShellExtension_FWD_DEFINED__
#define __DocPropShellExtension_FWD_DEFINED__
typedef struct DocPropShellExtension DocPropShellExtension;
#endif /* __DocPropShellExtension_FWD_DEFINED__ */

#ifndef __FSCopyHandler_FWD_DEFINED__
#define __FSCopyHandler_FWD_DEFINED__
typedef struct FSCopyHandler FSCopyHandler;
#endif /* __FSCopyHandler_FWD_DEFINED__ */

#ifndef __PreviousVersions_FWD_DEFINED__
#define __PreviousVersions_FWD_DEFINED__
typedef struct PreviousVersions PreviousVersions;
#endif /* __PreviousVersions_FWD_DEFINED__ */

#ifndef __NamespaceTreeControl_FWD_DEFINED__
#define __NamespaceTreeControl_FWD_DEFINED__
typedef struct NamespaceTreeControl NamespaceTreeControl;
#endif /* __NamespaceTreeControl_FWD_DEFINED__ */

#ifndef __IENamespaceTreeControl_FWD_DEFINED__
#define __IENamespaceTreeControl_FWD_DEFINED__
typedef struct IENamespaceTreeControl IENamespaceTreeControl;
#endif /* __IENamespaceTreeControl_FWD_DEFINED__ */

#ifndef __ApplicationAssociationRegistrationUI_FWD_DEFINED__
#define __ApplicationAssociationRegistrationUI_FWD_DEFINED__
typedef struct ApplicationAssociationRegistrationUI ApplicationAssociationRegistrationUI;
#endif /* __ApplicationAssociationRegistrationUI_FWD_DEFINED__ */

#ifndef __DesktopGadget_FWD_DEFINED__
#define __DesktopGadget_FWD_DEFINED__
typedef struct DesktopGadget DesktopGadget;
#endif /* __DesktopGadget_FWD_DEFINED__ */

#ifndef __AccessibilityDockingService_FWD_DEFINED__
#define __AccessibilityDockingService_FWD_DEFINED__
typedef struct AccessibilityDockingService AccessibilityDockingService;
#endif /* __AccessibilityDockingService_FWD_DEFINED__ */

#ifndef __ExecuteFolder_FWD_DEFINED__
#define __ExecuteFolder_FWD_DEFINED__
typedef struct ExecuteFolder ExecuteFolder;
#endif /* __ExecuteFolder_FWD_DEFINED__ */

#ifndef __VirtualDesktopManager_FWD_DEFINED__
#define __VirtualDesktopManager_FWD_DEFINED__
typedef struct VirtualDesktopManager VirtualDesktopManager;
#endif /* __VirtualDesktopManager_FWD_DEFINED__ */

#ifndef __StorageProviderBanners_FWD_DEFINED__
#define __StorageProviderBanners_FWD_DEFINED__
typedef struct StorageProviderBanners StorageProviderBanners;
#endif /* __StorageProviderBanners_FWD_DEFINED__ */

#ifndef __IAccessibilityDockingServiceCallback_FWD_DEFINED__
#define __IAccessibilityDockingServiceCallback_FWD_DEFINED__
typedef interface IAccessibilityDockingServiceCallback IAccessibilityDockingServiceCallback;
#endif /* __IAccessibilityDockingServiceCallback_FWD_DEFINED__ */

#ifndef __IAccessibilityDockingService_FWD_DEFINED__
#define __IAccessibilityDockingService_FWD_DEFINED__
typedef interface IAccessibilityDockingService IAccessibilityDockingService;
#endif /* __IAccessibilityDockingService_FWD_DEFINED__ */

#ifndef __IStorageProviderBanners_FWD_DEFINED__
#define __IStorageProviderBanners_FWD_DEFINED__
typedef interface IStorageProviderBanners IStorageProviderBanners;
#endif /* __IStorageProviderBanners_FWD_DEFINED__ */

#ifndef __IStorageProviderCopyHook_FWD_DEFINED__
#define __IStorageProviderCopyHook_FWD_DEFINED__
typedef interface IStorageProviderCopyHook IStorageProviderCopyHook;
#endif /* __IStorageProviderCopyHook_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"
#include "shtypes.h"
#include "servprov.h"
#include "comcat.h"
#include "propidl.h"
#include "prsht.h"
#include "msxml.h"
#include "wtypes.h"
#include "propsys.h"
#include "ObjectArray.h"
#include "StructuredQueryCondition.h"
#include "shobjidl_core.h"


#include <winapifamily.h>


#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <sherrors.h>

/*****************************************************************************
 * IQueryCodePage interface
 */
#ifndef __IQueryCodePage_INTERFACE_DEFINED__
#define __IQueryCodePage_INTERFACE_DEFINED__

EXTERN_C const IID IID_IQueryCodePage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IQueryCodePageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IQueryCodePage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IQueryCodePage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IQueryCodePage *This);

    /*** IQueryCodePage methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCodePage)(
        IQueryCodePage *This,
        UINT *puiCodePage);

    HRESULT (STDMETHODCALLTYPE *SetCodePage)(
        IQueryCodePage *This,
        UINT uiCodePage);

    END_INTERFACE
} IQueryCodePageVtbl;

interface IQueryCodePage {
    CONST_VTBL IQueryCodePageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IQueryCodePage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IQueryCodePage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IQueryCodePage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IQueryCodePage methods ***/
#define IQueryCodePage_GetCodePage(This,puiCodePage) \
    ((This)->lpVtbl->GetCodePage(This,puiCodePage))
#define IQueryCodePage_SetCodePage(This,uiCodePage) \
    ((This)->lpVtbl->SetCodePage(This,uiCodePage))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IQueryCodePage_INTERFACE_DEFINED__ */

typedef enum SYNC_ENGINE_STATE_FLAGS {
    SESF_NONE = 0x0,
    SESF_SERVICE_QUOTA_NEARING_LIMIT = 0x1,
    SESF_SERVICE_QUOTA_EXCEEDED_LIMIT = 0x2,
    SESF_AUTHENTICATION_ERROR = 0x4,
    SESF_PAUSED_DUE_TO_METERED_NETWORK = 0x8,
    SESF_PAUSED_DUE_TO_DISK_SPACE_FULL = 0x10,
    SESF_PAUSED_DUE_TO_CLIENT_POLICY = 0x20,
    SESF_PAUSED_DUE_TO_SERVICE_POLICY = 0x40,
    SESF_SERVICE_UNAVAILABLE = 0x80,
    SESF_PAUSED_DUE_TO_USER_REQUEST = 0x100,
    SESF_ALL_FLAGS = ((((((((SESF_NONE | SESF_SERVICE_QUOTA_NEARING_LIMIT) | SESF_SERVICE_QUOTA_EXCEEDED_LIMIT) | SESF_AUTHENTICATION_ERROR) | SESF_PAUSED_DUE_TO_METERED_NETWORK) | SESF_PAUSED_DUE_TO_DISK_SPACE_FULL) | SESF_PAUSED_DUE_TO_CLIENT_POLICY) | SESF_PAUSED_DUE_TO_SERVICE_POLICY) | SESF_SERVICE_UNAVAILABLE) | SESF_PAUSED_DUE_TO_USER_REQUEST
} SYNC_ENGINE_STATE_FLAGS;


typedef unsigned char *LPVIEWSETTINGS;

/*****************************************************************************
 * IFolderViewOptions interface
 */
#ifndef __IFolderViewOptions_INTERFACE_DEFINED__
#define __IFolderViewOptions_INTERFACE_DEFINED__

typedef enum FOLDERVIEWOPTIONS {
    FVO_DEFAULT = 0x0,
    FVO_VISTALAYOUT = 0x1,
    FVO_CUSTOMPOSITION = 0x2,
    FVO_CUSTOMORDERING = 0x4,
    FVO_SUPPORTHYPERLINKS = 0x8,
    FVO_NOANIMATIONS = 0x10,
    FVO_NOSCROLLTIPS = 0x20
} FOLDERVIEWOPTIONS;


EXTERN_C const IID IID_IFolderViewOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderViewOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderViewOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderViewOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderViewOptions *This);

    /*** IFolderViewOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFolderViewOptions)(
        IFolderViewOptions *This,
        FOLDERVIEWOPTIONS fvoMask,
        FOLDERVIEWOPTIONS fvoFlags);

    HRESULT (STDMETHODCALLTYPE *GetFolderViewOptions)(
        IFolderViewOptions *This,
        FOLDERVIEWOPTIONS *pfvoFlags);

    END_INTERFACE
} IFolderViewOptionsVtbl;

interface IFolderViewOptions {
    CONST_VTBL IFolderViewOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderViewOptions_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderViewOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderViewOptions_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderViewOptions methods ***/
#define IFolderViewOptions_SetFolderViewOptions(This,fvoMask,fvoFlags) \
    ((This)->lpVtbl->SetFolderViewOptions(This,fvoMask,fvoFlags))
#define IFolderViewOptions_GetFolderViewOptions(This,pfvoFlags) \
    ((This)->lpVtbl->GetFolderViewOptions(This,pfvoFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderViewOptions_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IShellView3 interface
 */
#ifndef __IShellView3_INTERFACE_DEFINED__
#define __IShellView3_INTERFACE_DEFINED__

enum _SV3CVW3_FLAGS {
    SV3CVW3_DEFAULT = 0x0,
    SV3CVW3_NONINTERACTIVE = 0x1,
    SV3CVW3_FORCEVIEWMODE = 0x2,
    SV3CVW3_FORCEFOLDERFLAGS = 0x4
};

typedef DWORD SV3CVW3_FLAGS;

EXTERN_C const IID IID_IShellView3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellView3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellView3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellView3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellView3 *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IShellView3 *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IShellView3 *This,
        BOOL fEnterMode);

    /*** IShellView methods ***/
    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IShellView3 *This,
        MSG *pmsg);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IShellView3 *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *UIActivate)(
        IShellView3 *This,
        UINT uState);

    HRESULT (STDMETHODCALLTYPE *Refresh)(
        IShellView3 *This);

    HRESULT (STDMETHODCALLTYPE *CreateViewWindow)(
        IShellView3 *This,
        IShellView *psvPrevious,
        LPCFOLDERSETTINGS pfs,
        IShellBrowser *psb,
        RECT *prcView,
        HWND *phWnd);

    HRESULT (STDMETHODCALLTYPE *DestroyViewWindow)(
        IShellView3 *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentInfo)(
        IShellView3 *This,
        LPFOLDERSETTINGS pfs);

    HRESULT (STDMETHODCALLTYPE *AddPropertySheetPages)(
        IShellView3 *This,
        DWORD dwReserved,
        LPFNSVADDPROPSHEETPAGE pfn,
        LPARAM lparam);

    HRESULT (STDMETHODCALLTYPE *SaveViewState)(
        IShellView3 *This);

    HRESULT (STDMETHODCALLTYPE *SelectItem)(
        IShellView3 *This,
        PCUITEMID_CHILD pidlItem,
        SVSIF uFlags);

    HRESULT (STDMETHODCALLTYPE *GetItemObject)(
        IShellView3 *This,
        UINT uItem,
        REFIID riid,
        void **ppv);

    /*** IShellView2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetView)(
        IShellView3 *This,
        SHELLVIEWID *pvid,
        ULONG uView);

    HRESULT (STDMETHODCALLTYPE *CreateViewWindow2)(
        IShellView3 *This,
        LPSV2CVW2_PARAMS lpParams);

    HRESULT (STDMETHODCALLTYPE *HandleRename)(
        IShellView3 *This,
        PCUITEMID_CHILD pidlNew);

    HRESULT (STDMETHODCALLTYPE *SelectAndPositionItem)(
        IShellView3 *This,
        PCUITEMID_CHILD pidlItem,
        UINT uFlags,
        POINT *ppt);

    /*** IShellView3 methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateViewWindow3)(
        IShellView3 *This,
        IShellBrowser *psbOwner,
        IShellView *psvPrev,
        SV3CVW3_FLAGS dwViewFlags,
        FOLDERFLAGS dwMask,
        FOLDERFLAGS dwFlags,
        FOLDERVIEWMODE fvMode,
        const SHELLVIEWID *pvid,
        const RECT *prcView,
        HWND *phwndView);

    END_INTERFACE
} IShellView3Vtbl;

interface IShellView3 {
    CONST_VTBL IShellView3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellView3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellView3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellView3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IShellView3_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IShellView3_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IShellView methods ***/
#define IShellView3_TranslateAccelerator(This,pmsg) \
    ((This)->lpVtbl->TranslateAccelerator(This,pmsg))
#define IShellView3_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#define IShellView3_UIActivate(This,uState) \
    ((This)->lpVtbl->UIActivate(This,uState))
#define IShellView3_Refresh(This) \
    ((This)->lpVtbl->Refresh(This))
#define IShellView3_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) \
    ((This)->lpVtbl->CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd))
#define IShellView3_DestroyViewWindow(This) \
    ((This)->lpVtbl->DestroyViewWindow(This))
#define IShellView3_GetCurrentInfo(This,pfs) \
    ((This)->lpVtbl->GetCurrentInfo(This,pfs))
#define IShellView3_AddPropertySheetPages(This,dwReserved,pfn,lparam) \
    ((This)->lpVtbl->AddPropertySheetPages(This,dwReserved,pfn,lparam))
#define IShellView3_SaveViewState(This) \
    ((This)->lpVtbl->SaveViewState(This))
#define IShellView3_SelectItem(This,pidlItem,uFlags) \
    ((This)->lpVtbl->SelectItem(This,pidlItem,uFlags))
#define IShellView3_GetItemObject(This,uItem,riid,ppv) \
    ((This)->lpVtbl->GetItemObject(This,uItem,riid,ppv))
/*** IShellView2 methods ***/
#define IShellView3_GetView(This,pvid,uView) \
    ((This)->lpVtbl->GetView(This,pvid,uView))
#define IShellView3_CreateViewWindow2(This,lpParams) \
    ((This)->lpVtbl->CreateViewWindow2(This,lpParams))
#define IShellView3_HandleRename(This,pidlNew) \
    ((This)->lpVtbl->HandleRename(This,pidlNew))
#define IShellView3_SelectAndPositionItem(This,pidlItem,uFlags,ppt) \
    ((This)->lpVtbl->SelectAndPositionItem(This,pidlItem,uFlags,ppt))
/*** IShellView3 methods ***/
#define IShellView3_CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView) \
    ((This)->lpVtbl->CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellView3_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

#if (NTDDI_VERSION >= NTDDI_WIN7)

/*****************************************************************************
 * ISearchBoxInfo interface
 */
#ifndef __ISearchBoxInfo_INTERFACE_DEFINED__
#define __ISearchBoxInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISearchBoxInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISearchBoxInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISearchBoxInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISearchBoxInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISearchBoxInfo *This);

    /*** ISearchBoxInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCondition)(
        ISearchBoxInfo *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISearchBoxInfo *This,
        LPWSTR *ppsz);

    END_INTERFACE
} ISearchBoxInfoVtbl;

interface ISearchBoxInfo {
    CONST_VTBL ISearchBoxInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISearchBoxInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISearchBoxInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISearchBoxInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISearchBoxInfo methods ***/
#define ISearchBoxInfo_GetCondition(This,riid,ppv) \
    ((This)->lpVtbl->GetCondition(This,riid,ppv))
#define ISearchBoxInfo_GetText(This,ppsz) \
    ((This)->lpVtbl->GetText(This,ppsz))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISearchBoxInfo_INTERFACE_DEFINED__ */

#endif // (NTDDI_VERSION >= NTDDI_WIN7)

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IVisualProperties interface
 */
#ifndef __IVisualProperties_INTERFACE_DEFINED__
#define __IVisualProperties_INTERFACE_DEFINED__

typedef enum VPWATERMARKFLAGS {
    VPWF_DEFAULT = 0x0,
    VPWF_ALPHABLEND = 0x1
} VPWATERMARKFLAGS;


typedef enum VPCOLORFLAGS {
    VPCF_TEXT = 1,
    VPCF_BACKGROUND = 2,
    VPCF_SORTCOLUMN = 3,
    VPCF_SUBTEXT = 4,
    VPCF_TEXTBACKGROUND = 5
} VPCOLORFLAGS;

EXTERN_C const IID IID_IVisualProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IVisualPropertiesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVisualProperties *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVisualProperties *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVisualProperties *This);

    /*** IVisualProperties methods ***/
    HRESULT (STDMETHODCALLTYPE *SetWatermark)(
        IVisualProperties *This,
        HBITMAP hbmp,
        VPWATERMARKFLAGS vpwf);

    HRESULT (STDMETHODCALLTYPE *SetColor)(
        IVisualProperties *This,
        VPCOLORFLAGS vpcf,
        COLORREF cr);

    HRESULT (STDMETHODCALLTYPE *GetColor)(
        IVisualProperties *This,
        VPCOLORFLAGS vpcf,
        COLORREF *pcr);

    HRESULT (STDMETHODCALLTYPE *SetItemHeight)(
        IVisualProperties *This,
        int cyItemInPixels);

    HRESULT (STDMETHODCALLTYPE *GetItemHeight)(
        IVisualProperties *This,
        int *cyItemInPixels);

    HRESULT (STDMETHODCALLTYPE *SetFont)(
        IVisualProperties *This,
        const LOGFONTW *plf,
        BOOL bRedraw);

    HRESULT (STDMETHODCALLTYPE *GetFont)(
        IVisualProperties *This,
        LOGFONTW *plf);

    HRESULT (STDMETHODCALLTYPE *SetTheme)(
        IVisualProperties *This,
        LPCWSTR pszSubAppName,
        LPCWSTR pszSubIdList);

    END_INTERFACE
} IVisualPropertiesVtbl;

interface IVisualProperties {
    CONST_VTBL IVisualPropertiesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IVisualProperties_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IVisualProperties_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IVisualProperties_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IVisualProperties methods ***/
#define IVisualProperties_SetWatermark(This,hbmp,vpwf) \
    ((This)->lpVtbl->SetWatermark(This,hbmp,vpwf))
#define IVisualProperties_SetColor(This,vpcf,cr) \
    ((This)->lpVtbl->SetColor(This,vpcf,cr))
#define IVisualProperties_GetColor(This,vpcf,pcr) \
    ((This)->lpVtbl->GetColor(This,vpcf,pcr))
#define IVisualProperties_SetItemHeight(This,cyItemInPixels) \
    ((This)->lpVtbl->SetItemHeight(This,cyItemInPixels))
#define IVisualProperties_GetItemHeight(This,cyItemInPixels) \
    ((This)->lpVtbl->GetItemHeight(This,cyItemInPixels))
#define IVisualProperties_SetFont(This,plf,bRedraw) \
    ((This)->lpVtbl->SetFont(This,plf,bRedraw))
#define IVisualProperties_GetFont(This,plf) \
    ((This)->lpVtbl->GetFont(This,plf))
#define IVisualProperties_SetTheme(This,pszSubAppName,pszSubIdList) \
    ((This)->lpVtbl->SetTheme(This,pszSubAppName,pszSubIdList))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IVisualProperties_INTERFACE_DEFINED__ */

#endif  // _WIN32_IE_IE70

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * ICommDlgBrowser3 interface
 */
#ifndef __ICommDlgBrowser3_INTERFACE_DEFINED__
#define __ICommDlgBrowser3_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICommDlgBrowser3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICommDlgBrowser3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICommDlgBrowser3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICommDlgBrowser3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICommDlgBrowser3 *This);

    /*** ICommDlgBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *OnDefaultCommand)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv);

    HRESULT (STDMETHODCALLTYPE *OnStateChange)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv,
        ULONG uChange);

    HRESULT (STDMETHODCALLTYPE *IncludeObject)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv,
        PCUITEMID_CHILD pidl);

    /*** ICommDlgBrowser2 methods ***/
    HRESULT (STDMETHODCALLTYPE *Notify)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv,
        DWORD dwNotifyType);

    HRESULT (STDMETHODCALLTYPE *GetDefaultMenuText)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv,
        LPWSTR pszText,
        int cchMax);

    HRESULT (STDMETHODCALLTYPE *GetViewFlags)(
        ICommDlgBrowser3 *This,
        DWORD *pdwFlags);

    /*** ICommDlgBrowser3 methods ***/
    HRESULT (STDMETHODCALLTYPE *OnColumnClicked)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv,
        int iColumn);

    HRESULT (STDMETHODCALLTYPE *GetCurrentFilter)(
        ICommDlgBrowser3 *This,
        LPWSTR pszFileSpec,
        int cchFileSpec);

    HRESULT (STDMETHODCALLTYPE *OnPreViewCreated)(
        ICommDlgBrowser3 *This,
        IShellView *ppshv);

    END_INTERFACE
} ICommDlgBrowser3Vtbl;

interface ICommDlgBrowser3 {
    CONST_VTBL ICommDlgBrowser3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICommDlgBrowser3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICommDlgBrowser3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICommDlgBrowser3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICommDlgBrowser methods ***/
#define ICommDlgBrowser3_OnDefaultCommand(This,ppshv) \
    ((This)->lpVtbl->OnDefaultCommand(This,ppshv))
#define ICommDlgBrowser3_OnStateChange(This,ppshv,uChange) \
    ((This)->lpVtbl->OnStateChange(This,ppshv,uChange))
#define ICommDlgBrowser3_IncludeObject(This,ppshv,pidl) \
    ((This)->lpVtbl->IncludeObject(This,ppshv,pidl))
/*** ICommDlgBrowser2 methods ***/
#define ICommDlgBrowser3_Notify(This,ppshv,dwNotifyType) \
    ((This)->lpVtbl->Notify(This,ppshv,dwNotifyType))
#define ICommDlgBrowser3_GetDefaultMenuText(This,ppshv,pszText,cchMax) \
    ((This)->lpVtbl->GetDefaultMenuText(This,ppshv,pszText,cchMax))
#define ICommDlgBrowser3_GetViewFlags(This,pdwFlags) \
    ((This)->lpVtbl->GetViewFlags(This,pdwFlags))
/*** ICommDlgBrowser3 methods ***/
#define ICommDlgBrowser3_OnColumnClicked(This,ppshv,iColumn) \
    ((This)->lpVtbl->OnColumnClicked(This,ppshv,iColumn))
#define ICommDlgBrowser3_GetCurrentFilter(This,pszFileSpec,cchFileSpec) \
    ((This)->lpVtbl->GetCurrentFilter(This,pszFileSpec,cchFileSpec))
#define ICommDlgBrowser3_OnPreViewCreated(This,ppshv) \
    ((This)->lpVtbl->OnPreViewCreated(This,ppshv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICommDlgBrowser3_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IUserAccountChangeCallback interface
 */
#ifndef __IUserAccountChangeCallback_INTERFACE_DEFINED__
#define __IUserAccountChangeCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUserAccountChangeCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUserAccountChangeCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUserAccountChangeCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUserAccountChangeCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUserAccountChangeCallback *This);

    /*** IUserAccountChangeCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnPictureChange)(
        IUserAccountChangeCallback *This,
        LPCWSTR pszUserName);

    END_INTERFACE
} IUserAccountChangeCallbackVtbl;

interface IUserAccountChangeCallback {
    CONST_VTBL IUserAccountChangeCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUserAccountChangeCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUserAccountChangeCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUserAccountChangeCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUserAccountChangeCallback methods ***/
#define IUserAccountChangeCallback_OnPictureChange(This,pszUserName) \
    ((This)->lpVtbl->OnPictureChange(This,pszUserName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUserAccountChangeCallback_INTERFACE_DEFINED__ */

#ifdef MIDL_PASS

typedef struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union {
        struct {
            DWORD Offset;
            DWORD OffsetHigh;
        };
        PVOID Pointer;
    };
    HANDLE hEvent;
} OVERLAPPED;
typedef struct _OVERLAPPED *LPOVERLAPPED;

#endif // MIDL_PASS

/*****************************************************************************
 * IStreamAsync interface
 */
#ifndef __IStreamAsync_INTERFACE_DEFINED__
#define __IStreamAsync_INTERFACE_DEFINED__

EXTERN_C const IID IID_IStreamAsync;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStreamAsyncVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStreamAsync *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStreamAsync *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStreamAsync *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IStreamAsync *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IStreamAsync *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        IStreamAsync *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        IStreamAsync *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        IStreamAsync *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IStreamAsync *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        IStreamAsync *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        IStreamAsync *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        IStreamAsync *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        IStreamAsync *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IStreamAsync *This,
        IStream **ppstm);

    /*** IStreamAsync methods ***/
    HRESULT (STDMETHODCALLTYPE *ReadAsync)(
        IStreamAsync *This,
        void *pv,
        DWORD cb,
        LPDWORD pcbRead,
        LPOVERLAPPED lpOverlapped);

    HRESULT (STDMETHODCALLTYPE *WriteAsync)(
        IStreamAsync *This,
        void *lpBuffer,
        DWORD cb,
        LPDWORD pcbWritten,
        LPOVERLAPPED lpOverlapped);

    HRESULT (STDMETHODCALLTYPE *OverlappedResult)(
        IStreamAsync *This,
        LPOVERLAPPED lpOverlapped,
        LPDWORD lpNumberOfBytesTransferred,
        BOOL bWait);

    HRESULT (STDMETHODCALLTYPE *CancelIo)(
        IStreamAsync *This);

    END_INTERFACE
} IStreamAsyncVtbl;

interface IStreamAsync {
    CONST_VTBL IStreamAsyncVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStreamAsync_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStreamAsync_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStreamAsync_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define IStreamAsync_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define IStreamAsync_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define IStreamAsync_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define IStreamAsync_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define IStreamAsync_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define IStreamAsync_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define IStreamAsync_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define IStreamAsync_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define IStreamAsync_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define IStreamAsync_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define IStreamAsync_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** IStreamAsync methods ***/
#define IStreamAsync_ReadAsync(This,pv,cb,pcbRead,lpOverlapped) \
    ((This)->lpVtbl->ReadAsync(This,pv,cb,pcbRead,lpOverlapped))
#define IStreamAsync_WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped) \
    ((This)->lpVtbl->WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped))
#define IStreamAsync_OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait) \
    ((This)->lpVtbl->OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait))
#define IStreamAsync_CancelIo(This) \
    ((This)->lpVtbl->CancelIo(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IStreamAsync_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IStreamUnbufferedInfo interface
 */
#ifndef __IStreamUnbufferedInfo_INTERFACE_DEFINED__
#define __IStreamUnbufferedInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IStreamUnbufferedInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStreamUnbufferedInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStreamUnbufferedInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStreamUnbufferedInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStreamUnbufferedInfo *This);

    /*** IStreamUnbufferedInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSectorSize)(
        IStreamUnbufferedInfo *This,
        ULONG *pcbSectorSize);

    END_INTERFACE
} IStreamUnbufferedInfoVtbl;

interface IStreamUnbufferedInfo {
    CONST_VTBL IStreamUnbufferedInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStreamUnbufferedInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStreamUnbufferedInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStreamUnbufferedInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IStreamUnbufferedInfo methods ***/
#define IStreamUnbufferedInfo_GetSectorSize(This,pcbSectorSize) \
    ((This)->lpVtbl->GetSectorSize(This,pcbSectorSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IStreamUnbufferedInfo_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHRemovePersonalPropertyValues( IShellItemArray *psia);
SHSTDAPI SHAddDefaultPropertiesByExt( PCWSTR pszExt,  IPropertyStore *pPropStore);
SHSTDAPI SHCreateDefaultPropertiesOp( IShellItem *psi,  IFileOperation **ppFileOp);
SHSTDAPI SHSetDefaultProperties( HWND hwnd,  IShellItem *psi, DWORD dwFileOpFlags,  IFileOperationProgressSink *pfops);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

#if (NTDDI_VERSION >= NTDDI_WIN2K)

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef enum DSH_FLAGS {
    DSH_ALLOWDROPDESCRIPTIONTEXT = 0x1
} DSH_FLAGS;

/*****************************************************************************
 * IDragSourceHelper2 interface
 */
#ifndef __IDragSourceHelper2_INTERFACE_DEFINED__
#define __IDragSourceHelper2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDragSourceHelper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDragSourceHelper2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDragSourceHelper2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDragSourceHelper2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDragSourceHelper2 *This);

    /*** IDragSourceHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeFromBitmap)(
        IDragSourceHelper2 *This,
        LPSHDRAGIMAGE pshdi,
        IDataObject *pDataObject);

    HRESULT (STDMETHODCALLTYPE *InitializeFromWindow)(
        IDragSourceHelper2 *This,
        HWND hwnd,
        POINT *ppt,
        IDataObject *pDataObject);

    /*** IDragSourceHelper2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFlags)(
        IDragSourceHelper2 *This,
        DWORD dwFlags);

    END_INTERFACE
} IDragSourceHelper2Vtbl;

interface IDragSourceHelper2 {
    CONST_VTBL IDragSourceHelper2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDragSourceHelper2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDragSourceHelper2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDragSourceHelper2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDragSourceHelper methods ***/
#define IDragSourceHelper2_InitializeFromBitmap(This,pshdi,pDataObject) \
    ((This)->lpVtbl->InitializeFromBitmap(This,pshdi,pDataObject))
#define IDragSourceHelper2_InitializeFromWindow(This,hwnd,ppt,pDataObject) \
    ((This)->lpVtbl->InitializeFromWindow(This,hwnd,ppt,pDataObject))
/*** IDragSourceHelper2 methods ***/
#define IDragSourceHelper2_SetFlags(This,dwFlags) \
    ((This)->lpVtbl->SetFlags(This,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDragSourceHelper2_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

#endif  // NTDDI_WIN2K

/*****************************************************************************
 * IHWEventHandler interface
 */
#ifndef __IHWEventHandler_INTERFACE_DEFINED__
#define __IHWEventHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHWEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHWEventHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHWEventHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHWEventHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHWEventHandler *This);

    /*** IHWEventHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IHWEventHandler *This,
        LPCWSTR pszParams);

    HRESULT (STDMETHODCALLTYPE *HandleEvent)(
        IHWEventHandler *This,
        LPCWSTR pszDeviceID,
        LPCWSTR pszAltDeviceID,
        LPCWSTR pszEventType);

    HRESULT (STDMETHODCALLTYPE *HandleEventWithContent)(
        IHWEventHandler *This,
        LPCWSTR pszDeviceID,
        LPCWSTR pszAltDeviceID,
        LPCWSTR pszEventType,
        LPCWSTR pszContentTypeHandler,
        IDataObject *pdataobject);

    END_INTERFACE
} IHWEventHandlerVtbl;

interface IHWEventHandler {
    CONST_VTBL IHWEventHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHWEventHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHWEventHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHWEventHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHWEventHandler methods ***/
#define IHWEventHandler_Initialize(This,pszParams) \
    ((This)->lpVtbl->Initialize(This,pszParams))
#define IHWEventHandler_HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) \
    ((This)->lpVtbl->HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType))
#define IHWEventHandler_HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) \
    ((This)->lpVtbl->HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHWEventHandler_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IHWEventHandler2 interface
 */
#ifndef __IHWEventHandler2_INTERFACE_DEFINED__
#define __IHWEventHandler2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHWEventHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHWEventHandler2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHWEventHandler2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHWEventHandler2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHWEventHandler2 *This);

    /*** IHWEventHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IHWEventHandler2 *This,
        LPCWSTR pszParams);

    HRESULT (STDMETHODCALLTYPE *HandleEvent)(
        IHWEventHandler2 *This,
        LPCWSTR pszDeviceID,
        LPCWSTR pszAltDeviceID,
        LPCWSTR pszEventType);

    HRESULT (STDMETHODCALLTYPE *HandleEventWithContent)(
        IHWEventHandler2 *This,
        LPCWSTR pszDeviceID,
        LPCWSTR pszAltDeviceID,
        LPCWSTR pszEventType,
        LPCWSTR pszContentTypeHandler,
        IDataObject *pdataobject);

    /*** IHWEventHandler2 methods ***/
    HRESULT (STDMETHODCALLTYPE *HandleEventWithHWND)(
        IHWEventHandler2 *This,
        LPCWSTR pszDeviceID,
        LPCWSTR pszAltDeviceID,
        LPCWSTR pszEventType,
        HWND hwndOwner);

    END_INTERFACE
} IHWEventHandler2Vtbl;

interface IHWEventHandler2 {
    CONST_VTBL IHWEventHandler2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHWEventHandler2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHWEventHandler2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHWEventHandler2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHWEventHandler methods ***/
#define IHWEventHandler2_Initialize(This,pszParams) \
    ((This)->lpVtbl->Initialize(This,pszParams))
#define IHWEventHandler2_HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) \
    ((This)->lpVtbl->HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType))
#define IHWEventHandler2_HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) \
    ((This)->lpVtbl->HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject))
/*** IHWEventHandler2 methods ***/
#define IHWEventHandler2_HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner) \
    ((This)->lpVtbl->HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHWEventHandler2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IQueryCancelAutoPlay interface
 */
#ifndef __IQueryCancelAutoPlay_INTERFACE_DEFINED__
#define __IQueryCancelAutoPlay_INTERFACE_DEFINED__

EXTERN_C const IID IID_IQueryCancelAutoPlay;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IQueryCancelAutoPlayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IQueryCancelAutoPlay *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IQueryCancelAutoPlay *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IQueryCancelAutoPlay *This);

    /*** IQueryCancelAutoPlay methods ***/
    HRESULT (STDMETHODCALLTYPE *AllowAutoPlay)(
        IQueryCancelAutoPlay *This,
        LPCWSTR pszPath,
        DWORD dwContentType,
        LPCWSTR pszLabel,
        DWORD dwSerialNumber);

    END_INTERFACE
} IQueryCancelAutoPlayVtbl;

interface IQueryCancelAutoPlay {
    CONST_VTBL IQueryCancelAutoPlayVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IQueryCancelAutoPlay_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IQueryCancelAutoPlay_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IQueryCancelAutoPlay_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IQueryCancelAutoPlay methods ***/
#define IQueryCancelAutoPlay_AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber) \
    ((This)->lpVtbl->AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IQueryCancelAutoPlay_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IDynamicHWHandler interface
 */
#ifndef __IDynamicHWHandler_INTERFACE_DEFINED__
#define __IDynamicHWHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDynamicHWHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDynamicHWHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDynamicHWHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDynamicHWHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDynamicHWHandler *This);

    /*** IDynamicHWHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDynamicInfo)(
        IDynamicHWHandler *This,
        LPCWSTR pszDeviceID,
        DWORD dwContentType,
        LPWSTR *ppszAction);

    END_INTERFACE
} IDynamicHWHandlerVtbl;

interface IDynamicHWHandler {
    CONST_VTBL IDynamicHWHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDynamicHWHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDynamicHWHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDynamicHWHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDynamicHWHandler methods ***/
#define IDynamicHWHandler_GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction) \
    ((This)->lpVtbl->GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDynamicHWHandler_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

/*****************************************************************************
 * IUserNotificationCallback interface
 */
#ifndef __IUserNotificationCallback_INTERFACE_DEFINED__
#define __IUserNotificationCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUserNotificationCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUserNotificationCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUserNotificationCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUserNotificationCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUserNotificationCallback *This);

    /*** IUserNotificationCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnBalloonUserClick)(
        IUserNotificationCallback *This,
        POINT *pt);

    HRESULT (STDMETHODCALLTYPE *OnLeftClick)(
        IUserNotificationCallback *This,
        POINT *pt);

    HRESULT (STDMETHODCALLTYPE *OnContextMenu)(
        IUserNotificationCallback *This,
        POINT *pt);

    END_INTERFACE
} IUserNotificationCallbackVtbl;

interface IUserNotificationCallback {
    CONST_VTBL IUserNotificationCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUserNotificationCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUserNotificationCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUserNotificationCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUserNotificationCallback methods ***/
#define IUserNotificationCallback_OnBalloonUserClick(This,pt) \
    ((This)->lpVtbl->OnBalloonUserClick(This,pt))
#define IUserNotificationCallback_OnLeftClick(This,pt) \
    ((This)->lpVtbl->OnLeftClick(This,pt))
#define IUserNotificationCallback_OnContextMenu(This,pt) \
    ((This)->lpVtbl->OnContextMenu(This,pt))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUserNotificationCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUserNotification2 interface
 */
#ifndef __IUserNotification2_INTERFACE_DEFINED__
#define __IUserNotification2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUserNotification2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUserNotification2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUserNotification2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUserNotification2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUserNotification2 *This);

    /*** IUserNotification2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBalloonInfo)(
        IUserNotification2 *This,
        LPCWSTR pszTitle,
        LPCWSTR pszText,
        DWORD dwInfoFlags);

    HRESULT (STDMETHODCALLTYPE *SetBalloonRetry)(
        IUserNotification2 *This,
        DWORD dwShowTime,
        DWORD dwInterval,
        UINT cRetryCount);

    HRESULT (STDMETHODCALLTYPE *SetIconInfo)(
        IUserNotification2 *This,
        HICON hIcon,
        LPCWSTR pszToolTip);

    HRESULT (STDMETHODCALLTYPE *Show)(
        IUserNotification2 *This,
        IQueryContinue *pqc,
        DWORD dwContinuePollInterval,
        IUserNotificationCallback *pSink);

    HRESULT (STDMETHODCALLTYPE *PlaySound)(
        IUserNotification2 *This,
        LPCWSTR pszSoundName);

    END_INTERFACE
} IUserNotification2Vtbl;

interface IUserNotification2 {
    CONST_VTBL IUserNotification2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUserNotification2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUserNotification2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUserNotification2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUserNotification2 methods ***/
#define IUserNotification2_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) \
    ((This)->lpVtbl->SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags))
#define IUserNotification2_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) \
    ((This)->lpVtbl->SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount))
#define IUserNotification2_SetIconInfo(This,hIcon,pszToolTip) \
    ((This)->lpVtbl->SetIconInfo(This,hIcon,pszToolTip))
#define IUserNotification2_Show(This,pqc,dwContinuePollInterval,pSink) \
    ((This)->lpVtbl->Show(This,pqc,dwContinuePollInterval,pSink))
#define IUserNotification2_PlaySound(This,pszSoundName) \
    ((This)->lpVtbl->PlaySound(This,pszSoundName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUserNotification2_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IDeskBand2 interface
 */
#ifndef __IDeskBand2_INTERFACE_DEFINED__
#define __IDeskBand2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDeskBand2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDeskBand2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDeskBand2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDeskBand2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDeskBand2 *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IDeskBand2 *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IDeskBand2 *This,
        BOOL fEnterMode);

    /*** IDockingWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowDW)(
        IDeskBand2 *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *CloseDW)(
        IDeskBand2 *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *ResizeBorderDW)(
        IDeskBand2 *This,
        LPCRECT prcBorder,
        IUnknown *punkToolbarSite,
        BOOL fReserved);

    /*** IDeskBand methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBandInfo)(
        IDeskBand2 *This,
        DWORD dwBandID,
        DWORD dwViewMode,
        DESKBANDINFO *pdbi);

    /*** IDeskBand2 methods ***/
    HRESULT (STDMETHODCALLTYPE *CanRenderComposited)(
        IDeskBand2 *This,
        BOOL *pfCanRenderComposited);

    HRESULT (STDMETHODCALLTYPE *SetCompositionState)(
        IDeskBand2 *This,
        BOOL fCompositionEnabled);

    HRESULT (STDMETHODCALLTYPE *GetCompositionState)(
        IDeskBand2 *This,
        BOOL *pfCompositionEnabled);

    END_INTERFACE
} IDeskBand2Vtbl;

interface IDeskBand2 {
    CONST_VTBL IDeskBand2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDeskBand2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDeskBand2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDeskBand2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IDeskBand2_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IDeskBand2_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IDockingWindow methods ***/
#define IDeskBand2_ShowDW(This,fShow) \
    ((This)->lpVtbl->ShowDW(This,fShow))
#define IDeskBand2_CloseDW(This,dwReserved) \
    ((This)->lpVtbl->CloseDW(This,dwReserved))
#define IDeskBand2_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) \
    ((This)->lpVtbl->ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved))
/*** IDeskBand methods ***/
#define IDeskBand2_GetBandInfo(This,dwBandID,dwViewMode,pdbi) \
    ((This)->lpVtbl->GetBandInfo(This,dwBandID,dwViewMode,pdbi))
/*** IDeskBand2 methods ***/
#define IDeskBand2_CanRenderComposited(This,pfCanRenderComposited) \
    ((This)->lpVtbl->CanRenderComposited(This,pfCanRenderComposited))
#define IDeskBand2_SetCompositionState(This,fCompositionEnabled) \
    ((This)->lpVtbl->SetCompositionState(This,fCompositionEnabled))
#define IDeskBand2_GetCompositionState(This,pfCompositionEnabled) \
    ((This)->lpVtbl->GetCompositionState(This,pfCompositionEnabled))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDeskBand2_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

/*****************************************************************************
 * IStartMenuPinnedList interface
 */
#ifndef __IStartMenuPinnedList_INTERFACE_DEFINED__
#define __IStartMenuPinnedList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IStartMenuPinnedList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStartMenuPinnedListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStartMenuPinnedList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStartMenuPinnedList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStartMenuPinnedList *This);

    /*** IStartMenuPinnedList methods ***/
    HRESULT (STDMETHODCALLTYPE *RemoveFromList)(
        IStartMenuPinnedList *This,
        IShellItem *pitem);

    END_INTERFACE
} IStartMenuPinnedListVtbl;

interface IStartMenuPinnedList {
    CONST_VTBL IStartMenuPinnedListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStartMenuPinnedList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStartMenuPinnedList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStartMenuPinnedList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IStartMenuPinnedList methods ***/
#define IStartMenuPinnedList_RemoveFromList(This,pitem) \
    ((This)->lpVtbl->RemoveFromList(This,pitem))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IStartMenuPinnedList_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICDBurn interface
 */
#ifndef __ICDBurn_INTERFACE_DEFINED__
#define __ICDBurn_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICDBurn;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICDBurnVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICDBurn *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICDBurn *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICDBurn *This);

    /*** ICDBurn methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRecorderDriveLetter)(
        ICDBurn *This,
        LPWSTR pszDrive,
        UINT cch);

    HRESULT (STDMETHODCALLTYPE *Burn)(
        ICDBurn *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *HasRecordableDrive)(
        ICDBurn *This,
        BOOL *pfHasRecorder);

    END_INTERFACE
} ICDBurnVtbl;

interface ICDBurn {
    CONST_VTBL ICDBurnVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICDBurn_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICDBurn_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICDBurn_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICDBurn methods ***/
#define ICDBurn_GetRecorderDriveLetter(This,pszDrive,cch) \
    ((This)->lpVtbl->GetRecorderDriveLetter(This,pszDrive,cch))
#define ICDBurn_Burn(This,hwnd) \
    ((This)->lpVtbl->Burn(This,hwnd))
#define ICDBurn_HasRecordableDrive(This,pfHasRecorder) \
    ((This)->lpVtbl->HasRecordableDrive(This,pfHasRecorder))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICDBurn_INTERFACE_DEFINED__ */

#define IDD_WIZEXTN_FIRST    0x5000
#define IDD_WIZEXTN_LAST     0x5100

/*****************************************************************************
 * IWizardSite interface
 */
#ifndef __IWizardSite_INTERFACE_DEFINED__
#define __IWizardSite_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWizardSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWizardSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWizardSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWizardSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWizardSite *This);

    /*** IWizardSite methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPreviousPage)(
        IWizardSite *This,
        HPROPSHEETPAGE *phpage);

    HRESULT (STDMETHODCALLTYPE *GetNextPage)(
        IWizardSite *This,
        HPROPSHEETPAGE *phpage);

    HRESULT (STDMETHODCALLTYPE *GetCancelledPage)(
        IWizardSite *This,
        HPROPSHEETPAGE *phpage);

    END_INTERFACE
} IWizardSiteVtbl;

interface IWizardSite {
    CONST_VTBL IWizardSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWizardSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWizardSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWizardSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWizardSite methods ***/
#define IWizardSite_GetPreviousPage(This,phpage) \
    ((This)->lpVtbl->GetPreviousPage(This,phpage))
#define IWizardSite_GetNextPage(This,phpage) \
    ((This)->lpVtbl->GetNextPage(This,phpage))
#define IWizardSite_GetCancelledPage(This,phpage) \
    ((This)->lpVtbl->GetCancelledPage(This,phpage))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWizardSite_INTERFACE_DEFINED__ */

#define SID_WizardSite IID_IWizardSite

/*****************************************************************************
 * IWizardExtension interface
 */
#ifndef __IWizardExtension_INTERFACE_DEFINED__
#define __IWizardExtension_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWizardExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWizardExtensionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWizardExtension *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWizardExtension *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWizardExtension *This);

    /*** IWizardExtension methods ***/
    HRESULT (STDMETHODCALLTYPE *AddPages)(
        IWizardExtension *This,
        HPROPSHEETPAGE *aPages,
        UINT cPages,
        UINT *pnPagesAdded);

    HRESULT (STDMETHODCALLTYPE *GetFirstPage)(
        IWizardExtension *This,
        HPROPSHEETPAGE *phpage);

    HRESULT (STDMETHODCALLTYPE *GetLastPage)(
        IWizardExtension *This,
        HPROPSHEETPAGE *phpage);

    END_INTERFACE
} IWizardExtensionVtbl;

interface IWizardExtension {
    CONST_VTBL IWizardExtensionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWizardExtension_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWizardExtension_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWizardExtension_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWizardExtension methods ***/
#define IWizardExtension_AddPages(This,aPages,cPages,pnPagesAdded) \
    ((This)->lpVtbl->AddPages(This,aPages,cPages,pnPagesAdded))
#define IWizardExtension_GetFirstPage(This,phpage) \
    ((This)->lpVtbl->GetFirstPage(This,phpage))
#define IWizardExtension_GetLastPage(This,phpage) \
    ((This)->lpVtbl->GetLastPage(This,phpage))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWizardExtension_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWebWizardExtension interface
 */
#ifndef __IWebWizardExtension_INTERFACE_DEFINED__
#define __IWebWizardExtension_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWebWizardExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWebWizardExtensionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWebWizardExtension *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWebWizardExtension *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWebWizardExtension *This);

    /*** IWizardExtension methods ***/
    HRESULT (STDMETHODCALLTYPE *AddPages)(
        IWebWizardExtension *This,
        HPROPSHEETPAGE *aPages,
        UINT cPages,
        UINT *pnPagesAdded);

    HRESULT (STDMETHODCALLTYPE *GetFirstPage)(
        IWebWizardExtension *This,
        HPROPSHEETPAGE *phpage);

    HRESULT (STDMETHODCALLTYPE *GetLastPage)(
        IWebWizardExtension *This,
        HPROPSHEETPAGE *phpage);

    /*** IWebWizardExtension methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInitialURL)(
        IWebWizardExtension *This,
        LPCWSTR pszURL);

    HRESULT (STDMETHODCALLTYPE *SetErrorURL)(
        IWebWizardExtension *This,
        LPCWSTR pszErrorURL);

    END_INTERFACE
} IWebWizardExtensionVtbl;

interface IWebWizardExtension {
    CONST_VTBL IWebWizardExtensionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWebWizardExtension_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWebWizardExtension_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWebWizardExtension_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWizardExtension methods ***/
#define IWebWizardExtension_AddPages(This,aPages,cPages,pnPagesAdded) \
    ((This)->lpVtbl->AddPages(This,aPages,cPages,pnPagesAdded))
#define IWebWizardExtension_GetFirstPage(This,phpage) \
    ((This)->lpVtbl->GetFirstPage(This,phpage))
#define IWebWizardExtension_GetLastPage(This,phpage) \
    ((This)->lpVtbl->GetLastPage(This,phpage))
/*** IWebWizardExtension methods ***/
#define IWebWizardExtension_SetInitialURL(This,pszURL) \
    ((This)->lpVtbl->SetInitialURL(This,pszURL))
#define IWebWizardExtension_SetErrorURL(This,pszErrorURL) \
    ((This)->lpVtbl->SetErrorURL(This,pszErrorURL))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWebWizardExtension_INTERFACE_DEFINED__ */

#define SID_WebWizardHost IID_IWebWizardExtension

#define SHPWHF_NORECOMPRESS             0x00000001  // don't allow/prompt for recompress of streams
#define SHPWHF_NONETPLACECREATE         0x00000002  // don't create a network place when transfer is complete
#define SHPWHF_NOFILESELECTOR           0x00000004  // don't show the file selector
#define SHPWHF_USEMRU                   0x00000008  // For OPW.  Use the Most-Recently-Used Print Provider
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SHPWHF_ANYLOCATION              0x00000100  // allow publishing to any location
#endif  // NTDDI_VISTA
#define SHPWHF_VALIDATEVIAWEBFOLDERS    0x00010000  // enable web folders to validate network places (ANP support)

/*****************************************************************************
 * IPublishingWizard interface
 */
#ifndef __IPublishingWizard_INTERFACE_DEFINED__
#define __IPublishingWizard_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPublishingWizard;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPublishingWizardVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPublishingWizard *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPublishingWizard *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPublishingWizard *This);

    /*** IWizardExtension methods ***/
    HRESULT (STDMETHODCALLTYPE *AddPages)(
        IPublishingWizard *This,
        HPROPSHEETPAGE *aPages,
        UINT cPages,
        UINT *pnPagesAdded);

    HRESULT (STDMETHODCALLTYPE *GetFirstPage)(
        IPublishingWizard *This,
        HPROPSHEETPAGE *phpage);

    HRESULT (STDMETHODCALLTYPE *GetLastPage)(
        IPublishingWizard *This,
        HPROPSHEETPAGE *phpage);

    /*** IPublishingWizard methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IPublishingWizard *This,
        IDataObject *pdo,
        DWORD dwOptions,
        LPCWSTR pszServiceScope);

    HRESULT (STDMETHODCALLTYPE *GetTransferManifest)(
        IPublishingWizard *This,
        HRESULT *phrFromTransfer,
        IXMLDOMDocument **pdocManifest);

    END_INTERFACE
} IPublishingWizardVtbl;

interface IPublishingWizard {
    CONST_VTBL IPublishingWizardVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPublishingWizard_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPublishingWizard_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPublishingWizard_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWizardExtension methods ***/
#define IPublishingWizard_AddPages(This,aPages,cPages,pnPagesAdded) \
    ((This)->lpVtbl->AddPages(This,aPages,cPages,pnPagesAdded))
#define IPublishingWizard_GetFirstPage(This,phpage) \
    ((This)->lpVtbl->GetFirstPage(This,phpage))
#define IPublishingWizard_GetLastPage(This,phpage) \
    ((This)->lpVtbl->GetLastPage(This,phpage))
/*** IPublishingWizard methods ***/
#define IPublishingWizard_Initialize(This,pdo,dwOptions,pszServiceScope) \
    ((This)->lpVtbl->Initialize(This,pdo,dwOptions,pszServiceScope))
#define IPublishingWizard_GetTransferManifest(This,phrFromTransfer,pdocManifest) \
    ((This)->lpVtbl->GetTransferManifest(This,phrFromTransfer,pdocManifest))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPublishingWizard_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IFolderViewHost interface
 */
#ifndef __IFolderViewHost_INTERFACE_DEFINED__
#define __IFolderViewHost_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderViewHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderViewHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderViewHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderViewHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderViewHost *This);

    /*** IFolderViewHost methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IFolderViewHost *This,
        HWND hwndParent,
        IDataObject *pdo,
        RECT *prc);

    END_INTERFACE
} IFolderViewHostVtbl;

interface IFolderViewHost {
    CONST_VTBL IFolderViewHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderViewHost_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderViewHost_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderViewHost_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderViewHost methods ***/
#define IFolderViewHost_Initialize(This,hwndParent,pdo,prc) \
    ((This)->lpVtbl->Initialize(This,hwndParent,pdo,prc))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderViewHost_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IAccessibleObject interface
 */
#ifndef __IAccessibleObject_INTERFACE_DEFINED__
#define __IAccessibleObject_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAccessibleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAccessibleObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleObject *This);

    /*** IAccessibleObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAccessibleName)(
        IAccessibleObject *This,
        LPCWSTR pszName);

    END_INTERFACE
} IAccessibleObjectVtbl;

interface IAccessibleObject {
    CONST_VTBL IAccessibleObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAccessibleObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAccessibleObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAccessibleObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAccessibleObject methods ***/
#define IAccessibleObject_SetAccessibleName(This,pszName) \
    ((This)->lpVtbl->SetAccessibleName(This,pszName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAccessibleObject_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IResultsFolder interface
 */
#ifndef __IResultsFolder_INTERFACE_DEFINED__
#define __IResultsFolder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IResultsFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IResultsFolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IResultsFolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IResultsFolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IResultsFolder *This);

    /*** IResultsFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *AddItem)(
        IResultsFolder *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *AddIDList)(
        IResultsFolder *This,
        PCIDLIST_ABSOLUTE pidl,
        PITEMID_CHILD *ppidlAdded);

    HRESULT (STDMETHODCALLTYPE *RemoveItem)(
        IResultsFolder *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *RemoveIDList)(
        IResultsFolder *This,
        PCIDLIST_ABSOLUTE pidl);

    HRESULT (STDMETHODCALLTYPE *RemoveAll)(
        IResultsFolder *This);

    END_INTERFACE
} IResultsFolderVtbl;

interface IResultsFolder {
    CONST_VTBL IResultsFolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IResultsFolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IResultsFolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IResultsFolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IResultsFolder methods ***/
#define IResultsFolder_AddItem(This,psi) \
    ((This)->lpVtbl->AddItem(This,psi))
#define IResultsFolder_AddIDList(This,pidl,ppidlAdded) \
    ((This)->lpVtbl->AddIDList(This,pidl,ppidlAdded))
#define IResultsFolder_RemoveItem(This,psi) \
    ((This)->lpVtbl->RemoveItem(This,psi))
#define IResultsFolder_RemoveIDList(This,pidl) \
    ((This)->lpVtbl->RemoveIDList(This,pidl))
#define IResultsFolder_RemoveAll(This) \
    ((This)->lpVtbl->RemoveAll(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IResultsFolder_RemoteAddIDList_Proxy(
    IResultsFolder *This,
    PCIDLIST_ABSOLUTE pidl,
    PITEMID_CHILD *ppidlAdded);

void __RPC_STUB IResultsFolder_RemoteAddIDList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IResultsFolder_AddIDList_Proxy(
    PCIDLIST_ABSOLUTE pidl,
    PITEMID_CHILD *ppidlAdded);
HRESULT IResultsFolder_AddIDList_Stub(
    PCIDLIST_ABSOLUTE pidl,
    PITEMID_CHILD *ppidlAdded);
#endif /* __IResultsFolder_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE70)

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

#endif  // NTDDI_WINXP || (_WIN32_IE >= _WIN32_IE_IE70)

#define ACDD_VISIBLE        0x0001

/*****************************************************************************
 * IAutoCompleteDropDown interface
 */
#ifndef __IAutoCompleteDropDown_INTERFACE_DEFINED__
#define __IAutoCompleteDropDown_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAutoCompleteDropDown;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAutoCompleteDropDownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAutoCompleteDropDown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAutoCompleteDropDown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAutoCompleteDropDown *This);

    /*** IAutoCompleteDropDown methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDropDownStatus)(
        IAutoCompleteDropDown *This,
        DWORD *pdwFlags,
        LPWSTR *ppwszString);

    HRESULT (STDMETHODCALLTYPE *ResetEnumerator)(
        IAutoCompleteDropDown *This);

    END_INTERFACE
} IAutoCompleteDropDownVtbl;

interface IAutoCompleteDropDown {
    CONST_VTBL IAutoCompleteDropDownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAutoCompleteDropDown_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAutoCompleteDropDown_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAutoCompleteDropDown_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAutoCompleteDropDown methods ***/
#define IAutoCompleteDropDown_GetDropDownStatus(This,pdwFlags,ppwszString) \
    ((This)->lpVtbl->GetDropDownStatus(This,pdwFlags,ppwszString))
#define IAutoCompleteDropDown_ResetEnumerator(This) \
    ((This)->lpVtbl->ResetEnumerator(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAutoCompleteDropDown_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP)

#define PROPSTR_EXTENSIONCOMPLETIONSTATE L"ExtensionCompletionState"

enum tagCDBURNINGEXTENSIONRET {
    CDBE_RET_DEFAULT = 0x0,
    CDBE_RET_DONTRUNOTHEREXTS = 0x1,
    CDBE_RET_STOPWIZARD = 0x2
};
#define SID_CDWizardHost IID_ICDBurnExt

enum _CDBE_ACTIONS {
    CDBE_TYPE_MUSIC = 0x1,
    CDBE_TYPE_DATA = 0x2,
    CDBE_TYPE_ALL = (int)0xffffffff
};
typedef DWORD CDBE_ACTIONS;

/*****************************************************************************
 * ICDBurnExt interface
 */
#ifndef __ICDBurnExt_INTERFACE_DEFINED__
#define __ICDBurnExt_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICDBurnExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICDBurnExtVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICDBurnExt *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICDBurnExt *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICDBurnExt *This);

    /*** ICDBurnExt methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSupportedActionTypes)(
        ICDBurnExt *This,
        CDBE_ACTIONS *pdwActions);

    END_INTERFACE
} ICDBurnExtVtbl;

interface ICDBurnExt {
    CONST_VTBL ICDBurnExtVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICDBurnExt_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICDBurnExt_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICDBurnExt_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICDBurnExt methods ***/
#define ICDBurnExt_GetSupportedActionTypes(This,pdwActions) \
    ((This)->lpVtbl->GetSupportedActionTypes(This,pdwActions))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICDBurnExt_INTERFACE_DEFINED__ */

#endif  // NTDDI_WINXP

/*****************************************************************************
 * IEnumReadyCallback interface
 */
#ifndef __IEnumReadyCallback_INTERFACE_DEFINED__
#define __IEnumReadyCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumReadyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumReadyCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumReadyCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumReadyCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumReadyCallback *This);

    /*** IEnumReadyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumReady)(
        IEnumReadyCallback *This);

    END_INTERFACE
} IEnumReadyCallbackVtbl;

interface IEnumReadyCallback {
    CONST_VTBL IEnumReadyCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumReadyCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumReadyCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumReadyCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumReadyCallback methods ***/
#define IEnumReadyCallback_EnumReady(This) \
    ((This)->lpVtbl->EnumReady(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumReadyCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumerableView interface
 */
#ifndef __IEnumerableView_INTERFACE_DEFINED__
#define __IEnumerableView_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumerableView;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumerableViewVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumerableView *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumerableView *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumerableView *This);

    /*** IEnumerableView methods ***/
    HRESULT (STDMETHODCALLTYPE *SetEnumReadyCallback)(
        IEnumerableView *This,
        IEnumReadyCallback *percb);

    HRESULT (STDMETHODCALLTYPE *CreateEnumIDListFromContents)(
        IEnumerableView *This,
        PCIDLIST_ABSOLUTE pidlFolder,
        DWORD dwEnumFlags,
        IEnumIDList **ppEnumIDList);

    END_INTERFACE
} IEnumerableViewVtbl;

interface IEnumerableView {
    CONST_VTBL IEnumerableViewVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumerableView_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumerableView_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumerableView_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumerableView methods ***/
#define IEnumerableView_SetEnumReadyCallback(This,percb) \
    ((This)->lpVtbl->SetEnumReadyCallback(This,percb))
#define IEnumerableView_CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList) \
    ((This)->lpVtbl->CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumerableView_INTERFACE_DEFINED__ */

#define SID_EnumerableView IID_IEnumerableView

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IInsertItem interface
 */
#ifndef __IInsertItem_INTERFACE_DEFINED__
#define __IInsertItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInsertItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInsertItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInsertItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInsertItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInsertItem *This);

    /*** IInsertItem methods ***/
    HRESULT (STDMETHODCALLTYPE *InsertItem)(
        IInsertItem *This,
        PCUIDLIST_RELATIVE pidl);

    END_INTERFACE
} IInsertItemVtbl;

interface IInsertItem {
    CONST_VTBL IInsertItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInsertItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInsertItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInsertItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInsertItem methods ***/
#define IInsertItem_InsertItem(This,pidl) \
    ((This)->lpVtbl->InsertItem(This,pidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInsertItem_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP)

/*****************************************************************************
 * IFolderBandPriv interface
 */
#ifndef __IFolderBandPriv_INTERFACE_DEFINED__
#define __IFolderBandPriv_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderBandPriv;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderBandPrivVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderBandPriv *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderBandPriv *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderBandPriv *This);

    /*** IFolderBandPriv methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCascade)(
        IFolderBandPriv *This,
        BOOL fCascade);

    HRESULT (STDMETHODCALLTYPE *SetAccelerators)(
        IFolderBandPriv *This,
        BOOL fAccelerators);

    HRESULT (STDMETHODCALLTYPE *SetNoIcons)(
        IFolderBandPriv *This,
        BOOL fNoIcons);

    HRESULT (STDMETHODCALLTYPE *SetNoText)(
        IFolderBandPriv *This,
        BOOL fNoText);

    END_INTERFACE
} IFolderBandPrivVtbl;

interface IFolderBandPriv {
    CONST_VTBL IFolderBandPrivVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderBandPriv_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderBandPriv_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderBandPriv_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderBandPriv methods ***/
#define IFolderBandPriv_SetCascade(This,fCascade) \
    ((This)->lpVtbl->SetCascade(This,fCascade))
#define IFolderBandPriv_SetAccelerators(This,fAccelerators) \
    ((This)->lpVtbl->SetAccelerators(This,fAccelerators))
#define IFolderBandPriv_SetNoIcons(This,fNoIcons) \
    ((This)->lpVtbl->SetNoIcons(This,fNoIcons))
#define IFolderBandPriv_SetNoText(This,fNoText) \
    ((This)->lpVtbl->SetNoText(This,fNoText))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderBandPriv_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IImageRecompress interface
 */
#ifndef __IImageRecompress_INTERFACE_DEFINED__
#define __IImageRecompress_INTERFACE_DEFINED__

EXTERN_C const IID IID_IImageRecompress;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IImageRecompressVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageRecompress *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageRecompress *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageRecompress *This);

    /*** IImageRecompress methods ***/
    HRESULT (STDMETHODCALLTYPE *RecompressImage)(
        IImageRecompress *This,
        IShellItem *psi,
        int cx,
        int cy,
        int iQuality,
        IStorage *pstg,
        IStream **ppstrmOut);

    END_INTERFACE
} IImageRecompressVtbl;

interface IImageRecompress {
    CONST_VTBL IImageRecompressVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IImageRecompress_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IImageRecompress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IImageRecompress_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IImageRecompress methods ***/
#define IImageRecompress_RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut) \
    ((This)->lpVtbl->RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IImageRecompress_INTERFACE_DEFINED__ */

#endif  // NTDDI_WINXP
#endif  // NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IFileDialogControlEvents interface
 */
#ifndef __IFileDialogControlEvents_INTERFACE_DEFINED__
#define __IFileDialogControlEvents_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileDialogControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileDialogControlEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileDialogControlEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileDialogControlEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileDialogControlEvents *This);

    /*** IFileDialogControlEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnItemSelected)(
        IFileDialogControlEvents *This,
        IFileDialogCustomize *pfdc,
        DWORD dwIDCtl,
        DWORD dwIDItem);

    HRESULT (STDMETHODCALLTYPE *OnButtonClicked)(
        IFileDialogControlEvents *This,
        IFileDialogCustomize *pfdc,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *OnCheckButtonToggled)(
        IFileDialogControlEvents *This,
        IFileDialogCustomize *pfdc,
        DWORD dwIDCtl,
        BOOL bChecked);

    HRESULT (STDMETHODCALLTYPE *OnControlActivating)(
        IFileDialogControlEvents *This,
        IFileDialogCustomize *pfdc,
        DWORD dwIDCtl);

    END_INTERFACE
} IFileDialogControlEventsVtbl;

interface IFileDialogControlEvents {
    CONST_VTBL IFileDialogControlEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileDialogControlEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileDialogControlEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileDialogControlEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileDialogControlEvents methods ***/
#define IFileDialogControlEvents_OnItemSelected(This,pfdc,dwIDCtl,dwIDItem) \
    ((This)->lpVtbl->OnItemSelected(This,pfdc,dwIDCtl,dwIDItem))
#define IFileDialogControlEvents_OnButtonClicked(This,pfdc,dwIDCtl) \
    ((This)->lpVtbl->OnButtonClicked(This,pfdc,dwIDCtl))
#define IFileDialogControlEvents_OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked) \
    ((This)->lpVtbl->OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked))
#define IFileDialogControlEvents_OnControlActivating(This,pfdc,dwIDCtl) \
    ((This)->lpVtbl->OnControlActivating(This,pfdc,dwIDCtl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileDialogControlEvents_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFileDialog2 interface
 */
#ifndef __IFileDialog2_INTERFACE_DEFINED__
#define __IFileDialog2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileDialog2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileDialog2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileDialog2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileDialog2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileDialog2 *This);

    /*** IModalWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *Show)(
        IFileDialog2 *This,
        HWND hwndOwner);

    /*** IFileDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFileTypes)(
        IFileDialog2 *This,
        UINT cFileTypes,
        const COMDLG_FILTERSPEC *rgFilterSpec);

    HRESULT (STDMETHODCALLTYPE *SetFileTypeIndex)(
        IFileDialog2 *This,
        UINT iFileType);

    HRESULT (STDMETHODCALLTYPE *GetFileTypeIndex)(
        IFileDialog2 *This,
        UINT *piFileType);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFileDialog2 *This,
        IFileDialogEvents *pfde,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFileDialog2 *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IFileDialog2 *This,
        FILEOPENDIALOGOPTIONS fos);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IFileDialog2 *This,
        FILEOPENDIALOGOPTIONS *pfos);

    HRESULT (STDMETHODCALLTYPE *SetDefaultFolder)(
        IFileDialog2 *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetFolder)(
        IFileDialog2 *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IFileDialog2 *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *GetCurrentSelection)(
        IFileDialog2 *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *SetFileName)(
        IFileDialog2 *This,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetFileName)(
        IFileDialog2 *This,
        LPWSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *SetTitle)(
        IFileDialog2 *This,
        LPCWSTR pszTitle);

    HRESULT (STDMETHODCALLTYPE *SetOkButtonLabel)(
        IFileDialog2 *This,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *SetFileNameLabel)(
        IFileDialog2 *This,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *GetResult)(
        IFileDialog2 *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *AddPlace)(
        IFileDialog2 *This,
        IShellItem *psi,
        FDAP fdap);

    HRESULT (STDMETHODCALLTYPE *SetDefaultExtension)(
        IFileDialog2 *This,
        LPCWSTR pszDefaultExtension);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IFileDialog2 *This,
        HRESULT hr);

    HRESULT (STDMETHODCALLTYPE *SetClientGuid)(
        IFileDialog2 *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *ClearClientData)(
        IFileDialog2 *This);

    HRESULT (STDMETHODCALLTYPE *SetFilter)(
        IFileDialog2 *This,
        IShellItemFilter *pFilter);

    /*** IFileDialog2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCancelButtonLabel)(
        IFileDialog2 *This,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *SetNavigationRoot)(
        IFileDialog2 *This,
        IShellItem *psi);

    END_INTERFACE
} IFileDialog2Vtbl;

interface IFileDialog2 {
    CONST_VTBL IFileDialog2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileDialog2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileDialog2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileDialog2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IModalWindow methods ***/
#define IFileDialog2_Show(This,hwndOwner) \
    ((This)->lpVtbl->Show(This,hwndOwner))
/*** IFileDialog methods ***/
#define IFileDialog2_SetFileTypes(This,cFileTypes,rgFilterSpec) \
    ((This)->lpVtbl->SetFileTypes(This,cFileTypes,rgFilterSpec))
#define IFileDialog2_SetFileTypeIndex(This,iFileType) \
    ((This)->lpVtbl->SetFileTypeIndex(This,iFileType))
#define IFileDialog2_GetFileTypeIndex(This,piFileType) \
    ((This)->lpVtbl->GetFileTypeIndex(This,piFileType))
#define IFileDialog2_Advise(This,pfde,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pfde,pdwCookie))
#define IFileDialog2_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFileDialog2_SetOptions(This,fos) \
    ((This)->lpVtbl->SetOptions(This,fos))
#define IFileDialog2_GetOptions(This,pfos) \
    ((This)->lpVtbl->GetOptions(This,pfos))
#define IFileDialog2_SetDefaultFolder(This,psi) \
    ((This)->lpVtbl->SetDefaultFolder(This,psi))
#define IFileDialog2_SetFolder(This,psi) \
    ((This)->lpVtbl->SetFolder(This,psi))
#define IFileDialog2_GetFolder(This,ppsi) \
    ((This)->lpVtbl->GetFolder(This,ppsi))
#define IFileDialog2_GetCurrentSelection(This,ppsi) \
    ((This)->lpVtbl->GetCurrentSelection(This,ppsi))
#define IFileDialog2_SetFileName(This,pszName) \
    ((This)->lpVtbl->SetFileName(This,pszName))
#define IFileDialog2_GetFileName(This,pszName) \
    ((This)->lpVtbl->GetFileName(This,pszName))
#define IFileDialog2_SetTitle(This,pszTitle) \
    ((This)->lpVtbl->SetTitle(This,pszTitle))
#define IFileDialog2_SetOkButtonLabel(This,pszText) \
    ((This)->lpVtbl->SetOkButtonLabel(This,pszText))
#define IFileDialog2_SetFileNameLabel(This,pszLabel) \
    ((This)->lpVtbl->SetFileNameLabel(This,pszLabel))
#define IFileDialog2_GetResult(This,ppsi) \
    ((This)->lpVtbl->GetResult(This,ppsi))
#define IFileDialog2_AddPlace(This,psi,fdap) \
    ((This)->lpVtbl->AddPlace(This,psi,fdap))
#define IFileDialog2_SetDefaultExtension(This,pszDefaultExtension) \
    ((This)->lpVtbl->SetDefaultExtension(This,pszDefaultExtension))
#define IFileDialog2_Close(This,hr) \
    ((This)->lpVtbl->Close(This,hr))
#define IFileDialog2_SetClientGuid(This,guid) \
    ((This)->lpVtbl->SetClientGuid(This,guid))
#define IFileDialog2_ClearClientData(This) \
    ((This)->lpVtbl->ClearClientData(This))
#define IFileDialog2_SetFilter(This,pFilter) \
    ((This)->lpVtbl->SetFilter(This,pFilter))
/*** IFileDialog2 methods ***/
#define IFileDialog2_SetCancelButtonLabel(This,pszLabel) \
    ((This)->lpVtbl->SetCancelButtonLabel(This,pszLabel))
#define IFileDialog2_SetNavigationRoot(This,psi) \
    ((This)->lpVtbl->SetNavigationRoot(This,psi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileDialog2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IApplicationAssociationRegistrationUI interface
 */
#ifndef __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApplicationAssociationRegistrationUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationAssociationRegistrationUIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationAssociationRegistrationUI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationAssociationRegistrationUI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationAssociationRegistrationUI *This);

    /*** IApplicationAssociationRegistrationUI methods ***/
    HRESULT (STDMETHODCALLTYPE *LaunchAdvancedAssociationUI)(
        IApplicationAssociationRegistrationUI *This,
        LPCWSTR pszAppRegistryName);

    END_INTERFACE
} IApplicationAssociationRegistrationUIVtbl;

interface IApplicationAssociationRegistrationUI {
    CONST_VTBL IApplicationAssociationRegistrationUIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationAssociationRegistrationUI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationAssociationRegistrationUI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationAssociationRegistrationUI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationAssociationRegistrationUI methods ***/
#define IApplicationAssociationRegistrationUI_LaunchAdvancedAssociationUI(This,pszAppRegistryName) \
    ((This)->lpVtbl->LaunchAdvancedAssociationUI(This,pszAppRegistryName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

/*****************************************************************************
 * IShellRunDll interface
 */
#ifndef __IShellRunDll_INTERFACE_DEFINED__
#define __IShellRunDll_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellRunDll;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellRunDllVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellRunDll *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellRunDll *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellRunDll *This);

    /*** IShellRunDll methods ***/
    HRESULT (STDMETHODCALLTYPE *Run)(
        IShellRunDll *This,
        LPCWSTR pszArgs);

    END_INTERFACE
} IShellRunDllVtbl;

interface IShellRunDll {
    CONST_VTBL IShellRunDllVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellRunDll_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellRunDll_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellRunDll_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellRunDll methods ***/
#define IShellRunDll_Run(This,pszArgs) \
    ((This)->lpVtbl->Run(This,pszArgs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellRunDll_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPreviousVersionsInfo interface
 */
#ifndef __IPreviousVersionsInfo_INTERFACE_DEFINED__
#define __IPreviousVersionsInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPreviousVersionsInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPreviousVersionsInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPreviousVersionsInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPreviousVersionsInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPreviousVersionsInfo *This);

    /*** IPreviousVersionsInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *AreSnapshotsAvailable)(
        IPreviousVersionsInfo *This,
        LPCWSTR pszPath,
        BOOL fOkToBeSlow,
        BOOL *pfAvailable);

    END_INTERFACE
} IPreviousVersionsInfoVtbl;

interface IPreviousVersionsInfo {
    CONST_VTBL IPreviousVersionsInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPreviousVersionsInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPreviousVersionsInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPreviousVersionsInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPreviousVersionsInfo methods ***/
#define IPreviousVersionsInfo_AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable) \
    ((This)->lpVtbl->AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPreviousVersionsInfo_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IUseToBrowseItem interface
 */
#ifndef __IUseToBrowseItem_INTERFACE_DEFINED__
#define __IUseToBrowseItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUseToBrowseItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUseToBrowseItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUseToBrowseItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUseToBrowseItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUseToBrowseItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IUseToBrowseItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IUseToBrowseItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} IUseToBrowseItemVtbl;

interface IUseToBrowseItem {
    CONST_VTBL IUseToBrowseItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUseToBrowseItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUseToBrowseItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUseToBrowseItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IUseToBrowseItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IUseToBrowseItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUseToBrowseItem_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

DEFINE_GUID(SID_SCommandBarState, 0xB99EAA5C, 0x3850, 0x4400, 0xBC, 0x33, 0x2C, 0xE5, 0x34, 0x04, 0x8B, 0xF8);

/*****************************************************************************
 * INameSpaceTreeControl2 interface
 */
#ifndef __INameSpaceTreeControl2_INTERFACE_DEFINED__
#define __INameSpaceTreeControl2_INTERFACE_DEFINED__

typedef enum NSTCSTYLE2 {
    NSTCS2_DEFAULT = 0x0,
    NSTCS2_INTERRUPTNOTIFICATIONS = 0x1,
    NSTCS2_SHOWNULLSPACEMENU = 0x2,
    NSTCS2_DISPLAYPADDING = 0x4,
    NSTCS2_DISPLAYPINNEDONLY = 0x8,
    NTSCS2_NOSINGLETONAUTOEXPAND = 0x10,
    NTSCS2_NEVERINSERTNONENUMERATED = 0x20
} NSTCSTYLE2;


EXTERN_C const IID IID_INameSpaceTreeControl2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeControl2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeControl2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeControl2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeControl2 *This);

    /*** INameSpaceTreeControl methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INameSpaceTreeControl2 *This,
        HWND hwndParent,
        RECT *prc,
        NSTCSTYLE nsctsFlags);

    HRESULT (STDMETHODCALLTYPE *TreeAdvise)(
        INameSpaceTreeControl2 *This,
        IUnknown *punk,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *TreeUnadvise)(
        INameSpaceTreeControl2 *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *AppendRoot)(
        INameSpaceTreeControl2 *This,
        IShellItem *psiRoot,
        SHCONTF grfEnumFlags,
        NSTCROOTSTYLE grfRootStyle,
        IShellItemFilter *pif);

    HRESULT (STDMETHODCALLTYPE *InsertRoot)(
        INameSpaceTreeControl2 *This,
        int iIndex,
        IShellItem *psiRoot,
        SHCONTF grfEnumFlags,
        NSTCROOTSTYLE grfRootStyle,
        IShellItemFilter *pif);

    HRESULT (STDMETHODCALLTYPE *RemoveRoot)(
        INameSpaceTreeControl2 *This,
        IShellItem *psiRoot);

    HRESULT (STDMETHODCALLTYPE *RemoveAllRoots)(
        INameSpaceTreeControl2 *This);

    HRESULT (STDMETHODCALLTYPE *GetRootItems)(
        INameSpaceTreeControl2 *This,
        IShellItemArray **ppsiaRootItems);

    HRESULT (STDMETHODCALLTYPE *SetItemState)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi,
        NSTCITEMSTATE nstcisMask,
        NSTCITEMSTATE nstcisFlags);

    HRESULT (STDMETHODCALLTYPE *GetItemState)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi,
        NSTCITEMSTATE nstcisMask,
        NSTCITEMSTATE *pnstcisFlags);

    HRESULT (STDMETHODCALLTYPE *GetSelectedItems)(
        INameSpaceTreeControl2 *This,
        IShellItemArray **psiaItems);

    HRESULT (STDMETHODCALLTYPE *GetItemCustomState)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi,
        int *piStateNumber);

    HRESULT (STDMETHODCALLTYPE *SetItemCustomState)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi,
        int iStateNumber);

    HRESULT (STDMETHODCALLTYPE *EnsureItemVisible)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetTheme)(
        INameSpaceTreeControl2 *This,
        LPCWSTR pszTheme);

    HRESULT (STDMETHODCALLTYPE *GetNextItem)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi,
        NSTCGNI nstcgi,
        IShellItem **ppsiNext);

    HRESULT (STDMETHODCALLTYPE *HitTest)(
        INameSpaceTreeControl2 *This,
        POINT *ppt,
        IShellItem **ppsiOut);

    HRESULT (STDMETHODCALLTYPE *GetItemRect)(
        INameSpaceTreeControl2 *This,
        IShellItem *psi,
        RECT *prect);

    HRESULT (STDMETHODCALLTYPE *CollapseAll)(
        INameSpaceTreeControl2 *This);

    /*** INameSpaceTreeControl2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetControlStyle)(
        INameSpaceTreeControl2 *This,
        NSTCSTYLE nstcsMask,
        NSTCSTYLE nstcsStyle);

    HRESULT (STDMETHODCALLTYPE *GetControlStyle)(
        INameSpaceTreeControl2 *This,
        NSTCSTYLE nstcsMask,
        NSTCSTYLE *pnstcsStyle);

    HRESULT (STDMETHODCALLTYPE *SetControlStyle2)(
        INameSpaceTreeControl2 *This,
        NSTCSTYLE2 nstcsMask,
        NSTCSTYLE2 nstcsStyle);

    HRESULT (STDMETHODCALLTYPE *GetControlStyle2)(
        INameSpaceTreeControl2 *This,
        NSTCSTYLE2 nstcsMask,
        NSTCSTYLE2 *pnstcsStyle);

    END_INTERFACE
} INameSpaceTreeControl2Vtbl;

interface INameSpaceTreeControl2 {
    CONST_VTBL INameSpaceTreeControl2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeControl2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeControl2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeControl2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeControl methods ***/
#define INameSpaceTreeControl2_Initialize(This,hwndParent,prc,nsctsFlags) \
    ((This)->lpVtbl->Initialize(This,hwndParent,prc,nsctsFlags))
#define INameSpaceTreeControl2_TreeAdvise(This,punk,pdwCookie) \
    ((This)->lpVtbl->TreeAdvise(This,punk,pdwCookie))
#define INameSpaceTreeControl2_TreeUnadvise(This,dwCookie) \
    ((This)->lpVtbl->TreeUnadvise(This,dwCookie))
#define INameSpaceTreeControl2_AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) \
    ((This)->lpVtbl->AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif))
#define INameSpaceTreeControl2_InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) \
    ((This)->lpVtbl->InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif))
#define INameSpaceTreeControl2_RemoveRoot(This,psiRoot) \
    ((This)->lpVtbl->RemoveRoot(This,psiRoot))
#define INameSpaceTreeControl2_RemoveAllRoots(This) \
    ((This)->lpVtbl->RemoveAllRoots(This))
#define INameSpaceTreeControl2_GetRootItems(This,ppsiaRootItems) \
    ((This)->lpVtbl->GetRootItems(This,ppsiaRootItems))
#define INameSpaceTreeControl2_SetItemState(This,psi,nstcisMask,nstcisFlags) \
    ((This)->lpVtbl->SetItemState(This,psi,nstcisMask,nstcisFlags))
#define INameSpaceTreeControl2_GetItemState(This,psi,nstcisMask,pnstcisFlags) \
    ((This)->lpVtbl->GetItemState(This,psi,nstcisMask,pnstcisFlags))
#define INameSpaceTreeControl2_GetSelectedItems(This,psiaItems) \
    ((This)->lpVtbl->GetSelectedItems(This,psiaItems))
#define INameSpaceTreeControl2_GetItemCustomState(This,psi,piStateNumber) \
    ((This)->lpVtbl->GetItemCustomState(This,psi,piStateNumber))
#define INameSpaceTreeControl2_SetItemCustomState(This,psi,iStateNumber) \
    ((This)->lpVtbl->SetItemCustomState(This,psi,iStateNumber))
#define INameSpaceTreeControl2_EnsureItemVisible(This,psi) \
    ((This)->lpVtbl->EnsureItemVisible(This,psi))
#define INameSpaceTreeControl2_SetTheme(This,pszTheme) \
    ((This)->lpVtbl->SetTheme(This,pszTheme))
#define INameSpaceTreeControl2_GetNextItem(This,psi,nstcgi,ppsiNext) \
    ((This)->lpVtbl->GetNextItem(This,psi,nstcgi,ppsiNext))
#define INameSpaceTreeControl2_HitTest(This,ppt,ppsiOut) \
    ((This)->lpVtbl->HitTest(This,ppt,ppsiOut))
#define INameSpaceTreeControl2_GetItemRect(This,psi,prect) \
    ((This)->lpVtbl->GetItemRect(This,psi,prect))
#define INameSpaceTreeControl2_CollapseAll(This) \
    ((This)->lpVtbl->CollapseAll(This))
/*** INameSpaceTreeControl2 methods ***/
#define INameSpaceTreeControl2_SetControlStyle(This,nstcsMask,nstcsStyle) \
    ((This)->lpVtbl->SetControlStyle(This,nstcsMask,nstcsStyle))
#define INameSpaceTreeControl2_GetControlStyle(This,nstcsMask,pnstcsStyle) \
    ((This)->lpVtbl->GetControlStyle(This,nstcsMask,pnstcsStyle))
#define INameSpaceTreeControl2_SetControlStyle2(This,nstcsMask,nstcsStyle) \
    ((This)->lpVtbl->SetControlStyle2(This,nstcsMask,nstcsStyle))
#define INameSpaceTreeControl2_GetControlStyle2(This,nstcsMask,pnstcsStyle) \
    ((This)->lpVtbl->GetControlStyle2(This,nstcsMask,pnstcsStyle))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeControl2_INTERFACE_DEFINED__ */

#define NSTCS2_ALLMASK (NSTCS2_INTERRUPTNOTIFICATIONS | NSTCS2_SHOWNULLSPACEMENU | NSTCS2_DISPLAYPADDING)

#define ISLBUTTON(x) (NSTCECT_LBUTTON == ((x) & NSTCECT_BUTTON))
#define ISMBUTTON(x) (NSTCECT_MBUTTON == ((x) & NSTCECT_BUTTON))
#define ISRBUTTON(x) (NSTCECT_RBUTTON == ((x) & NSTCECT_BUTTON))
#define ISDBLCLICK(x) (NSTCECT_DBLCLICK == ((x) & NSTCECT_DBLCLICK))

/*****************************************************************************
 * INameSpaceTreeControlEvents interface
 */
#ifndef __INameSpaceTreeControlEvents_INTERFACE_DEFINED__
#define __INameSpaceTreeControlEvents_INTERFACE_DEFINED__

enum _NSTCEHITTEST {
    NSTCEHT_NOWHERE = 0x1,
    NSTCEHT_ONITEMICON = 0x2,
    NSTCEHT_ONITEMLABEL = 0x4,
    NSTCEHT_ONITEMINDENT = 0x8,
    NSTCEHT_ONITEMBUTTON = 0x10,
    NSTCEHT_ONITEMRIGHT = 0x20,
    NSTCEHT_ONITEMSTATEICON = 0x40,
    NSTCEHT_ONITEM = 0x46,
    NSTCEHT_ONITEMTABBUTTON = 0x1000
};
typedef DWORD NSTCEHITTEST;

enum _NSTCECLICKTYPE {
    NSTCECT_LBUTTON = 0x1,
    NSTCECT_MBUTTON = 0x2,
    NSTCECT_RBUTTON = 0x3,
    NSTCECT_BUTTON = 0x3,
    NSTCECT_DBLCLICK = 0x4
};
typedef DWORD NSTCECLICKTYPE;

EXTERN_C const IID IID_INameSpaceTreeControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeControlEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeControlEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeControlEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeControlEvents *This);

    /*** INameSpaceTreeControlEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnItemClick)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        NSTCEHITTEST nstceHitTest,
        NSTCECLICKTYPE nstceClickType);

    HRESULT (STDMETHODCALLTYPE *OnPropertyItemCommit)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnItemStateChanging)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        NSTCITEMSTATE nstcisMask,
        NSTCITEMSTATE nstcisState);

    HRESULT (STDMETHODCALLTYPE *OnItemStateChanged)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        NSTCITEMSTATE nstcisMask,
        NSTCITEMSTATE nstcisState);

    HRESULT (STDMETHODCALLTYPE *OnSelectionChanged)(
        INameSpaceTreeControlEvents *This,
        IShellItemArray *psiaSelection);

    HRESULT (STDMETHODCALLTYPE *OnKeyboardInput)(
        INameSpaceTreeControlEvents *This,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *OnBeforeExpand)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnAfterExpand)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnBeginLabelEdit)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnEndLabelEdit)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnGetToolTip)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        LPWSTR pszTip,
        int cchTip);

    HRESULT (STDMETHODCALLTYPE *OnBeforeItemDelete)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnItemAdded)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        BOOL fIsRoot);

    HRESULT (STDMETHODCALLTYPE *OnItemDeleted)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        BOOL fIsRoot);

    HRESULT (STDMETHODCALLTYPE *OnBeforeContextMenu)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *OnAfterContextMenu)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        IContextMenu *pcmIn,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *OnBeforeStateImageChange)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnGetDefaultIconIndex)(
        INameSpaceTreeControlEvents *This,
        IShellItem *psi,
        int *piDefaultIcon,
        int *piOpenIcon);

    END_INTERFACE
} INameSpaceTreeControlEventsVtbl;

interface INameSpaceTreeControlEvents {
    CONST_VTBL INameSpaceTreeControlEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeControlEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeControlEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeControlEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeControlEvents methods ***/
#define INameSpaceTreeControlEvents_OnItemClick(This,psi,nstceHitTest,nstceClickType) \
    ((This)->lpVtbl->OnItemClick(This,psi,nstceHitTest,nstceClickType))
#define INameSpaceTreeControlEvents_OnPropertyItemCommit(This,psi) \
    ((This)->lpVtbl->OnPropertyItemCommit(This,psi))
#define INameSpaceTreeControlEvents_OnItemStateChanging(This,psi,nstcisMask,nstcisState) \
    ((This)->lpVtbl->OnItemStateChanging(This,psi,nstcisMask,nstcisState))
#define INameSpaceTreeControlEvents_OnItemStateChanged(This,psi,nstcisMask,nstcisState) \
    ((This)->lpVtbl->OnItemStateChanged(This,psi,nstcisMask,nstcisState))
#define INameSpaceTreeControlEvents_OnSelectionChanged(This,psiaSelection) \
    ((This)->lpVtbl->OnSelectionChanged(This,psiaSelection))
#define INameSpaceTreeControlEvents_OnKeyboardInput(This,uMsg,wParam,lParam) \
    ((This)->lpVtbl->OnKeyboardInput(This,uMsg,wParam,lParam))
#define INameSpaceTreeControlEvents_OnBeforeExpand(This,psi) \
    ((This)->lpVtbl->OnBeforeExpand(This,psi))
#define INameSpaceTreeControlEvents_OnAfterExpand(This,psi) \
    ((This)->lpVtbl->OnAfterExpand(This,psi))
#define INameSpaceTreeControlEvents_OnBeginLabelEdit(This,psi) \
    ((This)->lpVtbl->OnBeginLabelEdit(This,psi))
#define INameSpaceTreeControlEvents_OnEndLabelEdit(This,psi) \
    ((This)->lpVtbl->OnEndLabelEdit(This,psi))
#define INameSpaceTreeControlEvents_OnGetToolTip(This,psi,pszTip,cchTip) \
    ((This)->lpVtbl->OnGetToolTip(This,psi,pszTip,cchTip))
#define INameSpaceTreeControlEvents_OnBeforeItemDelete(This,psi) \
    ((This)->lpVtbl->OnBeforeItemDelete(This,psi))
#define INameSpaceTreeControlEvents_OnItemAdded(This,psi,fIsRoot) \
    ((This)->lpVtbl->OnItemAdded(This,psi,fIsRoot))
#define INameSpaceTreeControlEvents_OnItemDeleted(This,psi,fIsRoot) \
    ((This)->lpVtbl->OnItemDeleted(This,psi,fIsRoot))
#define INameSpaceTreeControlEvents_OnBeforeContextMenu(This,psi,riid,ppv) \
    ((This)->lpVtbl->OnBeforeContextMenu(This,psi,riid,ppv))
#define INameSpaceTreeControlEvents_OnAfterContextMenu(This,psi,pcmIn,riid,ppv) \
    ((This)->lpVtbl->OnAfterContextMenu(This,psi,pcmIn,riid,ppv))
#define INameSpaceTreeControlEvents_OnBeforeStateImageChange(This,psi) \
    ((This)->lpVtbl->OnBeforeStateImageChange(This,psi))
#define INameSpaceTreeControlEvents_OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon) \
    ((This)->lpVtbl->OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeControlEvents_INTERFACE_DEFINED__ */

#define NSTCDHPOS_ONTOP  -1

/*****************************************************************************
 * INameSpaceTreeControlDropHandler interface
 */
#ifndef __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__
#define __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_INameSpaceTreeControlDropHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeControlDropHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeControlDropHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeControlDropHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeControlDropHandler *This);

    /*** INameSpaceTreeControlDropHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *OnDragEnter)(
        INameSpaceTreeControlDropHandler *This,
        IShellItem *psiOver,
        IShellItemArray *psiaData,
        BOOL fOutsideSource,
        DWORD grfKeyState,
        DWORD *pdwEffect);

    HRESULT (STDMETHODCALLTYPE *OnDragOver)(
        INameSpaceTreeControlDropHandler *This,
        IShellItem *psiOver,
        IShellItemArray *psiaData,
        DWORD grfKeyState,
        DWORD *pdwEffect);

    HRESULT (STDMETHODCALLTYPE *OnDragPosition)(
        INameSpaceTreeControlDropHandler *This,
        IShellItem *psiOver,
        IShellItemArray *psiaData,
        int iNewPosition,
        int iOldPosition);

    HRESULT (STDMETHODCALLTYPE *OnDrop)(
        INameSpaceTreeControlDropHandler *This,
        IShellItem *psiOver,
        IShellItemArray *psiaData,
        int iPosition,
        DWORD grfKeyState,
        DWORD *pdwEffect);

    HRESULT (STDMETHODCALLTYPE *OnDropPosition)(
        INameSpaceTreeControlDropHandler *This,
        IShellItem *psiOver,
        IShellItemArray *psiaData,
        int iNewPosition,
        int iOldPosition);

    HRESULT (STDMETHODCALLTYPE *OnDragLeave)(
        INameSpaceTreeControlDropHandler *This,
        IShellItem *psiOver);

    END_INTERFACE
} INameSpaceTreeControlDropHandlerVtbl;

interface INameSpaceTreeControlDropHandler {
    CONST_VTBL INameSpaceTreeControlDropHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeControlDropHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeControlDropHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeControlDropHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeControlDropHandler methods ***/
#define INameSpaceTreeControlDropHandler_OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect) \
    ((This)->lpVtbl->OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect))
#define INameSpaceTreeControlDropHandler_OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect) \
    ((This)->lpVtbl->OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect))
#define INameSpaceTreeControlDropHandler_OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) \
    ((This)->lpVtbl->OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition))
#define INameSpaceTreeControlDropHandler_OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect) \
    ((This)->lpVtbl->OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect))
#define INameSpaceTreeControlDropHandler_OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) \
    ((This)->lpVtbl->OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition))
#define INameSpaceTreeControlDropHandler_OnDragLeave(This,psiOver) \
    ((This)->lpVtbl->OnDragLeave(This,psiOver))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INameSpaceTreeAccessible interface
 */
#ifndef __INameSpaceTreeAccessible_INTERFACE_DEFINED__
#define __INameSpaceTreeAccessible_INTERFACE_DEFINED__

EXTERN_C const IID IID_INameSpaceTreeAccessible;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeAccessibleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeAccessible *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeAccessible *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeAccessible *This);

    /*** INameSpaceTreeAccessible methods ***/
    HRESULT (STDMETHODCALLTYPE *OnGetDefaultAccessibilityAction)(
        INameSpaceTreeAccessible *This,
        IShellItem *psi,
        BSTR *pbstrDefaultAction);

    HRESULT (STDMETHODCALLTYPE *OnDoDefaultAccessibilityAction)(
        INameSpaceTreeAccessible *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *OnGetAccessibilityRole)(
        INameSpaceTreeAccessible *This,
        IShellItem *psi,
        VARIANT *pvarRole);

    END_INTERFACE
} INameSpaceTreeAccessibleVtbl;

interface INameSpaceTreeAccessible {
    CONST_VTBL INameSpaceTreeAccessibleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeAccessible_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeAccessible_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeAccessible_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeAccessible methods ***/
#define INameSpaceTreeAccessible_OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction) \
    ((This)->lpVtbl->OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction))
#define INameSpaceTreeAccessible_OnDoDefaultAccessibilityAction(This,psi) \
    ((This)->lpVtbl->OnDoDefaultAccessibilityAction(This,psi))
#define INameSpaceTreeAccessible_OnGetAccessibilityRole(This,psi,pvarRole) \
    ((This)->lpVtbl->OnGetAccessibilityRole(This,psi,pvarRole))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeAccessible_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INameSpaceTreeControlCustomDraw interface
 */
#ifndef __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__
#define __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__

typedef struct NSTCCUSTOMDRAW {
    IShellItem *psi;
    UINT uItemState;
    NSTCITEMSTATE nstcis;
    LPCWSTR pszText;
    int iImage;
    HIMAGELIST himl;
    int iLevel;
    int iIndent;
} NSTCCUSTOMDRAW;

EXTERN_C const IID IID_INameSpaceTreeControlCustomDraw;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeControlCustomDrawVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeControlCustomDraw *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeControlCustomDraw *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeControlCustomDraw *This);

    /*** INameSpaceTreeControlCustomDraw methods ***/
    HRESULT (STDMETHODCALLTYPE *PrePaint)(
        INameSpaceTreeControlCustomDraw *This,
        HDC hdc,
        RECT *prc,
        LRESULT *plres);

    HRESULT (STDMETHODCALLTYPE *PostPaint)(
        INameSpaceTreeControlCustomDraw *This,
        HDC hdc,
        RECT *prc);

    HRESULT (STDMETHODCALLTYPE *ItemPrePaint)(
        INameSpaceTreeControlCustomDraw *This,
        HDC hdc,
        RECT *prc,
        NSTCCUSTOMDRAW *pnstccdItem,
        COLORREF *pclrText,
        COLORREF *pclrTextBk,
        LRESULT *plres);

    HRESULT (STDMETHODCALLTYPE *ItemPostPaint)(
        INameSpaceTreeControlCustomDraw *This,
        HDC hdc,
        RECT *prc,
        NSTCCUSTOMDRAW *pnstccdItem);

    END_INTERFACE
} INameSpaceTreeControlCustomDrawVtbl;

interface INameSpaceTreeControlCustomDraw {
    CONST_VTBL INameSpaceTreeControlCustomDrawVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeControlCustomDraw_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeControlCustomDraw_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeControlCustomDraw_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeControlCustomDraw methods ***/
#define INameSpaceTreeControlCustomDraw_PrePaint(This,hdc,prc,plres) \
    ((This)->lpVtbl->PrePaint(This,hdc,prc,plres))
#define INameSpaceTreeControlCustomDraw_PostPaint(This,hdc,prc) \
    ((This)->lpVtbl->PostPaint(This,hdc,prc))
#define INameSpaceTreeControlCustomDraw_ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres) \
    ((This)->lpVtbl->ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres))
#define INameSpaceTreeControlCustomDraw_ItemPostPaint(This,hdc,prc,pnstccdItem) \
    ((This)->lpVtbl->ItemPostPaint(This,hdc,prc,pnstccdItem))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * ITrayDeskBand interface
 */
#ifndef __ITrayDeskBand_INTERFACE_DEFINED__
#define __ITrayDeskBand_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITrayDeskBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITrayDeskBandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITrayDeskBand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITrayDeskBand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITrayDeskBand *This);

    /*** ITrayDeskBand methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowDeskBand)(
        ITrayDeskBand *This,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *HideDeskBand)(
        ITrayDeskBand *This,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *IsDeskBandShown)(
        ITrayDeskBand *This,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *DeskBandRegistrationChanged)(
        ITrayDeskBand *This);

    END_INTERFACE
} ITrayDeskBandVtbl;

interface ITrayDeskBand {
    CONST_VTBL ITrayDeskBandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITrayDeskBand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITrayDeskBand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITrayDeskBand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITrayDeskBand methods ***/
#define ITrayDeskBand_ShowDeskBand(This,clsid) \
    ((This)->lpVtbl->ShowDeskBand(This,clsid))
#define ITrayDeskBand_HideDeskBand(This,clsid) \
    ((This)->lpVtbl->HideDeskBand(This,clsid))
#define ITrayDeskBand_IsDeskBandShown(This,clsid) \
    ((This)->lpVtbl->IsDeskBandShown(This,clsid))
#define ITrayDeskBand_DeskBandRegistrationChanged(This) \
    ((This)->lpVtbl->DeskBandRegistrationChanged(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITrayDeskBand_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBandHost interface
 */
#ifndef __IBandHost_INTERFACE_DEFINED__
#define __IBandHost_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBandHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBandHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBandHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBandHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBandHost *This);

    /*** IBandHost methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateBand)(
        IBandHost *This,
        REFCLSID rclsidBand,
        BOOL fAvailable,
        BOOL fVisible,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *SetBandAvailability)(
        IBandHost *This,
        REFCLSID rclsidBand,
        BOOL fAvailable);

    HRESULT (STDMETHODCALLTYPE *DestroyBand)(
        IBandHost *This,
        REFCLSID rclsidBand);

    END_INTERFACE
} IBandHostVtbl;

interface IBandHost {
    CONST_VTBL IBandHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBandHost_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBandHost_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBandHost_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBandHost methods ***/
#define IBandHost_CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv) \
    ((This)->lpVtbl->CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv))
#define IBandHost_SetBandAvailability(This,rclsidBand,fAvailable) \
    ((This)->lpVtbl->SetBandAvailability(This,rclsidBand,fAvailable))
#define IBandHost_DestroyBand(This,rclsidBand) \
    ((This)->lpVtbl->DestroyBand(This,rclsidBand))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBandHost_INTERFACE_DEFINED__ */

#define SID_SBandHost IID_IBandHost

#endif  // NTDDI_VISTA

/*****************************************************************************
 * IComputerInfoChangeNotify interface
 */
#ifndef __IComputerInfoChangeNotify_INTERFACE_DEFINED__
#define __IComputerInfoChangeNotify_INTERFACE_DEFINED__

EXTERN_C const IID IID_IComputerInfoChangeNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IComputerInfoChangeNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IComputerInfoChangeNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IComputerInfoChangeNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IComputerInfoChangeNotify *This);

    /*** IComputerInfoChangeNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *ComputerInfoChanged)(
        IComputerInfoChangeNotify *This);

    END_INTERFACE
} IComputerInfoChangeNotifyVtbl;

interface IComputerInfoChangeNotify {
    CONST_VTBL IComputerInfoChangeNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IComputerInfoChangeNotify_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IComputerInfoChangeNotify_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IComputerInfoChangeNotify_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IComputerInfoChangeNotify methods ***/
#define IComputerInfoChangeNotify_ComputerInfoChanged(This) \
    ((This)->lpVtbl->ComputerInfoChanged(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IComputerInfoChangeNotify_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN7)

#endif // NTDDI_WIN7

/*****************************************************************************
 * IDesktopGadget interface
 */
#ifndef __IDesktopGadget_INTERFACE_DEFINED__
#define __IDesktopGadget_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDesktopGadget;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDesktopGadgetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDesktopGadget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDesktopGadget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDesktopGadget *This);

    /*** IDesktopGadget methods ***/
    HRESULT (STDMETHODCALLTYPE *RunGadget)(
        IDesktopGadget *This,
        LPCWSTR gadgetPath);

    END_INTERFACE
} IDesktopGadgetVtbl;

interface IDesktopGadget {
    CONST_VTBL IDesktopGadgetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDesktopGadget_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDesktopGadget_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDesktopGadget_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDesktopGadget methods ***/
#define IDesktopGadget_RunGadget(This,gadgetPath) \
    ((This)->lpVtbl->RunGadget(This,gadgetPath))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDesktopGadget_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#endif // NTDDI_WINTHRESHOLD

#ifndef __ShellObjects_LIBRARY_DEFINED__
#define __ShellObjects_LIBRARY_DEFINED__


/*****************************************************************************
 * QueryCancelAutoPlay coclass
 */

EXTERN_C const CLSID CLSID_QueryCancelAutoPlay;

/*****************************************************************************
 * TimeCategorizer coclass
 */

EXTERN_C const CLSID CLSID_TimeCategorizer;

/*****************************************************************************
 * AlphabeticalCategorizer coclass
 */

EXTERN_C const CLSID CLSID_AlphabeticalCategorizer;

/*****************************************************************************
 * MergedCategorizer coclass
 */

EXTERN_C const CLSID CLSID_MergedCategorizer;

/*****************************************************************************
 * ImageProperties coclass
 */

EXTERN_C const CLSID CLSID_ImageProperties;

/*****************************************************************************
 * CDBurn coclass
 */

EXTERN_C const CLSID CLSID_CDBurn;

/*****************************************************************************
 * StartMenuPin coclass
 */

EXTERN_C const CLSID CLSID_StartMenuPin;

/*****************************************************************************
 * WebWizardHost coclass
 */

EXTERN_C const CLSID CLSID_WebWizardHost;

/*****************************************************************************
 * PublishDropTarget coclass
 */

EXTERN_C const CLSID CLSID_PublishDropTarget;

/*****************************************************************************
 * PublishingWizard coclass
 */

EXTERN_C const CLSID CLSID_PublishingWizard;
#define SID_PublishingWizard CLSID_PublishingWizard

/*****************************************************************************
 * InternetPrintOrdering coclass
 */

EXTERN_C const CLSID CLSID_InternetPrintOrdering;

/*****************************************************************************
 * FolderViewHost coclass
 */

EXTERN_C const CLSID CLSID_FolderViewHost;

/*****************************************************************************
 * ExplorerBrowser coclass
 */

EXTERN_C const CLSID CLSID_ExplorerBrowser;

/*****************************************************************************
 * ImageRecompress coclass
 */

EXTERN_C const CLSID CLSID_ImageRecompress;

/*****************************************************************************
 * TrayBandSiteService coclass
 */

EXTERN_C const CLSID CLSID_TrayBandSiteService;

/*****************************************************************************
 * TrayDeskBand coclass
 */

EXTERN_C const CLSID CLSID_TrayDeskBand;

/*****************************************************************************
 * AttachmentServices coclass
 */

EXTERN_C const CLSID CLSID_AttachmentServices;

/*****************************************************************************
 * DocPropShellExtension coclass
 */

EXTERN_C const CLSID CLSID_DocPropShellExtension;

/*****************************************************************************
 * FSCopyHandler coclass
 */

EXTERN_C const CLSID CLSID_FSCopyHandler;

/*****************************************************************************
 * PreviousVersions coclass
 */

EXTERN_C const CLSID CLSID_PreviousVersions;

/*****************************************************************************
 * NamespaceTreeControl coclass
 */

EXTERN_C const CLSID CLSID_NamespaceTreeControl;

/*****************************************************************************
 * IENamespaceTreeControl coclass
 */

EXTERN_C const CLSID CLSID_IENamespaceTreeControl;

/*****************************************************************************
 * ApplicationAssociationRegistrationUI coclass
 */

EXTERN_C const CLSID CLSID_ApplicationAssociationRegistrationUI;

/*****************************************************************************
 * DesktopGadget coclass
 */

EXTERN_C const CLSID CLSID_DesktopGadget;

/*****************************************************************************
 * AccessibilityDockingService coclass
 */

EXTERN_C const CLSID CLSID_AccessibilityDockingService;

/*****************************************************************************
 * ExecuteFolder coclass
 */

EXTERN_C const CLSID CLSID_ExecuteFolder;

/*****************************************************************************
 * VirtualDesktopManager coclass
 */

EXTERN_C const CLSID CLSID_VirtualDesktopManager;

/*****************************************************************************
 * StorageProviderBanners coclass
 */

EXTERN_C const CLSID CLSID_StorageProviderBanners;

#endif /* __ShellObjects_LIBRARY_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef enum UNDOCK_REASON {
    UR_RESOLUTION_CHANGE = 0,
    UR_MONITOR_DISCONNECT = 1
} UNDOCK_REASON;

/*****************************************************************************
 * IAccessibilityDockingServiceCallback interface
 */
#ifndef __IAccessibilityDockingServiceCallback_INTERFACE_DEFINED__
#define __IAccessibilityDockingServiceCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAccessibilityDockingServiceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAccessibilityDockingServiceCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibilityDockingServiceCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibilityDockingServiceCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibilityDockingServiceCallback *This);

    /*** IAccessibilityDockingServiceCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *Undocked)(
        IAccessibilityDockingServiceCallback *This,
        UNDOCK_REASON undockReason);

    END_INTERFACE
} IAccessibilityDockingServiceCallbackVtbl;

interface IAccessibilityDockingServiceCallback {
    CONST_VTBL IAccessibilityDockingServiceCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAccessibilityDockingServiceCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAccessibilityDockingServiceCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAccessibilityDockingServiceCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAccessibilityDockingServiceCallback methods ***/
#define IAccessibilityDockingServiceCallback_Undocked(This,undockReason) \
    ((This)->lpVtbl->Undocked(This,undockReason))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAccessibilityDockingServiceCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAccessibilityDockingService interface
 */
#ifndef __IAccessibilityDockingService_INTERFACE_DEFINED__
#define __IAccessibilityDockingService_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAccessibilityDockingService;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAccessibilityDockingServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibilityDockingService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibilityDockingService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibilityDockingService *This);

    /*** IAccessibilityDockingService methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAvailableSize)(
        IAccessibilityDockingService *This,
        HMONITOR hMonitor,
        UINT *pcxFixed,
        UINT *pcyMax);

    HRESULT (STDMETHODCALLTYPE *DockWindow)(
        IAccessibilityDockingService *This,
        HWND hwnd,
        HMONITOR hMonitor,
        UINT cyRequested,
        IAccessibilityDockingServiceCallback *pCallback);

    HRESULT (STDMETHODCALLTYPE *UndockWindow)(
        IAccessibilityDockingService *This,
        HWND hwnd);

    END_INTERFACE
} IAccessibilityDockingServiceVtbl;

interface IAccessibilityDockingService {
    CONST_VTBL IAccessibilityDockingServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAccessibilityDockingService_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAccessibilityDockingService_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAccessibilityDockingService_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAccessibilityDockingService methods ***/
#define IAccessibilityDockingService_GetAvailableSize(This,hMonitor,pcxFixed,pcyMax) \
    ((This)->lpVtbl->GetAvailableSize(This,hMonitor,pcxFixed,pcyMax))
#define IAccessibilityDockingService_DockWindow(This,hwnd,hMonitor,cyRequested,pCallback) \
    ((This)->lpVtbl->DockWindow(This,hwnd,hMonitor,cyRequested,pCallback))
#define IAccessibilityDockingService_UndockWindow(This,hwnd) \
    ((This)->lpVtbl->UndockWindow(This,hwnd))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAccessibilityDockingService_INTERFACE_DEFINED__ */

#endif // NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)

/*****************************************************************************
 * IStorageProviderBanners interface
 */
#ifndef __IStorageProviderBanners_INTERFACE_DEFINED__
#define __IStorageProviderBanners_INTERFACE_DEFINED__

EXTERN_C const IID IID_IStorageProviderBanners;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStorageProviderBannersVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStorageProviderBanners *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStorageProviderBanners *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStorageProviderBanners *This);

    /*** IStorageProviderBanners methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBanner)(
        IStorageProviderBanners *This,
        LPCWSTR providerIdentity,
        LPCWSTR subscriptionId,
        LPCWSTR contentId);

    HRESULT (STDMETHODCALLTYPE *ClearBanner)(
        IStorageProviderBanners *This,
        LPCWSTR providerIdentity,
        LPCWSTR subscriptionId);

    HRESULT (STDMETHODCALLTYPE *ClearAllBanners)(
        IStorageProviderBanners *This,
        LPCWSTR providerIdentity);

    HRESULT (STDMETHODCALLTYPE *GetBanner)(
        IStorageProviderBanners *This,
        LPCWSTR providerIdentity,
        LPCWSTR subscriptionId,
        LPWSTR *contentId);

    END_INTERFACE
} IStorageProviderBannersVtbl;

interface IStorageProviderBanners {
    CONST_VTBL IStorageProviderBannersVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStorageProviderBanners_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStorageProviderBanners_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStorageProviderBanners_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IStorageProviderBanners methods ***/
#define IStorageProviderBanners_SetBanner(This,providerIdentity,subscriptionId,contentId) \
    ((This)->lpVtbl->SetBanner(This,providerIdentity,subscriptionId,contentId))
#define IStorageProviderBanners_ClearBanner(This,providerIdentity,subscriptionId) \
    ((This)->lpVtbl->ClearBanner(This,providerIdentity,subscriptionId))
#define IStorageProviderBanners_ClearAllBanners(This,providerIdentity) \
    ((This)->lpVtbl->ClearAllBanners(This,providerIdentity))
#define IStorageProviderBanners_GetBanner(This,providerIdentity,subscriptionId,contentId) \
    ((This)->lpVtbl->GetBanner(This,providerIdentity,subscriptionId,contentId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IStorageProviderBanners_INTERFACE_DEFINED__ */

#endif // NTDDI_WIN10_RS4

/*****************************************************************************
 * IStorageProviderCopyHook interface
 */
#ifndef __IStorageProviderCopyHook_INTERFACE_DEFINED__
#define __IStorageProviderCopyHook_INTERFACE_DEFINED__

EXTERN_C const IID IID_IStorageProviderCopyHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IStorageProviderCopyHookVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStorageProviderCopyHook *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStorageProviderCopyHook *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStorageProviderCopyHook *This);

    /*** IStorageProviderCopyHook methods ***/
    HRESULT (STDMETHODCALLTYPE *CopyCallback)(
        IStorageProviderCopyHook *This,
        HWND hwnd,
        UINT operation,
        UINT flags,
        LPCWSTR srcFile,
        DWORD srcAttribs,
        LPCWSTR destFile,
        DWORD destAttribs,
        UINT *result);

    END_INTERFACE
} IStorageProviderCopyHookVtbl;

interface IStorageProviderCopyHook {
    CONST_VTBL IStorageProviderCopyHookVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStorageProviderCopyHook_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IStorageProviderCopyHook_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IStorageProviderCopyHook_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IStorageProviderCopyHook methods ***/
#define IStorageProviderCopyHook_CopyCallback(This,hwnd,operation,flags,srcFile,srcAttribs,destFile,destAttribs,result) \
    ((This)->lpVtbl->CopyCallback(This,hwnd,operation,flags,srcFile,srcAttribs,destFile,destAttribs,result))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IStorageProviderCopyHook_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);
ULONG __RPC_USER HBITMAP_UserSize(ULONG *, ULONG, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserMarshal(ULONG *, unsigned char *, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(ULONG *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(ULONG *, HBITMAP *);
ULONG __RPC_USER HICON_UserSize(ULONG *, ULONG, HICON *);
unsigned char * __RPC_USER HICON_UserMarshal(ULONG *, unsigned char *, HICON *);
unsigned char * __RPC_USER HICON_UserUnmarshal(ULONG *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(ULONG *, HICON *);
ULONG __RPC_USER PCIDLIST_ABSOLUTE_UserSize(ULONG *, ULONG, PCIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserMarshal(ULONG *, unsigned char *, PCIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal(ULONG *, unsigned char *, PCIDLIST_ABSOLUTE *);
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree(ULONG *, PCIDLIST_ABSOLUTE *);
ULONG __RPC_USER PITEMID_CHILD_UserSize(ULONG *, ULONG, PITEMID_CHILD *);
unsigned char * __RPC_USER PITEMID_CHILD_UserMarshal(ULONG *, unsigned char *, PITEMID_CHILD *);
unsigned char * __RPC_USER PITEMID_CHILD_UserUnmarshal(ULONG *, unsigned char *, PITEMID_CHILD *);
void __RPC_USER PITEMID_CHILD_UserFree(ULONG *, PITEMID_CHILD *);
ULONG __RPC_USER HMONITOR_UserSize(ULONG *, ULONG, HMONITOR *);
unsigned char * __RPC_USER HMONITOR_UserMarshal(ULONG *, unsigned char *, HMONITOR *);
unsigned char * __RPC_USER HMONITOR_UserUnmarshal(ULONG *, unsigned char *, HMONITOR *);
void __RPC_USER HMONITOR_UserFree(ULONG *, HMONITOR *);

/* End additional prototypes for all interfaces */

#endif /* __shobjidl_h__ */
