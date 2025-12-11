/* Generated from shobjidl_core.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __shobjidl_core_h__
#define __shobjidl_core_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IContextMenu_FWD_DEFINED__
#define __IContextMenu_FWD_DEFINED__
typedef interface IContextMenu IContextMenu;
#endif /* __IContextMenu_FWD_DEFINED__ */

#ifndef __IContextMenu2_FWD_DEFINED__
#define __IContextMenu2_FWD_DEFINED__
typedef interface IContextMenu2 IContextMenu2;
#endif /* __IContextMenu2_FWD_DEFINED__ */

#ifndef __IContextMenu3_FWD_DEFINED__
#define __IContextMenu3_FWD_DEFINED__
typedef interface IContextMenu3 IContextMenu3;
#endif /* __IContextMenu3_FWD_DEFINED__ */

#ifndef __IExecuteCommand_FWD_DEFINED__
#define __IExecuteCommand_FWD_DEFINED__
typedef interface IExecuteCommand IExecuteCommand;
#endif /* __IExecuteCommand_FWD_DEFINED__ */

#ifndef __IPersistFolder_FWD_DEFINED__
#define __IPersistFolder_FWD_DEFINED__
typedef interface IPersistFolder IPersistFolder;
#endif /* __IPersistFolder_FWD_DEFINED__ */

#ifndef __IRunnableTask_FWD_DEFINED__
#define __IRunnableTask_FWD_DEFINED__
typedef interface IRunnableTask IRunnableTask;
#endif /* __IRunnableTask_FWD_DEFINED__ */

#ifndef __IShellTaskScheduler_FWD_DEFINED__
#define __IShellTaskScheduler_FWD_DEFINED__
typedef interface IShellTaskScheduler IShellTaskScheduler;
#endif /* __IShellTaskScheduler_FWD_DEFINED__ */

#ifndef __IPersistFolder2_FWD_DEFINED__
#define __IPersistFolder2_FWD_DEFINED__
typedef interface IPersistFolder2 IPersistFolder2;
#endif /* __IPersistFolder2_FWD_DEFINED__ */

#ifndef __IPersistFolder3_FWD_DEFINED__
#define __IPersistFolder3_FWD_DEFINED__
typedef interface IPersistFolder3 IPersistFolder3;
#endif /* __IPersistFolder3_FWD_DEFINED__ */

#ifndef __IPersistIDList_FWD_DEFINED__
#define __IPersistIDList_FWD_DEFINED__
typedef interface IPersistIDList IPersistIDList;
#endif /* __IPersistIDList_FWD_DEFINED__ */

#ifndef __IEnumIDList_FWD_DEFINED__
#define __IEnumIDList_FWD_DEFINED__
typedef interface IEnumIDList IEnumIDList;
#endif /* __IEnumIDList_FWD_DEFINED__ */

#ifndef __IEnumFullIDList_FWD_DEFINED__
#define __IEnumFullIDList_FWD_DEFINED__
typedef interface IEnumFullIDList IEnumFullIDList;
#endif /* __IEnumFullIDList_FWD_DEFINED__ */

#ifndef __IFileSyncMergeHandler_FWD_DEFINED__
#define __IFileSyncMergeHandler_FWD_DEFINED__
typedef interface IFileSyncMergeHandler IFileSyncMergeHandler;
#endif /* __IFileSyncMergeHandler_FWD_DEFINED__ */

#ifndef __IObjectWithFolderEnumMode_FWD_DEFINED__
#define __IObjectWithFolderEnumMode_FWD_DEFINED__
typedef interface IObjectWithFolderEnumMode IObjectWithFolderEnumMode;
#endif /* __IObjectWithFolderEnumMode_FWD_DEFINED__ */

#ifndef __IParseAndCreateItem_FWD_DEFINED__
#define __IParseAndCreateItem_FWD_DEFINED__
typedef interface IParseAndCreateItem IParseAndCreateItem;
#endif /* __IParseAndCreateItem_FWD_DEFINED__ */

#ifndef __IShellFolder_FWD_DEFINED__
#define __IShellFolder_FWD_DEFINED__
typedef interface IShellFolder IShellFolder;
#endif /* __IShellFolder_FWD_DEFINED__ */

#ifndef __IEnumExtraSearch_FWD_DEFINED__
#define __IEnumExtraSearch_FWD_DEFINED__
typedef interface IEnumExtraSearch IEnumExtraSearch;
#endif /* __IEnumExtraSearch_FWD_DEFINED__ */

#ifndef __IShellFolder2_FWD_DEFINED__
#define __IShellFolder2_FWD_DEFINED__
typedef interface IShellFolder2 IShellFolder2;
#endif /* __IShellFolder2_FWD_DEFINED__ */

#ifndef __IShellView_FWD_DEFINED__
#define __IShellView_FWD_DEFINED__
typedef interface IShellView IShellView;
#endif /* __IShellView_FWD_DEFINED__ */

#ifndef __IShellView2_FWD_DEFINED__
#define __IShellView2_FWD_DEFINED__
typedef interface IShellView2 IShellView2;
#endif /* __IShellView2_FWD_DEFINED__ */

#ifndef __IFolderView_FWD_DEFINED__
#define __IFolderView_FWD_DEFINED__
typedef interface IFolderView IFolderView;
#endif /* __IFolderView_FWD_DEFINED__ */

#ifndef __IFolderView2_FWD_DEFINED__
#define __IFolderView2_FWD_DEFINED__
typedef interface IFolderView2 IFolderView2;
#endif /* __IFolderView2_FWD_DEFINED__ */

#ifndef __IFolderViewSettings_FWD_DEFINED__
#define __IFolderViewSettings_FWD_DEFINED__
typedef interface IFolderViewSettings IFolderViewSettings;
#endif /* __IFolderViewSettings_FWD_DEFINED__ */

#ifndef __IInitializeNetworkFolder_FWD_DEFINED__
#define __IInitializeNetworkFolder_FWD_DEFINED__
typedef interface IInitializeNetworkFolder IInitializeNetworkFolder;
#endif /* __IInitializeNetworkFolder_FWD_DEFINED__ */

#ifndef __INetworkFolderInternal_FWD_DEFINED__
#define __INetworkFolderInternal_FWD_DEFINED__
typedef interface INetworkFolderInternal INetworkFolderInternal;
#endif /* __INetworkFolderInternal_FWD_DEFINED__ */

#ifndef __IPreviewHandlerVisuals_FWD_DEFINED__
#define __IPreviewHandlerVisuals_FWD_DEFINED__
typedef interface IPreviewHandlerVisuals IPreviewHandlerVisuals;
#endif /* __IPreviewHandlerVisuals_FWD_DEFINED__ */

#ifndef __ICommDlgBrowser_FWD_DEFINED__
#define __ICommDlgBrowser_FWD_DEFINED__
typedef interface ICommDlgBrowser ICommDlgBrowser;
#endif /* __ICommDlgBrowser_FWD_DEFINED__ */

#ifndef __ICommDlgBrowser2_FWD_DEFINED__
#define __ICommDlgBrowser2_FWD_DEFINED__
typedef interface ICommDlgBrowser2 ICommDlgBrowser2;
#endif /* __ICommDlgBrowser2_FWD_DEFINED__ */

#ifndef __IColumnManager_FWD_DEFINED__
#define __IColumnManager_FWD_DEFINED__
typedef interface IColumnManager IColumnManager;
#endif /* __IColumnManager_FWD_DEFINED__ */

#ifndef __IFolderFilterSite_FWD_DEFINED__
#define __IFolderFilterSite_FWD_DEFINED__
typedef interface IFolderFilterSite IFolderFilterSite;
#endif /* __IFolderFilterSite_FWD_DEFINED__ */

#ifndef __IFolderFilter_FWD_DEFINED__
#define __IFolderFilter_FWD_DEFINED__
typedef interface IFolderFilter IFolderFilter;
#endif /* __IFolderFilter_FWD_DEFINED__ */

#ifndef __IInputObjectSite_FWD_DEFINED__
#define __IInputObjectSite_FWD_DEFINED__
typedef interface IInputObjectSite IInputObjectSite;
#endif /* __IInputObjectSite_FWD_DEFINED__ */

#ifndef __IInputObject_FWD_DEFINED__
#define __IInputObject_FWD_DEFINED__
typedef interface IInputObject IInputObject;
#endif /* __IInputObject_FWD_DEFINED__ */

#ifndef __IInputObject2_FWD_DEFINED__
#define __IInputObject2_FWD_DEFINED__
typedef interface IInputObject2 IInputObject2;
#endif /* __IInputObject2_FWD_DEFINED__ */

#ifndef __IShellIcon_FWD_DEFINED__
#define __IShellIcon_FWD_DEFINED__
typedef interface IShellIcon IShellIcon;
#endif /* __IShellIcon_FWD_DEFINED__ */

#ifndef __IShellBrowser_FWD_DEFINED__
#define __IShellBrowser_FWD_DEFINED__
typedef interface IShellBrowser IShellBrowser;
#endif /* __IShellBrowser_FWD_DEFINED__ */

#ifndef __IProfferService_FWD_DEFINED__
#define __IProfferService_FWD_DEFINED__
typedef interface IProfferService IProfferService;
#endif /* __IProfferService_FWD_DEFINED__ */

#ifndef __IGetServiceIds_FWD_DEFINED__
#define __IGetServiceIds_FWD_DEFINED__
typedef interface IGetServiceIds IGetServiceIds;
#endif /* __IGetServiceIds_FWD_DEFINED__ */

#ifndef __IShellItem_FWD_DEFINED__
#define __IShellItem_FWD_DEFINED__
typedef interface IShellItem IShellItem;
#endif /* __IShellItem_FWD_DEFINED__ */

#ifndef __IShellItem2_FWD_DEFINED__
#define __IShellItem2_FWD_DEFINED__
typedef interface IShellItem2 IShellItem2;
#endif /* __IShellItem2_FWD_DEFINED__ */

#ifndef __IShellItemImageFactory_FWD_DEFINED__
#define __IShellItemImageFactory_FWD_DEFINED__
typedef interface IShellItemImageFactory IShellItemImageFactory;
#endif /* __IShellItemImageFactory_FWD_DEFINED__ */

#ifndef __IEnumShellItems_FWD_DEFINED__
#define __IEnumShellItems_FWD_DEFINED__
typedef interface IEnumShellItems IEnumShellItems;
#endif /* __IEnumShellItems_FWD_DEFINED__ */

#ifndef __ITransferAdviseSink_FWD_DEFINED__
#define __ITransferAdviseSink_FWD_DEFINED__
typedef interface ITransferAdviseSink ITransferAdviseSink;
#endif /* __ITransferAdviseSink_FWD_DEFINED__ */

#ifndef __ITransferSource_FWD_DEFINED__
#define __ITransferSource_FWD_DEFINED__
typedef interface ITransferSource ITransferSource;
#endif /* __ITransferSource_FWD_DEFINED__ */

#ifndef __IEnumResources_FWD_DEFINED__
#define __IEnumResources_FWD_DEFINED__
typedef interface IEnumResources IEnumResources;
#endif /* __IEnumResources_FWD_DEFINED__ */

#ifndef __IShellItemResources_FWD_DEFINED__
#define __IShellItemResources_FWD_DEFINED__
typedef interface IShellItemResources IShellItemResources;
#endif /* __IShellItemResources_FWD_DEFINED__ */

#ifndef __ITransferDestination_FWD_DEFINED__
#define __ITransferDestination_FWD_DEFINED__
typedef interface ITransferDestination ITransferDestination;
#endif /* __ITransferDestination_FWD_DEFINED__ */

#ifndef __IFileOperationProgressSink_FWD_DEFINED__
#define __IFileOperationProgressSink_FWD_DEFINED__
typedef interface IFileOperationProgressSink IFileOperationProgressSink;
#endif /* __IFileOperationProgressSink_FWD_DEFINED__ */

#ifndef __IShellItemArray_FWD_DEFINED__
#define __IShellItemArray_FWD_DEFINED__
typedef interface IShellItemArray IShellItemArray;
#endif /* __IShellItemArray_FWD_DEFINED__ */

#ifndef __IInitializeWithItem_FWD_DEFINED__
#define __IInitializeWithItem_FWD_DEFINED__
typedef interface IInitializeWithItem IInitializeWithItem;
#endif /* __IInitializeWithItem_FWD_DEFINED__ */

#ifndef __IObjectWithSelection_FWD_DEFINED__
#define __IObjectWithSelection_FWD_DEFINED__
typedef interface IObjectWithSelection IObjectWithSelection;
#endif /* __IObjectWithSelection_FWD_DEFINED__ */

#ifndef __IObjectWithBackReferences_FWD_DEFINED__
#define __IObjectWithBackReferences_FWD_DEFINED__
typedef interface IObjectWithBackReferences IObjectWithBackReferences;
#endif /* __IObjectWithBackReferences_FWD_DEFINED__ */

#ifndef __IPropertyUI_FWD_DEFINED__
#define __IPropertyUI_FWD_DEFINED__
typedef interface IPropertyUI IPropertyUI;
#endif /* __IPropertyUI_FWD_DEFINED__ */

#ifndef __ICategoryProvider_FWD_DEFINED__
#define __ICategoryProvider_FWD_DEFINED__
typedef interface ICategoryProvider ICategoryProvider;
#endif /* __ICategoryProvider_FWD_DEFINED__ */

#ifndef __ICategorizer_FWD_DEFINED__
#define __ICategorizer_FWD_DEFINED__
typedef interface ICategorizer ICategorizer;
#endif /* __ICategorizer_FWD_DEFINED__ */

#ifndef __IDropTargetHelper_FWD_DEFINED__
#define __IDropTargetHelper_FWD_DEFINED__
typedef interface IDropTargetHelper IDropTargetHelper;
#endif /* __IDropTargetHelper_FWD_DEFINED__ */

#ifndef __IDragSourceHelper_FWD_DEFINED__
#define __IDragSourceHelper_FWD_DEFINED__
typedef interface IDragSourceHelper IDragSourceHelper;
#endif /* __IDragSourceHelper_FWD_DEFINED__ */

#ifndef __IShellLinkA_FWD_DEFINED__
#define __IShellLinkA_FWD_DEFINED__
typedef interface IShellLinkA IShellLinkA;
#endif /* __IShellLinkA_FWD_DEFINED__ */

#ifndef __IShellLinkW_FWD_DEFINED__
#define __IShellLinkW_FWD_DEFINED__
typedef interface IShellLinkW IShellLinkW;
#endif /* __IShellLinkW_FWD_DEFINED__ */

#ifndef __IShellLinkDataList_FWD_DEFINED__
#define __IShellLinkDataList_FWD_DEFINED__
typedef interface IShellLinkDataList IShellLinkDataList;
#endif /* __IShellLinkDataList_FWD_DEFINED__ */

#ifndef __IResolveShellLink_FWD_DEFINED__
#define __IResolveShellLink_FWD_DEFINED__
typedef interface IResolveShellLink IResolveShellLink;
#endif /* __IResolveShellLink_FWD_DEFINED__ */

#ifndef __IActionProgressDialog_FWD_DEFINED__
#define __IActionProgressDialog_FWD_DEFINED__
typedef interface IActionProgressDialog IActionProgressDialog;
#endif /* __IActionProgressDialog_FWD_DEFINED__ */

#ifndef __IActionProgress_FWD_DEFINED__
#define __IActionProgress_FWD_DEFINED__
typedef interface IActionProgress IActionProgress;
#endif /* __IActionProgress_FWD_DEFINED__ */

#ifndef __IShellExtInit_FWD_DEFINED__
#define __IShellExtInit_FWD_DEFINED__
typedef interface IShellExtInit IShellExtInit;
#endif /* __IShellExtInit_FWD_DEFINED__ */

#ifndef __IShellPropSheetExt_FWD_DEFINED__
#define __IShellPropSheetExt_FWD_DEFINED__
typedef interface IShellPropSheetExt IShellPropSheetExt;
#endif /* __IShellPropSheetExt_FWD_DEFINED__ */

#ifndef __IRemoteComputer_FWD_DEFINED__
#define __IRemoteComputer_FWD_DEFINED__
typedef interface IRemoteComputer IRemoteComputer;
#endif /* __IRemoteComputer_FWD_DEFINED__ */

#ifndef __IQueryContinue_FWD_DEFINED__
#define __IQueryContinue_FWD_DEFINED__
typedef interface IQueryContinue IQueryContinue;
#endif /* __IQueryContinue_FWD_DEFINED__ */

#ifndef __IObjectWithCancelEvent_FWD_DEFINED__
#define __IObjectWithCancelEvent_FWD_DEFINED__
typedef interface IObjectWithCancelEvent IObjectWithCancelEvent;
#endif /* __IObjectWithCancelEvent_FWD_DEFINED__ */

#ifndef __IUserNotification_FWD_DEFINED__
#define __IUserNotification_FWD_DEFINED__
typedef interface IUserNotification IUserNotification;
#endif /* __IUserNotification_FWD_DEFINED__ */

#ifndef __IItemNameLimits_FWD_DEFINED__
#define __IItemNameLimits_FWD_DEFINED__
typedef interface IItemNameLimits IItemNameLimits;
#endif /* __IItemNameLimits_FWD_DEFINED__ */

#ifndef __ISearchFolderItemFactory_FWD_DEFINED__
#define __ISearchFolderItemFactory_FWD_DEFINED__
typedef interface ISearchFolderItemFactory ISearchFolderItemFactory;
#endif /* __ISearchFolderItemFactory_FWD_DEFINED__ */

#ifndef __IExtractImage_FWD_DEFINED__
#define __IExtractImage_FWD_DEFINED__
typedef interface IExtractImage IExtractImage;
#endif /* __IExtractImage_FWD_DEFINED__ */

#ifndef __IExtractImage2_FWD_DEFINED__
#define __IExtractImage2_FWD_DEFINED__
typedef interface IExtractImage2 IExtractImage2;
#endif /* __IExtractImage2_FWD_DEFINED__ */

#ifndef __IThumbnailHandlerFactory_FWD_DEFINED__
#define __IThumbnailHandlerFactory_FWD_DEFINED__
typedef interface IThumbnailHandlerFactory IThumbnailHandlerFactory;
#endif /* __IThumbnailHandlerFactory_FWD_DEFINED__ */

#ifndef __IParentAndItem_FWD_DEFINED__
#define __IParentAndItem_FWD_DEFINED__
typedef interface IParentAndItem IParentAndItem;
#endif /* __IParentAndItem_FWD_DEFINED__ */

#ifndef __IDockingWindow_FWD_DEFINED__
#define __IDockingWindow_FWD_DEFINED__
typedef interface IDockingWindow IDockingWindow;
#endif /* __IDockingWindow_FWD_DEFINED__ */

#ifndef __IDeskBand_FWD_DEFINED__
#define __IDeskBand_FWD_DEFINED__
typedef interface IDeskBand IDeskBand;
#endif /* __IDeskBand_FWD_DEFINED__ */

#ifndef __IDeskBandInfo_FWD_DEFINED__
#define __IDeskBandInfo_FWD_DEFINED__
typedef interface IDeskBandInfo IDeskBandInfo;
#endif /* __IDeskBandInfo_FWD_DEFINED__ */

#ifndef __ITaskbarList_FWD_DEFINED__
#define __ITaskbarList_FWD_DEFINED__
typedef interface ITaskbarList ITaskbarList;
#endif /* __ITaskbarList_FWD_DEFINED__ */

#ifndef __ITaskbarList2_FWD_DEFINED__
#define __ITaskbarList2_FWD_DEFINED__
typedef interface ITaskbarList2 ITaskbarList2;
#endif /* __ITaskbarList2_FWD_DEFINED__ */

#ifndef __ITaskbarList3_FWD_DEFINED__
#define __ITaskbarList3_FWD_DEFINED__
typedef interface ITaskbarList3 ITaskbarList3;
#endif /* __ITaskbarList3_FWD_DEFINED__ */

#ifndef __ITaskbarList4_FWD_DEFINED__
#define __ITaskbarList4_FWD_DEFINED__
typedef interface ITaskbarList4 ITaskbarList4;
#endif /* __ITaskbarList4_FWD_DEFINED__ */

#ifndef __IExplorerBrowserEvents_FWD_DEFINED__
#define __IExplorerBrowserEvents_FWD_DEFINED__
typedef interface IExplorerBrowserEvents IExplorerBrowserEvents;
#endif /* __IExplorerBrowserEvents_FWD_DEFINED__ */

#ifndef __IExplorerBrowser_FWD_DEFINED__
#define __IExplorerBrowser_FWD_DEFINED__
typedef interface IExplorerBrowser IExplorerBrowser;
#endif /* __IExplorerBrowser_FWD_DEFINED__ */

#ifndef __IEnumObjects_FWD_DEFINED__
#define __IEnumObjects_FWD_DEFINED__
typedef interface IEnumObjects IEnumObjects;
#endif /* __IEnumObjects_FWD_DEFINED__ */

#ifndef __IOperationsProgressDialog_FWD_DEFINED__
#define __IOperationsProgressDialog_FWD_DEFINED__
typedef interface IOperationsProgressDialog IOperationsProgressDialog;
#endif /* __IOperationsProgressDialog_FWD_DEFINED__ */

#ifndef __IIOCancelInformation_FWD_DEFINED__
#define __IIOCancelInformation_FWD_DEFINED__
typedef interface IIOCancelInformation IIOCancelInformation;
#endif /* __IIOCancelInformation_FWD_DEFINED__ */

#ifndef __IFileOperation_FWD_DEFINED__
#define __IFileOperation_FWD_DEFINED__
typedef interface IFileOperation IFileOperation;
#endif /* __IFileOperation_FWD_DEFINED__ */

#ifndef __IFileOperation2_FWD_DEFINED__
#define __IFileOperation2_FWD_DEFINED__
typedef interface IFileOperation2 IFileOperation2;
#endif /* __IFileOperation2_FWD_DEFINED__ */

#ifndef __IObjectProvider_FWD_DEFINED__
#define __IObjectProvider_FWD_DEFINED__
typedef interface IObjectProvider IObjectProvider;
#endif /* __IObjectProvider_FWD_DEFINED__ */

#ifndef __INamespaceWalkCB_FWD_DEFINED__
#define __INamespaceWalkCB_FWD_DEFINED__
typedef interface INamespaceWalkCB INamespaceWalkCB;
#endif /* __INamespaceWalkCB_FWD_DEFINED__ */

#ifndef __INamespaceWalkCB2_FWD_DEFINED__
#define __INamespaceWalkCB2_FWD_DEFINED__
typedef interface INamespaceWalkCB2 INamespaceWalkCB2;
#endif /* __INamespaceWalkCB2_FWD_DEFINED__ */

#ifndef __INamespaceWalk_FWD_DEFINED__
#define __INamespaceWalk_FWD_DEFINED__
typedef interface INamespaceWalk INamespaceWalk;
#endif /* __INamespaceWalk_FWD_DEFINED__ */

#ifndef __IBandSite_FWD_DEFINED__
#define __IBandSite_FWD_DEFINED__
typedef interface IBandSite IBandSite;
#endif /* __IBandSite_FWD_DEFINED__ */

#ifndef __IModalWindow_FWD_DEFINED__
#define __IModalWindow_FWD_DEFINED__
typedef interface IModalWindow IModalWindow;
#endif /* __IModalWindow_FWD_DEFINED__ */

#ifndef __IContextMenuSite_FWD_DEFINED__
#define __IContextMenuSite_FWD_DEFINED__
typedef interface IContextMenuSite IContextMenuSite;
#endif /* __IContextMenuSite_FWD_DEFINED__ */

#ifndef __IMenuBand_FWD_DEFINED__
#define __IMenuBand_FWD_DEFINED__
typedef interface IMenuBand IMenuBand;
#endif /* __IMenuBand_FWD_DEFINED__ */

#ifndef __IRegTreeItem_FWD_DEFINED__
#define __IRegTreeItem_FWD_DEFINED__
typedef interface IRegTreeItem IRegTreeItem;
#endif /* __IRegTreeItem_FWD_DEFINED__ */

#ifndef __IDeskBar_FWD_DEFINED__
#define __IDeskBar_FWD_DEFINED__
typedef interface IDeskBar IDeskBar;
#endif /* __IDeskBar_FWD_DEFINED__ */

#ifndef __IMenuPopup_FWD_DEFINED__
#define __IMenuPopup_FWD_DEFINED__
typedef interface IMenuPopup IMenuPopup;
#endif /* __IMenuPopup_FWD_DEFINED__ */

#ifndef __IFileIsInUse_FWD_DEFINED__
#define __IFileIsInUse_FWD_DEFINED__
typedef interface IFileIsInUse IFileIsInUse;
#endif /* __IFileIsInUse_FWD_DEFINED__ */

#ifndef __IFileDialogEvents_FWD_DEFINED__
#define __IFileDialogEvents_FWD_DEFINED__
typedef interface IFileDialogEvents IFileDialogEvents;
#endif /* __IFileDialogEvents_FWD_DEFINED__ */

#ifndef __IFileDialog_FWD_DEFINED__
#define __IFileDialog_FWD_DEFINED__
typedef interface IFileDialog IFileDialog;
#endif /* __IFileDialog_FWD_DEFINED__ */

#ifndef __IFileSaveDialog_FWD_DEFINED__
#define __IFileSaveDialog_FWD_DEFINED__
typedef interface IFileSaveDialog IFileSaveDialog;
#endif /* __IFileSaveDialog_FWD_DEFINED__ */

#ifndef __IFileOpenDialog_FWD_DEFINED__
#define __IFileOpenDialog_FWD_DEFINED__
typedef interface IFileOpenDialog IFileOpenDialog;
#endif /* __IFileOpenDialog_FWD_DEFINED__ */

#ifndef __IFileDialogCustomize_FWD_DEFINED__
#define __IFileDialogCustomize_FWD_DEFINED__
typedef interface IFileDialogCustomize IFileDialogCustomize;
#endif /* __IFileDialogCustomize_FWD_DEFINED__ */

#ifndef __IApplicationAssociationRegistration_FWD_DEFINED__
#define __IApplicationAssociationRegistration_FWD_DEFINED__
typedef interface IApplicationAssociationRegistration IApplicationAssociationRegistration;
#endif /* __IApplicationAssociationRegistration_FWD_DEFINED__ */

#ifndef __IDelegateFolder_FWD_DEFINED__
#define __IDelegateFolder_FWD_DEFINED__
typedef interface IDelegateFolder IDelegateFolder;
#endif /* __IDelegateFolder_FWD_DEFINED__ */

#ifndef __IBrowserFrameOptions_FWD_DEFINED__
#define __IBrowserFrameOptions_FWD_DEFINED__
typedef interface IBrowserFrameOptions IBrowserFrameOptions;
#endif /* __IBrowserFrameOptions_FWD_DEFINED__ */

#ifndef __INewWindowManager_FWD_DEFINED__
#define __INewWindowManager_FWD_DEFINED__
typedef interface INewWindowManager INewWindowManager;
#endif /* __INewWindowManager_FWD_DEFINED__ */

#ifndef __IAttachmentExecute_FWD_DEFINED__
#define __IAttachmentExecute_FWD_DEFINED__
typedef interface IAttachmentExecute IAttachmentExecute;
#endif /* __IAttachmentExecute_FWD_DEFINED__ */

#ifndef __IShellMenuCallback_FWD_DEFINED__
#define __IShellMenuCallback_FWD_DEFINED__
typedef interface IShellMenuCallback IShellMenuCallback;
#endif /* __IShellMenuCallback_FWD_DEFINED__ */

#ifndef __IShellMenu_FWD_DEFINED__
#define __IShellMenu_FWD_DEFINED__
typedef interface IShellMenu IShellMenu;
#endif /* __IShellMenu_FWD_DEFINED__ */

#ifndef __IKnownFolder_FWD_DEFINED__
#define __IKnownFolder_FWD_DEFINED__
typedef interface IKnownFolder IKnownFolder;
#endif /* __IKnownFolder_FWD_DEFINED__ */

#ifndef __IKnownFolderManager_FWD_DEFINED__
#define __IKnownFolderManager_FWD_DEFINED__
typedef interface IKnownFolderManager IKnownFolderManager;
#endif /* __IKnownFolderManager_FWD_DEFINED__ */

#ifndef __ISharingConfigurationManager_FWD_DEFINED__
#define __ISharingConfigurationManager_FWD_DEFINED__
typedef interface ISharingConfigurationManager ISharingConfigurationManager;
#endif /* __ISharingConfigurationManager_FWD_DEFINED__ */

#ifndef __IRelatedItem_FWD_DEFINED__
#define __IRelatedItem_FWD_DEFINED__
typedef interface IRelatedItem IRelatedItem;
#endif /* __IRelatedItem_FWD_DEFINED__ */

#ifndef __IIdentityName_FWD_DEFINED__
#define __IIdentityName_FWD_DEFINED__
typedef interface IIdentityName IIdentityName;
#endif /* __IIdentityName_FWD_DEFINED__ */

#ifndef __IDelegateItem_FWD_DEFINED__
#define __IDelegateItem_FWD_DEFINED__
typedef interface IDelegateItem IDelegateItem;
#endif /* __IDelegateItem_FWD_DEFINED__ */

#ifndef __ICurrentItem_FWD_DEFINED__
#define __ICurrentItem_FWD_DEFINED__
typedef interface ICurrentItem ICurrentItem;
#endif /* __ICurrentItem_FWD_DEFINED__ */

#ifndef __ITransferMediumItem_FWD_DEFINED__
#define __ITransferMediumItem_FWD_DEFINED__
typedef interface ITransferMediumItem ITransferMediumItem;
#endif /* __ITransferMediumItem_FWD_DEFINED__ */

#ifndef __IDisplayItem_FWD_DEFINED__
#define __IDisplayItem_FWD_DEFINED__
typedef interface IDisplayItem IDisplayItem;
#endif /* __IDisplayItem_FWD_DEFINED__ */

#ifndef __IViewStateIdentityItem_FWD_DEFINED__
#define __IViewStateIdentityItem_FWD_DEFINED__
typedef interface IViewStateIdentityItem IViewStateIdentityItem;
#endif /* __IViewStateIdentityItem_FWD_DEFINED__ */

#ifndef __IPreviewItem_FWD_DEFINED__
#define __IPreviewItem_FWD_DEFINED__
typedef interface IPreviewItem IPreviewItem;
#endif /* __IPreviewItem_FWD_DEFINED__ */

#ifndef __IDestinationStreamFactory_FWD_DEFINED__
#define __IDestinationStreamFactory_FWD_DEFINED__
typedef interface IDestinationStreamFactory IDestinationStreamFactory;
#endif /* __IDestinationStreamFactory_FWD_DEFINED__ */

#ifndef __ICreateProcessInputs_FWD_DEFINED__
#define __ICreateProcessInputs_FWD_DEFINED__
typedef interface ICreateProcessInputs ICreateProcessInputs;
#endif /* __ICreateProcessInputs_FWD_DEFINED__ */

#ifndef __ICreatingProcess_FWD_DEFINED__
#define __ICreatingProcess_FWD_DEFINED__
typedef interface ICreatingProcess ICreatingProcess;
#endif /* __ICreatingProcess_FWD_DEFINED__ */

#ifndef __ILaunchUIContext_FWD_DEFINED__
#define __ILaunchUIContext_FWD_DEFINED__
typedef interface ILaunchUIContext ILaunchUIContext;
#endif /* __ILaunchUIContext_FWD_DEFINED__ */

#ifndef __ILaunchUIContextProvider_FWD_DEFINED__
#define __ILaunchUIContextProvider_FWD_DEFINED__
typedef interface ILaunchUIContextProvider ILaunchUIContextProvider;
#endif /* __ILaunchUIContextProvider_FWD_DEFINED__ */

#ifndef __INewMenuClient_FWD_DEFINED__
#define __INewMenuClient_FWD_DEFINED__
typedef interface INewMenuClient INewMenuClient;
#endif /* __INewMenuClient_FWD_DEFINED__ */

#ifndef __IInitializeWithBindCtx_FWD_DEFINED__
#define __IInitializeWithBindCtx_FWD_DEFINED__
typedef interface IInitializeWithBindCtx IInitializeWithBindCtx;
#endif /* __IInitializeWithBindCtx_FWD_DEFINED__ */

#ifndef __IShellItemFilter_FWD_DEFINED__
#define __IShellItemFilter_FWD_DEFINED__
typedef interface IShellItemFilter IShellItemFilter;
#endif /* __IShellItemFilter_FWD_DEFINED__ */

#ifndef __INameSpaceTreeControl_FWD_DEFINED__
#define __INameSpaceTreeControl_FWD_DEFINED__
typedef interface INameSpaceTreeControl INameSpaceTreeControl;
#endif /* __INameSpaceTreeControl_FWD_DEFINED__ */

#ifndef __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__
#define __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__
typedef interface INameSpaceTreeControlFolderCapabilities INameSpaceTreeControlFolderCapabilities;
#endif /* __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__ */

#ifndef __IPreviewHandler_FWD_DEFINED__
#define __IPreviewHandler_FWD_DEFINED__
typedef interface IPreviewHandler IPreviewHandler;
#endif /* __IPreviewHandler_FWD_DEFINED__ */

#ifndef __IPreviewHandlerFrame_FWD_DEFINED__
#define __IPreviewHandlerFrame_FWD_DEFINED__
typedef interface IPreviewHandlerFrame IPreviewHandlerFrame;
#endif /* __IPreviewHandlerFrame_FWD_DEFINED__ */

#ifndef __IExplorerPaneVisibility_FWD_DEFINED__
#define __IExplorerPaneVisibility_FWD_DEFINED__
typedef interface IExplorerPaneVisibility IExplorerPaneVisibility;
#endif /* __IExplorerPaneVisibility_FWD_DEFINED__ */

#ifndef __IContextMenuCB_FWD_DEFINED__
#define __IContextMenuCB_FWD_DEFINED__
typedef interface IContextMenuCB IContextMenuCB;
#endif /* __IContextMenuCB_FWD_DEFINED__ */

#ifndef __IDefaultExtractIconInit_FWD_DEFINED__
#define __IDefaultExtractIconInit_FWD_DEFINED__
typedef interface IDefaultExtractIconInit IDefaultExtractIconInit;
#endif /* __IDefaultExtractIconInit_FWD_DEFINED__ */

#ifndef __IExplorerCommand_FWD_DEFINED__
#define __IExplorerCommand_FWD_DEFINED__
typedef interface IExplorerCommand IExplorerCommand;
#endif /* __IExplorerCommand_FWD_DEFINED__ */

#ifndef __IExplorerCommandState_FWD_DEFINED__
#define __IExplorerCommandState_FWD_DEFINED__
typedef interface IExplorerCommandState IExplorerCommandState;
#endif /* __IExplorerCommandState_FWD_DEFINED__ */

#ifndef __IInitializeCommand_FWD_DEFINED__
#define __IInitializeCommand_FWD_DEFINED__
typedef interface IInitializeCommand IInitializeCommand;
#endif /* __IInitializeCommand_FWD_DEFINED__ */

#ifndef __IEnumExplorerCommand_FWD_DEFINED__
#define __IEnumExplorerCommand_FWD_DEFINED__
typedef interface IEnumExplorerCommand IEnumExplorerCommand;
#endif /* __IEnumExplorerCommand_FWD_DEFINED__ */

#ifndef __IExplorerCommandProvider_FWD_DEFINED__
#define __IExplorerCommandProvider_FWD_DEFINED__
typedef interface IExplorerCommandProvider IExplorerCommandProvider;
#endif /* __IExplorerCommandProvider_FWD_DEFINED__ */

#ifndef __IOpenControlPanel_FWD_DEFINED__
#define __IOpenControlPanel_FWD_DEFINED__
typedef interface IOpenControlPanel IOpenControlPanel;
#endif /* __IOpenControlPanel_FWD_DEFINED__ */

#ifndef __IFileSystemBindData_FWD_DEFINED__
#define __IFileSystemBindData_FWD_DEFINED__
typedef interface IFileSystemBindData IFileSystemBindData;
#endif /* __IFileSystemBindData_FWD_DEFINED__ */

#ifndef __IFileSystemBindData2_FWD_DEFINED__
#define __IFileSystemBindData2_FWD_DEFINED__
typedef interface IFileSystemBindData2 IFileSystemBindData2;
#endif /* __IFileSystemBindData2_FWD_DEFINED__ */

#ifndef __ICustomDestinationList_FWD_DEFINED__
#define __ICustomDestinationList_FWD_DEFINED__
typedef interface ICustomDestinationList ICustomDestinationList;
#endif /* __ICustomDestinationList_FWD_DEFINED__ */

#ifndef __IApplicationDestinations_FWD_DEFINED__
#define __IApplicationDestinations_FWD_DEFINED__
typedef interface IApplicationDestinations IApplicationDestinations;
#endif /* __IApplicationDestinations_FWD_DEFINED__ */

#ifndef __IApplicationDocumentLists_FWD_DEFINED__
#define __IApplicationDocumentLists_FWD_DEFINED__
typedef interface IApplicationDocumentLists IApplicationDocumentLists;
#endif /* __IApplicationDocumentLists_FWD_DEFINED__ */

#ifndef __IObjectWithAppUserModelID_FWD_DEFINED__
#define __IObjectWithAppUserModelID_FWD_DEFINED__
typedef interface IObjectWithAppUserModelID IObjectWithAppUserModelID;
#endif /* __IObjectWithAppUserModelID_FWD_DEFINED__ */

#ifndef __IObjectWithProgID_FWD_DEFINED__
#define __IObjectWithProgID_FWD_DEFINED__
typedef interface IObjectWithProgID IObjectWithProgID;
#endif /* __IObjectWithProgID_FWD_DEFINED__ */

#ifndef __IUpdateIDList_FWD_DEFINED__
#define __IUpdateIDList_FWD_DEFINED__
typedef interface IUpdateIDList IUpdateIDList;
#endif /* __IUpdateIDList_FWD_DEFINED__ */

#ifndef __IDesktopWallpaper_FWD_DEFINED__
#define __IDesktopWallpaper_FWD_DEFINED__
typedef interface IDesktopWallpaper IDesktopWallpaper;
#endif /* __IDesktopWallpaper_FWD_DEFINED__ */

#ifndef __IHomeGroup_FWD_DEFINED__
#define __IHomeGroup_FWD_DEFINED__
typedef interface IHomeGroup IHomeGroup;
#endif /* __IHomeGroup_FWD_DEFINED__ */

#ifndef __IInitializeWithPropertyStore_FWD_DEFINED__
#define __IInitializeWithPropertyStore_FWD_DEFINED__
typedef interface IInitializeWithPropertyStore IInitializeWithPropertyStore;
#endif /* __IInitializeWithPropertyStore_FWD_DEFINED__ */

#ifndef __IOpenSearchSource_FWD_DEFINED__
#define __IOpenSearchSource_FWD_DEFINED__
typedef interface IOpenSearchSource IOpenSearchSource;
#endif /* __IOpenSearchSource_FWD_DEFINED__ */

#ifndef __IShellLibrary_FWD_DEFINED__
#define __IShellLibrary_FWD_DEFINED__
typedef interface IShellLibrary IShellLibrary;
#endif /* __IShellLibrary_FWD_DEFINED__ */

#ifndef __IDefaultFolderMenuInitialize_FWD_DEFINED__
#define __IDefaultFolderMenuInitialize_FWD_DEFINED__
typedef interface IDefaultFolderMenuInitialize IDefaultFolderMenuInitialize;
#endif /* __IDefaultFolderMenuInitialize_FWD_DEFINED__ */

#ifndef __IApplicationActivationManager_FWD_DEFINED__
#define __IApplicationActivationManager_FWD_DEFINED__
typedef interface IApplicationActivationManager IApplicationActivationManager;
#endif /* __IApplicationActivationManager_FWD_DEFINED__ */

#ifndef __IVirtualDesktopManager_FWD_DEFINED__
#define __IVirtualDesktopManager_FWD_DEFINED__
typedef interface IVirtualDesktopManager IVirtualDesktopManager;
#endif /* __IVirtualDesktopManager_FWD_DEFINED__ */

#ifndef __DesktopWallpaper_FWD_DEFINED__
#define __DesktopWallpaper_FWD_DEFINED__
typedef struct DesktopWallpaper DesktopWallpaper;
#endif /* __DesktopWallpaper_FWD_DEFINED__ */

#ifndef __ShellDesktop_FWD_DEFINED__
#define __ShellDesktop_FWD_DEFINED__
typedef struct ShellDesktop ShellDesktop;
#endif /* __ShellDesktop_FWD_DEFINED__ */

#ifndef __ShellFSFolder_FWD_DEFINED__
#define __ShellFSFolder_FWD_DEFINED__
typedef struct ShellFSFolder ShellFSFolder;
#endif /* __ShellFSFolder_FWD_DEFINED__ */

#ifndef __NetworkPlaces_FWD_DEFINED__
#define __NetworkPlaces_FWD_DEFINED__
typedef struct NetworkPlaces NetworkPlaces;
#endif /* __NetworkPlaces_FWD_DEFINED__ */

#ifndef __ShellLink_FWD_DEFINED__
#define __ShellLink_FWD_DEFINED__
typedef struct ShellLink ShellLink;
#endif /* __ShellLink_FWD_DEFINED__ */

#ifndef __DriveSizeCategorizer_FWD_DEFINED__
#define __DriveSizeCategorizer_FWD_DEFINED__
typedef struct DriveSizeCategorizer DriveSizeCategorizer;
#endif /* __DriveSizeCategorizer_FWD_DEFINED__ */

#ifndef __DriveTypeCategorizer_FWD_DEFINED__
#define __DriveTypeCategorizer_FWD_DEFINED__
typedef struct DriveTypeCategorizer DriveTypeCategorizer;
#endif /* __DriveTypeCategorizer_FWD_DEFINED__ */

#ifndef __FreeSpaceCategorizer_FWD_DEFINED__
#define __FreeSpaceCategorizer_FWD_DEFINED__
typedef struct FreeSpaceCategorizer FreeSpaceCategorizer;
#endif /* __FreeSpaceCategorizer_FWD_DEFINED__ */

#ifndef __SizeCategorizer_FWD_DEFINED__
#define __SizeCategorizer_FWD_DEFINED__
typedef struct SizeCategorizer SizeCategorizer;
#endif /* __SizeCategorizer_FWD_DEFINED__ */

#ifndef __PropertiesUI_FWD_DEFINED__
#define __PropertiesUI_FWD_DEFINED__
typedef struct PropertiesUI PropertiesUI;
#endif /* __PropertiesUI_FWD_DEFINED__ */

#ifndef __UserNotification_FWD_DEFINED__
#define __UserNotification_FWD_DEFINED__
typedef struct UserNotification UserNotification;
#endif /* __UserNotification_FWD_DEFINED__ */

#ifndef __TaskbarList_FWD_DEFINED__
#define __TaskbarList_FWD_DEFINED__
typedef struct TaskbarList TaskbarList;
#endif /* __TaskbarList_FWD_DEFINED__ */

#ifndef __ShellItem_FWD_DEFINED__
#define __ShellItem_FWD_DEFINED__
typedef struct ShellItem ShellItem;
#endif /* __ShellItem_FWD_DEFINED__ */

#ifndef __NamespaceWalker_FWD_DEFINED__
#define __NamespaceWalker_FWD_DEFINED__
typedef struct NamespaceWalker NamespaceWalker;
#endif /* __NamespaceWalker_FWD_DEFINED__ */

#ifndef __FileOperation_FWD_DEFINED__
#define __FileOperation_FWD_DEFINED__
typedef struct FileOperation FileOperation;
#endif /* __FileOperation_FWD_DEFINED__ */

#ifndef __FileOpenDialog_FWD_DEFINED__
#define __FileOpenDialog_FWD_DEFINED__
typedef struct FileOpenDialog FileOpenDialog;
#endif /* __FileOpenDialog_FWD_DEFINED__ */

#ifndef __FileSaveDialog_FWD_DEFINED__
#define __FileSaveDialog_FWD_DEFINED__
typedef struct FileSaveDialog FileSaveDialog;
#endif /* __FileSaveDialog_FWD_DEFINED__ */

#ifndef __KnownFolderManager_FWD_DEFINED__
#define __KnownFolderManager_FWD_DEFINED__
typedef struct KnownFolderManager KnownFolderManager;
#endif /* __KnownFolderManager_FWD_DEFINED__ */

#ifndef __SharingConfigurationManager_FWD_DEFINED__
#define __SharingConfigurationManager_FWD_DEFINED__
typedef struct SharingConfigurationManager SharingConfigurationManager;
#endif /* __SharingConfigurationManager_FWD_DEFINED__ */

#ifndef __NetworkConnections_FWD_DEFINED__
#define __NetworkConnections_FWD_DEFINED__
typedef struct NetworkConnections NetworkConnections;
#endif /* __NetworkConnections_FWD_DEFINED__ */

#ifndef __ScheduledTasks_FWD_DEFINED__
#define __ScheduledTasks_FWD_DEFINED__
typedef struct ScheduledTasks ScheduledTasks;
#endif /* __ScheduledTasks_FWD_DEFINED__ */

#ifndef __ApplicationAssociationRegistration_FWD_DEFINED__
#define __ApplicationAssociationRegistration_FWD_DEFINED__
typedef struct ApplicationAssociationRegistration ApplicationAssociationRegistration;
#endif /* __ApplicationAssociationRegistration_FWD_DEFINED__ */

#ifndef __SearchFolderItemFactory_FWD_DEFINED__
#define __SearchFolderItemFactory_FWD_DEFINED__
typedef struct SearchFolderItemFactory SearchFolderItemFactory;
#endif /* __SearchFolderItemFactory_FWD_DEFINED__ */

#ifndef __OpenControlPanel_FWD_DEFINED__
#define __OpenControlPanel_FWD_DEFINED__
typedef struct OpenControlPanel OpenControlPanel;
#endif /* __OpenControlPanel_FWD_DEFINED__ */

#ifndef __MailRecipient_FWD_DEFINED__
#define __MailRecipient_FWD_DEFINED__
typedef struct MailRecipient MailRecipient;
#endif /* __MailRecipient_FWD_DEFINED__ */

#ifndef __NetworkExplorerFolder_FWD_DEFINED__
#define __NetworkExplorerFolder_FWD_DEFINED__
typedef struct NetworkExplorerFolder NetworkExplorerFolder;
#endif /* __NetworkExplorerFolder_FWD_DEFINED__ */

#ifndef __DestinationList_FWD_DEFINED__
#define __DestinationList_FWD_DEFINED__
typedef struct DestinationList DestinationList;
#endif /* __DestinationList_FWD_DEFINED__ */

#ifndef __ApplicationDestinations_FWD_DEFINED__
#define __ApplicationDestinations_FWD_DEFINED__
typedef struct ApplicationDestinations ApplicationDestinations;
#endif /* __ApplicationDestinations_FWD_DEFINED__ */

#ifndef __ApplicationDocumentLists_FWD_DEFINED__
#define __ApplicationDocumentLists_FWD_DEFINED__
typedef struct ApplicationDocumentLists ApplicationDocumentLists;
#endif /* __ApplicationDocumentLists_FWD_DEFINED__ */

#ifndef __HomeGroup_FWD_DEFINED__
#define __HomeGroup_FWD_DEFINED__
typedef struct HomeGroup HomeGroup;
#endif /* __HomeGroup_FWD_DEFINED__ */

#ifndef __ShellLibrary_FWD_DEFINED__
#define __ShellLibrary_FWD_DEFINED__
typedef struct ShellLibrary ShellLibrary;
#endif /* __ShellLibrary_FWD_DEFINED__ */

#ifndef __AppStartupLink_FWD_DEFINED__
#define __AppStartupLink_FWD_DEFINED__
typedef struct AppStartupLink AppStartupLink;
#endif /* __AppStartupLink_FWD_DEFINED__ */

#ifndef __EnumerableObjectCollection_FWD_DEFINED__
#define __EnumerableObjectCollection_FWD_DEFINED__
typedef struct EnumerableObjectCollection EnumerableObjectCollection;
#endif /* __EnumerableObjectCollection_FWD_DEFINED__ */

#ifndef __FrameworkInputPane_FWD_DEFINED__
#define __FrameworkInputPane_FWD_DEFINED__
typedef struct FrameworkInputPane FrameworkInputPane;
#endif /* __FrameworkInputPane_FWD_DEFINED__ */

#ifndef __DefFolderMenu_FWD_DEFINED__
#define __DefFolderMenu_FWD_DEFINED__
typedef struct DefFolderMenu DefFolderMenu;
#endif /* __DefFolderMenu_FWD_DEFINED__ */

#ifndef __AppVisibility_FWD_DEFINED__
#define __AppVisibility_FWD_DEFINED__
typedef struct AppVisibility AppVisibility;
#endif /* __AppVisibility_FWD_DEFINED__ */

#ifndef __AppShellVerbHandler_FWD_DEFINED__
#define __AppShellVerbHandler_FWD_DEFINED__
typedef struct AppShellVerbHandler AppShellVerbHandler;
#endif /* __AppShellVerbHandler_FWD_DEFINED__ */

#ifndef __ExecuteUnknown_FWD_DEFINED__
#define __ExecuteUnknown_FWD_DEFINED__
typedef struct ExecuteUnknown ExecuteUnknown;
#endif /* __ExecuteUnknown_FWD_DEFINED__ */

#ifndef __PackageDebugSettings_FWD_DEFINED__
#define __PackageDebugSettings_FWD_DEFINED__
typedef struct PackageDebugSettings PackageDebugSettings;
#endif /* __PackageDebugSettings_FWD_DEFINED__ */

#ifndef __SuspensionDependencyManager_FWD_DEFINED__
#define __SuspensionDependencyManager_FWD_DEFINED__
typedef struct SuspensionDependencyManager SuspensionDependencyManager;
#endif /* __SuspensionDependencyManager_FWD_DEFINED__ */

#ifndef __ApplicationActivationManager_FWD_DEFINED__
#define __ApplicationActivationManager_FWD_DEFINED__
typedef struct ApplicationActivationManager ApplicationActivationManager;
#endif /* __ApplicationActivationManager_FWD_DEFINED__ */

#ifndef __ApplicationDesignModeSettings_FWD_DEFINED__
#define __ApplicationDesignModeSettings_FWD_DEFINED__
typedef struct ApplicationDesignModeSettings ApplicationDesignModeSettings;
#endif /* __ApplicationDesignModeSettings_FWD_DEFINED__ */

#ifndef __IAssocHandlerInvoker_FWD_DEFINED__
#define __IAssocHandlerInvoker_FWD_DEFINED__
typedef interface IAssocHandlerInvoker IAssocHandlerInvoker;
#endif /* __IAssocHandlerInvoker_FWD_DEFINED__ */

#ifndef __IAssocHandler_FWD_DEFINED__
#define __IAssocHandler_FWD_DEFINED__
typedef interface IAssocHandler IAssocHandler;
#endif /* __IAssocHandler_FWD_DEFINED__ */

#ifndef __IEnumAssocHandlers_FWD_DEFINED__
#define __IEnumAssocHandlers_FWD_DEFINED__
typedef interface IEnumAssocHandlers IEnumAssocHandlers;
#endif /* __IEnumAssocHandlers_FWD_DEFINED__ */

#ifndef __IDataObjectProvider_FWD_DEFINED__
#define __IDataObjectProvider_FWD_DEFINED__
typedef interface IDataObjectProvider IDataObjectProvider;
#endif /* __IDataObjectProvider_FWD_DEFINED__ */

#ifndef __IDataTransferManagerInterop_FWD_DEFINED__
#define __IDataTransferManagerInterop_FWD_DEFINED__
typedef interface IDataTransferManagerInterop IDataTransferManagerInterop;
#endif /* __IDataTransferManagerInterop_FWD_DEFINED__ */

#ifndef __IFrameworkInputPaneHandler_FWD_DEFINED__
#define __IFrameworkInputPaneHandler_FWD_DEFINED__
typedef interface IFrameworkInputPaneHandler IFrameworkInputPaneHandler;
#endif /* __IFrameworkInputPaneHandler_FWD_DEFINED__ */

#ifndef __IFrameworkInputPane_FWD_DEFINED__
#define __IFrameworkInputPane_FWD_DEFINED__
typedef interface IFrameworkInputPane IFrameworkInputPane;
#endif /* __IFrameworkInputPane_FWD_DEFINED__ */

#ifndef __IAppVisibilityEvents_FWD_DEFINED__
#define __IAppVisibilityEvents_FWD_DEFINED__
typedef interface IAppVisibilityEvents IAppVisibilityEvents;
#endif /* __IAppVisibilityEvents_FWD_DEFINED__ */

#ifndef __IAppVisibility_FWD_DEFINED__
#define __IAppVisibility_FWD_DEFINED__
typedef interface IAppVisibility IAppVisibility;
#endif /* __IAppVisibility_FWD_DEFINED__ */

#ifndef __IPackageExecutionStateChangeNotification_FWD_DEFINED__
#define __IPackageExecutionStateChangeNotification_FWD_DEFINED__
typedef interface IPackageExecutionStateChangeNotification IPackageExecutionStateChangeNotification;
#endif /* __IPackageExecutionStateChangeNotification_FWD_DEFINED__ */

#ifndef __IPackageDebugSettings_FWD_DEFINED__
#define __IPackageDebugSettings_FWD_DEFINED__
typedef interface IPackageDebugSettings IPackageDebugSettings;
#endif /* __IPackageDebugSettings_FWD_DEFINED__ */

#ifndef __IPackageDebugSettings2_FWD_DEFINED__
#define __IPackageDebugSettings2_FWD_DEFINED__
typedef interface IPackageDebugSettings2 IPackageDebugSettings2;
#endif /* __IPackageDebugSettings2_FWD_DEFINED__ */

#ifndef __ISuspensionDependencyManager_FWD_DEFINED__
#define __ISuspensionDependencyManager_FWD_DEFINED__
typedef interface ISuspensionDependencyManager ISuspensionDependencyManager;
#endif /* __ISuspensionDependencyManager_FWD_DEFINED__ */

#ifndef __IExecuteCommandApplicationHostEnvironment_FWD_DEFINED__
#define __IExecuteCommandApplicationHostEnvironment_FWD_DEFINED__
typedef interface IExecuteCommandApplicationHostEnvironment IExecuteCommandApplicationHostEnvironment;
#endif /* __IExecuteCommandApplicationHostEnvironment_FWD_DEFINED__ */

#ifndef __IExecuteCommandHost_FWD_DEFINED__
#define __IExecuteCommandHost_FWD_DEFINED__
typedef interface IExecuteCommandHost IExecuteCommandHost;
#endif /* __IExecuteCommandHost_FWD_DEFINED__ */

#ifndef __IApplicationDesignModeSettings_FWD_DEFINED__
#define __IApplicationDesignModeSettings_FWD_DEFINED__
typedef interface IApplicationDesignModeSettings IApplicationDesignModeSettings;
#endif /* __IApplicationDesignModeSettings_FWD_DEFINED__ */

#ifndef __IApplicationDesignModeSettings2_FWD_DEFINED__
#define __IApplicationDesignModeSettings2_FWD_DEFINED__
typedef interface IApplicationDesignModeSettings2 IApplicationDesignModeSettings2;
#endif /* __IApplicationDesignModeSettings2_FWD_DEFINED__ */

#ifndef __ILaunchTargetMonitor_FWD_DEFINED__
#define __ILaunchTargetMonitor_FWD_DEFINED__
typedef interface ILaunchTargetMonitor ILaunchTargetMonitor;
#endif /* __ILaunchTargetMonitor_FWD_DEFINED__ */

#ifndef __ILaunchSourceViewSizePreference_FWD_DEFINED__
#define __ILaunchSourceViewSizePreference_FWD_DEFINED__
typedef interface ILaunchSourceViewSizePreference ILaunchSourceViewSizePreference;
#endif /* __ILaunchSourceViewSizePreference_FWD_DEFINED__ */

#ifndef __ILaunchTargetViewSizePreference_FWD_DEFINED__
#define __ILaunchTargetViewSizePreference_FWD_DEFINED__
typedef interface ILaunchTargetViewSizePreference ILaunchTargetViewSizePreference;
#endif /* __ILaunchTargetViewSizePreference_FWD_DEFINED__ */

#ifndef __ILaunchSourceAppUserModelId_FWD_DEFINED__
#define __ILaunchSourceAppUserModelId_FWD_DEFINED__
typedef interface ILaunchSourceAppUserModelId ILaunchSourceAppUserModelId;
#endif /* __ILaunchSourceAppUserModelId_FWD_DEFINED__ */

#ifndef __IInitializeWithWindow_FWD_DEFINED__
#define __IInitializeWithWindow_FWD_DEFINED__
typedef interface IInitializeWithWindow IInitializeWithWindow;
#endif /* __IInitializeWithWindow_FWD_DEFINED__ */

#ifndef __IHandlerInfo_FWD_DEFINED__
#define __IHandlerInfo_FWD_DEFINED__
typedef interface IHandlerInfo IHandlerInfo;
#endif /* __IHandlerInfo_FWD_DEFINED__ */

#ifndef __IHandlerInfo2_FWD_DEFINED__
#define __IHandlerInfo2_FWD_DEFINED__
typedef interface IHandlerInfo2 IHandlerInfo2;
#endif /* __IHandlerInfo2_FWD_DEFINED__ */

#ifndef __IHandlerActivationHost_FWD_DEFINED__
#define __IHandlerActivationHost_FWD_DEFINED__
typedef interface IHandlerActivationHost IHandlerActivationHost;
#endif /* __IHandlerActivationHost_FWD_DEFINED__ */

#ifndef __IAppActivationUIInfo_FWD_DEFINED__
#define __IAppActivationUIInfo_FWD_DEFINED__
typedef interface IAppActivationUIInfo IAppActivationUIInfo;
#endif /* __IAppActivationUIInfo_FWD_DEFINED__ */

#ifndef __IContactManagerInterop_FWD_DEFINED__
#define __IContactManagerInterop_FWD_DEFINED__
typedef interface IContactManagerInterop IContactManagerInterop;
#endif /* __IContactManagerInterop_FWD_DEFINED__ */

#ifndef __IShellIconOverlayIdentifier_FWD_DEFINED__
#define __IShellIconOverlayIdentifier_FWD_DEFINED__
typedef interface IShellIconOverlayIdentifier IShellIconOverlayIdentifier;
#endif /* __IShellIconOverlayIdentifier_FWD_DEFINED__ */

#ifndef __IBannerNotificationHandler_FWD_DEFINED__
#define __IBannerNotificationHandler_FWD_DEFINED__
typedef interface IBannerNotificationHandler IBannerNotificationHandler;
#endif /* __IBannerNotificationHandler_FWD_DEFINED__ */

#ifndef __ISortColumnArray_FWD_DEFINED__
#define __ISortColumnArray_FWD_DEFINED__
typedef interface ISortColumnArray ISortColumnArray;
#endif /* __ISortColumnArray_FWD_DEFINED__ */

#ifndef __IPropertyKeyStore_FWD_DEFINED__
#define __IPropertyKeyStore_FWD_DEFINED__
typedef interface IPropertyKeyStore IPropertyKeyStore;
#endif /* __IPropertyKeyStore_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"
#include "shtypes.h"
#include "servprov.h"
#include "comcat.h"
#include "propsys.h"
#include "ObjectArray.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <sherrors.h>

#ifndef SHSTDAPI
#define SHSTDAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif // SHSTDAPI

//
// IContextMenu interface
//
// [OverView]
//
//  The shell uses the IContextMenu interface in following three cases.
//
// case-1: The shell is loading context menu extensions.
//
//   When the user clicks the right mouse button on an item within the shell's
//  name space (i.g., file, directory, server, work-group, etc.), it creates
//  the default context menu for its type, then loads context menu extensions
//  that are registered for that type (and its base type) so that they can
//  add extra menu items. Those context menu extensions are registered at
//  HKCR\{ProgID}\shellex\ContextMenuHandlers.
//
// case-2: The shell is retrieving a context menu of sub-folders in extended
//   name-space.
//
//   When the explorer's name space is extended by name space extensions,
//  the shell calls their IShellFolder::GetUIObjectOf to get the IContextMenu
//  objects when it creates context menus for folders under those extended
//  name spaces.
//
// case-3: The shell is loading non-default drag and drop handler for directories.
//
//   When the user performed a non-default drag and drop onto one of file
//  system folders (i.e., directories), it loads shell extensions that are
//  registered at HKCR\{ProgID}\DragDropHandlers.
//
//
// [Member functions]
//
//
// IContextMenu::QueryContextMenu
//
//   This member function may insert one or more menuitems to the specified
//  menu (hmenu) at the specified location (indexMenu which is never be -1).
//  The IDs of those menuitem must be in the specified range (idCmdFirst and
//  idCmdLast). It returns the maximum menuitem ID offset (ushort) in the
//  'code' field (low word) of the scode.
//
//   The uFlags specify the context. It may have one or more of following
//  flags.
//
//  CMF_DEFAULTONLY: This flag is passed if the user is invoking the default
//   action (typically by double-clicking, case 1 and 2 only). Context menu
//   extensions (case 1) should not add any menu items, and returns S_OK.
//
//  CMF_VERBSONLY: The explorer passes this flag if it is constructing
//   a context menu for a short-cut object (case 1 and case 2 only). If this
//   flag is passed, it should not add any menu-items that is not appropriate
//   from a short-cut.
//    A good example is the Delete menuitem, which confuses the user
//   because it is not clear whether it deletes the link source item or the
//   link itself.
//
//  CMF_EXPLORER: The explorer passes this flag if it has the left-side pane
//   (case 1 and 2 only). Context menu extensions should ignore this flag.
//
//   High word (16-bit) are reserved for context specific communications
//  and the rest of flags (13-bit) are reserved by the system.
//
//
// IContextMenu::InvokeCommand
//
//   This member is called when the user has selected one of menuitems that
//  are inserted by previous QueryContextMenu member. In this case, the
//  LOWORD(lpici->lpVerb) contains the menuitem ID offset (menuitem ID -
//  idCmdFirst).
//
//   This member function may also be called programmatically. In such a case,
//  lpici->lpVerb specifies the canonical name of the command to be invoked,
//  which is typically retrieved by GetCommandString member previously.
//
//  Parameters in lpci:
//    cbSize -- Specifies the size of this structure (sizeof(*lpci))
//    hwnd   -- Specifies the owner window for any message/dialog box.
//    fMask  -- Specifies whether or not dwHotkey/hIcon paramter is valid.
//    lpVerb -- Specifies the command to be invoked.
//    lpParameters -- Parameters (optional)
//    lpDirectory  -- Working directory (optional)
//    nShow -- Specifies the flag to be passed to ShowWindow (SW_*).
//    dwHotKey -- Hot key to be assigned to the app after invoked (optional).
//    hIcon -- Specifies the icon (optional).
//    hMonitor -- Specifies the default monitor (optional).
//
//
// IContextMenu::GetCommandString
//
//   This member function is called by the explorer either to get the
//  canonical (language independent) command name (uFlags == GCS_VERB) or
//  the help text ((uFlags & GCS_HELPTEXT) != 0) for the specified command.
//  The retrieved canonical string may be passed to its InvokeCommand
//  member function to invoke a command programmatically. The explorer
//  displays the help texts in its status bar; therefore, the length of
//  the help text should be reasonably short (<40 characters).
//
//  Parameters:
//   idCmd -- Specifies menuitem ID offset (from idCmdFirst)
//   uFlags -- Either GCS_VERB or GCS_HELPTEXT
//   pwReserved -- Reserved (must pass NULL when calling, must ignore when called)
//   pszName -- Specifies the string buffer.
//   cchMax -- Specifies the size of the string buffer.
//
// QueryContextMenu uFlags
#define CMF_NORMAL              0x00000000
#define CMF_DEFAULTONLY         0x00000001
#define CMF_VERBSONLY           0x00000002
#define CMF_EXPLORE             0x00000004
#define CMF_NOVERBS             0x00000008
#define CMF_CANRENAME           0x00000010
#define CMF_NODEFAULT           0x00000020
#if (NTDDI_VERSION < NTDDI_VISTA)
#define CMF_INCLUDESTATIC       0x00000040
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMF_ITEMMENU            0x00000080
#endif
#define CMF_EXTENDEDVERBS       0x00000100
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMF_DISABLEDVERBS       0x00000200
#endif
#define CMF_ASYNCVERBSTATE      0x00000400
#define CMF_OPTIMIZEFORINVOKE   0x00000800

#define CMF_SYNCCASCADEMENU     0x00001000
#define CMF_DONOTPICKDEFAULT    0x00002000
#define CMF_RESERVED            0xffff0000
// GetCommandString uFlags
#define GCS_VERBA        0x00000000     // canonical verb
#define GCS_HELPTEXTA    0x00000001     // help text (for status bar)
#define GCS_VALIDATEA    0x00000002     // validate command exists
#define GCS_VERBW        0x00000004     // canonical verb (unicode)
#define GCS_HELPTEXTW    0x00000005     // help text (unicode version)
#define GCS_VALIDATEW    0x00000006     // validate command exists (unicode)
#define GCS_VERBICONW    0x00000014     // icon string (unicode)
#define GCS_UNICODE      0x00000004     // for bit testing - Unicode string
#ifdef UNICODE
#define GCS_VERB        GCS_VERBW
#define GCS_HELPTEXT    GCS_HELPTEXTW
#define GCS_VALIDATE    GCS_VALIDATEW
#else
#define GCS_VERB        GCS_VERBA
#define GCS_HELPTEXT    GCS_HELPTEXTA
#define GCS_VALIDATE    GCS_VALIDATEA
#endif
#define CMDSTR_NEWFOLDERA   "NewFolder"
#define CMDSTR_VIEWLISTA    "ViewList"
#define CMDSTR_VIEWDETAILSA "ViewDetails"
#define CMDSTR_NEWFOLDERW   L"NewFolder"
#define CMDSTR_VIEWLISTW    L"ViewList"
#define CMDSTR_VIEWDETAILSW L"ViewDetails"
#ifdef UNICODE
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERW
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTW
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSW
#else
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERA
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTA
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSA
#endif
#define CMIC_MASK_HOTKEY        SEE_MASK_HOTKEY
#define CMIC_MASK_ICON          SEE_MASK_ICON
#define CMIC_MASK_FLAG_NO_UI    SEE_MASK_FLAG_NO_UI
#define CMIC_MASK_UNICODE       SEE_MASK_UNICODE
#define CMIC_MASK_NO_CONSOLE    SEE_MASK_NO_CONSOLE
#if (NTDDI_VERSION < NTDDI_VISTA)
#define CMIC_MASK_HASLINKNAME   SEE_MASK_HASLINKNAME
#define CMIC_MASK_HASTITLE      SEE_MASK_HASTITLE
#endif  // NTDDI_VISTA
#define CMIC_MASK_FLAG_SEP_VDM  SEE_MASK_FLAG_SEPVDM
#define CMIC_MASK_ASYNCOK       SEE_MASK_ASYNCOK
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMIC_MASK_NOASYNC       SEE_MASK_NOASYNC
#endif
#define CMIC_MASK_SHIFT_DOWN    0x10000000
#define CMIC_MASK_CONTROL_DOWN  0x40000000
#define CMIC_MASK_FLAG_LOG_USAGE SEE_MASK_FLAG_LOG_USAGE
#define CMIC_MASK_NOZONECHECKS  SEE_MASK_NOZONECHECKS
#define CMIC_MASK_PTINVOKE      0x20000000
#include <pshpack8.h>

#if !defined(HMONITOR_DECLARED) && !defined(HMONITOR) && (WINVER < 0x0500)
#define HMONITOR_DECLARED
DECLARE_HANDLE(HMONITOR);
#endif

typedef struct _CMINVOKECOMMANDINFO {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    HANDLE hIcon;
} CMINVOKECOMMANDINFO;

typedef CMINVOKECOMMANDINFO *LPCMINVOKECOMMANDINFO;
typedef const CMINVOKECOMMANDINFO *PCCMINVOKECOMMANDINFO;

typedef struct _CMINVOKECOMMANDINFOEX {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    HANDLE hIcon;
    LPCSTR lpTitle;
    LPCWSTR lpVerbW;
    LPCWSTR lpParametersW;
    LPCWSTR lpDirectoryW;
    LPCWSTR lpTitleW;
    POINT ptInvoke;
} CMINVOKECOMMANDINFOEX;

typedef CMINVOKECOMMANDINFOEX *LPCMINVOKECOMMANDINFOEX;
typedef const CMINVOKECOMMANDINFOEX *PCCMINVOKECOMMANDINFOEX;

typedef struct CMINVOKECOMMANDINFOEX_REMOTE {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerbString;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    LPCSTR lpTitle;
    LPCWSTR lpVerbWString;
    LPCWSTR lpParametersW;
    LPCWSTR lpDirectoryW;
    LPCWSTR lpTitleW;
    POINT ptInvoke;
    UINT lpVerbInt;
    UINT lpVerbWInt;
} CMINVOKECOMMANDINFOEX_REMOTE;

#include <poppack.h>

/*****************************************************************************
 * IContextMenu interface
 */
#ifndef __IContextMenu_INTERFACE_DEFINED__
#define __IContextMenu_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContextMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContextMenuVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContextMenu *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContextMenu *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContextMenu *This);

    /*** IContextMenu methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryContextMenu)(
        IContextMenu *This,
        HMENU hmenu,
        UINT indexMenu,
        UINT idCmdFirst,
        UINT idCmdLast,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *InvokeCommand)(
        IContextMenu *This,
        CMINVOKECOMMANDINFO *pici);

    HRESULT (STDMETHODCALLTYPE *GetCommandString)(
        IContextMenu *This,
        UINT_PTR idCmd,
        UINT uType,
        UINT *pReserved,
        CHAR *pszName,
        UINT cchMax);

    END_INTERFACE
} IContextMenuVtbl;

interface IContextMenu {
    CONST_VTBL IContextMenuVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContextMenu_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContextMenu_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContextMenu_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContextMenu methods ***/
#define IContextMenu_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) \
    ((This)->lpVtbl->QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags))
#define IContextMenu_InvokeCommand(This,pici) \
    ((This)->lpVtbl->InvokeCommand(This,pici))
#define IContextMenu_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) \
    ((This)->lpVtbl->GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContextMenu_INTERFACE_DEFINED__ */

typedef IContextMenu *LPCONTEXTMENU;

/*****************************************************************************
 * IContextMenu2 interface
 */
#ifndef __IContextMenu2_INTERFACE_DEFINED__
#define __IContextMenu2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContextMenu2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContextMenu2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContextMenu2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContextMenu2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContextMenu2 *This);

    /*** IContextMenu methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryContextMenu)(
        IContextMenu2 *This,
        HMENU hmenu,
        UINT indexMenu,
        UINT idCmdFirst,
        UINT idCmdLast,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *InvokeCommand)(
        IContextMenu2 *This,
        CMINVOKECOMMANDINFO *pici);

    HRESULT (STDMETHODCALLTYPE *GetCommandString)(
        IContextMenu2 *This,
        UINT_PTR idCmd,
        UINT uType,
        UINT *pReserved,
        CHAR *pszName,
        UINT cchMax);

    /*** IContextMenu2 methods ***/
    HRESULT (STDMETHODCALLTYPE *HandleMenuMsg)(
        IContextMenu2 *This,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam);

    END_INTERFACE
} IContextMenu2Vtbl;

interface IContextMenu2 {
    CONST_VTBL IContextMenu2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContextMenu2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContextMenu2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContextMenu2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContextMenu methods ***/
#define IContextMenu2_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) \
    ((This)->lpVtbl->QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags))
#define IContextMenu2_InvokeCommand(This,pici) \
    ((This)->lpVtbl->InvokeCommand(This,pici))
#define IContextMenu2_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) \
    ((This)->lpVtbl->GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax))
/*** IContextMenu2 methods ***/
#define IContextMenu2_HandleMenuMsg(This,uMsg,wParam,lParam) \
    ((This)->lpVtbl->HandleMenuMsg(This,uMsg,wParam,lParam))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContextMenu2_INTERFACE_DEFINED__ */

typedef IContextMenu2 *LPCONTEXTMENU2;

/*****************************************************************************
 * IContextMenu3 interface
 */
#ifndef __IContextMenu3_INTERFACE_DEFINED__
#define __IContextMenu3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContextMenu3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContextMenu3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContextMenu3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContextMenu3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContextMenu3 *This);

    /*** IContextMenu methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryContextMenu)(
        IContextMenu3 *This,
        HMENU hmenu,
        UINT indexMenu,
        UINT idCmdFirst,
        UINT idCmdLast,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *InvokeCommand)(
        IContextMenu3 *This,
        CMINVOKECOMMANDINFO *pici);

    HRESULT (STDMETHODCALLTYPE *GetCommandString)(
        IContextMenu3 *This,
        UINT_PTR idCmd,
        UINT uType,
        UINT *pReserved,
        CHAR *pszName,
        UINT cchMax);

    /*** IContextMenu2 methods ***/
    HRESULT (STDMETHODCALLTYPE *HandleMenuMsg)(
        IContextMenu3 *This,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam);

    /*** IContextMenu3 methods ***/
    HRESULT (STDMETHODCALLTYPE *HandleMenuMsg2)(
        IContextMenu3 *This,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam,
        LRESULT *plResult);

    END_INTERFACE
} IContextMenu3Vtbl;

interface IContextMenu3 {
    CONST_VTBL IContextMenu3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContextMenu3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContextMenu3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContextMenu3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContextMenu methods ***/
#define IContextMenu3_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) \
    ((This)->lpVtbl->QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags))
#define IContextMenu3_InvokeCommand(This,pici) \
    ((This)->lpVtbl->InvokeCommand(This,pici))
#define IContextMenu3_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) \
    ((This)->lpVtbl->GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax))
/*** IContextMenu2 methods ***/
#define IContextMenu3_HandleMenuMsg(This,uMsg,wParam,lParam) \
    ((This)->lpVtbl->HandleMenuMsg(This,uMsg,wParam,lParam))
/*** IContextMenu3 methods ***/
#define IContextMenu3_HandleMenuMsg2(This,uMsg,wParam,lParam,plResult) \
    ((This)->lpVtbl->HandleMenuMsg2(This,uMsg,wParam,lParam,plResult))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContextMenu3_INTERFACE_DEFINED__ */

typedef IContextMenu3 *LPCONTEXTMENU3;

/*****************************************************************************
 * IExecuteCommand interface
 */
#ifndef __IExecuteCommand_INTERFACE_DEFINED__
#define __IExecuteCommand_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExecuteCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExecuteCommandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExecuteCommand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExecuteCommand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExecuteCommand *This);

    /*** IExecuteCommand methods ***/
    HRESULT (STDMETHODCALLTYPE *SetKeyState)(
        IExecuteCommand *This,
        DWORD grfKeyState);

    HRESULT (STDMETHODCALLTYPE *SetParameters)(
        IExecuteCommand *This,
        LPCWSTR pszParameters);

    HRESULT (STDMETHODCALLTYPE *SetPosition)(
        IExecuteCommand *This,
        POINT pt);

    HRESULT (STDMETHODCALLTYPE *SetShowWindow)(
        IExecuteCommand *This,
        int nShow);

    HRESULT (STDMETHODCALLTYPE *SetNoShowUI)(
        IExecuteCommand *This,
        BOOL fNoShowUI);

    HRESULT (STDMETHODCALLTYPE *SetDirectory)(
        IExecuteCommand *This,
        LPCWSTR pszDirectory);

    HRESULT (STDMETHODCALLTYPE *Execute)(
        IExecuteCommand *This);

    END_INTERFACE
} IExecuteCommandVtbl;

interface IExecuteCommand {
    CONST_VTBL IExecuteCommandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExecuteCommand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExecuteCommand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExecuteCommand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExecuteCommand methods ***/
#define IExecuteCommand_SetKeyState(This,grfKeyState) \
    ((This)->lpVtbl->SetKeyState(This,grfKeyState))
#define IExecuteCommand_SetParameters(This,pszParameters) \
    ((This)->lpVtbl->SetParameters(This,pszParameters))
#define IExecuteCommand_SetPosition(This,pt) \
    ((This)->lpVtbl->SetPosition(This,pt))
#define IExecuteCommand_SetShowWindow(This,nShow) \
    ((This)->lpVtbl->SetShowWindow(This,nShow))
#define IExecuteCommand_SetNoShowUI(This,fNoShowUI) \
    ((This)->lpVtbl->SetNoShowUI(This,fNoShowUI))
#define IExecuteCommand_SetDirectory(This,pszDirectory) \
    ((This)->lpVtbl->SetDirectory(This,pszDirectory))
#define IExecuteCommand_Execute(This) \
    ((This)->lpVtbl->Execute(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExecuteCommand_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPersistFolder interface
 */
#ifndef __IPersistFolder_INTERFACE_DEFINED__
#define __IPersistFolder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPersistFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistFolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistFolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistFolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistFolder *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistFolder *This,
        CLSID *pClassID);

    /*** IPersistFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IPersistFolder *This,
        PCIDLIST_ABSOLUTE pidl);

    END_INTERFACE
} IPersistFolderVtbl;

interface IPersistFolder {
    CONST_VTBL IPersistFolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistFolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistFolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistFolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistFolder_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistFolder methods ***/
#define IPersistFolder_Initialize(This,pidl) \
    ((This)->lpVtbl->Initialize(This,pidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistFolder_INTERFACE_DEFINED__ */

typedef IPersistFolder *LPPERSISTFOLDER;

#define IRTIR_TASK_NOT_RUNNING   0
#define IRTIR_TASK_RUNNING       1
#define IRTIR_TASK_SUSPENDED     2
#define IRTIR_TASK_PENDING       3
#define IRTIR_TASK_FINISHED      4

/*****************************************************************************
 * IRunnableTask interface
 */
#ifndef __IRunnableTask_INTERFACE_DEFINED__
#define __IRunnableTask_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRunnableTask;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRunnableTaskVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRunnableTask *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRunnableTask *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRunnableTask *This);

    /*** IRunnableTask methods ***/
    HRESULT (STDMETHODCALLTYPE *Run)(
        IRunnableTask *This);

    HRESULT (STDMETHODCALLTYPE *Kill)(
        IRunnableTask *This,
        BOOL bWait);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IRunnableTask *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IRunnableTask *This);

    ULONG (STDMETHODCALLTYPE *IsRunning)(
        IRunnableTask *This);

    END_INTERFACE
} IRunnableTaskVtbl;

interface IRunnableTask {
    CONST_VTBL IRunnableTaskVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRunnableTask_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRunnableTask_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRunnableTask_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRunnableTask methods ***/
#define IRunnableTask_Run(This) \
    ((This)->lpVtbl->Run(This))
#define IRunnableTask_Kill(This,bWait) \
    ((This)->lpVtbl->Kill(This,bWait))
#define IRunnableTask_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IRunnableTask_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IRunnableTask_IsRunning(This) \
    ((This)->lpVtbl->IsRunning(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRunnableTask_INTERFACE_DEFINED__ */

#define TOID_NULL                    GUID_NULL
#define ITSAT_DEFAULT_LPARAM         ((DWORD_PTR)-1)

#define ITSAT_DEFAULT_PRIORITY       0x10000000
#define ITSAT_MAX_PRIORITY           0x7fffffff
#define ITSAT_MIN_PRIORITY           0x00000000

#define ITSSFLAG_COMPLETE_ON_DESTROY 0x0000 // wait for the current task to complete before deleting the scheduler
#define ITSSFLAG_KILL_ON_DESTROY     0x0001 // kill the current task (if there is one) when the task scheduler is deleted
#define ITSSFLAG_FLAGS_MASK          0x0003

#define ITSS_THREAD_DESTROY_DEFAULT_TIMEOUT  (10*1000)       // default milliseconds until a sleeping worker thread is released
#define ITSS_THREAD_TERMINATE_TIMEOUT        (INFINITE)      // set sleeping worker threads to never be released
#define ITSS_THREAD_TIMEOUT_NO_CHANGE        (INFINITE - 1)  // no change to the thread timeout

/*****************************************************************************
 * IShellTaskScheduler interface
 */
#ifndef __IShellTaskScheduler_INTERFACE_DEFINED__
#define __IShellTaskScheduler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellTaskScheduler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellTaskSchedulerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellTaskScheduler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellTaskScheduler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellTaskScheduler *This);

    /*** IShellTaskScheduler methods ***/
    HRESULT (STDMETHODCALLTYPE *AddTask)(
        IShellTaskScheduler *This,
        IRunnableTask *prt,
        REFTASKOWNERID rtoid,
        DWORD_PTR lParam,
        DWORD dwPriority);

    HRESULT (STDMETHODCALLTYPE *RemoveTasks)(
        IShellTaskScheduler *This,
        REFTASKOWNERID rtoid,
        DWORD_PTR lParam,
        BOOL bWaitIfRunning);

    UINT (STDMETHODCALLTYPE *CountTasks)(
        IShellTaskScheduler *This,
        REFTASKOWNERID rtoid);

    HRESULT (STDMETHODCALLTYPE *Status)(
        IShellTaskScheduler *This,
        DWORD dwReleaseStatus,
        DWORD dwThreadTimeout);

    END_INTERFACE
} IShellTaskSchedulerVtbl;

interface IShellTaskScheduler {
    CONST_VTBL IShellTaskSchedulerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellTaskScheduler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellTaskScheduler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellTaskScheduler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellTaskScheduler methods ***/
#define IShellTaskScheduler_AddTask(This,prt,rtoid,lParam,dwPriority) \
    ((This)->lpVtbl->AddTask(This,prt,rtoid,lParam,dwPriority))
#define IShellTaskScheduler_RemoveTasks(This,rtoid,lParam,bWaitIfRunning) \
    ((This)->lpVtbl->RemoveTasks(This,rtoid,lParam,bWaitIfRunning))
#define IShellTaskScheduler_CountTasks(This,rtoid) \
    ((This)->lpVtbl->CountTasks(This,rtoid))
#define IShellTaskScheduler_Status(This,dwReleaseStatus,dwThreadTimeout) \
    ((This)->lpVtbl->Status(This,dwReleaseStatus,dwThreadTimeout))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellTaskScheduler_INTERFACE_DEFINED__ */

#define SID_ShellTaskScheduler IID_IShellTaskScheduler

/*****************************************************************************
 * IPersistFolder2 interface
 */
#ifndef __IPersistFolder2_INTERFACE_DEFINED__
#define __IPersistFolder2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPersistFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistFolder2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistFolder2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistFolder2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistFolder2 *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistFolder2 *This,
        CLSID *pClassID);

    /*** IPersistFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IPersistFolder2 *This,
        PCIDLIST_ABSOLUTE pidl);

    /*** IPersistFolder2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCurFolder)(
        IPersistFolder2 *This,
        PIDLIST_ABSOLUTE *ppidl);

    END_INTERFACE
} IPersistFolder2Vtbl;

interface IPersistFolder2 {
    CONST_VTBL IPersistFolder2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistFolder2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistFolder2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistFolder2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistFolder2_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistFolder methods ***/
#define IPersistFolder2_Initialize(This,pidl) \
    ((This)->lpVtbl->Initialize(This,pidl))
/*** IPersistFolder2 methods ***/
#define IPersistFolder2_GetCurFolder(This,ppidl) \
    ((This)->lpVtbl->GetCurFolder(This,ppidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistFolder2_INTERFACE_DEFINED__ */

#define CSIDL_FLAG_PFTI_TRACKTARGET CSIDL_FLAG_DONT_VERIFY

#include <pshpack8.h>

typedef struct _PERSIST_FOLDER_TARGET_INFO {
    PIDLIST_ABSOLUTE pidlTargetFolder;
    WCHAR szTargetParsingName[ 260 ];
    WCHAR szNetworkProvider[ 260 ];
    DWORD dwAttributes;
    int csidl;
} PERSIST_FOLDER_TARGET_INFO;

#include <poppack.h>

/*****************************************************************************
 * IPersistFolder3 interface
 */
#ifndef __IPersistFolder3_INTERFACE_DEFINED__
#define __IPersistFolder3_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPersistFolder3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistFolder3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistFolder3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistFolder3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistFolder3 *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistFolder3 *This,
        CLSID *pClassID);

    /*** IPersistFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IPersistFolder3 *This,
        PCIDLIST_ABSOLUTE pidl);

    /*** IPersistFolder2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCurFolder)(
        IPersistFolder3 *This,
        PIDLIST_ABSOLUTE *ppidl);

    /*** IPersistFolder3 methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeEx)(
        IPersistFolder3 *This,
        IBindCtx *pbc,
        PCIDLIST_ABSOLUTE pidlRoot,
        const PERSIST_FOLDER_TARGET_INFO *ppfti);

    HRESULT (STDMETHODCALLTYPE *GetFolderTargetInfo)(
        IPersistFolder3 *This,
        PERSIST_FOLDER_TARGET_INFO *ppfti);

    END_INTERFACE
} IPersistFolder3Vtbl;

interface IPersistFolder3 {
    CONST_VTBL IPersistFolder3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistFolder3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistFolder3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistFolder3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistFolder3_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistFolder methods ***/
#define IPersistFolder3_Initialize(This,pidl) \
    ((This)->lpVtbl->Initialize(This,pidl))
/*** IPersistFolder2 methods ***/
#define IPersistFolder3_GetCurFolder(This,ppidl) \
    ((This)->lpVtbl->GetCurFolder(This,ppidl))
/*** IPersistFolder3 methods ***/
#define IPersistFolder3_InitializeEx(This,pbc,pidlRoot,ppfti) \
    ((This)->lpVtbl->InitializeEx(This,pbc,pidlRoot,ppfti))
#define IPersistFolder3_GetFolderTargetInfo(This,ppfti) \
    ((This)->lpVtbl->GetFolderTargetInfo(This,ppfti))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistFolder3_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IPersistIDList interface
 */
#ifndef __IPersistIDList_INTERFACE_DEFINED__
#define __IPersistIDList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPersistIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistIDListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistIDList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistIDList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistIDList *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistIDList *This,
        CLSID *pClassID);

    /*** IPersistIDList methods ***/
    HRESULT (STDMETHODCALLTYPE *SetIDList)(
        IPersistIDList *This,
        PCIDLIST_ABSOLUTE pidl);

    HRESULT (STDMETHODCALLTYPE *GetIDList)(
        IPersistIDList *This,
        PIDLIST_ABSOLUTE *ppidl);

    END_INTERFACE
} IPersistIDListVtbl;

interface IPersistIDList {
    CONST_VTBL IPersistIDListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistIDList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistIDList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistIDList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersist methods ***/
#define IPersistIDList_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
/*** IPersistIDList methods ***/
#define IPersistIDList_SetIDList(This,pidl) \
    ((This)->lpVtbl->SetIDList(This,pidl))
#define IPersistIDList_GetIDList(This,ppidl) \
    ((This)->lpVtbl->GetIDList(This,ppidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistIDList_INTERFACE_DEFINED__ */

#endif  // NTDDI_WINXP|| (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IEnumIDList interface
 */
#ifndef __IEnumIDList_INTERFACE_DEFINED__
#define __IEnumIDList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumIDListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumIDList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumIDList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumIDList *This);

    /*** IEnumIDList methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumIDList *This,
        ULONG celt,
        PITEMID_CHILD *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumIDList *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumIDList *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumIDList *This,
        IEnumIDList **ppenum);

    END_INTERFACE
} IEnumIDListVtbl;

interface IEnumIDList {
    CONST_VTBL IEnumIDListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumIDList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumIDList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumIDList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumIDList methods ***/
#define IEnumIDList_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumIDList_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumIDList_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumIDList_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumIDList_RemoteNext_Proxy(
    IEnumIDList *This,
    ULONG celt,
    PITEMID_CHILD *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumIDList_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumIDList_Next_Proxy(
    ULONG celt,
    PITEMID_CHILD *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumIDList_Next_Stub(
    ULONG celt,
    PITEMID_CHILD *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumIDList_INTERFACE_DEFINED__ */

typedef IEnumIDList *LPENUMIDLIST;

/*****************************************************************************
 * IEnumFullIDList interface
 */
#ifndef __IEnumFullIDList_INTERFACE_DEFINED__
#define __IEnumFullIDList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumFullIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumFullIDListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumFullIDList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumFullIDList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumFullIDList *This);

    /*** IEnumFullIDList methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumFullIDList *This,
        ULONG celt,
        PIDLIST_ABSOLUTE *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumFullIDList *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumFullIDList *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumFullIDList *This,
        IEnumFullIDList **ppenum);

    END_INTERFACE
} IEnumFullIDListVtbl;

interface IEnumFullIDList {
    CONST_VTBL IEnumFullIDListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumFullIDList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumFullIDList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumFullIDList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumFullIDList methods ***/
#define IEnumFullIDList_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumFullIDList_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumFullIDList_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumFullIDList_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumFullIDList_RemoteNext_Proxy(
    IEnumFullIDList *This,
    ULONG celt,
    PIDLIST_ABSOLUTE *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumFullIDList_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumFullIDList_Next_Proxy(
    ULONG celt,
    PIDLIST_ABSOLUTE *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumFullIDList_Next_Stub(
    ULONG celt,
    PIDLIST_ABSOLUTE *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumFullIDList_INTERFACE_DEFINED__ */

enum _SHGDNF {
    SHGDN_NORMAL = 0x0,
    SHGDN_INFOLDER = 0x1,
    SHGDN_FOREDITING = 0x1000,
    SHGDN_FORADDRESSBAR = 0x4000,
    SHGDN_FORPARSING = 0x8000
};
typedef DWORD SHGDNF;

enum _SHCONTF {
    SHCONTF_CHECKING_FOR_CHILDREN = 0x10,
    SHCONTF_FOLDERS = 0x20,
    SHCONTF_NONFOLDERS = 0x40,
    SHCONTF_INCLUDEHIDDEN = 0x80,
    SHCONTF_INIT_ON_FIRST_NEXT = 0x100,
    SHCONTF_NETPRINTERSRCH = 0x200,
    SHCONTF_SHAREABLE = 0x400,
    SHCONTF_STORAGE = 0x800,
    SHCONTF_NAVIGATION_ENUM = 0x1000,
    SHCONTF_FASTITEMS = 0x2000,
    SHCONTF_FLATLIST = 0x4000,
    SHCONTF_ENABLE_ASYNC = 0x8000,
    SHCONTF_INCLUDESUPERHIDDEN = 0x10000
};
typedef DWORD SHCONTF;

#define SHCIDS_ALLFIELDS        0x80000000L
#define SHCIDS_CANONICALONLY    0x10000000L
#define SHCIDS_BITMASK          0xFFFF0000L
#define SHCIDS_COLUMNMASK       0x0000FFFFL

#define SFGAO_CANCOPY           DROPEFFECT_COPY // Objects can be copied    (0x1)
#define SFGAO_CANMOVE           DROPEFFECT_MOVE // Objects can be moved     (0x2)
#define SFGAO_CANLINK           DROPEFFECT_LINK // Objects can be linked    (0x4)
#define SFGAO_STORAGE           0x00000008L     // supports BindToObject(IID_IStorage)
#define SFGAO_CANRENAME         0x00000010L     // Objects can be renamed
#define SFGAO_CANDELETE         0x00000020L     // Objects can be deleted
#define SFGAO_HASPROPSHEET      0x00000040L     // Objects have property sheets

#define SFGAO_DROPTARGET        0x00000100L     // Objects are drop target
#define SFGAO_CAPABILITYMASK    0x00000177L

#define SFGAO_PLACEHOLDER       0x00000800L     // File or folder is not fully present and recalled on open or access
#define SFGAO_SYSTEM            0x00001000L     // System object
#define SFGAO_ENCRYPTED         0x00002000L     // Object is encrypted (use alt color)
#define SFGAO_ISSLOW            0x00004000L     // 'Slow' object
#define SFGAO_GHOSTED           0x00008000L     // Ghosted icon
#define SFGAO_LINK              0x00010000L     // Shortcut (link)
#define SFGAO_SHARE             0x00020000L     // Shared
#define SFGAO_READONLY          0x00040000L     // Read-only
#define SFGAO_HIDDEN            0x00080000L     // Hidden object
#define SFGAO_DISPLAYATTRMASK   0x000FC000L
#define SFGAO_FILESYSANCESTOR   0x10000000L     // May contain children with SFGAO_FILESYSTEM
#define SFGAO_FOLDER            0x20000000L     // Support BindToObject(IID_IShellFolder)
#define SFGAO_FILESYSTEM        0x40000000L     // Is a win32 file system object (file/folder/root)
#define SFGAO_HASSUBFOLDER      0x80000000L     // May contain children with SFGAO_FOLDER (may be slow)
#define SFGAO_CONTENTSMASK      0x80000000L
#define SFGAO_VALIDATE          0x01000000L     // Invalidate cached information (may be slow)
#define SFGAO_REMOVABLE         0x02000000L     // Is this removeable media?
#define SFGAO_COMPRESSED        0x04000000L     // Object is compressed (use alt color)
#define SFGAO_BROWSABLE         0x08000000L     // Supports IShellFolder, but only implements CreateViewObject() (non-folder view)
#define SFGAO_NONENUMERATED     0x00100000L     // Is a non-enumerated object (should be hidden)
#define SFGAO_NEWCONTENT        0x00200000L     // Should show bold in explorer tree
#define SFGAO_CANMONIKER        0x00400000L     // Obsolete
#define SFGAO_HASSTORAGE        0x00400000L     // Obsolete
#define SFGAO_STREAM            0x00400000L     // Supports BindToObject(IID_IStream)
#define SFGAO_STORAGEANCESTOR   0x00800000L     // May contain children with SFGAO_STORAGE or SFGAO_STREAM
#define SFGAO_STORAGECAPMASK    0x70C50008L     // For determining storage capabilities, ie for open/save semantics
#define SFGAO_PKEYSFGAOMASK     0x81044000L     // Attributes that are masked out for PKEY_SFGAOFlags because they are considered to cause slow calculations or lack context (SFGAO_VALIDATE | SFGAO_ISSLOW | SFGAO_HASSUBFOLDER and others)

typedef ULONG SFGAOF;

typedef enum SYNC_TRANSFER_STATUS {
    STS_NONE = 0x0,
    STS_NEEDSUPLOAD = 0x1,
    STS_NEEDSDOWNLOAD = 0x2,
    STS_TRANSFERRING = 0x4,
    STS_PAUSED = 0x8,
    STS_HASERROR = 0x10,
    STS_FETCHING_METADATA = 0x20,
    STS_USER_REQUESTED_REFRESH = 0x40,
    STS_HASWARNING = 0x80,
    STS_EXCLUDED = 0x100,
    STS_INCOMPLETE = 0x200,
    STS_PLACEHOLDER_IFEMPTY = 0x400
} SYNC_TRANSFER_STATUS;


typedef enum STORAGE_PROVIDER_FILE_FLAGS {
    SPFF_NONE = 0x0,
    SPFF_DOWNLOAD_BY_DEFAULT = 0x1,
    SPFF_CREATED_ON_THIS_DEVICE = 0x2
} STORAGE_PROVIDER_FILE_FLAGS;


typedef enum PLACEHOLDER_STATES {
    PS_NONE = 0x0,
    PS_MARKED_FOR_OFFLINE_AVAILABILITY = 0x1,
    PS_FULL_PRIMARY_STREAM_AVAILABLE = 0x2,
    PS_CREATE_FILE_ACCESSIBLE = 0x4,
    PS_CLOUDFILE_PLACEHOLDER = 0x8,
    PS_DEFAULT = (PS_MARKED_FOR_OFFLINE_AVAILABILITY | PS_FULL_PRIMARY_STREAM_AVAILABLE) | PS_CREATE_FILE_ACCESSIBLE,
    PS_ALL = ((PS_MARKED_FOR_OFFLINE_AVAILABILITY | PS_FULL_PRIMARY_STREAM_AVAILABLE) | PS_CREATE_FILE_ACCESSIBLE) | PS_CLOUDFILE_PLACEHOLDER
} PLACEHOLDER_STATES;


#define CONFLICT_RESOLUTION_CLSID_KEY L"ConflictResolutionCLSID"

typedef enum MERGE_UPDATE_STATUS {
    MUS_COMPLETE = 0,
    MUS_USERINPUTNEEDED = 1,
    MUS_FAILED = 2
} MERGE_UPDATE_STATUS;

/*****************************************************************************
 * IFileSyncMergeHandler interface
 */
#ifndef __IFileSyncMergeHandler_INTERFACE_DEFINED__
#define __IFileSyncMergeHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileSyncMergeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileSyncMergeHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileSyncMergeHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileSyncMergeHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileSyncMergeHandler *This);

    /*** IFileSyncMergeHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *Merge)(
        IFileSyncMergeHandler *This,
        LPCWSTR localFilePath,
        LPCWSTR serverFilePath,
        MERGE_UPDATE_STATUS *updateStatus);

    HRESULT (STDMETHODCALLTYPE *ShowResolveConflictUIAsync)(
        IFileSyncMergeHandler *This,
        LPCWSTR localFilePath,
        HMONITOR monitorToDisplayOn);

    END_INTERFACE
} IFileSyncMergeHandlerVtbl;

interface IFileSyncMergeHandler {
    CONST_VTBL IFileSyncMergeHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileSyncMergeHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileSyncMergeHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileSyncMergeHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileSyncMergeHandler methods ***/
#define IFileSyncMergeHandler_Merge(This,localFilePath,serverFilePath,updateStatus) \
    ((This)->lpVtbl->Merge(This,localFilePath,serverFilePath,updateStatus))
#define IFileSyncMergeHandler_ShowResolveConflictUIAsync(This,localFilePath,monitorToDisplayOn) \
    ((This)->lpVtbl->ShowResolveConflictUIAsync(This,localFilePath,monitorToDisplayOn))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileSyncMergeHandler_INTERFACE_DEFINED__ */

#define STR_BIND_FORCE_FOLDER_SHORTCUT_RESOLVE   L"Force Folder Shortcut Resolve"

#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"

#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"

#define STR_SKIP_BINDING_CLSID      L"Skip Binding CLSID"

#define STR_PARSE_PREFER_FOLDER_BROWSING     L"Parse Prefer Folder Browsing"

#define STR_DONT_PARSE_RELATIVE              L"Don't Parse Relative"

#define STR_PARSE_TRANSLATE_ALIASES          L"Parse Translate Aliases"

#define STR_PARSE_SKIP_NET_CACHE             L"Skip Net Resource Cache"

#define STR_PARSE_SHELL_PROTOCOL_TO_FILE_OBJECTS     L"Parse Shell Protocol To File Objects"

#if (_WIN32_IE >= 0x0700)

#define STR_TRACK_CLSID                      L"Track the CLSID"

#define STR_INTERNAL_NAVIGATE                L"Internal Navigation"

#define STR_PARSE_PROPERTYSTORE             L"DelegateNamedProperties"

#define STR_NO_VALIDATE_FILENAME_CHARS      L"NoValidateFilenameChars"

#define STR_BIND_DELEGATE_CREATE_OBJECT L"Delegate Object Creation"

#define STR_PARSE_ALLOW_INTERNET_SHELL_FOLDERS   L"Allow binding to Internet shell folder handlers and negate STR_PARSE_PREFER_WEB_BROWSING"
#define STR_PARSE_PREFER_WEB_BROWSING   L"Do not bind to Internet shell folder handlers"

#define STR_PARSE_SHOW_NET_DIAGNOSTICS_UI  L"Show network diagnostics UI"

#define STR_PARSE_DONT_REQUIRE_VALIDATED_URLS  L"Do not require validated URLs"

#define STR_INTERNETFOLDER_PARSE_ONLY_URLMON_BINDABLE  L"Validate URL"

#endif // _WIN32_IE >= 0x0700

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define BIND_INTERRUPTABLE 0xFFFFFFFF

#endif // NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WIN7)

#define STR_BIND_FOLDERS_READ_ONLY L"Folders As Read Only"

#define STR_BIND_FOLDER_ENUM_MODE L"Folder Enum Mode"

typedef enum FOLDER_ENUM_MODE {
    FEM_VIEWRESULT = 0,
    FEM_NAVIGATION = 1
} FOLDER_ENUM_MODE;

/*****************************************************************************
 * IObjectWithFolderEnumMode interface
 */
#ifndef __IObjectWithFolderEnumMode_INTERFACE_DEFINED__
#define __IObjectWithFolderEnumMode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectWithFolderEnumMode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectWithFolderEnumModeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectWithFolderEnumMode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectWithFolderEnumMode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectWithFolderEnumMode *This);

    /*** IObjectWithFolderEnumMode methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMode)(
        IObjectWithFolderEnumMode *This,
        FOLDER_ENUM_MODE feMode);

    HRESULT (STDMETHODCALLTYPE *GetMode)(
        IObjectWithFolderEnumMode *This,
        FOLDER_ENUM_MODE *pfeMode);

    END_INTERFACE
} IObjectWithFolderEnumModeVtbl;

interface IObjectWithFolderEnumMode {
    CONST_VTBL IObjectWithFolderEnumModeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectWithFolderEnumMode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectWithFolderEnumMode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectWithFolderEnumMode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectWithFolderEnumMode methods ***/
#define IObjectWithFolderEnumMode_SetMode(This,feMode) \
    ((This)->lpVtbl->SetMode(This,feMode))
#define IObjectWithFolderEnumMode_GetMode(This,pfeMode) \
    ((This)->lpVtbl->GetMode(This,pfeMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectWithFolderEnumMode_INTERFACE_DEFINED__ */

#define STR_PARSE_WITH_EXPLICIT_PROGID L"ExplicitProgid"

#define STR_PARSE_WITH_EXPLICIT_ASSOCAPP L"ExplicitAssociationApp"

#define STR_PARSE_EXPLICIT_ASSOCIATION_SUCCESSFUL L"ExplicitAssociationSuccessful"

#define STR_PARSE_AND_CREATE_ITEM    L"ParseAndCreateItem"

#define STR_PROPERTYBAG_PARAM   L"SHBindCtxPropertyBag"

#define STR_ENUM_ITEMS_FLAGS    L"SHCONTF"

#define STR_STORAGEITEM_CREATION_FLAGS    L"SHGETSTORAGEITEM"


#ifndef __IShellItem_FWD_DEFINED__
#define __IShellItem_FWD_DEFINED__
typedef interface IShellItem IShellItem;
#endif /* __IShellItem_FWD_DEFINED__ */

/*****************************************************************************
 * IParseAndCreateItem interface
 */
#ifndef __IParseAndCreateItem_INTERFACE_DEFINED__
#define __IParseAndCreateItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IParseAndCreateItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IParseAndCreateItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IParseAndCreateItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IParseAndCreateItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IParseAndCreateItem *This);

    /*** IParseAndCreateItem methods ***/
    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IParseAndCreateItem *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IParseAndCreateItem *This,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IParseAndCreateItemVtbl;

interface IParseAndCreateItem {
    CONST_VTBL IParseAndCreateItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IParseAndCreateItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IParseAndCreateItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IParseAndCreateItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IParseAndCreateItem methods ***/
#define IParseAndCreateItem_SetItem(This,psi) \
    ((This)->lpVtbl->SetItem(This,psi))
#define IParseAndCreateItem_GetItem(This,riid,ppv) \
    ((This)->lpVtbl->GetItem(This,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IParseAndCreateItem_INTERFACE_DEFINED__ */

#define STR_ITEM_CACHE_CONTEXT       L"ItemCacheContext"

#endif // NTDDI_VERSION >= NTDDI_WIN7


#ifndef __IShellFolder_FWD_DEFINED__
#define __IShellFolder_FWD_DEFINED__
typedef interface IShellFolder IShellFolder;
#endif /* __IShellFolder_FWD_DEFINED__ */

/*****************************************************************************
 * IShellFolder interface
 */
#ifndef __IShellFolder_INTERFACE_DEFINED__
#define __IShellFolder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellFolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellFolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellFolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellFolder *This);

    /*** IShellFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *ParseDisplayName)(
        IShellFolder *This,
        HWND hwnd,
        IBindCtx *pbc,
        LPWSTR pszDisplayName,
        ULONG *pchEaten,
        PIDLIST_RELATIVE *ppidl,
        ULONG *pdwAttributes);

    HRESULT (STDMETHODCALLTYPE *EnumObjects)(
        IShellFolder *This,
        HWND hwnd,
        SHCONTF grfFlags,
        IEnumIDList **ppenumIDList);

    HRESULT (STDMETHODCALLTYPE *BindToObject)(
        IShellFolder *This,
        PCUIDLIST_RELATIVE pidl,
        IBindCtx *pbc,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *BindToStorage)(
        IShellFolder *This,
        PCUIDLIST_RELATIVE pidl,
        IBindCtx *pbc,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *CompareIDs)(
        IShellFolder *This,
        LPARAM lParam,
        PCUIDLIST_RELATIVE pidl1,
        PCUIDLIST_RELATIVE pidl2);

    HRESULT (STDMETHODCALLTYPE *CreateViewObject)(
        IShellFolder *This,
        HWND hwndOwner,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetAttributesOf)(
        IShellFolder *This,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        SFGAOF *rgfInOut);

    HRESULT (STDMETHODCALLTYPE *GetUIObjectOf)(
        IShellFolder *This,
        HWND hwndOwner,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        REFIID riid,
        UINT *rgfReserved,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetDisplayNameOf)(
        IShellFolder *This,
        PCUITEMID_CHILD pidl,
        SHGDNF uFlags,
        STRRET *pName);

    HRESULT (STDMETHODCALLTYPE *SetNameOf)(
        IShellFolder *This,
        HWND hwnd,
        PCUITEMID_CHILD pidl,
        LPCWSTR pszName,
        SHGDNF uFlags,
        PITEMID_CHILD *ppidlOut);

    END_INTERFACE
} IShellFolderVtbl;

interface IShellFolder {
    CONST_VTBL IShellFolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellFolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellFolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellFolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellFolder methods ***/
#define IShellFolder_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) \
    ((This)->lpVtbl->ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes))
#define IShellFolder_EnumObjects(This,hwnd,grfFlags,ppenumIDList) \
    ((This)->lpVtbl->EnumObjects(This,hwnd,grfFlags,ppenumIDList))
#define IShellFolder_BindToObject(This,pidl,pbc,riid,ppv) \
    ((This)->lpVtbl->BindToObject(This,pidl,pbc,riid,ppv))
#define IShellFolder_BindToStorage(This,pidl,pbc,riid,ppv) \
    ((This)->lpVtbl->BindToStorage(This,pidl,pbc,riid,ppv))
#define IShellFolder_CompareIDs(This,lParam,pidl1,pidl2) \
    ((This)->lpVtbl->CompareIDs(This,lParam,pidl1,pidl2))
#define IShellFolder_CreateViewObject(This,hwndOwner,riid,ppv) \
    ((This)->lpVtbl->CreateViewObject(This,hwndOwner,riid,ppv))
#define IShellFolder_GetAttributesOf(This,cidl,apidl,rgfInOut) \
    ((This)->lpVtbl->GetAttributesOf(This,cidl,apidl,rgfInOut))
#define IShellFolder_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) \
    ((This)->lpVtbl->GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv))
#define IShellFolder_GetDisplayNameOf(This,pidl,uFlags,pName) \
    ((This)->lpVtbl->GetDisplayNameOf(This,pidl,uFlags,pName))
#define IShellFolder_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) \
    ((This)->lpVtbl->SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IShellFolder_RemoteSetNameOf_Proxy(
    IShellFolder *This,
    HWND hwnd,
    PCUITEMID_CHILD pidl,
    LPCWSTR pszName,
    SHGDNF uFlags,
    PITEMID_CHILD *ppidlOut);

void __RPC_STUB IShellFolder_RemoteSetNameOf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IShellFolder_SetNameOf_Proxy(
    HWND hwnd,
    PCUITEMID_CHILD pidl,
    LPCWSTR pszName,
    SHGDNF uFlags,
    PITEMID_CHILD *ppidlOut);
HRESULT IShellFolder_SetNameOf_Stub(
    HWND hwnd,
    PCUITEMID_CHILD pidl,
    LPCWSTR pszName,
    SHGDNF uFlags,
    PITEMID_CHILD *ppidlOut);
#endif /* __IShellFolder_INTERFACE_DEFINED__ */

typedef IShellFolder *LPSHELLFOLDER;

typedef struct EXTRASEARCH {
    GUID guidSearch;
    WCHAR wszFriendlyName[ 80 ];
    WCHAR wszUrl[ 2084 ];
} EXTRASEARCH;
typedef struct EXTRASEARCH *LPEXTRASEARCH;

/*****************************************************************************
 * IEnumExtraSearch interface
 */
#ifndef __IEnumExtraSearch_INTERFACE_DEFINED__
#define __IEnumExtraSearch_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumExtraSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumExtraSearchVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumExtraSearch *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumExtraSearch *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumExtraSearch *This);

    /*** IEnumExtraSearch methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumExtraSearch *This,
        ULONG celt,
        EXTRASEARCH *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumExtraSearch *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumExtraSearch *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumExtraSearch *This,
        IEnumExtraSearch **ppenum);

    END_INTERFACE
} IEnumExtraSearchVtbl;

interface IEnumExtraSearch {
    CONST_VTBL IEnumExtraSearchVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumExtraSearch_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumExtraSearch_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumExtraSearch_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumExtraSearch methods ***/
#define IEnumExtraSearch_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumExtraSearch_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumExtraSearch_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumExtraSearch_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumExtraSearch_INTERFACE_DEFINED__ */

typedef IEnumExtraSearch *LPENUMEXTRASEARCH;

/*****************************************************************************
 * IShellFolder2 interface
 */
#ifndef __IShellFolder2_INTERFACE_DEFINED__
#define __IShellFolder2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellFolder2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellFolder2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellFolder2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellFolder2 *This);

    /*** IShellFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *ParseDisplayName)(
        IShellFolder2 *This,
        HWND hwnd,
        IBindCtx *pbc,
        LPWSTR pszDisplayName,
        ULONG *pchEaten,
        PIDLIST_RELATIVE *ppidl,
        ULONG *pdwAttributes);

    HRESULT (STDMETHODCALLTYPE *EnumObjects)(
        IShellFolder2 *This,
        HWND hwnd,
        SHCONTF grfFlags,
        IEnumIDList **ppenumIDList);

    HRESULT (STDMETHODCALLTYPE *BindToObject)(
        IShellFolder2 *This,
        PCUIDLIST_RELATIVE pidl,
        IBindCtx *pbc,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *BindToStorage)(
        IShellFolder2 *This,
        PCUIDLIST_RELATIVE pidl,
        IBindCtx *pbc,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *CompareIDs)(
        IShellFolder2 *This,
        LPARAM lParam,
        PCUIDLIST_RELATIVE pidl1,
        PCUIDLIST_RELATIVE pidl2);

    HRESULT (STDMETHODCALLTYPE *CreateViewObject)(
        IShellFolder2 *This,
        HWND hwndOwner,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetAttributesOf)(
        IShellFolder2 *This,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        SFGAOF *rgfInOut);

    HRESULT (STDMETHODCALLTYPE *GetUIObjectOf)(
        IShellFolder2 *This,
        HWND hwndOwner,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        REFIID riid,
        UINT *rgfReserved,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetDisplayNameOf)(
        IShellFolder2 *This,
        PCUITEMID_CHILD pidl,
        SHGDNF uFlags,
        STRRET *pName);

    HRESULT (STDMETHODCALLTYPE *SetNameOf)(
        IShellFolder2 *This,
        HWND hwnd,
        PCUITEMID_CHILD pidl,
        LPCWSTR pszName,
        SHGDNF uFlags,
        PITEMID_CHILD *ppidlOut);

    /*** IShellFolder2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDefaultSearchGUID)(
        IShellFolder2 *This,
        GUID *pguid);

    HRESULT (STDMETHODCALLTYPE *EnumSearches)(
        IShellFolder2 *This,
        IEnumExtraSearch **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetDefaultColumn)(
        IShellFolder2 *This,
        DWORD dwRes,
        ULONG *pSort,
        ULONG *pDisplay);

    HRESULT (STDMETHODCALLTYPE *GetDefaultColumnState)(
        IShellFolder2 *This,
        UINT iColumn,
        SHCOLSTATEF *pcsFlags);

    HRESULT (STDMETHODCALLTYPE *GetDetailsEx)(
        IShellFolder2 *This,
        PCUITEMID_CHILD pidl,
        const SHCOLUMNID *pscid,
        VARIANT *pv);

    HRESULT (STDMETHODCALLTYPE *GetDetailsOf)(
        IShellFolder2 *This,
        PCUITEMID_CHILD pidl,
        UINT iColumn,
        SHELLDETAILS *psd);

    HRESULT (STDMETHODCALLTYPE *MapColumnToSCID)(
        IShellFolder2 *This,
        UINT iColumn,
        SHCOLUMNID *pscid);

    END_INTERFACE
} IShellFolder2Vtbl;

interface IShellFolder2 {
    CONST_VTBL IShellFolder2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellFolder2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellFolder2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellFolder2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellFolder methods ***/
#define IShellFolder2_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) \
    ((This)->lpVtbl->ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes))
#define IShellFolder2_EnumObjects(This,hwnd,grfFlags,ppenumIDList) \
    ((This)->lpVtbl->EnumObjects(This,hwnd,grfFlags,ppenumIDList))
#define IShellFolder2_BindToObject(This,pidl,pbc,riid,ppv) \
    ((This)->lpVtbl->BindToObject(This,pidl,pbc,riid,ppv))
#define IShellFolder2_BindToStorage(This,pidl,pbc,riid,ppv) \
    ((This)->lpVtbl->BindToStorage(This,pidl,pbc,riid,ppv))
#define IShellFolder2_CompareIDs(This,lParam,pidl1,pidl2) \
    ((This)->lpVtbl->CompareIDs(This,lParam,pidl1,pidl2))
#define IShellFolder2_CreateViewObject(This,hwndOwner,riid,ppv) \
    ((This)->lpVtbl->CreateViewObject(This,hwndOwner,riid,ppv))
#define IShellFolder2_GetAttributesOf(This,cidl,apidl,rgfInOut) \
    ((This)->lpVtbl->GetAttributesOf(This,cidl,apidl,rgfInOut))
#define IShellFolder2_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) \
    ((This)->lpVtbl->GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv))
#define IShellFolder2_GetDisplayNameOf(This,pidl,uFlags,pName) \
    ((This)->lpVtbl->GetDisplayNameOf(This,pidl,uFlags,pName))
#define IShellFolder2_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) \
    ((This)->lpVtbl->SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut))
/*** IShellFolder2 methods ***/
#define IShellFolder2_GetDefaultSearchGUID(This,pguid) \
    ((This)->lpVtbl->GetDefaultSearchGUID(This,pguid))
#define IShellFolder2_EnumSearches(This,ppenum) \
    ((This)->lpVtbl->EnumSearches(This,ppenum))
#define IShellFolder2_GetDefaultColumn(This,dwRes,pSort,pDisplay) \
    ((This)->lpVtbl->GetDefaultColumn(This,dwRes,pSort,pDisplay))
#define IShellFolder2_GetDefaultColumnState(This,iColumn,pcsFlags) \
    ((This)->lpVtbl->GetDefaultColumnState(This,iColumn,pcsFlags))
#define IShellFolder2_GetDetailsEx(This,pidl,pscid,pv) \
    ((This)->lpVtbl->GetDetailsEx(This,pidl,pscid,pv))
#define IShellFolder2_GetDetailsOf(This,pidl,iColumn,psd) \
    ((This)->lpVtbl->GetDetailsOf(This,pidl,iColumn,psd))
#define IShellFolder2_MapColumnToSCID(This,iColumn,pscid) \
    ((This)->lpVtbl->MapColumnToSCID(This,iColumn,pscid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellFolder2_INTERFACE_DEFINED__ */

typedef enum FOLDERFLAGS {
    FWF_NONE = 0x0,
    FWF_AUTOARRANGE = 0x1,
    FWF_ABBREVIATEDNAMES = 0x2,
    FWF_SNAPTOGRID = 0x4,
    FWF_OWNERDATA = 0x8,
    FWF_BESTFITWINDOW = 0x10,
    FWF_DESKTOP = 0x20,
    FWF_SINGLESEL = 0x40,
    FWF_NOSUBFOLDERS = 0x80,
    FWF_TRANSPARENT = 0x100,
    FWF_NOCLIENTEDGE = 0x200,
    FWF_NOSCROLL = 0x400,
    FWF_ALIGNLEFT = 0x800,
    FWF_NOICONS = 0x1000,
    FWF_SHOWSELALWAYS = 0x2000,
    FWF_NOVISIBLE = 0x4000,
    FWF_SINGLECLICKACTIVATE = 0x8000,
    FWF_NOWEBVIEW = 0x10000,
    FWF_HIDEFILENAMES = 0x20000,
    FWF_CHECKSELECT = 0x40000,
    FWF_NOENUMREFRESH = 0x80000,
    FWF_NOGROUPING = 0x100000,
    FWF_FULLROWSELECT = 0x200000,
    FWF_NOFILTERS = 0x400000,
    FWF_NOCOLUMNHEADER = 0x800000,
    FWF_NOHEADERINALLVIEWS = 0x1000000,
    FWF_EXTENDEDTILES = 0x2000000,
    FWF_TRICHECKSELECT = 0x4000000,
    FWF_AUTOCHECKSELECT = 0x8000000,
    FWF_NOBROWSERVIEWSTATE = 0x10000000,
    FWF_SUBSETGROUPS = 0x20000000,
    FWF_USESEARCHFOLDER = 0x40000000,
    FWF_ALLOWRTLREADING = 0x80000000
} FOLDERFLAGS;


typedef enum FOLDERVIEWMODE {
    FVM_AUTO = -1,
    FVM_FIRST = 1,
    FVM_ICON = 1,
    FVM_SMALLICON = 2,
    FVM_LIST = 3,
    FVM_DETAILS = 4,
    FVM_THUMBNAIL = 5,
    FVM_TILE = 6,
    FVM_THUMBSTRIP = 7,
    FVM_CONTENT = 8,
    FVM_LAST = 8
} FOLDERVIEWMODE;

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef enum FOLDERLOGICALVIEWMODE {
    FLVM_UNSPECIFIED = -1,
    FLVM_FIRST = 1,
    FLVM_DETAILS = 1,
    FLVM_TILES = 2,
    FLVM_ICONS = 3,
    FLVM_LIST = 4,
    FLVM_CONTENT = 5,
    FLVM_LAST = 5
} FOLDERLOGICALVIEWMODE;

#endif  // NTDDI_VISTA

typedef struct FOLDERSETTINGS {
    UINT ViewMode;
    UINT fFlags;
} FOLDERSETTINGS;

typedef FOLDERSETTINGS *LPFOLDERSETTINGS;
typedef const FOLDERSETTINGS *LPCFOLDERSETTINGS;
typedef FOLDERSETTINGS *PFOLDERSETTINGS;

typedef enum _SVSIF {
    SVSI_DESELECT = 0x0,
    SVSI_SELECT = 0x1,
    SVSI_EDIT = 0x3,
    SVSI_DESELECTOTHERS = 0x4,
    SVSI_ENSUREVISIBLE = 0x8,
    SVSI_FOCUSED = 0x10,
    SVSI_TRANSLATEPT = 0x20,
    SVSI_SELECTIONMARK = 0x40,
    SVSI_POSITIONITEM = 0x80,
    SVSI_CHECK = 0x100,
    SVSI_CHECK2 = 0x200,
    SVSI_KEYBOARDSELECT = 0x401,
    SVSI_NOTAKEFOCUS = 0x40000000
} _SVSIF;

#define SVSI_NOSTATECHANGE   ((UINT)0x80000000) // work around the use of the high bit that results in 4245: signed/unsigned mismatch

typedef UINT SVSIF;

typedef enum _SVGIO {
    SVGIO_BACKGROUND = 0x0,
    SVGIO_SELECTION = 0x1,
    SVGIO_ALLVIEW = 0x2,
    SVGIO_CHECKED = 0x3,
    SVGIO_TYPE_MASK = 0xf,
    SVGIO_FLAG_VIEWORDER = 0x80000000
} _SVGIO;

typedef int SVGIO;

typedef enum SVUIA_STATUS {
    SVUIA_DEACTIVATE = 0,
    SVUIA_ACTIVATE_NOFOCUS = 1,
    SVUIA_ACTIVATE_FOCUS = 2,
    SVUIA_INPLACEACTIVATE = 3
} SVUIA_STATUS;

#ifdef _FIX_ENABLEMODELESS_CONFLICT
#define    EnableModeless EnableModelessSV
#endif

#ifdef _NEVER_
typedef LPARAM LPFNSVADDPROPSHEETPAGE;
#else //!_NEVER_
#include <prsht.h>
typedef LPFNADDPROPSHEETPAGE LPFNSVADDPROPSHEETPAGE;
#endif //_NEVER_


#ifndef __IShellBrowser_FWD_DEFINED__
#define __IShellBrowser_FWD_DEFINED__
typedef interface IShellBrowser IShellBrowser;
#endif /* __IShellBrowser_FWD_DEFINED__ */

/*****************************************************************************
 * IShellView interface
 */
#ifndef __IShellView_INTERFACE_DEFINED__
#define __IShellView_INTERFACE_DEFINED__

typedef IShellView *LPSHELLVIEW;

EXTERN_C const IID IID_IShellView;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellViewVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellView *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellView *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellView *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IShellView *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IShellView *This,
        BOOL fEnterMode);

    /*** IShellView methods ***/
    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IShellView *This,
        MSG *pmsg);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IShellView *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *UIActivate)(
        IShellView *This,
        UINT uState);

    HRESULT (STDMETHODCALLTYPE *Refresh)(
        IShellView *This);

    HRESULT (STDMETHODCALLTYPE *CreateViewWindow)(
        IShellView *This,
        IShellView *psvPrevious,
        LPCFOLDERSETTINGS pfs,
        IShellBrowser *psb,
        RECT *prcView,
        HWND *phWnd);

    HRESULT (STDMETHODCALLTYPE *DestroyViewWindow)(
        IShellView *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentInfo)(
        IShellView *This,
        LPFOLDERSETTINGS pfs);

    HRESULT (STDMETHODCALLTYPE *AddPropertySheetPages)(
        IShellView *This,
        DWORD dwReserved,
        LPFNSVADDPROPSHEETPAGE pfn,
        LPARAM lparam);

    HRESULT (STDMETHODCALLTYPE *SaveViewState)(
        IShellView *This);

    HRESULT (STDMETHODCALLTYPE *SelectItem)(
        IShellView *This,
        PCUITEMID_CHILD pidlItem,
        SVSIF uFlags);

    HRESULT (STDMETHODCALLTYPE *GetItemObject)(
        IShellView *This,
        UINT uItem,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IShellViewVtbl;

interface IShellView {
    CONST_VTBL IShellViewVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellView_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellView_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellView_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IShellView_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IShellView_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IShellView methods ***/
#define IShellView_TranslateAccelerator(This,pmsg) \
    ((This)->lpVtbl->TranslateAccelerator(This,pmsg))
#define IShellView_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#define IShellView_UIActivate(This,uState) \
    ((This)->lpVtbl->UIActivate(This,uState))
#define IShellView_Refresh(This) \
    ((This)->lpVtbl->Refresh(This))
#define IShellView_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) \
    ((This)->lpVtbl->CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd))
#define IShellView_DestroyViewWindow(This) \
    ((This)->lpVtbl->DestroyViewWindow(This))
#define IShellView_GetCurrentInfo(This,pfs) \
    ((This)->lpVtbl->GetCurrentInfo(This,pfs))
#define IShellView_AddPropertySheetPages(This,dwReserved,pfn,lparam) \
    ((This)->lpVtbl->AddPropertySheetPages(This,dwReserved,pfn,lparam))
#define IShellView_SaveViewState(This) \
    ((This)->lpVtbl->SaveViewState(This))
#define IShellView_SelectItem(This,pidlItem,uFlags) \
    ((This)->lpVtbl->SelectItem(This,pidlItem,uFlags))
#define IShellView_GetItemObject(This,uItem,riid,ppv) \
    ((This)->lpVtbl->GetItemObject(This,uItem,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellView_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellView2 interface
 */
#ifndef __IShellView2_INTERFACE_DEFINED__
#define __IShellView2_INTERFACE_DEFINED__

typedef GUID SHELLVIEWID;

#define SV2GV_CURRENTVIEW ((UINT)-1)
#define SV2GV_DEFAULTVIEW ((UINT)-2)

#include <pshpack8.h>

typedef struct _SV2CVW2_PARAMS {
    DWORD cbSize;
    IShellView *psvPrev;
    LPCFOLDERSETTINGS pfs;
    IShellBrowser *psbOwner;
    RECT *prcView;
    const SHELLVIEWID *pvid;
    HWND hwndView;
} SV2CVW2_PARAMS;
typedef struct _SV2CVW2_PARAMS *LPSV2CVW2_PARAMS;

#include <poppack.h>

EXTERN_C const IID IID_IShellView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellView2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellView2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellView2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellView2 *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IShellView2 *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IShellView2 *This,
        BOOL fEnterMode);

    /*** IShellView methods ***/
    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IShellView2 *This,
        MSG *pmsg);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IShellView2 *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *UIActivate)(
        IShellView2 *This,
        UINT uState);

    HRESULT (STDMETHODCALLTYPE *Refresh)(
        IShellView2 *This);

    HRESULT (STDMETHODCALLTYPE *CreateViewWindow)(
        IShellView2 *This,
        IShellView *psvPrevious,
        LPCFOLDERSETTINGS pfs,
        IShellBrowser *psb,
        RECT *prcView,
        HWND *phWnd);

    HRESULT (STDMETHODCALLTYPE *DestroyViewWindow)(
        IShellView2 *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentInfo)(
        IShellView2 *This,
        LPFOLDERSETTINGS pfs);

    HRESULT (STDMETHODCALLTYPE *AddPropertySheetPages)(
        IShellView2 *This,
        DWORD dwReserved,
        LPFNSVADDPROPSHEETPAGE pfn,
        LPARAM lparam);

    HRESULT (STDMETHODCALLTYPE *SaveViewState)(
        IShellView2 *This);

    HRESULT (STDMETHODCALLTYPE *SelectItem)(
        IShellView2 *This,
        PCUITEMID_CHILD pidlItem,
        SVSIF uFlags);

    HRESULT (STDMETHODCALLTYPE *GetItemObject)(
        IShellView2 *This,
        UINT uItem,
        REFIID riid,
        void **ppv);

    /*** IShellView2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetView)(
        IShellView2 *This,
        SHELLVIEWID *pvid,
        ULONG uView);

    HRESULT (STDMETHODCALLTYPE *CreateViewWindow2)(
        IShellView2 *This,
        LPSV2CVW2_PARAMS lpParams);

    HRESULT (STDMETHODCALLTYPE *HandleRename)(
        IShellView2 *This,
        PCUITEMID_CHILD pidlNew);

    HRESULT (STDMETHODCALLTYPE *SelectAndPositionItem)(
        IShellView2 *This,
        PCUITEMID_CHILD pidlItem,
        UINT uFlags,
        POINT *ppt);

    END_INTERFACE
} IShellView2Vtbl;

interface IShellView2 {
    CONST_VTBL IShellView2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellView2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellView2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellView2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IShellView2_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IShellView2_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IShellView methods ***/
#define IShellView2_TranslateAccelerator(This,pmsg) \
    ((This)->lpVtbl->TranslateAccelerator(This,pmsg))
#define IShellView2_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#define IShellView2_UIActivate(This,uState) \
    ((This)->lpVtbl->UIActivate(This,uState))
#define IShellView2_Refresh(This) \
    ((This)->lpVtbl->Refresh(This))
#define IShellView2_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) \
    ((This)->lpVtbl->CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd))
#define IShellView2_DestroyViewWindow(This) \
    ((This)->lpVtbl->DestroyViewWindow(This))
#define IShellView2_GetCurrentInfo(This,pfs) \
    ((This)->lpVtbl->GetCurrentInfo(This,pfs))
#define IShellView2_AddPropertySheetPages(This,dwReserved,pfn,lparam) \
    ((This)->lpVtbl->AddPropertySheetPages(This,dwReserved,pfn,lparam))
#define IShellView2_SaveViewState(This) \
    ((This)->lpVtbl->SaveViewState(This))
#define IShellView2_SelectItem(This,pidlItem,uFlags) \
    ((This)->lpVtbl->SelectItem(This,pidlItem,uFlags))
#define IShellView2_GetItemObject(This,uItem,riid,ppv) \
    ((This)->lpVtbl->GetItemObject(This,uItem,riid,ppv))
/*** IShellView2 methods ***/
#define IShellView2_GetView(This,pvid,uView) \
    ((This)->lpVtbl->GetView(This,pvid,uView))
#define IShellView2_CreateViewWindow2(This,lpParams) \
    ((This)->lpVtbl->CreateViewWindow2(This,lpParams))
#define IShellView2_HandleRename(This,pidlNew) \
    ((This)->lpVtbl->HandleRename(This,pidlNew))
#define IShellView2_SelectAndPositionItem(This,pidlItem,uFlags,ppt) \
    ((This)->lpVtbl->SelectAndPositionItem(This,pidlItem,uFlags,ppt))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellView2_INTERFACE_DEFINED__ */

#ifdef _FIX_ENABLEMODELESS_CONFLICT
#undef    EnableModeless
#endif

/*****************************************************************************
 * IFolderView interface
 */
#ifndef __IFolderView_INTERFACE_DEFINED__
#define __IFolderView_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderView;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderViewVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderView *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderView *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderView *This);

    /*** IFolderView methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCurrentViewMode)(
        IFolderView *This,
        UINT *pViewMode);

    HRESULT (STDMETHODCALLTYPE *SetCurrentViewMode)(
        IFolderView *This,
        UINT ViewMode);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IFolderView *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *Item)(
        IFolderView *This,
        int iItemIndex,
        PITEMID_CHILD *ppidl);

    HRESULT (STDMETHODCALLTYPE *ItemCount)(
        IFolderView *This,
        UINT uFlags,
        int *pcItems);

    HRESULT (STDMETHODCALLTYPE *Items)(
        IFolderView *This,
        UINT uFlags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetSelectionMarkedItem)(
        IFolderView *This,
        int *piItem);

    HRESULT (STDMETHODCALLTYPE *GetFocusedItem)(
        IFolderView *This,
        int *piItem);

    HRESULT (STDMETHODCALLTYPE *GetItemPosition)(
        IFolderView *This,
        PCUITEMID_CHILD pidl,
        POINT *ppt);

    HRESULT (STDMETHODCALLTYPE *GetSpacing)(
        IFolderView *This,
        POINT *ppt);

    HRESULT (STDMETHODCALLTYPE *GetDefaultSpacing)(
        IFolderView *This,
        POINT *ppt);

    HRESULT (STDMETHODCALLTYPE *GetAutoArrange)(
        IFolderView *This);

    HRESULT (STDMETHODCALLTYPE *SelectItem)(
        IFolderView *This,
        int iItem,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SelectAndPositionItems)(
        IFolderView *This,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        POINT *apt,
        DWORD dwFlags);

    END_INTERFACE
} IFolderViewVtbl;

interface IFolderView {
    CONST_VTBL IFolderViewVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderView_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderView_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderView_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderView methods ***/
#define IFolderView_GetCurrentViewMode(This,pViewMode) \
    ((This)->lpVtbl->GetCurrentViewMode(This,pViewMode))
#define IFolderView_SetCurrentViewMode(This,ViewMode) \
    ((This)->lpVtbl->SetCurrentViewMode(This,ViewMode))
#define IFolderView_GetFolder(This,riid,ppv) \
    ((This)->lpVtbl->GetFolder(This,riid,ppv))
#define IFolderView_Item(This,iItemIndex,ppidl) \
    ((This)->lpVtbl->Item(This,iItemIndex,ppidl))
#define IFolderView_ItemCount(This,uFlags,pcItems) \
    ((This)->lpVtbl->ItemCount(This,uFlags,pcItems))
#define IFolderView_Items(This,uFlags,riid,ppv) \
    ((This)->lpVtbl->Items(This,uFlags,riid,ppv))
#define IFolderView_GetSelectionMarkedItem(This,piItem) \
    ((This)->lpVtbl->GetSelectionMarkedItem(This,piItem))
#define IFolderView_GetFocusedItem(This,piItem) \
    ((This)->lpVtbl->GetFocusedItem(This,piItem))
#define IFolderView_GetItemPosition(This,pidl,ppt) \
    ((This)->lpVtbl->GetItemPosition(This,pidl,ppt))
#define IFolderView_GetSpacing(This,ppt) \
    ((This)->lpVtbl->GetSpacing(This,ppt))
#define IFolderView_GetDefaultSpacing(This,ppt) \
    ((This)->lpVtbl->GetDefaultSpacing(This,ppt))
#define IFolderView_GetAutoArrange(This) \
    ((This)->lpVtbl->GetAutoArrange(This))
#define IFolderView_SelectItem(This,iItem,dwFlags) \
    ((This)->lpVtbl->SelectItem(This,iItem,dwFlags))
#define IFolderView_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) \
    ((This)->lpVtbl->SelectAndPositionItems(This,cidl,apidl,apt,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderView_INTERFACE_DEFINED__ */

#define SID_SFolderView IID_IFolderView    // folder view, usually IFolderView

#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_IE >= _WIN32_IE_IE70)

#ifndef NO_SHOBJIDL_SORTDIRECTION

enum tagSORTDIRECTION {
    SORT_DESCENDING = -1,
    SORT_ASCENDING = 1
};
#endif  // NO_SHOBJIDL_SORTDIRECTION
typedef int SORTDIRECTION;

typedef struct SORTCOLUMN {
    PROPERTYKEY propkey;
    SORTDIRECTION direction;
} SORTCOLUMN;

typedef enum FVTEXTTYPE {
    FVST_EMPTYTEXT = 0
} FVTEXTTYPE;


#ifndef __IShellItemArray_FWD_DEFINED__
#define __IShellItemArray_FWD_DEFINED__
typedef interface IShellItemArray IShellItemArray;
#endif /* __IShellItemArray_FWD_DEFINED__ */

typedef HRESULT DEPRECATED_HRESULT;

/*****************************************************************************
 * IFolderView2 interface
 */
#ifndef __IFolderView2_INTERFACE_DEFINED__
#define __IFolderView2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderView2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderView2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderView2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderView2 *This);

    /*** IFolderView methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCurrentViewMode)(
        IFolderView2 *This,
        UINT *pViewMode);

    HRESULT (STDMETHODCALLTYPE *SetCurrentViewMode)(
        IFolderView2 *This,
        UINT ViewMode);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IFolderView2 *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *Item)(
        IFolderView2 *This,
        int iItemIndex,
        PITEMID_CHILD *ppidl);

    HRESULT (STDMETHODCALLTYPE *ItemCount)(
        IFolderView2 *This,
        UINT uFlags,
        int *pcItems);

    HRESULT (STDMETHODCALLTYPE *Items)(
        IFolderView2 *This,
        UINT uFlags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetSelectionMarkedItem)(
        IFolderView2 *This,
        int *piItem);

    HRESULT (STDMETHODCALLTYPE *GetFocusedItem)(
        IFolderView2 *This,
        int *piItem);

    HRESULT (STDMETHODCALLTYPE *GetItemPosition)(
        IFolderView2 *This,
        PCUITEMID_CHILD pidl,
        POINT *ppt);

    HRESULT (STDMETHODCALLTYPE *GetSpacing)(
        IFolderView2 *This,
        POINT *ppt);

    HRESULT (STDMETHODCALLTYPE *GetDefaultSpacing)(
        IFolderView2 *This,
        POINT *ppt);

    HRESULT (STDMETHODCALLTYPE *GetAutoArrange)(
        IFolderView2 *This);

    HRESULT (STDMETHODCALLTYPE *SelectItem)(
        IFolderView2 *This,
        int iItem,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SelectAndPositionItems)(
        IFolderView2 *This,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        POINT *apt,
        DWORD dwFlags);

    /*** IFolderView2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGroupBy)(
        IFolderView2 *This,
        REFPROPERTYKEY key,
        BOOL fAscending);

    HRESULT (STDMETHODCALLTYPE *GetGroupBy)(
        IFolderView2 *This,
        PROPERTYKEY *pkey,
        BOOL *pfAscending);

    DEPRECATED_HRESULT (STDMETHODCALLTYPE *SetViewProperty)(
        IFolderView2 *This,
        PCUITEMID_CHILD pidl,
        REFPROPERTYKEY propkey,
        REFPROPVARIANT propvar);

    DEPRECATED_HRESULT (STDMETHODCALLTYPE *GetViewProperty)(
        IFolderView2 *This,
        PCUITEMID_CHILD pidl,
        REFPROPERTYKEY propkey,
        PROPVARIANT *ppropvar);

    DEPRECATED_HRESULT (STDMETHODCALLTYPE *SetTileViewProperties)(
        IFolderView2 *This,
        PCUITEMID_CHILD pidl,
        LPCWSTR pszPropList);

    DEPRECATED_HRESULT (STDMETHODCALLTYPE *SetExtendedTileViewProperties)(
        IFolderView2 *This,
        PCUITEMID_CHILD pidl,
        LPCWSTR pszPropList);

    HRESULT (STDMETHODCALLTYPE *SetText)(
        IFolderView2 *This,
        FVTEXTTYPE iType,
        LPCWSTR pwszText);

    HRESULT (STDMETHODCALLTYPE *SetCurrentFolderFlags)(
        IFolderView2 *This,
        DWORD dwMask,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetCurrentFolderFlags)(
        IFolderView2 *This,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetSortColumnCount)(
        IFolderView2 *This,
        int *pcColumns);

    HRESULT (STDMETHODCALLTYPE *SetSortColumns)(
        IFolderView2 *This,
        const SORTCOLUMN *rgSortColumns,
        int cColumns);

    HRESULT (STDMETHODCALLTYPE *GetSortColumns)(
        IFolderView2 *This,
        SORTCOLUMN *rgSortColumns,
        int cColumns);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IFolderView2 *This,
        int iItem,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetVisibleItem)(
        IFolderView2 *This,
        int iStart,
        BOOL fPrevious,
        int *piItem);

    HRESULT (STDMETHODCALLTYPE *GetSelectedItem)(
        IFolderView2 *This,
        int iStart,
        int *piItem);

    HRESULT (STDMETHODCALLTYPE *GetSelection)(
        IFolderView2 *This,
        BOOL fNoneImpliesFolder,
        IShellItemArray **ppsia);

    HRESULT (STDMETHODCALLTYPE *GetSelectionState)(
        IFolderView2 *This,
        PCUITEMID_CHILD pidl,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *InvokeVerbOnSelection)(
        IFolderView2 *This,
        LPCSTR pszVerb);

    HRESULT (STDMETHODCALLTYPE *SetViewModeAndIconSize)(
        IFolderView2 *This,
        FOLDERVIEWMODE uViewMode,
        int iImageSize);

    HRESULT (STDMETHODCALLTYPE *GetViewModeAndIconSize)(
        IFolderView2 *This,
        FOLDERVIEWMODE *puViewMode,
        int *piImageSize);

    HRESULT (STDMETHODCALLTYPE *SetGroupSubsetCount)(
        IFolderView2 *This,
        UINT cVisibleRows);

    HRESULT (STDMETHODCALLTYPE *GetGroupSubsetCount)(
        IFolderView2 *This,
        UINT *pcVisibleRows);

    HRESULT (STDMETHODCALLTYPE *SetRedraw)(
        IFolderView2 *This,
        BOOL fRedrawOn);

    HRESULT (STDMETHODCALLTYPE *IsMoveInSameFolder)(
        IFolderView2 *This);

    HRESULT (STDMETHODCALLTYPE *DoRename)(
        IFolderView2 *This);

    END_INTERFACE
} IFolderView2Vtbl;

interface IFolderView2 {
    CONST_VTBL IFolderView2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderView2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderView2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderView2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderView methods ***/
#define IFolderView2_GetCurrentViewMode(This,pViewMode) \
    ((This)->lpVtbl->GetCurrentViewMode(This,pViewMode))
#define IFolderView2_SetCurrentViewMode(This,ViewMode) \
    ((This)->lpVtbl->SetCurrentViewMode(This,ViewMode))
#define IFolderView2_GetFolder(This,riid,ppv) \
    ((This)->lpVtbl->GetFolder(This,riid,ppv))
#define IFolderView2_Item(This,iItemIndex,ppidl) \
    ((This)->lpVtbl->Item(This,iItemIndex,ppidl))
#define IFolderView2_ItemCount(This,uFlags,pcItems) \
    ((This)->lpVtbl->ItemCount(This,uFlags,pcItems))
#define IFolderView2_Items(This,uFlags,riid,ppv) \
    ((This)->lpVtbl->Items(This,uFlags,riid,ppv))
#define IFolderView2_GetSelectionMarkedItem(This,piItem) \
    ((This)->lpVtbl->GetSelectionMarkedItem(This,piItem))
#define IFolderView2_GetFocusedItem(This,piItem) \
    ((This)->lpVtbl->GetFocusedItem(This,piItem))
#define IFolderView2_GetItemPosition(This,pidl,ppt) \
    ((This)->lpVtbl->GetItemPosition(This,pidl,ppt))
#define IFolderView2_GetSpacing(This,ppt) \
    ((This)->lpVtbl->GetSpacing(This,ppt))
#define IFolderView2_GetDefaultSpacing(This,ppt) \
    ((This)->lpVtbl->GetDefaultSpacing(This,ppt))
#define IFolderView2_GetAutoArrange(This) \
    ((This)->lpVtbl->GetAutoArrange(This))
#define IFolderView2_SelectItem(This,iItem,dwFlags) \
    ((This)->lpVtbl->SelectItem(This,iItem,dwFlags))
#define IFolderView2_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) \
    ((This)->lpVtbl->SelectAndPositionItems(This,cidl,apidl,apt,dwFlags))
/*** IFolderView2 methods ***/
#define IFolderView2_SetGroupBy(This,key,fAscending) \
    ((This)->lpVtbl->SetGroupBy(This,key,fAscending))
#define IFolderView2_GetGroupBy(This,pkey,pfAscending) \
    ((This)->lpVtbl->GetGroupBy(This,pkey,pfAscending))
#define IFolderView2_SetViewProperty(This,pidl,propkey,propvar) \
    ((This)->lpVtbl->SetViewProperty(This,pidl,propkey,propvar))
#define IFolderView2_GetViewProperty(This,pidl,propkey,ppropvar) \
    ((This)->lpVtbl->GetViewProperty(This,pidl,propkey,ppropvar))
#define IFolderView2_SetTileViewProperties(This,pidl,pszPropList) \
    ((This)->lpVtbl->SetTileViewProperties(This,pidl,pszPropList))
#define IFolderView2_SetExtendedTileViewProperties(This,pidl,pszPropList) \
    ((This)->lpVtbl->SetExtendedTileViewProperties(This,pidl,pszPropList))
#define IFolderView2_SetText(This,iType,pwszText) \
    ((This)->lpVtbl->SetText(This,iType,pwszText))
#define IFolderView2_SetCurrentFolderFlags(This,dwMask,dwFlags) \
    ((This)->lpVtbl->SetCurrentFolderFlags(This,dwMask,dwFlags))
#define IFolderView2_GetCurrentFolderFlags(This,pdwFlags) \
    ((This)->lpVtbl->GetCurrentFolderFlags(This,pdwFlags))
#define IFolderView2_GetSortColumnCount(This,pcColumns) \
    ((This)->lpVtbl->GetSortColumnCount(This,pcColumns))
#define IFolderView2_SetSortColumns(This,rgSortColumns,cColumns) \
    ((This)->lpVtbl->SetSortColumns(This,rgSortColumns,cColumns))
#define IFolderView2_GetSortColumns(This,rgSortColumns,cColumns) \
    ((This)->lpVtbl->GetSortColumns(This,rgSortColumns,cColumns))
#define IFolderView2_GetItem(This,iItem,riid,ppv) \
    ((This)->lpVtbl->GetItem(This,iItem,riid,ppv))
#define IFolderView2_GetVisibleItem(This,iStart,fPrevious,piItem) \
    ((This)->lpVtbl->GetVisibleItem(This,iStart,fPrevious,piItem))
#define IFolderView2_GetSelectedItem(This,iStart,piItem) \
    ((This)->lpVtbl->GetSelectedItem(This,iStart,piItem))
#define IFolderView2_GetSelection(This,fNoneImpliesFolder,ppsia) \
    ((This)->lpVtbl->GetSelection(This,fNoneImpliesFolder,ppsia))
#define IFolderView2_GetSelectionState(This,pidl,pdwFlags) \
    ((This)->lpVtbl->GetSelectionState(This,pidl,pdwFlags))
#define IFolderView2_InvokeVerbOnSelection(This,pszVerb) \
    ((This)->lpVtbl->InvokeVerbOnSelection(This,pszVerb))
#define IFolderView2_SetViewModeAndIconSize(This,uViewMode,iImageSize) \
    ((This)->lpVtbl->SetViewModeAndIconSize(This,uViewMode,iImageSize))
#define IFolderView2_GetViewModeAndIconSize(This,puViewMode,piImageSize) \
    ((This)->lpVtbl->GetViewModeAndIconSize(This,puViewMode,piImageSize))
#define IFolderView2_SetGroupSubsetCount(This,cVisibleRows) \
    ((This)->lpVtbl->SetGroupSubsetCount(This,cVisibleRows))
#define IFolderView2_GetGroupSubsetCount(This,pcVisibleRows) \
    ((This)->lpVtbl->GetGroupSubsetCount(This,pcVisibleRows))
#define IFolderView2_SetRedraw(This,fRedrawOn) \
    ((This)->lpVtbl->SetRedraw(This,fRedrawOn))
#define IFolderView2_IsMoveInSameFolder(This) \
    ((This)->lpVtbl->IsMoveInSameFolder(This))
#define IFolderView2_DoRename(This) \
    ((This)->lpVtbl->DoRename(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IFolderView2_RemoteGetGroupBy_Proxy(
    IFolderView2 *This,
    PROPERTYKEY *pkey,
    BOOL *pfAscending);

void __RPC_STUB IFolderView2_RemoteGetGroupBy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IFolderView2_GetGroupBy_Proxy(
    PROPERTYKEY *pkey,
    BOOL *pfAscending);
HRESULT IFolderView2_GetGroupBy_Stub(
    PROPERTYKEY *pkey,
    BOOL *pfAscending);
#endif /* __IFolderView2_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IFolderViewSettings interface
 */
#ifndef __IFolderViewSettings_INTERFACE_DEFINED__
#define __IFolderViewSettings_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderViewSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderViewSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderViewSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderViewSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderViewSettings *This);

    /*** IFolderViewSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *GetColumnPropertyList)(
        IFolderViewSettings *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetGroupByProperty)(
        IFolderViewSettings *This,
        PROPERTYKEY *pkey,
        BOOL *pfGroupAscending);

    HRESULT (STDMETHODCALLTYPE *GetViewMode)(
        IFolderViewSettings *This,
        FOLDERLOGICALVIEWMODE *plvm);

    HRESULT (STDMETHODCALLTYPE *GetIconSize)(
        IFolderViewSettings *This,
        UINT *puIconSize);

    HRESULT (STDMETHODCALLTYPE *GetFolderFlags)(
        IFolderViewSettings *This,
        FOLDERFLAGS *pfolderMask,
        FOLDERFLAGS *pfolderFlags);

    HRESULT (STDMETHODCALLTYPE *GetSortColumns)(
        IFolderViewSettings *This,
        SORTCOLUMN *rgSortColumns,
        UINT cColumnsIn,
        UINT *pcColumnsOut);

    HRESULT (STDMETHODCALLTYPE *GetGroupSubsetCount)(
        IFolderViewSettings *This,
        UINT *pcVisibleRows);

    END_INTERFACE
} IFolderViewSettingsVtbl;

interface IFolderViewSettings {
    CONST_VTBL IFolderViewSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderViewSettings_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderViewSettings_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderViewSettings_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderViewSettings methods ***/
#define IFolderViewSettings_GetColumnPropertyList(This,riid,ppv) \
    ((This)->lpVtbl->GetColumnPropertyList(This,riid,ppv))
#define IFolderViewSettings_GetGroupByProperty(This,pkey,pfGroupAscending) \
    ((This)->lpVtbl->GetGroupByProperty(This,pkey,pfGroupAscending))
#define IFolderViewSettings_GetViewMode(This,plvm) \
    ((This)->lpVtbl->GetViewMode(This,plvm))
#define IFolderViewSettings_GetIconSize(This,puIconSize) \
    ((This)->lpVtbl->GetIconSize(This,puIconSize))
#define IFolderViewSettings_GetFolderFlags(This,pfolderMask,pfolderFlags) \
    ((This)->lpVtbl->GetFolderFlags(This,pfolderMask,pfolderFlags))
#define IFolderViewSettings_GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut) \
    ((This)->lpVtbl->GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut))
#define IFolderViewSettings_GetGroupSubsetCount(This,pcVisibleRows) \
    ((This)->lpVtbl->GetGroupSubsetCount(This,pcVisibleRows))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderViewSettings_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInitializeNetworkFolder interface
 */
#ifndef __IInitializeNetworkFolder_INTERFACE_DEFINED__
#define __IInitializeNetworkFolder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInitializeNetworkFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeNetworkFolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeNetworkFolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeNetworkFolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeNetworkFolder *This);

    /*** IInitializeNetworkFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IInitializeNetworkFolder *This,
        PCIDLIST_ABSOLUTE pidl,
        PCIDLIST_ABSOLUTE pidlTarget,
        UINT uDisplayType,
        LPCWSTR pszResName,
        LPCWSTR pszProvider);

    END_INTERFACE
} IInitializeNetworkFolderVtbl;

interface IInitializeNetworkFolder {
    CONST_VTBL IInitializeNetworkFolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeNetworkFolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeNetworkFolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeNetworkFolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeNetworkFolder methods ***/
#define IInitializeNetworkFolder_Initialize(This,pidl,pidlTarget,uDisplayType,pszResName,pszProvider) \
    ((This)->lpVtbl->Initialize(This,pidl,pidlTarget,uDisplayType,pszResName,pszProvider))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeNetworkFolder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INetworkFolderInternal interface
 */
#ifndef __INetworkFolderInternal_INTERFACE_DEFINED__
#define __INetworkFolderInternal_INTERFACE_DEFINED__

EXTERN_C const IID IID_INetworkFolderInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INetworkFolderInternalVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INetworkFolderInternal *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INetworkFolderInternal *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INetworkFolderInternal *This);

    /*** INetworkFolderInternal methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResourceDisplayType)(
        INetworkFolderInternal *This,
        UINT *displayType);

    HRESULT (STDMETHODCALLTYPE *GetIDList)(
        INetworkFolderInternal *This,
        PIDLIST_ABSOLUTE *idList);

    HRESULT (STDMETHODCALLTYPE *GetProvider)(
        INetworkFolderInternal *This,
        UINT itemIdCount,
        PCUITEMID_CHILD_ARRAY itemIds,
        UINT providerMaxLength,
        LPWSTR provider);

    END_INTERFACE
} INetworkFolderInternalVtbl;

interface INetworkFolderInternal {
    CONST_VTBL INetworkFolderInternalVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INetworkFolderInternal_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INetworkFolderInternal_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INetworkFolderInternal_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INetworkFolderInternal methods ***/
#define INetworkFolderInternal_GetResourceDisplayType(This,displayType) \
    ((This)->lpVtbl->GetResourceDisplayType(This,displayType))
#define INetworkFolderInternal_GetIDList(This,idList) \
    ((This)->lpVtbl->GetIDList(This,idList))
#define INetworkFolderInternal_GetProvider(This,itemIdCount,itemIds,providerMaxLength,provider) \
    ((This)->lpVtbl->GetProvider(This,itemIdCount,itemIds,providerMaxLength,provider))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INetworkFolderInternal_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IPreviewHandlerVisuals interface
 */
#ifndef __IPreviewHandlerVisuals_INTERFACE_DEFINED__
#define __IPreviewHandlerVisuals_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPreviewHandlerVisuals;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPreviewHandlerVisualsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPreviewHandlerVisuals *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPreviewHandlerVisuals *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPreviewHandlerVisuals *This);

    /*** IPreviewHandlerVisuals methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBackgroundColor)(
        IPreviewHandlerVisuals *This,
        COLORREF color);

    HRESULT (STDMETHODCALLTYPE *SetFont)(
        IPreviewHandlerVisuals *This,
        const LOGFONTW *plf);

    HRESULT (STDMETHODCALLTYPE *SetTextColor)(
        IPreviewHandlerVisuals *This,
        COLORREF color);

    END_INTERFACE
} IPreviewHandlerVisualsVtbl;

interface IPreviewHandlerVisuals {
    CONST_VTBL IPreviewHandlerVisualsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPreviewHandlerVisuals_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPreviewHandlerVisuals_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPreviewHandlerVisuals_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPreviewHandlerVisuals methods ***/
#define IPreviewHandlerVisuals_SetBackgroundColor(This,color) \
    ((This)->lpVtbl->SetBackgroundColor(This,color))
#define IPreviewHandlerVisuals_SetFont(This,plf) \
    ((This)->lpVtbl->SetFont(This,plf))
#define IPreviewHandlerVisuals_SetTextColor(This,color) \
    ((This)->lpVtbl->SetTextColor(This,color))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPreviewHandlerVisuals_INTERFACE_DEFINED__ */

#endif  // _WIN32_IE_IE70

#define CDBOSC_SETFOCUS     0x00000000
#define CDBOSC_KILLFOCUS    0x00000001
#define CDBOSC_SELCHANGE    0x00000002
#define CDBOSC_RENAME       0x00000003
#define CDBOSC_STATECHANGE  0x00000004

/*****************************************************************************
 * ICommDlgBrowser interface
 */
#ifndef __ICommDlgBrowser_INTERFACE_DEFINED__
#define __ICommDlgBrowser_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICommDlgBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICommDlgBrowserVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICommDlgBrowser *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICommDlgBrowser *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICommDlgBrowser *This);

    /*** ICommDlgBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *OnDefaultCommand)(
        ICommDlgBrowser *This,
        IShellView *ppshv);

    HRESULT (STDMETHODCALLTYPE *OnStateChange)(
        ICommDlgBrowser *This,
        IShellView *ppshv,
        ULONG uChange);

    HRESULT (STDMETHODCALLTYPE *IncludeObject)(
        ICommDlgBrowser *This,
        IShellView *ppshv,
        PCUITEMID_CHILD pidl);

    END_INTERFACE
} ICommDlgBrowserVtbl;

interface ICommDlgBrowser {
    CONST_VTBL ICommDlgBrowserVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICommDlgBrowser_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICommDlgBrowser_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICommDlgBrowser_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICommDlgBrowser methods ***/
#define ICommDlgBrowser_OnDefaultCommand(This,ppshv) \
    ((This)->lpVtbl->OnDefaultCommand(This,ppshv))
#define ICommDlgBrowser_OnStateChange(This,ppshv,uChange) \
    ((This)->lpVtbl->OnStateChange(This,ppshv,uChange))
#define ICommDlgBrowser_IncludeObject(This,ppshv,pidl) \
    ((This)->lpVtbl->IncludeObject(This,ppshv,pidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICommDlgBrowser_INTERFACE_DEFINED__ */

typedef ICommDlgBrowser *LPCOMMDLGBROWSER;

#define SID_SExplorerBrowserFrame IID_ICommDlgBrowser

#if (NTDDI_VERSION >= NTDDI_WIN2K)

#define CDB2N_CONTEXTMENU_DONE  0x00000001
#define CDB2N_CONTEXTMENU_START 0x00000002

#define CDB2GVF_SHOWALLFILES        0x00000001
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CDB2GVF_ISFILESAVE          0x00000002 // is file save, else file open
#define CDB2GVF_ALLOWPREVIEWPANE    0x00000004
#define CDB2GVF_NOSELECTVERB        0x00000008
#define CDB2GVF_NOINCLUDEITEM       0x00000010
#define CDB2GVF_ISFOLDERPICKER      0x00000020
#define CDB2GVF_ADDSHIELD           0x00000040   // when CDB2GVF_NOSELECTVERB is not specified this flag controls the display of a LUA shield on the Select menu item
#endif  // NTDDI_VISTA

/*****************************************************************************
 * ICommDlgBrowser2 interface
 */
#ifndef __ICommDlgBrowser2_INTERFACE_DEFINED__
#define __ICommDlgBrowser2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICommDlgBrowser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICommDlgBrowser2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICommDlgBrowser2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICommDlgBrowser2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICommDlgBrowser2 *This);

    /*** ICommDlgBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *OnDefaultCommand)(
        ICommDlgBrowser2 *This,
        IShellView *ppshv);

    HRESULT (STDMETHODCALLTYPE *OnStateChange)(
        ICommDlgBrowser2 *This,
        IShellView *ppshv,
        ULONG uChange);

    HRESULT (STDMETHODCALLTYPE *IncludeObject)(
        ICommDlgBrowser2 *This,
        IShellView *ppshv,
        PCUITEMID_CHILD pidl);

    /*** ICommDlgBrowser2 methods ***/
    HRESULT (STDMETHODCALLTYPE *Notify)(
        ICommDlgBrowser2 *This,
        IShellView *ppshv,
        DWORD dwNotifyType);

    HRESULT (STDMETHODCALLTYPE *GetDefaultMenuText)(
        ICommDlgBrowser2 *This,
        IShellView *ppshv,
        LPWSTR pszText,
        int cchMax);

    HRESULT (STDMETHODCALLTYPE *GetViewFlags)(
        ICommDlgBrowser2 *This,
        DWORD *pdwFlags);

    END_INTERFACE
} ICommDlgBrowser2Vtbl;

interface ICommDlgBrowser2 {
    CONST_VTBL ICommDlgBrowser2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICommDlgBrowser2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICommDlgBrowser2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICommDlgBrowser2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICommDlgBrowser methods ***/
#define ICommDlgBrowser2_OnDefaultCommand(This,ppshv) \
    ((This)->lpVtbl->OnDefaultCommand(This,ppshv))
#define ICommDlgBrowser2_OnStateChange(This,ppshv,uChange) \
    ((This)->lpVtbl->OnStateChange(This,ppshv,uChange))
#define ICommDlgBrowser2_IncludeObject(This,ppshv,pidl) \
    ((This)->lpVtbl->IncludeObject(This,ppshv,pidl))
/*** ICommDlgBrowser2 methods ***/
#define ICommDlgBrowser2_Notify(This,ppshv,dwNotifyType) \
    ((This)->lpVtbl->Notify(This,ppshv,dwNotifyType))
#define ICommDlgBrowser2_GetDefaultMenuText(This,ppshv,pszText,cchMax) \
    ((This)->lpVtbl->GetDefaultMenuText(This,ppshv,pszText,cchMax))
#define ICommDlgBrowser2_GetViewFlags(This,pdwFlags) \
    ((This)->lpVtbl->GetViewFlags(This,pdwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICommDlgBrowser2_INTERFACE_DEFINED__ */

typedef ICommDlgBrowser2 *LPCOMMDLGBROWSER2;

#endif  // NTDDI_WIN2K

#if (_WIN32_IE >= _WIN32_IE_IE70)

typedef enum CM_MASK {
    CM_MASK_WIDTH = 0x1,
    CM_MASK_DEFAULTWIDTH = 0x2,
    CM_MASK_IDEALWIDTH = 0x4,
    CM_MASK_NAME = 0x8,
    CM_MASK_STATE = 0x10
} CM_MASK;

typedef enum CM_STATE {
    CM_STATE_NONE = 0x0,
    CM_STATE_VISIBLE = 0x1,
    CM_STATE_FIXEDWIDTH = 0x2,
    CM_STATE_NOSORTBYFOLDERNESS = 0x4,
    CM_STATE_ALWAYSVISIBLE = 0x8
} CM_STATE;

typedef enum CM_ENUM_FLAGS {
    CM_ENUM_ALL = 0x1,
    CM_ENUM_VISIBLE = 0x2
} CM_ENUM_FLAGS;

typedef enum CM_SET_WIDTH_VALUE {
    CM_WIDTH_USEDEFAULT = -1,
    CM_WIDTH_AUTOSIZE = -2
} CM_SET_WIDTH_VALUE;

typedef struct CM_COLUMNINFO {
    DWORD cbSize;
    DWORD dwMask;
    DWORD dwState;
    UINT uWidth;
    UINT uDefaultWidth;
    UINT uIdealWidth;
    WCHAR wszName[ 80 ];
} CM_COLUMNINFO;

/*****************************************************************************
 * IColumnManager interface
 */
#ifndef __IColumnManager_INTERFACE_DEFINED__
#define __IColumnManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IColumnManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IColumnManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IColumnManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IColumnManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IColumnManager *This);

    /*** IColumnManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetColumnInfo)(
        IColumnManager *This,
        REFPROPERTYKEY propkey,
        const CM_COLUMNINFO *pcmci);

    HRESULT (STDMETHODCALLTYPE *GetColumnInfo)(
        IColumnManager *This,
        REFPROPERTYKEY propkey,
        CM_COLUMNINFO *pcmci);

    HRESULT (STDMETHODCALLTYPE *GetColumnCount)(
        IColumnManager *This,
        CM_ENUM_FLAGS dwFlags,
        UINT *puCount);

    HRESULT (STDMETHODCALLTYPE *GetColumns)(
        IColumnManager *This,
        CM_ENUM_FLAGS dwFlags,
        PROPERTYKEY *rgkeyOrder,
        UINT cColumns);

    HRESULT (STDMETHODCALLTYPE *SetColumns)(
        IColumnManager *This,
        const PROPERTYKEY *rgkeyOrder,
        UINT cVisible);

    END_INTERFACE
} IColumnManagerVtbl;

interface IColumnManager {
    CONST_VTBL IColumnManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IColumnManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IColumnManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IColumnManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IColumnManager methods ***/
#define IColumnManager_SetColumnInfo(This,propkey,pcmci) \
    ((This)->lpVtbl->SetColumnInfo(This,propkey,pcmci))
#define IColumnManager_GetColumnInfo(This,propkey,pcmci) \
    ((This)->lpVtbl->GetColumnInfo(This,propkey,pcmci))
#define IColumnManager_GetColumnCount(This,dwFlags,puCount) \
    ((This)->lpVtbl->GetColumnCount(This,dwFlags,puCount))
#define IColumnManager_GetColumns(This,dwFlags,rgkeyOrder,cColumns) \
    ((This)->lpVtbl->GetColumns(This,dwFlags,rgkeyOrder,cColumns))
#define IColumnManager_SetColumns(This,rgkeyOrder,cVisible) \
    ((This)->lpVtbl->SetColumns(This,rgkeyOrder,cVisible))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IColumnManager_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IFolderFilterSite interface
 */
#ifndef __IFolderFilterSite_INTERFACE_DEFINED__
#define __IFolderFilterSite_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderFilterSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderFilterSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderFilterSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderFilterSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderFilterSite *This);

    /*** IFolderFilterSite methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFilter)(
        IFolderFilterSite *This,
        IUnknown *punk);

    END_INTERFACE
} IFolderFilterSiteVtbl;

interface IFolderFilterSite {
    CONST_VTBL IFolderFilterSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderFilterSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderFilterSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderFilterSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderFilterSite methods ***/
#define IFolderFilterSite_SetFilter(This,punk) \
    ((This)->lpVtbl->SetFilter(This,punk))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderFilterSite_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFolderFilter interface
 */
#ifndef __IFolderFilter_INTERFACE_DEFINED__
#define __IFolderFilter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFolderFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFolderFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderFilter *This);

    /*** IFolderFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *ShouldShow)(
        IFolderFilter *This,
        IShellFolder *psf,
        PCIDLIST_ABSOLUTE pidlFolder,
        PCUITEMID_CHILD pidlItem);

    HRESULT (STDMETHODCALLTYPE *GetEnumFlags)(
        IFolderFilter *This,
        IShellFolder *psf,
        PCIDLIST_ABSOLUTE pidlFolder,
        HWND *phwnd,
        DWORD *pgrfFlags);

    END_INTERFACE
} IFolderFilterVtbl;

interface IFolderFilter {
    CONST_VTBL IFolderFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderFilter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFolderFilter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFolderFilter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFolderFilter methods ***/
#define IFolderFilter_ShouldShow(This,psf,pidlFolder,pidlItem) \
    ((This)->lpVtbl->ShouldShow(This,psf,pidlFolder,pidlItem))
#define IFolderFilter_GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags) \
    ((This)->lpVtbl->GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFolderFilter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInputObjectSite interface
 */
#ifndef __IInputObjectSite_INTERFACE_DEFINED__
#define __IInputObjectSite_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInputObjectSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInputObjectSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInputObjectSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInputObjectSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInputObjectSite *This);

    /*** IInputObjectSite methods ***/
    HRESULT (STDMETHODCALLTYPE *OnFocusChangeIS)(
        IInputObjectSite *This,
        IUnknown *punkObj,
        BOOL fSetFocus);

    END_INTERFACE
} IInputObjectSiteVtbl;

interface IInputObjectSite {
    CONST_VTBL IInputObjectSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInputObjectSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInputObjectSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInputObjectSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInputObjectSite methods ***/
#define IInputObjectSite_OnFocusChangeIS(This,punkObj,fSetFocus) \
    ((This)->lpVtbl->OnFocusChangeIS(This,punkObj,fSetFocus))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInputObjectSite_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInputObject interface
 */
#ifndef __IInputObject_INTERFACE_DEFINED__
#define __IInputObject_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInputObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInputObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInputObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInputObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInputObject *This);

    /*** IInputObject methods ***/
    HRESULT (STDMETHODCALLTYPE *UIActivateIO)(
        IInputObject *This,
        BOOL fActivate,
        MSG *pMsg);

    HRESULT (STDMETHODCALLTYPE *HasFocusIO)(
        IInputObject *This);

    HRESULT (STDMETHODCALLTYPE *TranslateAcceleratorIO)(
        IInputObject *This,
        MSG *pMsg);

    END_INTERFACE
} IInputObjectVtbl;

interface IInputObject {
    CONST_VTBL IInputObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInputObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInputObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInputObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInputObject methods ***/
#define IInputObject_UIActivateIO(This,fActivate,pMsg) \
    ((This)->lpVtbl->UIActivateIO(This,fActivate,pMsg))
#define IInputObject_HasFocusIO(This) \
    ((This)->lpVtbl->HasFocusIO(This))
#define IInputObject_TranslateAcceleratorIO(This,pMsg) \
    ((This)->lpVtbl->TranslateAcceleratorIO(This,pMsg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInputObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInputObject2 interface
 */
#ifndef __IInputObject2_INTERFACE_DEFINED__
#define __IInputObject2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInputObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInputObject2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInputObject2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInputObject2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInputObject2 *This);

    /*** IInputObject methods ***/
    HRESULT (STDMETHODCALLTYPE *UIActivateIO)(
        IInputObject2 *This,
        BOOL fActivate,
        MSG *pMsg);

    HRESULT (STDMETHODCALLTYPE *HasFocusIO)(
        IInputObject2 *This);

    HRESULT (STDMETHODCALLTYPE *TranslateAcceleratorIO)(
        IInputObject2 *This,
        MSG *pMsg);

    /*** IInputObject2 methods ***/
    HRESULT (STDMETHODCALLTYPE *TranslateAcceleratorGlobal)(
        IInputObject2 *This,
        MSG *pMsg);

    END_INTERFACE
} IInputObject2Vtbl;

interface IInputObject2 {
    CONST_VTBL IInputObject2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInputObject2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInputObject2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInputObject2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInputObject methods ***/
#define IInputObject2_UIActivateIO(This,fActivate,pMsg) \
    ((This)->lpVtbl->UIActivateIO(This,fActivate,pMsg))
#define IInputObject2_HasFocusIO(This) \
    ((This)->lpVtbl->HasFocusIO(This))
#define IInputObject2_TranslateAcceleratorIO(This,pMsg) \
    ((This)->lpVtbl->TranslateAcceleratorIO(This,pMsg))
/*** IInputObject2 methods ***/
#define IInputObject2_TranslateAcceleratorGlobal(This,pMsg) \
    ((This)->lpVtbl->TranslateAcceleratorGlobal(This,pMsg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInputObject2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellIcon interface
 */
#ifndef __IShellIcon_INTERFACE_DEFINED__
#define __IShellIcon_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellIconVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellIcon *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellIcon *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellIcon *This);

    /*** IShellIcon methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIconOf)(
        IShellIcon *This,
        PCUITEMID_CHILD pidl,
        UINT flags,
        int *pIconIndex);

    END_INTERFACE
} IShellIconVtbl;

interface IShellIcon {
    CONST_VTBL IShellIconVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellIcon_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellIcon_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellIcon_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellIcon methods ***/
#define IShellIcon_GetIconOf(This,pidl,flags,pIconIndex) \
    ((This)->lpVtbl->GetIconOf(This,pidl,flags,pIconIndex))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellIcon_INTERFACE_DEFINED__ */

#define SBSP_DEFBROWSER         0x0000
#define SBSP_SAMEBROWSER        0x0001
#define SBSP_NEWBROWSER         0x0002

#define SBSP_DEFMODE            0x0000
#define SBSP_OPENMODE           0x0010
#define SBSP_EXPLOREMODE        0x0020
#define SBSP_HELPMODE           0x0040
#define SBSP_NOTRANSFERHIST     0x0080

#define SBSP_ABSOLUTE           0x0000
#define SBSP_RELATIVE           0x1000
#define SBSP_PARENT             0x2000
#define SBSP_NAVIGATEBACK       0x4000
#define SBSP_NAVIGATEFORWARD    0x8000

#define SBSP_ALLOW_AUTONAVIGATE   0x00010000

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SBSP_KEEPSAMETEMPLATE     0x00020000
#define SBSP_KEEPWORDWHEELTEXT    0x00040000
#define SBSP_ACTIVATE_NOFOCUS     0x00080000
#define SBSP_CREATENOHISTORY      0x00100000
#define SBSP_PLAYNOSOUND          0x00200000
#endif  // (NTDDI_VERSION >= NTDDI_VISTA)

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_CALLERUNTRUSTED      0x00800000
#define SBSP_TRUSTFIRSTDOWNLOAD   0x01000000
#define SBSP_UNTRUSTEDFORDOWNLOAD 0x02000000
#endif  // _WIN32_IE_IE60SP2
#define SBSP_NOAUTOSELECT         0x04000000
#define SBSP_WRITENOHISTORY       0x08000000
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_TRUSTEDFORACTIVEX    0x10000000
#endif  // _WIN32_IE_IE60SP2
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SBSP_FEEDNAVIGATION       0x20000000
#endif  // _WIN32_IE_IE70

#define SBSP_REDIRECT                     0x40000000
#define SBSP_INITIATEDBYHLINKFRAME        0x80000000

#define FCW_STATUS         0x0001
#define FCW_TOOLBAR        0x0002
#define FCW_TREE           0x0003
#define FCW_INTERNETBAR    0x0006
#define FCW_PROGRESS       0x0008

#if (_WIN32_IE >= 0x0700)
#endif

#define FCT_MERGE       0x0001
#define FCT_CONFIGABLE  0x0002
#define FCT_ADDTOEND    0x0004

#ifdef _NEVER_
typedef LPARAM LPTBBUTTONSB;
#else //!_NEVER_
#include <commctrl.h>
typedef LPTBBUTTON LPTBBUTTONSB;
#endif //_NEVER_

/*****************************************************************************
 * IShellBrowser interface
 */
#ifndef __IShellBrowser_INTERFACE_DEFINED__
#define __IShellBrowser_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellBrowserVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellBrowser *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellBrowser *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellBrowser *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IShellBrowser *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IShellBrowser *This,
        BOOL fEnterMode);

    /*** IShellBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *InsertMenusSB)(
        IShellBrowser *This,
        HMENU hmenuShared,
        LPOLEMENUGROUPWIDTHS lpMenuWidths);

    HRESULT (STDMETHODCALLTYPE *SetMenuSB)(
        IShellBrowser *This,
        HMENU hmenuShared,
        HOLEMENU holemenuRes,
        HWND hwndActiveObject);

    HRESULT (STDMETHODCALLTYPE *RemoveMenusSB)(
        IShellBrowser *This,
        HMENU hmenuShared);

    HRESULT (STDMETHODCALLTYPE *SetStatusTextSB)(
        IShellBrowser *This,
        LPCWSTR pszStatusText);

    HRESULT (STDMETHODCALLTYPE *EnableModelessSB)(
        IShellBrowser *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *TranslateAcceleratorSB)(
        IShellBrowser *This,
        MSG *pmsg,
        WORD wID);

    HRESULT (STDMETHODCALLTYPE *BrowseObject)(
        IShellBrowser *This,
        PCUIDLIST_RELATIVE pidl,
        UINT wFlags);

    HRESULT (STDMETHODCALLTYPE *GetViewStateStream)(
        IShellBrowser *This,
        DWORD grfMode,
        IStream **ppStrm);

    HRESULT (STDMETHODCALLTYPE *GetControlWindow)(
        IShellBrowser *This,
        UINT id,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *SendControlMsg)(
        IShellBrowser *This,
        UINT id,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam,
        LRESULT *pret);

    HRESULT (STDMETHODCALLTYPE *QueryActiveShellView)(
        IShellBrowser *This,
        IShellView **ppshv);

    HRESULT (STDMETHODCALLTYPE *OnViewWindowActive)(
        IShellBrowser *This,
        IShellView *pshv);

    HRESULT (STDMETHODCALLTYPE *SetToolbarItems)(
        IShellBrowser *This,
        LPTBBUTTONSB lpButtons,
        UINT nButtons,
        UINT uFlags);

    END_INTERFACE
} IShellBrowserVtbl;

interface IShellBrowser {
    CONST_VTBL IShellBrowserVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellBrowser_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellBrowser_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellBrowser_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IShellBrowser_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IShellBrowser_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IShellBrowser methods ***/
#define IShellBrowser_InsertMenusSB(This,hmenuShared,lpMenuWidths) \
    ((This)->lpVtbl->InsertMenusSB(This,hmenuShared,lpMenuWidths))
#define IShellBrowser_SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject) \
    ((This)->lpVtbl->SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject))
#define IShellBrowser_RemoveMenusSB(This,hmenuShared) \
    ((This)->lpVtbl->RemoveMenusSB(This,hmenuShared))
#define IShellBrowser_SetStatusTextSB(This,pszStatusText) \
    ((This)->lpVtbl->SetStatusTextSB(This,pszStatusText))
#define IShellBrowser_EnableModelessSB(This,fEnable) \
    ((This)->lpVtbl->EnableModelessSB(This,fEnable))
#define IShellBrowser_TranslateAcceleratorSB(This,pmsg,wID) \
    ((This)->lpVtbl->TranslateAcceleratorSB(This,pmsg,wID))
#define IShellBrowser_BrowseObject(This,pidl,wFlags) \
    ((This)->lpVtbl->BrowseObject(This,pidl,wFlags))
#define IShellBrowser_GetViewStateStream(This,grfMode,ppStrm) \
    ((This)->lpVtbl->GetViewStateStream(This,grfMode,ppStrm))
#define IShellBrowser_GetControlWindow(This,id,phwnd) \
    ((This)->lpVtbl->GetControlWindow(This,id,phwnd))
#define IShellBrowser_SendControlMsg(This,id,uMsg,wParam,lParam,pret) \
    ((This)->lpVtbl->SendControlMsg(This,id,uMsg,wParam,lParam,pret))
#define IShellBrowser_QueryActiveShellView(This,ppshv) \
    ((This)->lpVtbl->QueryActiveShellView(This,ppshv))
#define IShellBrowser_OnViewWindowActive(This,pshv) \
    ((This)->lpVtbl->OnViewWindowActive(This,pshv))
#define IShellBrowser_SetToolbarItems(This,lpButtons,nButtons,uFlags) \
    ((This)->lpVtbl->SetToolbarItems(This,lpButtons,nButtons,uFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellBrowser_INTERFACE_DEFINED__ */

typedef IShellBrowser *LPSHELLBROWSER;

/*****************************************************************************
 * IProfferService interface
 */
#ifndef __IProfferService_INTERFACE_DEFINED__
#define __IProfferService_INTERFACE_DEFINED__

EXTERN_C const IID IID_IProfferService;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IProfferServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProfferService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProfferService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProfferService *This);

    /*** IProfferService methods ***/
    HRESULT (STDMETHODCALLTYPE *ProfferService)(
        IProfferService *This,
        REFGUID serviceId,
        IServiceProvider *serviceProvider,
        DWORD *cookie);

    HRESULT (STDMETHODCALLTYPE *RevokeService)(
        IProfferService *This,
        DWORD cookie);

    END_INTERFACE
} IProfferServiceVtbl;

interface IProfferService {
    CONST_VTBL IProfferServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IProfferService_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IProfferService_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IProfferService_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IProfferService methods ***/
#define IProfferService_ProfferService(This,serviceId,serviceProvider,cookie) \
    ((This)->lpVtbl->ProfferService(This,serviceId,serviceProvider,cookie))
#define IProfferService_RevokeService(This,cookie) \
    ((This)->lpVtbl->RevokeService(This,cookie))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IProfferService_INTERFACE_DEFINED__ */

#define SID_SProfferService IID_IProfferService    // nearest service that you can proffer to

/*****************************************************************************
 * IGetServiceIds interface
 */
#ifndef __IGetServiceIds_INTERFACE_DEFINED__
#define __IGetServiceIds_INTERFACE_DEFINED__

EXTERN_C const IID IID_IGetServiceIds;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IGetServiceIdsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGetServiceIds *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGetServiceIds *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGetServiceIds *This);

    /*** IGetServiceIds methods ***/
    HRESULT (STDMETHODCALLTYPE *GetServiceIds)(
        IGetServiceIds *This,
        ULONG *serviceIdCount,
        GUID **serviceIds);

    END_INTERFACE
} IGetServiceIdsVtbl;

interface IGetServiceIds {
    CONST_VTBL IGetServiceIdsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IGetServiceIds_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IGetServiceIds_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IGetServiceIds_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IGetServiceIds methods ***/
#define IGetServiceIds_GetServiceIds(This,serviceIdCount,serviceIds) \
    ((This)->lpVtbl->GetServiceIds(This,serviceIdCount,serviceIds))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IGetServiceIds_INTERFACE_DEFINED__ */

#define STR_DONT_RESOLVE_LINK      L"Don't Resolve Link"

#define STR_GET_ASYNC_HANDLER L"GetAsyncHandler"

/*****************************************************************************
 * IShellItem interface
 */
#ifndef __IShellItem_INTERFACE_DEFINED__
#define __IShellItem_INTERFACE_DEFINED__

typedef enum _SIGDN {
    SIGDN_NORMALDISPLAY = 0x0,
    SIGDN_PARENTRELATIVEPARSING = (int)0x80018001,
    SIGDN_DESKTOPABSOLUTEPARSING = (int)0x80028000,
    SIGDN_PARENTRELATIVEEDITING = (int)0x80031001,
    SIGDN_DESKTOPABSOLUTEEDITING = (int)0x8004c000,
    SIGDN_FILESYSPATH = (int)0x80058000,
    SIGDN_URL = (int)0x80068000,
    SIGDN_PARENTRELATIVEFORADDRESSBAR = (int)0x8007c001,
    SIGDN_PARENTRELATIVE = (int)0x80080001,
    SIGDN_PARENTRELATIVEFORUI = (int)0x80094001
} SIGDN;

enum _SICHINTF {
    SICHINT_DISPLAY = 0x0,
    SICHINT_ALLFIELDS = (int)0x80000000,
    SICHINT_CANONICAL = 0x10000000,
    SICHINT_TEST_FILESYSPATH_IF_NOT_EQUAL = 0x20000000
};
typedef DWORD SICHINTF;

EXTERN_C const IID IID_IShellItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellItem *This);

    /*** IShellItem methods ***/
    HRESULT (STDMETHODCALLTYPE *BindToHandler)(
        IShellItem *This,
        IBindCtx *pbc,
        REFGUID bhid,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IShellItem *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IShellItem *This,
        SIGDN sigdnName,
        LPWSTR *ppszName);

    HRESULT (STDMETHODCALLTYPE *GetAttributes)(
        IShellItem *This,
        SFGAOF sfgaoMask,
        SFGAOF *psfgaoAttribs);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IShellItem *This,
        IShellItem *psi,
        SICHINTF hint,
        int *piOrder);

    END_INTERFACE
} IShellItemVtbl;

interface IShellItem {
    CONST_VTBL IShellItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellItem methods ***/
#define IShellItem_BindToHandler(This,pbc,bhid,riid,ppv) \
    ((This)->lpVtbl->BindToHandler(This,pbc,bhid,riid,ppv))
#define IShellItem_GetParent(This,ppsi) \
    ((This)->lpVtbl->GetParent(This,ppsi))
#define IShellItem_GetDisplayName(This,sigdnName,ppszName) \
    ((This)->lpVtbl->GetDisplayName(This,sigdnName,ppszName))
#define IShellItem_GetAttributes(This,sfgaoMask,psfgaoAttribs) \
    ((This)->lpVtbl->GetAttributes(This,sfgaoMask,psfgaoAttribs))
#define IShellItem_Compare(This,psi,hint,piOrder) \
    ((This)->lpVtbl->Compare(This,psi,hint,piOrder))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellItem_INTERFACE_DEFINED__ */

SHSTDAPI_(PIDLIST_ABSOLUTE) SHSimpleIDListFromPath( PCWSTR pszPath);

#if (_WIN32_IE >= _WIN32_IE_IE70)
// CLSID_ShellItem create and init helper APIs. produce IShellItem derived interfaces from these different expressions of an item
SHSTDAPI SHCreateItemFromIDList( PCIDLIST_ABSOLUTE pidl,  REFIID riid,  void **ppv);
SHSTDAPI SHCreateItemFromParsingName( PCWSTR pszPath,  IBindCtx *pbc,  REFIID riid,  void **ppv);
SHSTDAPI SHCreateItemWithParent( PCIDLIST_ABSOLUTE pidlParent,  IShellFolder *psfParent,  PCUITEMID_CHILD pidl,  REFIID riid,  void **ppvItem);
SHSTDAPI SHCreateItemFromRelativeName( IShellItem *psiParent,  PCWSTR pszName,  IBindCtx* pbc,  REFIID riid,  void **ppv);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHCreateItemInKnownFolder( REFKNOWNFOLDERID kfid, DWORD dwKFFlags,  PCWSTR pszItem,  REFIID riid,  void **ppv);
// get the IDList expression from an object, works with objects that support IPersistIDlist or IPersistIDlist like CLSID_ShellItem and most shell folders
SHSTDAPI SHGetIDListFromObject( IUnknown *punk,  PIDLIST_ABSOLUTE *ppidl);
// similar to SHGetIDListFromObject but returns an IShellItem-based object (preferred for performance if the IDList is already bound to a folder)
SHSTDAPI SHGetItemFromObject( IUnknown *punk,  REFIID riid,  void **ppv);

// these APIs return object that support IPropertyStore or related interfaces
SHSTDAPI SHGetPropertyStoreFromIDList( PCIDLIST_ABSOLUTE pidl,  GETPROPERTYSTOREFLAGS flags,  REFIID riid,  void **ppv);
SHSTDAPI SHGetPropertyStoreFromParsingName( PCWSTR pszPath,  IBindCtx *pbc,  GETPROPERTYSTOREFLAGS flags,  REFIID riid,  void **ppv);
SHSTDAPI SHGetNameFromIDList( PCIDLIST_ABSOLUTE pidl,  SIGDN sigdnName,  PWSTR *ppszName);

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#if (NTDDI_VERSION >= NTDDI_WIN7)

typedef enum DATAOBJ_GET_ITEM_FLAGS {
    DOGIF_DEFAULT = 0x0,
    DOGIF_TRAVERSE_LINK = 0x1,
    DOGIF_NO_HDROP = 0x2,
    DOGIF_NO_URL = 0x4,
    DOGIF_ONLY_IF_ONE = 0x8
} DATAOBJ_GET_ITEM_FLAGS;

STDAPI SHGetItemFromDataObject( IDataObject *pdtobj,  DATAOBJ_GET_ITEM_FLAGS dwFlags,  REFIID riid,  void **ppv);
#endif // (NTDDI_VERSION >= NTDDI_WIN7)

#define STR_GPS_HANDLERPROPERTIESONLY      L"GPS_HANDLERPROPERTIESONLY"
#define STR_GPS_FASTPROPERTIESONLY         L"GPS_FASTPROPERTIESONLY"
#define STR_GPS_OPENSLOWITEM               L"GPS_OPENSLOWITEM"
#define STR_GPS_DELAYCREATION              L"GPS_DELAYCREATION"
#define STR_GPS_BESTEFFORT                 L"GPS_BESTEFFORT"
#define STR_GPS_NO_OPLOCK                  L"GPS_NO_OPLOCK"

/*****************************************************************************
 * IShellItem2 interface
 */
#ifndef __IShellItem2_INTERFACE_DEFINED__
#define __IShellItem2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellItem2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellItem2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellItem2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellItem2 *This);

    /*** IShellItem methods ***/
    HRESULT (STDMETHODCALLTYPE *BindToHandler)(
        IShellItem2 *This,
        IBindCtx *pbc,
        REFGUID bhid,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IShellItem2 *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IShellItem2 *This,
        SIGDN sigdnName,
        LPWSTR *ppszName);

    HRESULT (STDMETHODCALLTYPE *GetAttributes)(
        IShellItem2 *This,
        SFGAOF sfgaoMask,
        SFGAOF *psfgaoAttribs);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IShellItem2 *This,
        IShellItem *psi,
        SICHINTF hint,
        int *piOrder);

    /*** IShellItem2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPropertyStore)(
        IShellItem2 *This,
        GETPROPERTYSTOREFLAGS flags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetPropertyStoreWithCreateObject)(
        IShellItem2 *This,
        GETPROPERTYSTOREFLAGS flags,
        IUnknown *punkCreateObject,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetPropertyStoreForKeys)(
        IShellItem2 *This,
        const PROPERTYKEY *rgKeys,
        UINT cKeys,
        GETPROPERTYSTOREFLAGS flags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetPropertyDescriptionList)(
        IShellItem2 *This,
        REFPROPERTYKEY keyType,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IShellItem2 *This,
        IBindCtx *pbc);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        PROPVARIANT *ppropvar);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetFileTime)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        FILETIME *pft);

    HRESULT (STDMETHODCALLTYPE *GetInt32)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        LPWSTR *ppsz);

    HRESULT (STDMETHODCALLTYPE *GetUInt32)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        ULONG *pui);

    HRESULT (STDMETHODCALLTYPE *GetUInt64)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        ULONGLONG *pull);

    HRESULT (STDMETHODCALLTYPE *GetBool)(
        IShellItem2 *This,
        REFPROPERTYKEY key,
        BOOL *pf);

    END_INTERFACE
} IShellItem2Vtbl;

interface IShellItem2 {
    CONST_VTBL IShellItem2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellItem2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellItem2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellItem2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellItem methods ***/
#define IShellItem2_BindToHandler(This,pbc,bhid,riid,ppv) \
    ((This)->lpVtbl->BindToHandler(This,pbc,bhid,riid,ppv))
#define IShellItem2_GetParent(This,ppsi) \
    ((This)->lpVtbl->GetParent(This,ppsi))
#define IShellItem2_GetDisplayName(This,sigdnName,ppszName) \
    ((This)->lpVtbl->GetDisplayName(This,sigdnName,ppszName))
#define IShellItem2_GetAttributes(This,sfgaoMask,psfgaoAttribs) \
    ((This)->lpVtbl->GetAttributes(This,sfgaoMask,psfgaoAttribs))
#define IShellItem2_Compare(This,psi,hint,piOrder) \
    ((This)->lpVtbl->Compare(This,psi,hint,piOrder))
/*** IShellItem2 methods ***/
#define IShellItem2_GetPropertyStore(This,flags,riid,ppv) \
    ((This)->lpVtbl->GetPropertyStore(This,flags,riid,ppv))
#define IShellItem2_GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv) \
    ((This)->lpVtbl->GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv))
#define IShellItem2_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) \
    ((This)->lpVtbl->GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv))
#define IShellItem2_GetPropertyDescriptionList(This,keyType,riid,ppv) \
    ((This)->lpVtbl->GetPropertyDescriptionList(This,keyType,riid,ppv))
#define IShellItem2_Update(This,pbc) \
    ((This)->lpVtbl->Update(This,pbc))
#define IShellItem2_GetProperty(This,key,ppropvar) \
    ((This)->lpVtbl->GetProperty(This,key,ppropvar))
#define IShellItem2_GetCLSID(This,key,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,key,pclsid))
#define IShellItem2_GetFileTime(This,key,pft) \
    ((This)->lpVtbl->GetFileTime(This,key,pft))
#define IShellItem2_GetInt32(This,key,pi) \
    ((This)->lpVtbl->GetInt32(This,key,pi))
#define IShellItem2_GetString(This,key,ppsz) \
    ((This)->lpVtbl->GetString(This,key,ppsz))
#define IShellItem2_GetUInt32(This,key,pui) \
    ((This)->lpVtbl->GetUInt32(This,key,pui))
#define IShellItem2_GetUInt64(This,key,pull) \
    ((This)->lpVtbl->GetUInt64(This,key,pull))
#define IShellItem2_GetBool(This,key,pf) \
    ((This)->lpVtbl->GetBool(This,key,pf))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellItem2_INTERFACE_DEFINED__ */

enum _SIIGBF {
    SIIGBF_RESIZETOFIT = 0x0,
    SIIGBF_BIGGERSIZEOK = 0x1,
    SIIGBF_MEMORYONLY = 0x2,
    SIIGBF_ICONONLY = 0x4,
    SIIGBF_THUMBNAILONLY = 0x8,
    SIIGBF_INCACHEONLY = 0x10,
    SIIGBF_CROPTOSQUARE = 0x20,
    SIIGBF_WIDETHUMBNAILS = 0x40,
    SIIGBF_ICONBACKGROUND = 0x80,
    SIIGBF_SCALEUP = 0x100
};
typedef int SIIGBF;

/*****************************************************************************
 * IShellItemImageFactory interface
 */
#ifndef __IShellItemImageFactory_INTERFACE_DEFINED__
#define __IShellItemImageFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellItemImageFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellItemImageFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellItemImageFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellItemImageFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellItemImageFactory *This);

    /*** IShellItemImageFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *GetImage)(
        IShellItemImageFactory *This,
        SIZE size,
        SIIGBF flags,
        HBITMAP *phbm);

    END_INTERFACE
} IShellItemImageFactoryVtbl;

interface IShellItemImageFactory {
    CONST_VTBL IShellItemImageFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellItemImageFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellItemImageFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellItemImageFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellItemImageFactory methods ***/
#define IShellItemImageFactory_GetImage(This,size,flags,phbm) \
    ((This)->lpVtbl->GetImage(This,size,flags,phbm))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellItemImageFactory_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP)

/*****************************************************************************
 * IEnumShellItems interface
 */
#ifndef __IEnumShellItems_INTERFACE_DEFINED__
#define __IEnumShellItems_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumShellItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumShellItemsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumShellItems *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumShellItems *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumShellItems *This);

    /*** IEnumShellItems methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumShellItems *This,
        ULONG celt,
        IShellItem **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumShellItems *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumShellItems *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumShellItems *This,
        IEnumShellItems **ppenum);

    END_INTERFACE
} IEnumShellItemsVtbl;

interface IEnumShellItems {
    CONST_VTBL IEnumShellItemsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumShellItems_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumShellItems_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumShellItems_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumShellItems methods ***/
#define IEnumShellItems_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumShellItems_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumShellItems_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumShellItems_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumShellItems_RemoteNext_Proxy(
    IEnumShellItems *This,
    ULONG celt,
    IShellItem **rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumShellItems_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumShellItems_Next_Proxy(
    ULONG celt,
    IShellItem **rgelt,
    ULONG *pceltFetched);
HRESULT IEnumShellItems_Next_Stub(
    ULONG celt,
    IShellItem **rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumShellItems_INTERFACE_DEFINED__ */

typedef GUID STGTRANSCONFIRMATION;
typedef GUID *LPSTGTRANSCONFIRMATION;

typedef enum STGOP {
    STGOP_MOVE = 1,
    STGOP_COPY = 2,
    STGOP_SYNC = 3,
    STGOP_REMOVE = 5,
    STGOP_RENAME = 6,
    STGOP_APPLYPROPERTIES = 8,
    STGOP_NEW = 10
} STGOP;

#endif  // NTDDI_WINXP

enum _TRANSFER_SOURCE_FLAGS {
    TSF_NORMAL = 0x0,
    TSF_FAIL_EXIST = 0x0,
    TSF_RENAME_EXIST = 0x1,
    TSF_OVERWRITE_EXIST = 0x2,
    TSF_ALLOW_DECRYPTION = 0x4,
    TSF_NO_SECURITY = 0x8,
    TSF_COPY_CREATION_TIME = 0x10,
    TSF_COPY_WRITE_TIME = 0x20,
    TSF_USE_FULL_ACCESS = 0x40,
    TSF_DELETE_RECYCLE_IF_POSSIBLE = 0x80,
    TSF_COPY_HARD_LINK = 0x100,
    TSF_COPY_LOCALIZED_NAME = 0x200,
    TSF_MOVE_AS_COPY_DELETE = 0x400,
    TSF_SUSPEND_SHELLEVENTS = 0x800
};
typedef DWORD TRANSFER_SOURCE_FLAGS;

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * ITransferAdviseSink interface
 */
#ifndef __ITransferAdviseSink_INTERFACE_DEFINED__
#define __ITransferAdviseSink_INTERFACE_DEFINED__

enum _TRANSFER_ADVISE_STATE {
    TS_NONE = 0x0,
    TS_PERFORMING = 0x1,
    TS_PREPARING = 0x2,
    TS_INDETERMINATE = 0x4
};
typedef DWORD TRANSFER_ADVISE_STATE;

EXTERN_C const IID IID_ITransferAdviseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITransferAdviseSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITransferAdviseSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITransferAdviseSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITransferAdviseSink *This);

    /*** ITransferAdviseSink methods ***/
    HRESULT (STDMETHODCALLTYPE *UpdateProgress)(
        ITransferAdviseSink *This,
        ULONGLONG ullSizeCurrent,
        ULONGLONG ullSizeTotal,
        int nFilesCurrent,
        int nFilesTotal,
        int nFoldersCurrent,
        int nFoldersTotal);

    HRESULT (STDMETHODCALLTYPE *UpdateTransferState)(
        ITransferAdviseSink *This,
        TRANSFER_ADVISE_STATE ts);

    HRESULT (STDMETHODCALLTYPE *ConfirmOverwrite)(
        ITransferAdviseSink *This,
        IShellItem *psiSource,
        IShellItem *psiDestParent,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *ConfirmEncryptionLoss)(
        ITransferAdviseSink *This,
        IShellItem *psiSource);

    HRESULT (STDMETHODCALLTYPE *FileFailure)(
        ITransferAdviseSink *This,
        IShellItem *psi,
        LPCWSTR pszItem,
        HRESULT hrError,
        LPWSTR pszRename,
        ULONG cchRename);

    HRESULT (STDMETHODCALLTYPE *SubStreamFailure)(
        ITransferAdviseSink *This,
        IShellItem *psi,
        LPCWSTR pszStreamName,
        HRESULT hrError);

    HRESULT (STDMETHODCALLTYPE *PropertyFailure)(
        ITransferAdviseSink *This,
        IShellItem *psi,
        const PROPERTYKEY *pkey,
        HRESULT hrError);

    END_INTERFACE
} ITransferAdviseSinkVtbl;

interface ITransferAdviseSink {
    CONST_VTBL ITransferAdviseSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITransferAdviseSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITransferAdviseSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITransferAdviseSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITransferAdviseSink methods ***/
#define ITransferAdviseSink_UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal) \
    ((This)->lpVtbl->UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal))
#define ITransferAdviseSink_UpdateTransferState(This,ts) \
    ((This)->lpVtbl->UpdateTransferState(This,ts))
#define ITransferAdviseSink_ConfirmOverwrite(This,psiSource,psiDestParent,pszName) \
    ((This)->lpVtbl->ConfirmOverwrite(This,psiSource,psiDestParent,pszName))
#define ITransferAdviseSink_ConfirmEncryptionLoss(This,psiSource) \
    ((This)->lpVtbl->ConfirmEncryptionLoss(This,psiSource))
#define ITransferAdviseSink_FileFailure(This,psi,pszItem,hrError,pszRename,cchRename) \
    ((This)->lpVtbl->FileFailure(This,psi,pszItem,hrError,pszRename,cchRename))
#define ITransferAdviseSink_SubStreamFailure(This,psi,pszStreamName,hrError) \
    ((This)->lpVtbl->SubStreamFailure(This,psi,pszStreamName,hrError))
#define ITransferAdviseSink_PropertyFailure(This,psi,pkey,hrError) \
    ((This)->lpVtbl->PropertyFailure(This,psi,pkey,hrError))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITransferAdviseSink_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * ITransferSource interface
 */
#ifndef __ITransferSource_INTERFACE_DEFINED__
#define __ITransferSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITransferSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITransferSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITransferSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITransferSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITransferSource *This);

    /*** ITransferSource methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        ITransferSource *This,
        ITransferAdviseSink *psink,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        ITransferSource *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetProperties)(
        ITransferSource *This,
        IPropertyChangeArray *pproparray);

    HRESULT (STDMETHODCALLTYPE *OpenItem)(
        ITransferSource *This,
        IShellItem *psi,
        TRANSFER_SOURCE_FLAGS flags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *MoveItem)(
        ITransferSource *This,
        IShellItem *psi,
        IShellItem *psiParentDst,
        LPCWSTR pszNameDst,
        TRANSFER_SOURCE_FLAGS flags,
        IShellItem **ppsiNew);

    HRESULT (STDMETHODCALLTYPE *RecycleItem)(
        ITransferSource *This,
        IShellItem *psiSource,
        IShellItem *psiParentDest,
        TRANSFER_SOURCE_FLAGS flags,
        IShellItem **ppsiNewDest);

    HRESULT (STDMETHODCALLTYPE *RemoveItem)(
        ITransferSource *This,
        IShellItem *psiSource,
        TRANSFER_SOURCE_FLAGS flags);

    HRESULT (STDMETHODCALLTYPE *RenameItem)(
        ITransferSource *This,
        IShellItem *psiSource,
        LPCWSTR pszNewName,
        TRANSFER_SOURCE_FLAGS flags,
        IShellItem **ppsiNewDest);

    HRESULT (STDMETHODCALLTYPE *LinkItem)(
        ITransferSource *This,
        IShellItem *psiSource,
        IShellItem *psiParentDest,
        LPCWSTR pszNewName,
        TRANSFER_SOURCE_FLAGS flags,
        IShellItem **ppsiNewDest);

    HRESULT (STDMETHODCALLTYPE *ApplyPropertiesToItem)(
        ITransferSource *This,
        IShellItem *psiSource,
        IShellItem **ppsiNew);

    HRESULT (STDMETHODCALLTYPE *GetDefaultDestinationName)(
        ITransferSource *This,
        IShellItem *psiSource,
        IShellItem *psiParentDest,
        LPWSTR *ppszDestinationName);

    HRESULT (STDMETHODCALLTYPE *EnterFolder)(
        ITransferSource *This,
        IShellItem *psiChildFolderDest);

    HRESULT (STDMETHODCALLTYPE *LeaveFolder)(
        ITransferSource *This,
        IShellItem *psiChildFolderDest);

    END_INTERFACE
} ITransferSourceVtbl;

interface ITransferSource {
    CONST_VTBL ITransferSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITransferSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITransferSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITransferSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITransferSource methods ***/
#define ITransferSource_Advise(This,psink,pdwCookie) \
    ((This)->lpVtbl->Advise(This,psink,pdwCookie))
#define ITransferSource_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define ITransferSource_SetProperties(This,pproparray) \
    ((This)->lpVtbl->SetProperties(This,pproparray))
#define ITransferSource_OpenItem(This,psi,flags,riid,ppv) \
    ((This)->lpVtbl->OpenItem(This,psi,flags,riid,ppv))
#define ITransferSource_MoveItem(This,psi,psiParentDst,pszNameDst,flags,ppsiNew) \
    ((This)->lpVtbl->MoveItem(This,psi,psiParentDst,pszNameDst,flags,ppsiNew))
#define ITransferSource_RecycleItem(This,psiSource,psiParentDest,flags,ppsiNewDest) \
    ((This)->lpVtbl->RecycleItem(This,psiSource,psiParentDest,flags,ppsiNewDest))
#define ITransferSource_RemoveItem(This,psiSource,flags) \
    ((This)->lpVtbl->RemoveItem(This,psiSource,flags))
#define ITransferSource_RenameItem(This,psiSource,pszNewName,flags,ppsiNewDest) \
    ((This)->lpVtbl->RenameItem(This,psiSource,pszNewName,flags,ppsiNewDest))
#define ITransferSource_LinkItem(This,psiSource,psiParentDest,pszNewName,flags,ppsiNewDest) \
    ((This)->lpVtbl->LinkItem(This,psiSource,psiParentDest,pszNewName,flags,ppsiNewDest))
#define ITransferSource_ApplyPropertiesToItem(This,psiSource,ppsiNew) \
    ((This)->lpVtbl->ApplyPropertiesToItem(This,psiSource,ppsiNew))
#define ITransferSource_GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName) \
    ((This)->lpVtbl->GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName))
#define ITransferSource_EnterFolder(This,psiChildFolderDest) \
    ((This)->lpVtbl->EnterFolder(This,psiChildFolderDest))
#define ITransferSource_LeaveFolder(This,psiChildFolderDest) \
    ((This)->lpVtbl->LeaveFolder(This,psiChildFolderDest))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITransferSource_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

typedef struct SHELL_ITEM_RESOURCE {
    GUID guidType;
    WCHAR szName[ 260 ];
} SHELL_ITEM_RESOURCE;

/*****************************************************************************
 * IEnumResources interface
 */
#ifndef __IEnumResources_INTERFACE_DEFINED__
#define __IEnumResources_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumResourcesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumResources *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumResources *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumResources *This);

    /*** IEnumResources methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumResources *This,
        ULONG celt,
        SHELL_ITEM_RESOURCE *psir,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumResources *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumResources *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumResources *This,
        IEnumResources **ppenumr);

    END_INTERFACE
} IEnumResourcesVtbl;

interface IEnumResources {
    CONST_VTBL IEnumResourcesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumResources_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumResources_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumResources_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumResources methods ***/
#define IEnumResources_Next(This,celt,psir,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,psir,pceltFetched))
#define IEnumResources_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumResources_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumResources_Clone(This,ppenumr) \
    ((This)->lpVtbl->Clone(This,ppenumr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumResources_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellItemResources interface
 */
#ifndef __IShellItemResources_INTERFACE_DEFINED__
#define __IShellItemResources_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellItemResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellItemResourcesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellItemResources *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellItemResources *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellItemResources *This);

    /*** IShellItemResources methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAttributes)(
        IShellItemResources *This,
        DWORD *pdwAttributes);

    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IShellItemResources *This,
        ULONGLONG *pullSize);

    HRESULT (STDMETHODCALLTYPE *GetTimes)(
        IShellItemResources *This,
        FILETIME *pftCreation,
        FILETIME *pftWrite,
        FILETIME *pftAccess);

    HRESULT (STDMETHODCALLTYPE *SetTimes)(
        IShellItemResources *This,
        const FILETIME *pftCreation,
        const FILETIME *pftWrite,
        const FILETIME *pftAccess);

    HRESULT (STDMETHODCALLTYPE *GetResourceDescription)(
        IShellItemResources *This,
        const SHELL_ITEM_RESOURCE *pcsir,
        LPWSTR *ppszDescription);

    HRESULT (STDMETHODCALLTYPE *EnumResources)(
        IShellItemResources *This,
        IEnumResources **ppenumr);

    HRESULT (STDMETHODCALLTYPE *SupportsResource)(
        IShellItemResources *This,
        const SHELL_ITEM_RESOURCE *pcsir);

    HRESULT (STDMETHODCALLTYPE *OpenResource)(
        IShellItemResources *This,
        const SHELL_ITEM_RESOURCE *pcsir,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *CreateResource)(
        IShellItemResources *This,
        const SHELL_ITEM_RESOURCE *pcsir,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *MarkForDelete)(
        IShellItemResources *This);

    END_INTERFACE
} IShellItemResourcesVtbl;

interface IShellItemResources {
    CONST_VTBL IShellItemResourcesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellItemResources_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellItemResources_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellItemResources_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellItemResources methods ***/
#define IShellItemResources_GetAttributes(This,pdwAttributes) \
    ((This)->lpVtbl->GetAttributes(This,pdwAttributes))
#define IShellItemResources_GetSize(This,pullSize) \
    ((This)->lpVtbl->GetSize(This,pullSize))
#define IShellItemResources_GetTimes(This,pftCreation,pftWrite,pftAccess) \
    ((This)->lpVtbl->GetTimes(This,pftCreation,pftWrite,pftAccess))
#define IShellItemResources_SetTimes(This,pftCreation,pftWrite,pftAccess) \
    ((This)->lpVtbl->SetTimes(This,pftCreation,pftWrite,pftAccess))
#define IShellItemResources_GetResourceDescription(This,pcsir,ppszDescription) \
    ((This)->lpVtbl->GetResourceDescription(This,pcsir,ppszDescription))
#define IShellItemResources_EnumResources(This,ppenumr) \
    ((This)->lpVtbl->EnumResources(This,ppenumr))
#define IShellItemResources_SupportsResource(This,pcsir) \
    ((This)->lpVtbl->SupportsResource(This,pcsir))
#define IShellItemResources_OpenResource(This,pcsir,riid,ppv) \
    ((This)->lpVtbl->OpenResource(This,pcsir,riid,ppv))
#define IShellItemResources_CreateResource(This,pcsir,riid,ppv) \
    ((This)->lpVtbl->CreateResource(This,pcsir,riid,ppv))
#define IShellItemResources_MarkForDelete(This) \
    ((This)->lpVtbl->MarkForDelete(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellItemResources_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITransferDestination interface
 */
#ifndef __ITransferDestination_INTERFACE_DEFINED__
#define __ITransferDestination_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITransferDestination;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITransferDestinationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITransferDestination *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITransferDestination *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITransferDestination *This);

    /*** ITransferDestination methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        ITransferDestination *This,
        ITransferAdviseSink *psink,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        ITransferDestination *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *CreateItem)(
        ITransferDestination *This,
        LPCWSTR pszName,
        DWORD dwAttributes,
        ULONGLONG ullSize,
        TRANSFER_SOURCE_FLAGS flags,
        REFIID riidItem,
        void **ppvItem,
        REFIID riidResources,
        void **ppvResources);

    END_INTERFACE
} ITransferDestinationVtbl;

interface ITransferDestination {
    CONST_VTBL ITransferDestinationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITransferDestination_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITransferDestination_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITransferDestination_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITransferDestination methods ***/
#define ITransferDestination_Advise(This,psink,pdwCookie) \
    ((This)->lpVtbl->Advise(This,psink,pdwCookie))
#define ITransferDestination_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define ITransferDestination_CreateItem(This,pszName,dwAttributes,ullSize,flags,riidItem,ppvItem,riidResources,ppvResources) \
    ((This)->lpVtbl->CreateItem(This,pszName,dwAttributes,ullSize,flags,riidItem,ppvItem,riidResources,ppvResources))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITransferDestination_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IFileOperationProgressSink interface
 */
#ifndef __IFileOperationProgressSink_INTERFACE_DEFINED__
#define __IFileOperationProgressSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileOperationProgressSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileOperationProgressSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileOperationProgressSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileOperationProgressSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileOperationProgressSink *This);

    /*** IFileOperationProgressSink methods ***/
    HRESULT (STDMETHODCALLTYPE *StartOperations)(
        IFileOperationProgressSink *This);

    HRESULT (STDMETHODCALLTYPE *FinishOperations)(
        IFileOperationProgressSink *This,
        HRESULT hrResult);

    HRESULT (STDMETHODCALLTYPE *PreRenameItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        LPCWSTR pszNewName);

    HRESULT (STDMETHODCALLTYPE *PostRenameItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        LPCWSTR pszNewName,
        HRESULT hrRename,
        IShellItem *psiNewlyCreated);

    HRESULT (STDMETHODCALLTYPE *PreMoveItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName);

    HRESULT (STDMETHODCALLTYPE *PostMoveItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName,
        HRESULT hrMove,
        IShellItem *psiNewlyCreated);

    HRESULT (STDMETHODCALLTYPE *PreCopyItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName);

    HRESULT (STDMETHODCALLTYPE *PostCopyItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName,
        HRESULT hrCopy,
        IShellItem *psiNewlyCreated);

    HRESULT (STDMETHODCALLTYPE *PreDeleteItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem);

    HRESULT (STDMETHODCALLTYPE *PostDeleteItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiItem,
        HRESULT hrDelete,
        IShellItem *psiNewlyCreated);

    HRESULT (STDMETHODCALLTYPE *PreNewItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName);

    HRESULT (STDMETHODCALLTYPE *PostNewItem)(
        IFileOperationProgressSink *This,
        DWORD dwFlags,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName,
        LPCWSTR pszTemplateName,
        DWORD dwFileAttributes,
        HRESULT hrNew,
        IShellItem *psiNewItem);

    HRESULT (STDMETHODCALLTYPE *UpdateProgress)(
        IFileOperationProgressSink *This,
        UINT iWorkTotal,
        UINT iWorkSoFar);

    HRESULT (STDMETHODCALLTYPE *ResetTimer)(
        IFileOperationProgressSink *This);

    HRESULT (STDMETHODCALLTYPE *PauseTimer)(
        IFileOperationProgressSink *This);

    HRESULT (STDMETHODCALLTYPE *ResumeTimer)(
        IFileOperationProgressSink *This);

    END_INTERFACE
} IFileOperationProgressSinkVtbl;

interface IFileOperationProgressSink {
    CONST_VTBL IFileOperationProgressSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileOperationProgressSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileOperationProgressSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileOperationProgressSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileOperationProgressSink methods ***/
#define IFileOperationProgressSink_StartOperations(This) \
    ((This)->lpVtbl->StartOperations(This))
#define IFileOperationProgressSink_FinishOperations(This,hrResult) \
    ((This)->lpVtbl->FinishOperations(This,hrResult))
#define IFileOperationProgressSink_PreRenameItem(This,dwFlags,psiItem,pszNewName) \
    ((This)->lpVtbl->PreRenameItem(This,dwFlags,psiItem,pszNewName))
#define IFileOperationProgressSink_PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated) \
    ((This)->lpVtbl->PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated))
#define IFileOperationProgressSink_PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) \
    ((This)->lpVtbl->PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName))
#define IFileOperationProgressSink_PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated) \
    ((This)->lpVtbl->PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated))
#define IFileOperationProgressSink_PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) \
    ((This)->lpVtbl->PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName))
#define IFileOperationProgressSink_PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated) \
    ((This)->lpVtbl->PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated))
#define IFileOperationProgressSink_PreDeleteItem(This,dwFlags,psiItem) \
    ((This)->lpVtbl->PreDeleteItem(This,dwFlags,psiItem))
#define IFileOperationProgressSink_PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated) \
    ((This)->lpVtbl->PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated))
#define IFileOperationProgressSink_PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName) \
    ((This)->lpVtbl->PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName))
#define IFileOperationProgressSink_PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem) \
    ((This)->lpVtbl->PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem))
#define IFileOperationProgressSink_UpdateProgress(This,iWorkTotal,iWorkSoFar) \
    ((This)->lpVtbl->UpdateProgress(This,iWorkTotal,iWorkSoFar))
#define IFileOperationProgressSink_ResetTimer(This) \
    ((This)->lpVtbl->ResetTimer(This))
#define IFileOperationProgressSink_PauseTimer(This) \
    ((This)->lpVtbl->PauseTimer(This))
#define IFileOperationProgressSink_ResumeTimer(This) \
    ((This)->lpVtbl->ResumeTimer(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileOperationProgressSink_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IShellItemArray interface
 */
#ifndef __IShellItemArray_INTERFACE_DEFINED__
#define __IShellItemArray_INTERFACE_DEFINED__

typedef enum SIATTRIBFLAGS {
    SIATTRIBFLAGS_AND = 0x1,
    SIATTRIBFLAGS_OR = 0x2,
    SIATTRIBFLAGS_APPCOMPAT = 0x3,
    SIATTRIBFLAGS_MASK = 0x3,
    SIATTRIBFLAGS_ALLITEMS = 0x4000
} SIATTRIBFLAGS;

EXTERN_C const IID IID_IShellItemArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellItemArrayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellItemArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellItemArray *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellItemArray *This);

    /*** IShellItemArray methods ***/
    HRESULT (STDMETHODCALLTYPE *BindToHandler)(
        IShellItemArray *This,
        IBindCtx *pbc,
        REFGUID bhid,
        REFIID riid,
        void **ppvOut);

    HRESULT (STDMETHODCALLTYPE *GetPropertyStore)(
        IShellItemArray *This,
        GETPROPERTYSTOREFLAGS flags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetPropertyDescriptionList)(
        IShellItemArray *This,
        REFPROPERTYKEY keyType,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetAttributes)(
        IShellItemArray *This,
        SIATTRIBFLAGS AttribFlags,
        SFGAOF sfgaoMask,
        SFGAOF *psfgaoAttribs);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IShellItemArray *This,
        DWORD *pdwNumItems);

    HRESULT (STDMETHODCALLTYPE *GetItemAt)(
        IShellItemArray *This,
        DWORD dwIndex,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *EnumItems)(
        IShellItemArray *This,
        IEnumShellItems **ppenumShellItems);

    END_INTERFACE
} IShellItemArrayVtbl;

interface IShellItemArray {
    CONST_VTBL IShellItemArrayVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellItemArray_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellItemArray_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellItemArray_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellItemArray methods ***/
#define IShellItemArray_BindToHandler(This,pbc,bhid,riid,ppvOut) \
    ((This)->lpVtbl->BindToHandler(This,pbc,bhid,riid,ppvOut))
#define IShellItemArray_GetPropertyStore(This,flags,riid,ppv) \
    ((This)->lpVtbl->GetPropertyStore(This,flags,riid,ppv))
#define IShellItemArray_GetPropertyDescriptionList(This,keyType,riid,ppv) \
    ((This)->lpVtbl->GetPropertyDescriptionList(This,keyType,riid,ppv))
#define IShellItemArray_GetAttributes(This,AttribFlags,sfgaoMask,psfgaoAttribs) \
    ((This)->lpVtbl->GetAttributes(This,AttribFlags,sfgaoMask,psfgaoAttribs))
#define IShellItemArray_GetCount(This,pdwNumItems) \
    ((This)->lpVtbl->GetCount(This,pdwNumItems))
#define IShellItemArray_GetItemAt(This,dwIndex,ppsi) \
    ((This)->lpVtbl->GetItemAt(This,dwIndex,ppsi))
#define IShellItemArray_EnumItems(This,ppenumShellItems) \
    ((This)->lpVtbl->EnumItems(This,ppenumShellItems))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellItemArray_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHCreateShellItemArray( PCIDLIST_ABSOLUTE pidlParent,  IShellFolder *psf,  UINT cidl,  PCUITEMID_CHILD_ARRAY ppidl,  IShellItemArray **ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromDataObject( IDataObject *pdo,  REFIID riid,  void **ppv);
SHSTDAPI SHCreateShellItemArrayFromIDLists( UINT cidl,  PCIDLIST_ABSOLUTE_ARRAY rgpidl,  IShellItemArray **ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromShellItem( IShellItem *psi,  REFIID riid,  void **ppv);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IInitializeWithItem interface
 */
#ifndef __IInitializeWithItem_INTERFACE_DEFINED__
#define __IInitializeWithItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInitializeWithItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeWithItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeWithItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeWithItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeWithItem *This);

    /*** IInitializeWithItem methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IInitializeWithItem *This,
        IShellItem *psi,
        DWORD grfMode);

    END_INTERFACE
} IInitializeWithItemVtbl;

interface IInitializeWithItem {
    CONST_VTBL IInitializeWithItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeWithItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeWithItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeWithItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeWithItem methods ***/
#define IInitializeWithItem_Initialize(This,psi,grfMode) \
    ((This)->lpVtbl->Initialize(This,psi,grfMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeWithItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectWithSelection interface
 */
#ifndef __IObjectWithSelection_INTERFACE_DEFINED__
#define __IObjectWithSelection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectWithSelection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectWithSelectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectWithSelection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectWithSelection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectWithSelection *This);

    /*** IObjectWithSelection methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSelection)(
        IObjectWithSelection *This,
        IShellItemArray *psia);

    HRESULT (STDMETHODCALLTYPE *GetSelection)(
        IObjectWithSelection *This,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IObjectWithSelectionVtbl;

interface IObjectWithSelection {
    CONST_VTBL IObjectWithSelectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectWithSelection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectWithSelection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectWithSelection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectWithSelection methods ***/
#define IObjectWithSelection_SetSelection(This,psia) \
    ((This)->lpVtbl->SetSelection(This,psia))
#define IObjectWithSelection_GetSelection(This,riid,ppv) \
    ((This)->lpVtbl->GetSelection(This,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectWithSelection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectWithBackReferences interface
 */
#ifndef __IObjectWithBackReferences_INTERFACE_DEFINED__
#define __IObjectWithBackReferences_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectWithBackReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectWithBackReferencesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectWithBackReferences *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectWithBackReferences *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectWithBackReferences *This);

    /*** IObjectWithBackReferences methods ***/
    HRESULT (STDMETHODCALLTYPE *RemoveBackReferences)(
        IObjectWithBackReferences *This);

    END_INTERFACE
} IObjectWithBackReferencesVtbl;

interface IObjectWithBackReferences {
    CONST_VTBL IObjectWithBackReferencesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectWithBackReferences_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectWithBackReferences_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectWithBackReferences_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectWithBackReferences methods ***/
#define IObjectWithBackReferences_RemoveBackReferences(This) \
    ((This)->lpVtbl->RemoveBackReferences(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectWithBackReferences_INTERFACE_DEFINED__ */

enum _PROPERTYUI_NAME_FLAGS {
    PUIFNF_DEFAULT = 0x0,
    PUIFNF_MNEMONIC = 0x1
};
typedef DWORD PROPERTYUI_NAME_FLAGS;

enum _PROPERTYUI_FLAGS {
    PUIF_DEFAULT = 0x0,
    PUIF_RIGHTALIGN = 0x1,
    PUIF_NOLABELININFOTIP = 0x2
};
typedef DWORD PROPERTYUI_FLAGS;

enum _PROPERTYUI_FORMAT_FLAGS {
    PUIFFDF_DEFAULT = 0x0,
    PUIFFDF_RIGHTTOLEFT = 0x1,
    PUIFFDF_SHORTFORMAT = 0x2,
    PUIFFDF_NOTIME = 0x4,
    PUIFFDF_FRIENDLYDATE = 0x8
};
typedef DWORD PROPERTYUI_FORMAT_FLAGS;

/*****************************************************************************
 * IPropertyUI interface
 */
#ifndef __IPropertyUI_INTERFACE_DEFINED__
#define __IPropertyUI_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPropertyUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPropertyUIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPropertyUI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPropertyUI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPropertyUI *This);

    /*** IPropertyUI methods ***/
    HRESULT (STDMETHODCALLTYPE *ParsePropertyName)(
        IPropertyUI *This,
        LPCWSTR pszName,
        FMTID *pfmtid,
        PROPID *ppid,
        ULONG *pchEaten);

    HRESULT (STDMETHODCALLTYPE *GetCannonicalName)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        LPWSTR pwszText,
        DWORD cchText);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        PROPERTYUI_NAME_FLAGS flags,
        LPWSTR pwszText,
        DWORD cchText);

    HRESULT (STDMETHODCALLTYPE *GetPropertyDescription)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        LPWSTR pwszText,
        DWORD cchText);

    HRESULT (STDMETHODCALLTYPE *GetDefaultWidth)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        ULONG *pcxChars);

    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        PROPERTYUI_FLAGS *pflags);

    HRESULT (STDMETHODCALLTYPE *FormatForDisplay)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        const PROPVARIANT *ppropvar,
        PROPERTYUI_FORMAT_FLAGS puiff,
        LPWSTR pwszText,
        DWORD cchText);

    HRESULT (STDMETHODCALLTYPE *GetHelpInfo)(
        IPropertyUI *This,
        REFFMTID fmtid,
        PROPID pid,
        LPWSTR pwszHelpFile,
        DWORD cch,
        UINT *puHelpID);

    END_INTERFACE
} IPropertyUIVtbl;

interface IPropertyUI {
    CONST_VTBL IPropertyUIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPropertyUI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPropertyUI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPropertyUI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPropertyUI methods ***/
#define IPropertyUI_ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten) \
    ((This)->lpVtbl->ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten))
#define IPropertyUI_GetCannonicalName(This,fmtid,pid,pwszText,cchText) \
    ((This)->lpVtbl->GetCannonicalName(This,fmtid,pid,pwszText,cchText))
#define IPropertyUI_GetDisplayName(This,fmtid,pid,flags,pwszText,cchText) \
    ((This)->lpVtbl->GetDisplayName(This,fmtid,pid,flags,pwszText,cchText))
#define IPropertyUI_GetPropertyDescription(This,fmtid,pid,pwszText,cchText) \
    ((This)->lpVtbl->GetPropertyDescription(This,fmtid,pid,pwszText,cchText))
#define IPropertyUI_GetDefaultWidth(This,fmtid,pid,pcxChars) \
    ((This)->lpVtbl->GetDefaultWidth(This,fmtid,pid,pcxChars))
#define IPropertyUI_GetFlags(This,fmtid,pid,pflags) \
    ((This)->lpVtbl->GetFlags(This,fmtid,pid,pflags))
#define IPropertyUI_FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText) \
    ((This)->lpVtbl->FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText))
#define IPropertyUI_GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID) \
    ((This)->lpVtbl->GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPropertyUI_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICategoryProvider interface
 */
#ifndef __ICategoryProvider_INTERFACE_DEFINED__
#define __ICategoryProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICategoryProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICategoryProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICategoryProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICategoryProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICategoryProvider *This);

    /*** ICategoryProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *CanCategorizeOnSCID)(
        ICategoryProvider *This,
        const SHCOLUMNID *pscid);

    HRESULT (STDMETHODCALLTYPE *GetDefaultCategory)(
        ICategoryProvider *This,
        GUID *pguid,
        SHCOLUMNID *pscid);

    HRESULT (STDMETHODCALLTYPE *GetCategoryForSCID)(
        ICategoryProvider *This,
        const SHCOLUMNID *pscid,
        GUID *pguid);

    HRESULT (STDMETHODCALLTYPE *EnumCategories)(
        ICategoryProvider *This,
        IEnumGUID **penum);

    HRESULT (STDMETHODCALLTYPE *GetCategoryName)(
        ICategoryProvider *This,
        const GUID *pguid,
        LPWSTR pszName,
        UINT cch);

    HRESULT (STDMETHODCALLTYPE *CreateCategory)(
        ICategoryProvider *This,
        const GUID *pguid,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} ICategoryProviderVtbl;

interface ICategoryProvider {
    CONST_VTBL ICategoryProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICategoryProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICategoryProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICategoryProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICategoryProvider methods ***/
#define ICategoryProvider_CanCategorizeOnSCID(This,pscid) \
    ((This)->lpVtbl->CanCategorizeOnSCID(This,pscid))
#define ICategoryProvider_GetDefaultCategory(This,pguid,pscid) \
    ((This)->lpVtbl->GetDefaultCategory(This,pguid,pscid))
#define ICategoryProvider_GetCategoryForSCID(This,pscid,pguid) \
    ((This)->lpVtbl->GetCategoryForSCID(This,pscid,pguid))
#define ICategoryProvider_EnumCategories(This,penum) \
    ((This)->lpVtbl->EnumCategories(This,penum))
#define ICategoryProvider_GetCategoryName(This,pguid,pszName,cch) \
    ((This)->lpVtbl->GetCategoryName(This,pguid,pszName,cch))
#define ICategoryProvider_CreateCategory(This,pguid,riid,ppv) \
    ((This)->lpVtbl->CreateCategory(This,pguid,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICategoryProvider_INTERFACE_DEFINED__ */

typedef enum CATEGORYINFO_FLAGS {
    CATINFO_NORMAL = 0x0,
    CATINFO_COLLAPSED = 0x1,
    CATINFO_HIDDEN = 0x2,
    CATINFO_EXPANDED = 0x4,
    CATINFO_NOHEADER = 0x8,
    CATINFO_NOTCOLLAPSIBLE = 0x10,
    CATINFO_NOHEADERCOUNT = 0x20,
    CATINFO_SUBSETTED = 0x40,
    CATINFO_SEPARATE_IMAGES = 0x80,
    CATINFO_SHOWEMPTY = 0x100
} CATEGORYINFO_FLAGS;

typedef enum CATSORT_FLAGS {
    CATSORT_DEFAULT = 0x0,
    CATSORT_NAME = 0x1
} CATSORT_FLAGS;

typedef struct CATEGORY_INFO {
    CATEGORYINFO_FLAGS cif;
    WCHAR wszName[ 260 ];
} CATEGORY_INFO;

/*****************************************************************************
 * ICategorizer interface
 */
#ifndef __ICategorizer_INTERFACE_DEFINED__
#define __ICategorizer_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICategorizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICategorizerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICategorizer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICategorizer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICategorizer *This);

    /*** ICategorizer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        ICategorizer *This,
        LPWSTR pszDesc,
        UINT cch);

    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        ICategorizer *This,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        DWORD *rgCategoryIds);

    HRESULT (STDMETHODCALLTYPE *GetCategoryInfo)(
        ICategorizer *This,
        DWORD dwCategoryId,
        CATEGORY_INFO *pci);

    HRESULT (STDMETHODCALLTYPE *CompareCategory)(
        ICategorizer *This,
        CATSORT_FLAGS csfFlags,
        DWORD dwCategoryId1,
        DWORD dwCategoryId2);

    END_INTERFACE
} ICategorizerVtbl;

interface ICategorizer {
    CONST_VTBL ICategorizerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICategorizer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICategorizer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICategorizer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICategorizer methods ***/
#define ICategorizer_GetDescription(This,pszDesc,cch) \
    ((This)->lpVtbl->GetDescription(This,pszDesc,cch))
#define ICategorizer_GetCategory(This,cidl,apidl,rgCategoryIds) \
    ((This)->lpVtbl->GetCategory(This,cidl,apidl,rgCategoryIds))
#define ICategorizer_GetCategoryInfo(This,dwCategoryId,pci) \
    ((This)->lpVtbl->GetCategoryInfo(This,dwCategoryId,pci))
#define ICategorizer_CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2) \
    ((This)->lpVtbl->CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICategorizer_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN2K)

#include <pshpack8.h>

typedef struct SHDRAGIMAGE {
    SIZE sizeDragImage;
    POINT ptOffset;
    HBITMAP hbmpDragImage;
    COLORREF crColorKey;
} SHDRAGIMAGE;
typedef struct SHDRAGIMAGE *LPSHDRAGIMAGE;
#include <poppack.h> // Return to byte packing

#define DI_GETDRAGIMAGE     TEXT("ShellGetDragImage")

/*****************************************************************************
 * IDropTargetHelper interface
 */
#ifndef __IDropTargetHelper_INTERFACE_DEFINED__
#define __IDropTargetHelper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDropTargetHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDropTargetHelperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDropTargetHelper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDropTargetHelper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDropTargetHelper *This);

    /*** IDropTargetHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *DragEnter)(
        IDropTargetHelper *This,
        HWND hwndTarget,
        IDataObject *pDataObject,
        POINT *ppt,
        DWORD dwEffect);

    HRESULT (STDMETHODCALLTYPE *DragLeave)(
        IDropTargetHelper *This);

    HRESULT (STDMETHODCALLTYPE *DragOver)(
        IDropTargetHelper *This,
        POINT *ppt,
        DWORD dwEffect);

    HRESULT (STDMETHODCALLTYPE *Drop)(
        IDropTargetHelper *This,
        IDataObject *pDataObject,
        POINT *ppt,
        DWORD dwEffect);

    HRESULT (STDMETHODCALLTYPE *Show)(
        IDropTargetHelper *This,
        BOOL fShow);

    END_INTERFACE
} IDropTargetHelperVtbl;

interface IDropTargetHelper {
    CONST_VTBL IDropTargetHelperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDropTargetHelper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDropTargetHelper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDropTargetHelper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDropTargetHelper methods ***/
#define IDropTargetHelper_DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect) \
    ((This)->lpVtbl->DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect))
#define IDropTargetHelper_DragLeave(This) \
    ((This)->lpVtbl->DragLeave(This))
#define IDropTargetHelper_DragOver(This,ppt,dwEffect) \
    ((This)->lpVtbl->DragOver(This,ppt,dwEffect))
#define IDropTargetHelper_Drop(This,pDataObject,ppt,dwEffect) \
    ((This)->lpVtbl->Drop(This,pDataObject,ppt,dwEffect))
#define IDropTargetHelper_Show(This,fShow) \
    ((This)->lpVtbl->Show(This,fShow))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDropTargetHelper_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDragSourceHelper interface
 */
#ifndef __IDragSourceHelper_INTERFACE_DEFINED__
#define __IDragSourceHelper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDragSourceHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDragSourceHelperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDragSourceHelper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDragSourceHelper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDragSourceHelper *This);

    /*** IDragSourceHelper methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeFromBitmap)(
        IDragSourceHelper *This,
        LPSHDRAGIMAGE pshdi,
        IDataObject *pDataObject);

    HRESULT (STDMETHODCALLTYPE *InitializeFromWindow)(
        IDragSourceHelper *This,
        HWND hwnd,
        POINT *ppt,
        IDataObject *pDataObject);

    END_INTERFACE
} IDragSourceHelperVtbl;

interface IDragSourceHelper {
    CONST_VTBL IDragSourceHelperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDragSourceHelper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDragSourceHelper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDragSourceHelper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDragSourceHelper methods ***/
#define IDragSourceHelper_InitializeFromBitmap(This,pshdi,pDataObject) \
    ((This)->lpVtbl->InitializeFromBitmap(This,pshdi,pDataObject))
#define IDragSourceHelper_InitializeFromWindow(This,hwnd,ppt,pDataObject) \
    ((This)->lpVtbl->InitializeFromWindow(This,hwnd,ppt,pDataObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDragSourceHelper_INTERFACE_DEFINED__ */

#endif  // NTDDI_WIN2K

#ifdef UNICODE
#define IShellLink      IShellLinkW
#else
#define IShellLink      IShellLinkA
#endif

typedef enum SLR_FLAGS {
    SLR_NONE = 0x0,
    SLR_NO_UI = 0x1,
    SLR_ANY_MATCH = 0x2,
    SLR_UPDATE = 0x4,
    SLR_NOUPDATE = 0x8,
    SLR_NOSEARCH = 0x10,
    SLR_NOTRACK = 0x20,
    SLR_NOLINKINFO = 0x40,
    SLR_INVOKE_MSI = 0x80,
    SLR_NO_UI_WITH_MSG_PUMP = 0x101,
    SLR_OFFER_DELETE_WITHOUT_FILE = 0x200,
    SLR_KNOWNFOLDER = 0x400,
    SLR_MACHINE_IN_LOCAL_TARGET = 0x800,
    SLR_UPDATE_MACHINE_AND_SID = 0x1000,
    SLR_NO_OBJECT_ID = 0x2000
} SLR_FLAGS;

typedef enum SLGP_FLAGS {
    SLGP_SHORTPATH = 0x1,
    SLGP_UNCPRIORITY = 0x2,
    SLGP_RAWPATH = 0x4,
    SLGP_RELATIVEPRIORITY = 0x8
} SLGP_FLAGS;

/*****************************************************************************
 * IShellLinkA interface
 */
#ifndef __IShellLinkA_INTERFACE_DEFINED__
#define __IShellLinkA_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellLinkA;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellLinkAVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellLinkA *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellLinkA *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellLinkA *This);

    /*** IShellLinkA methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IShellLinkA *This,
        LPSTR pszFile,
        int cch,
        WIN32_FIND_DATAA *pfd,
        DWORD fFlags);

    HRESULT (STDMETHODCALLTYPE *GetIDList)(
        IShellLinkA *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *SetIDList)(
        IShellLinkA *This,
        PCIDLIST_ABSOLUTE pidl);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IShellLinkA *This,
        LPSTR pszName,
        int cch);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IShellLinkA *This,
        LPCSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetWorkingDirectory)(
        IShellLinkA *This,
        LPSTR pszDir,
        int cch);

    HRESULT (STDMETHODCALLTYPE *SetWorkingDirectory)(
        IShellLinkA *This,
        LPCSTR pszDir);

    HRESULT (STDMETHODCALLTYPE *GetArguments)(
        IShellLinkA *This,
        LPSTR pszArgs,
        int cch);

    HRESULT (STDMETHODCALLTYPE *SetArguments)(
        IShellLinkA *This,
        LPCSTR pszArgs);

    HRESULT (STDMETHODCALLTYPE *GetHotkey)(
        IShellLinkA *This,
        WORD *pwHotkey);

    HRESULT (STDMETHODCALLTYPE *SetHotkey)(
        IShellLinkA *This,
        WORD wHotkey);

    HRESULT (STDMETHODCALLTYPE *GetShowCmd)(
        IShellLinkA *This,
        int *piShowCmd);

    HRESULT (STDMETHODCALLTYPE *SetShowCmd)(
        IShellLinkA *This,
        int iShowCmd);

    HRESULT (STDMETHODCALLTYPE *GetIconLocation)(
        IShellLinkA *This,
        LPSTR pszIconPath,
        int cch,
        int *piIcon);

    HRESULT (STDMETHODCALLTYPE *SetIconLocation)(
        IShellLinkA *This,
        LPCSTR pszIconPath,
        int iIcon);

    HRESULT (STDMETHODCALLTYPE *SetRelativePath)(
        IShellLinkA *This,
        LPCSTR pszPathRel,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *Resolve)(
        IShellLinkA *This,
        HWND hwnd,
        DWORD fFlags);

    HRESULT (STDMETHODCALLTYPE *SetPath)(
        IShellLinkA *This,
        LPCSTR pszFile);

    END_INTERFACE
} IShellLinkAVtbl;

interface IShellLinkA {
    CONST_VTBL IShellLinkAVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellLinkA_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellLinkA_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellLinkA_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellLinkA methods ***/
#define IShellLinkA_GetPath(This,pszFile,cch,pfd,fFlags) \
    ((This)->lpVtbl->GetPath(This,pszFile,cch,pfd,fFlags))
#define IShellLinkA_GetIDList(This,ppidl) \
    ((This)->lpVtbl->GetIDList(This,ppidl))
#define IShellLinkA_SetIDList(This,pidl) \
    ((This)->lpVtbl->SetIDList(This,pidl))
#define IShellLinkA_GetDescription(This,pszName,cch) \
    ((This)->lpVtbl->GetDescription(This,pszName,cch))
#define IShellLinkA_SetDescription(This,pszName) \
    ((This)->lpVtbl->SetDescription(This,pszName))
#define IShellLinkA_GetWorkingDirectory(This,pszDir,cch) \
    ((This)->lpVtbl->GetWorkingDirectory(This,pszDir,cch))
#define IShellLinkA_SetWorkingDirectory(This,pszDir) \
    ((This)->lpVtbl->SetWorkingDirectory(This,pszDir))
#define IShellLinkA_GetArguments(This,pszArgs,cch) \
    ((This)->lpVtbl->GetArguments(This,pszArgs,cch))
#define IShellLinkA_SetArguments(This,pszArgs) \
    ((This)->lpVtbl->SetArguments(This,pszArgs))
#define IShellLinkA_GetHotkey(This,pwHotkey) \
    ((This)->lpVtbl->GetHotkey(This,pwHotkey))
#define IShellLinkA_SetHotkey(This,wHotkey) \
    ((This)->lpVtbl->SetHotkey(This,wHotkey))
#define IShellLinkA_GetShowCmd(This,piShowCmd) \
    ((This)->lpVtbl->GetShowCmd(This,piShowCmd))
#define IShellLinkA_SetShowCmd(This,iShowCmd) \
    ((This)->lpVtbl->SetShowCmd(This,iShowCmd))
#define IShellLinkA_GetIconLocation(This,pszIconPath,cch,piIcon) \
    ((This)->lpVtbl->GetIconLocation(This,pszIconPath,cch,piIcon))
#define IShellLinkA_SetIconLocation(This,pszIconPath,iIcon) \
    ((This)->lpVtbl->SetIconLocation(This,pszIconPath,iIcon))
#define IShellLinkA_SetRelativePath(This,pszPathRel,dwReserved) \
    ((This)->lpVtbl->SetRelativePath(This,pszPathRel,dwReserved))
#define IShellLinkA_Resolve(This,hwnd,fFlags) \
    ((This)->lpVtbl->Resolve(This,hwnd,fFlags))
#define IShellLinkA_SetPath(This,pszFile) \
    ((This)->lpVtbl->SetPath(This,pszFile))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellLinkA_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellLinkW interface
 */
#ifndef __IShellLinkW_INTERFACE_DEFINED__
#define __IShellLinkW_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellLinkW;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellLinkWVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellLinkW *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellLinkW *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellLinkW *This);

    /*** IShellLinkW methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IShellLinkW *This,
        LPWSTR pszFile,
        int cch,
        WIN32_FIND_DATAW *pfd,
        DWORD fFlags);

    HRESULT (STDMETHODCALLTYPE *GetIDList)(
        IShellLinkW *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *SetIDList)(
        IShellLinkW *This,
        PCIDLIST_ABSOLUTE pidl);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IShellLinkW *This,
        LPWSTR pszName,
        int cch);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IShellLinkW *This,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetWorkingDirectory)(
        IShellLinkW *This,
        LPWSTR pszDir,
        int cch);

    HRESULT (STDMETHODCALLTYPE *SetWorkingDirectory)(
        IShellLinkW *This,
        LPCWSTR pszDir);

    HRESULT (STDMETHODCALLTYPE *GetArguments)(
        IShellLinkW *This,
        LPWSTR pszArgs,
        int cch);

    HRESULT (STDMETHODCALLTYPE *SetArguments)(
        IShellLinkW *This,
        LPCWSTR pszArgs);

    HRESULT (STDMETHODCALLTYPE *GetHotkey)(
        IShellLinkW *This,
        WORD *pwHotkey);

    HRESULT (STDMETHODCALLTYPE *SetHotkey)(
        IShellLinkW *This,
        WORD wHotkey);

    HRESULT (STDMETHODCALLTYPE *GetShowCmd)(
        IShellLinkW *This,
        int *piShowCmd);

    HRESULT (STDMETHODCALLTYPE *SetShowCmd)(
        IShellLinkW *This,
        int iShowCmd);

    HRESULT (STDMETHODCALLTYPE *GetIconLocation)(
        IShellLinkW *This,
        LPWSTR pszIconPath,
        int cch,
        int *piIcon);

    HRESULT (STDMETHODCALLTYPE *SetIconLocation)(
        IShellLinkW *This,
        LPCWSTR pszIconPath,
        int iIcon);

    HRESULT (STDMETHODCALLTYPE *SetRelativePath)(
        IShellLinkW *This,
        LPCWSTR pszPathRel,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *Resolve)(
        IShellLinkW *This,
        HWND hwnd,
        DWORD fFlags);

    HRESULT (STDMETHODCALLTYPE *SetPath)(
        IShellLinkW *This,
        LPCWSTR pszFile);

    END_INTERFACE
} IShellLinkWVtbl;

interface IShellLinkW {
    CONST_VTBL IShellLinkWVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellLinkW_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellLinkW_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellLinkW_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellLinkW methods ***/
#define IShellLinkW_GetPath(This,pszFile,cch,pfd,fFlags) \
    ((This)->lpVtbl->GetPath(This,pszFile,cch,pfd,fFlags))
#define IShellLinkW_GetIDList(This,ppidl) \
    ((This)->lpVtbl->GetIDList(This,ppidl))
#define IShellLinkW_SetIDList(This,pidl) \
    ((This)->lpVtbl->SetIDList(This,pidl))
#define IShellLinkW_GetDescription(This,pszName,cch) \
    ((This)->lpVtbl->GetDescription(This,pszName,cch))
#define IShellLinkW_SetDescription(This,pszName) \
    ((This)->lpVtbl->SetDescription(This,pszName))
#define IShellLinkW_GetWorkingDirectory(This,pszDir,cch) \
    ((This)->lpVtbl->GetWorkingDirectory(This,pszDir,cch))
#define IShellLinkW_SetWorkingDirectory(This,pszDir) \
    ((This)->lpVtbl->SetWorkingDirectory(This,pszDir))
#define IShellLinkW_GetArguments(This,pszArgs,cch) \
    ((This)->lpVtbl->GetArguments(This,pszArgs,cch))
#define IShellLinkW_SetArguments(This,pszArgs) \
    ((This)->lpVtbl->SetArguments(This,pszArgs))
#define IShellLinkW_GetHotkey(This,pwHotkey) \
    ((This)->lpVtbl->GetHotkey(This,pwHotkey))
#define IShellLinkW_SetHotkey(This,wHotkey) \
    ((This)->lpVtbl->SetHotkey(This,wHotkey))
#define IShellLinkW_GetShowCmd(This,piShowCmd) \
    ((This)->lpVtbl->GetShowCmd(This,piShowCmd))
#define IShellLinkW_SetShowCmd(This,iShowCmd) \
    ((This)->lpVtbl->SetShowCmd(This,iShowCmd))
#define IShellLinkW_GetIconLocation(This,pszIconPath,cch,piIcon) \
    ((This)->lpVtbl->GetIconLocation(This,pszIconPath,cch,piIcon))
#define IShellLinkW_SetIconLocation(This,pszIconPath,iIcon) \
    ((This)->lpVtbl->SetIconLocation(This,pszIconPath,iIcon))
#define IShellLinkW_SetRelativePath(This,pszPathRel,dwReserved) \
    ((This)->lpVtbl->SetRelativePath(This,pszPathRel,dwReserved))
#define IShellLinkW_Resolve(This,hwnd,fFlags) \
    ((This)->lpVtbl->Resolve(This,hwnd,fFlags))
#define IShellLinkW_SetPath(This,pszFile) \
    ((This)->lpVtbl->SetPath(This,pszFile))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellLinkW_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellLinkDataList interface
 */
#ifndef __IShellLinkDataList_INTERFACE_DEFINED__
#define __IShellLinkDataList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellLinkDataList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellLinkDataListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellLinkDataList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellLinkDataList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellLinkDataList *This);

    /*** IShellLinkDataList methods ***/
    HRESULT (STDMETHODCALLTYPE *AddDataBlock)(
        IShellLinkDataList *This,
        void *pDataBlock);

    HRESULT (STDMETHODCALLTYPE *CopyDataBlock)(
        IShellLinkDataList *This,
        DWORD dwSig,
        void **ppDataBlock);

    HRESULT (STDMETHODCALLTYPE *RemoveDataBlock)(
        IShellLinkDataList *This,
        DWORD dwSig);

    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        IShellLinkDataList *This,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *SetFlags)(
        IShellLinkDataList *This,
        DWORD dwFlags);

    END_INTERFACE
} IShellLinkDataListVtbl;

interface IShellLinkDataList {
    CONST_VTBL IShellLinkDataListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellLinkDataList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellLinkDataList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellLinkDataList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellLinkDataList methods ***/
#define IShellLinkDataList_AddDataBlock(This,pDataBlock) \
    ((This)->lpVtbl->AddDataBlock(This,pDataBlock))
#define IShellLinkDataList_CopyDataBlock(This,dwSig,ppDataBlock) \
    ((This)->lpVtbl->CopyDataBlock(This,dwSig,ppDataBlock))
#define IShellLinkDataList_RemoveDataBlock(This,dwSig) \
    ((This)->lpVtbl->RemoveDataBlock(This,dwSig))
#define IShellLinkDataList_GetFlags(This,pdwFlags) \
    ((This)->lpVtbl->GetFlags(This,pdwFlags))
#define IShellLinkDataList_SetFlags(This,dwFlags) \
    ((This)->lpVtbl->SetFlags(This,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellLinkDataList_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN2K)

/*****************************************************************************
 * IResolveShellLink interface
 */
#ifndef __IResolveShellLink_INTERFACE_DEFINED__
#define __IResolveShellLink_INTERFACE_DEFINED__

EXTERN_C const IID IID_IResolveShellLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IResolveShellLinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IResolveShellLink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IResolveShellLink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IResolveShellLink *This);

    /*** IResolveShellLink methods ***/
    HRESULT (STDMETHODCALLTYPE *ResolveShellLink)(
        IResolveShellLink *This,
        IUnknown *punkLink,
        HWND hwnd,
        DWORD fFlags);

    END_INTERFACE
} IResolveShellLinkVtbl;

interface IResolveShellLink {
    CONST_VTBL IResolveShellLinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IResolveShellLink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IResolveShellLink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IResolveShellLink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IResolveShellLink methods ***/
#define IResolveShellLink_ResolveShellLink(This,punkLink,hwnd,fFlags) \
    ((This)->lpVtbl->ResolveShellLink(This,punkLink,hwnd,fFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IResolveShellLink_INTERFACE_DEFINED__ */

#endif  // NTDDI_WIN2K

/*****************************************************************************
 * IActionProgressDialog interface
 */
#ifndef __IActionProgressDialog_INTERFACE_DEFINED__
#define __IActionProgressDialog_INTERFACE_DEFINED__

enum _SPINITF {
    SPINITF_NORMAL = 0x0,
    SPINITF_MODAL = 0x1,
    SPINITF_NOMINIMIZE = 0x8
};
typedef DWORD SPINITF;

EXTERN_C const IID IID_IActionProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IActionProgressDialogVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IActionProgressDialog *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IActionProgressDialog *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IActionProgressDialog *This);

    /*** IActionProgressDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IActionProgressDialog *This,
        SPINITF flags,
        LPCWSTR pszTitle,
        LPCWSTR pszCancel);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IActionProgressDialog *This);

    END_INTERFACE
} IActionProgressDialogVtbl;

interface IActionProgressDialog {
    CONST_VTBL IActionProgressDialogVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IActionProgressDialog_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IActionProgressDialog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IActionProgressDialog_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IActionProgressDialog methods ***/
#define IActionProgressDialog_Initialize(This,flags,pszTitle,pszCancel) \
    ((This)->lpVtbl->Initialize(This,flags,pszTitle,pszCancel))
#define IActionProgressDialog_Stop(This) \
    ((This)->lpVtbl->Stop(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IActionProgressDialog_INTERFACE_DEFINED__ */

#define ARCONTENT_AUTORUNINF             0x00000002   // That's the one we have today, and always had
#define ARCONTENT_AUDIOCD                0x00000004   // Audio CD (not MP3 and the like, the stuff you buy at the store)
#define ARCONTENT_DVDMOVIE               0x00000008   // DVD Movie (not MPEGs, the stuff you buy at the store)
#define ARCONTENT_BLANKCD                0x00000010   // Blank CD-R/CD-RW)
#define ARCONTENT_BLANKDVD               0x00000020   // Blank DVD-R/DVD-RW
#define ARCONTENT_UNKNOWNCONTENT         0x00000040   // Whatever files.  Mean that it's formatted.
#define ARCONTENT_AUTOPLAYPIX            0x00000080   // Any files classified by shell as image. (jpg, bmp, etc.)
#define ARCONTENT_AUTOPLAYMUSIC          0x00000100   // Any files classified by shell as music. (wma, mp3, etc.)
#define ARCONTENT_AUTOPLAYVIDEO          0x00000200   // Any files classified by shell as video. (mpg, avi, etc.)

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define ARCONTENT_VCD                    0x00000400   // VCD format
#define ARCONTENT_SVCD                   0x00000800   // Super-VCD format
#define ARCONTENT_DVDAUDIO               0x00001000   // DVD-Audio
#define ARCONTENT_BLANKBD                0x00002000   // Blank BD-R/BD-RW
#define ARCONTENT_BLURAY                 0x00004000   // Blu-ray Disc
#define ARCONTENT_CAMERASTORAGE          0x00008000   // Camera Storage
#define ARCONTENT_CUSTOMEVENT            0x00010000   // Custom Event
#define ARCONTENT_NONE                   0x00000000   // Empty (but formatted)
#define ARCONTENT_MASK                   0x0001FFFE   // Bits that denote valid content types

#define ARCONTENT_PHASE_UNKNOWN          0x00000000   // We can be in any phase.  This is XP behavior.
#define ARCONTENT_PHASE_PRESNIFF         0x10000000   // These are contents we know w/o scanning the media for complete data (e.g. Audio track, DVD Movie).
#define ARCONTENT_PHASE_SNIFFING         0x20000000   // We are in the middle of searching the media.  There could be more contents to be found than currently reported.
#define ARCONTENT_PHASE_FINAL            0x40000000   // We have finished searching; contents we report are final.
#define ARCONTENT_PHASE_MASK             0x70000000   // Bits that denote what phase we are in the Autoplay process.
#endif  // NTDDI_VISTA

/*****************************************************************************
 * IActionProgress interface
 */
#ifndef __IActionProgress_INTERFACE_DEFINED__
#define __IActionProgress_INTERFACE_DEFINED__

enum _SPBEGINF {
    SPBEGINF_NORMAL = 0x0,
    SPBEGINF_AUTOTIME = 0x2,
    SPBEGINF_NOPROGRESSBAR = 0x10,
    SPBEGINF_MARQUEEPROGRESS = 0x20,
    SPBEGINF_NOCANCELBUTTON = 0x40
};
typedef DWORD SPBEGINF;

typedef enum _SPACTION {
    SPACTION_NONE = 0,
    SPACTION_MOVING = 1,
    SPACTION_COPYING = 2,
    SPACTION_RECYCLING = 3,
    SPACTION_APPLYINGATTRIBS = 4,
    SPACTION_DOWNLOADING = 5,
    SPACTION_SEARCHING_INTERNET = 6,
    SPACTION_CALCULATING = 7,
    SPACTION_UPLOADING = 8,
    SPACTION_SEARCHING_FILES = 9,
    SPACTION_DELETING = 10,
    SPACTION_RENAMING = 11,
    SPACTION_FORMATTING = 12,
    SPACTION_COPY_MOVING = 13
} SPACTION;

typedef enum _SPTEXT {
    SPTEXT_ACTIONDESCRIPTION = 1,
    SPTEXT_ACTIONDETAIL = 2
} SPTEXT;

EXTERN_C const IID IID_IActionProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IActionProgressVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IActionProgress *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IActionProgress *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IActionProgress *This);

    /*** IActionProgress methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin)(
        IActionProgress *This,
        SPACTION action,
        SPBEGINF flags);

    HRESULT (STDMETHODCALLTYPE *UpdateProgress)(
        IActionProgress *This,
        ULONGLONG ulCompleted,
        ULONGLONG ulTotal);

    HRESULT (STDMETHODCALLTYPE *UpdateText)(
        IActionProgress *This,
        SPTEXT sptext,
        LPCWSTR pszText,
        BOOL fMayCompact);

    HRESULT (STDMETHODCALLTYPE *QueryCancel)(
        IActionProgress *This,
        BOOL *pfCancelled);

    HRESULT (STDMETHODCALLTYPE *ResetCancel)(
        IActionProgress *This);

    HRESULT (STDMETHODCALLTYPE *End)(
        IActionProgress *This);

    END_INTERFACE
} IActionProgressVtbl;

interface IActionProgress {
    CONST_VTBL IActionProgressVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IActionProgress_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IActionProgress_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IActionProgress_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IActionProgress methods ***/
#define IActionProgress_Begin(This,action,flags) \
    ((This)->lpVtbl->Begin(This,action,flags))
#define IActionProgress_UpdateProgress(This,ulCompleted,ulTotal) \
    ((This)->lpVtbl->UpdateProgress(This,ulCompleted,ulTotal))
#define IActionProgress_UpdateText(This,sptext,pszText,fMayCompact) \
    ((This)->lpVtbl->UpdateText(This,sptext,pszText,fMayCompact))
#define IActionProgress_QueryCancel(This,pfCancelled) \
    ((This)->lpVtbl->QueryCancel(This,pfCancelled))
#define IActionProgress_ResetCancel(This) \
    ((This)->lpVtbl->ResetCancel(This))
#define IActionProgress_End(This) \
    ((This)->lpVtbl->End(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IActionProgress_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellExtInit interface
 */
#ifndef __IShellExtInit_INTERFACE_DEFINED__
#define __IShellExtInit_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellExtInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellExtInitVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellExtInit *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellExtInit *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellExtInit *This);

    /*** IShellExtInit methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IShellExtInit *This,
        PCIDLIST_ABSOLUTE pidlFolder,
        IDataObject *pdtobj,
        HKEY hkeyProgID);

    END_INTERFACE
} IShellExtInitVtbl;

interface IShellExtInit {
    CONST_VTBL IShellExtInitVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellExtInit_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellExtInit_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellExtInit_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellExtInit methods ***/
#define IShellExtInit_Initialize(This,pidlFolder,pdtobj,hkeyProgID) \
    ((This)->lpVtbl->Initialize(This,pidlFolder,pdtobj,hkeyProgID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellExtInit_INTERFACE_DEFINED__ */

typedef IShellExtInit *LPSHELLEXTINIT;

/*****************************************************************************
 * IShellPropSheetExt interface
 */
#ifndef __IShellPropSheetExt_INTERFACE_DEFINED__
#define __IShellPropSheetExt_INTERFACE_DEFINED__

enum _EXPPS {
    EXPPS_FILETYPES = 0x1
};
typedef UINT EXPPS;

EXTERN_C const IID IID_IShellPropSheetExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellPropSheetExtVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellPropSheetExt *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellPropSheetExt *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellPropSheetExt *This);

    /*** IShellPropSheetExt methods ***/
    HRESULT (STDMETHODCALLTYPE *AddPages)(
        IShellPropSheetExt *This,
        LPFNSVADDPROPSHEETPAGE pfnAddPage,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *ReplacePage)(
        IShellPropSheetExt *This,
        EXPPS uPageID,
        LPFNSVADDPROPSHEETPAGE pfnReplaceWith,
        LPARAM lParam);

    END_INTERFACE
} IShellPropSheetExtVtbl;

interface IShellPropSheetExt {
    CONST_VTBL IShellPropSheetExtVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellPropSheetExt_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellPropSheetExt_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellPropSheetExt_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellPropSheetExt methods ***/
#define IShellPropSheetExt_AddPages(This,pfnAddPage,lParam) \
    ((This)->lpVtbl->AddPages(This,pfnAddPage,lParam))
#define IShellPropSheetExt_ReplacePage(This,uPageID,pfnReplaceWith,lParam) \
    ((This)->lpVtbl->ReplacePage(This,uPageID,pfnReplaceWith,lParam))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellPropSheetExt_INTERFACE_DEFINED__ */

typedef IShellPropSheetExt *LPSHELLPROPSHEETEXT;

/*****************************************************************************
 * IRemoteComputer interface
 */
#ifndef __IRemoteComputer_INTERFACE_DEFINED__
#define __IRemoteComputer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRemoteComputer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRemoteComputerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRemoteComputer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRemoteComputer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRemoteComputer *This);

    /*** IRemoteComputer methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IRemoteComputer *This,
        LPCWSTR pszMachine,
        BOOL bEnumerating);

    END_INTERFACE
} IRemoteComputerVtbl;

interface IRemoteComputer {
    CONST_VTBL IRemoteComputerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRemoteComputer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRemoteComputer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRemoteComputer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRemoteComputer methods ***/
#define IRemoteComputer_Initialize(This,pszMachine,bEnumerating) \
    ((This)->lpVtbl->Initialize(This,pszMachine,bEnumerating))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRemoteComputer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IQueryContinue interface
 */
#ifndef __IQueryContinue_INTERFACE_DEFINED__
#define __IQueryContinue_INTERFACE_DEFINED__

EXTERN_C const IID IID_IQueryContinue;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IQueryContinueVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IQueryContinue *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IQueryContinue *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IQueryContinue *This);

    /*** IQueryContinue methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryContinue)(
        IQueryContinue *This);

    END_INTERFACE
} IQueryContinueVtbl;

interface IQueryContinue {
    CONST_VTBL IQueryContinueVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IQueryContinue_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IQueryContinue_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IQueryContinue_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IQueryContinue methods ***/
#define IQueryContinue_QueryContinue(This) \
    ((This)->lpVtbl->QueryContinue(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IQueryContinue_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectWithCancelEvent interface
 */
#ifndef __IObjectWithCancelEvent_INTERFACE_DEFINED__
#define __IObjectWithCancelEvent_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectWithCancelEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectWithCancelEventVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectWithCancelEvent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectWithCancelEvent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectWithCancelEvent *This);

    /*** IObjectWithCancelEvent methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCancelEvent)(
        IObjectWithCancelEvent *This,
        HANDLE *phEvent);

    END_INTERFACE
} IObjectWithCancelEventVtbl;

interface IObjectWithCancelEvent {
    CONST_VTBL IObjectWithCancelEventVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectWithCancelEvent_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectWithCancelEvent_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectWithCancelEvent_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectWithCancelEvent methods ***/
#define IObjectWithCancelEvent_GetCancelEvent(This,phEvent) \
    ((This)->lpVtbl->GetCancelEvent(This,phEvent))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectWithCancelEvent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUserNotification interface
 */
#ifndef __IUserNotification_INTERFACE_DEFINED__
#define __IUserNotification_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUserNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUserNotificationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUserNotification *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUserNotification *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUserNotification *This);

    /*** IUserNotification methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBalloonInfo)(
        IUserNotification *This,
        LPCWSTR pszTitle,
        LPCWSTR pszText,
        DWORD dwInfoFlags);

    HRESULT (STDMETHODCALLTYPE *SetBalloonRetry)(
        IUserNotification *This,
        DWORD dwShowTime,
        DWORD dwInterval,
        UINT cRetryCount);

    HRESULT (STDMETHODCALLTYPE *SetIconInfo)(
        IUserNotification *This,
        HICON hIcon,
        LPCWSTR pszToolTip);

    HRESULT (STDMETHODCALLTYPE *Show)(
        IUserNotification *This,
        IQueryContinue *pqc,
        DWORD dwContinuePollInterval);

    HRESULT (STDMETHODCALLTYPE *PlaySound)(
        IUserNotification *This,
        LPCWSTR pszSoundName);

    END_INTERFACE
} IUserNotificationVtbl;

interface IUserNotification {
    CONST_VTBL IUserNotificationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUserNotification_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUserNotification_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUserNotification_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUserNotification methods ***/
#define IUserNotification_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) \
    ((This)->lpVtbl->SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags))
#define IUserNotification_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) \
    ((This)->lpVtbl->SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount))
#define IUserNotification_SetIconInfo(This,hIcon,pszToolTip) \
    ((This)->lpVtbl->SetIconInfo(This,hIcon,pszToolTip))
#define IUserNotification_Show(This,pqc,dwContinuePollInterval) \
    ((This)->lpVtbl->Show(This,pqc,dwContinuePollInterval))
#define IUserNotification_PlaySound(This,pszSoundName) \
    ((This)->lpVtbl->PlaySound(This,pszSoundName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUserNotification_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IItemNameLimits interface
 */
#ifndef __IItemNameLimits_INTERFACE_DEFINED__
#define __IItemNameLimits_INTERFACE_DEFINED__

EXTERN_C const IID IID_IItemNameLimits;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IItemNameLimitsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IItemNameLimits *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IItemNameLimits *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IItemNameLimits *This);

    /*** IItemNameLimits methods ***/
    HRESULT (STDMETHODCALLTYPE *GetValidCharacters)(
        IItemNameLimits *This,
        LPWSTR *ppwszValidChars,
        LPWSTR *ppwszInvalidChars);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        IItemNameLimits *This,
        LPCWSTR pszName,
        int *piMaxNameLen);

    END_INTERFACE
} IItemNameLimitsVtbl;

interface IItemNameLimits {
    CONST_VTBL IItemNameLimitsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IItemNameLimits_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IItemNameLimits_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IItemNameLimits_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IItemNameLimits methods ***/
#define IItemNameLimits_GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars) \
    ((This)->lpVtbl->GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars))
#define IItemNameLimits_GetMaxLength(This,pszName,piMaxNameLen) \
    ((This)->lpVtbl->GetMaxLength(This,pszName,piMaxNameLen))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IItemNameLimits_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * ISearchFolderItemFactory interface
 */
#ifndef __ISearchFolderItemFactory_INTERFACE_DEFINED__
#define __ISearchFolderItemFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISearchFolderItemFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISearchFolderItemFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISearchFolderItemFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISearchFolderItemFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISearchFolderItemFactory *This);

    /*** ISearchFolderItemFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDisplayName)(
        ISearchFolderItemFactory *This,
        LPCWSTR pszDisplayName);

    HRESULT (STDMETHODCALLTYPE *SetFolderTypeID)(
        ISearchFolderItemFactory *This,
        FOLDERTYPEID ftid);

    HRESULT (STDMETHODCALLTYPE *SetFolderLogicalViewMode)(
        ISearchFolderItemFactory *This,
        FOLDERLOGICALVIEWMODE flvm);

    HRESULT (STDMETHODCALLTYPE *SetIconSize)(
        ISearchFolderItemFactory *This,
        int iIconSize);

    HRESULT (STDMETHODCALLTYPE *SetVisibleColumns)(
        ISearchFolderItemFactory *This,
        UINT cVisibleColumns,
        const PROPERTYKEY *rgKey);

    HRESULT (STDMETHODCALLTYPE *SetSortColumns)(
        ISearchFolderItemFactory *This,
        UINT cSortColumns,
        SORTCOLUMN *rgSortColumns);

    HRESULT (STDMETHODCALLTYPE *SetGroupColumn)(
        ISearchFolderItemFactory *This,
        REFPROPERTYKEY keyGroup);

    HRESULT (STDMETHODCALLTYPE *SetStacks)(
        ISearchFolderItemFactory *This,
        UINT cStackKeys,
        PROPERTYKEY *rgStackKeys);

    HRESULT (STDMETHODCALLTYPE *SetScope)(
        ISearchFolderItemFactory *This,
        IShellItemArray *psiaScope);

    HRESULT (STDMETHODCALLTYPE *SetCondition)(
        ISearchFolderItemFactory *This,
        ICondition *pCondition);

    HRESULT (STDMETHODCALLTYPE *GetShellItem)(
        ISearchFolderItemFactory *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetIDList)(
        ISearchFolderItemFactory *This,
        PIDLIST_ABSOLUTE *ppidl);

    END_INTERFACE
} ISearchFolderItemFactoryVtbl;

interface ISearchFolderItemFactory {
    CONST_VTBL ISearchFolderItemFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISearchFolderItemFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISearchFolderItemFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISearchFolderItemFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISearchFolderItemFactory methods ***/
#define ISearchFolderItemFactory_SetDisplayName(This,pszDisplayName) \
    ((This)->lpVtbl->SetDisplayName(This,pszDisplayName))
#define ISearchFolderItemFactory_SetFolderTypeID(This,ftid) \
    ((This)->lpVtbl->SetFolderTypeID(This,ftid))
#define ISearchFolderItemFactory_SetFolderLogicalViewMode(This,flvm) \
    ((This)->lpVtbl->SetFolderLogicalViewMode(This,flvm))
#define ISearchFolderItemFactory_SetIconSize(This,iIconSize) \
    ((This)->lpVtbl->SetIconSize(This,iIconSize))
#define ISearchFolderItemFactory_SetVisibleColumns(This,cVisibleColumns,rgKey) \
    ((This)->lpVtbl->SetVisibleColumns(This,cVisibleColumns,rgKey))
#define ISearchFolderItemFactory_SetSortColumns(This,cSortColumns,rgSortColumns) \
    ((This)->lpVtbl->SetSortColumns(This,cSortColumns,rgSortColumns))
#define ISearchFolderItemFactory_SetGroupColumn(This,keyGroup) \
    ((This)->lpVtbl->SetGroupColumn(This,keyGroup))
#define ISearchFolderItemFactory_SetStacks(This,cStackKeys,rgStackKeys) \
    ((This)->lpVtbl->SetStacks(This,cStackKeys,rgStackKeys))
#define ISearchFolderItemFactory_SetScope(This,psiaScope) \
    ((This)->lpVtbl->SetScope(This,psiaScope))
#define ISearchFolderItemFactory_SetCondition(This,pCondition) \
    ((This)->lpVtbl->SetCondition(This,pCondition))
#define ISearchFolderItemFactory_GetShellItem(This,riid,ppv) \
    ((This)->lpVtbl->GetShellItem(This,riid,ppv))
#define ISearchFolderItemFactory_GetIDList(This,ppidl) \
    ((This)->lpVtbl->GetIDList(This,ppidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISearchFolderItemFactory_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

#define IEI_PRIORITY_MAX        ITSAT_MAX_PRIORITY
#define IEI_PRIORITY_MIN        ITSAT_MIN_PRIORITY
#define IEIT_PRIORITY_NORMAL     ITSAT_DEFAULT_PRIORITY

#define IEIFLAG_ASYNC       0x0001      // (deprecated) ask the extractor if it supports ASYNC extract (free threaded)
#define IEIFLAG_CACHE       0x0002      // returned from the extractor if it does NOT cache the thumbnail
#define IEIFLAG_ASPECT      0x0004      // passed to the extractor to beg it to render to the aspect ratio of the supplied rect
#define IEIFLAG_OFFLINE     0x0008      // if the extractor shouldn't hit the net to get any content neede for the rendering
#define IEIFLAG_GLEAM       0x0010      // does the image have a gleam ? this will be returned if it does
#define IEIFLAG_SCREEN      0x0020      // render as if for the screen  (this is exlusive with IEIFLAG_ASPECT )
#define IEIFLAG_ORIGSIZE    0x0040      // render to the approx size passed, but crop if neccessary
#define IEIFLAG_NOSTAMP     0x0080      // returned from the extractor if it does NOT want an icon stamp on the thumbnail
#define IEIFLAG_NOBORDER    0x0100      // returned from the extractor if it does NOT want an a border around the thumbnail
#define IEIFLAG_QUALITY     0x0200      // passed to the Extract method to indicate that a slower, higher quality image is desired, re-compute the thumbnail
#define IEIFLAG_REFRESH     0x0400      // returned from the extractor if it would like to have Refresh Thumbnail available

/*****************************************************************************
 * IExtractImage interface
 */
#ifndef __IExtractImage_INTERFACE_DEFINED__
#define __IExtractImage_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExtractImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExtractImageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExtractImage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExtractImage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExtractImage *This);

    /*** IExtractImage methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLocation)(
        IExtractImage *This,
        LPWSTR pszPathBuffer,
        DWORD cch,
        DWORD *pdwPriority,
        const SIZE *prgSize,
        DWORD dwRecClrDepth,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *Extract)(
        IExtractImage *This,
        HBITMAP *phBmpThumbnail);

    END_INTERFACE
} IExtractImageVtbl;

interface IExtractImage {
    CONST_VTBL IExtractImageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExtractImage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExtractImage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExtractImage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExtractImage methods ***/
#define IExtractImage_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) \
    ((This)->lpVtbl->GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags))
#define IExtractImage_Extract(This,phBmpThumbnail) \
    ((This)->lpVtbl->Extract(This,phBmpThumbnail))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExtractImage_INTERFACE_DEFINED__ */

typedef IExtractImage *LPEXTRACTIMAGE;

/*****************************************************************************
 * IExtractImage2 interface
 */
#ifndef __IExtractImage2_INTERFACE_DEFINED__
#define __IExtractImage2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExtractImage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExtractImage2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExtractImage2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExtractImage2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExtractImage2 *This);

    /*** IExtractImage methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLocation)(
        IExtractImage2 *This,
        LPWSTR pszPathBuffer,
        DWORD cch,
        DWORD *pdwPriority,
        const SIZE *prgSize,
        DWORD dwRecClrDepth,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *Extract)(
        IExtractImage2 *This,
        HBITMAP *phBmpThumbnail);

    /*** IExtractImage2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDateStamp)(
        IExtractImage2 *This,
        FILETIME *pDateStamp);

    END_INTERFACE
} IExtractImage2Vtbl;

interface IExtractImage2 {
    CONST_VTBL IExtractImage2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExtractImage2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExtractImage2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExtractImage2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExtractImage methods ***/
#define IExtractImage2_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) \
    ((This)->lpVtbl->GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags))
#define IExtractImage2_Extract(This,phBmpThumbnail) \
    ((This)->lpVtbl->Extract(This,phBmpThumbnail))
/*** IExtractImage2 methods ***/
#define IExtractImage2_GetDateStamp(This,pDateStamp) \
    ((This)->lpVtbl->GetDateStamp(This,pDateStamp))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExtractImage2_INTERFACE_DEFINED__ */

typedef IExtractImage2 *LPEXTRACTIMAGE2;

/*****************************************************************************
 * IThumbnailHandlerFactory interface
 */
#ifndef __IThumbnailHandlerFactory_INTERFACE_DEFINED__
#define __IThumbnailHandlerFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IThumbnailHandlerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IThumbnailHandlerFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IThumbnailHandlerFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IThumbnailHandlerFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IThumbnailHandlerFactory *This);

    /*** IThumbnailHandlerFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *GetThumbnailHandler)(
        IThumbnailHandlerFactory *This,
        PCUITEMID_CHILD pidlChild,
        IBindCtx *pbc,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IThumbnailHandlerFactoryVtbl;

interface IThumbnailHandlerFactory {
    CONST_VTBL IThumbnailHandlerFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IThumbnailHandlerFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IThumbnailHandlerFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IThumbnailHandlerFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IThumbnailHandlerFactory methods ***/
#define IThumbnailHandlerFactory_GetThumbnailHandler(This,pidlChild,pbc,riid,ppv) \
    ((This)->lpVtbl->GetThumbnailHandler(This,pidlChild,pbc,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IThumbnailHandlerFactory_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IParentAndItem interface
 */
#ifndef __IParentAndItem_INTERFACE_DEFINED__
#define __IParentAndItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IParentAndItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IParentAndItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IParentAndItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IParentAndItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IParentAndItem *This);

    /*** IParentAndItem methods ***/
    HRESULT (STDMETHODCALLTYPE *SetParentAndItem)(
        IParentAndItem *This,
        PCIDLIST_ABSOLUTE pidlParent,
        IShellFolder *psf,
        PCUITEMID_CHILD pidlChild);

    HRESULT (STDMETHODCALLTYPE *GetParentAndItem)(
        IParentAndItem *This,
        PIDLIST_ABSOLUTE *ppidlParent,
        IShellFolder **ppsf,
        PITEMID_CHILD *ppidlChild);

    END_INTERFACE
} IParentAndItemVtbl;

interface IParentAndItem {
    CONST_VTBL IParentAndItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IParentAndItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IParentAndItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IParentAndItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IParentAndItem methods ***/
#define IParentAndItem_SetParentAndItem(This,pidlParent,psf,pidlChild) \
    ((This)->lpVtbl->SetParentAndItem(This,pidlParent,psf,pidlChild))
#define IParentAndItem_GetParentAndItem(This,ppidlParent,ppsf,ppidlChild) \
    ((This)->lpVtbl->GetParentAndItem(This,ppidlParent,ppsf,ppidlChild))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IParentAndItem_RemoteGetParentAndItem_Proxy(
    IParentAndItem *This,
    PIDLIST_ABSOLUTE *ppidlParent,
    IShellFolder **ppsf,
    PITEMID_CHILD *ppidlChild);

void __RPC_STUB IParentAndItem_RemoteGetParentAndItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IParentAndItem_GetParentAndItem_Proxy(
    PIDLIST_ABSOLUTE *ppidlParent,
    IShellFolder **ppsf,
    PITEMID_CHILD *ppidlChild);
HRESULT IParentAndItem_GetParentAndItem_Stub(
    PIDLIST_ABSOLUTE *ppidlParent,
    IShellFolder **ppsf,
    PITEMID_CHILD *ppidlChild);
#endif /* __IParentAndItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDockingWindow interface
 */
#ifndef __IDockingWindow_INTERFACE_DEFINED__
#define __IDockingWindow_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDockingWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDockingWindowVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDockingWindow *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDockingWindow *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDockingWindow *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IDockingWindow *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IDockingWindow *This,
        BOOL fEnterMode);

    /*** IDockingWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowDW)(
        IDockingWindow *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *CloseDW)(
        IDockingWindow *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *ResizeBorderDW)(
        IDockingWindow *This,
        LPCRECT prcBorder,
        IUnknown *punkToolbarSite,
        BOOL fReserved);

    END_INTERFACE
} IDockingWindowVtbl;

interface IDockingWindow {
    CONST_VTBL IDockingWindowVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDockingWindow_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDockingWindow_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDockingWindow_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IDockingWindow_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IDockingWindow_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IDockingWindow methods ***/
#define IDockingWindow_ShowDW(This,fShow) \
    ((This)->lpVtbl->ShowDW(This,fShow))
#define IDockingWindow_CloseDW(This,dwReserved) \
    ((This)->lpVtbl->CloseDW(This,dwReserved))
#define IDockingWindow_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) \
    ((This)->lpVtbl->ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDockingWindow_INTERFACE_DEFINED__ */

#define DBIM_MINSIZE    0x0001
#define DBIM_MAXSIZE    0x0002
#define DBIM_INTEGRAL   0x0004
#define DBIM_ACTUAL     0x0008
#define DBIM_TITLE      0x0010
#define DBIM_MODEFLAGS  0x0020
#define DBIM_BKCOLOR    0x0040

#include <pshpack8.h>

typedef struct DESKBANDINFO {
    DWORD dwMask;
    POINTL ptMinSize;
    POINTL ptMaxSize;
    POINTL ptIntegral;
    POINTL ptActual;
    WCHAR wszTitle[ 256 ];
    DWORD dwModeFlags;
    COLORREF crBkgnd;
} DESKBANDINFO;

#include <poppack.h>

#define DBIMF_NORMAL            0x0000
#define DBIMF_FIXED             0x0001
#define DBIMF_FIXEDBMP          0x0004   // a fixed background bitmap (if supported)
#define DBIMF_VARIABLEHEIGHT    0x0008
#define DBIMF_UNDELETEABLE      0x0010
#define DBIMF_DEBOSSED          0x0020
#define DBIMF_BKCOLOR           0x0040
#define DBIMF_USECHEVRON        0x0080
#define DBIMF_BREAK             0x0100
#define DBIMF_ADDTOFRONT        0x0200
#define DBIMF_TOPALIGN          0x0400
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define DBIMF_NOGRIPPER         0x0800
#define DBIMF_ALWAYSGRIPPER     0x1000
#define DBIMF_NOMARGINS         0x2000
#endif  // NTDDI_VISTA

#define DBIF_VIEWMODE_NORMAL         0x0000
#define DBIF_VIEWMODE_VERTICAL       0x0001
#define DBIF_VIEWMODE_FLOATING       0x0002
#define DBIF_VIEWMODE_TRANSPARENT    0x0004

enum tagDESKBANDCID {
    DBID_BANDINFOCHANGED = 0,
    DBID_SHOWONLY = 1,
    DBID_MAXIMIZEBAND = 2,
    DBID_PUSHCHEVRON = 3,
    DBID_DELAYINIT = 4,
    DBID_FINISHINIT = 5,
    DBID_SETWINDOWTHEME = 6,
    DBID_PERMITAUTOHIDE = 7
};

#define DBPC_SELECTFIRST    (DWORD)-1
#define DBPC_SELECTLAST     (DWORD)-2

#define CGID_DeskBand IID_IDeskBand

/*****************************************************************************
 * IDeskBand interface
 */
#ifndef __IDeskBand_INTERFACE_DEFINED__
#define __IDeskBand_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDeskBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDeskBandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDeskBand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDeskBand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDeskBand *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IDeskBand *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IDeskBand *This,
        BOOL fEnterMode);

    /*** IDockingWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowDW)(
        IDeskBand *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *CloseDW)(
        IDeskBand *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *ResizeBorderDW)(
        IDeskBand *This,
        LPCRECT prcBorder,
        IUnknown *punkToolbarSite,
        BOOL fReserved);

    /*** IDeskBand methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBandInfo)(
        IDeskBand *This,
        DWORD dwBandID,
        DWORD dwViewMode,
        DESKBANDINFO *pdbi);

    END_INTERFACE
} IDeskBandVtbl;

interface IDeskBand {
    CONST_VTBL IDeskBandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDeskBand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDeskBand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDeskBand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IDeskBand_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IDeskBand_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IDockingWindow methods ***/
#define IDeskBand_ShowDW(This,fShow) \
    ((This)->lpVtbl->ShowDW(This,fShow))
#define IDeskBand_CloseDW(This,dwReserved) \
    ((This)->lpVtbl->CloseDW(This,dwReserved))
#define IDeskBand_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) \
    ((This)->lpVtbl->ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved))
/*** IDeskBand methods ***/
#define IDeskBand_GetBandInfo(This,dwBandID,dwViewMode,pdbi) \
    ((This)->lpVtbl->GetBandInfo(This,dwBandID,dwViewMode,pdbi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDeskBand_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IDeskBandInfo interface
 */
#ifndef __IDeskBandInfo_INTERFACE_DEFINED__
#define __IDeskBandInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDeskBandInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDeskBandInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDeskBandInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDeskBandInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDeskBandInfo *This);

    /*** IDeskBandInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDefaultBandWidth)(
        IDeskBandInfo *This,
        DWORD dwBandID,
        DWORD dwViewMode,
        int *pnWidth);

    END_INTERFACE
} IDeskBandInfoVtbl;

interface IDeskBandInfo {
    CONST_VTBL IDeskBandInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDeskBandInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDeskBandInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDeskBandInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDeskBandInfo methods ***/
#define IDeskBandInfo_GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth) \
    ((This)->lpVtbl->GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDeskBandInfo_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

/*****************************************************************************
 * ITaskbarList interface
 */
#ifndef __ITaskbarList_INTERFACE_DEFINED__
#define __ITaskbarList_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITaskbarList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITaskbarListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITaskbarList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITaskbarList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITaskbarList *This);

    /*** ITaskbarList methods ***/
    HRESULT (STDMETHODCALLTYPE *HrInit)(
        ITaskbarList *This);

    HRESULT (STDMETHODCALLTYPE *AddTab)(
        ITaskbarList *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *DeleteTab)(
        ITaskbarList *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *ActivateTab)(
        ITaskbarList *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *SetActiveAlt)(
        ITaskbarList *This,
        HWND hwnd);

    END_INTERFACE
} ITaskbarListVtbl;

interface ITaskbarList {
    CONST_VTBL ITaskbarListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITaskbarList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITaskbarList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITaskbarList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITaskbarList methods ***/
#define ITaskbarList_HrInit(This) \
    ((This)->lpVtbl->HrInit(This))
#define ITaskbarList_AddTab(This,hwnd) \
    ((This)->lpVtbl->AddTab(This,hwnd))
#define ITaskbarList_DeleteTab(This,hwnd) \
    ((This)->lpVtbl->DeleteTab(This,hwnd))
#define ITaskbarList_ActivateTab(This,hwnd) \
    ((This)->lpVtbl->ActivateTab(This,hwnd))
#define ITaskbarList_SetActiveAlt(This,hwnd) \
    ((This)->lpVtbl->SetActiveAlt(This,hwnd))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITaskbarList_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITaskbarList2 interface
 */
#ifndef __ITaskbarList2_INTERFACE_DEFINED__
#define __ITaskbarList2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITaskbarList2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITaskbarList2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITaskbarList2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITaskbarList2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITaskbarList2 *This);

    /*** ITaskbarList methods ***/
    HRESULT (STDMETHODCALLTYPE *HrInit)(
        ITaskbarList2 *This);

    HRESULT (STDMETHODCALLTYPE *AddTab)(
        ITaskbarList2 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *DeleteTab)(
        ITaskbarList2 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *ActivateTab)(
        ITaskbarList2 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *SetActiveAlt)(
        ITaskbarList2 *This,
        HWND hwnd);

    /*** ITaskbarList2 methods ***/
    HRESULT (STDMETHODCALLTYPE *MarkFullscreenWindow)(
        ITaskbarList2 *This,
        HWND hwnd,
        BOOL fFullscreen);

    END_INTERFACE
} ITaskbarList2Vtbl;

interface ITaskbarList2 {
    CONST_VTBL ITaskbarList2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITaskbarList2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITaskbarList2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITaskbarList2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITaskbarList methods ***/
#define ITaskbarList2_HrInit(This) \
    ((This)->lpVtbl->HrInit(This))
#define ITaskbarList2_AddTab(This,hwnd) \
    ((This)->lpVtbl->AddTab(This,hwnd))
#define ITaskbarList2_DeleteTab(This,hwnd) \
    ((This)->lpVtbl->DeleteTab(This,hwnd))
#define ITaskbarList2_ActivateTab(This,hwnd) \
    ((This)->lpVtbl->ActivateTab(This,hwnd))
#define ITaskbarList2_SetActiveAlt(This,hwnd) \
    ((This)->lpVtbl->SetActiveAlt(This,hwnd))
/*** ITaskbarList2 methods ***/
#define ITaskbarList2_MarkFullscreenWindow(This,hwnd,fFullscreen) \
    ((This)->lpVtbl->MarkFullscreenWindow(This,hwnd,fFullscreen))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITaskbarList2_INTERFACE_DEFINED__ */

#ifdef MIDL_PASS
typedef IUnknown *HIMAGELIST;
#endif

typedef enum THUMBBUTTONFLAGS {
    THBF_ENABLED = 0x0,
    THBF_DISABLED = 0x1,
    THBF_DISMISSONCLICK = 0x2,
    THBF_NOBACKGROUND = 0x4,
    THBF_HIDDEN = 0x8,
    THBF_NONINTERACTIVE = 0x10
} THUMBBUTTONFLAGS;

typedef enum THUMBBUTTONMASK {
    THB_BITMAP = 0x1,
    THB_ICON = 0x2,
    THB_TOOLTIP = 0x4,
    THB_FLAGS = 0x8
} THUMBBUTTONMASK;

#include <pshpack8.h>

typedef struct THUMBBUTTON {
    THUMBBUTTONMASK dwMask;
    UINT iId;
    UINT iBitmap;
    HICON hIcon;
    WCHAR szTip[ 260 ];
    THUMBBUTTONFLAGS dwFlags;
} THUMBBUTTON;
typedef struct THUMBBUTTON *LPTHUMBBUTTON;

#include <poppack.h>

#define THBN_CLICKED        0x1800

/*****************************************************************************
 * ITaskbarList3 interface
 */
#ifndef __ITaskbarList3_INTERFACE_DEFINED__
#define __ITaskbarList3_INTERFACE_DEFINED__

typedef enum TBPFLAG {
    TBPF_NOPROGRESS = 0x0,
    TBPF_INDETERMINATE = 0x1,
    TBPF_NORMAL = 0x2,
    TBPF_ERROR = 0x4,
    TBPF_PAUSED = 0x8
} TBPFLAG;

EXTERN_C const IID IID_ITaskbarList3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITaskbarList3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITaskbarList3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITaskbarList3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITaskbarList3 *This);

    /*** ITaskbarList methods ***/
    HRESULT (STDMETHODCALLTYPE *HrInit)(
        ITaskbarList3 *This);

    HRESULT (STDMETHODCALLTYPE *AddTab)(
        ITaskbarList3 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *DeleteTab)(
        ITaskbarList3 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *ActivateTab)(
        ITaskbarList3 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *SetActiveAlt)(
        ITaskbarList3 *This,
        HWND hwnd);

    /*** ITaskbarList2 methods ***/
    HRESULT (STDMETHODCALLTYPE *MarkFullscreenWindow)(
        ITaskbarList3 *This,
        HWND hwnd,
        BOOL fFullscreen);

    /*** ITaskbarList3 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProgressValue)(
        ITaskbarList3 *This,
        HWND hwnd,
        ULONGLONG ullCompleted,
        ULONGLONG ullTotal);

    HRESULT (STDMETHODCALLTYPE *SetProgressState)(
        ITaskbarList3 *This,
        HWND hwnd,
        TBPFLAG tbpFlags);

    HRESULT (STDMETHODCALLTYPE *RegisterTab)(
        ITaskbarList3 *This,
        HWND hwndTab,
        HWND hwndMDI);

    HRESULT (STDMETHODCALLTYPE *UnregisterTab)(
        ITaskbarList3 *This,
        HWND hwndTab);

    HRESULT (STDMETHODCALLTYPE *SetTabOrder)(
        ITaskbarList3 *This,
        HWND hwndTab,
        HWND hwndInsertBefore);

    HRESULT (STDMETHODCALLTYPE *SetTabActive)(
        ITaskbarList3 *This,
        HWND hwndTab,
        HWND hwndMDI,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *ThumbBarAddButtons)(
        ITaskbarList3 *This,
        HWND hwnd,
        UINT cButtons,
        LPTHUMBBUTTON pButton);

    HRESULT (STDMETHODCALLTYPE *ThumbBarUpdateButtons)(
        ITaskbarList3 *This,
        HWND hwnd,
        UINT cButtons,
        LPTHUMBBUTTON pButton);

    HRESULT (STDMETHODCALLTYPE *ThumbBarSetImageList)(
        ITaskbarList3 *This,
        HWND hwnd,
        HIMAGELIST himl);

    HRESULT (STDMETHODCALLTYPE *SetOverlayIcon)(
        ITaskbarList3 *This,
        HWND hwnd,
        HICON hIcon,
        LPCWSTR pszDescription);

    HRESULT (STDMETHODCALLTYPE *SetThumbnailTooltip)(
        ITaskbarList3 *This,
        HWND hwnd,
        LPCWSTR pszTip);

    HRESULT (STDMETHODCALLTYPE *SetThumbnailClip)(
        ITaskbarList3 *This,
        HWND hwnd,
        RECT *prcClip);

    END_INTERFACE
} ITaskbarList3Vtbl;

interface ITaskbarList3 {
    CONST_VTBL ITaskbarList3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITaskbarList3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITaskbarList3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITaskbarList3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITaskbarList methods ***/
#define ITaskbarList3_HrInit(This) \
    ((This)->lpVtbl->HrInit(This))
#define ITaskbarList3_AddTab(This,hwnd) \
    ((This)->lpVtbl->AddTab(This,hwnd))
#define ITaskbarList3_DeleteTab(This,hwnd) \
    ((This)->lpVtbl->DeleteTab(This,hwnd))
#define ITaskbarList3_ActivateTab(This,hwnd) \
    ((This)->lpVtbl->ActivateTab(This,hwnd))
#define ITaskbarList3_SetActiveAlt(This,hwnd) \
    ((This)->lpVtbl->SetActiveAlt(This,hwnd))
/*** ITaskbarList2 methods ***/
#define ITaskbarList3_MarkFullscreenWindow(This,hwnd,fFullscreen) \
    ((This)->lpVtbl->MarkFullscreenWindow(This,hwnd,fFullscreen))
/*** ITaskbarList3 methods ***/
#define ITaskbarList3_SetProgressValue(This,hwnd,ullCompleted,ullTotal) \
    ((This)->lpVtbl->SetProgressValue(This,hwnd,ullCompleted,ullTotal))
#define ITaskbarList3_SetProgressState(This,hwnd,tbpFlags) \
    ((This)->lpVtbl->SetProgressState(This,hwnd,tbpFlags))
#define ITaskbarList3_RegisterTab(This,hwndTab,hwndMDI) \
    ((This)->lpVtbl->RegisterTab(This,hwndTab,hwndMDI))
#define ITaskbarList3_UnregisterTab(This,hwndTab) \
    ((This)->lpVtbl->UnregisterTab(This,hwndTab))
#define ITaskbarList3_SetTabOrder(This,hwndTab,hwndInsertBefore) \
    ((This)->lpVtbl->SetTabOrder(This,hwndTab,hwndInsertBefore))
#define ITaskbarList3_SetTabActive(This,hwndTab,hwndMDI,dwReserved) \
    ((This)->lpVtbl->SetTabActive(This,hwndTab,hwndMDI,dwReserved))
#define ITaskbarList3_ThumbBarAddButtons(This,hwnd,cButtons,pButton) \
    ((This)->lpVtbl->ThumbBarAddButtons(This,hwnd,cButtons,pButton))
#define ITaskbarList3_ThumbBarUpdateButtons(This,hwnd,cButtons,pButton) \
    ((This)->lpVtbl->ThumbBarUpdateButtons(This,hwnd,cButtons,pButton))
#define ITaskbarList3_ThumbBarSetImageList(This,hwnd,himl) \
    ((This)->lpVtbl->ThumbBarSetImageList(This,hwnd,himl))
#define ITaskbarList3_SetOverlayIcon(This,hwnd,hIcon,pszDescription) \
    ((This)->lpVtbl->SetOverlayIcon(This,hwnd,hIcon,pszDescription))
#define ITaskbarList3_SetThumbnailTooltip(This,hwnd,pszTip) \
    ((This)->lpVtbl->SetThumbnailTooltip(This,hwnd,pszTip))
#define ITaskbarList3_SetThumbnailClip(This,hwnd,prcClip) \
    ((This)->lpVtbl->SetThumbnailClip(This,hwnd,prcClip))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITaskbarList3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITaskbarList4 interface
 */
#ifndef __ITaskbarList4_INTERFACE_DEFINED__
#define __ITaskbarList4_INTERFACE_DEFINED__

typedef enum STPFLAG {
    STPF_NONE = 0x0,
    STPF_USEAPPTHUMBNAILALWAYS = 0x1,
    STPF_USEAPPTHUMBNAILWHENACTIVE = 0x2,
    STPF_USEAPPPEEKALWAYS = 0x4,
    STPF_USEAPPPEEKWHENACTIVE = 0x8
} STPFLAG;

EXTERN_C const IID IID_ITaskbarList4;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITaskbarList4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITaskbarList4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITaskbarList4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITaskbarList4 *This);

    /*** ITaskbarList methods ***/
    HRESULT (STDMETHODCALLTYPE *HrInit)(
        ITaskbarList4 *This);

    HRESULT (STDMETHODCALLTYPE *AddTab)(
        ITaskbarList4 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *DeleteTab)(
        ITaskbarList4 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *ActivateTab)(
        ITaskbarList4 *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *SetActiveAlt)(
        ITaskbarList4 *This,
        HWND hwnd);

    /*** ITaskbarList2 methods ***/
    HRESULT (STDMETHODCALLTYPE *MarkFullscreenWindow)(
        ITaskbarList4 *This,
        HWND hwnd,
        BOOL fFullscreen);

    /*** ITaskbarList3 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProgressValue)(
        ITaskbarList4 *This,
        HWND hwnd,
        ULONGLONG ullCompleted,
        ULONGLONG ullTotal);

    HRESULT (STDMETHODCALLTYPE *SetProgressState)(
        ITaskbarList4 *This,
        HWND hwnd,
        TBPFLAG tbpFlags);

    HRESULT (STDMETHODCALLTYPE *RegisterTab)(
        ITaskbarList4 *This,
        HWND hwndTab,
        HWND hwndMDI);

    HRESULT (STDMETHODCALLTYPE *UnregisterTab)(
        ITaskbarList4 *This,
        HWND hwndTab);

    HRESULT (STDMETHODCALLTYPE *SetTabOrder)(
        ITaskbarList4 *This,
        HWND hwndTab,
        HWND hwndInsertBefore);

    HRESULT (STDMETHODCALLTYPE *SetTabActive)(
        ITaskbarList4 *This,
        HWND hwndTab,
        HWND hwndMDI,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *ThumbBarAddButtons)(
        ITaskbarList4 *This,
        HWND hwnd,
        UINT cButtons,
        LPTHUMBBUTTON pButton);

    HRESULT (STDMETHODCALLTYPE *ThumbBarUpdateButtons)(
        ITaskbarList4 *This,
        HWND hwnd,
        UINT cButtons,
        LPTHUMBBUTTON pButton);

    HRESULT (STDMETHODCALLTYPE *ThumbBarSetImageList)(
        ITaskbarList4 *This,
        HWND hwnd,
        HIMAGELIST himl);

    HRESULT (STDMETHODCALLTYPE *SetOverlayIcon)(
        ITaskbarList4 *This,
        HWND hwnd,
        HICON hIcon,
        LPCWSTR pszDescription);

    HRESULT (STDMETHODCALLTYPE *SetThumbnailTooltip)(
        ITaskbarList4 *This,
        HWND hwnd,
        LPCWSTR pszTip);

    HRESULT (STDMETHODCALLTYPE *SetThumbnailClip)(
        ITaskbarList4 *This,
        HWND hwnd,
        RECT *prcClip);

    /*** ITaskbarList4 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetTabProperties)(
        ITaskbarList4 *This,
        HWND hwndTab,
        STPFLAG stpFlags);

    END_INTERFACE
} ITaskbarList4Vtbl;

interface ITaskbarList4 {
    CONST_VTBL ITaskbarList4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITaskbarList4_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITaskbarList4_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITaskbarList4_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITaskbarList methods ***/
#define ITaskbarList4_HrInit(This) \
    ((This)->lpVtbl->HrInit(This))
#define ITaskbarList4_AddTab(This,hwnd) \
    ((This)->lpVtbl->AddTab(This,hwnd))
#define ITaskbarList4_DeleteTab(This,hwnd) \
    ((This)->lpVtbl->DeleteTab(This,hwnd))
#define ITaskbarList4_ActivateTab(This,hwnd) \
    ((This)->lpVtbl->ActivateTab(This,hwnd))
#define ITaskbarList4_SetActiveAlt(This,hwnd) \
    ((This)->lpVtbl->SetActiveAlt(This,hwnd))
/*** ITaskbarList2 methods ***/
#define ITaskbarList4_MarkFullscreenWindow(This,hwnd,fFullscreen) \
    ((This)->lpVtbl->MarkFullscreenWindow(This,hwnd,fFullscreen))
/*** ITaskbarList3 methods ***/
#define ITaskbarList4_SetProgressValue(This,hwnd,ullCompleted,ullTotal) \
    ((This)->lpVtbl->SetProgressValue(This,hwnd,ullCompleted,ullTotal))
#define ITaskbarList4_SetProgressState(This,hwnd,tbpFlags) \
    ((This)->lpVtbl->SetProgressState(This,hwnd,tbpFlags))
#define ITaskbarList4_RegisterTab(This,hwndTab,hwndMDI) \
    ((This)->lpVtbl->RegisterTab(This,hwndTab,hwndMDI))
#define ITaskbarList4_UnregisterTab(This,hwndTab) \
    ((This)->lpVtbl->UnregisterTab(This,hwndTab))
#define ITaskbarList4_SetTabOrder(This,hwndTab,hwndInsertBefore) \
    ((This)->lpVtbl->SetTabOrder(This,hwndTab,hwndInsertBefore))
#define ITaskbarList4_SetTabActive(This,hwndTab,hwndMDI,dwReserved) \
    ((This)->lpVtbl->SetTabActive(This,hwndTab,hwndMDI,dwReserved))
#define ITaskbarList4_ThumbBarAddButtons(This,hwnd,cButtons,pButton) \
    ((This)->lpVtbl->ThumbBarAddButtons(This,hwnd,cButtons,pButton))
#define ITaskbarList4_ThumbBarUpdateButtons(This,hwnd,cButtons,pButton) \
    ((This)->lpVtbl->ThumbBarUpdateButtons(This,hwnd,cButtons,pButton))
#define ITaskbarList4_ThumbBarSetImageList(This,hwnd,himl) \
    ((This)->lpVtbl->ThumbBarSetImageList(This,hwnd,himl))
#define ITaskbarList4_SetOverlayIcon(This,hwnd,hIcon,pszDescription) \
    ((This)->lpVtbl->SetOverlayIcon(This,hwnd,hIcon,pszDescription))
#define ITaskbarList4_SetThumbnailTooltip(This,hwnd,pszTip) \
    ((This)->lpVtbl->SetThumbnailTooltip(This,hwnd,pszTip))
#define ITaskbarList4_SetThumbnailClip(This,hwnd,prcClip) \
    ((This)->lpVtbl->SetThumbnailClip(This,hwnd,prcClip))
/*** ITaskbarList4 methods ***/
#define ITaskbarList4_SetTabProperties(This,hwndTab,stpFlags) \
    ((This)->lpVtbl->SetTabProperties(This,hwndTab,stpFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITaskbarList4_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IExplorerBrowserEvents interface
 */
#ifndef __IExplorerBrowserEvents_INTERFACE_DEFINED__
#define __IExplorerBrowserEvents_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExplorerBrowserEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExplorerBrowserEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExplorerBrowserEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExplorerBrowserEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExplorerBrowserEvents *This);

    /*** IExplorerBrowserEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnNavigationPending)(
        IExplorerBrowserEvents *This,
        PCIDLIST_ABSOLUTE pidlFolder);

    HRESULT (STDMETHODCALLTYPE *OnViewCreated)(
        IExplorerBrowserEvents *This,
        IShellView *psv);

    HRESULT (STDMETHODCALLTYPE *OnNavigationComplete)(
        IExplorerBrowserEvents *This,
        PCIDLIST_ABSOLUTE pidlFolder);

    HRESULT (STDMETHODCALLTYPE *OnNavigationFailed)(
        IExplorerBrowserEvents *This,
        PCIDLIST_ABSOLUTE pidlFolder);

    END_INTERFACE
} IExplorerBrowserEventsVtbl;

interface IExplorerBrowserEvents {
    CONST_VTBL IExplorerBrowserEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExplorerBrowserEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExplorerBrowserEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExplorerBrowserEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExplorerBrowserEvents methods ***/
#define IExplorerBrowserEvents_OnNavigationPending(This,pidlFolder) \
    ((This)->lpVtbl->OnNavigationPending(This,pidlFolder))
#define IExplorerBrowserEvents_OnViewCreated(This,psv) \
    ((This)->lpVtbl->OnViewCreated(This,psv))
#define IExplorerBrowserEvents_OnNavigationComplete(This,pidlFolder) \
    ((This)->lpVtbl->OnNavigationComplete(This,pidlFolder))
#define IExplorerBrowserEvents_OnNavigationFailed(This,pidlFolder) \
    ((This)->lpVtbl->OnNavigationFailed(This,pidlFolder))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExplorerBrowserEvents_INTERFACE_DEFINED__ */

typedef enum EXPLORER_BROWSER_OPTIONS {
    EBO_NONE = 0x0,
    EBO_NAVIGATEONCE = 0x1,
    EBO_SHOWFRAMES = 0x2,
    EBO_ALWAYSNAVIGATE = 0x4,
    EBO_NOTRAVELLOG = 0x8,
    EBO_NOWRAPPERWINDOW = 0x10,
    EBO_HTMLSHAREPOINTVIEW = 0x20,
    EBO_NOBORDER = 0x40,
    EBO_NOPERSISTVIEWSTATE = 0x80
} EXPLORER_BROWSER_OPTIONS;

typedef enum EXPLORER_BROWSER_FILL_FLAGS {
    EBF_NONE = 0x0,
    EBF_SELECTFROMDATAOBJECT = 0x100,
    EBF_NODROPTARGET = 0x200
} EXPLORER_BROWSER_FILL_FLAGS;

/*****************************************************************************
 * IExplorerBrowser interface
 */
#ifndef __IExplorerBrowser_INTERFACE_DEFINED__
#define __IExplorerBrowser_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExplorerBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExplorerBrowserVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExplorerBrowser *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExplorerBrowser *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExplorerBrowser *This);

    /*** IExplorerBrowser methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IExplorerBrowser *This,
        HWND hwndParent,
        const RECT *prc,
        const FOLDERSETTINGS *pfs);

    HRESULT (STDMETHODCALLTYPE *Destroy)(
        IExplorerBrowser *This);

    HRESULT (STDMETHODCALLTYPE *SetRect)(
        IExplorerBrowser *This,
        HDWP *phdwp,
        RECT rcBrowser);

    HRESULT (STDMETHODCALLTYPE *SetPropertyBag)(
        IExplorerBrowser *This,
        LPCWSTR pszPropertyBag);

    HRESULT (STDMETHODCALLTYPE *SetEmptyText)(
        IExplorerBrowser *This,
        LPCWSTR pszEmptyText);

    HRESULT (STDMETHODCALLTYPE *SetFolderSettings)(
        IExplorerBrowser *This,
        const FOLDERSETTINGS *pfs);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IExplorerBrowser *This,
        IExplorerBrowserEvents *psbe,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IExplorerBrowser *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IExplorerBrowser *This,
        EXPLORER_BROWSER_OPTIONS dwFlag);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IExplorerBrowser *This,
        EXPLORER_BROWSER_OPTIONS *pdwFlag);

    HRESULT (STDMETHODCALLTYPE *BrowseToIDList)(
        IExplorerBrowser *This,
        PCUIDLIST_RELATIVE pidl,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *BrowseToObject)(
        IExplorerBrowser *This,
        IUnknown *punk,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *FillFromObject)(
        IExplorerBrowser *This,
        IUnknown *punk,
        EXPLORER_BROWSER_FILL_FLAGS dwFlags);

    HRESULT (STDMETHODCALLTYPE *RemoveAll)(
        IExplorerBrowser *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentView)(
        IExplorerBrowser *This,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IExplorerBrowserVtbl;

interface IExplorerBrowser {
    CONST_VTBL IExplorerBrowserVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExplorerBrowser_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExplorerBrowser_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExplorerBrowser_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExplorerBrowser methods ***/
#define IExplorerBrowser_Initialize(This,hwndParent,prc,pfs) \
    ((This)->lpVtbl->Initialize(This,hwndParent,prc,pfs))
#define IExplorerBrowser_Destroy(This) \
    ((This)->lpVtbl->Destroy(This))
#define IExplorerBrowser_SetRect(This,phdwp,rcBrowser) \
    ((This)->lpVtbl->SetRect(This,phdwp,rcBrowser))
#define IExplorerBrowser_SetPropertyBag(This,pszPropertyBag) \
    ((This)->lpVtbl->SetPropertyBag(This,pszPropertyBag))
#define IExplorerBrowser_SetEmptyText(This,pszEmptyText) \
    ((This)->lpVtbl->SetEmptyText(This,pszEmptyText))
#define IExplorerBrowser_SetFolderSettings(This,pfs) \
    ((This)->lpVtbl->SetFolderSettings(This,pfs))
#define IExplorerBrowser_Advise(This,psbe,pdwCookie) \
    ((This)->lpVtbl->Advise(This,psbe,pdwCookie))
#define IExplorerBrowser_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IExplorerBrowser_SetOptions(This,dwFlag) \
    ((This)->lpVtbl->SetOptions(This,dwFlag))
#define IExplorerBrowser_GetOptions(This,pdwFlag) \
    ((This)->lpVtbl->GetOptions(This,pdwFlag))
#define IExplorerBrowser_BrowseToIDList(This,pidl,uFlags) \
    ((This)->lpVtbl->BrowseToIDList(This,pidl,uFlags))
#define IExplorerBrowser_BrowseToObject(This,punk,uFlags) \
    ((This)->lpVtbl->BrowseToObject(This,punk,uFlags))
#define IExplorerBrowser_FillFromObject(This,punk,dwFlags) \
    ((This)->lpVtbl->FillFromObject(This,punk,dwFlags))
#define IExplorerBrowser_RemoveAll(This) \
    ((This)->lpVtbl->RemoveAll(This))
#define IExplorerBrowser_GetCurrentView(This,riid,ppv) \
    ((This)->lpVtbl->GetCurrentView(This,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExplorerBrowser_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IEnumObjects interface
 */
#ifndef __IEnumObjects_INTERFACE_DEFINED__
#define __IEnumObjects_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumObjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumObjectsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumObjects *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumObjects *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumObjects *This);

    /*** IEnumObjects methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumObjects *This,
        ULONG celt,
        REFIID riid,
        void **rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumObjects *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumObjects *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumObjects *This,
        IEnumObjects **ppenum);

    END_INTERFACE
} IEnumObjectsVtbl;

interface IEnumObjects {
    CONST_VTBL IEnumObjectsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumObjects_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumObjects_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumObjects_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumObjects methods ***/
#define IEnumObjects_Next(This,celt,riid,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,riid,rgelt,pceltFetched))
#define IEnumObjects_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumObjects_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumObjects_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumObjects_RemoteNext_Proxy(
    IEnumObjects *This,
    ULONG celt,
    REFIID riid,
    void **rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumObjects_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumObjects_Next_Proxy(
    ULONG celt,
    REFIID riid,
    void **rgelt,
    ULONG *pceltFetched);
HRESULT IEnumObjects_Next_Stub(
    ULONG celt,
    REFIID riid,
    void **rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumObjects_INTERFACE_DEFINED__ */

enum _OPPROGDLGF {
    OPPROGDLG_DEFAULT = 0x0,
    OPPROGDLG_ENABLEPAUSE = 0x80,
    OPPROGDLG_ALLOWUNDO = 0x100,
    OPPROGDLG_DONTDISPLAYSOURCEPATH = 0x200,
    OPPROGDLG_DONTDISPLAYDESTPATH = 0x400,
    OPPROGDLG_NOMULTIDAYESTIMATES = 0x800,
    OPPROGDLG_DONTDISPLAYLOCATIONS = 0x1000
};
typedef DWORD OPPROGDLGF;

/*****************************************************************************
 * IOperationsProgressDialog interface
 */
#ifndef __IOperationsProgressDialog_INTERFACE_DEFINED__
#define __IOperationsProgressDialog_INTERFACE_DEFINED__

enum _PDMODE {
    PDM_DEFAULT = 0x0,
    PDM_RUN = 0x1,
    PDM_PREFLIGHT = 0x2,
    PDM_UNDOING = 0x4,
    PDM_ERRORSBLOCKING = 0x8,
    PDM_INDETERMINATE = 0x10
};
typedef DWORD PDMODE;

typedef enum PDOPSTATUS {
    PDOPS_RUNNING = 1,
    PDOPS_PAUSED = 2,
    PDOPS_CANCELLED = 3,
    PDOPS_STOPPED = 4,
    PDOPS_ERRORS = 5
} PDOPSTATUS;

EXTERN_C const IID IID_IOperationsProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOperationsProgressDialogVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOperationsProgressDialog *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOperationsProgressDialog *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOperationsProgressDialog *This);

    /*** IOperationsProgressDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *StartProgressDialog)(
        IOperationsProgressDialog *This,
        HWND hwndOwner,
        OPPROGDLGF flags);

    HRESULT (STDMETHODCALLTYPE *StopProgressDialog)(
        IOperationsProgressDialog *This);

    HRESULT (STDMETHODCALLTYPE *SetOperation)(
        IOperationsProgressDialog *This,
        SPACTION action);

    HRESULT (STDMETHODCALLTYPE *SetMode)(
        IOperationsProgressDialog *This,
        PDMODE mode);

    HRESULT (STDMETHODCALLTYPE *UpdateProgress)(
        IOperationsProgressDialog *This,
        ULONGLONG ullPointsCurrent,
        ULONGLONG ullPointsTotal,
        ULONGLONG ullSizeCurrent,
        ULONGLONG ullSizeTotal,
        ULONGLONG ullItemsCurrent,
        ULONGLONG ullItemsTotal);

    HRESULT (STDMETHODCALLTYPE *UpdateLocations)(
        IOperationsProgressDialog *This,
        IShellItem *psiSource,
        IShellItem *psiTarget,
        IShellItem *psiItem);

    HRESULT (STDMETHODCALLTYPE *ResetTimer)(
        IOperationsProgressDialog *This);

    HRESULT (STDMETHODCALLTYPE *PauseTimer)(
        IOperationsProgressDialog *This);

    HRESULT (STDMETHODCALLTYPE *ResumeTimer)(
        IOperationsProgressDialog *This);

    HRESULT (STDMETHODCALLTYPE *GetMilliseconds)(
        IOperationsProgressDialog *This,
        ULONGLONG *pullElapsed,
        ULONGLONG *pullRemaining);

    HRESULT (STDMETHODCALLTYPE *GetOperationStatus)(
        IOperationsProgressDialog *This,
        PDOPSTATUS *popstatus);

    END_INTERFACE
} IOperationsProgressDialogVtbl;

interface IOperationsProgressDialog {
    CONST_VTBL IOperationsProgressDialogVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOperationsProgressDialog_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOperationsProgressDialog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOperationsProgressDialog_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOperationsProgressDialog methods ***/
#define IOperationsProgressDialog_StartProgressDialog(This,hwndOwner,flags) \
    ((This)->lpVtbl->StartProgressDialog(This,hwndOwner,flags))
#define IOperationsProgressDialog_StopProgressDialog(This) \
    ((This)->lpVtbl->StopProgressDialog(This))
#define IOperationsProgressDialog_SetOperation(This,action) \
    ((This)->lpVtbl->SetOperation(This,action))
#define IOperationsProgressDialog_SetMode(This,mode) \
    ((This)->lpVtbl->SetMode(This,mode))
#define IOperationsProgressDialog_UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal) \
    ((This)->lpVtbl->UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal))
#define IOperationsProgressDialog_UpdateLocations(This,psiSource,psiTarget,psiItem) \
    ((This)->lpVtbl->UpdateLocations(This,psiSource,psiTarget,psiItem))
#define IOperationsProgressDialog_ResetTimer(This) \
    ((This)->lpVtbl->ResetTimer(This))
#define IOperationsProgressDialog_PauseTimer(This) \
    ((This)->lpVtbl->PauseTimer(This))
#define IOperationsProgressDialog_ResumeTimer(This) \
    ((This)->lpVtbl->ResumeTimer(This))
#define IOperationsProgressDialog_GetMilliseconds(This,pullElapsed,pullRemaining) \
    ((This)->lpVtbl->GetMilliseconds(This,pullElapsed,pullRemaining))
#define IOperationsProgressDialog_GetOperationStatus(This,popstatus) \
    ((This)->lpVtbl->GetOperationStatus(This,popstatus))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOperationsProgressDialog_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IIOCancelInformation interface
 */
#ifndef __IIOCancelInformation_INTERFACE_DEFINED__
#define __IIOCancelInformation_INTERFACE_DEFINED__

EXTERN_C const IID IID_IIOCancelInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IIOCancelInformationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IIOCancelInformation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IIOCancelInformation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IIOCancelInformation *This);

    /*** IIOCancelInformation methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCancelInformation)(
        IIOCancelInformation *This,
        DWORD dwThreadID,
        UINT uMsgCancel);

    HRESULT (STDMETHODCALLTYPE *GetCancelInformation)(
        IIOCancelInformation *This,
        DWORD *pdwThreadID,
        UINT *puMsgCancel);

    END_INTERFACE
} IIOCancelInformationVtbl;

interface IIOCancelInformation {
    CONST_VTBL IIOCancelInformationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IIOCancelInformation_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IIOCancelInformation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IIOCancelInformation_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IIOCancelInformation methods ***/
#define IIOCancelInformation_SetCancelInformation(This,dwThreadID,uMsgCancel) \
    ((This)->lpVtbl->SetCancelInformation(This,dwThreadID,uMsgCancel))
#define IIOCancelInformation_GetCancelInformation(This,pdwThreadID,puMsgCancel) \
    ((This)->lpVtbl->GetCancelInformation(This,pdwThreadID,puMsgCancel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IIOCancelInformation_INTERFACE_DEFINED__ */

#define FOFX_NOSKIPJUNCTIONS         0x00010000  // Don't avoid binding to junctions (like Task folder, Recycle-Bin)
#define FOFX_PREFERHARDLINK          0x00020000  // Create hard link if possible
#define FOFX_SHOWELEVATIONPROMPT     0x00040000  // Show elevation prompts when error UI is disabled (use with FOF_NOERRORUI)
#define FOFX_RECYCLEONDELETE         0x00080000  // Recycle when deleting, rather than permanently deleting
#define FOFX_EARLYFAILURE            0x00100000  // Fail operation as soon as a single error occurs rather than trying to process other items (applies only when using FOF_NOERRORUI)
#define FOFX_PRESERVEFILEEXTENSIONS  0x00200000  // Rename collisions preserve file extns (use with FOF_RENAMEONCOLLISION)
#define FOFX_KEEPNEWERFILE           0x00400000  // Keep newer file on naming conflicts
#define FOFX_NOCOPYHOOKS             0x00800000  // Don't use copy hooks
#define FOFX_NOMINIMIZEBOX           0x01000000  // Don't allow minimizing the progress dialog
#define FOFX_MOVEACLSACROSSVOLUMES   0x02000000  // Copy security information when performing a cross-volume move operation
#define FOFX_DONTDISPLAYSOURCEPATH   0x04000000  // Don't display the path of source file in progress dialog
#define FOFX_DONTDISPLAYDESTPATH     0x08000000  // Don't display the path of destination file in progress dialog
#define FOFX_REQUIREELEVATION        0x10000000  // User expects the elevation; don't show a dialog to confirm
#define FOFX_ADDUNDORECORD           0x20000000  // This is a user-invoked operation, and should be placed on the undo stack.  This flag is preferred to FOF_ALLOWUNDO
#define FOFX_COPYASDOWNLOAD          0x40000000  // Show Downloading instead of Copying
#define FOFX_DONTDISPLAYLOCATIONS    0x80000000  // Hides the locations line in the progress dialog

/*****************************************************************************
 * IFileOperation interface
 */
#ifndef __IFileOperation_INTERFACE_DEFINED__
#define __IFileOperation_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileOperationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileOperation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileOperation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileOperation *This);

    /*** IFileOperation methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFileOperation *This,
        IFileOperationProgressSink *pfops,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFileOperation *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOperationFlags)(
        IFileOperation *This,
        DWORD dwOperationFlags);

    HRESULT (STDMETHODCALLTYPE *SetProgressMessage)(
        IFileOperation *This,
        LPCWSTR pszMessage);

    HRESULT (STDMETHODCALLTYPE *SetProgressDialog)(
        IFileOperation *This,
        IOperationsProgressDialog *popd);

    HRESULT (STDMETHODCALLTYPE *SetProperties)(
        IFileOperation *This,
        IPropertyChangeArray *pproparray);

    HRESULT (STDMETHODCALLTYPE *SetOwnerWindow)(
        IFileOperation *This,
        HWND hwndOwner);

    HRESULT (STDMETHODCALLTYPE *ApplyPropertiesToItem)(
        IFileOperation *This,
        IShellItem *psiItem);

    HRESULT (STDMETHODCALLTYPE *ApplyPropertiesToItems)(
        IFileOperation *This,
        IUnknown *punkItems);

    HRESULT (STDMETHODCALLTYPE *RenameItem)(
        IFileOperation *This,
        IShellItem *psiItem,
        LPCWSTR pszNewName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *RenameItems)(
        IFileOperation *This,
        IUnknown *pUnkItems,
        LPCWSTR pszNewName);

    HRESULT (STDMETHODCALLTYPE *MoveItem)(
        IFileOperation *This,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *MoveItems)(
        IFileOperation *This,
        IUnknown *punkItems,
        IShellItem *psiDestinationFolder);

    HRESULT (STDMETHODCALLTYPE *CopyItem)(
        IFileOperation *This,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszCopyName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *CopyItems)(
        IFileOperation *This,
        IUnknown *punkItems,
        IShellItem *psiDestinationFolder);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IFileOperation *This,
        IShellItem *psiItem,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *DeleteItems)(
        IFileOperation *This,
        IUnknown *punkItems);

    HRESULT (STDMETHODCALLTYPE *NewItem)(
        IFileOperation *This,
        IShellItem *psiDestinationFolder,
        DWORD dwFileAttributes,
        LPCWSTR pszName,
        LPCWSTR pszTemplateName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *PerformOperations)(
        IFileOperation *This);

    HRESULT (STDMETHODCALLTYPE *GetAnyOperationsAborted)(
        IFileOperation *This,
        BOOL *pfAnyOperationsAborted);

    END_INTERFACE
} IFileOperationVtbl;

interface IFileOperation {
    CONST_VTBL IFileOperationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileOperation_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileOperation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileOperation_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileOperation methods ***/
#define IFileOperation_Advise(This,pfops,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pfops,pdwCookie))
#define IFileOperation_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFileOperation_SetOperationFlags(This,dwOperationFlags) \
    ((This)->lpVtbl->SetOperationFlags(This,dwOperationFlags))
#define IFileOperation_SetProgressMessage(This,pszMessage) \
    ((This)->lpVtbl->SetProgressMessage(This,pszMessage))
#define IFileOperation_SetProgressDialog(This,popd) \
    ((This)->lpVtbl->SetProgressDialog(This,popd))
#define IFileOperation_SetProperties(This,pproparray) \
    ((This)->lpVtbl->SetProperties(This,pproparray))
#define IFileOperation_SetOwnerWindow(This,hwndOwner) \
    ((This)->lpVtbl->SetOwnerWindow(This,hwndOwner))
#define IFileOperation_ApplyPropertiesToItem(This,psiItem) \
    ((This)->lpVtbl->ApplyPropertiesToItem(This,psiItem))
#define IFileOperation_ApplyPropertiesToItems(This,punkItems) \
    ((This)->lpVtbl->ApplyPropertiesToItems(This,punkItems))
#define IFileOperation_RenameItem(This,psiItem,pszNewName,pfopsItem) \
    ((This)->lpVtbl->RenameItem(This,psiItem,pszNewName,pfopsItem))
#define IFileOperation_RenameItems(This,pUnkItems,pszNewName) \
    ((This)->lpVtbl->RenameItems(This,pUnkItems,pszNewName))
#define IFileOperation_MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem) \
    ((This)->lpVtbl->MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem))
#define IFileOperation_MoveItems(This,punkItems,psiDestinationFolder) \
    ((This)->lpVtbl->MoveItems(This,punkItems,psiDestinationFolder))
#define IFileOperation_CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem) \
    ((This)->lpVtbl->CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem))
#define IFileOperation_CopyItems(This,punkItems,psiDestinationFolder) \
    ((This)->lpVtbl->CopyItems(This,punkItems,psiDestinationFolder))
#define IFileOperation_DeleteItem(This,psiItem,pfopsItem) \
    ((This)->lpVtbl->DeleteItem(This,psiItem,pfopsItem))
#define IFileOperation_DeleteItems(This,punkItems) \
    ((This)->lpVtbl->DeleteItems(This,punkItems))
#define IFileOperation_NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem) \
    ((This)->lpVtbl->NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem))
#define IFileOperation_PerformOperations(This) \
    ((This)->lpVtbl->PerformOperations(This))
#define IFileOperation_GetAnyOperationsAborted(This,pfAnyOperationsAborted) \
    ((This)->lpVtbl->GetAnyOperationsAborted(This,pfAnyOperationsAborted))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileOperation_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)

typedef enum FILE_OPERATION_FLAGS2 {
    FOF2_NONE = 0x0,
    FOF2_MERGEFOLDERSONCOLLISION = 0x1
} FILE_OPERATION_FLAGS2;

/*****************************************************************************
 * IFileOperation2 interface
 */
#ifndef __IFileOperation2_INTERFACE_DEFINED__
#define __IFileOperation2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileOperation2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileOperation2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileOperation2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileOperation2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileOperation2 *This);

    /*** IFileOperation methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFileOperation2 *This,
        IFileOperationProgressSink *pfops,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFileOperation2 *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOperationFlags)(
        IFileOperation2 *This,
        DWORD dwOperationFlags);

    HRESULT (STDMETHODCALLTYPE *SetProgressMessage)(
        IFileOperation2 *This,
        LPCWSTR pszMessage);

    HRESULT (STDMETHODCALLTYPE *SetProgressDialog)(
        IFileOperation2 *This,
        IOperationsProgressDialog *popd);

    HRESULT (STDMETHODCALLTYPE *SetProperties)(
        IFileOperation2 *This,
        IPropertyChangeArray *pproparray);

    HRESULT (STDMETHODCALLTYPE *SetOwnerWindow)(
        IFileOperation2 *This,
        HWND hwndOwner);

    HRESULT (STDMETHODCALLTYPE *ApplyPropertiesToItem)(
        IFileOperation2 *This,
        IShellItem *psiItem);

    HRESULT (STDMETHODCALLTYPE *ApplyPropertiesToItems)(
        IFileOperation2 *This,
        IUnknown *punkItems);

    HRESULT (STDMETHODCALLTYPE *RenameItem)(
        IFileOperation2 *This,
        IShellItem *psiItem,
        LPCWSTR pszNewName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *RenameItems)(
        IFileOperation2 *This,
        IUnknown *pUnkItems,
        LPCWSTR pszNewName);

    HRESULT (STDMETHODCALLTYPE *MoveItem)(
        IFileOperation2 *This,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszNewName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *MoveItems)(
        IFileOperation2 *This,
        IUnknown *punkItems,
        IShellItem *psiDestinationFolder);

    HRESULT (STDMETHODCALLTYPE *CopyItem)(
        IFileOperation2 *This,
        IShellItem *psiItem,
        IShellItem *psiDestinationFolder,
        LPCWSTR pszCopyName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *CopyItems)(
        IFileOperation2 *This,
        IUnknown *punkItems,
        IShellItem *psiDestinationFolder);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IFileOperation2 *This,
        IShellItem *psiItem,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *DeleteItems)(
        IFileOperation2 *This,
        IUnknown *punkItems);

    HRESULT (STDMETHODCALLTYPE *NewItem)(
        IFileOperation2 *This,
        IShellItem *psiDestinationFolder,
        DWORD dwFileAttributes,
        LPCWSTR pszName,
        LPCWSTR pszTemplateName,
        IFileOperationProgressSink *pfopsItem);

    HRESULT (STDMETHODCALLTYPE *PerformOperations)(
        IFileOperation2 *This);

    HRESULT (STDMETHODCALLTYPE *GetAnyOperationsAborted)(
        IFileOperation2 *This,
        BOOL *pfAnyOperationsAborted);

    /*** IFileOperation2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOperationFlags2)(
        IFileOperation2 *This,
        FILE_OPERATION_FLAGS2 operationFlags2);

    END_INTERFACE
} IFileOperation2Vtbl;

interface IFileOperation2 {
    CONST_VTBL IFileOperation2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileOperation2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileOperation2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileOperation2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileOperation methods ***/
#define IFileOperation2_Advise(This,pfops,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pfops,pdwCookie))
#define IFileOperation2_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFileOperation2_SetOperationFlags(This,dwOperationFlags) \
    ((This)->lpVtbl->SetOperationFlags(This,dwOperationFlags))
#define IFileOperation2_SetProgressMessage(This,pszMessage) \
    ((This)->lpVtbl->SetProgressMessage(This,pszMessage))
#define IFileOperation2_SetProgressDialog(This,popd) \
    ((This)->lpVtbl->SetProgressDialog(This,popd))
#define IFileOperation2_SetProperties(This,pproparray) \
    ((This)->lpVtbl->SetProperties(This,pproparray))
#define IFileOperation2_SetOwnerWindow(This,hwndOwner) \
    ((This)->lpVtbl->SetOwnerWindow(This,hwndOwner))
#define IFileOperation2_ApplyPropertiesToItem(This,psiItem) \
    ((This)->lpVtbl->ApplyPropertiesToItem(This,psiItem))
#define IFileOperation2_ApplyPropertiesToItems(This,punkItems) \
    ((This)->lpVtbl->ApplyPropertiesToItems(This,punkItems))
#define IFileOperation2_RenameItem(This,psiItem,pszNewName,pfopsItem) \
    ((This)->lpVtbl->RenameItem(This,psiItem,pszNewName,pfopsItem))
#define IFileOperation2_RenameItems(This,pUnkItems,pszNewName) \
    ((This)->lpVtbl->RenameItems(This,pUnkItems,pszNewName))
#define IFileOperation2_MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem) \
    ((This)->lpVtbl->MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem))
#define IFileOperation2_MoveItems(This,punkItems,psiDestinationFolder) \
    ((This)->lpVtbl->MoveItems(This,punkItems,psiDestinationFolder))
#define IFileOperation2_CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem) \
    ((This)->lpVtbl->CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem))
#define IFileOperation2_CopyItems(This,punkItems,psiDestinationFolder) \
    ((This)->lpVtbl->CopyItems(This,punkItems,psiDestinationFolder))
#define IFileOperation2_DeleteItem(This,psiItem,pfopsItem) \
    ((This)->lpVtbl->DeleteItem(This,psiItem,pfopsItem))
#define IFileOperation2_DeleteItems(This,punkItems) \
    ((This)->lpVtbl->DeleteItems(This,punkItems))
#define IFileOperation2_NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem) \
    ((This)->lpVtbl->NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem))
#define IFileOperation2_PerformOperations(This) \
    ((This)->lpVtbl->PerformOperations(This))
#define IFileOperation2_GetAnyOperationsAborted(This,pfAnyOperationsAborted) \
    ((This)->lpVtbl->GetAnyOperationsAborted(This,pfAnyOperationsAborted))
/*** IFileOperation2 methods ***/
#define IFileOperation2_SetOperationFlags2(This,operationFlags2) \
    ((This)->lpVtbl->SetOperationFlags2(This,operationFlags2))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileOperation2_INTERFACE_DEFINED__ */

#endif  // (NTDDI_VERSION >= NTDDI_WIN10_RS4)

/*****************************************************************************
 * IObjectProvider interface
 */
#ifndef __IObjectProvider_INTERFACE_DEFINED__
#define __IObjectProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectProvider *This);

    /*** IObjectProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryObject)(
        IObjectProvider *This,
        REFGUID guidObject,
        REFIID riid,
        void **ppvOut);

    END_INTERFACE
} IObjectProviderVtbl;

interface IObjectProvider {
    CONST_VTBL IObjectProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectProvider methods ***/
#define IObjectProvider_QueryObject(This,guidObject,riid,ppvOut) \
    ((This)->lpVtbl->QueryObject(This,guidObject,riid,ppvOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectProvider_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * INamespaceWalkCB interface
 */
#ifndef __INamespaceWalkCB_INTERFACE_DEFINED__
#define __INamespaceWalkCB_INTERFACE_DEFINED__

EXTERN_C const IID IID_INamespaceWalkCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INamespaceWalkCBVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INamespaceWalkCB *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INamespaceWalkCB *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INamespaceWalkCB *This);

    /*** INamespaceWalkCB methods ***/
    HRESULT (STDMETHODCALLTYPE *FoundItem)(
        INamespaceWalkCB *This,
        IShellFolder *psf,
        PCUITEMID_CHILD pidl);

    HRESULT (STDMETHODCALLTYPE *EnterFolder)(
        INamespaceWalkCB *This,
        IShellFolder *psf,
        PCUITEMID_CHILD pidl);

    HRESULT (STDMETHODCALLTYPE *LeaveFolder)(
        INamespaceWalkCB *This,
        IShellFolder *psf,
        PCUITEMID_CHILD pidl);

    HRESULT (STDMETHODCALLTYPE *InitializeProgressDialog)(
        INamespaceWalkCB *This,
        LPWSTR *ppszTitle,
        LPWSTR *ppszCancel);

    END_INTERFACE
} INamespaceWalkCBVtbl;

interface INamespaceWalkCB {
    CONST_VTBL INamespaceWalkCBVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INamespaceWalkCB_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INamespaceWalkCB_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INamespaceWalkCB_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INamespaceWalkCB methods ***/
#define INamespaceWalkCB_FoundItem(This,psf,pidl) \
    ((This)->lpVtbl->FoundItem(This,psf,pidl))
#define INamespaceWalkCB_EnterFolder(This,psf,pidl) \
    ((This)->lpVtbl->EnterFolder(This,psf,pidl))
#define INamespaceWalkCB_LeaveFolder(This,psf,pidl) \
    ((This)->lpVtbl->LeaveFolder(This,psf,pidl))
#define INamespaceWalkCB_InitializeProgressDialog(This,ppszTitle,ppszCancel) \
    ((This)->lpVtbl->InitializeProgressDialog(This,ppszTitle,ppszCancel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INamespaceWalkCB_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * INamespaceWalkCB2 interface
 */
#ifndef __INamespaceWalkCB2_INTERFACE_DEFINED__
#define __INamespaceWalkCB2_INTERFACE_DEFINED__

EXTERN_C const IID IID_INamespaceWalkCB2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INamespaceWalkCB2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INamespaceWalkCB2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INamespaceWalkCB2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INamespaceWalkCB2 *This);

    /*** INamespaceWalkCB methods ***/
    HRESULT (STDMETHODCALLTYPE *FoundItem)(
        INamespaceWalkCB2 *This,
        IShellFolder *psf,
        PCUITEMID_CHILD pidl);

    HRESULT (STDMETHODCALLTYPE *EnterFolder)(
        INamespaceWalkCB2 *This,
        IShellFolder *psf,
        PCUITEMID_CHILD pidl);

    HRESULT (STDMETHODCALLTYPE *LeaveFolder)(
        INamespaceWalkCB2 *This,
        IShellFolder *psf,
        PCUITEMID_CHILD pidl);

    HRESULT (STDMETHODCALLTYPE *InitializeProgressDialog)(
        INamespaceWalkCB2 *This,
        LPWSTR *ppszTitle,
        LPWSTR *ppszCancel);

    /*** INamespaceWalkCB2 methods ***/
    HRESULT (STDMETHODCALLTYPE *WalkComplete)(
        INamespaceWalkCB2 *This,
        HRESULT hr);

    END_INTERFACE
} INamespaceWalkCB2Vtbl;

interface INamespaceWalkCB2 {
    CONST_VTBL INamespaceWalkCB2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INamespaceWalkCB2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INamespaceWalkCB2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INamespaceWalkCB2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INamespaceWalkCB methods ***/
#define INamespaceWalkCB2_FoundItem(This,psf,pidl) \
    ((This)->lpVtbl->FoundItem(This,psf,pidl))
#define INamespaceWalkCB2_EnterFolder(This,psf,pidl) \
    ((This)->lpVtbl->EnterFolder(This,psf,pidl))
#define INamespaceWalkCB2_LeaveFolder(This,psf,pidl) \
    ((This)->lpVtbl->LeaveFolder(This,psf,pidl))
#define INamespaceWalkCB2_InitializeProgressDialog(This,ppszTitle,ppszCancel) \
    ((This)->lpVtbl->InitializeProgressDialog(This,ppszTitle,ppszCancel))
/*** INamespaceWalkCB2 methods ***/
#define INamespaceWalkCB2_WalkComplete(This,hr) \
    ((This)->lpVtbl->WalkComplete(This,hr))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INamespaceWalkCB2_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * INamespaceWalk interface
 */
#ifndef __INamespaceWalk_INTERFACE_DEFINED__
#define __INamespaceWalk_INTERFACE_DEFINED__

typedef enum NAMESPACEWALKFLAG {
    NSWF_DEFAULT = 0x0,
    NSWF_NONE_IMPLIES_ALL = 0x1,
    NSWF_ONE_IMPLIES_ALL = 0x2,
    NSWF_DONT_TRAVERSE_LINKS = 0x4,
    NSWF_DONT_ACCUMULATE_RESULT = 0x8,
    NSWF_TRAVERSE_STREAM_JUNCTIONS = 0x10,
    NSWF_FILESYSTEM_ONLY = 0x20,
    NSWF_SHOW_PROGRESS = 0x40,
    NSWF_FLAG_VIEWORDER = 0x80,
    NSWF_IGNORE_AUTOPLAY_HIDA = 0x100,
    NSWF_ASYNC = 0x200,
    NSWF_DONT_RESOLVE_LINKS = 0x400,
    NSWF_ACCUMULATE_FOLDERS = 0x800,
    NSWF_DONT_SORT = 0x1000,
    NSWF_USE_TRANSFER_MEDIUM = 0x2000,
    NSWF_DONT_TRAVERSE_STREAM_JUNCTIONS = 0x4000,
    NSWF_ANY_IMPLIES_ALL = 0x8000
} NAMESPACEWALKFLAG;


EXTERN_C const IID IID_INamespaceWalk;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INamespaceWalkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INamespaceWalk *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INamespaceWalk *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INamespaceWalk *This);

    /*** INamespaceWalk methods ***/
    HRESULT (STDMETHODCALLTYPE *Walk)(
        INamespaceWalk *This,
        IUnknown *punkToWalk,
        DWORD dwFlags,
        int cDepth,
        INamespaceWalkCB *pnswcb);

    HRESULT (STDMETHODCALLTYPE *GetIDArrayResult)(
        INamespaceWalk *This,
        UINT *pcItems,
        PIDLIST_ABSOLUTE **prgpidl);

    END_INTERFACE
} INamespaceWalkVtbl;

interface INamespaceWalk {
    CONST_VTBL INamespaceWalkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INamespaceWalk_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INamespaceWalk_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INamespaceWalk_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INamespaceWalk methods ***/
#define INamespaceWalk_Walk(This,punkToWalk,dwFlags,cDepth,pnswcb) \
    ((This)->lpVtbl->Walk(This,punkToWalk,dwFlags,cDepth,pnswcb))
#define INamespaceWalk_GetIDArrayResult(This,pcItems,prgpidl) \
    ((This)->lpVtbl->GetIDArrayResult(This,pcItems,prgpidl))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INamespaceWalk_INTERFACE_DEFINED__ */

#endif  // NTDDI_WINXP || (_WIN32_IE >= _WIN32_IE_IE70)

__inline void FreeIDListArray( PIDLIST_RELATIVE *ppidls, UINT cItems)
{
     UINT i;
     for (i = 0; i < cItems; i++)
     {
         CoTaskMemFree((PVOID)ppidls[i]);
     }
     CoTaskMemFree(ppidls);
}
#define FreeIDListArrayFull FreeIDListArray
#define FreeIDListArrayChild FreeIDListArray

#include <pshpack8.h>

typedef struct tagBANDSITEINFO {
    DWORD dwMask;
    DWORD dwState;
    DWORD dwStyle;
} BANDSITEINFO;

#include <poppack.h>

enum tagBANDSITECID {
    BSID_BANDADDED = 0,
    BSID_BANDREMOVED = 1
};

#define BSIM_STATE          0x00000001
#define BSIM_STYLE          0x00000002

#define BSSF_VISIBLE        0x00000001
#define BSSF_NOTITLE        0x00000002
#define BSSF_UNDELETEABLE   0x00001000

#define BSIS_AUTOGRIPPER               0x00000000
#define BSIS_NOGRIPPER                 0x00000001
#define BSIS_ALWAYSGRIPPER             0x00000002
#define BSIS_LEFTALIGN                 0x00000004
#define BSIS_SINGLECLICK               0x00000008
#define BSIS_NOCONTEXTMENU             0x00000010
#define BSIS_NODROPTARGET              0x00000020
#define BSIS_NOCAPTION                 0x00000040
#define BSIS_PREFERNOLINEBREAK         0x00000080
#define BSIS_LOCKED                    0x00000100
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define BSIS_PRESERVEORDERDURINGLAYOUT 0x00000200
#define BSIS_FIXEDORDER                0x00000400
#endif  // _WIN32_IE_IE70

#define SID_SBandSite IID_IBandSite
#define CGID_BandSite IID_IBandSite

/*****************************************************************************
 * IBandSite interface
 */
#ifndef __IBandSite_INTERFACE_DEFINED__
#define __IBandSite_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBandSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBandSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBandSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBandSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBandSite *This);

    /*** IBandSite methods ***/
    HRESULT (STDMETHODCALLTYPE *AddBand)(
        IBandSite *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *EnumBands)(
        IBandSite *This,
        UINT uBand,
        DWORD *pdwBandID);

    HRESULT (STDMETHODCALLTYPE *QueryBand)(
        IBandSite *This,
        DWORD dwBandID,
        IDeskBand **ppstb,
        DWORD *pdwState,
        LPWSTR pszName,
        int cchName);

    HRESULT (STDMETHODCALLTYPE *SetBandState)(
        IBandSite *This,
        DWORD dwBandID,
        DWORD dwMask,
        DWORD dwState);

    HRESULT (STDMETHODCALLTYPE *RemoveBand)(
        IBandSite *This,
        DWORD dwBandID);

    HRESULT (STDMETHODCALLTYPE *GetBandObject)(
        IBandSite *This,
        DWORD dwBandID,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *SetBandSiteInfo)(
        IBandSite *This,
        const BANDSITEINFO *pbsinfo);

    HRESULT (STDMETHODCALLTYPE *GetBandSiteInfo)(
        IBandSite *This,
        BANDSITEINFO *pbsinfo);

    END_INTERFACE
} IBandSiteVtbl;

interface IBandSite {
    CONST_VTBL IBandSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBandSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBandSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBandSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBandSite methods ***/
#define IBandSite_AddBand(This,punk) \
    ((This)->lpVtbl->AddBand(This,punk))
#define IBandSite_EnumBands(This,uBand,pdwBandID) \
    ((This)->lpVtbl->EnumBands(This,uBand,pdwBandID))
#define IBandSite_QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName) \
    ((This)->lpVtbl->QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName))
#define IBandSite_SetBandState(This,dwBandID,dwMask,dwState) \
    ((This)->lpVtbl->SetBandState(This,dwBandID,dwMask,dwState))
#define IBandSite_RemoveBand(This,dwBandID) \
    ((This)->lpVtbl->RemoveBand(This,dwBandID))
#define IBandSite_GetBandObject(This,dwBandID,riid,ppv) \
    ((This)->lpVtbl->GetBandObject(This,dwBandID,riid,ppv))
#define IBandSite_SetBandSiteInfo(This,pbsinfo) \
    ((This)->lpVtbl->SetBandSiteInfo(This,pbsinfo))
#define IBandSite_GetBandSiteInfo(This,pbsinfo) \
    ((This)->lpVtbl->GetBandSiteInfo(This,pbsinfo))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBandSite_RemoteQueryBand_Proxy(
    IBandSite *This,
    DWORD dwBandID,
    IDeskBand **ppstb,
    DWORD *pdwState,
    LPWSTR pszName,
    int cchName);

void __RPC_STUB IBandSite_RemoteQueryBand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBandSite_QueryBand_Proxy(
    DWORD dwBandID,
    IDeskBand **ppstb,
    DWORD *pdwState,
    LPWSTR pszName,
    int cchName);
HRESULT IBandSite_QueryBand_Stub(
    DWORD dwBandID,
    IDeskBand **ppstb,
    DWORD *pdwState,
    LPWSTR pszName,
    int cchName);
#endif /* __IBandSite_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP)

/*****************************************************************************
 * IModalWindow interface
 */
#ifndef __IModalWindow_INTERFACE_DEFINED__
#define __IModalWindow_INTERFACE_DEFINED__

EXTERN_C const IID IID_IModalWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IModalWindowVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IModalWindow *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IModalWindow *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IModalWindow *This);

    /*** IModalWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *Show)(
        IModalWindow *This,
        HWND hwndOwner);

    END_INTERFACE
} IModalWindowVtbl;

interface IModalWindow {
    CONST_VTBL IModalWindowVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IModalWindow_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IModalWindow_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IModalWindow_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IModalWindow methods ***/
#define IModalWindow_Show(This,hwndOwner) \
    ((This)->lpVtbl->Show(This,hwndOwner))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IModalWindow_RemoteShow_Proxy(
    IModalWindow *This,
    HWND hwndOwner);

void __RPC_STUB IModalWindow_RemoteShow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IModalWindow_Show_Proxy(
    HWND hwndOwner);
HRESULT IModalWindow_Show_Stub(
    HWND hwndOwner);
#endif /* __IModalWindow_INTERFACE_DEFINED__ */

#endif  // NTDDI_WINXP

/*****************************************************************************
 * IContextMenuSite interface
 */
#ifndef __IContextMenuSite_INTERFACE_DEFINED__
#define __IContextMenuSite_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContextMenuSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContextMenuSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContextMenuSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContextMenuSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContextMenuSite *This);

    /*** IContextMenuSite methods ***/
    HRESULT (STDMETHODCALLTYPE *DoContextMenuPopup)(
        IContextMenuSite *This,
        IUnknown *punkContextMenu,
        UINT fFlags,
        POINT pt);

    END_INTERFACE
} IContextMenuSiteVtbl;

interface IContextMenuSite {
    CONST_VTBL IContextMenuSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContextMenuSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContextMenuSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContextMenuSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContextMenuSite methods ***/
#define IContextMenuSite_DoContextMenuPopup(This,punkContextMenu,fFlags,pt) \
    ((This)->lpVtbl->DoContextMenuPopup(This,punkContextMenu,fFlags,pt))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContextMenuSite_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
#if (NTDDI_VERSION >= NTDDI_WINXP)

/*****************************************************************************
 * IMenuBand interface
 */
#ifndef __IMenuBand_INTERFACE_DEFINED__
#define __IMenuBand_INTERFACE_DEFINED__

enum tagMENUBANDHANDLERCID {
    MBHANDCID_PIDLSELECT = 0
};

EXTERN_C const IID IID_IMenuBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMenuBandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMenuBand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMenuBand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMenuBand *This);

    /*** IMenuBand methods ***/
    HRESULT (STDMETHODCALLTYPE *IsMenuMessage)(
        IMenuBand *This,
        MSG *pmsg);

    HRESULT (STDMETHODCALLTYPE *TranslateMenuMessage)(
        IMenuBand *This,
        MSG *pmsg,
        LRESULT *plRet);

    END_INTERFACE
} IMenuBandVtbl;

interface IMenuBand {
    CONST_VTBL IMenuBandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMenuBand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMenuBand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMenuBand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMenuBand methods ***/
#define IMenuBand_IsMenuMessage(This,pmsg) \
    ((This)->lpVtbl->IsMenuMessage(This,pmsg))
#define IMenuBand_TranslateMenuMessage(This,pmsg,plRet) \
    ((This)->lpVtbl->TranslateMenuMessage(This,pmsg,plRet))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMenuBand_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRegTreeItem interface
 */
#ifndef __IRegTreeItem_INTERFACE_DEFINED__
#define __IRegTreeItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRegTreeItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRegTreeItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRegTreeItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRegTreeItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRegTreeItem *This);

    /*** IRegTreeItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCheckState)(
        IRegTreeItem *This,
        BOOL *pbCheck);

    HRESULT (STDMETHODCALLTYPE *SetCheckState)(
        IRegTreeItem *This,
        BOOL bCheck);

    END_INTERFACE
} IRegTreeItemVtbl;

interface IRegTreeItem {
    CONST_VTBL IRegTreeItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRegTreeItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRegTreeItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRegTreeItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRegTreeItem methods ***/
#define IRegTreeItem_GetCheckState(This,pbCheck) \
    ((This)->lpVtbl->GetCheckState(This,pbCheck))
#define IRegTreeItem_SetCheckState(This,bCheck) \
    ((This)->lpVtbl->SetCheckState(This,bCheck))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRegTreeItem_INTERFACE_DEFINED__ */

#endif  // NTDDI_WINXP
#endif  // NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)

#if (_WIN32_IE >= _WIN32_IE_IE60)

/*****************************************************************************
 * IDeskBar interface
 */
#ifndef __IDeskBar_INTERFACE_DEFINED__
#define __IDeskBar_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDeskBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDeskBarVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDeskBar *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDeskBar *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDeskBar *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IDeskBar *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IDeskBar *This,
        BOOL fEnterMode);

    /*** IDeskBar methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClient)(
        IDeskBar *This,
        IUnknown *punkClient);

    HRESULT (STDMETHODCALLTYPE *GetClient)(
        IDeskBar *This,
        IUnknown **ppunkClient);

    HRESULT (STDMETHODCALLTYPE *OnPosRectChangeDB)(
        IDeskBar *This,
        RECT *prc);

    END_INTERFACE
} IDeskBarVtbl;

interface IDeskBar {
    CONST_VTBL IDeskBarVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDeskBar_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDeskBar_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDeskBar_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IDeskBar_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IDeskBar_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IDeskBar methods ***/
#define IDeskBar_SetClient(This,punkClient) \
    ((This)->lpVtbl->SetClient(This,punkClient))
#define IDeskBar_GetClient(This,ppunkClient) \
    ((This)->lpVtbl->GetClient(This,ppunkClient))
#define IDeskBar_OnPosRectChangeDB(This,prc) \
    ((This)->lpVtbl->OnPosRectChangeDB(This,prc))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDeskBar_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMenuPopup interface
 */
#ifndef __IMenuPopup_INTERFACE_DEFINED__
#define __IMenuPopup_INTERFACE_DEFINED__

enum tagMENUPOPUPSELECT {
    MPOS_EXECUTE = 0,
    MPOS_FULLCANCEL = 1,
    MPOS_CANCELLEVEL = 2,
    MPOS_SELECTLEFT = 3,
    MPOS_SELECTRIGHT = 4,
    MPOS_CHILDTRACKING = 5
};

enum tagMENUPOPUPPOPUPFLAGS {
    MPPF_SETFOCUS = 0x1,
    MPPF_INITIALSELECT = 0x2,
    MPPF_NOANIMATE = 0x4,
    MPPF_KEYBOARD = 0x10,
    MPPF_REPOSITION = 0x20,
    MPPF_FORCEZORDER = 0x40,
    MPPF_FINALSELECT = 0x80,
    MPPF_TOP = 0x20000000,
    MPPF_LEFT = 0x40000000,
    MPPF_RIGHT = 0x60000000,
    MPPF_BOTTOM = (int)0x80000000,
    MPPF_POS_MASK = (int)0xe0000000,
    MPPF_ALIGN_LEFT = 0x2000000,
    MPPF_ALIGN_RIGHT = 0x4000000
};
typedef int MP_POPUPFLAGS;

EXTERN_C const IID IID_IMenuPopup;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMenuPopupVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMenuPopup *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMenuPopup *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMenuPopup *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IMenuPopup *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IMenuPopup *This,
        BOOL fEnterMode);

    /*** IDeskBar methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClient)(
        IMenuPopup *This,
        IUnknown *punkClient);

    HRESULT (STDMETHODCALLTYPE *GetClient)(
        IMenuPopup *This,
        IUnknown **ppunkClient);

    HRESULT (STDMETHODCALLTYPE *OnPosRectChangeDB)(
        IMenuPopup *This,
        RECT *prc);

    /*** IMenuPopup methods ***/
    HRESULT (STDMETHODCALLTYPE *Popup)(
        IMenuPopup *This,
        POINTL *ppt,
        RECTL *prcExclude,
        MP_POPUPFLAGS dwFlags);

    HRESULT (STDMETHODCALLTYPE *OnSelect)(
        IMenuPopup *This,
        DWORD dwSelectType);

    HRESULT (STDMETHODCALLTYPE *SetSubMenu)(
        IMenuPopup *This,
        IMenuPopup *pmp,
        BOOL fSet);

    END_INTERFACE
} IMenuPopupVtbl;

interface IMenuPopup {
    CONST_VTBL IMenuPopupVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMenuPopup_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMenuPopup_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMenuPopup_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IMenuPopup_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IMenuPopup_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IDeskBar methods ***/
#define IMenuPopup_SetClient(This,punkClient) \
    ((This)->lpVtbl->SetClient(This,punkClient))
#define IMenuPopup_GetClient(This,ppunkClient) \
    ((This)->lpVtbl->GetClient(This,ppunkClient))
#define IMenuPopup_OnPosRectChangeDB(This,prc) \
    ((This)->lpVtbl->OnPosRectChangeDB(This,prc))
/*** IMenuPopup methods ***/
#define IMenuPopup_Popup(This,ppt,prcExclude,dwFlags) \
    ((This)->lpVtbl->Popup(This,ppt,prcExclude,dwFlags))
#define IMenuPopup_OnSelect(This,dwSelectType) \
    ((This)->lpVtbl->OnSelect(This,dwSelectType))
#define IMenuPopup_SetSubMenu(This,pmp,fSet) \
    ((This)->lpVtbl->SetSubMenu(This,pmp,fSet))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMenuPopup_INTERFACE_DEFINED__ */

#endif  // _WIN32_IE_IE60

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef enum FILE_USAGE_TYPE {
    FUT_PLAYING = 0,
    FUT_EDITING = 1,
    FUT_GENERIC = 2
} FILE_USAGE_TYPE;

#define OF_CAP_CANSWITCHTO     0x0001
#define OF_CAP_CANCLOSE        0x0002

/*****************************************************************************
 * IFileIsInUse interface
 */
#ifndef __IFileIsInUse_INTERFACE_DEFINED__
#define __IFileIsInUse_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileIsInUse;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileIsInUseVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileIsInUse *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileIsInUse *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileIsInUse *This);

    /*** IFileIsInUse methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAppName)(
        IFileIsInUse *This,
        LPWSTR *ppszName);

    HRESULT (STDMETHODCALLTYPE *GetUsage)(
        IFileIsInUse *This,
        FILE_USAGE_TYPE *pfut);

    HRESULT (STDMETHODCALLTYPE *GetCapabilities)(
        IFileIsInUse *This,
        DWORD *pdwCapFlags);

    HRESULT (STDMETHODCALLTYPE *GetSwitchToHWND)(
        IFileIsInUse *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *CloseFile)(
        IFileIsInUse *This);

    END_INTERFACE
} IFileIsInUseVtbl;

interface IFileIsInUse {
    CONST_VTBL IFileIsInUseVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileIsInUse_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileIsInUse_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileIsInUse_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileIsInUse methods ***/
#define IFileIsInUse_GetAppName(This,ppszName) \
    ((This)->lpVtbl->GetAppName(This,ppszName))
#define IFileIsInUse_GetUsage(This,pfut) \
    ((This)->lpVtbl->GetUsage(This,pfut))
#define IFileIsInUse_GetCapabilities(This,pdwCapFlags) \
    ((This)->lpVtbl->GetCapabilities(This,pdwCapFlags))
#define IFileIsInUse_GetSwitchToHWND(This,phwnd) \
    ((This)->lpVtbl->GetSwitchToHWND(This,phwnd))
#define IFileIsInUse_CloseFile(This) \
    ((This)->lpVtbl->CloseFile(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileIsInUse_INTERFACE_DEFINED__ */


#ifndef __IFileDialog_FWD_DEFINED__
#define __IFileDialog_FWD_DEFINED__
typedef interface IFileDialog IFileDialog;
#endif /* __IFileDialog_FWD_DEFINED__ */

typedef enum FDE_OVERWRITE_RESPONSE {
    FDEOR_DEFAULT = 0,
    FDEOR_ACCEPT = 1,
    FDEOR_REFUSE = 2
} FDE_OVERWRITE_RESPONSE;

typedef enum FDE_SHAREVIOLATION_RESPONSE {
    FDESVR_DEFAULT = 0,
    FDESVR_ACCEPT = 1,
    FDESVR_REFUSE = 2
} FDE_SHAREVIOLATION_RESPONSE;

typedef enum FDAP {
    FDAP_BOTTOM = 0,
    FDAP_TOP = 1
} FDAP;

/*****************************************************************************
 * IFileDialogEvents interface
 */
#ifndef __IFileDialogEvents_INTERFACE_DEFINED__
#define __IFileDialogEvents_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileDialogEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileDialogEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileDialogEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileDialogEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileDialogEvents *This);

    /*** IFileDialogEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnFileOk)(
        IFileDialogEvents *This,
        IFileDialog *pfd);

    HRESULT (STDMETHODCALLTYPE *OnFolderChanging)(
        IFileDialogEvents *This,
        IFileDialog *pfd,
        IShellItem *psiFolder);

    HRESULT (STDMETHODCALLTYPE *OnFolderChange)(
        IFileDialogEvents *This,
        IFileDialog *pfd);

    HRESULT (STDMETHODCALLTYPE *OnSelectionChange)(
        IFileDialogEvents *This,
        IFileDialog *pfd);

    HRESULT (STDMETHODCALLTYPE *OnShareViolation)(
        IFileDialogEvents *This,
        IFileDialog *pfd,
        IShellItem *psi,
        FDE_SHAREVIOLATION_RESPONSE *pResponse);

    HRESULT (STDMETHODCALLTYPE *OnTypeChange)(
        IFileDialogEvents *This,
        IFileDialog *pfd);

    HRESULT (STDMETHODCALLTYPE *OnOverwrite)(
        IFileDialogEvents *This,
        IFileDialog *pfd,
        IShellItem *psi,
        FDE_OVERWRITE_RESPONSE *pResponse);

    END_INTERFACE
} IFileDialogEventsVtbl;

interface IFileDialogEvents {
    CONST_VTBL IFileDialogEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileDialogEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileDialogEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileDialogEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileDialogEvents methods ***/
#define IFileDialogEvents_OnFileOk(This,pfd) \
    ((This)->lpVtbl->OnFileOk(This,pfd))
#define IFileDialogEvents_OnFolderChanging(This,pfd,psiFolder) \
    ((This)->lpVtbl->OnFolderChanging(This,pfd,psiFolder))
#define IFileDialogEvents_OnFolderChange(This,pfd) \
    ((This)->lpVtbl->OnFolderChange(This,pfd))
#define IFileDialogEvents_OnSelectionChange(This,pfd) \
    ((This)->lpVtbl->OnSelectionChange(This,pfd))
#define IFileDialogEvents_OnShareViolation(This,pfd,psi,pResponse) \
    ((This)->lpVtbl->OnShareViolation(This,pfd,psi,pResponse))
#define IFileDialogEvents_OnTypeChange(This,pfd) \
    ((This)->lpVtbl->OnTypeChange(This,pfd))
#define IFileDialogEvents_OnOverwrite(This,pfd,psi,pResponse) \
    ((This)->lpVtbl->OnOverwrite(This,pfd,psi,pResponse))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileDialogEvents_INTERFACE_DEFINED__ */


#ifndef __IShellItemFilter_FWD_DEFINED__
#define __IShellItemFilter_FWD_DEFINED__
typedef interface IShellItemFilter IShellItemFilter;
#endif /* __IShellItemFilter_FWD_DEFINED__ */

/*****************************************************************************
 * IFileDialog interface
 */
#ifndef __IFileDialog_INTERFACE_DEFINED__
#define __IFileDialog_INTERFACE_DEFINED__

enum _FILEOPENDIALOGOPTIONS {
    FOS_OVERWRITEPROMPT = 0x2,
    FOS_STRICTFILETYPES = 0x4,
    FOS_NOCHANGEDIR = 0x8,
    FOS_PICKFOLDERS = 0x20,
    FOS_FORCEFILESYSTEM = 0x40,
    FOS_ALLNONSTORAGEITEMS = 0x80,
    FOS_NOVALIDATE = 0x100,
    FOS_ALLOWMULTISELECT = 0x200,
    FOS_PATHMUSTEXIST = 0x800,
    FOS_FILEMUSTEXIST = 0x1000,
    FOS_CREATEPROMPT = 0x2000,
    FOS_SHAREAWARE = 0x4000,
    FOS_NOREADONLYRETURN = 0x8000,
    FOS_NOTESTFILECREATE = 0x10000,
    FOS_HIDEMRUPLACES = 0x20000,
    FOS_HIDEPINNEDPLACES = 0x40000,
    FOS_NODEREFERENCELINKS = 0x100000,
    FOS_OKBUTTONNEEDSINTERACTION = 0x200000,
    FOS_DONTADDTORECENT = 0x2000000,
    FOS_FORCESHOWHIDDEN = 0x10000000,
    FOS_DEFAULTNOMINIMODE = 0x20000000,
    FOS_FORCEPREVIEWPANEON = 0x40000000,
    FOS_SUPPORTSTREAMABLEITEMS = 0x80000000
};
typedef DWORD FILEOPENDIALOGOPTIONS;

EXTERN_C const IID IID_IFileDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileDialogVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileDialog *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileDialog *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileDialog *This);

    /*** IModalWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *Show)(
        IFileDialog *This,
        HWND hwndOwner);

    /*** IFileDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFileTypes)(
        IFileDialog *This,
        UINT cFileTypes,
        const COMDLG_FILTERSPEC *rgFilterSpec);

    HRESULT (STDMETHODCALLTYPE *SetFileTypeIndex)(
        IFileDialog *This,
        UINT iFileType);

    HRESULT (STDMETHODCALLTYPE *GetFileTypeIndex)(
        IFileDialog *This,
        UINT *piFileType);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFileDialog *This,
        IFileDialogEvents *pfde,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFileDialog *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IFileDialog *This,
        FILEOPENDIALOGOPTIONS fos);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IFileDialog *This,
        FILEOPENDIALOGOPTIONS *pfos);

    HRESULT (STDMETHODCALLTYPE *SetDefaultFolder)(
        IFileDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetFolder)(
        IFileDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IFileDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *GetCurrentSelection)(
        IFileDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *SetFileName)(
        IFileDialog *This,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetFileName)(
        IFileDialog *This,
        LPWSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *SetTitle)(
        IFileDialog *This,
        LPCWSTR pszTitle);

    HRESULT (STDMETHODCALLTYPE *SetOkButtonLabel)(
        IFileDialog *This,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *SetFileNameLabel)(
        IFileDialog *This,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *GetResult)(
        IFileDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *AddPlace)(
        IFileDialog *This,
        IShellItem *psi,
        FDAP fdap);

    HRESULT (STDMETHODCALLTYPE *SetDefaultExtension)(
        IFileDialog *This,
        LPCWSTR pszDefaultExtension);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IFileDialog *This,
        HRESULT hr);

    HRESULT (STDMETHODCALLTYPE *SetClientGuid)(
        IFileDialog *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *ClearClientData)(
        IFileDialog *This);

    HRESULT (STDMETHODCALLTYPE *SetFilter)(
        IFileDialog *This,
        IShellItemFilter *pFilter);

    END_INTERFACE
} IFileDialogVtbl;

interface IFileDialog {
    CONST_VTBL IFileDialogVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileDialog_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileDialog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileDialog_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IModalWindow methods ***/
#define IFileDialog_Show(This,hwndOwner) \
    ((This)->lpVtbl->Show(This,hwndOwner))
/*** IFileDialog methods ***/
#define IFileDialog_SetFileTypes(This,cFileTypes,rgFilterSpec) \
    ((This)->lpVtbl->SetFileTypes(This,cFileTypes,rgFilterSpec))
#define IFileDialog_SetFileTypeIndex(This,iFileType) \
    ((This)->lpVtbl->SetFileTypeIndex(This,iFileType))
#define IFileDialog_GetFileTypeIndex(This,piFileType) \
    ((This)->lpVtbl->GetFileTypeIndex(This,piFileType))
#define IFileDialog_Advise(This,pfde,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pfde,pdwCookie))
#define IFileDialog_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFileDialog_SetOptions(This,fos) \
    ((This)->lpVtbl->SetOptions(This,fos))
#define IFileDialog_GetOptions(This,pfos) \
    ((This)->lpVtbl->GetOptions(This,pfos))
#define IFileDialog_SetDefaultFolder(This,psi) \
    ((This)->lpVtbl->SetDefaultFolder(This,psi))
#define IFileDialog_SetFolder(This,psi) \
    ((This)->lpVtbl->SetFolder(This,psi))
#define IFileDialog_GetFolder(This,ppsi) \
    ((This)->lpVtbl->GetFolder(This,ppsi))
#define IFileDialog_GetCurrentSelection(This,ppsi) \
    ((This)->lpVtbl->GetCurrentSelection(This,ppsi))
#define IFileDialog_SetFileName(This,pszName) \
    ((This)->lpVtbl->SetFileName(This,pszName))
#define IFileDialog_GetFileName(This,pszName) \
    ((This)->lpVtbl->GetFileName(This,pszName))
#define IFileDialog_SetTitle(This,pszTitle) \
    ((This)->lpVtbl->SetTitle(This,pszTitle))
#define IFileDialog_SetOkButtonLabel(This,pszText) \
    ((This)->lpVtbl->SetOkButtonLabel(This,pszText))
#define IFileDialog_SetFileNameLabel(This,pszLabel) \
    ((This)->lpVtbl->SetFileNameLabel(This,pszLabel))
#define IFileDialog_GetResult(This,ppsi) \
    ((This)->lpVtbl->GetResult(This,ppsi))
#define IFileDialog_AddPlace(This,psi,fdap) \
    ((This)->lpVtbl->AddPlace(This,psi,fdap))
#define IFileDialog_SetDefaultExtension(This,pszDefaultExtension) \
    ((This)->lpVtbl->SetDefaultExtension(This,pszDefaultExtension))
#define IFileDialog_Close(This,hr) \
    ((This)->lpVtbl->Close(This,hr))
#define IFileDialog_SetClientGuid(This,guid) \
    ((This)->lpVtbl->SetClientGuid(This,guid))
#define IFileDialog_ClearClientData(This) \
    ((This)->lpVtbl->ClearClientData(This))
#define IFileDialog_SetFilter(This,pFilter) \
    ((This)->lpVtbl->SetFilter(This,pFilter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileDialog_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFileSaveDialog interface
 */
#ifndef __IFileSaveDialog_INTERFACE_DEFINED__
#define __IFileSaveDialog_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileSaveDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileSaveDialogVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileSaveDialog *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileSaveDialog *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileSaveDialog *This);

    /*** IModalWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *Show)(
        IFileSaveDialog *This,
        HWND hwndOwner);

    /*** IFileDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFileTypes)(
        IFileSaveDialog *This,
        UINT cFileTypes,
        const COMDLG_FILTERSPEC *rgFilterSpec);

    HRESULT (STDMETHODCALLTYPE *SetFileTypeIndex)(
        IFileSaveDialog *This,
        UINT iFileType);

    HRESULT (STDMETHODCALLTYPE *GetFileTypeIndex)(
        IFileSaveDialog *This,
        UINT *piFileType);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFileSaveDialog *This,
        IFileDialogEvents *pfde,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFileSaveDialog *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IFileSaveDialog *This,
        FILEOPENDIALOGOPTIONS fos);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IFileSaveDialog *This,
        FILEOPENDIALOGOPTIONS *pfos);

    HRESULT (STDMETHODCALLTYPE *SetDefaultFolder)(
        IFileSaveDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetFolder)(
        IFileSaveDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IFileSaveDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *GetCurrentSelection)(
        IFileSaveDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *SetFileName)(
        IFileSaveDialog *This,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetFileName)(
        IFileSaveDialog *This,
        LPWSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *SetTitle)(
        IFileSaveDialog *This,
        LPCWSTR pszTitle);

    HRESULT (STDMETHODCALLTYPE *SetOkButtonLabel)(
        IFileSaveDialog *This,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *SetFileNameLabel)(
        IFileSaveDialog *This,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *GetResult)(
        IFileSaveDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *AddPlace)(
        IFileSaveDialog *This,
        IShellItem *psi,
        FDAP fdap);

    HRESULT (STDMETHODCALLTYPE *SetDefaultExtension)(
        IFileSaveDialog *This,
        LPCWSTR pszDefaultExtension);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IFileSaveDialog *This,
        HRESULT hr);

    HRESULT (STDMETHODCALLTYPE *SetClientGuid)(
        IFileSaveDialog *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *ClearClientData)(
        IFileSaveDialog *This);

    HRESULT (STDMETHODCALLTYPE *SetFilter)(
        IFileSaveDialog *This,
        IShellItemFilter *pFilter);

    /*** IFileSaveDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSaveAsItem)(
        IFileSaveDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetProperties)(
        IFileSaveDialog *This,
        IPropertyStore *pStore);

    HRESULT (STDMETHODCALLTYPE *SetCollectedProperties)(
        IFileSaveDialog *This,
        IPropertyDescriptionList *pList,
        BOOL fAppendDefault);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IFileSaveDialog *This,
        IPropertyStore **ppStore);

    HRESULT (STDMETHODCALLTYPE *ApplyProperties)(
        IFileSaveDialog *This,
        IShellItem *psi,
        IPropertyStore *pStore,
        HWND hwnd,
        IFileOperationProgressSink *pSink);

    END_INTERFACE
} IFileSaveDialogVtbl;

interface IFileSaveDialog {
    CONST_VTBL IFileSaveDialogVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileSaveDialog_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileSaveDialog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileSaveDialog_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IModalWindow methods ***/
#define IFileSaveDialog_Show(This,hwndOwner) \
    ((This)->lpVtbl->Show(This,hwndOwner))
/*** IFileDialog methods ***/
#define IFileSaveDialog_SetFileTypes(This,cFileTypes,rgFilterSpec) \
    ((This)->lpVtbl->SetFileTypes(This,cFileTypes,rgFilterSpec))
#define IFileSaveDialog_SetFileTypeIndex(This,iFileType) \
    ((This)->lpVtbl->SetFileTypeIndex(This,iFileType))
#define IFileSaveDialog_GetFileTypeIndex(This,piFileType) \
    ((This)->lpVtbl->GetFileTypeIndex(This,piFileType))
#define IFileSaveDialog_Advise(This,pfde,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pfde,pdwCookie))
#define IFileSaveDialog_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFileSaveDialog_SetOptions(This,fos) \
    ((This)->lpVtbl->SetOptions(This,fos))
#define IFileSaveDialog_GetOptions(This,pfos) \
    ((This)->lpVtbl->GetOptions(This,pfos))
#define IFileSaveDialog_SetDefaultFolder(This,psi) \
    ((This)->lpVtbl->SetDefaultFolder(This,psi))
#define IFileSaveDialog_SetFolder(This,psi) \
    ((This)->lpVtbl->SetFolder(This,psi))
#define IFileSaveDialog_GetFolder(This,ppsi) \
    ((This)->lpVtbl->GetFolder(This,ppsi))
#define IFileSaveDialog_GetCurrentSelection(This,ppsi) \
    ((This)->lpVtbl->GetCurrentSelection(This,ppsi))
#define IFileSaveDialog_SetFileName(This,pszName) \
    ((This)->lpVtbl->SetFileName(This,pszName))
#define IFileSaveDialog_GetFileName(This,pszName) \
    ((This)->lpVtbl->GetFileName(This,pszName))
#define IFileSaveDialog_SetTitle(This,pszTitle) \
    ((This)->lpVtbl->SetTitle(This,pszTitle))
#define IFileSaveDialog_SetOkButtonLabel(This,pszText) \
    ((This)->lpVtbl->SetOkButtonLabel(This,pszText))
#define IFileSaveDialog_SetFileNameLabel(This,pszLabel) \
    ((This)->lpVtbl->SetFileNameLabel(This,pszLabel))
#define IFileSaveDialog_GetResult(This,ppsi) \
    ((This)->lpVtbl->GetResult(This,ppsi))
#define IFileSaveDialog_AddPlace(This,psi,fdap) \
    ((This)->lpVtbl->AddPlace(This,psi,fdap))
#define IFileSaveDialog_SetDefaultExtension(This,pszDefaultExtension) \
    ((This)->lpVtbl->SetDefaultExtension(This,pszDefaultExtension))
#define IFileSaveDialog_Close(This,hr) \
    ((This)->lpVtbl->Close(This,hr))
#define IFileSaveDialog_SetClientGuid(This,guid) \
    ((This)->lpVtbl->SetClientGuid(This,guid))
#define IFileSaveDialog_ClearClientData(This) \
    ((This)->lpVtbl->ClearClientData(This))
#define IFileSaveDialog_SetFilter(This,pFilter) \
    ((This)->lpVtbl->SetFilter(This,pFilter))
/*** IFileSaveDialog methods ***/
#define IFileSaveDialog_SetSaveAsItem(This,psi) \
    ((This)->lpVtbl->SetSaveAsItem(This,psi))
#define IFileSaveDialog_SetProperties(This,pStore) \
    ((This)->lpVtbl->SetProperties(This,pStore))
#define IFileSaveDialog_SetCollectedProperties(This,pList,fAppendDefault) \
    ((This)->lpVtbl->SetCollectedProperties(This,pList,fAppendDefault))
#define IFileSaveDialog_GetProperties(This,ppStore) \
    ((This)->lpVtbl->GetProperties(This,ppStore))
#define IFileSaveDialog_ApplyProperties(This,psi,pStore,hwnd,pSink) \
    ((This)->lpVtbl->ApplyProperties(This,psi,pStore,hwnd,pSink))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileSaveDialog_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFileOpenDialog interface
 */
#ifndef __IFileOpenDialog_INTERFACE_DEFINED__
#define __IFileOpenDialog_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileOpenDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileOpenDialogVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileOpenDialog *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileOpenDialog *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileOpenDialog *This);

    /*** IModalWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *Show)(
        IFileOpenDialog *This,
        HWND hwndOwner);

    /*** IFileDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFileTypes)(
        IFileOpenDialog *This,
        UINT cFileTypes,
        const COMDLG_FILTERSPEC *rgFilterSpec);

    HRESULT (STDMETHODCALLTYPE *SetFileTypeIndex)(
        IFileOpenDialog *This,
        UINT iFileType);

    HRESULT (STDMETHODCALLTYPE *GetFileTypeIndex)(
        IFileOpenDialog *This,
        UINT *piFileType);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFileOpenDialog *This,
        IFileDialogEvents *pfde,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFileOpenDialog *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IFileOpenDialog *This,
        FILEOPENDIALOGOPTIONS fos);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IFileOpenDialog *This,
        FILEOPENDIALOGOPTIONS *pfos);

    HRESULT (STDMETHODCALLTYPE *SetDefaultFolder)(
        IFileOpenDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetFolder)(
        IFileOpenDialog *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IFileOpenDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *GetCurrentSelection)(
        IFileOpenDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *SetFileName)(
        IFileOpenDialog *This,
        LPCWSTR pszName);

    HRESULT (STDMETHODCALLTYPE *GetFileName)(
        IFileOpenDialog *This,
        LPWSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *SetTitle)(
        IFileOpenDialog *This,
        LPCWSTR pszTitle);

    HRESULT (STDMETHODCALLTYPE *SetOkButtonLabel)(
        IFileOpenDialog *This,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *SetFileNameLabel)(
        IFileOpenDialog *This,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *GetResult)(
        IFileOpenDialog *This,
        IShellItem **ppsi);

    HRESULT (STDMETHODCALLTYPE *AddPlace)(
        IFileOpenDialog *This,
        IShellItem *psi,
        FDAP fdap);

    HRESULT (STDMETHODCALLTYPE *SetDefaultExtension)(
        IFileOpenDialog *This,
        LPCWSTR pszDefaultExtension);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IFileOpenDialog *This,
        HRESULT hr);

    HRESULT (STDMETHODCALLTYPE *SetClientGuid)(
        IFileOpenDialog *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *ClearClientData)(
        IFileOpenDialog *This);

    HRESULT (STDMETHODCALLTYPE *SetFilter)(
        IFileOpenDialog *This,
        IShellItemFilter *pFilter);

    /*** IFileOpenDialog methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResults)(
        IFileOpenDialog *This,
        IShellItemArray **ppenum);

    HRESULT (STDMETHODCALLTYPE *GetSelectedItems)(
        IFileOpenDialog *This,
        IShellItemArray **ppsai);

    END_INTERFACE
} IFileOpenDialogVtbl;

interface IFileOpenDialog {
    CONST_VTBL IFileOpenDialogVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileOpenDialog_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileOpenDialog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileOpenDialog_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IModalWindow methods ***/
#define IFileOpenDialog_Show(This,hwndOwner) \
    ((This)->lpVtbl->Show(This,hwndOwner))
/*** IFileDialog methods ***/
#define IFileOpenDialog_SetFileTypes(This,cFileTypes,rgFilterSpec) \
    ((This)->lpVtbl->SetFileTypes(This,cFileTypes,rgFilterSpec))
#define IFileOpenDialog_SetFileTypeIndex(This,iFileType) \
    ((This)->lpVtbl->SetFileTypeIndex(This,iFileType))
#define IFileOpenDialog_GetFileTypeIndex(This,piFileType) \
    ((This)->lpVtbl->GetFileTypeIndex(This,piFileType))
#define IFileOpenDialog_Advise(This,pfde,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pfde,pdwCookie))
#define IFileOpenDialog_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFileOpenDialog_SetOptions(This,fos) \
    ((This)->lpVtbl->SetOptions(This,fos))
#define IFileOpenDialog_GetOptions(This,pfos) \
    ((This)->lpVtbl->GetOptions(This,pfos))
#define IFileOpenDialog_SetDefaultFolder(This,psi) \
    ((This)->lpVtbl->SetDefaultFolder(This,psi))
#define IFileOpenDialog_SetFolder(This,psi) \
    ((This)->lpVtbl->SetFolder(This,psi))
#define IFileOpenDialog_GetFolder(This,ppsi) \
    ((This)->lpVtbl->GetFolder(This,ppsi))
#define IFileOpenDialog_GetCurrentSelection(This,ppsi) \
    ((This)->lpVtbl->GetCurrentSelection(This,ppsi))
#define IFileOpenDialog_SetFileName(This,pszName) \
    ((This)->lpVtbl->SetFileName(This,pszName))
#define IFileOpenDialog_GetFileName(This,pszName) \
    ((This)->lpVtbl->GetFileName(This,pszName))
#define IFileOpenDialog_SetTitle(This,pszTitle) \
    ((This)->lpVtbl->SetTitle(This,pszTitle))
#define IFileOpenDialog_SetOkButtonLabel(This,pszText) \
    ((This)->lpVtbl->SetOkButtonLabel(This,pszText))
#define IFileOpenDialog_SetFileNameLabel(This,pszLabel) \
    ((This)->lpVtbl->SetFileNameLabel(This,pszLabel))
#define IFileOpenDialog_GetResult(This,ppsi) \
    ((This)->lpVtbl->GetResult(This,ppsi))
#define IFileOpenDialog_AddPlace(This,psi,fdap) \
    ((This)->lpVtbl->AddPlace(This,psi,fdap))
#define IFileOpenDialog_SetDefaultExtension(This,pszDefaultExtension) \
    ((This)->lpVtbl->SetDefaultExtension(This,pszDefaultExtension))
#define IFileOpenDialog_Close(This,hr) \
    ((This)->lpVtbl->Close(This,hr))
#define IFileOpenDialog_SetClientGuid(This,guid) \
    ((This)->lpVtbl->SetClientGuid(This,guid))
#define IFileOpenDialog_ClearClientData(This) \
    ((This)->lpVtbl->ClearClientData(This))
#define IFileOpenDialog_SetFilter(This,pFilter) \
    ((This)->lpVtbl->SetFilter(This,pFilter))
/*** IFileOpenDialog methods ***/
#define IFileOpenDialog_GetResults(This,ppenum) \
    ((This)->lpVtbl->GetResults(This,ppenum))
#define IFileOpenDialog_GetSelectedItems(This,ppsai) \
    ((This)->lpVtbl->GetSelectedItems(This,ppsai))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileOpenDialog_INTERFACE_DEFINED__ */

typedef enum CDCONTROLSTATEF {
    CDCS_INACTIVE = 0x0,
    CDCS_ENABLED = 0x1,
    CDCS_VISIBLE = 0x2,
    CDCS_ENABLEDVISIBLE = 0x3
} CDCONTROLSTATEF;

/*****************************************************************************
 * IFileDialogCustomize interface
 */
#ifndef __IFileDialogCustomize_INTERFACE_DEFINED__
#define __IFileDialogCustomize_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileDialogCustomize;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileDialogCustomizeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileDialogCustomize *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileDialogCustomize *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileDialogCustomize *This);

    /*** IFileDialogCustomize methods ***/
    HRESULT (STDMETHODCALLTYPE *EnableOpenDropDown)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *AddMenu)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *AddPushButton)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *AddComboBox)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *AddRadioButtonList)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *AddCheckButton)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszLabel,
        BOOL bChecked);

    HRESULT (STDMETHODCALLTYPE *AddEditBox)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *AddSeparator)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *AddText)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *SetControlLabel)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *GetControlState)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        CDCONTROLSTATEF *pdwState);

    HRESULT (STDMETHODCALLTYPE *SetControlState)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        CDCONTROLSTATEF dwState);

    HRESULT (STDMETHODCALLTYPE *GetEditBoxText)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        WCHAR **ppszText);

    HRESULT (STDMETHODCALLTYPE *SetEditBoxText)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszText);

    HRESULT (STDMETHODCALLTYPE *GetCheckButtonState)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        BOOL *pbChecked);

    HRESULT (STDMETHODCALLTYPE *SetCheckButtonState)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        BOOL bChecked);

    HRESULT (STDMETHODCALLTYPE *AddControlItem)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD dwIDItem,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *RemoveControlItem)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD dwIDItem);

    HRESULT (STDMETHODCALLTYPE *RemoveAllControlItems)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *GetControlItemState)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD dwIDItem,
        CDCONTROLSTATEF *pdwState);

    HRESULT (STDMETHODCALLTYPE *SetControlItemState)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD dwIDItem,
        CDCONTROLSTATEF dwState);

    HRESULT (STDMETHODCALLTYPE *GetSelectedControlItem)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD *pdwIDItem);

    HRESULT (STDMETHODCALLTYPE *SetSelectedControlItem)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD dwIDItem);

    HRESULT (STDMETHODCALLTYPE *StartVisualGroup)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        LPCWSTR pszLabel);

    HRESULT (STDMETHODCALLTYPE *EndVisualGroup)(
        IFileDialogCustomize *This);

    HRESULT (STDMETHODCALLTYPE *MakeProminent)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl);

    HRESULT (STDMETHODCALLTYPE *SetControlItemText)(
        IFileDialogCustomize *This,
        DWORD dwIDCtl,
        DWORD dwIDItem,
        LPCWSTR pszLabel);

    END_INTERFACE
} IFileDialogCustomizeVtbl;

interface IFileDialogCustomize {
    CONST_VTBL IFileDialogCustomizeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileDialogCustomize_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileDialogCustomize_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileDialogCustomize_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileDialogCustomize methods ***/
#define IFileDialogCustomize_EnableOpenDropDown(This,dwIDCtl) \
    ((This)->lpVtbl->EnableOpenDropDown(This,dwIDCtl))
#define IFileDialogCustomize_AddMenu(This,dwIDCtl,pszLabel) \
    ((This)->lpVtbl->AddMenu(This,dwIDCtl,pszLabel))
#define IFileDialogCustomize_AddPushButton(This,dwIDCtl,pszLabel) \
    ((This)->lpVtbl->AddPushButton(This,dwIDCtl,pszLabel))
#define IFileDialogCustomize_AddComboBox(This,dwIDCtl) \
    ((This)->lpVtbl->AddComboBox(This,dwIDCtl))
#define IFileDialogCustomize_AddRadioButtonList(This,dwIDCtl) \
    ((This)->lpVtbl->AddRadioButtonList(This,dwIDCtl))
#define IFileDialogCustomize_AddCheckButton(This,dwIDCtl,pszLabel,bChecked) \
    ((This)->lpVtbl->AddCheckButton(This,dwIDCtl,pszLabel,bChecked))
#define IFileDialogCustomize_AddEditBox(This,dwIDCtl,pszText) \
    ((This)->lpVtbl->AddEditBox(This,dwIDCtl,pszText))
#define IFileDialogCustomize_AddSeparator(This,dwIDCtl) \
    ((This)->lpVtbl->AddSeparator(This,dwIDCtl))
#define IFileDialogCustomize_AddText(This,dwIDCtl,pszText) \
    ((This)->lpVtbl->AddText(This,dwIDCtl,pszText))
#define IFileDialogCustomize_SetControlLabel(This,dwIDCtl,pszLabel) \
    ((This)->lpVtbl->SetControlLabel(This,dwIDCtl,pszLabel))
#define IFileDialogCustomize_GetControlState(This,dwIDCtl,pdwState) \
    ((This)->lpVtbl->GetControlState(This,dwIDCtl,pdwState))
#define IFileDialogCustomize_SetControlState(This,dwIDCtl,dwState) \
    ((This)->lpVtbl->SetControlState(This,dwIDCtl,dwState))
#define IFileDialogCustomize_GetEditBoxText(This,dwIDCtl,ppszText) \
    ((This)->lpVtbl->GetEditBoxText(This,dwIDCtl,ppszText))
#define IFileDialogCustomize_SetEditBoxText(This,dwIDCtl,pszText) \
    ((This)->lpVtbl->SetEditBoxText(This,dwIDCtl,pszText))
#define IFileDialogCustomize_GetCheckButtonState(This,dwIDCtl,pbChecked) \
    ((This)->lpVtbl->GetCheckButtonState(This,dwIDCtl,pbChecked))
#define IFileDialogCustomize_SetCheckButtonState(This,dwIDCtl,bChecked) \
    ((This)->lpVtbl->SetCheckButtonState(This,dwIDCtl,bChecked))
#define IFileDialogCustomize_AddControlItem(This,dwIDCtl,dwIDItem,pszLabel) \
    ((This)->lpVtbl->AddControlItem(This,dwIDCtl,dwIDItem,pszLabel))
#define IFileDialogCustomize_RemoveControlItem(This,dwIDCtl,dwIDItem) \
    ((This)->lpVtbl->RemoveControlItem(This,dwIDCtl,dwIDItem))
#define IFileDialogCustomize_RemoveAllControlItems(This,dwIDCtl) \
    ((This)->lpVtbl->RemoveAllControlItems(This,dwIDCtl))
#define IFileDialogCustomize_GetControlItemState(This,dwIDCtl,dwIDItem,pdwState) \
    ((This)->lpVtbl->GetControlItemState(This,dwIDCtl,dwIDItem,pdwState))
#define IFileDialogCustomize_SetControlItemState(This,dwIDCtl,dwIDItem,dwState) \
    ((This)->lpVtbl->SetControlItemState(This,dwIDCtl,dwIDItem,dwState))
#define IFileDialogCustomize_GetSelectedControlItem(This,dwIDCtl,pdwIDItem) \
    ((This)->lpVtbl->GetSelectedControlItem(This,dwIDCtl,pdwIDItem))
#define IFileDialogCustomize_SetSelectedControlItem(This,dwIDCtl,dwIDItem) \
    ((This)->lpVtbl->SetSelectedControlItem(This,dwIDCtl,dwIDItem))
#define IFileDialogCustomize_StartVisualGroup(This,dwIDCtl,pszLabel) \
    ((This)->lpVtbl->StartVisualGroup(This,dwIDCtl,pszLabel))
#define IFileDialogCustomize_EndVisualGroup(This) \
    ((This)->lpVtbl->EndVisualGroup(This))
#define IFileDialogCustomize_MakeProminent(This,dwIDCtl) \
    ((This)->lpVtbl->MakeProminent(This,dwIDCtl))
#define IFileDialogCustomize_SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel) \
    ((This)->lpVtbl->SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileDialogCustomize_INTERFACE_DEFINED__ */

typedef enum ASSOCIATIONLEVEL {
    AL_MACHINE = 0,
    AL_EFFECTIVE = 1,
    AL_USER = 2
} ASSOCIATIONLEVEL;

typedef enum ASSOCIATIONTYPE {
    AT_FILEEXTENSION = 0,
    AT_URLPROTOCOL = 1,
    AT_STARTMENUCLIENT = 2,
    AT_MIMETYPE = 3
} ASSOCIATIONTYPE;

/*****************************************************************************
 * IApplicationAssociationRegistration interface
 */
#ifndef __IApplicationAssociationRegistration_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistration_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApplicationAssociationRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationAssociationRegistrationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationAssociationRegistration *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationAssociationRegistration *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationAssociationRegistration *This);

    /*** IApplicationAssociationRegistration methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryCurrentDefault)(
        IApplicationAssociationRegistration *This,
        LPCWSTR pszQuery,
        ASSOCIATIONTYPE atQueryType,
        ASSOCIATIONLEVEL alQueryLevel,
        LPWSTR *ppszAssociation);

    HRESULT (STDMETHODCALLTYPE *QueryAppIsDefault)(
        IApplicationAssociationRegistration *This,
        LPCWSTR pszQuery,
        ASSOCIATIONTYPE atQueryType,
        ASSOCIATIONLEVEL alQueryLevel,
        LPCWSTR pszAppRegistryName,
        BOOL *pfDefault);

    HRESULT (STDMETHODCALLTYPE *QueryAppIsDefaultAll)(
        IApplicationAssociationRegistration *This,
        ASSOCIATIONLEVEL alQueryLevel,
        LPCWSTR pszAppRegistryName,
        BOOL *pfDefault);

    HRESULT (STDMETHODCALLTYPE *SetAppAsDefault)(
        IApplicationAssociationRegistration *This,
        LPCWSTR pszAppRegistryName,
        LPCWSTR pszSet,
        ASSOCIATIONTYPE atSetType);

    HRESULT (STDMETHODCALLTYPE *SetAppAsDefaultAll)(
        IApplicationAssociationRegistration *This,
        LPCWSTR pszAppRegistryName);

    HRESULT (STDMETHODCALLTYPE *ClearUserAssociations)(
        IApplicationAssociationRegistration *This);

    END_INTERFACE
} IApplicationAssociationRegistrationVtbl;

interface IApplicationAssociationRegistration {
    CONST_VTBL IApplicationAssociationRegistrationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationAssociationRegistration_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationAssociationRegistration_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationAssociationRegistration_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationAssociationRegistration methods ***/
#define IApplicationAssociationRegistration_QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation) \
    ((This)->lpVtbl->QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation))
#define IApplicationAssociationRegistration_QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault) \
    ((This)->lpVtbl->QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault))
#define IApplicationAssociationRegistration_QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault) \
    ((This)->lpVtbl->QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault))
#define IApplicationAssociationRegistration_SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType) \
    ((This)->lpVtbl->SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType))
#define IApplicationAssociationRegistration_SetAppAsDefaultAll(This,pszAppRegistryName) \
    ((This)->lpVtbl->SetAppAsDefaultAll(This,pszAppRegistryName))
#define IApplicationAssociationRegistration_ClearUserAssociations(This) \
    ((This)->lpVtbl->ClearUserAssociations(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationAssociationRegistration_INTERFACE_DEFINED__ */

SHSTDAPI SHCreateAssociationRegistration( REFIID riid,  void **ppv);

#endif  // NTDDI_VISTA

#include <pshpack1.h>

typedef struct DELEGATEITEMID {
    WORD cbSize;
    WORD wOuter;
    WORD cbInner;
    BYTE rgb[ 1 ];
} DELEGATEITEMID;

#include <poppack.h>

typedef const UNALIGNED DELEGATEITEMID *PCDELEGATEITEMID;
typedef UNALIGNED DELEGATEITEMID *PDELEGATEITEMID;

/*****************************************************************************
 * IDelegateFolder interface
 */
#ifndef __IDelegateFolder_INTERFACE_DEFINED__
#define __IDelegateFolder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDelegateFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDelegateFolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDelegateFolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDelegateFolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDelegateFolder *This);

    /*** IDelegateFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *SetItemAlloc)(
        IDelegateFolder *This,
        IMalloc *pmalloc);

    END_INTERFACE
} IDelegateFolderVtbl;

interface IDelegateFolder {
    CONST_VTBL IDelegateFolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDelegateFolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDelegateFolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDelegateFolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDelegateFolder methods ***/
#define IDelegateFolder_SetItemAlloc(This,pmalloc) \
    ((This)->lpVtbl->SetItemAlloc(This,pmalloc))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDelegateFolder_INTERFACE_DEFINED__ */

#if (_WIN32_IE >= _WIN32_IE_IE60)

// INTERFACE: IBrowserFrameOptions
//
// This interface was implemented so a browser or host can ask a ShellView/ShelNameSpace what
// kind of 'Behavior' is appropriate for that view.
//
//    IBrowserFrameOptions::GetBrowserOptions()
//       dwMask is the logical OR of bits to look for.  pdwOptions is not optional and
//       it's return value will always equal or will be a subset of dwMask.
//       If the function succeeds, the return value must be S_OK and pdwOptions needs to be filled in.
//       If the function fails, pdwOptions needs to be filled in with BFO_NONE.
//

/*****************************************************************************
 * IBrowserFrameOptions interface
 */
#ifndef __IBrowserFrameOptions_INTERFACE_DEFINED__
#define __IBrowserFrameOptions_INTERFACE_DEFINED__

typedef IBrowserFrameOptions *LPBROWSERFRAMEOPTIONS;

enum _BROWSERFRAMEOPTIONS {
    BFO_NONE = 0x0,
    BFO_BROWSER_PERSIST_SETTINGS = 0x1,
    BFO_RENAME_FOLDER_OPTIONS_TOINTERNET = 0x2,
    BFO_BOTH_OPTIONS = 0x4,
    BIF_PREFER_INTERNET_SHORTCUT = 0x8,
    BFO_BROWSE_NO_IN_NEW_PROCESS = 0x10,
    BFO_ENABLE_HYPERLINK_TRACKING = 0x20,
    BFO_USE_IE_OFFLINE_SUPPORT = 0x40,
    BFO_SUBSTITUE_INTERNET_START_PAGE = 0x80,
    BFO_USE_IE_LOGOBANDING = 0x100,
    BFO_ADD_IE_TOCAPTIONBAR = 0x200,
    BFO_USE_DIALUP_REF = 0x400,
    BFO_USE_IE_TOOLBAR = 0x800,
    BFO_NO_PARENT_FOLDER_SUPPORT = 0x1000,
    BFO_NO_REOPEN_NEXT_RESTART = 0x2000,
    BFO_GO_HOME_PAGE = 0x4000,
    BFO_PREFER_IEPROCESS = 0x8000,
    BFO_SHOW_NAVIGATION_CANCELLED = 0x10000,
    BFO_USE_IE_STATUSBAR = 0x20000,
    BFO_QUERY_ALL = (int)0xffffffff
};
typedef DWORD BROWSERFRAMEOPTIONS;

EXTERN_C const IID IID_IBrowserFrameOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBrowserFrameOptionsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBrowserFrameOptions *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBrowserFrameOptions *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBrowserFrameOptions *This);

    /*** IBrowserFrameOptions methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFrameOptions)(
        IBrowserFrameOptions *This,
        BROWSERFRAMEOPTIONS dwMask,
        BROWSERFRAMEOPTIONS *pdwOptions);

    END_INTERFACE
} IBrowserFrameOptionsVtbl;

interface IBrowserFrameOptions {
    CONST_VTBL IBrowserFrameOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBrowserFrameOptions_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBrowserFrameOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBrowserFrameOptions_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBrowserFrameOptions methods ***/
#define IBrowserFrameOptions_GetFrameOptions(This,dwMask,pdwOptions) \
    ((This)->lpVtbl->GetFrameOptions(This,dwMask,pdwOptions))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBrowserFrameOptions_INTERFACE_DEFINED__ */

#endif  // _WIN32_IE_IE60

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

typedef enum NWMF {
    NWMF_UNLOADING = 0x1,
    NWMF_USERINITED = 0x2,
    NWMF_FIRST = 0x4,
    NWMF_OVERRIDEKEY = 0x8,
    NWMF_SHOWHELP = 0x10,
    NWMF_HTMLDIALOG = 0x20,
    NWMF_FROMDIALOGCHILD = 0x40,
    NWMF_USERREQUESTED = 0x80,
    NWMF_USERALLOWED = 0x100,
    NWMF_FORCEWINDOW = 0x10000,
    NWMF_FORCETAB = 0x20000,
    NWMF_SUGGESTWINDOW = 0x40000,
    NWMF_SUGGESTTAB = 0x80000,
    NWMF_INACTIVETAB = 0x100000
} NWMF;

#define SID_SNewWindowManager IID_INewWindowManager

/*****************************************************************************
 * INewWindowManager interface
 */
#ifndef __INewWindowManager_INTERFACE_DEFINED__
#define __INewWindowManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_INewWindowManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INewWindowManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INewWindowManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INewWindowManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INewWindowManager *This);

    /*** INewWindowManager methods ***/
    HRESULT (STDMETHODCALLTYPE *EvaluateNewWindow)(
        INewWindowManager *This,
        LPCWSTR pszUrl,
        LPCWSTR pszName,
        LPCWSTR pszUrlContext,
        LPCWSTR pszFeatures,
        BOOL fReplace,
        DWORD dwFlags,
        DWORD dwUserActionTime);

    END_INTERFACE
} INewWindowManagerVtbl;

interface INewWindowManager {
    CONST_VTBL INewWindowManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INewWindowManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INewWindowManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INewWindowManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INewWindowManager methods ***/
#define INewWindowManager_EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime) \
    ((This)->lpVtbl->EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INewWindowManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAttachmentExecute interface
 */
#ifndef __IAttachmentExecute_INTERFACE_DEFINED__
#define __IAttachmentExecute_INTERFACE_DEFINED__

typedef enum ATTACHMENT_PROMPT {
    ATTACHMENT_PROMPT_NONE = 0x0,
    ATTACHMENT_PROMPT_SAVE = 0x1,
    ATTACHMENT_PROMPT_EXEC = 0x2,
    ATTACHMENT_PROMPT_EXEC_OR_SAVE = 0x3
} ATTACHMENT_PROMPT;

typedef enum ATTACHMENT_ACTION {
    ATTACHMENT_ACTION_CANCEL = 0x0,
    ATTACHMENT_ACTION_SAVE = 0x1,
    ATTACHMENT_ACTION_EXEC = 0x2
} ATTACHMENT_ACTION;

EXTERN_C const IID IID_IAttachmentExecute;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAttachmentExecuteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAttachmentExecute *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAttachmentExecute *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAttachmentExecute *This);

    /*** IAttachmentExecute methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClientTitle)(
        IAttachmentExecute *This,
        LPCWSTR pszTitle);

    HRESULT (STDMETHODCALLTYPE *SetClientGuid)(
        IAttachmentExecute *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *SetLocalPath)(
        IAttachmentExecute *This,
        LPCWSTR pszLocalPath);

    HRESULT (STDMETHODCALLTYPE *SetFileName)(
        IAttachmentExecute *This,
        LPCWSTR pszFileName);

    HRESULT (STDMETHODCALLTYPE *SetSource)(
        IAttachmentExecute *This,
        LPCWSTR pszSource);

    HRESULT (STDMETHODCALLTYPE *SetReferrer)(
        IAttachmentExecute *This,
        LPCWSTR pszReferrer);

    HRESULT (STDMETHODCALLTYPE *CheckPolicy)(
        IAttachmentExecute *This);

    HRESULT (STDMETHODCALLTYPE *Prompt)(
        IAttachmentExecute *This,
        HWND hwnd,
        ATTACHMENT_PROMPT prompt,
        ATTACHMENT_ACTION *paction);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IAttachmentExecute *This);

    HRESULT (STDMETHODCALLTYPE *Execute)(
        IAttachmentExecute *This,
        HWND hwnd,
        LPCWSTR pszVerb,
        HANDLE *phProcess);

    HRESULT (STDMETHODCALLTYPE *SaveWithUI)(
        IAttachmentExecute *This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *ClearClientState)(
        IAttachmentExecute *This);

    END_INTERFACE
} IAttachmentExecuteVtbl;

interface IAttachmentExecute {
    CONST_VTBL IAttachmentExecuteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAttachmentExecute_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAttachmentExecute_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAttachmentExecute_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAttachmentExecute methods ***/
#define IAttachmentExecute_SetClientTitle(This,pszTitle) \
    ((This)->lpVtbl->SetClientTitle(This,pszTitle))
#define IAttachmentExecute_SetClientGuid(This,guid) \
    ((This)->lpVtbl->SetClientGuid(This,guid))
#define IAttachmentExecute_SetLocalPath(This,pszLocalPath) \
    ((This)->lpVtbl->SetLocalPath(This,pszLocalPath))
#define IAttachmentExecute_SetFileName(This,pszFileName) \
    ((This)->lpVtbl->SetFileName(This,pszFileName))
#define IAttachmentExecute_SetSource(This,pszSource) \
    ((This)->lpVtbl->SetSource(This,pszSource))
#define IAttachmentExecute_SetReferrer(This,pszReferrer) \
    ((This)->lpVtbl->SetReferrer(This,pszReferrer))
#define IAttachmentExecute_CheckPolicy(This) \
    ((This)->lpVtbl->CheckPolicy(This))
#define IAttachmentExecute_Prompt(This,hwnd,prompt,paction) \
    ((This)->lpVtbl->Prompt(This,hwnd,prompt,paction))
#define IAttachmentExecute_Save(This) \
    ((This)->lpVtbl->Save(This))
#define IAttachmentExecute_Execute(This,hwnd,pszVerb,phProcess) \
    ((This)->lpVtbl->Execute(This,hwnd,pszVerb,phProcess))
#define IAttachmentExecute_SaveWithUI(This,hwnd) \
    ((This)->lpVtbl->SaveWithUI(This,hwnd))
#define IAttachmentExecute_ClearClientState(This) \
    ((This)->lpVtbl->ClearClientState(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAttachmentExecute_INTERFACE_DEFINED__ */

#endif  // _WIN32_IE_IE60SP2

#if (_WIN32_IE >= _WIN32_IE_IE60)

#include <pshpack8.h>

typedef struct tagSMDATA {
    DWORD dwMask;
    DWORD dwFlags;
    HMENU hmenu;
    HWND hwnd;
    UINT uId;
    UINT uIdParent;
    UINT uIdAncestor;
    IUnknown *punk;
    PIDLIST_ABSOLUTE pidlFolder;
    PUITEMID_CHILD pidlItem;
    IShellFolder *psf;
    void *pvUserData;
} SMDATA;
typedef struct tagSMDATA *LPSMDATA;

// Mask
#define SMDM_SHELLFOLDER               0x00000001  // This is for an item in the band
#define SMDM_HMENU                     0x00000002  // This is for the Band itself
#define SMDM_TOOLBAR                   0x00000004  // Plain toolbar, not associated with a shell folder or hmenu

// Flags (bitmask)

typedef struct tagSMINFO {
    DWORD dwMask;
    DWORD dwType;
    DWORD dwFlags;
    int iIcon;
} SMINFO;
typedef struct tagSMINFO *PSMINFO;

typedef struct SHCSCHANGENOTIFYSTRUCT {
    long lEvent;
    PCIDLIST_ABSOLUTE pidl1;
    PCIDLIST_ABSOLUTE pidl2;
} SMCSHCHANGENOTIFYSTRUCT;
typedef struct SHCSCHANGENOTIFYSTRUCT *PSMCSHCHANGENOTIFYSTRUCT;

#include <poppack.h>

enum tagSMINFOMASK {
    SMIM_TYPE = 0x1,
    SMIM_FLAGS = 0x2,
    SMIM_ICON = 0x4
};

enum tagSMINFOTYPE {
    SMIT_SEPARATOR = 0x1,
    SMIT_STRING = 0x2
};

enum tagSMINFOFLAGS {
    SMIF_ICON = 0x1,
    SMIF_ACCELERATOR = 0x2,
    SMIF_DROPTARGET = 0x4,
    SMIF_SUBMENU = 0x8,
    SMIF_CHECKED = 0x20,
    SMIF_DROPCASCADE = 0x40,
    SMIF_HIDDEN = 0x80,
    SMIF_DISABLED = 0x100,
    SMIF_TRACKPOPUP = 0x200,
    SMIF_DEMOTED = 0x400,
    SMIF_ALTSTATE = 0x800,
    SMIF_DRAGNDROP = 0x1000,
    SMIF_NEW = 0x2000
};

#define SMC_INITMENU            0x00000001  // The callback is called to init a menuband
#define SMC_CREATE              0x00000002
#define SMC_EXITMENU            0x00000003  // The callback is called when menu is collapsing
#define SMC_GETINFO             0x00000005  // The callback is called to return DWORD values
#define SMC_GETSFINFO           0x00000006  // The callback is called to return DWORD values
#define SMC_GETOBJECT           0x00000007  // The callback is called to get some object
#define SMC_GETSFOBJECT         0x00000008  // The callback is called to get some object
#define SMC_SFEXEC              0x00000009  // The callback is called to execute an shell folder item
#define SMC_SFSELECTITEM        0x0000000A  // The callback is called when an item is selected
#define SMC_REFRESH             0x00000010  // Menus have completely refreshed. Reset your state.
#define SMC_DEMOTE              0x00000011  // Demote an item
#define SMC_PROMOTE             0x00000012  // Promote an item, wParam = SMINV_* flag
#define SMC_DEFAULTICON         0x00000016  // Returns Default icon location in wParam, index in lParam
#define SMC_NEWITEM             0x00000017  // Notifies item is not in the order stream.
#define SMC_CHEVRONEXPAND       0x00000019  // Notifies of a expansion via the chevron
#define SMC_DISPLAYCHEVRONTIP   0x0000002A  // S_OK display, S_FALSE not.
#define SMC_SETSFOBJECT         0x0000002D  // Called to save the passed object
#define SMC_SHCHANGENOTIFY      0x0000002E  // Called when a Change notify is received. lParam points to SMCSHCHANGENOTIFYSTRUCT
#define SMC_CHEVRONGETTIP       0x0000002F  // Called to get the chevron tip text. wParam = Tip title, Lparam = TipText Both MAX_PATH
#define SMC_SFDDRESTRICTED      0x00000030  // Called requesting if it's ok to drop. wParam = IDropTarget.
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMC_SFEXEC_MIDDLE       0x00000031  // Same as SFEXEC, but the middle mouse button caused the exec.
#define SMC_GETAUTOEXPANDSTATE  0x00000041  // callback returns the default autoexpand state lParam = LPDWORD to recieve flags
#define SMC_AUTOEXPANDCHANGE    0x00000042  // Notify that the menu is expanding/contracting
#define SMC_GETCONTEXTMENUMODIFIER 0x00000043  // Used to add items to a context menu
#define SMC_GETBKCONTEXTMENU    0x00000044  // used to get a context menu to display when user right clicks on the background
#define SMC_OPEN                0x00000045  // allows client to overwrite open/explore verb action on an item

// Flags for return value from SMC_GETAUTOEXPANDSTATE and SMC_AUTOEXPANDCHANGE:
#define SMAE_EXPANDED           0x00000001  // The menu is or should start expanded
#define SMAE_CONTRACTED         0x00000002  // The menu is or should start contracted
                                            // SMAE_EXPANDED and SMAE_CONTRACTED are mutually exclusive
#define SMAE_USER               0x00000004  // Indicates that the menu expansion/contraction is a reflection
                                            // of user choice
#define SMAE_VALID              0x00000007
#endif  // _WIN32_IE_IE70

/*****************************************************************************
 * IShellMenuCallback interface
 */
#ifndef __IShellMenuCallback_INTERFACE_DEFINED__
#define __IShellMenuCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellMenuCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellMenuCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellMenuCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellMenuCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellMenuCallback *This);

    /*** IShellMenuCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *CallbackSM)(
        IShellMenuCallback *This,
        LPSMDATA psmd,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam);

    END_INTERFACE
} IShellMenuCallbackVtbl;

interface IShellMenuCallback {
    CONST_VTBL IShellMenuCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellMenuCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellMenuCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellMenuCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellMenuCallback methods ***/
#define IShellMenuCallback_CallbackSM(This,psmd,uMsg,wParam,lParam) \
    ((This)->lpVtbl->CallbackSM(This,psmd,uMsg,wParam,lParam))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellMenuCallback_INTERFACE_DEFINED__ */

#define SMINIT_DEFAULT              0x00000000  // No Options
#define SMINIT_RESTRICT_DRAGDROP    0x00000002  // Don't allow Drag and Drop
#define SMINIT_TOPLEVEL             0x00000004  // This is the top band.
#define SMINIT_CACHED               0x00000010
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMINIT_AUTOEXPAND           0x00000100  // automatically expand/contract menu band
#define SMINIT_AUTOTOOLTIP          0x00000200  // regular tooltip support
#define SMINIT_DROPONCONTAINER      0x00000400  // allow drop on a container
#endif  // _WIN32_IE_IE70

#define SMINIT_VERTICAL             0x10000000  // This is a vertical menu
#define SMINIT_HORIZONTAL           0x20000000  // This is a horizontal menu    (does not inherit)

#define ANCESTORDEFAULT      (UINT)-1

#define SMSET_TOP                   0x10000000    // Bias this namespace to the top of the menu
#define SMSET_BOTTOM                0x20000000    // Bias this namespace to the bottom of the menu
#define SMSET_DONTOWN               0x00000001    // The Menuband doesn't own the non-ref counted object

#define SMINV_REFRESH        0x00000001
#define SMINV_ID             0x00000008

/*****************************************************************************
 * IShellMenu interface
 */
#ifndef __IShellMenu_INTERFACE_DEFINED__
#define __IShellMenu_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellMenuVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellMenu *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellMenu *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellMenu *This);

    /*** IShellMenu methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IShellMenu *This,
        IShellMenuCallback *psmc,
        UINT uId,
        UINT uIdAncestor,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetMenuInfo)(
        IShellMenu *This,
        IShellMenuCallback **ppsmc,
        UINT *puId,
        UINT *puIdAncestor,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *SetShellFolder)(
        IShellMenu *This,
        IShellFolder *psf,
        PCIDLIST_ABSOLUTE pidlFolder,
        HKEY hKey,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetShellFolder)(
        IShellMenu *This,
        DWORD *pdwFlags,
        PIDLIST_ABSOLUTE *ppidl,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *SetMenu)(
        IShellMenu *This,
        HMENU hmenu,
        HWND hwnd,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetMenu)(
        IShellMenu *This,
        HMENU *phmenu,
        HWND *phwnd,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *InvalidateItem)(
        IShellMenu *This,
        LPSMDATA psmd,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IShellMenu *This,
        LPSMDATA psmd);

    HRESULT (STDMETHODCALLTYPE *SetMenuToolbar)(
        IShellMenu *This,
        IUnknown *punk,
        DWORD dwFlags);

    END_INTERFACE
} IShellMenuVtbl;

interface IShellMenu {
    CONST_VTBL IShellMenuVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellMenu_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellMenu_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellMenu_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellMenu methods ***/
#define IShellMenu_Initialize(This,psmc,uId,uIdAncestor,dwFlags) \
    ((This)->lpVtbl->Initialize(This,psmc,uId,uIdAncestor,dwFlags))
#define IShellMenu_GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) \
    ((This)->lpVtbl->GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags))
#define IShellMenu_SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) \
    ((This)->lpVtbl->SetShellFolder(This,psf,pidlFolder,hKey,dwFlags))
#define IShellMenu_GetShellFolder(This,pdwFlags,ppidl,riid,ppv) \
    ((This)->lpVtbl->GetShellFolder(This,pdwFlags,ppidl,riid,ppv))
#define IShellMenu_SetMenu(This,hmenu,hwnd,dwFlags) \
    ((This)->lpVtbl->SetMenu(This,hmenu,hwnd,dwFlags))
#define IShellMenu_GetMenu(This,phmenu,phwnd,pdwFlags) \
    ((This)->lpVtbl->GetMenu(This,phmenu,phwnd,pdwFlags))
#define IShellMenu_InvalidateItem(This,psmd,dwFlags) \
    ((This)->lpVtbl->InvalidateItem(This,psmd,dwFlags))
#define IShellMenu_GetState(This,psmd) \
    ((This)->lpVtbl->GetState(This,psmd))
#define IShellMenu_SetMenuToolbar(This,punk,dwFlags) \
    ((This)->lpVtbl->SetMenuToolbar(This,punk,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellMenu_INTERFACE_DEFINED__ */

#endif  // _WIN32_IE_IE60

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef enum KF_CATEGORY {
    KF_CATEGORY_VIRTUAL = 1,
    KF_CATEGORY_FIXED = 2,
    KF_CATEGORY_COMMON = 3,
    KF_CATEGORY_PERUSER = 4
} KF_CATEGORY;

enum _KF_DEFINITION_FLAGS {
    KFDF_LOCAL_REDIRECT_ONLY = 0x2,
    KFDF_ROAMABLE = 0x4,
    KFDF_PRECREATE = 0x8,
    KFDF_STREAM = 0x10,
    KFDF_PUBLISHEXPANDEDPATH = 0x20,
    KFDF_NO_REDIRECT_UI = 0x40
};
typedef DWORD KF_DEFINITION_FLAGS;

enum _KF_REDIRECT_FLAGS {
    KF_REDIRECT_USER_EXCLUSIVE = 0x1,
    KF_REDIRECT_COPY_SOURCE_DACL = 0x2,
    KF_REDIRECT_OWNER_USER = 0x4,
    KF_REDIRECT_SET_OWNER_EXPLICIT = 0x8,
    KF_REDIRECT_CHECK_ONLY = 0x10,
    KF_REDIRECT_WITH_UI = 0x20,
    KF_REDIRECT_UNPIN = 0x40,
    KF_REDIRECT_PIN = 0x80,
    KF_REDIRECT_COPY_CONTENTS = 0x200,
    KF_REDIRECT_DEL_SOURCE_CONTENTS = 0x400,
    KF_REDIRECT_EXCLUDE_ALL_KNOWN_SUBFOLDERS = 0x800
};
typedef DWORD KF_REDIRECT_FLAGS;

enum _KF_REDIRECTION_CAPABILITIES {
    KF_REDIRECTION_CAPABILITIES_ALLOW_ALL = 0xff,
    KF_REDIRECTION_CAPABILITIES_REDIRECTABLE = 0x1,
    KF_REDIRECTION_CAPABILITIES_DENY_ALL = 0xfff00,
    KF_REDIRECTION_CAPABILITIES_DENY_POLICY_REDIRECTED = 0x100,
    KF_REDIRECTION_CAPABILITIES_DENY_POLICY = 0x200,
    KF_REDIRECTION_CAPABILITIES_DENY_PERMISSIONS = 0x400
};
typedef DWORD KF_REDIRECTION_CAPABILITIES;

typedef struct KNOWNFOLDER_DEFINITION {
    KF_CATEGORY category;
    LPWSTR pszName;
    LPWSTR pszDescription;
    KNOWNFOLDERID fidParent;
    LPWSTR pszRelativePath;
    LPWSTR pszParsingName;
    LPWSTR pszTooltip;
    LPWSTR pszLocalizedName;
    LPWSTR pszIcon;
    LPWSTR pszSecurity;
    DWORD dwAttributes;
    KF_DEFINITION_FLAGS kfdFlags;
    FOLDERTYPEID ftidType;
} KNOWNFOLDER_DEFINITION;

/*****************************************************************************
 * IKnownFolder interface
 */
#ifndef __IKnownFolder_INTERFACE_DEFINED__
#define __IKnownFolder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IKnownFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IKnownFolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IKnownFolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IKnownFolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IKnownFolder *This);

    /*** IKnownFolder methods ***/
    HRESULT (STDMETHODCALLTYPE *GetId)(
        IKnownFolder *This,
        KNOWNFOLDERID *pkfid);

    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        IKnownFolder *This,
        KF_CATEGORY *pCategory);

    HRESULT (STDMETHODCALLTYPE *GetShellItem)(
        IKnownFolder *This,
        DWORD dwFlags,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IKnownFolder *This,
        DWORD dwFlags,
        LPWSTR *ppszPath);

    HRESULT (STDMETHODCALLTYPE *SetPath)(
        IKnownFolder *This,
        DWORD dwFlags,
        LPCWSTR pszPath);

    HRESULT (STDMETHODCALLTYPE *GetIDList)(
        IKnownFolder *This,
        DWORD dwFlags,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetFolderType)(
        IKnownFolder *This,
        FOLDERTYPEID *pftid);

    HRESULT (STDMETHODCALLTYPE *GetRedirectionCapabilities)(
        IKnownFolder *This,
        KF_REDIRECTION_CAPABILITIES *pCapabilities);

    HRESULT (STDMETHODCALLTYPE *GetFolderDefinition)(
        IKnownFolder *This,
        KNOWNFOLDER_DEFINITION *pKFD);

    END_INTERFACE
} IKnownFolderVtbl;

interface IKnownFolder {
    CONST_VTBL IKnownFolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IKnownFolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IKnownFolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IKnownFolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IKnownFolder methods ***/
#define IKnownFolder_GetId(This,pkfid) \
    ((This)->lpVtbl->GetId(This,pkfid))
#define IKnownFolder_GetCategory(This,pCategory) \
    ((This)->lpVtbl->GetCategory(This,pCategory))
#define IKnownFolder_GetShellItem(This,dwFlags,riid,ppv) \
    ((This)->lpVtbl->GetShellItem(This,dwFlags,riid,ppv))
#define IKnownFolder_GetPath(This,dwFlags,ppszPath) \
    ((This)->lpVtbl->GetPath(This,dwFlags,ppszPath))
#define IKnownFolder_SetPath(This,dwFlags,pszPath) \
    ((This)->lpVtbl->SetPath(This,dwFlags,pszPath))
#define IKnownFolder_GetIDList(This,dwFlags,ppidl) \
    ((This)->lpVtbl->GetIDList(This,dwFlags,ppidl))
#define IKnownFolder_GetFolderType(This,pftid) \
    ((This)->lpVtbl->GetFolderType(This,pftid))
#define IKnownFolder_GetRedirectionCapabilities(This,pCapabilities) \
    ((This)->lpVtbl->GetRedirectionCapabilities(This,pCapabilities))
#define IKnownFolder_GetFolderDefinition(This,pKFD) \
    ((This)->lpVtbl->GetFolderDefinition(This,pKFD))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IKnownFolder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IKnownFolderManager interface
 */
#ifndef __IKnownFolderManager_INTERFACE_DEFINED__
#define __IKnownFolderManager_INTERFACE_DEFINED__

typedef enum FFFP_MODE {
    FFFP_EXACTMATCH = 0,
    FFFP_NEARESTPARENTMATCH = 1
} FFFP_MODE;

EXTERN_C const IID IID_IKnownFolderManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IKnownFolderManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IKnownFolderManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IKnownFolderManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IKnownFolderManager *This);

    /*** IKnownFolderManager methods ***/
    HRESULT (STDMETHODCALLTYPE *FolderIdFromCsidl)(
        IKnownFolderManager *This,
        int nCsidl,
        KNOWNFOLDERID *pfid);

    HRESULT (STDMETHODCALLTYPE *FolderIdToCsidl)(
        IKnownFolderManager *This,
        REFKNOWNFOLDERID rfid,
        int *pnCsidl);

    HRESULT (STDMETHODCALLTYPE *GetFolderIds)(
        IKnownFolderManager *This,
        KNOWNFOLDERID **ppKFId,
        UINT *pCount);

    HRESULT (STDMETHODCALLTYPE *GetFolder)(
        IKnownFolderManager *This,
        REFKNOWNFOLDERID rfid,
        IKnownFolder **ppkf);

    HRESULT (STDMETHODCALLTYPE *GetFolderByName)(
        IKnownFolderManager *This,
        LPCWSTR pszCanonicalName,
        IKnownFolder **ppkf);

    HRESULT (STDMETHODCALLTYPE *RegisterFolder)(
        IKnownFolderManager *This,
        REFKNOWNFOLDERID rfid,
        const KNOWNFOLDER_DEFINITION *pKFD);

    HRESULT (STDMETHODCALLTYPE *UnregisterFolder)(
        IKnownFolderManager *This,
        REFKNOWNFOLDERID rfid);

    HRESULT (STDMETHODCALLTYPE *FindFolderFromPath)(
        IKnownFolderManager *This,
        LPCWSTR pszPath,
        FFFP_MODE mode,
        IKnownFolder **ppkf);

    HRESULT (STDMETHODCALLTYPE *FindFolderFromIDList)(
        IKnownFolderManager *This,
        PCIDLIST_ABSOLUTE pidl,
        IKnownFolder **ppkf);

    HRESULT (STDMETHODCALLTYPE *Redirect)(
        IKnownFolderManager *This,
        REFKNOWNFOLDERID rfid,
        HWND hwnd,
        KF_REDIRECT_FLAGS flags,
        LPCWSTR pszTargetPath,
        UINT cFolders,
        const KNOWNFOLDERID *pExclusion,
        LPWSTR *ppszError);

    END_INTERFACE
} IKnownFolderManagerVtbl;

interface IKnownFolderManager {
    CONST_VTBL IKnownFolderManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IKnownFolderManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IKnownFolderManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IKnownFolderManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IKnownFolderManager methods ***/
#define IKnownFolderManager_FolderIdFromCsidl(This,nCsidl,pfid) \
    ((This)->lpVtbl->FolderIdFromCsidl(This,nCsidl,pfid))
#define IKnownFolderManager_FolderIdToCsidl(This,rfid,pnCsidl) \
    ((This)->lpVtbl->FolderIdToCsidl(This,rfid,pnCsidl))
#define IKnownFolderManager_GetFolderIds(This,ppKFId,pCount) \
    ((This)->lpVtbl->GetFolderIds(This,ppKFId,pCount))
#define IKnownFolderManager_GetFolder(This,rfid,ppkf) \
    ((This)->lpVtbl->GetFolder(This,rfid,ppkf))
#define IKnownFolderManager_GetFolderByName(This,pszCanonicalName,ppkf) \
    ((This)->lpVtbl->GetFolderByName(This,pszCanonicalName,ppkf))
#define IKnownFolderManager_RegisterFolder(This,rfid,pKFD) \
    ((This)->lpVtbl->RegisterFolder(This,rfid,pKFD))
#define IKnownFolderManager_UnregisterFolder(This,rfid) \
    ((This)->lpVtbl->UnregisterFolder(This,rfid))
#define IKnownFolderManager_FindFolderFromPath(This,pszPath,mode,ppkf) \
    ((This)->lpVtbl->FindFolderFromPath(This,pszPath,mode,ppkf))
#define IKnownFolderManager_FindFolderFromIDList(This,pidl,ppkf) \
    ((This)->lpVtbl->FindFolderFromIDList(This,pidl,ppkf))
#define IKnownFolderManager_Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError) \
    ((This)->lpVtbl->Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IKnownFolderManager_RemoteRedirect_Proxy(
    IKnownFolderManager *This,
    REFKNOWNFOLDERID rfid,
    HWND hwnd,
    KF_REDIRECT_FLAGS flags,
    LPCWSTR pszTargetPath,
    UINT cFolders,
    const GUID *pExclusion,
    LPWSTR *ppszError);

void __RPC_STUB IKnownFolderManager_RemoteRedirect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IKnownFolderManager_Redirect_Proxy(
    REFKNOWNFOLDERID rfid,
    HWND hwnd,
    KF_REDIRECT_FLAGS flags,
    LPCWSTR pszTargetPath,
    UINT cFolders,
    const KNOWNFOLDERID *pExclusion,
    LPWSTR *ppszError);
HRESULT IKnownFolderManager_Redirect_Stub(
    REFKNOWNFOLDERID rfid,
    HWND hwnd,
    KF_REDIRECT_FLAGS flags,
    LPCWSTR pszTargetPath,
    UINT cFolders,
    const GUID *pExclusion,
    LPWSTR *ppszError);
#endif /* __IKnownFolderManager_INTERFACE_DEFINED__ */

__inline void FreeKnownFolderDefinitionFields( KNOWNFOLDER_DEFINITION *pKFD)
{
    CoTaskMemFree(pKFD->pszName);
    CoTaskMemFree(pKFD->pszDescription);
    CoTaskMemFree(pKFD->pszRelativePath);
    CoTaskMemFree(pKFD->pszParsingName);
    CoTaskMemFree(pKFD->pszTooltip);
    CoTaskMemFree(pKFD->pszLocalizedName);
    CoTaskMemFree(pKFD->pszIcon);
    CoTaskMemFree(pKFD->pszSecurity);
}

typedef enum SHARE_ROLE {
    SHARE_ROLE_INVALID = -1,
    SHARE_ROLE_READER = 0,
    SHARE_ROLE_CONTRIBUTOR = 1,
    SHARE_ROLE_CO_OWNER = 2,
    SHARE_ROLE_OWNER = 3,
    SHARE_ROLE_CUSTOM = 4,
    SHARE_ROLE_MIXED = 5
} SHARE_ROLE;

typedef enum DEF_SHARE_ID {
    DEFSHAREID_USERS = 1,
    DEFSHAREID_PUBLIC = 2
} DEF_SHARE_ID;

/*****************************************************************************
 * ISharingConfigurationManager interface
 */
#ifndef __ISharingConfigurationManager_INTERFACE_DEFINED__
#define __ISharingConfigurationManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISharingConfigurationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISharingConfigurationManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISharingConfigurationManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISharingConfigurationManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISharingConfigurationManager *This);

    /*** ISharingConfigurationManager methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateShare)(
        ISharingConfigurationManager *This,
        DEF_SHARE_ID dsid,
        SHARE_ROLE role);

    HRESULT (STDMETHODCALLTYPE *DeleteShare)(
        ISharingConfigurationManager *This,
        DEF_SHARE_ID dsid);

    HRESULT (STDMETHODCALLTYPE *ShareExists)(
        ISharingConfigurationManager *This,
        DEF_SHARE_ID dsid);

    HRESULT (STDMETHODCALLTYPE *GetSharePermissions)(
        ISharingConfigurationManager *This,
        DEF_SHARE_ID dsid,
        SHARE_ROLE *pRole);

    HRESULT (STDMETHODCALLTYPE *SharePrinters)(
        ISharingConfigurationManager *This);

    HRESULT (STDMETHODCALLTYPE *StopSharingPrinters)(
        ISharingConfigurationManager *This);

    HRESULT (STDMETHODCALLTYPE *ArePrintersShared)(
        ISharingConfigurationManager *This);

    END_INTERFACE
} ISharingConfigurationManagerVtbl;

interface ISharingConfigurationManager {
    CONST_VTBL ISharingConfigurationManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISharingConfigurationManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISharingConfigurationManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISharingConfigurationManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISharingConfigurationManager methods ***/
#define ISharingConfigurationManager_CreateShare(This,dsid,role) \
    ((This)->lpVtbl->CreateShare(This,dsid,role))
#define ISharingConfigurationManager_DeleteShare(This,dsid) \
    ((This)->lpVtbl->DeleteShare(This,dsid))
#define ISharingConfigurationManager_ShareExists(This,dsid) \
    ((This)->lpVtbl->ShareExists(This,dsid))
#define ISharingConfigurationManager_GetSharePermissions(This,dsid,pRole) \
    ((This)->lpVtbl->GetSharePermissions(This,dsid,pRole))
#define ISharingConfigurationManager_SharePrinters(This) \
    ((This)->lpVtbl->SharePrinters(This))
#define ISharingConfigurationManager_StopSharingPrinters(This) \
    ((This)->lpVtbl->StopSharingPrinters(This))
#define ISharingConfigurationManager_ArePrintersShared(This) \
    ((This)->lpVtbl->ArePrintersShared(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISharingConfigurationManager_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IRelatedItem interface
 */
#ifndef __IRelatedItem_INTERFACE_DEFINED__
#define __IRelatedItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IRelatedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRelatedItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRelatedItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRelatedItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRelatedItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IRelatedItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IRelatedItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} IRelatedItemVtbl;

interface IRelatedItem {
    CONST_VTBL IRelatedItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRelatedItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRelatedItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRelatedItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IRelatedItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IRelatedItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRelatedItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IIdentityName interface
 */
#ifndef __IIdentityName_INTERFACE_DEFINED__
#define __IIdentityName_INTERFACE_DEFINED__

EXTERN_C const IID IID_IIdentityName;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IIdentityNameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IIdentityName *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IIdentityName *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IIdentityName *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IIdentityName *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IIdentityName *This,
        IShellItem **ppsi);

    END_INTERFACE
} IIdentityNameVtbl;

interface IIdentityName {
    CONST_VTBL IIdentityNameVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IIdentityName_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IIdentityName_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IIdentityName_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IIdentityName_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IIdentityName_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IIdentityName_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDelegateItem interface
 */
#ifndef __IDelegateItem_INTERFACE_DEFINED__
#define __IDelegateItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDelegateItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDelegateItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDelegateItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDelegateItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDelegateItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IDelegateItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IDelegateItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} IDelegateItemVtbl;

interface IDelegateItem {
    CONST_VTBL IDelegateItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDelegateItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDelegateItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDelegateItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IDelegateItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IDelegateItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDelegateItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICurrentItem interface
 */
#ifndef __ICurrentItem_INTERFACE_DEFINED__
#define __ICurrentItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICurrentItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICurrentItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICurrentItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICurrentItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICurrentItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        ICurrentItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        ICurrentItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} ICurrentItemVtbl;

interface ICurrentItem {
    CONST_VTBL ICurrentItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICurrentItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICurrentItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICurrentItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define ICurrentItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define ICurrentItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICurrentItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITransferMediumItem interface
 */
#ifndef __ITransferMediumItem_INTERFACE_DEFINED__
#define __ITransferMediumItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITransferMediumItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITransferMediumItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITransferMediumItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITransferMediumItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITransferMediumItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        ITransferMediumItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        ITransferMediumItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} ITransferMediumItemVtbl;

interface ITransferMediumItem {
    CONST_VTBL ITransferMediumItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITransferMediumItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITransferMediumItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITransferMediumItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define ITransferMediumItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define ITransferMediumItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITransferMediumItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDisplayItem interface
 */
#ifndef __IDisplayItem_INTERFACE_DEFINED__
#define __IDisplayItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDisplayItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDisplayItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDisplayItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDisplayItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDisplayItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IDisplayItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IDisplayItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} IDisplayItemVtbl;

interface IDisplayItem {
    CONST_VTBL IDisplayItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDisplayItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDisplayItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDisplayItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IDisplayItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IDisplayItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDisplayItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IViewStateIdentityItem interface
 */
#ifndef __IViewStateIdentityItem_INTERFACE_DEFINED__
#define __IViewStateIdentityItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IViewStateIdentityItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IViewStateIdentityItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IViewStateIdentityItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IViewStateIdentityItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IViewStateIdentityItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IViewStateIdentityItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IViewStateIdentityItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} IViewStateIdentityItemVtbl;

interface IViewStateIdentityItem {
    CONST_VTBL IViewStateIdentityItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IViewStateIdentityItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IViewStateIdentityItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IViewStateIdentityItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IViewStateIdentityItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IViewStateIdentityItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IViewStateIdentityItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPreviewItem interface
 */
#ifndef __IPreviewItem_INTERFACE_DEFINED__
#define __IPreviewItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPreviewItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPreviewItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPreviewItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPreviewItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPreviewItem *This);

    /*** IRelatedItem methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItemIDList)(
        IPreviewItem *This,
        PIDLIST_ABSOLUTE *ppidl);

    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IPreviewItem *This,
        IShellItem **ppsi);

    END_INTERFACE
} IPreviewItemVtbl;

interface IPreviewItem {
    CONST_VTBL IPreviewItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPreviewItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPreviewItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPreviewItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRelatedItem methods ***/
#define IPreviewItem_GetItemIDList(This,ppidl) \
    ((This)->lpVtbl->GetItemIDList(This,ppidl))
#define IPreviewItem_GetItem(This,ppsi) \
    ((This)->lpVtbl->GetItem(This,ppsi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPreviewItem_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

/*****************************************************************************
 * IDestinationStreamFactory interface
 */
#ifndef __IDestinationStreamFactory_INTERFACE_DEFINED__
#define __IDestinationStreamFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDestinationStreamFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDestinationStreamFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDestinationStreamFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDestinationStreamFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDestinationStreamFactory *This);

    /*** IDestinationStreamFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDestinationStream)(
        IDestinationStreamFactory *This,
        IStream **ppstm);

    END_INTERFACE
} IDestinationStreamFactoryVtbl;

interface IDestinationStreamFactory {
    CONST_VTBL IDestinationStreamFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDestinationStreamFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDestinationStreamFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDestinationStreamFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDestinationStreamFactory methods ***/
#define IDestinationStreamFactory_GetDestinationStream(This,ppstm) \
    ((This)->lpVtbl->GetDestinationStream(This,ppstm))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDestinationStreamFactory_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * ICreateProcessInputs interface
 */
#ifndef __ICreateProcessInputs_INTERFACE_DEFINED__
#define __ICreateProcessInputs_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICreateProcessInputs;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreateProcessInputsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreateProcessInputs *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreateProcessInputs *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreateProcessInputs *This);

    /*** ICreateProcessInputs methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCreateFlags)(
        ICreateProcessInputs *This,
        DWORD *pdwCreationFlags);

    HRESULT (STDMETHODCALLTYPE *SetCreateFlags)(
        ICreateProcessInputs *This,
        DWORD dwCreationFlags);

    HRESULT (STDMETHODCALLTYPE *AddCreateFlags)(
        ICreateProcessInputs *This,
        DWORD dwCreationFlags);

    HRESULT (STDMETHODCALLTYPE *SetHotKey)(
        ICreateProcessInputs *This,
        WORD wHotKey);

    HRESULT (STDMETHODCALLTYPE *AddStartupFlags)(
        ICreateProcessInputs *This,
        DWORD dwStartupInfoFlags);

    HRESULT (STDMETHODCALLTYPE *SetTitle)(
        ICreateProcessInputs *This,
        LPCWSTR pszTitle);

    HRESULT (STDMETHODCALLTYPE *SetEnvironmentVariable)(
        ICreateProcessInputs *This,
        LPCWSTR pszName,
        LPCWSTR pszValue);

    END_INTERFACE
} ICreateProcessInputsVtbl;

interface ICreateProcessInputs {
    CONST_VTBL ICreateProcessInputsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreateProcessInputs_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreateProcessInputs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreateProcessInputs_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreateProcessInputs methods ***/
#define ICreateProcessInputs_GetCreateFlags(This,pdwCreationFlags) \
    ((This)->lpVtbl->GetCreateFlags(This,pdwCreationFlags))
#define ICreateProcessInputs_SetCreateFlags(This,dwCreationFlags) \
    ((This)->lpVtbl->SetCreateFlags(This,dwCreationFlags))
#define ICreateProcessInputs_AddCreateFlags(This,dwCreationFlags) \
    ((This)->lpVtbl->AddCreateFlags(This,dwCreationFlags))
#define ICreateProcessInputs_SetHotKey(This,wHotKey) \
    ((This)->lpVtbl->SetHotKey(This,wHotKey))
#define ICreateProcessInputs_AddStartupFlags(This,dwStartupInfoFlags) \
    ((This)->lpVtbl->AddStartupFlags(This,dwStartupInfoFlags))
#define ICreateProcessInputs_SetTitle(This,pszTitle) \
    ((This)->lpVtbl->SetTitle(This,pszTitle))
#define ICreateProcessInputs_SetEnvironmentVariable(This,pszName,pszValue) \
    ((This)->lpVtbl->SetEnvironmentVariable(This,pszName,pszValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreateProcessInputs_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICreatingProcess interface
 */
#ifndef __ICreatingProcess_INTERFACE_DEFINED__
#define __ICreatingProcess_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICreatingProcess;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreatingProcessVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreatingProcess *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreatingProcess *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreatingProcess *This);

    /*** ICreatingProcess methods ***/
    HRESULT (STDMETHODCALLTYPE *OnCreating)(
        ICreatingProcess *This,
        ICreateProcessInputs *pcpi);

    END_INTERFACE
} ICreatingProcessVtbl;

interface ICreatingProcess {
    CONST_VTBL ICreatingProcessVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreatingProcess_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreatingProcess_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreatingProcess_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreatingProcess methods ***/
#define ICreatingProcess_OnCreating(This,pcpi) \
    ((This)->lpVtbl->OnCreating(This,pcpi))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreatingProcess_INTERFACE_DEFINED__ */

#define SID_ExecuteCreatingProcess __uuidof(ICreatingProcess)

#endif  // NTDDI_VISTA

#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)

/*****************************************************************************
 * ILaunchUIContext interface
 */
#ifndef __ILaunchUIContext_INTERFACE_DEFINED__
#define __ILaunchUIContext_INTERFACE_DEFINED__

EXTERN_C const IID IID_ILaunchUIContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILaunchUIContextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILaunchUIContext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILaunchUIContext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILaunchUIContext *This);

    /*** ILaunchUIContext methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAssociatedWindow)(
        ILaunchUIContext *This,
        HWND value);

    HRESULT (STDMETHODCALLTYPE *SetTabGroupingPreference)(
        ILaunchUIContext *This,
        DWORD value);

    END_INTERFACE
} ILaunchUIContextVtbl;

interface ILaunchUIContext {
    CONST_VTBL ILaunchUIContextVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILaunchUIContext_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILaunchUIContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILaunchUIContext_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILaunchUIContext methods ***/
#define ILaunchUIContext_SetAssociatedWindow(This,value) \
    ((This)->lpVtbl->SetAssociatedWindow(This,value))
#define ILaunchUIContext_SetTabGroupingPreference(This,value) \
    ((This)->lpVtbl->SetTabGroupingPreference(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILaunchUIContext_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ILaunchUIContextProvider interface
 */
#ifndef __ILaunchUIContextProvider_INTERFACE_DEFINED__
#define __ILaunchUIContextProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_ILaunchUIContextProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILaunchUIContextProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILaunchUIContextProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILaunchUIContextProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILaunchUIContextProvider *This);

    /*** ILaunchUIContextProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *UpdateContext)(
        ILaunchUIContextProvider *This,
        ILaunchUIContext *context);

    END_INTERFACE
} ILaunchUIContextProviderVtbl;

interface ILaunchUIContextProvider {
    CONST_VTBL ILaunchUIContextProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILaunchUIContextProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILaunchUIContextProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILaunchUIContextProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILaunchUIContextProvider methods ***/
#define ILaunchUIContextProvider_UpdateContext(This,context) \
    ((This)->lpVtbl->UpdateContext(This,context))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILaunchUIContextProvider_INTERFACE_DEFINED__ */

#define SID_LaunchUIContextProvider __uuidof(ILaunchUIContextProvider)

#endif  // (NTDDI_VERSION >= NTDDI_WIN10_RS4)

enum _NMCII_FLAGS {
    NMCII_NONE = 0x0,
    NMCII_ITEMS = 0x1,
    NMCII_FOLDERS = 0x2
};
typedef int NMCII_FLAGS;

enum _NMCSAEI_FLAGS {
    NMCSAEI_SELECT = 0x0,
    NMCSAEI_EDIT = 0x1
};
typedef int NMCSAEI_FLAGS;

/*****************************************************************************
 * INewMenuClient interface
 */
#ifndef __INewMenuClient_INTERFACE_DEFINED__
#define __INewMenuClient_INTERFACE_DEFINED__

EXTERN_C const IID IID_INewMenuClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INewMenuClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INewMenuClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INewMenuClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INewMenuClient *This);

    /*** INewMenuClient methods ***/
    HRESULT (STDMETHODCALLTYPE *IncludeItems)(
        INewMenuClient *This,
        NMCII_FLAGS *pflags);

    HRESULT (STDMETHODCALLTYPE *SelectAndEditItem)(
        INewMenuClient *This,
        PCIDLIST_ABSOLUTE pidlItem,
        NMCSAEI_FLAGS flags);

    END_INTERFACE
} INewMenuClientVtbl;

interface INewMenuClient {
    CONST_VTBL INewMenuClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INewMenuClient_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INewMenuClient_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INewMenuClient_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INewMenuClient methods ***/
#define INewMenuClient_IncludeItems(This,pflags) \
    ((This)->lpVtbl->IncludeItems(This,pflags))
#define INewMenuClient_SelectAndEditItem(This,pidlItem,flags) \
    ((This)->lpVtbl->SelectAndEditItem(This,pidlItem,flags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INewMenuClient_INTERFACE_DEFINED__ */

#define SID_SNewMenuClient   IID_INewMenuClient

#if (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * IInitializeWithBindCtx interface
 */
#ifndef __IInitializeWithBindCtx_INTERFACE_DEFINED__
#define __IInitializeWithBindCtx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInitializeWithBindCtx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeWithBindCtxVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeWithBindCtx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeWithBindCtx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeWithBindCtx *This);

    /*** IInitializeWithBindCtx methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IInitializeWithBindCtx *This,
        IBindCtx *pbc);

    END_INTERFACE
} IInitializeWithBindCtxVtbl;

interface IInitializeWithBindCtx {
    CONST_VTBL IInitializeWithBindCtxVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeWithBindCtx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeWithBindCtx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeWithBindCtx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeWithBindCtx methods ***/
#define IInitializeWithBindCtx_Initialize(This,pbc) \
    ((This)->lpVtbl->Initialize(This,pbc))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeWithBindCtx_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellItemFilter interface
 */
#ifndef __IShellItemFilter_INTERFACE_DEFINED__
#define __IShellItemFilter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellItemFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellItemFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellItemFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellItemFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellItemFilter *This);

    /*** IShellItemFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *IncludeItem)(
        IShellItemFilter *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetEnumFlagsForItem)(
        IShellItemFilter *This,
        IShellItem *psi,
        SHCONTF *pgrfFlags);

    END_INTERFACE
} IShellItemFilterVtbl;

interface IShellItemFilter {
    CONST_VTBL IShellItemFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellItemFilter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellItemFilter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellItemFilter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellItemFilter methods ***/
#define IShellItemFilter_IncludeItem(This,psi) \
    ((This)->lpVtbl->IncludeItem(This,psi))
#define IShellItemFilter_GetEnumFlagsForItem(This,psi,pgrfFlags) \
    ((This)->lpVtbl->GetEnumFlagsForItem(This,psi,pgrfFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellItemFilter_INTERFACE_DEFINED__ */

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)

/*****************************************************************************
 * INameSpaceTreeControl interface
 */
#ifndef __INameSpaceTreeControl_INTERFACE_DEFINED__
#define __INameSpaceTreeControl_INTERFACE_DEFINED__

enum _NSTCSTYLE {
    NSTCS_HASEXPANDOS = 0x1,
    NSTCS_HASLINES = 0x2,
    NSTCS_SINGLECLICKEXPAND = 0x4,
    NSTCS_FULLROWSELECT = 0x8,
    NSTCS_SPRINGEXPAND = 0x10,
    NSTCS_HORIZONTALSCROLL = 0x20,
    NSTCS_ROOTHASEXPANDO = 0x40,
    NSTCS_SHOWSELECTIONALWAYS = 0x80,
    NSTCS_NOINFOTIP = 0x200,
    NSTCS_EVENHEIGHT = 0x400,
    NSTCS_NOREPLACEOPEN = 0x800,
    NSTCS_DISABLEDRAGDROP = 0x1000,
    NSTCS_NOORDERSTREAM = 0x2000,
    NSTCS_RICHTOOLTIP = 0x4000,
    NSTCS_BORDER = 0x8000,
    NSTCS_NOEDITLABELS = 0x10000,
    NSTCS_TABSTOP = 0x20000,
    NSTCS_FAVORITESMODE = 0x80000,
    NSTCS_AUTOHSCROLL = 0x100000,
    NSTCS_FADEINOUTEXPANDOS = 0x200000,
    NSTCS_EMPTYTEXT = 0x400000,
    NSTCS_CHECKBOXES = 0x800000,
    NSTCS_PARTIALCHECKBOXES = 0x1000000,
    NSTCS_EXCLUSIONCHECKBOXES = 0x2000000,
    NSTCS_DIMMEDCHECKBOXES = 0x4000000,
    NSTCS_NOINDENTCHECKS = 0x8000000,
    NSTCS_ALLOWJUNCTIONS = 0x10000000,
    NSTCS_SHOWTABSBUTTON = 0x20000000,
    NSTCS_SHOWDELETEBUTTON = 0x40000000,
    NSTCS_SHOWREFRESHBUTTON = (int)0x80000000
};
typedef DWORD NSTCSTYLE;

enum _NSTCROOTSTYLE {
    NSTCRS_VISIBLE = 0x0,
    NSTCRS_HIDDEN = 0x1,
    NSTCRS_EXPANDED = 0x2
};
typedef DWORD NSTCROOTSTYLE;

enum _NSTCITEMSTATE {
    NSTCIS_NONE = 0x0,
    NSTCIS_SELECTED = 0x1,
    NSTCIS_EXPANDED = 0x2,
    NSTCIS_BOLD = 0x4,
    NSTCIS_DISABLED = 0x8,
    NSTCIS_SELECTEDNOEXPAND = 0x10
};
typedef DWORD NSTCITEMSTATE;

typedef enum NSTCGNI {
    NSTCGNI_NEXT = 0,
    NSTCGNI_NEXTVISIBLE = 1,
    NSTCGNI_PREV = 2,
    NSTCGNI_PREVVISIBLE = 3,
    NSTCGNI_PARENT = 4,
    NSTCGNI_CHILD = 5,
    NSTCGNI_FIRSTVISIBLE = 6,
    NSTCGNI_LASTVISIBLE = 7
} NSTCGNI;

EXTERN_C const IID IID_INameSpaceTreeControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeControl *This);

    /*** INameSpaceTreeControl methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INameSpaceTreeControl *This,
        HWND hwndParent,
        RECT *prc,
        NSTCSTYLE nsctsFlags);

    HRESULT (STDMETHODCALLTYPE *TreeAdvise)(
        INameSpaceTreeControl *This,
        IUnknown *punk,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *TreeUnadvise)(
        INameSpaceTreeControl *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *AppendRoot)(
        INameSpaceTreeControl *This,
        IShellItem *psiRoot,
        SHCONTF grfEnumFlags,
        NSTCROOTSTYLE grfRootStyle,
        IShellItemFilter *pif);

    HRESULT (STDMETHODCALLTYPE *InsertRoot)(
        INameSpaceTreeControl *This,
        int iIndex,
        IShellItem *psiRoot,
        SHCONTF grfEnumFlags,
        NSTCROOTSTYLE grfRootStyle,
        IShellItemFilter *pif);

    HRESULT (STDMETHODCALLTYPE *RemoveRoot)(
        INameSpaceTreeControl *This,
        IShellItem *psiRoot);

    HRESULT (STDMETHODCALLTYPE *RemoveAllRoots)(
        INameSpaceTreeControl *This);

    HRESULT (STDMETHODCALLTYPE *GetRootItems)(
        INameSpaceTreeControl *This,
        IShellItemArray **ppsiaRootItems);

    HRESULT (STDMETHODCALLTYPE *SetItemState)(
        INameSpaceTreeControl *This,
        IShellItem *psi,
        NSTCITEMSTATE nstcisMask,
        NSTCITEMSTATE nstcisFlags);

    HRESULT (STDMETHODCALLTYPE *GetItemState)(
        INameSpaceTreeControl *This,
        IShellItem *psi,
        NSTCITEMSTATE nstcisMask,
        NSTCITEMSTATE *pnstcisFlags);

    HRESULT (STDMETHODCALLTYPE *GetSelectedItems)(
        INameSpaceTreeControl *This,
        IShellItemArray **psiaItems);

    HRESULT (STDMETHODCALLTYPE *GetItemCustomState)(
        INameSpaceTreeControl *This,
        IShellItem *psi,
        int *piStateNumber);

    HRESULT (STDMETHODCALLTYPE *SetItemCustomState)(
        INameSpaceTreeControl *This,
        IShellItem *psi,
        int iStateNumber);

    HRESULT (STDMETHODCALLTYPE *EnsureItemVisible)(
        INameSpaceTreeControl *This,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *SetTheme)(
        INameSpaceTreeControl *This,
        LPCWSTR pszTheme);

    HRESULT (STDMETHODCALLTYPE *GetNextItem)(
        INameSpaceTreeControl *This,
        IShellItem *psi,
        NSTCGNI nstcgi,
        IShellItem **ppsiNext);

    HRESULT (STDMETHODCALLTYPE *HitTest)(
        INameSpaceTreeControl *This,
        POINT *ppt,
        IShellItem **ppsiOut);

    HRESULT (STDMETHODCALLTYPE *GetItemRect)(
        INameSpaceTreeControl *This,
        IShellItem *psi,
        RECT *prect);

    HRESULT (STDMETHODCALLTYPE *CollapseAll)(
        INameSpaceTreeControl *This);

    END_INTERFACE
} INameSpaceTreeControlVtbl;

interface INameSpaceTreeControl {
    CONST_VTBL INameSpaceTreeControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeControl methods ***/
#define INameSpaceTreeControl_Initialize(This,hwndParent,prc,nsctsFlags) \
    ((This)->lpVtbl->Initialize(This,hwndParent,prc,nsctsFlags))
#define INameSpaceTreeControl_TreeAdvise(This,punk,pdwCookie) \
    ((This)->lpVtbl->TreeAdvise(This,punk,pdwCookie))
#define INameSpaceTreeControl_TreeUnadvise(This,dwCookie) \
    ((This)->lpVtbl->TreeUnadvise(This,dwCookie))
#define INameSpaceTreeControl_AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) \
    ((This)->lpVtbl->AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif))
#define INameSpaceTreeControl_InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) \
    ((This)->lpVtbl->InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif))
#define INameSpaceTreeControl_RemoveRoot(This,psiRoot) \
    ((This)->lpVtbl->RemoveRoot(This,psiRoot))
#define INameSpaceTreeControl_RemoveAllRoots(This) \
    ((This)->lpVtbl->RemoveAllRoots(This))
#define INameSpaceTreeControl_GetRootItems(This,ppsiaRootItems) \
    ((This)->lpVtbl->GetRootItems(This,ppsiaRootItems))
#define INameSpaceTreeControl_SetItemState(This,psi,nstcisMask,nstcisFlags) \
    ((This)->lpVtbl->SetItemState(This,psi,nstcisMask,nstcisFlags))
#define INameSpaceTreeControl_GetItemState(This,psi,nstcisMask,pnstcisFlags) \
    ((This)->lpVtbl->GetItemState(This,psi,nstcisMask,pnstcisFlags))
#define INameSpaceTreeControl_GetSelectedItems(This,psiaItems) \
    ((This)->lpVtbl->GetSelectedItems(This,psiaItems))
#define INameSpaceTreeControl_GetItemCustomState(This,psi,piStateNumber) \
    ((This)->lpVtbl->GetItemCustomState(This,psi,piStateNumber))
#define INameSpaceTreeControl_SetItemCustomState(This,psi,iStateNumber) \
    ((This)->lpVtbl->SetItemCustomState(This,psi,iStateNumber))
#define INameSpaceTreeControl_EnsureItemVisible(This,psi) \
    ((This)->lpVtbl->EnsureItemVisible(This,psi))
#define INameSpaceTreeControl_SetTheme(This,pszTheme) \
    ((This)->lpVtbl->SetTheme(This,pszTheme))
#define INameSpaceTreeControl_GetNextItem(This,psi,nstcgi,ppsiNext) \
    ((This)->lpVtbl->GetNextItem(This,psi,nstcgi,ppsiNext))
#define INameSpaceTreeControl_HitTest(This,ppt,ppsiOut) \
    ((This)->lpVtbl->HitTest(This,ppt,ppsiOut))
#define INameSpaceTreeControl_GetItemRect(This,psi,prect) \
    ((This)->lpVtbl->GetItemRect(This,psi,prect))
#define INameSpaceTreeControl_CollapseAll(This) \
    ((This)->lpVtbl->CollapseAll(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeControl_INTERFACE_DEFINED__ */

#define SID_SNavigationPane IID_INameSpaceTreeControl   // nearest service that you can proffer to

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * INameSpaceTreeControlFolderCapabilities interface
 */
#ifndef __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__
#define __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__

typedef enum NSTCFOLDERCAPABILITIES {
    NSTCFC_NONE = 0x0,
    NSTCFC_PINNEDITEMFILTERING = 0x1,
    NSTCFC_DELAY_REGISTER_NOTIFY = 0x2
} NSTCFOLDERCAPABILITIES;

EXTERN_C const IID IID_INameSpaceTreeControlFolderCapabilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct INameSpaceTreeControlFolderCapabilitiesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INameSpaceTreeControlFolderCapabilities *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INameSpaceTreeControlFolderCapabilities *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INameSpaceTreeControlFolderCapabilities *This);

    /*** INameSpaceTreeControlFolderCapabilities methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFolderCapabilities)(
        INameSpaceTreeControlFolderCapabilities *This,
        NSTCFOLDERCAPABILITIES nfcMask,
        NSTCFOLDERCAPABILITIES *pnfcValue);

    END_INTERFACE
} INameSpaceTreeControlFolderCapabilitiesVtbl;

interface INameSpaceTreeControlFolderCapabilities {
    CONST_VTBL INameSpaceTreeControlFolderCapabilitiesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define INameSpaceTreeControlFolderCapabilities_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define INameSpaceTreeControlFolderCapabilities_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define INameSpaceTreeControlFolderCapabilities_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** INameSpaceTreeControlFolderCapabilities methods ***/
#define INameSpaceTreeControlFolderCapabilities_GetFolderCapabilities(This,nfcMask,pnfcValue) \
    ((This)->lpVtbl->GetFolderCapabilities(This,nfcMask,pnfcValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

#define E_PREVIEWHANDLER_DRM_FAIL _HRESULT_TYPEDEF_(0x86420001L)
#define E_PREVIEWHANDLER_NOAUTH   _HRESULT_TYPEDEF_(0x86420002L)
#define E_PREVIEWHANDLER_NOTFOUND _HRESULT_TYPEDEF_(0x86420003L)
#define E_PREVIEWHANDLER_CORRUPT  _HRESULT_TYPEDEF_(0x86420004L)

/*****************************************************************************
 * IPreviewHandler interface
 */
#ifndef __IPreviewHandler_INTERFACE_DEFINED__
#define __IPreviewHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPreviewHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPreviewHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPreviewHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPreviewHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPreviewHandler *This);

    /*** IPreviewHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *SetWindow)(
        IPreviewHandler *This,
        HWND hwnd,
        const RECT *prc);

    HRESULT (STDMETHODCALLTYPE *SetRect)(
        IPreviewHandler *This,
        const RECT *prc);

    HRESULT (STDMETHODCALLTYPE *DoPreview)(
        IPreviewHandler *This);

    HRESULT (STDMETHODCALLTYPE *Unload)(
        IPreviewHandler *This);

    HRESULT (STDMETHODCALLTYPE *SetFocus)(
        IPreviewHandler *This);

    HRESULT (STDMETHODCALLTYPE *QueryFocus)(
        IPreviewHandler *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IPreviewHandler *This,
        MSG *pmsg);

    END_INTERFACE
} IPreviewHandlerVtbl;

interface IPreviewHandler {
    CONST_VTBL IPreviewHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPreviewHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPreviewHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPreviewHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPreviewHandler methods ***/
#define IPreviewHandler_SetWindow(This,hwnd,prc) \
    ((This)->lpVtbl->SetWindow(This,hwnd,prc))
#define IPreviewHandler_SetRect(This,prc) \
    ((This)->lpVtbl->SetRect(This,prc))
#define IPreviewHandler_DoPreview(This) \
    ((This)->lpVtbl->DoPreview(This))
#define IPreviewHandler_Unload(This) \
    ((This)->lpVtbl->Unload(This))
#define IPreviewHandler_SetFocus(This) \
    ((This)->lpVtbl->SetFocus(This))
#define IPreviewHandler_QueryFocus(This,phwnd) \
    ((This)->lpVtbl->QueryFocus(This,phwnd))
#define IPreviewHandler_TranslateAccelerator(This,pmsg) \
    ((This)->lpVtbl->TranslateAccelerator(This,pmsg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPreviewHandler_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPreviewHandlerFrame interface
 */
#ifndef __IPreviewHandlerFrame_INTERFACE_DEFINED__
#define __IPreviewHandlerFrame_INTERFACE_DEFINED__

typedef struct PREVIEWHANDLERFRAMEINFO {
    HACCEL haccel;
    UINT cAccelEntries;
} PREVIEWHANDLERFRAMEINFO;

EXTERN_C const IID IID_IPreviewHandlerFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPreviewHandlerFrameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPreviewHandlerFrame *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPreviewHandlerFrame *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPreviewHandlerFrame *This);

    /*** IPreviewHandlerFrame methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindowContext)(
        IPreviewHandlerFrame *This,
        PREVIEWHANDLERFRAMEINFO *pinfo);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IPreviewHandlerFrame *This,
        MSG *pmsg);

    END_INTERFACE
} IPreviewHandlerFrameVtbl;

interface IPreviewHandlerFrame {
    CONST_VTBL IPreviewHandlerFrameVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPreviewHandlerFrame_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPreviewHandlerFrame_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPreviewHandlerFrame_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPreviewHandlerFrame methods ***/
#define IPreviewHandlerFrame_GetWindowContext(This,pinfo) \
    ((This)->lpVtbl->GetWindowContext(This,pinfo))
#define IPreviewHandlerFrame_TranslateAccelerator(This,pmsg) \
    ((This)->lpVtbl->TranslateAccelerator(This,pmsg))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPreviewHandlerFrame_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef GUID EXPLORERPANE;

#define REFEXPLORERPANE const EXPLORERPANE * __MIDL_CONST

/*****************************************************************************
 * IExplorerPaneVisibility interface
 */
#ifndef __IExplorerPaneVisibility_INTERFACE_DEFINED__
#define __IExplorerPaneVisibility_INTERFACE_DEFINED__

enum _EXPLORERPANESTATE {
    EPS_DONTCARE = 0x0,
    EPS_DEFAULT_ON = 0x1,
    EPS_DEFAULT_OFF = 0x2,
    EPS_STATEMASK = 0xffff,
    EPS_INITIALSTATE = 0x10000,
    EPS_FORCE = 0x20000
};
typedef DWORD EXPLORERPANESTATE;

EXTERN_C const IID IID_IExplorerPaneVisibility;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExplorerPaneVisibilityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExplorerPaneVisibility *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExplorerPaneVisibility *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExplorerPaneVisibility *This);

    /*** IExplorerPaneVisibility methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPaneState)(
        IExplorerPaneVisibility *This,
        REFEXPLORERPANE ep,
        EXPLORERPANESTATE *peps);

    END_INTERFACE
} IExplorerPaneVisibilityVtbl;

interface IExplorerPaneVisibility {
    CONST_VTBL IExplorerPaneVisibilityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExplorerPaneVisibility_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExplorerPaneVisibility_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExplorerPaneVisibility_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExplorerPaneVisibility methods ***/
#define IExplorerPaneVisibility_GetPaneState(This,ep,peps) \
    ((This)->lpVtbl->GetPaneState(This,ep,peps))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExplorerPaneVisibility_INTERFACE_DEFINED__ */

#define SID_ExplorerPaneVisibility IID_IExplorerPaneVisibility

/*****************************************************************************
 * IContextMenuCB interface
 */
#ifndef __IContextMenuCB_INTERFACE_DEFINED__
#define __IContextMenuCB_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContextMenuCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContextMenuCBVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContextMenuCB *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContextMenuCB *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContextMenuCB *This);

    /*** IContextMenuCB methods ***/
    HRESULT (STDMETHODCALLTYPE *CallBack)(
        IContextMenuCB *This,
        IShellFolder *psf,
        HWND hwndOwner,
        IDataObject *pdtobj,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam);

    END_INTERFACE
} IContextMenuCBVtbl;

interface IContextMenuCB {
    CONST_VTBL IContextMenuCBVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContextMenuCB_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContextMenuCB_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContextMenuCB_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContextMenuCB methods ***/
#define IContextMenuCB_CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam) \
    ((This)->lpVtbl->CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContextMenuCB_INTERFACE_DEFINED__ */

#endif  // NTDDI_VISTA

/*****************************************************************************
 * IDefaultExtractIconInit interface
 */
#ifndef __IDefaultExtractIconInit_INTERFACE_DEFINED__
#define __IDefaultExtractIconInit_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDefaultExtractIconInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDefaultExtractIconInitVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDefaultExtractIconInit *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDefaultExtractIconInit *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDefaultExtractIconInit *This);

    /*** IDefaultExtractIconInit methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFlags)(
        IDefaultExtractIconInit *This,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *SetKey)(
        IDefaultExtractIconInit *This,
        HKEY hkey);

    HRESULT (STDMETHODCALLTYPE *SetNormalIcon)(
        IDefaultExtractIconInit *This,
        LPCWSTR pszFile,
        int iIcon);

    HRESULT (STDMETHODCALLTYPE *SetOpenIcon)(
        IDefaultExtractIconInit *This,
        LPCWSTR pszFile,
        int iIcon);

    HRESULT (STDMETHODCALLTYPE *SetShortcutIcon)(
        IDefaultExtractIconInit *This,
        LPCWSTR pszFile,
        int iIcon);

    HRESULT (STDMETHODCALLTYPE *SetDefaultIcon)(
        IDefaultExtractIconInit *This,
        LPCWSTR pszFile,
        int iIcon);

    END_INTERFACE
} IDefaultExtractIconInitVtbl;

interface IDefaultExtractIconInit {
    CONST_VTBL IDefaultExtractIconInitVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDefaultExtractIconInit_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDefaultExtractIconInit_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDefaultExtractIconInit_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDefaultExtractIconInit methods ***/
#define IDefaultExtractIconInit_SetFlags(This,uFlags) \
    ((This)->lpVtbl->SetFlags(This,uFlags))
#define IDefaultExtractIconInit_SetKey(This,hkey) \
    ((This)->lpVtbl->SetKey(This,hkey))
#define IDefaultExtractIconInit_SetNormalIcon(This,pszFile,iIcon) \
    ((This)->lpVtbl->SetNormalIcon(This,pszFile,iIcon))
#define IDefaultExtractIconInit_SetOpenIcon(This,pszFile,iIcon) \
    ((This)->lpVtbl->SetOpenIcon(This,pszFile,iIcon))
#define IDefaultExtractIconInit_SetShortcutIcon(This,pszFile,iIcon) \
    ((This)->lpVtbl->SetShortcutIcon(This,pszFile,iIcon))
#define IDefaultExtractIconInit_SetDefaultIcon(This,pszFile,iIcon) \
    ((This)->lpVtbl->SetDefaultIcon(This,pszFile,iIcon))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDefaultExtractIconInit_INTERFACE_DEFINED__ */

STDAPI SHCreateDefaultExtractIcon( REFIID riid,  void **ppv);


#ifndef __IEnumExplorerCommand_FWD_DEFINED__
#define __IEnumExplorerCommand_FWD_DEFINED__
typedef interface IEnumExplorerCommand IEnumExplorerCommand;
#endif /* __IEnumExplorerCommand_FWD_DEFINED__ */

/*****************************************************************************
 * IExplorerCommand interface
 */
#ifndef __IExplorerCommand_INTERFACE_DEFINED__
#define __IExplorerCommand_INTERFACE_DEFINED__

enum _EXPCMDSTATE {
    ECS_ENABLED = 0x0,
    ECS_DISABLED = 0x1,
    ECS_HIDDEN = 0x2,
    ECS_CHECKBOX = 0x4,
    ECS_CHECKED = 0x8,
    ECS_RADIOCHECK = 0x10
};
typedef DWORD EXPCMDSTATE;

enum _EXPCMDFLAGS {
    ECF_DEFAULT = 0x0,
    ECF_HASSUBCOMMANDS = 0x1,
    ECF_HASSPLITBUTTON = 0x2,
    ECF_HIDELABEL = 0x4,
    ECF_ISSEPARATOR = 0x8,
    ECF_HASLUASHIELD = 0x10,
    ECF_SEPARATORBEFORE = 0x20,
    ECF_SEPARATORAFTER = 0x40,
    ECF_ISDROPDOWN = 0x80,
    ECF_TOGGLEABLE = 0x100,
    ECF_AUTOMENUICONS = 0x200
};
typedef DWORD EXPCMDFLAGS;

EXTERN_C const IID IID_IExplorerCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExplorerCommandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExplorerCommand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExplorerCommand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExplorerCommand *This);

    /*** IExplorerCommand methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTitle)(
        IExplorerCommand *This,
        IShellItemArray *psiItemArray,
        LPWSTR *ppszName);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        IExplorerCommand *This,
        IShellItemArray *psiItemArray,
        LPWSTR *ppszIcon);

    HRESULT (STDMETHODCALLTYPE *GetToolTip)(
        IExplorerCommand *This,
        IShellItemArray *psiItemArray,
        LPWSTR *ppszInfotip);

    HRESULT (STDMETHODCALLTYPE *GetCanonicalName)(
        IExplorerCommand *This,
        GUID *pguidCommandName);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IExplorerCommand *This,
        IShellItemArray *psiItemArray,
        BOOL fOkToBeSlow,
        EXPCMDSTATE *pCmdState);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IExplorerCommand *This,
        IShellItemArray *psiItemArray,
        IBindCtx *pbc);

    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        IExplorerCommand *This,
        EXPCMDFLAGS *pFlags);

    HRESULT (STDMETHODCALLTYPE *EnumSubCommands)(
        IExplorerCommand *This,
        IEnumExplorerCommand **ppEnum);

    END_INTERFACE
} IExplorerCommandVtbl;

interface IExplorerCommand {
    CONST_VTBL IExplorerCommandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExplorerCommand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExplorerCommand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExplorerCommand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExplorerCommand methods ***/
#define IExplorerCommand_GetTitle(This,psiItemArray,ppszName) \
    ((This)->lpVtbl->GetTitle(This,psiItemArray,ppszName))
#define IExplorerCommand_GetIcon(This,psiItemArray,ppszIcon) \
    ((This)->lpVtbl->GetIcon(This,psiItemArray,ppszIcon))
#define IExplorerCommand_GetToolTip(This,psiItemArray,ppszInfotip) \
    ((This)->lpVtbl->GetToolTip(This,psiItemArray,ppszInfotip))
#define IExplorerCommand_GetCanonicalName(This,pguidCommandName) \
    ((This)->lpVtbl->GetCanonicalName(This,pguidCommandName))
#define IExplorerCommand_GetState(This,psiItemArray,fOkToBeSlow,pCmdState) \
    ((This)->lpVtbl->GetState(This,psiItemArray,fOkToBeSlow,pCmdState))
#define IExplorerCommand_Invoke(This,psiItemArray,pbc) \
    ((This)->lpVtbl->Invoke(This,psiItemArray,pbc))
#define IExplorerCommand_GetFlags(This,pFlags) \
    ((This)->lpVtbl->GetFlags(This,pFlags))
#define IExplorerCommand_EnumSubCommands(This,ppEnum) \
    ((This)->lpVtbl->EnumSubCommands(This,ppEnum))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExplorerCommand_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IExplorerCommandState interface
 */
#ifndef __IExplorerCommandState_INTERFACE_DEFINED__
#define __IExplorerCommandState_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExplorerCommandState;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExplorerCommandStateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExplorerCommandState *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExplorerCommandState *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExplorerCommandState *This);

    /*** IExplorerCommandState methods ***/
    HRESULT (STDMETHODCALLTYPE *GetState)(
        IExplorerCommandState *This,
        IShellItemArray *psiItemArray,
        BOOL fOkToBeSlow,
        EXPCMDSTATE *pCmdState);

    END_INTERFACE
} IExplorerCommandStateVtbl;

interface IExplorerCommandState {
    CONST_VTBL IExplorerCommandStateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExplorerCommandState_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExplorerCommandState_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExplorerCommandState_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExplorerCommandState methods ***/
#define IExplorerCommandState_GetState(This,psiItemArray,fOkToBeSlow,pCmdState) \
    ((This)->lpVtbl->GetState(This,psiItemArray,fOkToBeSlow,pCmdState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExplorerCommandState_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInitializeCommand interface
 */
#ifndef __IInitializeCommand_INTERFACE_DEFINED__
#define __IInitializeCommand_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInitializeCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeCommandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeCommand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeCommand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeCommand *This);

    /*** IInitializeCommand methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IInitializeCommand *This,
        LPCWSTR pszCommandName,
        IPropertyBag *ppb);

    END_INTERFACE
} IInitializeCommandVtbl;

interface IInitializeCommand {
    CONST_VTBL IInitializeCommandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeCommand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeCommand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeCommand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeCommand methods ***/
#define IInitializeCommand_Initialize(This,pszCommandName,ppb) \
    ((This)->lpVtbl->Initialize(This,pszCommandName,ppb))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeCommand_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumExplorerCommand interface
 */
#ifndef __IEnumExplorerCommand_INTERFACE_DEFINED__
#define __IEnumExplorerCommand_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumExplorerCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumExplorerCommandVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumExplorerCommand *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumExplorerCommand *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumExplorerCommand *This);

    /*** IEnumExplorerCommand methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumExplorerCommand *This,
        ULONG celt,
        IExplorerCommand **pUICommand,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumExplorerCommand *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumExplorerCommand *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumExplorerCommand *This,
        IEnumExplorerCommand **ppenum);

    END_INTERFACE
} IEnumExplorerCommandVtbl;

interface IEnumExplorerCommand {
    CONST_VTBL IEnumExplorerCommandVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumExplorerCommand_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumExplorerCommand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumExplorerCommand_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumExplorerCommand methods ***/
#define IEnumExplorerCommand_Next(This,celt,pUICommand,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,pUICommand,pceltFetched))
#define IEnumExplorerCommand_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumExplorerCommand_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumExplorerCommand_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_RemoteNext_Proxy(
    IEnumExplorerCommand *This,
    ULONG celt,
    IExplorerCommand **pUICommand,
    ULONG *pceltFetched);

void __RPC_STUB IEnumExplorerCommand_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumExplorerCommand_Next_Proxy(
    ULONG celt,
    IExplorerCommand **pUICommand,
    ULONG *pceltFetched);
HRESULT IEnumExplorerCommand_Next_Stub(
    ULONG celt,
    IExplorerCommand **pUICommand,
    ULONG *pceltFetched);
#endif /* __IEnumExplorerCommand_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IExplorerCommandProvider interface
 */
#ifndef __IExplorerCommandProvider_INTERFACE_DEFINED__
#define __IExplorerCommandProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExplorerCommandProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExplorerCommandProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExplorerCommandProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExplorerCommandProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExplorerCommandProvider *This);

    /*** IExplorerCommandProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCommands)(
        IExplorerCommandProvider *This,
        IUnknown *punkSite,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetCommand)(
        IExplorerCommandProvider *This,
        REFGUID rguidCommandId,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IExplorerCommandProviderVtbl;

interface IExplorerCommandProvider {
    CONST_VTBL IExplorerCommandProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExplorerCommandProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExplorerCommandProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExplorerCommandProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExplorerCommandProvider methods ***/
#define IExplorerCommandProvider_GetCommands(This,punkSite,riid,ppv) \
    ((This)->lpVtbl->GetCommands(This,punkSite,riid,ppv))
#define IExplorerCommandProvider_GetCommand(This,rguidCommandId,riid,ppv) \
    ((This)->lpVtbl->GetCommand(This,rguidCommandId,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExplorerCommandProvider_INTERFACE_DEFINED__ */

typedef HANDLE HTHEME;

typedef enum CPVIEW {
    CPVIEW_CLASSIC = 0,
    CPVIEW_ALLITEMS = CPVIEW_CLASSIC,
    CPVIEW_CATEGORY = 1,
    CPVIEW_HOME = CPVIEW_CATEGORY
} CPVIEW;

/*****************************************************************************
 * IOpenControlPanel interface
 */
#ifndef __IOpenControlPanel_INTERFACE_DEFINED__
#define __IOpenControlPanel_INTERFACE_DEFINED__

EXTERN_C const IID IID_IOpenControlPanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOpenControlPanelVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOpenControlPanel *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOpenControlPanel *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOpenControlPanel *This);

    /*** IOpenControlPanel methods ***/
    HRESULT (STDMETHODCALLTYPE *Open)(
        IOpenControlPanel *This,
        LPCWSTR pszName,
        LPCWSTR pszPage,
        IUnknown *punkSite);

    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IOpenControlPanel *This,
        LPCWSTR pszName,
        LPWSTR pszPath,
        UINT cchPath);

    HRESULT (STDMETHODCALLTYPE *GetCurrentView)(
        IOpenControlPanel *This,
        CPVIEW *pView);

    END_INTERFACE
} IOpenControlPanelVtbl;

interface IOpenControlPanel {
    CONST_VTBL IOpenControlPanelVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOpenControlPanel_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOpenControlPanel_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOpenControlPanel_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOpenControlPanel methods ***/
#define IOpenControlPanel_Open(This,pszName,pszPage,punkSite) \
    ((This)->lpVtbl->Open(This,pszName,pszPage,punkSite))
#define IOpenControlPanel_GetPath(This,pszName,pszPath,cchPath) \
    ((This)->lpVtbl->GetPath(This,pszName,pszPath,cchPath))
#define IOpenControlPanel_GetCurrentView(This,pView) \
    ((This)->lpVtbl->GetCurrentView(This,pView))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOpenControlPanel_INTERFACE_DEFINED__ */

#define STR_FILE_SYS_BIND_DATA      L"File System Bind Data"

#define STR_FILE_SYS_BIND_DATA_WIN7_FORMAT  L"Win7FileSystemIdList"

/*****************************************************************************
 * IFileSystemBindData interface
 */
#ifndef __IFileSystemBindData_INTERFACE_DEFINED__
#define __IFileSystemBindData_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileSystemBindData;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileSystemBindDataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileSystemBindData *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileSystemBindData *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileSystemBindData *This);

    /*** IFileSystemBindData methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFindData)(
        IFileSystemBindData *This,
        const WIN32_FIND_DATAW *pfd);

    HRESULT (STDMETHODCALLTYPE *GetFindData)(
        IFileSystemBindData *This,
        WIN32_FIND_DATAW *pfd);

    END_INTERFACE
} IFileSystemBindDataVtbl;

interface IFileSystemBindData {
    CONST_VTBL IFileSystemBindDataVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileSystemBindData_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileSystemBindData_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileSystemBindData_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileSystemBindData methods ***/
#define IFileSystemBindData_SetFindData(This,pfd) \
    ((This)->lpVtbl->SetFindData(This,pfd))
#define IFileSystemBindData_GetFindData(This,pfd) \
    ((This)->lpVtbl->GetFindData(This,pfd))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileSystemBindData_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFileSystemBindData2 interface
 */
#ifndef __IFileSystemBindData2_INTERFACE_DEFINED__
#define __IFileSystemBindData2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFileSystemBindData2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFileSystemBindData2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFileSystemBindData2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFileSystemBindData2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFileSystemBindData2 *This);

    /*** IFileSystemBindData methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFindData)(
        IFileSystemBindData2 *This,
        const WIN32_FIND_DATAW *pfd);

    HRESULT (STDMETHODCALLTYPE *GetFindData)(
        IFileSystemBindData2 *This,
        WIN32_FIND_DATAW *pfd);

    /*** IFileSystemBindData2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFileID)(
        IFileSystemBindData2 *This,
        LARGE_INTEGER liFileID);

    HRESULT (STDMETHODCALLTYPE *GetFileID)(
        IFileSystemBindData2 *This,
        LARGE_INTEGER *pliFileID);

    HRESULT (STDMETHODCALLTYPE *SetJunctionCLSID)(
        IFileSystemBindData2 *This,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *GetJunctionCLSID)(
        IFileSystemBindData2 *This,
        CLSID *pclsid);

    END_INTERFACE
} IFileSystemBindData2Vtbl;

interface IFileSystemBindData2 {
    CONST_VTBL IFileSystemBindData2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFileSystemBindData2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFileSystemBindData2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFileSystemBindData2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFileSystemBindData methods ***/
#define IFileSystemBindData2_SetFindData(This,pfd) \
    ((This)->lpVtbl->SetFindData(This,pfd))
#define IFileSystemBindData2_GetFindData(This,pfd) \
    ((This)->lpVtbl->GetFindData(This,pfd))
/*** IFileSystemBindData2 methods ***/
#define IFileSystemBindData2_SetFileID(This,liFileID) \
    ((This)->lpVtbl->SetFileID(This,liFileID))
#define IFileSystemBindData2_GetFileID(This,pliFileID) \
    ((This)->lpVtbl->GetFileID(This,pliFileID))
#define IFileSystemBindData2_SetJunctionCLSID(This,clsid) \
    ((This)->lpVtbl->SetJunctionCLSID(This,clsid))
#define IFileSystemBindData2_GetJunctionCLSID(This,pclsid) \
    ((This)->lpVtbl->GetJunctionCLSID(This,pclsid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFileSystemBindData2_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN7)

/*****************************************************************************
 * ICustomDestinationList interface
 */
#ifndef __ICustomDestinationList_INTERFACE_DEFINED__
#define __ICustomDestinationList_INTERFACE_DEFINED__

typedef enum KNOWNDESTCATEGORY {
    KDC_FREQUENT = 1,
    KDC_RECENT = 2
} KNOWNDESTCATEGORY;

EXTERN_C const IID IID_ICustomDestinationList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICustomDestinationListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICustomDestinationList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICustomDestinationList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICustomDestinationList *This);

    /*** ICustomDestinationList methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAppID)(
        ICustomDestinationList *This,
        LPCWSTR pszAppID);

    HRESULT (STDMETHODCALLTYPE *BeginList)(
        ICustomDestinationList *This,
        UINT *pcMinSlots,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *AppendCategory)(
        ICustomDestinationList *This,
        LPCWSTR pszCategory,
        IObjectArray *poa);

    HRESULT (STDMETHODCALLTYPE *AppendKnownCategory)(
        ICustomDestinationList *This,
        KNOWNDESTCATEGORY category);

    HRESULT (STDMETHODCALLTYPE *AddUserTasks)(
        ICustomDestinationList *This,
        IObjectArray *poa);

    HRESULT (STDMETHODCALLTYPE *CommitList)(
        ICustomDestinationList *This);

    HRESULT (STDMETHODCALLTYPE *GetRemovedDestinations)(
        ICustomDestinationList *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *DeleteList)(
        ICustomDestinationList *This,
        LPCWSTR pszAppID);

    HRESULT (STDMETHODCALLTYPE *AbortList)(
        ICustomDestinationList *This);

    END_INTERFACE
} ICustomDestinationListVtbl;

interface ICustomDestinationList {
    CONST_VTBL ICustomDestinationListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICustomDestinationList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICustomDestinationList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICustomDestinationList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICustomDestinationList methods ***/
#define ICustomDestinationList_SetAppID(This,pszAppID) \
    ((This)->lpVtbl->SetAppID(This,pszAppID))
#define ICustomDestinationList_BeginList(This,pcMinSlots,riid,ppv) \
    ((This)->lpVtbl->BeginList(This,pcMinSlots,riid,ppv))
#define ICustomDestinationList_AppendCategory(This,pszCategory,poa) \
    ((This)->lpVtbl->AppendCategory(This,pszCategory,poa))
#define ICustomDestinationList_AppendKnownCategory(This,category) \
    ((This)->lpVtbl->AppendKnownCategory(This,category))
#define ICustomDestinationList_AddUserTasks(This,poa) \
    ((This)->lpVtbl->AddUserTasks(This,poa))
#define ICustomDestinationList_CommitList(This) \
    ((This)->lpVtbl->CommitList(This))
#define ICustomDestinationList_GetRemovedDestinations(This,riid,ppv) \
    ((This)->lpVtbl->GetRemovedDestinations(This,riid,ppv))
#define ICustomDestinationList_DeleteList(This,pszAppID) \
    ((This)->lpVtbl->DeleteList(This,pszAppID))
#define ICustomDestinationList_AbortList(This) \
    ((This)->lpVtbl->AbortList(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICustomDestinationList_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IApplicationDestinations interface
 */
#ifndef __IApplicationDestinations_INTERFACE_DEFINED__
#define __IApplicationDestinations_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApplicationDestinations;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationDestinationsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationDestinations *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationDestinations *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationDestinations *This);

    /*** IApplicationDestinations methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAppID)(
        IApplicationDestinations *This,
        LPCWSTR pszAppID);

    HRESULT (STDMETHODCALLTYPE *RemoveDestination)(
        IApplicationDestinations *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *RemoveAllDestinations)(
        IApplicationDestinations *This);

    END_INTERFACE
} IApplicationDestinationsVtbl;

interface IApplicationDestinations {
    CONST_VTBL IApplicationDestinationsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationDestinations_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationDestinations_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationDestinations_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationDestinations methods ***/
#define IApplicationDestinations_SetAppID(This,pszAppID) \
    ((This)->lpVtbl->SetAppID(This,pszAppID))
#define IApplicationDestinations_RemoveDestination(This,punk) \
    ((This)->lpVtbl->RemoveDestination(This,punk))
#define IApplicationDestinations_RemoveAllDestinations(This) \
    ((This)->lpVtbl->RemoveAllDestinations(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationDestinations_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IApplicationDocumentLists interface
 */
#ifndef __IApplicationDocumentLists_INTERFACE_DEFINED__
#define __IApplicationDocumentLists_INTERFACE_DEFINED__

typedef enum APPDOCLISTTYPE {
    ADLT_RECENT = 0,
    ADLT_FREQUENT = 1
} APPDOCLISTTYPE;

EXTERN_C const IID IID_IApplicationDocumentLists;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationDocumentListsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationDocumentLists *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationDocumentLists *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationDocumentLists *This);

    /*** IApplicationDocumentLists methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAppID)(
        IApplicationDocumentLists *This,
        LPCWSTR pszAppID);

    HRESULT (STDMETHODCALLTYPE *GetList)(
        IApplicationDocumentLists *This,
        APPDOCLISTTYPE listtype,
        UINT cItemsDesired,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IApplicationDocumentListsVtbl;

interface IApplicationDocumentLists {
    CONST_VTBL IApplicationDocumentListsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationDocumentLists_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationDocumentLists_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationDocumentLists_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationDocumentLists methods ***/
#define IApplicationDocumentLists_SetAppID(This,pszAppID) \
    ((This)->lpVtbl->SetAppID(This,pszAppID))
#define IApplicationDocumentLists_GetList(This,listtype,cItemsDesired,riid,ppv) \
    ((This)->lpVtbl->GetList(This,listtype,cItemsDesired,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationDocumentLists_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectWithAppUserModelID interface
 */
#ifndef __IObjectWithAppUserModelID_INTERFACE_DEFINED__
#define __IObjectWithAppUserModelID_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectWithAppUserModelID;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectWithAppUserModelIDVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectWithAppUserModelID *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectWithAppUserModelID *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectWithAppUserModelID *This);

    /*** IObjectWithAppUserModelID methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAppID)(
        IObjectWithAppUserModelID *This,
        LPCWSTR pszAppID);

    HRESULT (STDMETHODCALLTYPE *GetAppID)(
        IObjectWithAppUserModelID *This,
        LPWSTR *ppszAppID);

    END_INTERFACE
} IObjectWithAppUserModelIDVtbl;

interface IObjectWithAppUserModelID {
    CONST_VTBL IObjectWithAppUserModelIDVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectWithAppUserModelID_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectWithAppUserModelID_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectWithAppUserModelID_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectWithAppUserModelID methods ***/
#define IObjectWithAppUserModelID_SetAppID(This,pszAppID) \
    ((This)->lpVtbl->SetAppID(This,pszAppID))
#define IObjectWithAppUserModelID_GetAppID(This,ppszAppID) \
    ((This)->lpVtbl->GetAppID(This,ppszAppID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectWithAppUserModelID_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectWithProgID interface
 */
#ifndef __IObjectWithProgID_INTERFACE_DEFINED__
#define __IObjectWithProgID_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectWithProgID;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectWithProgIDVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectWithProgID *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectWithProgID *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectWithProgID *This);

    /*** IObjectWithProgID methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProgID)(
        IObjectWithProgID *This,
        LPCWSTR pszProgID);

    HRESULT (STDMETHODCALLTYPE *GetProgID)(
        IObjectWithProgID *This,
        LPWSTR *ppszProgID);

    END_INTERFACE
} IObjectWithProgIDVtbl;

interface IObjectWithProgID {
    CONST_VTBL IObjectWithProgIDVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectWithProgID_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectWithProgID_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectWithProgID_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectWithProgID methods ***/
#define IObjectWithProgID_SetProgID(This,pszProgID) \
    ((This)->lpVtbl->SetProgID(This,pszProgID))
#define IObjectWithProgID_GetProgID(This,ppszProgID) \
    ((This)->lpVtbl->GetProgID(This,ppszProgID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectWithProgID_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUpdateIDList interface
 */
#ifndef __IUpdateIDList_INTERFACE_DEFINED__
#define __IUpdateIDList_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUpdateIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUpdateIDListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUpdateIDList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUpdateIDList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUpdateIDList *This);

    /*** IUpdateIDList methods ***/
    HRESULT (STDMETHODCALLTYPE *Update)(
        IUpdateIDList *This,
        IBindCtx *pbc,
        PCUITEMID_CHILD pidlIn,
        PITEMID_CHILD *ppidlOut);

    END_INTERFACE
} IUpdateIDListVtbl;

interface IUpdateIDList {
    CONST_VTBL IUpdateIDListVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUpdateIDList_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUpdateIDList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUpdateIDList_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUpdateIDList methods ***/
#define IUpdateIDList_Update(This,pbc,pidlIn,ppidlOut) \
    ((This)->lpVtbl->Update(This,pbc,pidlIn,ppidlOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUpdateIDList_INTERFACE_DEFINED__ */

SHSTDAPI SetCurrentProcessExplicitAppUserModelID( PCWSTR AppID);

SHSTDAPI GetCurrentProcessExplicitAppUserModelID( PWSTR *AppID);

#endif // NTDDI_WIN7

#if (NTDDI_VERSION >= NTDDI_WIN8)

/*****************************************************************************
 * IDesktopWallpaper interface
 */
#ifndef __IDesktopWallpaper_INTERFACE_DEFINED__
#define __IDesktopWallpaper_INTERFACE_DEFINED__

typedef enum DESKTOP_SLIDESHOW_OPTIONS {
    DSO_SHUFFLEIMAGES = 0x1
} DESKTOP_SLIDESHOW_OPTIONS;


typedef enum DESKTOP_SLIDESHOW_STATE {
    DSS_ENABLED = 0x1,
    DSS_SLIDESHOW = 0x2,
    DSS_DISABLED_BY_REMOTE_SESSION = 0x4
} DESKTOP_SLIDESHOW_STATE;


typedef enum DESKTOP_SLIDESHOW_DIRECTION {
    DSD_FORWARD = 0,
    DSD_BACKWARD = 1
} DESKTOP_SLIDESHOW_DIRECTION;

typedef enum DESKTOP_WALLPAPER_POSITION {
    DWPOS_CENTER = 0,
    DWPOS_TILE = 1,
    DWPOS_STRETCH = 2,
    DWPOS_FIT = 3,
    DWPOS_FILL = 4,
    DWPOS_SPAN = 5
} DESKTOP_WALLPAPER_POSITION;

EXTERN_C const IID IID_IDesktopWallpaper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDesktopWallpaperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDesktopWallpaper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDesktopWallpaper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDesktopWallpaper *This);

    /*** IDesktopWallpaper methods ***/
    HRESULT (STDMETHODCALLTYPE *SetWallpaper)(
        IDesktopWallpaper *This,
        LPCWSTR monitorID,
        LPCWSTR wallpaper);

    HRESULT (STDMETHODCALLTYPE *GetWallpaper)(
        IDesktopWallpaper *This,
        LPCWSTR monitorID,
        LPWSTR *wallpaper);

    HRESULT (STDMETHODCALLTYPE *GetMonitorDevicePathAt)(
        IDesktopWallpaper *This,
        UINT monitorIndex,
        LPWSTR *monitorID);

    HRESULT (STDMETHODCALLTYPE *GetMonitorDevicePathCount)(
        IDesktopWallpaper *This,
        UINT *count);

    HRESULT (STDMETHODCALLTYPE *GetMonitorRECT)(
        IDesktopWallpaper *This,
        LPCWSTR monitorID,
        RECT *displayRect);

    HRESULT (STDMETHODCALLTYPE *SetBackgroundColor)(
        IDesktopWallpaper *This,
        COLORREF color);

    HRESULT (STDMETHODCALLTYPE *GetBackgroundColor)(
        IDesktopWallpaper *This,
        COLORREF *color);

    HRESULT (STDMETHODCALLTYPE *SetPosition)(
        IDesktopWallpaper *This,
        DESKTOP_WALLPAPER_POSITION position);

    HRESULT (STDMETHODCALLTYPE *GetPosition)(
        IDesktopWallpaper *This,
        DESKTOP_WALLPAPER_POSITION *position);

    HRESULT (STDMETHODCALLTYPE *SetSlideshow)(
        IDesktopWallpaper *This,
        IShellItemArray *items);

    HRESULT (STDMETHODCALLTYPE *GetSlideshow)(
        IDesktopWallpaper *This,
        IShellItemArray **items);

    HRESULT (STDMETHODCALLTYPE *SetSlideshowOptions)(
        IDesktopWallpaper *This,
        DESKTOP_SLIDESHOW_OPTIONS options,
        UINT slideshowTick);

    HRESULT (STDMETHODCALLTYPE *GetSlideshowOptions)(
        IDesktopWallpaper *This,
        DESKTOP_SLIDESHOW_OPTIONS *options,
        UINT *slideshowTick);

    HRESULT (STDMETHODCALLTYPE *AdvanceSlideshow)(
        IDesktopWallpaper *This,
        LPCWSTR monitorID,
        DESKTOP_SLIDESHOW_DIRECTION direction);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IDesktopWallpaper *This,
        DESKTOP_SLIDESHOW_STATE *state);

    HRESULT (STDMETHODCALLTYPE *Enable)(
        IDesktopWallpaper *This,
        BOOL enable);

    END_INTERFACE
} IDesktopWallpaperVtbl;

interface IDesktopWallpaper {
    CONST_VTBL IDesktopWallpaperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDesktopWallpaper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDesktopWallpaper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDesktopWallpaper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDesktopWallpaper methods ***/
#define IDesktopWallpaper_SetWallpaper(This,monitorID,wallpaper) \
    ((This)->lpVtbl->SetWallpaper(This,monitorID,wallpaper))
#define IDesktopWallpaper_GetWallpaper(This,monitorID,wallpaper) \
    ((This)->lpVtbl->GetWallpaper(This,monitorID,wallpaper))
#define IDesktopWallpaper_GetMonitorDevicePathAt(This,monitorIndex,monitorID) \
    ((This)->lpVtbl->GetMonitorDevicePathAt(This,monitorIndex,monitorID))
#define IDesktopWallpaper_GetMonitorDevicePathCount(This,count) \
    ((This)->lpVtbl->GetMonitorDevicePathCount(This,count))
#define IDesktopWallpaper_GetMonitorRECT(This,monitorID,displayRect) \
    ((This)->lpVtbl->GetMonitorRECT(This,monitorID,displayRect))
#define IDesktopWallpaper_SetBackgroundColor(This,color) \
    ((This)->lpVtbl->SetBackgroundColor(This,color))
#define IDesktopWallpaper_GetBackgroundColor(This,color) \
    ((This)->lpVtbl->GetBackgroundColor(This,color))
#define IDesktopWallpaper_SetPosition(This,position) \
    ((This)->lpVtbl->SetPosition(This,position))
#define IDesktopWallpaper_GetPosition(This,position) \
    ((This)->lpVtbl->GetPosition(This,position))
#define IDesktopWallpaper_SetSlideshow(This,items) \
    ((This)->lpVtbl->SetSlideshow(This,items))
#define IDesktopWallpaper_GetSlideshow(This,items) \
    ((This)->lpVtbl->GetSlideshow(This,items))
#define IDesktopWallpaper_SetSlideshowOptions(This,options,slideshowTick) \
    ((This)->lpVtbl->SetSlideshowOptions(This,options,slideshowTick))
#define IDesktopWallpaper_GetSlideshowOptions(This,options,slideshowTick) \
    ((This)->lpVtbl->GetSlideshowOptions(This,options,slideshowTick))
#define IDesktopWallpaper_AdvanceSlideshow(This,monitorID,direction) \
    ((This)->lpVtbl->AdvanceSlideshow(This,monitorID,direction))
#define IDesktopWallpaper_GetStatus(This,state) \
    ((This)->lpVtbl->GetStatus(This,state))
#define IDesktopWallpaper_Enable(This,enable) \
    ((This)->lpVtbl->Enable(This,enable))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDesktopWallpaper_INTERFACE_DEFINED__ */

#endif // NTDDI_WIN8

#define HOMEGROUP_SECURITY_GROUP_MULTI L"HUG"
#define HOMEGROUP_SECURITY_GROUP L"HomeUsers"

/*****************************************************************************
 * IHomeGroup interface
 */
#ifndef __IHomeGroup_INTERFACE_DEFINED__
#define __IHomeGroup_INTERFACE_DEFINED__

typedef enum HOMEGROUPSHARINGCHOICES {
    HGSC_NONE = 0x0,
    HGSC_MUSICLIBRARY = 0x1,
    HGSC_PICTURESLIBRARY = 0x2,
    HGSC_VIDEOSLIBRARY = 0x4,
    HGSC_DOCUMENTSLIBRARY = 0x8,
    HGSC_PRINTERS = 0x10
} HOMEGROUPSHARINGCHOICES;

EXTERN_C const IID IID_IHomeGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHomeGroupVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHomeGroup *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHomeGroup *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHomeGroup *This);

    /*** IHomeGroup methods ***/
    HRESULT (STDMETHODCALLTYPE *IsMember)(
        IHomeGroup *This,
        BOOL *member);

    HRESULT (STDMETHODCALLTYPE *ShowSharingWizard)(
        IHomeGroup *This,
        HWND owner,
        HOMEGROUPSHARINGCHOICES *sharingchoices);

    END_INTERFACE
} IHomeGroupVtbl;

interface IHomeGroup {
    CONST_VTBL IHomeGroupVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHomeGroup_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHomeGroup_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHomeGroup_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHomeGroup methods ***/
#define IHomeGroup_IsMember(This,member) \
    ((This)->lpVtbl->IsMember(This,member))
#define IHomeGroup_ShowSharingWizard(This,owner,sharingchoices) \
    ((This)->lpVtbl->ShowSharingWizard(This,owner,sharingchoices))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHomeGroup_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInitializeWithPropertyStore interface
 */
#ifndef __IInitializeWithPropertyStore_INTERFACE_DEFINED__
#define __IInitializeWithPropertyStore_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInitializeWithPropertyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeWithPropertyStoreVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeWithPropertyStore *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeWithPropertyStore *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeWithPropertyStore *This);

    /*** IInitializeWithPropertyStore methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IInitializeWithPropertyStore *This,
        IPropertyStore *pps);

    END_INTERFACE
} IInitializeWithPropertyStoreVtbl;

interface IInitializeWithPropertyStore {
    CONST_VTBL IInitializeWithPropertyStoreVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeWithPropertyStore_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeWithPropertyStore_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeWithPropertyStore_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeWithPropertyStore methods ***/
#define IInitializeWithPropertyStore_Initialize(This,pps) \
    ((This)->lpVtbl->Initialize(This,pps))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeWithPropertyStore_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOpenSearchSource interface
 */
#ifndef __IOpenSearchSource_INTERFACE_DEFINED__
#define __IOpenSearchSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IOpenSearchSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOpenSearchSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOpenSearchSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOpenSearchSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOpenSearchSource *This);

    /*** IOpenSearchSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResults)(
        IOpenSearchSource *This,
        HWND hwnd,
        LPCWSTR pszQuery,
        DWORD dwStartIndex,
        DWORD dwCount,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IOpenSearchSourceVtbl;

interface IOpenSearchSource {
    CONST_VTBL IOpenSearchSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOpenSearchSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOpenSearchSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOpenSearchSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOpenSearchSource methods ***/
#define IOpenSearchSource_GetResults(This,hwnd,pszQuery,dwStartIndex,dwCount,riid,ppv) \
    ((This)->lpVtbl->GetResults(This,hwnd,pszQuery,dwStartIndex,dwCount,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOpenSearchSource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IShellLibrary interface
 */
#ifndef __IShellLibrary_INTERFACE_DEFINED__
#define __IShellLibrary_INTERFACE_DEFINED__

typedef enum LIBRARYFOLDERFILTER {
    LFF_FORCEFILESYSTEM = 1,
    LFF_STORAGEITEMS = 2,
    LFF_ALLITEMS = 3
} LIBRARYFOLDERFILTER;

typedef enum LIBRARYOPTIONFLAGS {
    LOF_DEFAULT = 0x0,
    LOF_PINNEDTONAVPANE = 0x1,
    LOF_MASK_ALL = 0x1
} LIBRARYOPTIONFLAGS;


typedef enum DEFAULTSAVEFOLDERTYPE {
    DSFT_DETECT = 1,
    DSFT_PRIVATE = 2,
    DSFT_PUBLIC = 3
} DEFAULTSAVEFOLDERTYPE;

typedef enum LIBRARYSAVEFLAGS {
    LSF_FAILIFTHERE = 0x0,
    LSF_OVERRIDEEXISTING = 0x1,
    LSF_MAKEUNIQUENAME = 0x2
} LIBRARYSAVEFLAGS;


EXTERN_C const IID IID_IShellLibrary;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellLibraryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellLibrary *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellLibrary *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellLibrary *This);

    /*** IShellLibrary methods ***/
    HRESULT (STDMETHODCALLTYPE *LoadLibraryFromItem)(
        IShellLibrary *This,
        IShellItem *psiLibrary,
        DWORD grfMode);

    HRESULT (STDMETHODCALLTYPE *LoadLibraryFromKnownFolder)(
        IShellLibrary *This,
        REFKNOWNFOLDERID kfidLibrary,
        DWORD grfMode);

    HRESULT (STDMETHODCALLTYPE *AddFolder)(
        IShellLibrary *This,
        IShellItem *psiLocation);

    HRESULT (STDMETHODCALLTYPE *RemoveFolder)(
        IShellLibrary *This,
        IShellItem *psiLocation);

    HRESULT (STDMETHODCALLTYPE *GetFolders)(
        IShellLibrary *This,
        LIBRARYFOLDERFILTER lff,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *ResolveFolder)(
        IShellLibrary *This,
        IShellItem *psiFolderToResolve,
        DWORD dwTimeout,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetDefaultSaveFolder)(
        IShellLibrary *This,
        DEFAULTSAVEFOLDERTYPE dsft,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *SetDefaultSaveFolder)(
        IShellLibrary *This,
        DEFAULTSAVEFOLDERTYPE dsft,
        IShellItem *psi);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IShellLibrary *This,
        LIBRARYOPTIONFLAGS *plofOptions);

    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IShellLibrary *This,
        LIBRARYOPTIONFLAGS lofMask,
        LIBRARYOPTIONFLAGS lofOptions);

    HRESULT (STDMETHODCALLTYPE *GetFolderType)(
        IShellLibrary *This,
        FOLDERTYPEID *pftid);

    HRESULT (STDMETHODCALLTYPE *SetFolderType)(
        IShellLibrary *This,
        REFFOLDERTYPEID ftid);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        IShellLibrary *This,
        LPWSTR *ppszIcon);

    HRESULT (STDMETHODCALLTYPE *SetIcon)(
        IShellLibrary *This,
        LPCWSTR pszIcon);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IShellLibrary *This);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IShellLibrary *This,
        IShellItem *psiFolderToSaveIn,
        LPCWSTR pszLibraryName,
        LIBRARYSAVEFLAGS lsf,
        IShellItem **ppsiSavedTo);

    HRESULT (STDMETHODCALLTYPE *SaveInKnownFolder)(
        IShellLibrary *This,
        REFKNOWNFOLDERID kfidToSaveIn,
        LPCWSTR pszLibraryName,
        LIBRARYSAVEFLAGS lsf,
        IShellItem **ppsiSavedTo);

    END_INTERFACE
} IShellLibraryVtbl;

interface IShellLibrary {
    CONST_VTBL IShellLibraryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellLibrary_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellLibrary_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellLibrary_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellLibrary methods ***/
#define IShellLibrary_LoadLibraryFromItem(This,psiLibrary,grfMode) \
    ((This)->lpVtbl->LoadLibraryFromItem(This,psiLibrary,grfMode))
#define IShellLibrary_LoadLibraryFromKnownFolder(This,kfidLibrary,grfMode) \
    ((This)->lpVtbl->LoadLibraryFromKnownFolder(This,kfidLibrary,grfMode))
#define IShellLibrary_AddFolder(This,psiLocation) \
    ((This)->lpVtbl->AddFolder(This,psiLocation))
#define IShellLibrary_RemoveFolder(This,psiLocation) \
    ((This)->lpVtbl->RemoveFolder(This,psiLocation))
#define IShellLibrary_GetFolders(This,lff,riid,ppv) \
    ((This)->lpVtbl->GetFolders(This,lff,riid,ppv))
#define IShellLibrary_ResolveFolder(This,psiFolderToResolve,dwTimeout,riid,ppv) \
    ((This)->lpVtbl->ResolveFolder(This,psiFolderToResolve,dwTimeout,riid,ppv))
#define IShellLibrary_GetDefaultSaveFolder(This,dsft,riid,ppv) \
    ((This)->lpVtbl->GetDefaultSaveFolder(This,dsft,riid,ppv))
#define IShellLibrary_SetDefaultSaveFolder(This,dsft,psi) \
    ((This)->lpVtbl->SetDefaultSaveFolder(This,dsft,psi))
#define IShellLibrary_GetOptions(This,plofOptions) \
    ((This)->lpVtbl->GetOptions(This,plofOptions))
#define IShellLibrary_SetOptions(This,lofMask,lofOptions) \
    ((This)->lpVtbl->SetOptions(This,lofMask,lofOptions))
#define IShellLibrary_GetFolderType(This,pftid) \
    ((This)->lpVtbl->GetFolderType(This,pftid))
#define IShellLibrary_SetFolderType(This,ftid) \
    ((This)->lpVtbl->SetFolderType(This,ftid))
#define IShellLibrary_GetIcon(This,ppszIcon) \
    ((This)->lpVtbl->GetIcon(This,ppszIcon))
#define IShellLibrary_SetIcon(This,pszIcon) \
    ((This)->lpVtbl->SetIcon(This,pszIcon))
#define IShellLibrary_Commit(This) \
    ((This)->lpVtbl->Commit(This))
#define IShellLibrary_Save(This,psiFolderToSaveIn,pszLibraryName,lsf,ppsiSavedTo) \
    ((This)->lpVtbl->Save(This,psiFolderToSaveIn,pszLibraryName,lsf,ppsiSavedTo))
#define IShellLibrary_SaveInKnownFolder(This,kfidToSaveIn,pszLibraryName,lsf,ppsiSavedTo) \
    ((This)->lpVtbl->SaveInKnownFolder(This,kfidToSaveIn,pszLibraryName,lsf,ppsiSavedTo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellLibrary_INTERFACE_DEFINED__ */

typedef enum DEFAULT_FOLDER_MENU_RESTRICTIONS {
    DFMR_DEFAULT = 0x0,
    DFMR_NO_STATIC_VERBS = 0x8,
    DFMR_STATIC_VERBS_ONLY = 0x10,
    DFMR_NO_RESOURCE_VERBS = 0x20,
    DFMR_OPTIN_HANDLERS_ONLY = 0x40,
    DFMR_RESOURCE_AND_FOLDER_VERBS_ONLY = 0x80,
    DFMR_USE_SPECIFIED_HANDLERS = 0x100,
    DFMR_USE_SPECIFIED_VERBS = 0x200,
    DFMR_NO_ASYNC_VERBS = 0x400,
    DFMR_NO_NATIVECPU_VERBS = 0x800,
    DFMR_NO_NONWOW_VERBS = 0x1000
} DEFAULT_FOLDER_MENU_RESTRICTIONS;


/*****************************************************************************
 * IDefaultFolderMenuInitialize interface
 */
#ifndef __IDefaultFolderMenuInitialize_INTERFACE_DEFINED__
#define __IDefaultFolderMenuInitialize_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDefaultFolderMenuInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDefaultFolderMenuInitializeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDefaultFolderMenuInitialize *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDefaultFolderMenuInitialize *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDefaultFolderMenuInitialize *This);

    /*** IDefaultFolderMenuInitialize methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IDefaultFolderMenuInitialize *This,
        HWND hwnd,
        IContextMenuCB *pcmcb,
        PCIDLIST_ABSOLUTE pidlFolder,
        IShellFolder *psf,
        UINT cidl,
        PCUITEMID_CHILD_ARRAY apidl,
        IUnknown *punkAssociation,
        UINT cKeys,
        const HKEY *aKeys);

    HRESULT (STDMETHODCALLTYPE *SetMenuRestrictions)(
        IDefaultFolderMenuInitialize *This,
        DEFAULT_FOLDER_MENU_RESTRICTIONS dfmrValues);

    HRESULT (STDMETHODCALLTYPE *GetMenuRestrictions)(
        IDefaultFolderMenuInitialize *This,
        DEFAULT_FOLDER_MENU_RESTRICTIONS dfmrMask,
        DEFAULT_FOLDER_MENU_RESTRICTIONS *pdfmrValues);

    HRESULT (STDMETHODCALLTYPE *SetHandlerClsid)(
        IDefaultFolderMenuInitialize *This,
        REFCLSID rclsid);

    END_INTERFACE
} IDefaultFolderMenuInitializeVtbl;

interface IDefaultFolderMenuInitialize {
    CONST_VTBL IDefaultFolderMenuInitializeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDefaultFolderMenuInitialize_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDefaultFolderMenuInitialize_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDefaultFolderMenuInitialize_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDefaultFolderMenuInitialize methods ***/
#define IDefaultFolderMenuInitialize_Initialize(This,hwnd,pcmcb,pidlFolder,psf,cidl,apidl,punkAssociation,cKeys,aKeys) \
    ((This)->lpVtbl->Initialize(This,hwnd,pcmcb,pidlFolder,psf,cidl,apidl,punkAssociation,cKeys,aKeys))
#define IDefaultFolderMenuInitialize_SetMenuRestrictions(This,dfmrValues) \
    ((This)->lpVtbl->SetMenuRestrictions(This,dfmrValues))
#define IDefaultFolderMenuInitialize_GetMenuRestrictions(This,dfmrMask,pdfmrValues) \
    ((This)->lpVtbl->GetMenuRestrictions(This,dfmrMask,pdfmrValues))
#define IDefaultFolderMenuInitialize_SetHandlerClsid(This,rclsid) \
    ((This)->lpVtbl->SetHandlerClsid(This,rclsid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDefaultFolderMenuInitialize_INTERFACE_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef enum ACTIVATEOPTIONS {
    AO_NONE = 0x0,
    AO_DESIGNMODE = 0x1,
    AO_NOERRORUI = 0x2,
    AO_NOSPLASHSCREEN = 0x4,
    AO_PRELAUNCH = 0x2000000
} ACTIVATEOPTIONS;


/*****************************************************************************
 * IApplicationActivationManager interface
 */
#ifndef __IApplicationActivationManager_INTERFACE_DEFINED__
#define __IApplicationActivationManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApplicationActivationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationActivationManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationActivationManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationActivationManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationActivationManager *This);

    /*** IApplicationActivationManager methods ***/
    HRESULT (STDMETHODCALLTYPE *ActivateApplication)(
        IApplicationActivationManager *This,
        LPCWSTR appUserModelId,
        LPCWSTR arguments,
        ACTIVATEOPTIONS options,
        DWORD *processId);

    HRESULT (STDMETHODCALLTYPE *ActivateForFile)(
        IApplicationActivationManager *This,
        LPCWSTR appUserModelId,
        IShellItemArray *itemArray,
        LPCWSTR verb,
        DWORD *processId);

    HRESULT (STDMETHODCALLTYPE *ActivateForProtocol)(
        IApplicationActivationManager *This,
        LPCWSTR appUserModelId,
        IShellItemArray *itemArray,
        DWORD *processId);

    END_INTERFACE
} IApplicationActivationManagerVtbl;

interface IApplicationActivationManager {
    CONST_VTBL IApplicationActivationManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationActivationManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationActivationManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationActivationManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationActivationManager methods ***/
#define IApplicationActivationManager_ActivateApplication(This,appUserModelId,arguments,options,processId) \
    ((This)->lpVtbl->ActivateApplication(This,appUserModelId,arguments,options,processId))
#define IApplicationActivationManager_ActivateForFile(This,appUserModelId,itemArray,verb,processId) \
    ((This)->lpVtbl->ActivateForFile(This,appUserModelId,itemArray,verb,processId))
#define IApplicationActivationManager_ActivateForProtocol(This,appUserModelId,itemArray,processId) \
    ((This)->lpVtbl->ActivateForProtocol(This,appUserModelId,itemArray,processId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationActivationManager_INTERFACE_DEFINED__ */

#endif // NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

/*****************************************************************************
 * IVirtualDesktopManager interface
 */
#ifndef __IVirtualDesktopManager_INTERFACE_DEFINED__
#define __IVirtualDesktopManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IVirtualDesktopManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IVirtualDesktopManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVirtualDesktopManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVirtualDesktopManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVirtualDesktopManager *This);

    /*** IVirtualDesktopManager methods ***/
    HRESULT (STDMETHODCALLTYPE *IsWindowOnCurrentVirtualDesktop)(
        IVirtualDesktopManager *This,
        HWND topLevelWindow,
        BOOL *onCurrentDesktop);

    HRESULT (STDMETHODCALLTYPE *GetWindowDesktopId)(
        IVirtualDesktopManager *This,
        HWND topLevelWindow,
        GUID *desktopId);

    HRESULT (STDMETHODCALLTYPE *MoveWindowToDesktop)(
        IVirtualDesktopManager *This,
        HWND topLevelWindow,
        REFGUID desktopId);

    END_INTERFACE
} IVirtualDesktopManagerVtbl;

interface IVirtualDesktopManager {
    CONST_VTBL IVirtualDesktopManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IVirtualDesktopManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IVirtualDesktopManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IVirtualDesktopManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IVirtualDesktopManager methods ***/
#define IVirtualDesktopManager_IsWindowOnCurrentVirtualDesktop(This,topLevelWindow,onCurrentDesktop) \
    ((This)->lpVtbl->IsWindowOnCurrentVirtualDesktop(This,topLevelWindow,onCurrentDesktop))
#define IVirtualDesktopManager_GetWindowDesktopId(This,topLevelWindow,desktopId) \
    ((This)->lpVtbl->GetWindowDesktopId(This,topLevelWindow,desktopId))
#define IVirtualDesktopManager_MoveWindowToDesktop(This,topLevelWindow,desktopId) \
    ((This)->lpVtbl->MoveWindowToDesktop(This,topLevelWindow,desktopId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IVirtualDesktopManager_INTERFACE_DEFINED__ */

#endif // NTDDI_WINTHRESHOLD

#ifndef __ShellCoreObjects_LIBRARY_DEFINED__
#define __ShellCoreObjects_LIBRARY_DEFINED__


/*****************************************************************************
 * DesktopWallpaper coclass
 */

EXTERN_C const CLSID CLSID_DesktopWallpaper;

/*****************************************************************************
 * ShellDesktop coclass
 */

EXTERN_C const CLSID CLSID_ShellDesktop;

/*****************************************************************************
 * ShellFSFolder coclass
 */

EXTERN_C const CLSID CLSID_ShellFSFolder;

/*****************************************************************************
 * NetworkPlaces coclass
 */

EXTERN_C const CLSID CLSID_NetworkPlaces;

/*****************************************************************************
 * ShellLink coclass
 */

EXTERN_C const CLSID CLSID_ShellLink;

/*****************************************************************************
 * DriveSizeCategorizer coclass
 */

EXTERN_C const CLSID CLSID_DriveSizeCategorizer;

/*****************************************************************************
 * DriveTypeCategorizer coclass
 */

EXTERN_C const CLSID CLSID_DriveTypeCategorizer;

/*****************************************************************************
 * FreeSpaceCategorizer coclass
 */

EXTERN_C const CLSID CLSID_FreeSpaceCategorizer;

/*****************************************************************************
 * SizeCategorizer coclass
 */

EXTERN_C const CLSID CLSID_SizeCategorizer;

/*****************************************************************************
 * PropertiesUI coclass
 */

EXTERN_C const CLSID CLSID_PropertiesUI;

/*****************************************************************************
 * UserNotification coclass
 */

EXTERN_C const CLSID CLSID_UserNotification;

/*****************************************************************************
 * TaskbarList coclass
 */

EXTERN_C const CLSID CLSID_TaskbarList;

/*****************************************************************************
 * ShellItem coclass
 */

EXTERN_C const CLSID CLSID_ShellItem;

/*****************************************************************************
 * NamespaceWalker coclass
 */

EXTERN_C const CLSID CLSID_NamespaceWalker;

/*****************************************************************************
 * FileOperation coclass
 */

EXTERN_C const CLSID CLSID_FileOperation;

/*****************************************************************************
 * FileOpenDialog coclass
 */

EXTERN_C const CLSID CLSID_FileOpenDialog;

/*****************************************************************************
 * FileSaveDialog coclass
 */

EXTERN_C const CLSID CLSID_FileSaveDialog;

/*****************************************************************************
 * KnownFolderManager coclass
 */

EXTERN_C const CLSID CLSID_KnownFolderManager;

/*****************************************************************************
 * SharingConfigurationManager coclass
 */

EXTERN_C const CLSID CLSID_SharingConfigurationManager;

/*****************************************************************************
 * NetworkConnections coclass
 */

EXTERN_C const CLSID CLSID_NetworkConnections;

/*****************************************************************************
 * ScheduledTasks coclass
 */

EXTERN_C const CLSID CLSID_ScheduledTasks;

/*****************************************************************************
 * ApplicationAssociationRegistration coclass
 */

EXTERN_C const CLSID CLSID_ApplicationAssociationRegistration;

/*****************************************************************************
 * SearchFolderItemFactory coclass
 */

EXTERN_C const CLSID CLSID_SearchFolderItemFactory;

/*****************************************************************************
 * OpenControlPanel coclass
 */

EXTERN_C const CLSID CLSID_OpenControlPanel;

/*****************************************************************************
 * MailRecipient coclass
 */

EXTERN_C const CLSID CLSID_MailRecipient;

/*****************************************************************************
 * NetworkExplorerFolder coclass
 */

EXTERN_C const CLSID CLSID_NetworkExplorerFolder;

/*****************************************************************************
 * DestinationList coclass
 */

EXTERN_C const CLSID CLSID_DestinationList;

/*****************************************************************************
 * ApplicationDestinations coclass
 */

EXTERN_C const CLSID CLSID_ApplicationDestinations;

/*****************************************************************************
 * ApplicationDocumentLists coclass
 */

EXTERN_C const CLSID CLSID_ApplicationDocumentLists;

/*****************************************************************************
 * HomeGroup coclass
 */

EXTERN_C const CLSID CLSID_HomeGroup;

/*****************************************************************************
 * ShellLibrary coclass
 */

EXTERN_C const CLSID CLSID_ShellLibrary;

/*****************************************************************************
 * AppStartupLink coclass
 */

EXTERN_C const CLSID CLSID_AppStartupLink;

/*****************************************************************************
 * EnumerableObjectCollection coclass
 */

EXTERN_C const CLSID CLSID_EnumerableObjectCollection;

/*****************************************************************************
 * FrameworkInputPane coclass
 */

EXTERN_C const CLSID CLSID_FrameworkInputPane;

/*****************************************************************************
 * DefFolderMenu coclass
 */

EXTERN_C const CLSID CLSID_DefFolderMenu;

/*****************************************************************************
 * AppVisibility coclass
 */

EXTERN_C const CLSID CLSID_AppVisibility;

/*****************************************************************************
 * AppShellVerbHandler coclass
 */

EXTERN_C const CLSID CLSID_AppShellVerbHandler;

/*****************************************************************************
 * ExecuteUnknown coclass
 */

EXTERN_C const CLSID CLSID_ExecuteUnknown;

/*****************************************************************************
 * PackageDebugSettings coclass
 */

EXTERN_C const CLSID CLSID_PackageDebugSettings;

/*****************************************************************************
 * SuspensionDependencyManager coclass
 */

EXTERN_C const CLSID CLSID_SuspensionDependencyManager;

/*****************************************************************************
 * ApplicationActivationManager coclass
 */

EXTERN_C const CLSID CLSID_ApplicationActivationManager;

/*****************************************************************************
 * ApplicationDesignModeSettings coclass
 */

EXTERN_C const CLSID CLSID_ApplicationDesignModeSettings;
#endif /* __ShellCoreObjects_LIBRARY_DEFINED__ */

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHGetTemporaryPropertyForItem( IShellItem *psi,  REFPROPERTYKEY propkey,  PROPVARIANT *ppropvar);
SHSTDAPI SHSetTemporaryPropertyForItem( IShellItem *psi,  REFPROPERTYKEY propkey,  REFPROPVARIANT propvar);
#endif  // NTDDI_VISTA

#if (NTDDI_VERSION >= NTDDI_WIN7)
#if (_WIN32_IE >= _WIN32_IE_IE70)

typedef enum LIBRARYMANAGEDIALOGOPTIONS {
    LMD_DEFAULT = 0x0,
    LMD_ALLOWUNINDEXABLENETWORKLOCATIONS = 0x1
} LIBRARYMANAGEDIALOGOPTIONS;


STDAPI SHShowManageLibraryUI( IShellItem *psiLibrary,  HWND hwndOwner,  LPCWSTR pszTitle,  LPCWSTR pszInstruction,  LIBRARYMANAGEDIALOGOPTIONS lmdOptions);
STDAPI SHResolveLibrary( IShellItem *psiLibrary);

#endif  // _WIN32_IE >= _WIN32_IE_IE70
#endif  // NTDDI_WIN7

#if (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IAssocHandlerInvoker interface
 */
#ifndef __IAssocHandlerInvoker_INTERFACE_DEFINED__
#define __IAssocHandlerInvoker_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAssocHandlerInvoker;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAssocHandlerInvokerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssocHandlerInvoker *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssocHandlerInvoker *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssocHandlerInvoker *This);

    /*** IAssocHandlerInvoker methods ***/
    HRESULT (STDMETHODCALLTYPE *SupportsSelection)(
        IAssocHandlerInvoker *This);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IAssocHandlerInvoker *This);

    END_INTERFACE
} IAssocHandlerInvokerVtbl;

interface IAssocHandlerInvoker {
    CONST_VTBL IAssocHandlerInvokerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAssocHandlerInvoker_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAssocHandlerInvoker_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAssocHandlerInvoker_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAssocHandlerInvoker methods ***/
#define IAssocHandlerInvoker_SupportsSelection(This) \
    ((This)->lpVtbl->SupportsSelection(This))
#define IAssocHandlerInvoker_Invoke(This) \
    ((This)->lpVtbl->Invoke(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAssocHandlerInvoker_INTERFACE_DEFINED__ */

typedef enum AHTYPE {
    AHTYPE_UNDEFINED = 0x0,
    AHTYPE_USER_APPLICATION = 0x8,
    AHTYPE_ANY_APPLICATION = 0x10,
    AHTYPE_MACHINEDEFAULT = 0x20,
    AHTYPE_PROGID = 0x40,
    AHTYPE_APPLICATION = 0x80,
    AHTYPE_CLASS_APPLICATION = 0x100,
    AHTYPE_ANY_PROGID = 0x200
} AHTYPE;


/*****************************************************************************
 * IAssocHandler interface
 */
#ifndef __IAssocHandler_INTERFACE_DEFINED__
#define __IAssocHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAssocHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAssocHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssocHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssocHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssocHandler *This);

    /*** IAssocHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *GetName)(
        IAssocHandler *This,
        LPWSTR *ppsz);

    HRESULT (STDMETHODCALLTYPE *GetUIName)(
        IAssocHandler *This,
        LPWSTR *ppsz);

    HRESULT (STDMETHODCALLTYPE *GetIconLocation)(
        IAssocHandler *This,
        LPWSTR *ppszPath,
        int *pIndex);

    HRESULT (STDMETHODCALLTYPE *IsRecommended)(
        IAssocHandler *This);

    HRESULT (STDMETHODCALLTYPE *MakeDefault)(
        IAssocHandler *This,
        LPCWSTR pszDescription);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IAssocHandler *This,
        IDataObject *pdo);

    HRESULT (STDMETHODCALLTYPE *CreateInvoker)(
        IAssocHandler *This,
        IDataObject *pdo,
        IAssocHandlerInvoker **ppInvoker);

    END_INTERFACE
} IAssocHandlerVtbl;

interface IAssocHandler {
    CONST_VTBL IAssocHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAssocHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAssocHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAssocHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAssocHandler methods ***/
#define IAssocHandler_GetName(This,ppsz) \
    ((This)->lpVtbl->GetName(This,ppsz))
#define IAssocHandler_GetUIName(This,ppsz) \
    ((This)->lpVtbl->GetUIName(This,ppsz))
#define IAssocHandler_GetIconLocation(This,ppszPath,pIndex) \
    ((This)->lpVtbl->GetIconLocation(This,ppszPath,pIndex))
#define IAssocHandler_IsRecommended(This) \
    ((This)->lpVtbl->IsRecommended(This))
#define IAssocHandler_MakeDefault(This,pszDescription) \
    ((This)->lpVtbl->MakeDefault(This,pszDescription))
#define IAssocHandler_Invoke(This,pdo) \
    ((This)->lpVtbl->Invoke(This,pdo))
#define IAssocHandler_CreateInvoker(This,pdo,ppInvoker) \
    ((This)->lpVtbl->CreateInvoker(This,pdo,ppInvoker))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAssocHandler_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumAssocHandlers interface
 */
#ifndef __IEnumAssocHandlers_INTERFACE_DEFINED__
#define __IEnumAssocHandlers_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumAssocHandlers;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumAssocHandlersVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumAssocHandlers *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumAssocHandlers *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumAssocHandlers *This);

    /*** IEnumAssocHandlers methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumAssocHandlers *This,
        ULONG celt,
        IAssocHandler **rgelt,
        ULONG *pceltFetched);

    END_INTERFACE
} IEnumAssocHandlersVtbl;

interface IEnumAssocHandlers {
    CONST_VTBL IEnumAssocHandlersVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumAssocHandlers_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumAssocHandlers_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumAssocHandlers_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumAssocHandlers methods ***/
#define IEnumAssocHandlers_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumAssocHandlers_INTERFACE_DEFINED__ */

typedef enum ASSOC_FILTER {
    ASSOC_FILTER_NONE = 0x0,
    ASSOC_FILTER_RECOMMENDED = 0x1
} ASSOC_FILTER;

SHSTDAPI SHAssocEnumHandlers( PCWSTR pszExtra,  ASSOC_FILTER afFilter,  IEnumAssocHandlers **ppEnumHandler);
#endif  // NTDDI_VISTA

#if (NTDDI_VERSION >= NTDDI_WIN7)
SHSTDAPI SHAssocEnumHandlersForProtocolByApplication( PCWSTR protocol,  REFIID riid,  void **enumHandlers);
#endif  // NTDDI_WIN7

#if (NTDDI_VERSION >= NTDDI_WIN8)

/*****************************************************************************
 * IDataObjectProvider interface
 */
#ifndef __IDataObjectProvider_INTERFACE_DEFINED__
#define __IDataObjectProvider_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDataObjectProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDataObjectProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDataObjectProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDataObjectProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDataObjectProvider *This);

    /*** IDataObjectProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDataObject)(
        IDataObjectProvider *This,
        IDataObject **dataObject);

    HRESULT (STDMETHODCALLTYPE *SetDataObject)(
        IDataObjectProvider *This,
        IDataObject *dataObject);

    END_INTERFACE
} IDataObjectProviderVtbl;

interface IDataObjectProvider {
    CONST_VTBL IDataObjectProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDataObjectProvider_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDataObjectProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDataObjectProvider_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDataObjectProvider methods ***/
#define IDataObjectProvider_GetDataObject(This,dataObject) \
    ((This)->lpVtbl->GetDataObject(This,dataObject))
#define IDataObjectProvider_SetDataObject(This,dataObject) \
    ((This)->lpVtbl->SetDataObject(This,dataObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDataObjectProvider_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDataTransferManagerInterop interface
 */
#ifndef __IDataTransferManagerInterop_INTERFACE_DEFINED__
#define __IDataTransferManagerInterop_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDataTransferManagerInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDataTransferManagerInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDataTransferManagerInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDataTransferManagerInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDataTransferManagerInterop *This);

    /*** IDataTransferManagerInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *GetForWindow)(
        IDataTransferManagerInterop *This,
        HWND appWindow,
        REFIID riid,
        void **dataTransferManager);

    HRESULT (STDMETHODCALLTYPE *ShowShareUIForWindow)(
        IDataTransferManagerInterop *This,
        HWND appWindow);

    END_INTERFACE
} IDataTransferManagerInteropVtbl;

interface IDataTransferManagerInterop {
    CONST_VTBL IDataTransferManagerInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDataTransferManagerInterop_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDataTransferManagerInterop_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDataTransferManagerInterop_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDataTransferManagerInterop methods ***/
#define IDataTransferManagerInterop_GetForWindow(This,appWindow,riid,dataTransferManager) \
    ((This)->lpVtbl->GetForWindow(This,appWindow,riid,dataTransferManager))
#define IDataTransferManagerInterop_ShowShareUIForWindow(This,appWindow) \
    ((This)->lpVtbl->ShowShareUIForWindow(This,appWindow))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDataTransferManagerInterop_INTERFACE_DEFINED__ */

#endif // NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WIN8)

/*****************************************************************************
 * IFrameworkInputPaneHandler interface
 */
#ifndef __IFrameworkInputPaneHandler_INTERFACE_DEFINED__
#define __IFrameworkInputPaneHandler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFrameworkInputPaneHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFrameworkInputPaneHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFrameworkInputPaneHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFrameworkInputPaneHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFrameworkInputPaneHandler *This);

    /*** IFrameworkInputPaneHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *Showing)(
        IFrameworkInputPaneHandler *This,
        RECT *prcInputPaneScreenLocation,
        BOOL fEnsureFocusedElementInView);

    HRESULT (STDMETHODCALLTYPE *Hiding)(
        IFrameworkInputPaneHandler *This,
        BOOL fEnsureFocusedElementInView);

    END_INTERFACE
} IFrameworkInputPaneHandlerVtbl;

interface IFrameworkInputPaneHandler {
    CONST_VTBL IFrameworkInputPaneHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFrameworkInputPaneHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFrameworkInputPaneHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFrameworkInputPaneHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFrameworkInputPaneHandler methods ***/
#define IFrameworkInputPaneHandler_Showing(This,prcInputPaneScreenLocation,fEnsureFocusedElementInView) \
    ((This)->lpVtbl->Showing(This,prcInputPaneScreenLocation,fEnsureFocusedElementInView))
#define IFrameworkInputPaneHandler_Hiding(This,fEnsureFocusedElementInView) \
    ((This)->lpVtbl->Hiding(This,fEnsureFocusedElementInView))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFrameworkInputPaneHandler_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFrameworkInputPane interface
 */
#ifndef __IFrameworkInputPane_INTERFACE_DEFINED__
#define __IFrameworkInputPane_INTERFACE_DEFINED__

EXTERN_C const IID IID_IFrameworkInputPane;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IFrameworkInputPaneVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFrameworkInputPane *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFrameworkInputPane *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFrameworkInputPane *This);

    /*** IFrameworkInputPane methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        IFrameworkInputPane *This,
        IUnknown *pWindow,
        IFrameworkInputPaneHandler *pHandler,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *AdviseWithHWND)(
        IFrameworkInputPane *This,
        HWND hwnd,
        IFrameworkInputPaneHandler *pHandler,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IFrameworkInputPane *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *Location)(
        IFrameworkInputPane *This,
        RECT *prcInputPaneScreenLocation);

    END_INTERFACE
} IFrameworkInputPaneVtbl;

interface IFrameworkInputPane {
    CONST_VTBL IFrameworkInputPaneVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFrameworkInputPane_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IFrameworkInputPane_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IFrameworkInputPane_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IFrameworkInputPane methods ***/
#define IFrameworkInputPane_Advise(This,pWindow,pHandler,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pWindow,pHandler,pdwCookie))
#define IFrameworkInputPane_AdviseWithHWND(This,hwnd,pHandler,pdwCookie) \
    ((This)->lpVtbl->AdviseWithHWND(This,hwnd,pHandler,pdwCookie))
#define IFrameworkInputPane_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#define IFrameworkInputPane_Location(This,prcInputPaneScreenLocation) \
    ((This)->lpVtbl->Location(This,prcInputPaneScreenLocation))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IFrameworkInputPane_INTERFACE_DEFINED__ */

#ifndef PROP_CONTRACT_DELEGATE
#define PROP_CONTRACT_DELEGATE     L"ContractDelegate"
#endif // PROP_CONTRACT_DELEGATE
// For applications that use modern APIs and use a child or owned window
// that run on different threads this API must be used to indicate which
// window is the current main window. Call this API when those windows change their state.
__inline void SetContractDelegateWindow( HWND hwndSource,  HWND hwndDelegate)
{
    if (hwndDelegate != NULL)
    {
        SetPropW(hwndSource, PROP_CONTRACT_DELEGATE, (HANDLE)hwndDelegate);
    }
    else
    {
        RemovePropW(hwndSource, PROP_CONTRACT_DELEGATE);
    }
}

#endif // NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef enum MONITOR_APP_VISIBILITY {
    MAV_UNKNOWN = 0,
    MAV_NO_APP_VISIBLE = 1,
    MAV_APP_VISIBLE = 2
} MONITOR_APP_VISIBILITY;

/*****************************************************************************
 * IAppVisibilityEvents interface
 */
#ifndef __IAppVisibilityEvents_INTERFACE_DEFINED__
#define __IAppVisibilityEvents_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAppVisibilityEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAppVisibilityEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAppVisibilityEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAppVisibilityEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAppVisibilityEvents *This);

    /*** IAppVisibilityEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *AppVisibilityOnMonitorChanged)(
        IAppVisibilityEvents *This,
        HMONITOR hMonitor,
        MONITOR_APP_VISIBILITY previousMode,
        MONITOR_APP_VISIBILITY currentMode);

    HRESULT (STDMETHODCALLTYPE *LauncherVisibilityChange)(
        IAppVisibilityEvents *This,
        BOOL currentVisibleState);

    END_INTERFACE
} IAppVisibilityEventsVtbl;

interface IAppVisibilityEvents {
    CONST_VTBL IAppVisibilityEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAppVisibilityEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAppVisibilityEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAppVisibilityEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAppVisibilityEvents methods ***/
#define IAppVisibilityEvents_AppVisibilityOnMonitorChanged(This,hMonitor,previousMode,currentMode) \
    ((This)->lpVtbl->AppVisibilityOnMonitorChanged(This,hMonitor,previousMode,currentMode))
#define IAppVisibilityEvents_LauncherVisibilityChange(This,currentVisibleState) \
    ((This)->lpVtbl->LauncherVisibilityChange(This,currentVisibleState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAppVisibilityEvents_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAppVisibility interface
 */
#ifndef __IAppVisibility_INTERFACE_DEFINED__
#define __IAppVisibility_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAppVisibility;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAppVisibilityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAppVisibility *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAppVisibility *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAppVisibility *This);

    /*** IAppVisibility methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAppVisibilityOnMonitor)(
        IAppVisibility *This,
        HMONITOR hMonitor,
        MONITOR_APP_VISIBILITY *pMode);

    HRESULT (STDMETHODCALLTYPE *IsLauncherVisible)(
        IAppVisibility *This,
        BOOL *pfVisible);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IAppVisibility *This,
        IAppVisibilityEvents *pCallback,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IAppVisibility *This,
        DWORD dwCookie);

    END_INTERFACE
} IAppVisibilityVtbl;

interface IAppVisibility {
    CONST_VTBL IAppVisibilityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAppVisibility_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAppVisibility_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAppVisibility_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAppVisibility methods ***/
#define IAppVisibility_GetAppVisibilityOnMonitor(This,hMonitor,pMode) \
    ((This)->lpVtbl->GetAppVisibilityOnMonitor(This,hMonitor,pMode))
#define IAppVisibility_IsLauncherVisible(This,pfVisible) \
    ((This)->lpVtbl->IsLauncherVisible(This,pfVisible))
#define IAppVisibility_Advise(This,pCallback,pdwCookie) \
    ((This)->lpVtbl->Advise(This,pCallback,pdwCookie))
#define IAppVisibility_Unadvise(This,dwCookie) \
    ((This)->lpVtbl->Unadvise(This,dwCookie))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAppVisibility_INTERFACE_DEFINED__ */

#ifdef MIDL_PASS
typedef WCHAR *PZZWSTR;
#endif

typedef enum PACKAGE_EXECUTION_STATE {
    PES_UNKNOWN = 0,
    PES_RUNNING = 1,
    PES_SUSPENDING = 2,
    PES_SUSPENDED = 3,
    PES_TERMINATED = 4
} PACKAGE_EXECUTION_STATE;

/*****************************************************************************
 * IPackageExecutionStateChangeNotification interface
 */
#ifndef __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__
#define __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPackageExecutionStateChangeNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPackageExecutionStateChangeNotificationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPackageExecutionStateChangeNotification *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPackageExecutionStateChangeNotification *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPackageExecutionStateChangeNotification *This);

    /*** IPackageExecutionStateChangeNotification methods ***/
    HRESULT (STDMETHODCALLTYPE *OnStateChanged)(
        IPackageExecutionStateChangeNotification *This,
        LPCWSTR pszPackageFullName,
        PACKAGE_EXECUTION_STATE pesNewState);

    END_INTERFACE
} IPackageExecutionStateChangeNotificationVtbl;

interface IPackageExecutionStateChangeNotification {
    CONST_VTBL IPackageExecutionStateChangeNotificationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPackageExecutionStateChangeNotification_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPackageExecutionStateChangeNotification_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPackageExecutionStateChangeNotification_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPackageExecutionStateChangeNotification methods ***/
#define IPackageExecutionStateChangeNotification_OnStateChanged(This,pszPackageFullName,pesNewState) \
    ((This)->lpVtbl->OnStateChanged(This,pszPackageFullName,pesNewState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPackageDebugSettings interface
 */
#ifndef __IPackageDebugSettings_INTERFACE_DEFINED__
#define __IPackageDebugSettings_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPackageDebugSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPackageDebugSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPackageDebugSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPackageDebugSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPackageDebugSettings *This);

    /*** IPackageDebugSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *EnableDebugging)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName,
        LPCWSTR debuggerCommandLine,
        PZZWSTR environment);

    HRESULT (STDMETHODCALLTYPE *DisableDebugging)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *TerminateAllProcesses)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *SetTargetSessionId)(
        IPackageDebugSettings *This,
        ULONG sessionId);

    HRESULT (STDMETHODCALLTYPE *EnumerateBackgroundTasks)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName,
        ULONG *taskCount,
        LPCGUID *taskIds,
        LPCWSTR **taskNames);

    HRESULT (STDMETHODCALLTYPE *ActivateBackgroundTask)(
        IPackageDebugSettings *This,
        LPCGUID taskId);

    HRESULT (STDMETHODCALLTYPE *StartServicing)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *StopServicing)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *StartSessionRedirection)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName,
        ULONG sessionId);

    HRESULT (STDMETHODCALLTYPE *StopSessionRedirection)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *GetPackageExecutionState)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName,
        PACKAGE_EXECUTION_STATE *packageExecutionState);

    HRESULT (STDMETHODCALLTYPE *RegisterForPackageStateChanges)(
        IPackageDebugSettings *This,
        LPCWSTR packageFullName,
        IPackageExecutionStateChangeNotification *pPackageExecutionStateChangeNotification,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *UnregisterForPackageStateChanges)(
        IPackageDebugSettings *This,
        DWORD dwCookie);

    END_INTERFACE
} IPackageDebugSettingsVtbl;

interface IPackageDebugSettings {
    CONST_VTBL IPackageDebugSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPackageDebugSettings_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPackageDebugSettings_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPackageDebugSettings_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPackageDebugSettings methods ***/
#define IPackageDebugSettings_EnableDebugging(This,packageFullName,debuggerCommandLine,environment) \
    ((This)->lpVtbl->EnableDebugging(This,packageFullName,debuggerCommandLine,environment))
#define IPackageDebugSettings_DisableDebugging(This,packageFullName) \
    ((This)->lpVtbl->DisableDebugging(This,packageFullName))
#define IPackageDebugSettings_Suspend(This,packageFullName) \
    ((This)->lpVtbl->Suspend(This,packageFullName))
#define IPackageDebugSettings_Resume(This,packageFullName) \
    ((This)->lpVtbl->Resume(This,packageFullName))
#define IPackageDebugSettings_TerminateAllProcesses(This,packageFullName) \
    ((This)->lpVtbl->TerminateAllProcesses(This,packageFullName))
#define IPackageDebugSettings_SetTargetSessionId(This,sessionId) \
    ((This)->lpVtbl->SetTargetSessionId(This,sessionId))
#define IPackageDebugSettings_EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames) \
    ((This)->lpVtbl->EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames))
#define IPackageDebugSettings_ActivateBackgroundTask(This,taskId) \
    ((This)->lpVtbl->ActivateBackgroundTask(This,taskId))
#define IPackageDebugSettings_StartServicing(This,packageFullName) \
    ((This)->lpVtbl->StartServicing(This,packageFullName))
#define IPackageDebugSettings_StopServicing(This,packageFullName) \
    ((This)->lpVtbl->StopServicing(This,packageFullName))
#define IPackageDebugSettings_StartSessionRedirection(This,packageFullName,sessionId) \
    ((This)->lpVtbl->StartSessionRedirection(This,packageFullName,sessionId))
#define IPackageDebugSettings_StopSessionRedirection(This,packageFullName) \
    ((This)->lpVtbl->StopSessionRedirection(This,packageFullName))
#define IPackageDebugSettings_GetPackageExecutionState(This,packageFullName,packageExecutionState) \
    ((This)->lpVtbl->GetPackageExecutionState(This,packageFullName,packageExecutionState))
#define IPackageDebugSettings_RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie) \
    ((This)->lpVtbl->RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie))
#define IPackageDebugSettings_UnregisterForPackageStateChanges(This,dwCookie) \
    ((This)->lpVtbl->UnregisterForPackageStateChanges(This,dwCookie))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPackageDebugSettings_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPackageDebugSettings2 interface
 */
#ifndef __IPackageDebugSettings2_INTERFACE_DEFINED__
#define __IPackageDebugSettings2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPackageDebugSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPackageDebugSettings2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPackageDebugSettings2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPackageDebugSettings2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPackageDebugSettings2 *This);

    /*** IPackageDebugSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *EnableDebugging)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName,
        LPCWSTR debuggerCommandLine,
        PZZWSTR environment);

    HRESULT (STDMETHODCALLTYPE *DisableDebugging)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *TerminateAllProcesses)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *SetTargetSessionId)(
        IPackageDebugSettings2 *This,
        ULONG sessionId);

    HRESULT (STDMETHODCALLTYPE *EnumerateBackgroundTasks)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName,
        ULONG *taskCount,
        LPCGUID *taskIds,
        LPCWSTR **taskNames);

    HRESULT (STDMETHODCALLTYPE *ActivateBackgroundTask)(
        IPackageDebugSettings2 *This,
        LPCGUID taskId);

    HRESULT (STDMETHODCALLTYPE *StartServicing)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *StopServicing)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *StartSessionRedirection)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName,
        ULONG sessionId);

    HRESULT (STDMETHODCALLTYPE *StopSessionRedirection)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName);

    HRESULT (STDMETHODCALLTYPE *GetPackageExecutionState)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName,
        PACKAGE_EXECUTION_STATE *packageExecutionState);

    HRESULT (STDMETHODCALLTYPE *RegisterForPackageStateChanges)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName,
        IPackageExecutionStateChangeNotification *pPackageExecutionStateChangeNotification,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *UnregisterForPackageStateChanges)(
        IPackageDebugSettings2 *This,
        DWORD dwCookie);

    /*** IPackageDebugSettings2 methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumerateApps)(
        IPackageDebugSettings2 *This,
        LPCWSTR packageFullName,
        ULONG *appCount,
        LPWSTR **appUserModelIds,
        LPWSTR **appDisplayNames);

    END_INTERFACE
} IPackageDebugSettings2Vtbl;

interface IPackageDebugSettings2 {
    CONST_VTBL IPackageDebugSettings2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPackageDebugSettings2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPackageDebugSettings2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPackageDebugSettings2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPackageDebugSettings methods ***/
#define IPackageDebugSettings2_EnableDebugging(This,packageFullName,debuggerCommandLine,environment) \
    ((This)->lpVtbl->EnableDebugging(This,packageFullName,debuggerCommandLine,environment))
#define IPackageDebugSettings2_DisableDebugging(This,packageFullName) \
    ((This)->lpVtbl->DisableDebugging(This,packageFullName))
#define IPackageDebugSettings2_Suspend(This,packageFullName) \
    ((This)->lpVtbl->Suspend(This,packageFullName))
#define IPackageDebugSettings2_Resume(This,packageFullName) \
    ((This)->lpVtbl->Resume(This,packageFullName))
#define IPackageDebugSettings2_TerminateAllProcesses(This,packageFullName) \
    ((This)->lpVtbl->TerminateAllProcesses(This,packageFullName))
#define IPackageDebugSettings2_SetTargetSessionId(This,sessionId) \
    ((This)->lpVtbl->SetTargetSessionId(This,sessionId))
#define IPackageDebugSettings2_EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames) \
    ((This)->lpVtbl->EnumerateBackgroundTasks(This,packageFullName,taskCount,taskIds,taskNames))
#define IPackageDebugSettings2_ActivateBackgroundTask(This,taskId) \
    ((This)->lpVtbl->ActivateBackgroundTask(This,taskId))
#define IPackageDebugSettings2_StartServicing(This,packageFullName) \
    ((This)->lpVtbl->StartServicing(This,packageFullName))
#define IPackageDebugSettings2_StopServicing(This,packageFullName) \
    ((This)->lpVtbl->StopServicing(This,packageFullName))
#define IPackageDebugSettings2_StartSessionRedirection(This,packageFullName,sessionId) \
    ((This)->lpVtbl->StartSessionRedirection(This,packageFullName,sessionId))
#define IPackageDebugSettings2_StopSessionRedirection(This,packageFullName) \
    ((This)->lpVtbl->StopSessionRedirection(This,packageFullName))
#define IPackageDebugSettings2_GetPackageExecutionState(This,packageFullName,packageExecutionState) \
    ((This)->lpVtbl->GetPackageExecutionState(This,packageFullName,packageExecutionState))
#define IPackageDebugSettings2_RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie) \
    ((This)->lpVtbl->RegisterForPackageStateChanges(This,packageFullName,pPackageExecutionStateChangeNotification,pdwCookie))
#define IPackageDebugSettings2_UnregisterForPackageStateChanges(This,dwCookie) \
    ((This)->lpVtbl->UnregisterForPackageStateChanges(This,dwCookie))
/*** IPackageDebugSettings2 methods ***/
#define IPackageDebugSettings2_EnumerateApps(This,packageFullName,appCount,appUserModelIds,appDisplayNames) \
    ((This)->lpVtbl->EnumerateApps(This,packageFullName,appCount,appUserModelIds,appDisplayNames))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPackageDebugSettings2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISuspensionDependencyManager interface
 */
#ifndef __ISuspensionDependencyManager_INTERFACE_DEFINED__
#define __ISuspensionDependencyManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISuspensionDependencyManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISuspensionDependencyManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISuspensionDependencyManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISuspensionDependencyManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISuspensionDependencyManager *This);

    /*** ISuspensionDependencyManager methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterAsChild)(
        ISuspensionDependencyManager *This,
        HANDLE processHandle);

    HRESULT (STDMETHODCALLTYPE *GroupChildWithParent)(
        ISuspensionDependencyManager *This,
        HANDLE childProcessHandle);

    HRESULT (STDMETHODCALLTYPE *UngroupChildFromParent)(
        ISuspensionDependencyManager *This,
        HANDLE childProcessHandle);

    END_INTERFACE
} ISuspensionDependencyManagerVtbl;

interface ISuspensionDependencyManager {
    CONST_VTBL ISuspensionDependencyManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISuspensionDependencyManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISuspensionDependencyManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISuspensionDependencyManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISuspensionDependencyManager methods ***/
#define ISuspensionDependencyManager_RegisterAsChild(This,processHandle) \
    ((This)->lpVtbl->RegisterAsChild(This,processHandle))
#define ISuspensionDependencyManager_GroupChildWithParent(This,childProcessHandle) \
    ((This)->lpVtbl->GroupChildWithParent(This,childProcessHandle))
#define ISuspensionDependencyManager_UngroupChildFromParent(This,childProcessHandle) \
    ((This)->lpVtbl->UngroupChildFromParent(This,childProcessHandle))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISuspensionDependencyManager_INTERFACE_DEFINED__ */

typedef enum AHE_TYPE {
    AHE_DESKTOP = 0,
    AHE_IMMERSIVE = 1
} AHE_TYPE;

/*****************************************************************************
 * IExecuteCommandApplicationHostEnvironment interface
 */
#ifndef __IExecuteCommandApplicationHostEnvironment_INTERFACE_DEFINED__
#define __IExecuteCommandApplicationHostEnvironment_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExecuteCommandApplicationHostEnvironment;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExecuteCommandApplicationHostEnvironmentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExecuteCommandApplicationHostEnvironment *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExecuteCommandApplicationHostEnvironment *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExecuteCommandApplicationHostEnvironment *This);

    /*** IExecuteCommandApplicationHostEnvironment methods ***/
    HRESULT (STDMETHODCALLTYPE *GetValue)(
        IExecuteCommandApplicationHostEnvironment *This,
        AHE_TYPE *pahe);

    END_INTERFACE
} IExecuteCommandApplicationHostEnvironmentVtbl;

interface IExecuteCommandApplicationHostEnvironment {
    CONST_VTBL IExecuteCommandApplicationHostEnvironmentVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExecuteCommandApplicationHostEnvironment_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExecuteCommandApplicationHostEnvironment_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExecuteCommandApplicationHostEnvironment_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExecuteCommandApplicationHostEnvironment methods ***/
#define IExecuteCommandApplicationHostEnvironment_GetValue(This,pahe) \
    ((This)->lpVtbl->GetValue(This,pahe))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExecuteCommandApplicationHostEnvironment_INTERFACE_DEFINED__ */

typedef enum EC_HOST_UI_MODE {
    ECHUIM_DESKTOP = 0,
    ECHUIM_IMMERSIVE = 1,
    ECHUIM_SYSTEM_LAUNCHER = 2
} EC_HOST_UI_MODE;

/*****************************************************************************
 * IExecuteCommandHost interface
 */
#ifndef __IExecuteCommandHost_INTERFACE_DEFINED__
#define __IExecuteCommandHost_INTERFACE_DEFINED__

EXTERN_C const IID IID_IExecuteCommandHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IExecuteCommandHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IExecuteCommandHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IExecuteCommandHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IExecuteCommandHost *This);

    /*** IExecuteCommandHost methods ***/
    HRESULT (STDMETHODCALLTYPE *GetUIMode)(
        IExecuteCommandHost *This,
        EC_HOST_UI_MODE *pUIMode);

    END_INTERFACE
} IExecuteCommandHostVtbl;

interface IExecuteCommandHost {
    CONST_VTBL IExecuteCommandHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IExecuteCommandHost_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IExecuteCommandHost_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IExecuteCommandHost_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IExecuteCommandHost methods ***/
#define IExecuteCommandHost_GetUIMode(This,pUIMode) \
    ((This)->lpVtbl->GetUIMode(This,pUIMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IExecuteCommandHost_INTERFACE_DEFINED__ */

#define SID_ExecuteCommandHost IID_IExecuteCommandHost

typedef enum APPLICATION_VIEW_STATE {
    AVS_FULLSCREEN_LANDSCAPE = 0,
    AVS_FILLED = 1,
    AVS_SNAPPED = 2,
    AVS_FULLSCREEN_PORTRAIT = 3
} APPLICATION_VIEW_STATE;

typedef enum EDGE_GESTURE_KIND {
    EGK_TOUCH = 0,
    EGK_KEYBOARD = 1,
    EGK_MOUSE = 2
} EDGE_GESTURE_KIND;

/*****************************************************************************
 * IApplicationDesignModeSettings interface
 */
#ifndef __IApplicationDesignModeSettings_INTERFACE_DEFINED__
#define __IApplicationDesignModeSettings_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApplicationDesignModeSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationDesignModeSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationDesignModeSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationDesignModeSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationDesignModeSettings *This);

    /*** IApplicationDesignModeSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNativeDisplaySize)(
        IApplicationDesignModeSettings *This,
        SIZE nativeDisplaySizePixels);

    HRESULT (STDMETHODCALLTYPE *SetScaleFactor)(
        IApplicationDesignModeSettings *This,
        DEVICE_SCALE_FACTOR scaleFactor);

    HRESULT (STDMETHODCALLTYPE *SetApplicationViewState)(
        IApplicationDesignModeSettings *This,
        APPLICATION_VIEW_STATE viewState);

    HRESULT (STDMETHODCALLTYPE *ComputeApplicationSize)(
        IApplicationDesignModeSettings *This,
        SIZE *applicationSizePixels);

    HRESULT (STDMETHODCALLTYPE *IsApplicationViewStateSupported)(
        IApplicationDesignModeSettings *This,
        APPLICATION_VIEW_STATE viewState,
        SIZE nativeDisplaySizePixels,
        DEVICE_SCALE_FACTOR scaleFactor,
        BOOL *supported);

    HRESULT (STDMETHODCALLTYPE *TriggerEdgeGesture)(
        IApplicationDesignModeSettings *This,
        EDGE_GESTURE_KIND edgeGestureKind);

    END_INTERFACE
} IApplicationDesignModeSettingsVtbl;

interface IApplicationDesignModeSettings {
    CONST_VTBL IApplicationDesignModeSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationDesignModeSettings_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationDesignModeSettings_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationDesignModeSettings_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationDesignModeSettings methods ***/
#define IApplicationDesignModeSettings_SetNativeDisplaySize(This,nativeDisplaySizePixels) \
    ((This)->lpVtbl->SetNativeDisplaySize(This,nativeDisplaySizePixels))
#define IApplicationDesignModeSettings_SetScaleFactor(This,scaleFactor) \
    ((This)->lpVtbl->SetScaleFactor(This,scaleFactor))
#define IApplicationDesignModeSettings_SetApplicationViewState(This,viewState) \
    ((This)->lpVtbl->SetApplicationViewState(This,viewState))
#define IApplicationDesignModeSettings_ComputeApplicationSize(This,applicationSizePixels) \
    ((This)->lpVtbl->ComputeApplicationSize(This,applicationSizePixels))
#define IApplicationDesignModeSettings_IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported) \
    ((This)->lpVtbl->IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported))
#define IApplicationDesignModeSettings_TriggerEdgeGesture(This,edgeGestureKind) \
    ((This)->lpVtbl->TriggerEdgeGesture(This,edgeGestureKind))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationDesignModeSettings_INTERFACE_DEFINED__ */

typedef enum NATIVE_DISPLAY_ORIENTATION {
    NDO_LANDSCAPE = 0,
    NDO_PORTRAIT = 1
} NATIVE_DISPLAY_ORIENTATION;

typedef enum APPLICATION_VIEW_ORIENTATION {
    AVO_LANDSCAPE = 0,
    AVO_PORTRAIT = 1
} APPLICATION_VIEW_ORIENTATION;

typedef enum ADJACENT_DISPLAY_EDGES {
    ADE_NONE = 0,
    ADE_LEFT = 0x1,
    ADE_RIGHT = 0x2
} ADJACENT_DISPLAY_EDGES;

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef enum APPLICATION_VIEW_MIN_WIDTH {
    AVMW_DEFAULT = 0,
    AVMW_320 = 1,
    AVMW_500 = 2
} APPLICATION_VIEW_MIN_WIDTH;

/*****************************************************************************
 * IApplicationDesignModeSettings2 interface
 */
#ifndef __IApplicationDesignModeSettings2_INTERFACE_DEFINED__
#define __IApplicationDesignModeSettings2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IApplicationDesignModeSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IApplicationDesignModeSettings2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IApplicationDesignModeSettings2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IApplicationDesignModeSettings2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IApplicationDesignModeSettings2 *This);

    /*** IApplicationDesignModeSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNativeDisplaySize)(
        IApplicationDesignModeSettings2 *This,
        SIZE nativeDisplaySizePixels);

    HRESULT (STDMETHODCALLTYPE *SetScaleFactor)(
        IApplicationDesignModeSettings2 *This,
        DEVICE_SCALE_FACTOR scaleFactor);

    HRESULT (STDMETHODCALLTYPE *SetApplicationViewState)(
        IApplicationDesignModeSettings2 *This,
        APPLICATION_VIEW_STATE viewState);

    HRESULT (STDMETHODCALLTYPE *ComputeApplicationSize)(
        IApplicationDesignModeSettings2 *This,
        SIZE *applicationSizePixels);

    HRESULT (STDMETHODCALLTYPE *IsApplicationViewStateSupported)(
        IApplicationDesignModeSettings2 *This,
        APPLICATION_VIEW_STATE viewState,
        SIZE nativeDisplaySizePixels,
        DEVICE_SCALE_FACTOR scaleFactor,
        BOOL *supported);

    HRESULT (STDMETHODCALLTYPE *TriggerEdgeGesture)(
        IApplicationDesignModeSettings2 *This,
        EDGE_GESTURE_KIND edgeGestureKind);

    /*** IApplicationDesignModeSettings2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNativeDisplayOrientation)(
        IApplicationDesignModeSettings2 *This,
        NATIVE_DISPLAY_ORIENTATION nativeDisplayOrientation);

    HRESULT (STDMETHODCALLTYPE *SetApplicationViewOrientation)(
        IApplicationDesignModeSettings2 *This,
        APPLICATION_VIEW_ORIENTATION viewOrientation);

    HRESULT (STDMETHODCALLTYPE *SetAdjacentDisplayEdges)(
        IApplicationDesignModeSettings2 *This,
        ADJACENT_DISPLAY_EDGES adjacentDisplayEdges);

    HRESULT (STDMETHODCALLTYPE *SetIsOnLockScreen)(
        IApplicationDesignModeSettings2 *This,
        BOOL isOnLockScreen);

    HRESULT (STDMETHODCALLTYPE *SetApplicationViewMinWidth)(
        IApplicationDesignModeSettings2 *This,
        APPLICATION_VIEW_MIN_WIDTH viewMinWidth);

    HRESULT (STDMETHODCALLTYPE *GetApplicationSizeBounds)(
        IApplicationDesignModeSettings2 *This,
        SIZE *minApplicationSizePixels,
        SIZE *maxApplicationSizePixels);

    HRESULT (STDMETHODCALLTYPE *GetApplicationViewOrientation)(
        IApplicationDesignModeSettings2 *This,
        SIZE applicationSizePixels,
        APPLICATION_VIEW_ORIENTATION *viewOrientation);

    END_INTERFACE
} IApplicationDesignModeSettings2Vtbl;

interface IApplicationDesignModeSettings2 {
    CONST_VTBL IApplicationDesignModeSettings2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IApplicationDesignModeSettings2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IApplicationDesignModeSettings2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IApplicationDesignModeSettings2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IApplicationDesignModeSettings methods ***/
#define IApplicationDesignModeSettings2_SetNativeDisplaySize(This,nativeDisplaySizePixels) \
    ((This)->lpVtbl->SetNativeDisplaySize(This,nativeDisplaySizePixels))
#define IApplicationDesignModeSettings2_SetScaleFactor(This,scaleFactor) \
    ((This)->lpVtbl->SetScaleFactor(This,scaleFactor))
#define IApplicationDesignModeSettings2_SetApplicationViewState(This,viewState) \
    ((This)->lpVtbl->SetApplicationViewState(This,viewState))
#define IApplicationDesignModeSettings2_ComputeApplicationSize(This,applicationSizePixels) \
    ((This)->lpVtbl->ComputeApplicationSize(This,applicationSizePixels))
#define IApplicationDesignModeSettings2_IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported) \
    ((This)->lpVtbl->IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported))
#define IApplicationDesignModeSettings2_TriggerEdgeGesture(This,edgeGestureKind) \
    ((This)->lpVtbl->TriggerEdgeGesture(This,edgeGestureKind))
/*** IApplicationDesignModeSettings2 methods ***/
#define IApplicationDesignModeSettings2_SetNativeDisplayOrientation(This,nativeDisplayOrientation) \
    ((This)->lpVtbl->SetNativeDisplayOrientation(This,nativeDisplayOrientation))
#define IApplicationDesignModeSettings2_SetApplicationViewOrientation(This,viewOrientation) \
    ((This)->lpVtbl->SetApplicationViewOrientation(This,viewOrientation))
#define IApplicationDesignModeSettings2_SetAdjacentDisplayEdges(This,adjacentDisplayEdges) \
    ((This)->lpVtbl->SetAdjacentDisplayEdges(This,adjacentDisplayEdges))
#define IApplicationDesignModeSettings2_SetIsOnLockScreen(This,isOnLockScreen) \
    ((This)->lpVtbl->SetIsOnLockScreen(This,isOnLockScreen))
#define IApplicationDesignModeSettings2_SetApplicationViewMinWidth(This,viewMinWidth) \
    ((This)->lpVtbl->SetApplicationViewMinWidth(This,viewMinWidth))
#define IApplicationDesignModeSettings2_GetApplicationSizeBounds(This,minApplicationSizePixels,maxApplicationSizePixels) \
    ((This)->lpVtbl->GetApplicationSizeBounds(This,minApplicationSizePixels,maxApplicationSizePixels))
#define IApplicationDesignModeSettings2_GetApplicationViewOrientation(This,applicationSizePixels,viewOrientation) \
    ((This)->lpVtbl->GetApplicationViewOrientation(This,applicationSizePixels,viewOrientation))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IApplicationDesignModeSettings2_INTERFACE_DEFINED__ */

DEFINE_GUID(SID_URLExecutionContext, 0xFB5F8EBC, 0xBBB6, 0x4D10, 0xA4, 0x61, 0x77, 0x72, 0x91, 0xA0, 0x90, 0x30);
#define STR_TAB_REUSE_IDENTIFIER   L"Tab Reuse Identifier"
#define STR_REFERRER_IDENTIFIER    L"Referrer Identifier"

/*****************************************************************************
 * ILaunchTargetMonitor interface
 */
#ifndef __ILaunchTargetMonitor_INTERFACE_DEFINED__
#define __ILaunchTargetMonitor_INTERFACE_DEFINED__

EXTERN_C const IID IID_ILaunchTargetMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILaunchTargetMonitorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILaunchTargetMonitor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILaunchTargetMonitor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILaunchTargetMonitor *This);

    /*** ILaunchTargetMonitor methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMonitor)(
        ILaunchTargetMonitor *This,
        HMONITOR *monitor);

    END_INTERFACE
} ILaunchTargetMonitorVtbl;

interface ILaunchTargetMonitor {
    CONST_VTBL ILaunchTargetMonitorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILaunchTargetMonitor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILaunchTargetMonitor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILaunchTargetMonitor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILaunchTargetMonitor methods ***/
#define ILaunchTargetMonitor_GetMonitor(This,monitor) \
    ((This)->lpVtbl->GetMonitor(This,monitor))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILaunchTargetMonitor_INTERFACE_DEFINED__ */

#define SID_LaunchTargetMonitor __uuidof((struct __declspec(uuid("8D547FA1-CC45-40C8-B7C1-D48C183F13F3")) LaunchTargetMonitor*)0)

typedef enum APPLICATION_VIEW_SIZE_PREFERENCE {
    AVSP_DEFAULT = 0,
    AVSP_USE_LESS = 1,
    AVSP_USE_HALF = 2,
    AVSP_USE_MORE = 3,
    AVSP_USE_MINIMUM = 4,
    AVSP_USE_NONE = 5,
    AVSP_CUSTOM = 6
} APPLICATION_VIEW_SIZE_PREFERENCE;

/*****************************************************************************
 * ILaunchSourceViewSizePreference interface
 */
#ifndef __ILaunchSourceViewSizePreference_INTERFACE_DEFINED__
#define __ILaunchSourceViewSizePreference_INTERFACE_DEFINED__

EXTERN_C const IID IID_ILaunchSourceViewSizePreference;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILaunchSourceViewSizePreferenceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILaunchSourceViewSizePreference *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILaunchSourceViewSizePreference *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILaunchSourceViewSizePreference *This);

    /*** ILaunchSourceViewSizePreference methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSourceViewToPosition)(
        ILaunchSourceViewSizePreference *This,
        HWND *hwnd);

    HRESULT (STDMETHODCALLTYPE *GetSourceViewSizePreference)(
        ILaunchSourceViewSizePreference *This,
        APPLICATION_VIEW_SIZE_PREFERENCE *sourceSizeAfterLaunch);

    END_INTERFACE
} ILaunchSourceViewSizePreferenceVtbl;

interface ILaunchSourceViewSizePreference {
    CONST_VTBL ILaunchSourceViewSizePreferenceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILaunchSourceViewSizePreference_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILaunchSourceViewSizePreference_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILaunchSourceViewSizePreference_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILaunchSourceViewSizePreference methods ***/
#define ILaunchSourceViewSizePreference_GetSourceViewToPosition(This,hwnd) \
    ((This)->lpVtbl->GetSourceViewToPosition(This,hwnd))
#define ILaunchSourceViewSizePreference_GetSourceViewSizePreference(This,sourceSizeAfterLaunch) \
    ((This)->lpVtbl->GetSourceViewSizePreference(This,sourceSizeAfterLaunch))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILaunchSourceViewSizePreference_INTERFACE_DEFINED__ */

DEFINE_GUID(SID_LaunchSourceViewSizePreference, 0x80605492, 0x67d9, 0x414f, 0xaf, 0x89, 0xa1, 0xcd, 0xf1, 0x24, 0x2b, 0xc1);

/*****************************************************************************
 * ILaunchTargetViewSizePreference interface
 */
#ifndef __ILaunchTargetViewSizePreference_INTERFACE_DEFINED__
#define __ILaunchTargetViewSizePreference_INTERFACE_DEFINED__

EXTERN_C const IID IID_ILaunchTargetViewSizePreference;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILaunchTargetViewSizePreferenceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILaunchTargetViewSizePreference *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILaunchTargetViewSizePreference *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILaunchTargetViewSizePreference *This);

    /*** ILaunchTargetViewSizePreference methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTargetViewSizePreference)(
        ILaunchTargetViewSizePreference *This,
        APPLICATION_VIEW_SIZE_PREFERENCE *targetSizeOnLaunch);

    END_INTERFACE
} ILaunchTargetViewSizePreferenceVtbl;

interface ILaunchTargetViewSizePreference {
    CONST_VTBL ILaunchTargetViewSizePreferenceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILaunchTargetViewSizePreference_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILaunchTargetViewSizePreference_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILaunchTargetViewSizePreference_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILaunchTargetViewSizePreference methods ***/
#define ILaunchTargetViewSizePreference_GetTargetViewSizePreference(This,targetSizeOnLaunch) \
    ((This)->lpVtbl->GetTargetViewSizePreference(This,targetSizeOnLaunch))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILaunchTargetViewSizePreference_INTERFACE_DEFINED__ */

DEFINE_GUID(SID_LaunchTargetViewSizePreference, 0x26db2472, 0xb7b7, 0x406b, 0x97, 0x2, 0x73, 0xa, 0x4e, 0x20, 0xd3, 0xbf);

/*****************************************************************************
 * ILaunchSourceAppUserModelId interface
 */
#ifndef __ILaunchSourceAppUserModelId_INTERFACE_DEFINED__
#define __ILaunchSourceAppUserModelId_INTERFACE_DEFINED__

EXTERN_C const IID IID_ILaunchSourceAppUserModelId;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ILaunchSourceAppUserModelIdVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILaunchSourceAppUserModelId *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILaunchSourceAppUserModelId *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILaunchSourceAppUserModelId *This);

    /*** ILaunchSourceAppUserModelId methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAppUserModelId)(
        ILaunchSourceAppUserModelId *This,
        LPWSTR *launchingApp);

    END_INTERFACE
} ILaunchSourceAppUserModelIdVtbl;

interface ILaunchSourceAppUserModelId {
    CONST_VTBL ILaunchSourceAppUserModelIdVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ILaunchSourceAppUserModelId_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ILaunchSourceAppUserModelId_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ILaunchSourceAppUserModelId_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ILaunchSourceAppUserModelId methods ***/
#define ILaunchSourceAppUserModelId_GetAppUserModelId(This,launchingApp) \
    ((This)->lpVtbl->GetAppUserModelId(This,launchingApp))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ILaunchSourceAppUserModelId_INTERFACE_DEFINED__ */

DEFINE_GUID(SID_LaunchSourceAppUserModelId, 0x2ce78010, 0x74db, 0x48bc, 0x9c, 0x6a, 0x10, 0xf3, 0x72, 0x49, 0x57, 0x23);

#endif // NTDDI_WINBLUE

/*****************************************************************************
 * IInitializeWithWindow interface
 */
#ifndef __IInitializeWithWindow_INTERFACE_DEFINED__
#define __IInitializeWithWindow_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInitializeWithWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInitializeWithWindowVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInitializeWithWindow *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInitializeWithWindow *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInitializeWithWindow *This);

    /*** IInitializeWithWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IInitializeWithWindow *This,
        HWND hwnd);

    END_INTERFACE
} IInitializeWithWindowVtbl;

interface IInitializeWithWindow {
    CONST_VTBL IInitializeWithWindowVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInitializeWithWindow_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInitializeWithWindow_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInitializeWithWindow_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInitializeWithWindow methods ***/
#define IInitializeWithWindow_Initialize(This,hwnd) \
    ((This)->lpVtbl->Initialize(This,hwnd))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInitializeWithWindow_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IHandlerInfo interface
 */
#ifndef __IHandlerInfo_INTERFACE_DEFINED__
#define __IHandlerInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHandlerInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHandlerInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHandlerInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHandlerInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHandlerInfo *This);

    /*** IHandlerInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetApplicationDisplayName)(
        IHandlerInfo *This,
        LPWSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetApplicationPublisher)(
        IHandlerInfo *This,
        LPWSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetApplicationIconReference)(
        IHandlerInfo *This,
        LPWSTR *value);

    END_INTERFACE
} IHandlerInfoVtbl;

interface IHandlerInfo {
    CONST_VTBL IHandlerInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHandlerInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHandlerInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHandlerInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHandlerInfo methods ***/
#define IHandlerInfo_GetApplicationDisplayName(This,value) \
    ((This)->lpVtbl->GetApplicationDisplayName(This,value))
#define IHandlerInfo_GetApplicationPublisher(This,value) \
    ((This)->lpVtbl->GetApplicationPublisher(This,value))
#define IHandlerInfo_GetApplicationIconReference(This,value) \
    ((This)->lpVtbl->GetApplicationIconReference(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHandlerInfo_INTERFACE_DEFINED__ */

#define SID_HandlerInfo IID_IHandlerInfo

/*****************************************************************************
 * IHandlerInfo2 interface
 */
#ifndef __IHandlerInfo2_INTERFACE_DEFINED__
#define __IHandlerInfo2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHandlerInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHandlerInfo2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHandlerInfo2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHandlerInfo2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHandlerInfo2 *This);

    /*** IHandlerInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetApplicationDisplayName)(
        IHandlerInfo2 *This,
        LPWSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetApplicationPublisher)(
        IHandlerInfo2 *This,
        LPWSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetApplicationIconReference)(
        IHandlerInfo2 *This,
        LPWSTR *value);

    /*** IHandlerInfo2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetApplicationId)(
        IHandlerInfo2 *This,
        LPWSTR *value);

    END_INTERFACE
} IHandlerInfo2Vtbl;

interface IHandlerInfo2 {
    CONST_VTBL IHandlerInfo2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHandlerInfo2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHandlerInfo2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHandlerInfo2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHandlerInfo methods ***/
#define IHandlerInfo2_GetApplicationDisplayName(This,value) \
    ((This)->lpVtbl->GetApplicationDisplayName(This,value))
#define IHandlerInfo2_GetApplicationPublisher(This,value) \
    ((This)->lpVtbl->GetApplicationPublisher(This,value))
#define IHandlerInfo2_GetApplicationIconReference(This,value) \
    ((This)->lpVtbl->GetApplicationIconReference(This,value))
/*** IHandlerInfo2 methods ***/
#define IHandlerInfo2_GetApplicationId(This,value) \
    ((This)->lpVtbl->GetApplicationId(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHandlerInfo2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IHandlerActivationHost interface
 */
#ifndef __IHandlerActivationHost_INTERFACE_DEFINED__
#define __IHandlerActivationHost_INTERFACE_DEFINED__

EXTERN_C const IID IID_IHandlerActivationHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHandlerActivationHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHandlerActivationHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHandlerActivationHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHandlerActivationHost *This);

    /*** IHandlerActivationHost methods ***/
    HRESULT (STDMETHODCALLTYPE *BeforeCoCreateInstance)(
        IHandlerActivationHost *This,
        REFCLSID clsidHandler,
        IShellItemArray *itemsBeingActivated,
        IHandlerInfo *handlerInfo);

    HRESULT (STDMETHODCALLTYPE *BeforeCreateProcess)(
        IHandlerActivationHost *This,
        LPCWSTR applicationPath,
        LPCWSTR commandLine,
        IHandlerInfo *handlerInfo);

    END_INTERFACE
} IHandlerActivationHostVtbl;

interface IHandlerActivationHost {
    CONST_VTBL IHandlerActivationHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHandlerActivationHost_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHandlerActivationHost_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHandlerActivationHost_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHandlerActivationHost methods ***/
#define IHandlerActivationHost_BeforeCoCreateInstance(This,clsidHandler,itemsBeingActivated,handlerInfo) \
    ((This)->lpVtbl->BeforeCoCreateInstance(This,clsidHandler,itemsBeingActivated,handlerInfo))
#define IHandlerActivationHost_BeforeCreateProcess(This,applicationPath,commandLine,handlerInfo) \
    ((This)->lpVtbl->BeforeCreateProcess(This,applicationPath,commandLine,handlerInfo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHandlerActivationHost_INTERFACE_DEFINED__ */

#define SID_SHandlerActivationHost IID_IHandlerActivationHost

#if (NTDDI_VERSION >= NTDDI_WIN10)

/*****************************************************************************
 * IAppActivationUIInfo interface
 */
#ifndef __IAppActivationUIInfo_INTERFACE_DEFINED__
#define __IAppActivationUIInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IAppActivationUIInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAppActivationUIInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAppActivationUIInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAppActivationUIInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAppActivationUIInfo *This);

    /*** IAppActivationUIInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMonitor)(
        IAppActivationUIInfo *This,
        HMONITOR *value);

    HRESULT (STDMETHODCALLTYPE *GetInvokePoint)(
        IAppActivationUIInfo *This,
        POINT *value);

    HRESULT (STDMETHODCALLTYPE *GetShowCommand)(
        IAppActivationUIInfo *This,
        int *value);

    HRESULT (STDMETHODCALLTYPE *GetShowUI)(
        IAppActivationUIInfo *This,
        BOOL *value);

    HRESULT (STDMETHODCALLTYPE *GetKeyState)(
        IAppActivationUIInfo *This,
        DWORD *value);

    END_INTERFACE
} IAppActivationUIInfoVtbl;

interface IAppActivationUIInfo {
    CONST_VTBL IAppActivationUIInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAppActivationUIInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAppActivationUIInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAppActivationUIInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAppActivationUIInfo methods ***/
#define IAppActivationUIInfo_GetMonitor(This,value) \
    ((This)->lpVtbl->GetMonitor(This,value))
#define IAppActivationUIInfo_GetInvokePoint(This,value) \
    ((This)->lpVtbl->GetInvokePoint(This,value))
#define IAppActivationUIInfo_GetShowCommand(This,value) \
    ((This)->lpVtbl->GetShowCommand(This,value))
#define IAppActivationUIInfo_GetShowUI(This,value) \
    ((This)->lpVtbl->GetShowUI(This,value))
#define IAppActivationUIInfo_GetKeyState(This,value) \
    ((This)->lpVtbl->GetKeyState(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAppActivationUIInfo_INTERFACE_DEFINED__ */

#define SID_AppActivationUIInfo IID_IAppActivationUIInfo

#endif // NTDDI_WIN10

DEFINE_GUID(SID_ShellExecuteNamedPropertyStore, 0xeb84ada2, 0x00ff, 0x4992, 0x83, 0x24, 0xed, 0x5c, 0xe0, 0x61, 0xcb, 0x29);

#endif // NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef enum FLYOUT_PLACEMENT {
    FP_DEFAULT = 0,
    FP_ABOVE = 1,
    FP_BELOW = 2,
    FP_LEFT = 3,
    FP_RIGHT = 4
} FLYOUT_PLACEMENT;

/*****************************************************************************
 * IContactManagerInterop interface
 */
#ifndef __IContactManagerInterop_INTERFACE_DEFINED__
#define __IContactManagerInterop_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContactManagerInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContactManagerInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContactManagerInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContactManagerInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContactManagerInterop *This);

    /*** IContactManagerInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *ShowContactCardForWindow)(
        IContactManagerInterop *This,
        HWND appWindow,
        IUnknown *contact,
        const RECT *selection,
        FLYOUT_PLACEMENT preferredPlacement);

    END_INTERFACE
} IContactManagerInteropVtbl;

interface IContactManagerInterop {
    CONST_VTBL IContactManagerInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContactManagerInterop_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContactManagerInterop_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContactManagerInterop_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContactManagerInterop methods ***/
#define IContactManagerInterop_ShowContactCardForWindow(This,appWindow,contact,selection,preferredPlacement) \
    ((This)->lpVtbl->ShowContactCardForWindow(This,appWindow,contact,selection,preferredPlacement))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContactManagerInterop_INTERFACE_DEFINED__ */

#endif // NTDDI_WINBLUE

/*****************************************************************************
 * IShellIconOverlayIdentifier interface
 */
#ifndef __IShellIconOverlayIdentifier_INTERFACE_DEFINED__
#define __IShellIconOverlayIdentifier_INTERFACE_DEFINED__

EXTERN_C const IID IID_IShellIconOverlayIdentifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IShellIconOverlayIdentifierVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellIconOverlayIdentifier *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellIconOverlayIdentifier *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellIconOverlayIdentifier *This);

    /*** IShellIconOverlayIdentifier methods ***/
    HRESULT (STDMETHODCALLTYPE *IsMemberOf)(
        IShellIconOverlayIdentifier *This,
        LPCWSTR pwszPath,
        DWORD dwAttrib);

    HRESULT (STDMETHODCALLTYPE *GetOverlayInfo)(
        IShellIconOverlayIdentifier *This,
        LPWSTR pwszIconFile,
        int cchMax,
        int *pIndex,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IShellIconOverlayIdentifier *This,
        int *pPriority);

    END_INTERFACE
} IShellIconOverlayIdentifierVtbl;

interface IShellIconOverlayIdentifier {
    CONST_VTBL IShellIconOverlayIdentifierVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellIconOverlayIdentifier_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IShellIconOverlayIdentifier_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IShellIconOverlayIdentifier_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IShellIconOverlayIdentifier methods ***/
#define IShellIconOverlayIdentifier_IsMemberOf(This,pwszPath,dwAttrib) \
    ((This)->lpVtbl->IsMemberOf(This,pwszPath,dwAttrib))
#define IShellIconOverlayIdentifier_GetOverlayInfo(This,pwszIconFile,cchMax,pIndex,pdwFlags) \
    ((This)->lpVtbl->GetOverlayInfo(This,pwszIconFile,cchMax,pIndex,pdwFlags))
#define IShellIconOverlayIdentifier_GetPriority(This,pPriority) \
    ((This)->lpVtbl->GetPriority(This,pPriority))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IShellIconOverlayIdentifier_INTERFACE_DEFINED__ */

#define ISIOI_ICONFILE   0x00000001
#define ISIOI_ICONINDEX  0x00000002

#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)

/*****************************************************************************
 * IBannerNotificationHandler interface
 */
#ifndef __IBannerNotificationHandler_INTERFACE_DEFINED__
#define __IBannerNotificationHandler_INTERFACE_DEFINED__

typedef enum BANNER_NOTIFICATION_EVENT {
    BNE_Rendered = 0,
    BNE_Hovered = 1,
    BNE_Closed = 2,
    BNE_Dismissed = 3,
    BNE_Button1Clicked = 4,
    BNE_Button2Clicked = 5
} BANNER_NOTIFICATION_EVENT;

typedef struct BANNER_NOTIFICATION {
    BANNER_NOTIFICATION_EVENT event;
    LPCWSTR providerIdentity;
    LPCWSTR contentId;
} BANNER_NOTIFICATION;

EXTERN_C const IID IID_IBannerNotificationHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBannerNotificationHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBannerNotificationHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBannerNotificationHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBannerNotificationHandler *This);

    /*** IBannerNotificationHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *OnBannerEvent)(
        IBannerNotificationHandler *This,
        const BANNER_NOTIFICATION *notification);

    END_INTERFACE
} IBannerNotificationHandlerVtbl;

interface IBannerNotificationHandler {
    CONST_VTBL IBannerNotificationHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBannerNotificationHandler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBannerNotificationHandler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBannerNotificationHandler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBannerNotificationHandler methods ***/
#define IBannerNotificationHandler_OnBannerEvent(This,notification) \
    ((This)->lpVtbl->OnBannerEvent(This,notification))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBannerNotificationHandler_INTERFACE_DEFINED__ */

#endif // NTDDI_WIN10_RS4

#if (NTDDI_VERSION >= NTDDI_VISTA)

enum SORT_ORDER_TYPE {
    SOT_DEFAULT = 0,
    SOT_IGNORE_FOLDERNESS = 1
};

/*****************************************************************************
 * ISortColumnArray interface
 */
#ifndef __ISortColumnArray_INTERFACE_DEFINED__
#define __ISortColumnArray_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISortColumnArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISortColumnArrayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISortColumnArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISortColumnArray *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISortColumnArray *This);

    /*** ISortColumnArray methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        ISortColumnArray *This,
        UINT *columnCount);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        ISortColumnArray *This,
        UINT index,
        SORTCOLUMN *sortcolumn);

    HRESULT (STDMETHODCALLTYPE *GetSortType)(
        ISortColumnArray *This,
        enum SORT_ORDER_TYPE *type);

    END_INTERFACE
} ISortColumnArrayVtbl;

interface ISortColumnArray {
    CONST_VTBL ISortColumnArrayVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISortColumnArray_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISortColumnArray_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISortColumnArray_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISortColumnArray methods ***/
#define ISortColumnArray_GetCount(This,columnCount) \
    ((This)->lpVtbl->GetCount(This,columnCount))
#define ISortColumnArray_GetAt(This,index,sortcolumn) \
    ((This)->lpVtbl->GetAt(This,index,sortcolumn))
#define ISortColumnArray_GetSortType(This,type) \
    ((This)->lpVtbl->GetSortType(This,type))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISortColumnArray_INTERFACE_DEFINED__ */

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

/*****************************************************************************
 * IPropertyKeyStore interface
 */
#ifndef __IPropertyKeyStore_INTERFACE_DEFINED__
#define __IPropertyKeyStore_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPropertyKeyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPropertyKeyStoreVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPropertyKeyStore *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPropertyKeyStore *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPropertyKeyStore *This);

    /*** IPropertyKeyStore methods ***/
    HRESULT (STDMETHODCALLTYPE *GetKeyCount)(
        IPropertyKeyStore *This,
        int *keyCount);

    HRESULT (STDMETHODCALLTYPE *GetKeyAt)(
        IPropertyKeyStore *This,
        int index,
        PROPERTYKEY *pkey);

    HRESULT (STDMETHODCALLTYPE *AppendKey)(
        IPropertyKeyStore *This,
        REFPROPERTYKEY key);

    HRESULT (STDMETHODCALLTYPE *DeleteKey)(
        IPropertyKeyStore *This,
        int index);

    HRESULT (STDMETHODCALLTYPE *IsKeyInStore)(
        IPropertyKeyStore *This,
        REFPROPERTYKEY key);

    HRESULT (STDMETHODCALLTYPE *RemoveKey)(
        IPropertyKeyStore *This,
        REFPROPERTYKEY key);

    END_INTERFACE
} IPropertyKeyStoreVtbl;

interface IPropertyKeyStore {
    CONST_VTBL IPropertyKeyStoreVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPropertyKeyStore_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPropertyKeyStore_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPropertyKeyStore_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPropertyKeyStore methods ***/
#define IPropertyKeyStore_GetKeyCount(This,keyCount) \
    ((This)->lpVtbl->GetKeyCount(This,keyCount))
#define IPropertyKeyStore_GetKeyAt(This,index,pkey) \
    ((This)->lpVtbl->GetKeyAt(This,index,pkey))
#define IPropertyKeyStore_AppendKey(This,key) \
    ((This)->lpVtbl->AppendKey(This,key))
#define IPropertyKeyStore_DeleteKey(This,index) \
    ((This)->lpVtbl->DeleteKey(This,index))
#define IPropertyKeyStore_IsKeyInStore(This,key) \
    ((This)->lpVtbl->IsKeyInStore(This,key))
#define IPropertyKeyStore_RemoveKey(This,key) \
    ((This)->lpVtbl->RemoveKey(This,key))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPropertyKeyStore_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER PCIDLIST_ABSOLUTE_UserSize(ULONG *, ULONG, PCIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserMarshal(ULONG *, unsigned char *, PCIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal(ULONG *, unsigned char *, PCIDLIST_ABSOLUTE *);
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree(ULONG *, PCIDLIST_ABSOLUTE *);
ULONG __RPC_USER PIDLIST_ABSOLUTE_UserSize(ULONG *, ULONG, PIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserMarshal(ULONG *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(ULONG *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree(ULONG *, PIDLIST_ABSOLUTE *);
ULONG __RPC_USER PITEMID_CHILD_UserSize(ULONG *, ULONG, PITEMID_CHILD *);
unsigned char * __RPC_USER PITEMID_CHILD_UserMarshal(ULONG *, unsigned char *, PITEMID_CHILD *);
unsigned char * __RPC_USER PITEMID_CHILD_UserUnmarshal(ULONG *, unsigned char *, PITEMID_CHILD *);
void __RPC_USER PITEMID_CHILD_UserFree(ULONG *, PITEMID_CHILD *);
ULONG __RPC_USER HMONITOR_UserSize(ULONG *, ULONG, HMONITOR *);
unsigned char * __RPC_USER HMONITOR_UserMarshal(ULONG *, unsigned char *, HMONITOR *);
unsigned char * __RPC_USER HMONITOR_UserUnmarshal(ULONG *, unsigned char *, HMONITOR *);
void __RPC_USER HMONITOR_UserFree(ULONG *, HMONITOR *);
ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);
ULONG __RPC_USER PIDLIST_RELATIVE_UserSize(ULONG *, ULONG, PIDLIST_RELATIVE *);
unsigned char * __RPC_USER PIDLIST_RELATIVE_UserMarshal(ULONG *, unsigned char *, PIDLIST_RELATIVE *);
unsigned char * __RPC_USER PIDLIST_RELATIVE_UserUnmarshal(ULONG *, unsigned char *, PIDLIST_RELATIVE *);
void __RPC_USER PIDLIST_RELATIVE_UserFree(ULONG *, PIDLIST_RELATIVE *);
ULONG __RPC_USER PCUIDLIST_RELATIVE_UserSize(ULONG *, ULONG, PCUIDLIST_RELATIVE *);
unsigned char * __RPC_USER PCUIDLIST_RELATIVE_UserMarshal(ULONG *, unsigned char *, PCUIDLIST_RELATIVE *);
unsigned char * __RPC_USER PCUIDLIST_RELATIVE_UserUnmarshal(ULONG *, unsigned char *, PCUIDLIST_RELATIVE *);
void __RPC_USER PCUIDLIST_RELATIVE_UserFree(ULONG *, PCUIDLIST_RELATIVE *);
ULONG __RPC_USER PCUITEMID_CHILD_UserSize(ULONG *, ULONG, PCUITEMID_CHILD *);
unsigned char * __RPC_USER PCUITEMID_CHILD_UserMarshal(ULONG *, unsigned char *, PCUITEMID_CHILD *);
unsigned char * __RPC_USER PCUITEMID_CHILD_UserUnmarshal(ULONG *, unsigned char *, PCUITEMID_CHILD *);
void __RPC_USER PCUITEMID_CHILD_UserFree(ULONG *, PCUITEMID_CHILD *);
ULONG __RPC_USER VARIANT_UserSize(ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal(ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(ULONG *, VARIANT *);
ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER LPSAFEARRAY_UserSize(ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(ULONG *, LPSAFEARRAY *);
ULONG __RPC_USER HMENU_UserSize(ULONG *, ULONG, HMENU *);
unsigned char * __RPC_USER HMENU_UserMarshal(ULONG *, unsigned char *, HMENU *);
unsigned char * __RPC_USER HMENU_UserUnmarshal(ULONG *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(ULONG *, HMENU *);
ULONG __RPC_USER HGLOBAL_UserSize(ULONG *, ULONG, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserMarshal(ULONG *, unsigned char *, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserUnmarshal(ULONG *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree(ULONG *, HGLOBAL *);
ULONG __RPC_USER HBITMAP_UserSize(ULONG *, ULONG, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserMarshal(ULONG *, unsigned char *, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(ULONG *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(ULONG *, HBITMAP *);
ULONG __RPC_USER HICON_UserSize(ULONG *, ULONG, HICON *);
unsigned char * __RPC_USER HICON_UserMarshal(ULONG *, unsigned char *, HICON *);
unsigned char * __RPC_USER HICON_UserUnmarshal(ULONG *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(ULONG *, HICON *);
ULONG __RPC_USER HACCEL_UserSize(ULONG *, ULONG, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserMarshal(ULONG *, unsigned char *, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserUnmarshal(ULONG *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree(ULONG *, HACCEL *);

/* End additional prototypes for all interfaces */

#endif /* __shobjidl_core_h__ */
