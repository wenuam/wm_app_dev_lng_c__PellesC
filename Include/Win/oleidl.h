/* Generated from oleidl.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef __oleidl_h__
#define __oleidl_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IOleAdviseHolder_FWD_DEFINED__
#define __IOleAdviseHolder_FWD_DEFINED__
typedef interface IOleAdviseHolder IOleAdviseHolder;
#endif /* __IOleAdviseHolder_FWD_DEFINED__ */

#ifndef __IOleCache_FWD_DEFINED__
#define __IOleCache_FWD_DEFINED__
typedef interface IOleCache IOleCache;
#endif /* __IOleCache_FWD_DEFINED__ */

#ifndef __IOleCache2_FWD_DEFINED__
#define __IOleCache2_FWD_DEFINED__
typedef interface IOleCache2 IOleCache2;
#endif /* __IOleCache2_FWD_DEFINED__ */

#ifndef __IOleCacheControl_FWD_DEFINED__
#define __IOleCacheControl_FWD_DEFINED__
typedef interface IOleCacheControl IOleCacheControl;
#endif /* __IOleCacheControl_FWD_DEFINED__ */

#ifndef __IParseDisplayName_FWD_DEFINED__
#define __IParseDisplayName_FWD_DEFINED__
typedef interface IParseDisplayName IParseDisplayName;
#endif /* __IParseDisplayName_FWD_DEFINED__ */

#ifndef __IOleContainer_FWD_DEFINED__
#define __IOleContainer_FWD_DEFINED__
typedef interface IOleContainer IOleContainer;
#endif /* __IOleContainer_FWD_DEFINED__ */

#ifndef __IOleClientSite_FWD_DEFINED__
#define __IOleClientSite_FWD_DEFINED__
typedef interface IOleClientSite IOleClientSite;
#endif /* __IOleClientSite_FWD_DEFINED__ */

#ifndef __IOleObject_FWD_DEFINED__
#define __IOleObject_FWD_DEFINED__
typedef interface IOleObject IOleObject;
#endif /* __IOleObject_FWD_DEFINED__ */

#ifndef __IOleWindow_FWD_DEFINED__
#define __IOleWindow_FWD_DEFINED__
typedef interface IOleWindow IOleWindow;
#endif /* __IOleWindow_FWD_DEFINED__ */

#ifndef __IOleLink_FWD_DEFINED__
#define __IOleLink_FWD_DEFINED__
typedef interface IOleLink IOleLink;
#endif /* __IOleLink_FWD_DEFINED__ */

#ifndef __IOleItemContainer_FWD_DEFINED__
#define __IOleItemContainer_FWD_DEFINED__
typedef interface IOleItemContainer IOleItemContainer;
#endif /* __IOleItemContainer_FWD_DEFINED__ */

#ifndef __IOleInPlaceUIWindow_FWD_DEFINED__
#define __IOleInPlaceUIWindow_FWD_DEFINED__
typedef interface IOleInPlaceUIWindow IOleInPlaceUIWindow;
#endif /* __IOleInPlaceUIWindow_FWD_DEFINED__ */

#ifndef __IOleInPlaceActiveObject_FWD_DEFINED__
#define __IOleInPlaceActiveObject_FWD_DEFINED__
typedef interface IOleInPlaceActiveObject IOleInPlaceActiveObject;
#endif /* __IOleInPlaceActiveObject_FWD_DEFINED__ */

#ifndef __IOleInPlaceFrame_FWD_DEFINED__
#define __IOleInPlaceFrame_FWD_DEFINED__
typedef interface IOleInPlaceFrame IOleInPlaceFrame;
#endif /* __IOleInPlaceFrame_FWD_DEFINED__ */

#ifndef __IOleInPlaceObject_FWD_DEFINED__
#define __IOleInPlaceObject_FWD_DEFINED__
typedef interface IOleInPlaceObject IOleInPlaceObject;
#endif /* __IOleInPlaceObject_FWD_DEFINED__ */

#ifndef __IOleInPlaceSite_FWD_DEFINED__
#define __IOleInPlaceSite_FWD_DEFINED__
typedef interface IOleInPlaceSite IOleInPlaceSite;
#endif /* __IOleInPlaceSite_FWD_DEFINED__ */

#ifndef __IContinue_FWD_DEFINED__
#define __IContinue_FWD_DEFINED__
typedef interface IContinue IContinue;
#endif /* __IContinue_FWD_DEFINED__ */

#ifndef __IViewObject_FWD_DEFINED__
#define __IViewObject_FWD_DEFINED__
typedef interface IViewObject IViewObject;
#endif /* __IViewObject_FWD_DEFINED__ */

#ifndef __IViewObject2_FWD_DEFINED__
#define __IViewObject2_FWD_DEFINED__
typedef interface IViewObject2 IViewObject2;
#endif /* __IViewObject2_FWD_DEFINED__ */

#ifndef __IDropSource_FWD_DEFINED__
#define __IDropSource_FWD_DEFINED__
typedef interface IDropSource IDropSource;
#endif /* __IDropSource_FWD_DEFINED__ */

#ifndef __IDropTarget_FWD_DEFINED__
#define __IDropTarget_FWD_DEFINED__
typedef interface IDropTarget IDropTarget;
#endif /* __IDropTarget_FWD_DEFINED__ */

#ifndef __IDropSourceNotify_FWD_DEFINED__
#define __IDropSourceNotify_FWD_DEFINED__
typedef interface IDropSourceNotify IDropSourceNotify;
#endif /* __IDropSourceNotify_FWD_DEFINED__ */

#ifndef __IEnterpriseDropTarget_FWD_DEFINED__
#define __IEnterpriseDropTarget_FWD_DEFINED__
typedef interface IEnterpriseDropTarget IEnterpriseDropTarget;
#endif /* __IEnterpriseDropTarget_FWD_DEFINED__ */

#ifndef __IEnumOLEVERB_FWD_DEFINED__
#define __IEnumOLEVERB_FWD_DEFINED__
typedef interface IEnumOLEVERB IEnumOLEVERB;
#endif /* __IEnumOLEVERB_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#ifndef __IOleInPlaceActiveObject_FWD_DEFINED__
#define __IOleInPlaceActiveObject_FWD_DEFINED__
typedef interface IOleInPlaceActiveObject IOleInPlaceActiveObject;
#endif /* __IOleInPlaceActiveObject_FWD_DEFINED__ */

#ifndef __IEnumOLEVERB_FWD_DEFINED__
#define __IEnumOLEVERB_FWD_DEFINED__
typedef interface IEnumOLEVERB IEnumOLEVERB;
#endif /* __IEnumOLEVERB_FWD_DEFINED__ */

/*****************************************************************************
 * IOleAdviseHolder interface
 */
#ifndef __IOleAdviseHolder_INTERFACE_DEFINED__
#define __IOleAdviseHolder_INTERFACE_DEFINED__

typedef IOleAdviseHolder *LPOLEADVISEHOLDER;

EXTERN_C const IID IID_IOleAdviseHolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleAdviseHolderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleAdviseHolder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleAdviseHolder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleAdviseHolder *This);

    /*** IOleAdviseHolder methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        IOleAdviseHolder *This,
        IAdviseSink *pAdvise,
        DWORD *pdwConnection);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IOleAdviseHolder *This,
        DWORD dwConnection);

    HRESULT (STDMETHODCALLTYPE *EnumAdvise)(
        IOleAdviseHolder *This,
        IEnumSTATDATA **ppenumAdvise);

    HRESULT (STDMETHODCALLTYPE *SendOnRename)(
        IOleAdviseHolder *This,
        IMoniker *pmk);

    HRESULT (STDMETHODCALLTYPE *SendOnSave)(
        IOleAdviseHolder *This);

    HRESULT (STDMETHODCALLTYPE *SendOnClose)(
        IOleAdviseHolder *This);

    END_INTERFACE
} IOleAdviseHolderVtbl;

interface IOleAdviseHolder {
    CONST_VTBL IOleAdviseHolderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleAdviseHolder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleAdviseHolder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleAdviseHolder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleAdviseHolder methods ***/
#define IOleAdviseHolder_Advise(This,pAdvise,pdwConnection) \
    ((This)->lpVtbl->Advise(This,pAdvise,pdwConnection))
#define IOleAdviseHolder_Unadvise(This,dwConnection) \
    ((This)->lpVtbl->Unadvise(This,dwConnection))
#define IOleAdviseHolder_EnumAdvise(This,ppenumAdvise) \
    ((This)->lpVtbl->EnumAdvise(This,ppenumAdvise))
#define IOleAdviseHolder_SendOnRename(This,pmk) \
    ((This)->lpVtbl->SendOnRename(This,pmk))
#define IOleAdviseHolder_SendOnSave(This) \
    ((This)->lpVtbl->SendOnSave(This))
#define IOleAdviseHolder_SendOnClose(This) \
    ((This)->lpVtbl->SendOnClose(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleAdviseHolder_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IOleCache interface
 */
#ifndef __IOleCache_INTERFACE_DEFINED__
#define __IOleCache_INTERFACE_DEFINED__

typedef IOleCache *LPOLECACHE;

EXTERN_C const IID IID_IOleCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleCacheVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleCache *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleCache *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleCache *This);

    /*** IOleCache methods ***/
    HRESULT (STDMETHODCALLTYPE *Cache)(
        IOleCache *This,
        FORMATETC *pformatetc,
        DWORD advf,
        DWORD *pdwConnection);

    HRESULT (STDMETHODCALLTYPE *Uncache)(
        IOleCache *This,
        DWORD dwConnection);

    HRESULT (STDMETHODCALLTYPE *EnumCache)(
        IOleCache *This,
        IEnumSTATDATA **ppenumSTATDATA);

    HRESULT (STDMETHODCALLTYPE *InitCache)(
        IOleCache *This,
        IDataObject *pDataObject);

    HRESULT (STDMETHODCALLTYPE *SetData)(
        IOleCache *This,
        FORMATETC *pformatetc,
        STGMEDIUM *pmedium,
        BOOL fRelease);

    END_INTERFACE
} IOleCacheVtbl;

interface IOleCache {
    CONST_VTBL IOleCacheVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleCache_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleCache_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleCache_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleCache methods ***/
#define IOleCache_Cache(This,pformatetc,advf,pdwConnection) \
    ((This)->lpVtbl->Cache(This,pformatetc,advf,pdwConnection))
#define IOleCache_Uncache(This,dwConnection) \
    ((This)->lpVtbl->Uncache(This,dwConnection))
#define IOleCache_EnumCache(This,ppenumSTATDATA) \
    ((This)->lpVtbl->EnumCache(This,ppenumSTATDATA))
#define IOleCache_InitCache(This,pDataObject) \
    ((This)->lpVtbl->InitCache(This,pDataObject))
#define IOleCache_SetData(This,pformatetc,pmedium,fRelease) \
    ((This)->lpVtbl->SetData(This,pformatetc,pmedium,fRelease))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleCache_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleCache2 interface
 */
#ifndef __IOleCache2_INTERFACE_DEFINED__
#define __IOleCache2_INTERFACE_DEFINED__

typedef IOleCache2 *LPOLECACHE2;

#define UPDFCACHE_NODATACACHE  (0x1)
#define UPDFCACHE_ONSAVECACHE  (0x2)
#define UPDFCACHE_ONSTOPCACHE  (0x4)
#define UPDFCACHE_NORMALCACHE  (0x8)
#define UPDFCACHE_IFBLANK  (0x10)
#define UPDFCACHE_ONLYIFBLANK  (0x80000000)

#define UPDFCACHE_IFBLANKORONSAVECACHE  (UPDFCACHE_IFBLANK | UPDFCACHE_ONSAVECACHE)

#define UPDFCACHE_ALL  ((DWORD)~UPDFCACHE_ONLYIFBLANK)

#define UPDFCACHE_ALLBUTNODATACACHE  (UPDFCACHE_ALL & (DWORD)~UPDFCACHE_NODATACACHE)

typedef enum tagDISCARDCACHE {
    DISCARDCACHE_SAVEIFDIRTY = 0,
    DISCARDCACHE_NOSAVE = 1
} DISCARDCACHE;

EXTERN_C const IID IID_IOleCache2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleCache2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleCache2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleCache2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleCache2 *This);

    /*** IOleCache methods ***/
    HRESULT (STDMETHODCALLTYPE *Cache)(
        IOleCache2 *This,
        FORMATETC *pformatetc,
        DWORD advf,
        DWORD *pdwConnection);

    HRESULT (STDMETHODCALLTYPE *Uncache)(
        IOleCache2 *This,
        DWORD dwConnection);

    HRESULT (STDMETHODCALLTYPE *EnumCache)(
        IOleCache2 *This,
        IEnumSTATDATA **ppenumSTATDATA);

    HRESULT (STDMETHODCALLTYPE *InitCache)(
        IOleCache2 *This,
        IDataObject *pDataObject);

    HRESULT (STDMETHODCALLTYPE *SetData)(
        IOleCache2 *This,
        FORMATETC *pformatetc,
        STGMEDIUM *pmedium,
        BOOL fRelease);

    /*** IOleCache2 methods ***/
    HRESULT (STDMETHODCALLTYPE *UpdateCache)(
        IOleCache2 *This,
        LPDATAOBJECT pDataObject,
        DWORD grfUpdf,
        LPVOID pReserved);

    HRESULT (STDMETHODCALLTYPE *DiscardCache)(
        IOleCache2 *This,
        DWORD dwDiscardOptions);

    END_INTERFACE
} IOleCache2Vtbl;

interface IOleCache2 {
    CONST_VTBL IOleCache2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleCache2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleCache2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleCache2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleCache methods ***/
#define IOleCache2_Cache(This,pformatetc,advf,pdwConnection) \
    ((This)->lpVtbl->Cache(This,pformatetc,advf,pdwConnection))
#define IOleCache2_Uncache(This,dwConnection) \
    ((This)->lpVtbl->Uncache(This,dwConnection))
#define IOleCache2_EnumCache(This,ppenumSTATDATA) \
    ((This)->lpVtbl->EnumCache(This,ppenumSTATDATA))
#define IOleCache2_InitCache(This,pDataObject) \
    ((This)->lpVtbl->InitCache(This,pDataObject))
#define IOleCache2_SetData(This,pformatetc,pmedium,fRelease) \
    ((This)->lpVtbl->SetData(This,pformatetc,pmedium,fRelease))
/*** IOleCache2 methods ***/
#define IOleCache2_UpdateCache(This,pDataObject,grfUpdf,pReserved) \
    ((This)->lpVtbl->UpdateCache(This,pDataObject,grfUpdf,pReserved))
#define IOleCache2_DiscardCache(This,dwDiscardOptions) \
    ((This)->lpVtbl->DiscardCache(This,dwDiscardOptions))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IOleCache2_RemoteUpdateCache_Proxy(
    IOleCache2 *This,
    LPDATAOBJECT pDataObject,
    DWORD grfUpdf,
    LONG_PTR pReserved);

void __RPC_STUB IOleCache2_RemoteUpdateCache_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IOleCache2_UpdateCache_Proxy(
    LPDATAOBJECT pDataObject,
    DWORD grfUpdf,
    LPVOID pReserved);
HRESULT IOleCache2_UpdateCache_Stub(
    LPDATAOBJECT pDataObject,
    DWORD grfUpdf,
    LONG_PTR pReserved);
#endif /* __IOleCache2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IOleCacheControl interface
 */
#ifndef __IOleCacheControl_INTERFACE_DEFINED__
#define __IOleCacheControl_INTERFACE_DEFINED__

typedef IOleCacheControl *LPOLECACHECONTROL;

EXTERN_C const IID IID_IOleCacheControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleCacheControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleCacheControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleCacheControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleCacheControl *This);

    /*** IOleCacheControl methods ***/
    HRESULT (STDMETHODCALLTYPE *OnRun)(
        IOleCacheControl *This,
        LPDATAOBJECT pDataObject);

    HRESULT (STDMETHODCALLTYPE *OnStop)(
        IOleCacheControl *This);

    END_INTERFACE
} IOleCacheControlVtbl;

interface IOleCacheControl {
    CONST_VTBL IOleCacheControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleCacheControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleCacheControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleCacheControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleCacheControl methods ***/
#define IOleCacheControl_OnRun(This,pDataObject) \
    ((This)->lpVtbl->OnRun(This,pDataObject))
#define IOleCacheControl_OnStop(This) \
    ((This)->lpVtbl->OnStop(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleCacheControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IParseDisplayName interface
 */
#ifndef __IParseDisplayName_INTERFACE_DEFINED__
#define __IParseDisplayName_INTERFACE_DEFINED__

typedef IParseDisplayName *LPPARSEDISPLAYNAME;

EXTERN_C const IID IID_IParseDisplayName;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IParseDisplayNameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IParseDisplayName *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IParseDisplayName *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IParseDisplayName *This);

    /*** IParseDisplayName methods ***/
    HRESULT (STDMETHODCALLTYPE *ParseDisplayName)(
        IParseDisplayName *This,
        IBindCtx *pbc,
        LPOLESTR pszDisplayName,
        ULONG *pchEaten,
        IMoniker **ppmkOut);

    END_INTERFACE
} IParseDisplayNameVtbl;

interface IParseDisplayName {
    CONST_VTBL IParseDisplayNameVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IParseDisplayName_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IParseDisplayName_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IParseDisplayName_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IParseDisplayName methods ***/
#define IParseDisplayName_ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) \
    ((This)->lpVtbl->ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IParseDisplayName_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleContainer interface
 */
#ifndef __IOleContainer_INTERFACE_DEFINED__
#define __IOleContainer_INTERFACE_DEFINED__

typedef IOleContainer *LPOLECONTAINER;

EXTERN_C const IID IID_IOleContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleContainerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleContainer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleContainer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleContainer *This);

    /*** IParseDisplayName methods ***/
    HRESULT (STDMETHODCALLTYPE *ParseDisplayName)(
        IOleContainer *This,
        IBindCtx *pbc,
        LPOLESTR pszDisplayName,
        ULONG *pchEaten,
        IMoniker **ppmkOut);

    /*** IOleContainer methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumObjects)(
        IOleContainer *This,
        DWORD grfFlags,
        IEnumUnknown **ppenum);

    HRESULT (STDMETHODCALLTYPE *LockContainer)(
        IOleContainer *This,
        BOOL fLock);

    END_INTERFACE
} IOleContainerVtbl;

interface IOleContainer {
    CONST_VTBL IOleContainerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleContainer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleContainer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleContainer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IParseDisplayName methods ***/
#define IOleContainer_ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) \
    ((This)->lpVtbl->ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut))
/*** IOleContainer methods ***/
#define IOleContainer_EnumObjects(This,grfFlags,ppenum) \
    ((This)->lpVtbl->EnumObjects(This,grfFlags,ppenum))
#define IOleContainer_LockContainer(This,fLock) \
    ((This)->lpVtbl->LockContainer(This,fLock))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleContainer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleClientSite interface
 */
#ifndef __IOleClientSite_INTERFACE_DEFINED__
#define __IOleClientSite_INTERFACE_DEFINED__

typedef IOleClientSite *LPOLECLIENTSITE;

EXTERN_C const IID IID_IOleClientSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleClientSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleClientSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleClientSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleClientSite *This);

    /*** IOleClientSite methods ***/
    HRESULT (STDMETHODCALLTYPE *SaveObject)(
        IOleClientSite *This);

    HRESULT (STDMETHODCALLTYPE *GetMoniker)(
        IOleClientSite *This,
        DWORD dwAssign,
        DWORD dwWhichMoniker,
        IMoniker **ppmk);

    HRESULT (STDMETHODCALLTYPE *GetContainer)(
        IOleClientSite *This,
        IOleContainer **ppContainer);

    HRESULT (STDMETHODCALLTYPE *ShowObject)(
        IOleClientSite *This);

    HRESULT (STDMETHODCALLTYPE *OnShowWindow)(
        IOleClientSite *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *RequestNewObjectLayout)(
        IOleClientSite *This);

    END_INTERFACE
} IOleClientSiteVtbl;

interface IOleClientSite {
    CONST_VTBL IOleClientSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleClientSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleClientSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleClientSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleClientSite methods ***/
#define IOleClientSite_SaveObject(This) \
    ((This)->lpVtbl->SaveObject(This))
#define IOleClientSite_GetMoniker(This,dwAssign,dwWhichMoniker,ppmk) \
    ((This)->lpVtbl->GetMoniker(This,dwAssign,dwWhichMoniker,ppmk))
#define IOleClientSite_GetContainer(This,ppContainer) \
    ((This)->lpVtbl->GetContainer(This,ppContainer))
#define IOleClientSite_ShowObject(This) \
    ((This)->lpVtbl->ShowObject(This))
#define IOleClientSite_OnShowWindow(This,fShow) \
    ((This)->lpVtbl->OnShowWindow(This,fShow))
#define IOleClientSite_RequestNewObjectLayout(This) \
    ((This)->lpVtbl->RequestNewObjectLayout(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleClientSite_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleObject interface
 */
#ifndef __IOleObject_INTERFACE_DEFINED__
#define __IOleObject_INTERFACE_DEFINED__

typedef IOleObject *LPOLEOBJECT;

typedef enum tagOLEGETMONIKER {
    OLEGETMONIKER_ONLYIFTHERE = 1,
    OLEGETMONIKER_FORCEASSIGN = 2,
    OLEGETMONIKER_UNASSIGN = 3,
    OLEGETMONIKER_TEMPFORUSER = 4
} OLEGETMONIKER;

typedef enum tagOLEWHICHMK {
    OLEWHICHMK_CONTAINER = 1,
    OLEWHICHMK_OBJREL = 2,
    OLEWHICHMK_OBJFULL = 3
} OLEWHICHMK;

typedef enum tagUSERCLASSTYPE {
    USERCLASSTYPE_FULL = 1,
    USERCLASSTYPE_SHORT = 2,
    USERCLASSTYPE_APPNAME = 3
} USERCLASSTYPE;

typedef enum tagOLEMISC {
    OLEMISC_RECOMPOSEONRESIZE = 0x1,
    OLEMISC_ONLYICONIC = 0x2,
    OLEMISC_INSERTNOTREPLACE = 0x4,
    OLEMISC_STATIC = 0x8,
    OLEMISC_CANTLINKINSIDE = 0x10,
    OLEMISC_CANLINKBYOLE1 = 0x20,
    OLEMISC_ISLINKOBJECT = 0x40,
    OLEMISC_INSIDEOUT = 0x80,
    OLEMISC_ACTIVATEWHENVISIBLE = 0x100,
    OLEMISC_RENDERINGISDEVICEINDEPENDENT = 0x200,
    OLEMISC_INVISIBLEATRUNTIME = 0x400,
    OLEMISC_ALWAYSRUN = 0x800,
    OLEMISC_ACTSLIKEBUTTON = 0x1000,
    OLEMISC_ACTSLIKELABEL = 0x2000,
    OLEMISC_NOUIACTIVATE = 0x4000,
    OLEMISC_ALIGNABLE = 0x8000,
    OLEMISC_SIMPLEFRAME = 0x10000,
    OLEMISC_SETCLIENTSITEFIRST = 0x20000,
    OLEMISC_IMEMODE = 0x40000,
    OLEMISC_IGNOREACTIVATEWHENVISIBLE = 0x80000,
    OLEMISC_WANTSTOMENUMERGE = 0x100000,
    OLEMISC_SUPPORTSMULTILEVELUNDO = 0x200000
} OLEMISC;

typedef enum tagOLECLOSE {
    OLECLOSE_SAVEIFDIRTY = 0,
    OLECLOSE_NOSAVE = 1,
    OLECLOSE_PROMPTSAVE = 2
} OLECLOSE;

EXTERN_C const IID IID_IOleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleObject *This);

    /*** IOleObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetClientSite)(
        IOleObject *This,
        IOleClientSite *pClientSite);

    HRESULT (STDMETHODCALLTYPE *GetClientSite)(
        IOleObject *This,
        IOleClientSite **ppClientSite);

    HRESULT (STDMETHODCALLTYPE *SetHostNames)(
        IOleObject *This,
        LPCOLESTR szContainerApp,
        LPCOLESTR szContainerObj);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IOleObject *This,
        DWORD dwSaveOption);

    HRESULT (STDMETHODCALLTYPE *SetMoniker)(
        IOleObject *This,
        DWORD dwWhichMoniker,
        IMoniker *pmk);

    HRESULT (STDMETHODCALLTYPE *GetMoniker)(
        IOleObject *This,
        DWORD dwAssign,
        DWORD dwWhichMoniker,
        IMoniker **ppmk);

    HRESULT (STDMETHODCALLTYPE *InitFromData)(
        IOleObject *This,
        IDataObject *pDataObject,
        BOOL fCreation,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *GetClipboardData)(
        IOleObject *This,
        DWORD dwReserved,
        IDataObject **ppDataObject);

    HRESULT (STDMETHODCALLTYPE *DoVerb)(
        IOleObject *This,
        LONG iVerb,
        LPMSG lpmsg,
        IOleClientSite *pActiveSite,
        LONG lindex,
        HWND hwndParent,
        LPCRECT lprcPosRect);

    HRESULT (STDMETHODCALLTYPE *EnumVerbs)(
        IOleObject *This,
        IEnumOLEVERB **ppEnumOleVerb);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IOleObject *This);

    HRESULT (STDMETHODCALLTYPE *IsUpToDate)(
        IOleObject *This);

    HRESULT (STDMETHODCALLTYPE *GetUserClassID)(
        IOleObject *This,
        CLSID *pClsid);

    HRESULT (STDMETHODCALLTYPE *GetUserType)(
        IOleObject *This,
        DWORD dwFormOfType,
        LPOLESTR *pszUserType);

    HRESULT (STDMETHODCALLTYPE *SetExtent)(
        IOleObject *This,
        DWORD dwDrawAspect,
        SIZEL *psizel);

    HRESULT (STDMETHODCALLTYPE *GetExtent)(
        IOleObject *This,
        DWORD dwDrawAspect,
        SIZEL *psizel);

    HRESULT (STDMETHODCALLTYPE *Advise)(
        IOleObject *This,
        IAdviseSink *pAdvSink,
        DWORD *pdwConnection);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        IOleObject *This,
        DWORD dwConnection);

    HRESULT (STDMETHODCALLTYPE *EnumAdvise)(
        IOleObject *This,
        IEnumSTATDATA **ppenumAdvise);

    HRESULT (STDMETHODCALLTYPE *GetMiscStatus)(
        IOleObject *This,
        DWORD dwAspect,
        DWORD *pdwStatus);

    HRESULT (STDMETHODCALLTYPE *SetColorScheme)(
        IOleObject *This,
        LOGPALETTE *pLogpal);

    END_INTERFACE
} IOleObjectVtbl;

interface IOleObject {
    CONST_VTBL IOleObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleObject methods ***/
#define IOleObject_SetClientSite(This,pClientSite) \
    ((This)->lpVtbl->SetClientSite(This,pClientSite))
#define IOleObject_GetClientSite(This,ppClientSite) \
    ((This)->lpVtbl->GetClientSite(This,ppClientSite))
#define IOleObject_SetHostNames(This,szContainerApp,szContainerObj) \
    ((This)->lpVtbl->SetHostNames(This,szContainerApp,szContainerObj))
#define IOleObject_Close(This,dwSaveOption) \
    ((This)->lpVtbl->Close(This,dwSaveOption))
#define IOleObject_SetMoniker(This,dwWhichMoniker,pmk) \
    ((This)->lpVtbl->SetMoniker(This,dwWhichMoniker,pmk))
#define IOleObject_GetMoniker(This,dwAssign,dwWhichMoniker,ppmk) \
    ((This)->lpVtbl->GetMoniker(This,dwAssign,dwWhichMoniker,ppmk))
#define IOleObject_InitFromData(This,pDataObject,fCreation,dwReserved) \
    ((This)->lpVtbl->InitFromData(This,pDataObject,fCreation,dwReserved))
#define IOleObject_GetClipboardData(This,dwReserved,ppDataObject) \
    ((This)->lpVtbl->GetClipboardData(This,dwReserved,ppDataObject))
#define IOleObject_DoVerb(This,iVerb,lpmsg,pActiveSite,lindex,hwndParent,lprcPosRect) \
    ((This)->lpVtbl->DoVerb(This,iVerb,lpmsg,pActiveSite,lindex,hwndParent,lprcPosRect))
#define IOleObject_EnumVerbs(This,ppEnumOleVerb) \
    ((This)->lpVtbl->EnumVerbs(This,ppEnumOleVerb))
#define IOleObject_Update(This) \
    ((This)->lpVtbl->Update(This))
#define IOleObject_IsUpToDate(This) \
    ((This)->lpVtbl->IsUpToDate(This))
#define IOleObject_GetUserClassID(This,pClsid) \
    ((This)->lpVtbl->GetUserClassID(This,pClsid))
#define IOleObject_GetUserType(This,dwFormOfType,pszUserType) \
    ((This)->lpVtbl->GetUserType(This,dwFormOfType,pszUserType))
#define IOleObject_SetExtent(This,dwDrawAspect,psizel) \
    ((This)->lpVtbl->SetExtent(This,dwDrawAspect,psizel))
#define IOleObject_GetExtent(This,dwDrawAspect,psizel) \
    ((This)->lpVtbl->GetExtent(This,dwDrawAspect,psizel))
#define IOleObject_Advise(This,pAdvSink,pdwConnection) \
    ((This)->lpVtbl->Advise(This,pAdvSink,pdwConnection))
#define IOleObject_Unadvise(This,dwConnection) \
    ((This)->lpVtbl->Unadvise(This,dwConnection))
#define IOleObject_EnumAdvise(This,ppenumAdvise) \
    ((This)->lpVtbl->EnumAdvise(This,ppenumAdvise))
#define IOleObject_GetMiscStatus(This,dwAspect,pdwStatus) \
    ((This)->lpVtbl->GetMiscStatus(This,dwAspect,pdwStatus))
#define IOleObject_SetColorScheme(This,pLogpal) \
    ((This)->lpVtbl->SetColorScheme(This,pLogpal))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOLETypes interface (v0.0)
 */
#ifndef __IOLETypes_INTERFACE_DEFINED__
#define __IOLETypes_INTERFACE_DEFINED__

typedef enum tagOLERENDER {
    OLERENDER_NONE = 0,
    OLERENDER_DRAW = 1,
    OLERENDER_FORMAT = 2,
    OLERENDER_ASIS = 3
} OLERENDER;
typedef OLERENDER *LPOLERENDER;

typedef struct tagOBJECTDESCRIPTOR {
    ULONG cbSize;
    CLSID clsid;
    DWORD dwDrawAspect;
    SIZEL sizel;
    POINTL pointl;
    DWORD dwStatus;
    DWORD dwFullUserTypeName;
    DWORD dwSrcOfCopy;
} OBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *POBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *LPOBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR LINKSRCDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *PLINKSRCDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *LPLINKSRCDESCRIPTOR;

extern RPC_IF_HANDLE IOLETypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE IOLETypes_v0_0_s_ifspec;

#endif /* __IOLETypes_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleWindow interface
 */
#ifndef __IOleWindow_INTERFACE_DEFINED__
#define __IOleWindow_INTERFACE_DEFINED__

typedef IOleWindow *LPOLEWINDOW;

EXTERN_C const IID IID_IOleWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleWindowVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleWindow *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleWindow *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleWindow *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IOleWindow *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IOleWindow *This,
        BOOL fEnterMode);

    END_INTERFACE
} IOleWindowVtbl;

interface IOleWindow {
    CONST_VTBL IOleWindowVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleWindow_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleWindow_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleWindow_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IOleWindow_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IOleWindow_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleWindow_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleLink interface
 */
#ifndef __IOleLink_INTERFACE_DEFINED__
#define __IOleLink_INTERFACE_DEFINED__

typedef IOleLink *LPOLELINK;

typedef enum tagOLEUPDATE {
    OLEUPDATE_ALWAYS = 1,
    OLEUPDATE_ONCALL = 3
} OLEUPDATE;
typedef OLEUPDATE *LPOLEUPDATE;

typedef OLEUPDATE *POLEUPDATE;

typedef enum tagOLELINKBIND {
    OLELINKBIND_EVENIFCLASSDIFF = 1
} OLELINKBIND;

EXTERN_C const IID IID_IOleLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleLinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleLink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleLink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleLink *This);

    /*** IOleLink methods ***/
    HRESULT (STDMETHODCALLTYPE *SetUpdateOptions)(
        IOleLink *This,
        DWORD dwUpdateOpt);

    HRESULT (STDMETHODCALLTYPE *GetUpdateOptions)(
        IOleLink *This,
        DWORD *pdwUpdateOpt);

    HRESULT (STDMETHODCALLTYPE *SetSourceMoniker)(
        IOleLink *This,
        IMoniker *pmk,
        REFCLSID rclsid);

    HRESULT (STDMETHODCALLTYPE *GetSourceMoniker)(
        IOleLink *This,
        IMoniker **ppmk);

    HRESULT (STDMETHODCALLTYPE *SetSourceDisplayName)(
        IOleLink *This,
        LPCOLESTR pszStatusText);

    HRESULT (STDMETHODCALLTYPE *GetSourceDisplayName)(
        IOleLink *This,
        LPOLESTR *ppszDisplayName);

    HRESULT (STDMETHODCALLTYPE *BindToSource)(
        IOleLink *This,
        DWORD bindflags,
        IBindCtx *pbc);

    HRESULT (STDMETHODCALLTYPE *BindIfRunning)(
        IOleLink *This);

    HRESULT (STDMETHODCALLTYPE *GetBoundSource)(
        IOleLink *This,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *UnbindSource)(
        IOleLink *This);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IOleLink *This,
        IBindCtx *pbc);

    END_INTERFACE
} IOleLinkVtbl;

interface IOleLink {
    CONST_VTBL IOleLinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleLink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleLink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleLink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleLink methods ***/
#define IOleLink_SetUpdateOptions(This,dwUpdateOpt) \
    ((This)->lpVtbl->SetUpdateOptions(This,dwUpdateOpt))
#define IOleLink_GetUpdateOptions(This,pdwUpdateOpt) \
    ((This)->lpVtbl->GetUpdateOptions(This,pdwUpdateOpt))
#define IOleLink_SetSourceMoniker(This,pmk,rclsid) \
    ((This)->lpVtbl->SetSourceMoniker(This,pmk,rclsid))
#define IOleLink_GetSourceMoniker(This,ppmk) \
    ((This)->lpVtbl->GetSourceMoniker(This,ppmk))
#define IOleLink_SetSourceDisplayName(This,pszStatusText) \
    ((This)->lpVtbl->SetSourceDisplayName(This,pszStatusText))
#define IOleLink_GetSourceDisplayName(This,ppszDisplayName) \
    ((This)->lpVtbl->GetSourceDisplayName(This,ppszDisplayName))
#define IOleLink_BindToSource(This,bindflags,pbc) \
    ((This)->lpVtbl->BindToSource(This,bindflags,pbc))
#define IOleLink_BindIfRunning(This) \
    ((This)->lpVtbl->BindIfRunning(This))
#define IOleLink_GetBoundSource(This,ppunk) \
    ((This)->lpVtbl->GetBoundSource(This,ppunk))
#define IOleLink_UnbindSource(This) \
    ((This)->lpVtbl->UnbindSource(This))
#define IOleLink_Update(This,pbc) \
    ((This)->lpVtbl->Update(This,pbc))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleLink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleItemContainer interface
 */
#ifndef __IOleItemContainer_INTERFACE_DEFINED__
#define __IOleItemContainer_INTERFACE_DEFINED__

typedef IOleItemContainer *LPOLEITEMCONTAINER;

typedef enum tagBINDSPEED {
    BINDSPEED_INDEFINITE = 1,
    BINDSPEED_MODERATE = 2,
    BINDSPEED_IMMEDIATE = 3
} BINDSPEED;

typedef enum tagOLECONTF {
    OLECONTF_EMBEDDINGS = 1,
    OLECONTF_LINKS = 2,
    OLECONTF_OTHERS = 4,
    OLECONTF_ONLYUSER = 8,
    OLECONTF_ONLYIFRUNNING = 16
} OLECONTF;

EXTERN_C const IID IID_IOleItemContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleItemContainerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleItemContainer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleItemContainer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleItemContainer *This);

    /*** IParseDisplayName methods ***/
    HRESULT (STDMETHODCALLTYPE *ParseDisplayName)(
        IOleItemContainer *This,
        IBindCtx *pbc,
        LPOLESTR pszDisplayName,
        ULONG *pchEaten,
        IMoniker **ppmkOut);

    /*** IOleContainer methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumObjects)(
        IOleItemContainer *This,
        DWORD grfFlags,
        IEnumUnknown **ppenum);

    HRESULT (STDMETHODCALLTYPE *LockContainer)(
        IOleItemContainer *This,
        BOOL fLock);

    /*** IOleItemContainer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IOleItemContainer *This,
        LPOLESTR pszItem,
        DWORD dwSpeedNeeded,
        IBindCtx *pbc,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *GetObjectStorage)(
        IOleItemContainer *This,
        LPOLESTR pszItem,
        IBindCtx *pbc,
        REFIID riid,
        void **ppvStorage);

    HRESULT (STDMETHODCALLTYPE *IsRunning)(
        IOleItemContainer *This,
        LPOLESTR pszItem);

    END_INTERFACE
} IOleItemContainerVtbl;

interface IOleItemContainer {
    CONST_VTBL IOleItemContainerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleItemContainer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleItemContainer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleItemContainer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IParseDisplayName methods ***/
#define IOleItemContainer_ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) \
    ((This)->lpVtbl->ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut))
/*** IOleContainer methods ***/
#define IOleItemContainer_EnumObjects(This,grfFlags,ppenum) \
    ((This)->lpVtbl->EnumObjects(This,grfFlags,ppenum))
#define IOleItemContainer_LockContainer(This,fLock) \
    ((This)->lpVtbl->LockContainer(This,fLock))
/*** IOleItemContainer methods ***/
#define IOleItemContainer_GetObject(This,pszItem,dwSpeedNeeded,pbc,riid,ppvObject) \
    ((This)->lpVtbl->GetObject(This,pszItem,dwSpeedNeeded,pbc,riid,ppvObject))
#define IOleItemContainer_GetObjectStorage(This,pszItem,pbc,riid,ppvStorage) \
    ((This)->lpVtbl->GetObjectStorage(This,pszItem,pbc,riid,ppvStorage))
#define IOleItemContainer_IsRunning(This,pszItem) \
    ((This)->lpVtbl->IsRunning(This,pszItem))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleItemContainer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleInPlaceUIWindow interface
 */
#ifndef __IOleInPlaceUIWindow_INTERFACE_DEFINED__
#define __IOleInPlaceUIWindow_INTERFACE_DEFINED__

typedef IOleInPlaceUIWindow *LPOLEINPLACEUIWINDOW;

typedef RECT BORDERWIDTHS;

typedef LPRECT LPBORDERWIDTHS;

typedef LPCRECT LPCBORDERWIDTHS;

EXTERN_C const IID IID_IOleInPlaceUIWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleInPlaceUIWindowVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleInPlaceUIWindow *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleInPlaceUIWindow *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleInPlaceUIWindow *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IOleInPlaceUIWindow *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IOleInPlaceUIWindow *This,
        BOOL fEnterMode);

    /*** IOleInPlaceUIWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBorder)(
        IOleInPlaceUIWindow *This,
        LPRECT lprectBorder);

    HRESULT (STDMETHODCALLTYPE *RequestBorderSpace)(
        IOleInPlaceUIWindow *This,
        LPCBORDERWIDTHS pborderwidths);

    HRESULT (STDMETHODCALLTYPE *SetBorderSpace)(
        IOleInPlaceUIWindow *This,
        LPCBORDERWIDTHS pborderwidths);

    HRESULT (STDMETHODCALLTYPE *SetActiveObject)(
        IOleInPlaceUIWindow *This,
        IOleInPlaceActiveObject *pActiveObject,
        LPCOLESTR pszObjName);

    END_INTERFACE
} IOleInPlaceUIWindowVtbl;

interface IOleInPlaceUIWindow {
    CONST_VTBL IOleInPlaceUIWindowVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleInPlaceUIWindow_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleInPlaceUIWindow_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleInPlaceUIWindow_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IOleInPlaceUIWindow_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IOleInPlaceUIWindow_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IOleInPlaceUIWindow methods ***/
#define IOleInPlaceUIWindow_GetBorder(This,lprectBorder) \
    ((This)->lpVtbl->GetBorder(This,lprectBorder))
#define IOleInPlaceUIWindow_RequestBorderSpace(This,pborderwidths) \
    ((This)->lpVtbl->RequestBorderSpace(This,pborderwidths))
#define IOleInPlaceUIWindow_SetBorderSpace(This,pborderwidths) \
    ((This)->lpVtbl->SetBorderSpace(This,pborderwidths))
#define IOleInPlaceUIWindow_SetActiveObject(This,pActiveObject,pszObjName) \
    ((This)->lpVtbl->SetActiveObject(This,pActiveObject,pszObjName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleInPlaceUIWindow_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleInPlaceActiveObject interface
 */
#ifndef __IOleInPlaceActiveObject_INTERFACE_DEFINED__
#define __IOleInPlaceActiveObject_INTERFACE_DEFINED__

typedef IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;

EXTERN_C const IID IID_IOleInPlaceActiveObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleInPlaceActiveObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleInPlaceActiveObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleInPlaceActiveObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleInPlaceActiveObject *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IOleInPlaceActiveObject *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IOleInPlaceActiveObject *This,
        BOOL fEnterMode);

    /*** IOleInPlaceActiveObject methods ***/
    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IOleInPlaceActiveObject *This,
        LPMSG lpmsg);

    HRESULT (STDMETHODCALLTYPE *OnFrameWindowActivate)(
        IOleInPlaceActiveObject *This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *OnDocWindowActivate)(
        IOleInPlaceActiveObject *This,
        BOOL fActivate);

    HRESULT (STDMETHODCALLTYPE *ResizeBorder)(
        IOleInPlaceActiveObject *This,
        LPCRECT prcBorder,
        IOleInPlaceUIWindow *pUIWindow,
        BOOL fFrameWindow);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IOleInPlaceActiveObject *This,
        BOOL fEnable);

    END_INTERFACE
} IOleInPlaceActiveObjectVtbl;

interface IOleInPlaceActiveObject {
    CONST_VTBL IOleInPlaceActiveObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleInPlaceActiveObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleInPlaceActiveObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleInPlaceActiveObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IOleInPlaceActiveObject_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IOleInPlaceActiveObject_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IOleInPlaceActiveObject methods ***/
#define IOleInPlaceActiveObject_TranslateAccelerator(This,lpmsg) \
    ((This)->lpVtbl->TranslateAccelerator(This,lpmsg))
#define IOleInPlaceActiveObject_OnFrameWindowActivate(This,fActivate) \
    ((This)->lpVtbl->OnFrameWindowActivate(This,fActivate))
#define IOleInPlaceActiveObject_OnDocWindowActivate(This,fActivate) \
    ((This)->lpVtbl->OnDocWindowActivate(This,fActivate))
#define IOleInPlaceActiveObject_ResizeBorder(This,prcBorder,pUIWindow,fFrameWindow) \
    ((This)->lpVtbl->ResizeBorder(This,prcBorder,pUIWindow,fFrameWindow))
#define IOleInPlaceActiveObject_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteTranslateAccelerator_Proxy(
    IOleInPlaceActiveObject *This);

void __RPC_STUB IOleInPlaceActiveObject_RemoteTranslateAccelerator_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteResizeBorder_Proxy(
    IOleInPlaceActiveObject *This,
    LPCRECT prcBorder,
    REFIID riid,
    IOleInPlaceUIWindow *pUIWindow,
    BOOL fFrameWindow);

void __RPC_STUB IOleInPlaceActiveObject_RemoteResizeBorder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IOleInPlaceActiveObject_TranslateAccelerator_Proxy(
    LPMSG lpmsg);
HRESULT IOleInPlaceActiveObject_TranslateAccelerator_Stub(
    void);
HRESULT IOleInPlaceActiveObject_ResizeBorder_Proxy(
    LPCRECT prcBorder,
    IOleInPlaceUIWindow *pUIWindow,
    BOOL fFrameWindow);
HRESULT IOleInPlaceActiveObject_ResizeBorder_Stub(
    LPCRECT prcBorder,
    REFIID riid,
    IOleInPlaceUIWindow *pUIWindow,
    BOOL fFrameWindow);
#endif /* __IOleInPlaceActiveObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleInPlaceFrame interface
 */
#ifndef __IOleInPlaceFrame_INTERFACE_DEFINED__
#define __IOleInPlaceFrame_INTERFACE_DEFINED__

typedef IOleInPlaceFrame *LPOLEINPLACEFRAME;

typedef struct tagOIFI {
    UINT cb;
    BOOL fMDIApp;
    HWND hwndFrame;
    HACCEL haccel;
    UINT cAccelEntries;
} OLEINPLACEFRAMEINFO;
typedef struct tagOIFI *LPOLEINPLACEFRAMEINFO;

typedef struct tagOleMenuGroupWidths {
    LONG width[ 6 ];
} OLEMENUGROUPWIDTHS;
typedef struct tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;

typedef HGLOBAL HOLEMENU;

EXTERN_C const IID IID_IOleInPlaceFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleInPlaceFrameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleInPlaceFrame *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleInPlaceFrame *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleInPlaceFrame *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IOleInPlaceFrame *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IOleInPlaceFrame *This,
        BOOL fEnterMode);

    /*** IOleInPlaceUIWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBorder)(
        IOleInPlaceFrame *This,
        LPRECT lprectBorder);

    HRESULT (STDMETHODCALLTYPE *RequestBorderSpace)(
        IOleInPlaceFrame *This,
        LPCBORDERWIDTHS pborderwidths);

    HRESULT (STDMETHODCALLTYPE *SetBorderSpace)(
        IOleInPlaceFrame *This,
        LPCBORDERWIDTHS pborderwidths);

    HRESULT (STDMETHODCALLTYPE *SetActiveObject)(
        IOleInPlaceFrame *This,
        IOleInPlaceActiveObject *pActiveObject,
        LPCOLESTR pszObjName);

    /*** IOleInPlaceFrame methods ***/
    HRESULT (STDMETHODCALLTYPE *InsertMenus)(
        IOleInPlaceFrame *This,
        HMENU hmenuShared,
        LPOLEMENUGROUPWIDTHS lpMenuWidths);

    HRESULT (STDMETHODCALLTYPE *SetMenu)(
        IOleInPlaceFrame *This,
        HMENU hmenuShared,
        HOLEMENU holemenu,
        HWND hwndActiveObject);

    HRESULT (STDMETHODCALLTYPE *RemoveMenus)(
        IOleInPlaceFrame *This,
        HMENU hmenuShared);

    HRESULT (STDMETHODCALLTYPE *SetStatusText)(
        IOleInPlaceFrame *This,
        LPCOLESTR pszStatusText);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IOleInPlaceFrame *This,
        BOOL fEnable);

    HRESULT (STDMETHODCALLTYPE *TranslateAccelerator)(
        IOleInPlaceFrame *This,
        LPMSG lpmsg,
        WORD wID);

    END_INTERFACE
} IOleInPlaceFrameVtbl;

interface IOleInPlaceFrame {
    CONST_VTBL IOleInPlaceFrameVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleInPlaceFrame_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleInPlaceFrame_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleInPlaceFrame_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IOleInPlaceFrame_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IOleInPlaceFrame_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IOleInPlaceUIWindow methods ***/
#define IOleInPlaceFrame_GetBorder(This,lprectBorder) \
    ((This)->lpVtbl->GetBorder(This,lprectBorder))
#define IOleInPlaceFrame_RequestBorderSpace(This,pborderwidths) \
    ((This)->lpVtbl->RequestBorderSpace(This,pborderwidths))
#define IOleInPlaceFrame_SetBorderSpace(This,pborderwidths) \
    ((This)->lpVtbl->SetBorderSpace(This,pborderwidths))
#define IOleInPlaceFrame_SetActiveObject(This,pActiveObject,pszObjName) \
    ((This)->lpVtbl->SetActiveObject(This,pActiveObject,pszObjName))
/*** IOleInPlaceFrame methods ***/
#define IOleInPlaceFrame_InsertMenus(This,hmenuShared,lpMenuWidths) \
    ((This)->lpVtbl->InsertMenus(This,hmenuShared,lpMenuWidths))
#define IOleInPlaceFrame_SetMenu(This,hmenuShared,holemenu,hwndActiveObject) \
    ((This)->lpVtbl->SetMenu(This,hmenuShared,holemenu,hwndActiveObject))
#define IOleInPlaceFrame_RemoveMenus(This,hmenuShared) \
    ((This)->lpVtbl->RemoveMenus(This,hmenuShared))
#define IOleInPlaceFrame_SetStatusText(This,pszStatusText) \
    ((This)->lpVtbl->SetStatusText(This,pszStatusText))
#define IOleInPlaceFrame_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#define IOleInPlaceFrame_TranslateAccelerator(This,lpmsg,wID) \
    ((This)->lpVtbl->TranslateAccelerator(This,lpmsg,wID))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleInPlaceFrame_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleInPlaceObject interface
 */
#ifndef __IOleInPlaceObject_INTERFACE_DEFINED__
#define __IOleInPlaceObject_INTERFACE_DEFINED__

typedef IOleInPlaceObject *LPOLEINPLACEOBJECT;

EXTERN_C const IID IID_IOleInPlaceObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleInPlaceObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleInPlaceObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleInPlaceObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleInPlaceObject *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IOleInPlaceObject *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IOleInPlaceObject *This,
        BOOL fEnterMode);

    /*** IOleInPlaceObject methods ***/
    HRESULT (STDMETHODCALLTYPE *InPlaceDeactivate)(
        IOleInPlaceObject *This);

    HRESULT (STDMETHODCALLTYPE *UIDeactivate)(
        IOleInPlaceObject *This);

    HRESULT (STDMETHODCALLTYPE *SetObjectRects)(
        IOleInPlaceObject *This,
        LPCRECT lprcPosRect,
        LPCRECT lprcClipRect);

    HRESULT (STDMETHODCALLTYPE *ReactivateAndUndo)(
        IOleInPlaceObject *This);

    END_INTERFACE
} IOleInPlaceObjectVtbl;

interface IOleInPlaceObject {
    CONST_VTBL IOleInPlaceObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleInPlaceObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleInPlaceObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleInPlaceObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IOleInPlaceObject_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IOleInPlaceObject_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IOleInPlaceObject methods ***/
#define IOleInPlaceObject_InPlaceDeactivate(This) \
    ((This)->lpVtbl->InPlaceDeactivate(This))
#define IOleInPlaceObject_UIDeactivate(This) \
    ((This)->lpVtbl->UIDeactivate(This))
#define IOleInPlaceObject_SetObjectRects(This,lprcPosRect,lprcClipRect) \
    ((This)->lpVtbl->SetObjectRects(This,lprcPosRect,lprcClipRect))
#define IOleInPlaceObject_ReactivateAndUndo(This) \
    ((This)->lpVtbl->ReactivateAndUndo(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleInPlaceObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleInPlaceSite interface
 */
#ifndef __IOleInPlaceSite_INTERFACE_DEFINED__
#define __IOleInPlaceSite_INTERFACE_DEFINED__

typedef IOleInPlaceSite *LPOLEINPLACESITE;

EXTERN_C const IID IID_IOleInPlaceSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IOleInPlaceSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleInPlaceSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleInPlaceSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleInPlaceSite *This);

    /*** IOleWindow methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IOleInPlaceSite *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IOleInPlaceSite *This,
        BOOL fEnterMode);

    /*** IOleInPlaceSite methods ***/
    HRESULT (STDMETHODCALLTYPE *CanInPlaceActivate)(
        IOleInPlaceSite *This);

    HRESULT (STDMETHODCALLTYPE *OnInPlaceActivate)(
        IOleInPlaceSite *This);

    HRESULT (STDMETHODCALLTYPE *OnUIActivate)(
        IOleInPlaceSite *This);

    HRESULT (STDMETHODCALLTYPE *GetWindowContext)(
        IOleInPlaceSite *This,
        IOleInPlaceFrame **ppFrame,
        IOleInPlaceUIWindow **ppDoc,
        LPRECT lprcPosRect,
        LPRECT lprcClipRect,
        LPOLEINPLACEFRAMEINFO lpFrameInfo);

    HRESULT (STDMETHODCALLTYPE *Scroll)(
        IOleInPlaceSite *This,
        SIZE scrollExtant);

    HRESULT (STDMETHODCALLTYPE *OnUIDeactivate)(
        IOleInPlaceSite *This,
        BOOL fUndoable);

    HRESULT (STDMETHODCALLTYPE *OnInPlaceDeactivate)(
        IOleInPlaceSite *This);

    HRESULT (STDMETHODCALLTYPE *DiscardUndoState)(
        IOleInPlaceSite *This);

    HRESULT (STDMETHODCALLTYPE *DeactivateAndUndo)(
        IOleInPlaceSite *This);

    HRESULT (STDMETHODCALLTYPE *OnPosRectChange)(
        IOleInPlaceSite *This,
        LPCRECT lprcPosRect);

    END_INTERFACE
} IOleInPlaceSiteVtbl;

interface IOleInPlaceSite {
    CONST_VTBL IOleInPlaceSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IOleInPlaceSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IOleInPlaceSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IOleInPlaceSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IOleWindow methods ***/
#define IOleInPlaceSite_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IOleInPlaceSite_ContextSensitiveHelp(This,fEnterMode) \
    ((This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode))
/*** IOleInPlaceSite methods ***/
#define IOleInPlaceSite_CanInPlaceActivate(This) \
    ((This)->lpVtbl->CanInPlaceActivate(This))
#define IOleInPlaceSite_OnInPlaceActivate(This) \
    ((This)->lpVtbl->OnInPlaceActivate(This))
#define IOleInPlaceSite_OnUIActivate(This) \
    ((This)->lpVtbl->OnUIActivate(This))
#define IOleInPlaceSite_GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo) \
    ((This)->lpVtbl->GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo))
#define IOleInPlaceSite_Scroll(This,scrollExtant) \
    ((This)->lpVtbl->Scroll(This,scrollExtant))
#define IOleInPlaceSite_OnUIDeactivate(This,fUndoable) \
    ((This)->lpVtbl->OnUIDeactivate(This,fUndoable))
#define IOleInPlaceSite_OnInPlaceDeactivate(This) \
    ((This)->lpVtbl->OnInPlaceDeactivate(This))
#define IOleInPlaceSite_DiscardUndoState(This) \
    ((This)->lpVtbl->DiscardUndoState(This))
#define IOleInPlaceSite_DeactivateAndUndo(This) \
    ((This)->lpVtbl->DeactivateAndUndo(This))
#define IOleInPlaceSite_OnPosRectChange(This,lprcPosRect) \
    ((This)->lpVtbl->OnPosRectChange(This,lprcPosRect))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IOleInPlaceSite_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IContinue interface
 */
#ifndef __IContinue_INTERFACE_DEFINED__
#define __IContinue_INTERFACE_DEFINED__

EXTERN_C const IID IID_IContinue;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IContinueVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContinue *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContinue *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContinue *This);

    /*** IContinue methods ***/
    HRESULT (STDMETHODCALLTYPE *FContinue)(
        IContinue *This);

    END_INTERFACE
} IContinueVtbl;

interface IContinue {
    CONST_VTBL IContinueVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IContinue_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IContinue_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IContinue_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IContinue methods ***/
#define IContinue_FContinue(This) \
    ((This)->lpVtbl->FContinue(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IContinue_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IViewObject interface
 */
#ifndef __IViewObject_INTERFACE_DEFINED__
#define __IViewObject_INTERFACE_DEFINED__

typedef IViewObject *LPVIEWOBJECT;

EXTERN_C const IID IID_IViewObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IViewObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IViewObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IViewObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IViewObject *This);

    /*** IViewObject methods ***/
    HRESULT (STDMETHODCALLTYPE *Draw)(
        IViewObject *This,
        DWORD dwDrawAspect,
        LONG lindex,
        void *pvAspect,
        DVTARGETDEVICE *ptd,
        HDC hdcTargetDev,
        HDC hdcDraw,
        LPCRECTL lprcBounds,
        LPCRECTL lprcWBounds,
        BOOL (*pfnContinue)(
            ULONG_PTR dwContinue),
        ULONG_PTR dwContinue);

    HRESULT (STDMETHODCALLTYPE *GetColorSet)(
        IViewObject *This,
        DWORD dwDrawAspect,
        LONG lindex,
        void *pvAspect,
        DVTARGETDEVICE *ptd,
        HDC hicTargetDev,
        LOGPALETTE **ppColorSet);

    HRESULT (STDMETHODCALLTYPE *Freeze)(
        IViewObject *This,
        DWORD dwDrawAspect,
        LONG lindex,
        void *pvAspect,
        DWORD *pdwFreeze);

    HRESULT (STDMETHODCALLTYPE *Unfreeze)(
        IViewObject *This,
        DWORD dwFreeze);

    HRESULT (STDMETHODCALLTYPE *SetAdvise)(
        IViewObject *This,
        DWORD aspects,
        DWORD advf,
        IAdviseSink *pAdvSink);

    HRESULT (STDMETHODCALLTYPE *GetAdvise)(
        IViewObject *This,
        DWORD *pAspects,
        DWORD *pAdvf,
        IAdviseSink **ppAdvSink);

    END_INTERFACE
} IViewObjectVtbl;

interface IViewObject {
    CONST_VTBL IViewObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IViewObject_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IViewObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IViewObject_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IViewObject methods ***/
#define IViewObject_Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) \
    ((This)->lpVtbl->Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue))
#define IViewObject_GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) \
    ((This)->lpVtbl->GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet))
#define IViewObject_Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) \
    ((This)->lpVtbl->Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze))
#define IViewObject_Unfreeze(This,dwFreeze) \
    ((This)->lpVtbl->Unfreeze(This,dwFreeze))
#define IViewObject_SetAdvise(This,aspects,advf,pAdvSink) \
    ((This)->lpVtbl->SetAdvise(This,aspects,advf,pAdvSink))
#define IViewObject_GetAdvise(This,pAspects,pAdvf,ppAdvSink) \
    ((This)->lpVtbl->GetAdvise(This,pAspects,pAdvf,ppAdvSink))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IViewObject_RemoteDraw_Proxy(
    IViewObject *This,
    DWORD dwDrawAspect,
    LONG lindex,
    ULONG_PTR pvAspect,
    DVTARGETDEVICE *ptd,
    HDC hdcTargetDev,
    HDC hdcDraw,
    LPCRECTL lprcBounds,
    LPCRECTL lprcWBounds,
    IContinue *pContinue);

void __RPC_STUB IViewObject_RemoteDraw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetColorSet_Proxy(
    IViewObject *This,
    DWORD dwDrawAspect,
    LONG lindex,
    ULONG_PTR pvAspect,
    DVTARGETDEVICE *ptd,
    ULONG_PTR hicTargetDev,
    LOGPALETTE **ppColorSet);

void __RPC_STUB IViewObject_RemoteGetColorSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IViewObject_RemoteFreeze_Proxy(
    IViewObject *This,
    DWORD dwDrawAspect,
    LONG lindex,
    ULONG_PTR pvAspect,
    DWORD *pdwFreeze);

void __RPC_STUB IViewObject_RemoteFreeze_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetAdvise_Proxy(
    IViewObject *This,
    DWORD *pAspects,
    DWORD *pAdvf,
    IAdviseSink **ppAdvSink);

void __RPC_STUB IViewObject_RemoteGetAdvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IViewObject_Draw_Proxy(
    DWORD dwDrawAspect,
    LONG lindex,
    void *pvAspect,
    DVTARGETDEVICE *ptd,
    HDC hdcTargetDev,
    HDC hdcDraw,
    LPCRECTL lprcBounds,
    LPCRECTL lprcWBounds,
    BOOL (*pfnContinue)(
        ULONG_PTR dwContinue),
    ULONG_PTR dwContinue);
HRESULT IViewObject_Draw_Stub(
    DWORD dwDrawAspect,
    LONG lindex,
    ULONG_PTR pvAspect,
    DVTARGETDEVICE *ptd,
    HDC hdcTargetDev,
    HDC hdcDraw,
    LPCRECTL lprcBounds,
    LPCRECTL lprcWBounds,
    IContinue *pContinue);
HRESULT IViewObject_GetColorSet_Proxy(
    DWORD dwDrawAspect,
    LONG lindex,
    void *pvAspect,
    DVTARGETDEVICE *ptd,
    HDC hicTargetDev,
    LOGPALETTE **ppColorSet);
HRESULT IViewObject_GetColorSet_Stub(
    DWORD dwDrawAspect,
    LONG lindex,
    ULONG_PTR pvAspect,
    DVTARGETDEVICE *ptd,
    ULONG_PTR hicTargetDev,
    LOGPALETTE **ppColorSet);
HRESULT IViewObject_Freeze_Proxy(
    DWORD dwDrawAspect,
    LONG lindex,
    void *pvAspect,
    DWORD *pdwFreeze);
HRESULT IViewObject_Freeze_Stub(
    DWORD dwDrawAspect,
    LONG lindex,
    ULONG_PTR pvAspect,
    DWORD *pdwFreeze);
HRESULT IViewObject_GetAdvise_Proxy(
    DWORD *pAspects,
    DWORD *pAdvf,
    IAdviseSink **ppAdvSink);
HRESULT IViewObject_GetAdvise_Stub(
    DWORD *pAspects,
    DWORD *pAdvf,
    IAdviseSink **ppAdvSink);
#endif /* __IViewObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IViewObject2 interface
 */
#ifndef __IViewObject2_INTERFACE_DEFINED__
#define __IViewObject2_INTERFACE_DEFINED__

typedef IViewObject2 *LPVIEWOBJECT2;

EXTERN_C const IID IID_IViewObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IViewObject2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IViewObject2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IViewObject2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IViewObject2 *This);

    /*** IViewObject methods ***/
    HRESULT (STDMETHODCALLTYPE *Draw)(
        IViewObject2 *This,
        DWORD dwDrawAspect,
        LONG lindex,
        void *pvAspect,
        DVTARGETDEVICE *ptd,
        HDC hdcTargetDev,
        HDC hdcDraw,
        LPCRECTL lprcBounds,
        LPCRECTL lprcWBounds,
        BOOL (*pfnContinue)(
            ULONG_PTR dwContinue),
        ULONG_PTR dwContinue);

    HRESULT (STDMETHODCALLTYPE *GetColorSet)(
        IViewObject2 *This,
        DWORD dwDrawAspect,
        LONG lindex,
        void *pvAspect,
        DVTARGETDEVICE *ptd,
        HDC hicTargetDev,
        LOGPALETTE **ppColorSet);

    HRESULT (STDMETHODCALLTYPE *Freeze)(
        IViewObject2 *This,
        DWORD dwDrawAspect,
        LONG lindex,
        void *pvAspect,
        DWORD *pdwFreeze);

    HRESULT (STDMETHODCALLTYPE *Unfreeze)(
        IViewObject2 *This,
        DWORD dwFreeze);

    HRESULT (STDMETHODCALLTYPE *SetAdvise)(
        IViewObject2 *This,
        DWORD aspects,
        DWORD advf,
        IAdviseSink *pAdvSink);

    HRESULT (STDMETHODCALLTYPE *GetAdvise)(
        IViewObject2 *This,
        DWORD *pAspects,
        DWORD *pAdvf,
        IAdviseSink **ppAdvSink);

    /*** IViewObject2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetExtent)(
        IViewObject2 *This,
        DWORD dwDrawAspect,
        LONG lindex,
        DVTARGETDEVICE *ptd,
        LPSIZEL lpsizel);

    END_INTERFACE
} IViewObject2Vtbl;

interface IViewObject2 {
    CONST_VTBL IViewObject2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IViewObject2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IViewObject2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IViewObject2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IViewObject methods ***/
#define IViewObject2_Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) \
    ((This)->lpVtbl->Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue))
#define IViewObject2_GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) \
    ((This)->lpVtbl->GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet))
#define IViewObject2_Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) \
    ((This)->lpVtbl->Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze))
#define IViewObject2_Unfreeze(This,dwFreeze) \
    ((This)->lpVtbl->Unfreeze(This,dwFreeze))
#define IViewObject2_SetAdvise(This,aspects,advf,pAdvSink) \
    ((This)->lpVtbl->SetAdvise(This,aspects,advf,pAdvSink))
#define IViewObject2_GetAdvise(This,pAspects,pAdvf,ppAdvSink) \
    ((This)->lpVtbl->GetAdvise(This,pAspects,pAdvf,ppAdvSink))
/*** IViewObject2 methods ***/
#define IViewObject2_GetExtent(This,dwDrawAspect,lindex,ptd,lpsizel) \
    ((This)->lpVtbl->GetExtent(This,dwDrawAspect,lindex,ptd,lpsizel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IViewObject2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDropSource interface
 */
#ifndef __IDropSource_INTERFACE_DEFINED__
#define __IDropSource_INTERFACE_DEFINED__

typedef IDropSource *LPDROPSOURCE;

EXTERN_C const IID IID_IDropSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDropSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDropSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDropSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDropSource *This);

    /*** IDropSource methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryContinueDrag)(
        IDropSource *This,
        BOOL fEscapePressed,
        DWORD grfKeyState);

    HRESULT (STDMETHODCALLTYPE *GiveFeedback)(
        IDropSource *This,
        DWORD dwEffect);

    END_INTERFACE
} IDropSourceVtbl;

interface IDropSource {
    CONST_VTBL IDropSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDropSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDropSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDropSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDropSource methods ***/
#define IDropSource_QueryContinueDrag(This,fEscapePressed,grfKeyState) \
    ((This)->lpVtbl->QueryContinueDrag(This,fEscapePressed,grfKeyState))
#define IDropSource_GiveFeedback(This,dwEffect) \
    ((This)->lpVtbl->GiveFeedback(This,dwEffect))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDropSource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDropTarget interface
 */
#ifndef __IDropTarget_INTERFACE_DEFINED__
#define __IDropTarget_INTERFACE_DEFINED__

typedef IDropTarget *LPDROPTARGET;

#define MK_ALT  (0x20)

#define DROPEFFECT_NONE  (0)
#define DROPEFFECT_COPY  (1)
#define DROPEFFECT_MOVE  (2)
#define DROPEFFECT_LINK  (4)
#define DROPEFFECT_SCROLL  (0x80000000)

// default inset-width of the hot zone, in pixels
//   typical use: GetProfileInt("windows","DragScrollInset",DD_DEFSCROLLINSET)
#define DD_DEFSCROLLINSET  (11)

// default delay before scrolling, in milliseconds
//   typical use: GetProfileInt("windows","DragScrollDelay",DD_DEFSCROLLDELAY)
#define DD_DEFSCROLLDELAY  (50)

// default scroll interval, in milliseconds
//   typical use: GetProfileInt("windows","DragScrollInterval", DD_DEFSCROLLINTERVAL)
#define DD_DEFSCROLLINTERVAL  (50)

// default delay before dragging should start, in milliseconds
//   typical use: GetProfileInt("windows", "DragDelay", DD_DEFDRAGDELAY)
#define DD_DEFDRAGDELAY  (200)

// default minimum distance (radius) before dragging should start, in pixels
//   typical use: GetProfileInt("windows", "DragMinDist", DD_DEFDRAGMINDIST)
#define DD_DEFDRAGMINDIST  (2)

EXTERN_C const IID IID_IDropTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDropTargetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDropTarget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDropTarget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDropTarget *This);

    /*** IDropTarget methods ***/
    HRESULT (STDMETHODCALLTYPE *DragEnter)(
        IDropTarget *This,
        IDataObject *pDataObj,
        DWORD grfKeyState,
        POINTL pt,
        DWORD *pdwEffect);

    HRESULT (STDMETHODCALLTYPE *DragOver)(
        IDropTarget *This,
        DWORD grfKeyState,
        POINTL pt,
        DWORD *pdwEffect);

    HRESULT (STDMETHODCALLTYPE *DragLeave)(
        IDropTarget *This);

    HRESULT (STDMETHODCALLTYPE *Drop)(
        IDropTarget *This,
        IDataObject *pDataObj,
        DWORD grfKeyState,
        POINTL pt,
        DWORD *pdwEffect);

    END_INTERFACE
} IDropTargetVtbl;

interface IDropTarget {
    CONST_VTBL IDropTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDropTarget_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDropTarget_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDropTarget_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDropTarget methods ***/
#define IDropTarget_DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect) \
    ((This)->lpVtbl->DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect))
#define IDropTarget_DragOver(This,grfKeyState,pt,pdwEffect) \
    ((This)->lpVtbl->DragOver(This,grfKeyState,pt,pdwEffect))
#define IDropTarget_DragLeave(This) \
    ((This)->lpVtbl->DragLeave(This))
#define IDropTarget_Drop(This,pDataObj,grfKeyState,pt,pdwEffect) \
    ((This)->lpVtbl->Drop(This,pDataObj,grfKeyState,pt,pdwEffect))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDropTarget_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDropSourceNotify interface
 */
#ifndef __IDropSourceNotify_INTERFACE_DEFINED__
#define __IDropSourceNotify_INTERFACE_DEFINED__

EXTERN_C const IID IID_IDropSourceNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDropSourceNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDropSourceNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDropSourceNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDropSourceNotify *This);

    /*** IDropSourceNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *DragEnterTarget)(
        IDropSourceNotify *This,
        HWND hwndTarget);

    HRESULT (STDMETHODCALLTYPE *DragLeaveTarget)(
        IDropSourceNotify *This);

    END_INTERFACE
} IDropSourceNotifyVtbl;

interface IDropSourceNotify {
    CONST_VTBL IDropSourceNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDropSourceNotify_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDropSourceNotify_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDropSourceNotify_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDropSourceNotify methods ***/
#define IDropSourceNotify_DragEnterTarget(This,hwndTarget) \
    ((This)->lpVtbl->DragEnterTarget(This,hwndTarget))
#define IDropSourceNotify_DragLeaveTarget(This) \
    ((This)->lpVtbl->DragLeaveTarget(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDropSourceNotify_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnterpriseDropTarget interface
 */
#ifndef __IEnterpriseDropTarget_INTERFACE_DEFINED__
#define __IEnterpriseDropTarget_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnterpriseDropTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnterpriseDropTargetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnterpriseDropTarget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnterpriseDropTarget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnterpriseDropTarget *This);

    /*** IEnterpriseDropTarget methods ***/
    HRESULT (STDMETHODCALLTYPE *SetDropSourceEnterpriseId)(
        IEnterpriseDropTarget *This,
        LPCWSTR identity);

    HRESULT (STDMETHODCALLTYPE *IsEvaluatingEdpPolicy)(
        IEnterpriseDropTarget *This,
        BOOL *value);

    END_INTERFACE
} IEnterpriseDropTargetVtbl;

interface IEnterpriseDropTarget {
    CONST_VTBL IEnterpriseDropTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnterpriseDropTarget_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnterpriseDropTarget_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnterpriseDropTarget_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnterpriseDropTarget methods ***/
#define IEnterpriseDropTarget_SetDropSourceEnterpriseId(This,identity) \
    ((This)->lpVtbl->SetDropSourceEnterpriseId(This,identity))
#define IEnterpriseDropTarget_IsEvaluatingEdpPolicy(This,value) \
    ((This)->lpVtbl->IsEvaluatingEdpPolicy(This,value))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnterpriseDropTarget_INTERFACE_DEFINED__ */

#define CFSTR_ENTERPRISE_ID (TEXT("EnterpriseDataProtectionId"))

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IEnumOLEVERB interface
 */
#ifndef __IEnumOLEVERB_INTERFACE_DEFINED__
#define __IEnumOLEVERB_INTERFACE_DEFINED__

typedef IEnumOLEVERB *LPENUMOLEVERB;

typedef struct tagOLEVERB {
    LONG lVerb;
    LPOLESTR lpszVerbName;
    DWORD fuFlags;
    DWORD grfAttribs;
} OLEVERB;
typedef struct tagOLEVERB *LPOLEVERB;

typedef enum tagOLEVERBATTRIB {
    OLEVERBATTRIB_NEVERDIRTIES = 1,
    OLEVERBATTRIB_ONCONTAINERMENU = 2
} OLEVERBATTRIB;

EXTERN_C const IID IID_IEnumOLEVERB;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumOLEVERBVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumOLEVERB *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumOLEVERB *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumOLEVERB *This);

    /*** IEnumOLEVERB methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumOLEVERB *This,
        ULONG celt,
        LPOLEVERB rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumOLEVERB *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumOLEVERB *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumOLEVERB *This,
        IEnumOLEVERB **ppenum);

    END_INTERFACE
} IEnumOLEVERBVtbl;

interface IEnumOLEVERB {
    CONST_VTBL IEnumOLEVERBVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumOLEVERB_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumOLEVERB_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumOLEVERB_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumOLEVERB methods ***/
#define IEnumOLEVERB_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumOLEVERB_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumOLEVERB_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumOLEVERB_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumOLEVERB_RemoteNext_Proxy(
    IEnumOLEVERB *This,
    ULONG celt,
    LPOLEVERB rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumOLEVERB_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumOLEVERB_Next_Proxy(
    ULONG celt,
    LPOLEVERB rgelt,
    ULONG *pceltFetched);
HRESULT IEnumOLEVERB_Next_Stub(
    ULONG celt,
    LPOLEVERB rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumOLEVERB_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER CLIPFORMAT_UserSize(ULONG *, ULONG, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal(ULONG *, unsigned char *, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(ULONG *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(ULONG *, CLIPFORMAT *);
ULONG __RPC_USER STGMEDIUM_UserSize(ULONG *, ULONG, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserMarshal(ULONG *, unsigned char *, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(ULONG *, STGMEDIUM *);
ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);
ULONG __RPC_USER HMENU_UserSize(ULONG *, ULONG, HMENU *);
unsigned char * __RPC_USER HMENU_UserMarshal(ULONG *, unsigned char *, HMENU *);
unsigned char * __RPC_USER HMENU_UserUnmarshal(ULONG *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(ULONG *, HMENU *);
ULONG __RPC_USER HGLOBAL_UserSize(ULONG *, ULONG, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserMarshal(ULONG *, unsigned char *, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserUnmarshal(ULONG *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree(ULONG *, HGLOBAL *);
ULONG __RPC_USER HACCEL_UserSize(ULONG *, ULONG, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserMarshal(ULONG *, unsigned char *, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserUnmarshal(ULONG *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree(ULONG *, HACCEL *);
ULONG __RPC_USER HDC_UserSize(ULONG *, ULONG, HDC *);
unsigned char * __RPC_USER HDC_UserMarshal(ULONG *, unsigned char *, HDC *);
unsigned char * __RPC_USER HDC_UserUnmarshal(ULONG *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree(ULONG *, HDC *);

/* End additional prototypes for all interfaces */

#endif /* __oleidl_h__ */
