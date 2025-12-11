/* Generated from comcat.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __comcat_h__
#define __comcat_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IEnumGUID_FWD_DEFINED__
#define __IEnumGUID_FWD_DEFINED__
typedef interface IEnumGUID IEnumGUID;
#endif /* __IEnumGUID_FWD_DEFINED__ */

#ifndef __IEnumCATEGORYINFO_FWD_DEFINED__
#define __IEnumCATEGORYINFO_FWD_DEFINED__
typedef interface IEnumCATEGORYINFO IEnumCATEGORYINFO;
#endif /* __IEnumCATEGORYINFO_FWD_DEFINED__ */

#ifndef __ICatRegister_FWD_DEFINED__
#define __ICatRegister_FWD_DEFINED__
typedef interface ICatRegister ICatRegister;
#endif /* __ICatRegister_FWD_DEFINED__ */

#ifndef __ICatInformation_FWD_DEFINED__
#define __ICatInformation_FWD_DEFINED__
typedef interface ICatInformation ICatInformation;
#endif /* __ICatInformation_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwn.h"

#pragma comment(lib,"uuid.lib")

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


#ifndef __IEnumGUID_FWD_DEFINED__
#define __IEnumGUID_FWD_DEFINED__
typedef interface IEnumGUID IEnumGUID;
#endif /* __IEnumGUID_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef __IEnumCATEGORYINFO_FWD_DEFINED__
#define __IEnumCATEGORYINFO_FWD_DEFINED__
typedef interface IEnumCATEGORYINFO IEnumCATEGORYINFO;
#endif /* __IEnumCATEGORYINFO_FWD_DEFINED__ */

#ifndef __ICatRegister_FWD_DEFINED__
#define __ICatRegister_FWD_DEFINED__
typedef interface ICatRegister ICatRegister;
#endif /* __ICatRegister_FWD_DEFINED__ */

#ifndef __ICatInformation_FWD_DEFINED__
#define __ICatInformation_FWD_DEFINED__
typedef interface ICatInformation ICatInformation;
#endif /* __ICatInformation_FWD_DEFINED__ */
EXTERN_C const CLSID CLSID_StdComponentCategoriesMgr;

////////////////////////////////////////////////////////////////////////////
//  Types

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef GUID CATID;
typedef REFGUID REFCATID;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define IID_IEnumCLSID              IID_IEnumGUID
#define IEnumCLSID                  IEnumGUID
#define LPENUMCLSID                 LPENUMGUID

#define CATID_NULL                   GUID_NULL
#define IsEqualCATID(rcatid1, rcatid2)       IsEqualGUID(rcatid1, rcatid2)
#define IID_IEnumCATID       IID_IEnumGUID
#define IEnumCATID           IEnumGUID

////////////////////////////////////////////////////////////////////////////
//  Category IDs (link to uuid3.lib)
EXTERN_C const CATID CATID_Insertable;
EXTERN_C const CATID CATID_Control;
EXTERN_C const CATID CATID_Programmable;
EXTERN_C const CATID CATID_IsShortcut;
EXTERN_C const CATID CATID_NeverShowExt;
EXTERN_C const CATID CATID_DocObject;
EXTERN_C const CATID CATID_Printable;
EXTERN_C const CATID CATID_RequiresDataPathHost;
EXTERN_C const CATID CATID_PersistsToMoniker;
EXTERN_C const CATID CATID_PersistsToStorage;
EXTERN_C const CATID CATID_PersistsToStreamInit;
EXTERN_C const CATID CATID_PersistsToStream;
EXTERN_C const CATID CATID_PersistsToMemory;
EXTERN_C const CATID CATID_PersistsToFile;
EXTERN_C const CATID CATID_PersistsToPropertyBag;
EXTERN_C const CATID CATID_InternetAware;
EXTERN_C const CATID CATID_DesignTimeUIActivatableControl;

////////////////////////////////////////////////////////////////////////////
//  Interface Definitions

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#ifndef _LPENUMGUID_DEFINED
#define _LPENUMGUID_DEFINED

/*****************************************************************************
 * IEnumGUID interface
 */
#ifndef __IEnumGUID_INTERFACE_DEFINED__
#define __IEnumGUID_INTERFACE_DEFINED__

typedef IEnumGUID *LPENUMGUID;

EXTERN_C const IID IID_IEnumGUID;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumGUIDVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumGUID *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumGUID *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumGUID *This);

    /*** IEnumGUID methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumGUID *This,
        ULONG celt,
        GUID *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumGUID *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumGUID *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumGUID *This,
        IEnumGUID **ppenum);

    END_INTERFACE
} IEnumGUIDVtbl;

interface IEnumGUID {
    CONST_VTBL IEnumGUIDVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumGUID_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumGUID_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumGUID_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumGUID methods ***/
#define IEnumGUID_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumGUID_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumGUID_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumGUID_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumGUID_RemoteNext_Proxy(
    IEnumGUID *This,
    ULONG celt,
    GUID *rgelt,
    ULONG *pceltFetched);

void __RPC_STUB IEnumGUID_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumGUID_Next_Proxy(
    ULONG celt,
    GUID *rgelt,
    ULONG *pceltFetched);
HRESULT IEnumGUID_Next_Stub(
    ULONG celt,
    GUID *rgelt,
    ULONG *pceltFetched);
#endif /* __IEnumGUID_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _LPENUMCATEGORYINFO_DEFINED
#define _LPENUMCATEGORYINFO_DEFINED

/*****************************************************************************
 * IEnumCATEGORYINFO interface
 */
#ifndef __IEnumCATEGORYINFO_INTERFACE_DEFINED__
#define __IEnumCATEGORYINFO_INTERFACE_DEFINED__

typedef IEnumCATEGORYINFO *LPENUMCATEGORYINFO;

typedef struct tagCATEGORYINFO {
    CATID catid;
    LCID lcid;
    OLECHAR szDescription[ 128 ];
} CATEGORYINFO;
typedef struct tagCATEGORYINFO *LPCATEGORYINFO;

EXTERN_C const IID IID_IEnumCATEGORYINFO;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumCATEGORYINFOVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumCATEGORYINFO *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumCATEGORYINFO *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumCATEGORYINFO *This);

    /*** IEnumCATEGORYINFO methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumCATEGORYINFO *This,
        ULONG celt,
        CATEGORYINFO *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumCATEGORYINFO *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumCATEGORYINFO *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumCATEGORYINFO *This,
        IEnumCATEGORYINFO **ppenum);

    END_INTERFACE
} IEnumCATEGORYINFOVtbl;

interface IEnumCATEGORYINFO {
    CONST_VTBL IEnumCATEGORYINFOVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumCATEGORYINFO_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumCATEGORYINFO_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumCATEGORYINFO_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumCATEGORYINFO methods ***/
#define IEnumCATEGORYINFO_Next(This,celt,rgelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgelt,pceltFetched))
#define IEnumCATEGORYINFO_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumCATEGORYINFO_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumCATEGORYINFO_Clone(This,ppenum) \
    ((This)->lpVtbl->Clone(This,ppenum))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumCATEGORYINFO_INTERFACE_DEFINED__ */

#endif

#ifndef _LPCATREGISTER_DEFINED
#define _LPCATREGISTER_DEFINED

/*****************************************************************************
 * ICatRegister interface
 */
#ifndef __ICatRegister_INTERFACE_DEFINED__
#define __ICatRegister_INTERFACE_DEFINED__

typedef ICatRegister *LPCATREGISTER;

EXTERN_C const IID IID_ICatRegister;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICatRegisterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICatRegister *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICatRegister *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICatRegister *This);

    /*** ICatRegister methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterCategories)(
        ICatRegister *This,
        ULONG cCategories,
        CATEGORYINFO *rgCategoryInfo);

    HRESULT (STDMETHODCALLTYPE *UnRegisterCategories)(
        ICatRegister *This,
        ULONG cCategories,
        CATID *rgcatid);

    HRESULT (STDMETHODCALLTYPE *RegisterClassImplCategories)(
        ICatRegister *This,
        REFCLSID rclsid,
        ULONG cCategories,
        CATID *rgcatid);

    HRESULT (STDMETHODCALLTYPE *UnRegisterClassImplCategories)(
        ICatRegister *This,
        REFCLSID rclsid,
        ULONG cCategories,
        CATID *rgcatid);

    HRESULT (STDMETHODCALLTYPE *RegisterClassReqCategories)(
        ICatRegister *This,
        REFCLSID rclsid,
        ULONG cCategories,
        CATID *rgcatid);

    HRESULT (STDMETHODCALLTYPE *UnRegisterClassReqCategories)(
        ICatRegister *This,
        REFCLSID rclsid,
        ULONG cCategories,
        CATID *rgcatid);

    END_INTERFACE
} ICatRegisterVtbl;

interface ICatRegister {
    CONST_VTBL ICatRegisterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICatRegister_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICatRegister_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICatRegister_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICatRegister methods ***/
#define ICatRegister_RegisterCategories(This,cCategories,rgCategoryInfo) \
    ((This)->lpVtbl->RegisterCategories(This,cCategories,rgCategoryInfo))
#define ICatRegister_UnRegisterCategories(This,cCategories,rgcatid) \
    ((This)->lpVtbl->UnRegisterCategories(This,cCategories,rgcatid))
#define ICatRegister_RegisterClassImplCategories(This,rclsid,cCategories,rgcatid) \
    ((This)->lpVtbl->RegisterClassImplCategories(This,rclsid,cCategories,rgcatid))
#define ICatRegister_UnRegisterClassImplCategories(This,rclsid,cCategories,rgcatid) \
    ((This)->lpVtbl->UnRegisterClassImplCategories(This,rclsid,cCategories,rgcatid))
#define ICatRegister_RegisterClassReqCategories(This,rclsid,cCategories,rgcatid) \
    ((This)->lpVtbl->RegisterClassReqCategories(This,rclsid,cCategories,rgcatid))
#define ICatRegister_UnRegisterClassReqCategories(This,rclsid,cCategories,rgcatid) \
    ((This)->lpVtbl->UnRegisterClassReqCategories(This,rclsid,cCategories,rgcatid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICatRegister_INTERFACE_DEFINED__ */

#endif

#ifndef _LPCATINFORMATION_DEFINED
#define _LPCATINFORMATION_DEFINED

/*****************************************************************************
 * ICatInformation interface
 */
#ifndef __ICatInformation_INTERFACE_DEFINED__
#define __ICatInformation_INTERFACE_DEFINED__

typedef ICatInformation *LPCATINFORMATION;

EXTERN_C const IID IID_ICatInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICatInformationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICatInformation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICatInformation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICatInformation *This);

    /*** ICatInformation methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumCategories)(
        ICatInformation *This,
        LCID lcid,
        IEnumCATEGORYINFO **ppenumCategoryInfo);

    HRESULT (STDMETHODCALLTYPE *GetCategoryDesc)(
        ICatInformation *This,
        REFCATID rcatid,
        LCID lcid,
        LPWSTR *pszDesc);

    HRESULT (STDMETHODCALLTYPE *EnumClassesOfCategories)(
        ICatInformation *This,
        ULONG cImplemented,
        const CATID *rgcatidImpl,
        ULONG cRequired,
        const CATID *rgcatidReq,
        IEnumGUID **ppenumClsid);

    HRESULT (STDMETHODCALLTYPE *IsClassOfCategories)(
        ICatInformation *This,
        REFCLSID rclsid,
        ULONG cImplemented,
        const CATID *rgcatidImpl,
        ULONG cRequired,
        const CATID *rgcatidReq);

    HRESULT (STDMETHODCALLTYPE *EnumImplCategoriesOfClass)(
        ICatInformation *This,
        REFCLSID rclsid,
        IEnumGUID **ppenumCatid);

    HRESULT (STDMETHODCALLTYPE *EnumReqCategoriesOfClass)(
        ICatInformation *This,
        REFCLSID rclsid,
        IEnumGUID **ppenumCatid);

    END_INTERFACE
} ICatInformationVtbl;

interface ICatInformation {
    CONST_VTBL ICatInformationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICatInformation_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICatInformation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICatInformation_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICatInformation methods ***/
#define ICatInformation_EnumCategories(This,lcid,ppenumCategoryInfo) \
    ((This)->lpVtbl->EnumCategories(This,lcid,ppenumCategoryInfo))
#define ICatInformation_GetCategoryDesc(This,rcatid,lcid,pszDesc) \
    ((This)->lpVtbl->GetCategoryDesc(This,rcatid,lcid,pszDesc))
#define ICatInformation_EnumClassesOfCategories(This,cImplemented,rgcatidImpl,cRequired,rgcatidReq,ppenumClsid) \
    ((This)->lpVtbl->EnumClassesOfCategories(This,cImplemented,rgcatidImpl,cRequired,rgcatidReq,ppenumClsid))
#define ICatInformation_IsClassOfCategories(This,rclsid,cImplemented,rgcatidImpl,cRequired,rgcatidReq) \
    ((This)->lpVtbl->IsClassOfCategories(This,rclsid,cImplemented,rgcatidImpl,cRequired,rgcatidReq))
#define ICatInformation_EnumImplCategoriesOfClass(This,rclsid,ppenumCatid) \
    ((This)->lpVtbl->EnumImplCategoriesOfClass(This,rclsid,ppenumCatid))
#define ICatInformation_EnumReqCategoriesOfClass(This,rclsid,ppenumCatid) \
    ((This)->lpVtbl->EnumReqCategoriesOfClass(This,rclsid,ppenumCatid))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ICatInformation_RemoteEnumClassesOfCategories_Proxy(
    ICatInformation *This,
    ULONG cImplemented,
    const CATID *rgcatidImpl,
    ULONG cRequired,
    const CATID *rgcatidReq,
    IEnumGUID **ppenumClsid);

void __RPC_STUB ICatInformation_RemoteEnumClassesOfCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ICatInformation_RemoteIsClassOfCategories_Proxy(
    ICatInformation *This,
    REFCLSID rclsid,
    ULONG cImplemented,
    const CATID *rgcatidImpl,
    ULONG cRequired,
    const CATID *rgcatidReq);

void __RPC_STUB ICatInformation_RemoteIsClassOfCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ICatInformation_EnumClassesOfCategories_Proxy(
    ULONG cImplemented,
    const CATID *rgcatidImpl,
    ULONG cRequired,
    const CATID *rgcatidReq,
    IEnumGUID **ppenumClsid);
HRESULT ICatInformation_EnumClassesOfCategories_Stub(
    ULONG cImplemented,
    const CATID *rgcatidImpl,
    ULONG cRequired,
    const CATID *rgcatidReq,
    IEnumGUID **ppenumClsid);
HRESULT ICatInformation_IsClassOfCategories_Proxy(
    REFCLSID rclsid,
    ULONG cImplemented,
    const CATID *rgcatidImpl,
    ULONG cRequired,
    const CATID *rgcatidReq);
HRESULT ICatInformation_IsClassOfCategories_Stub(
    REFCLSID rclsid,
    ULONG cImplemented,
    const CATID *rgcatidImpl,
    ULONG cRequired,
    const CATID *rgcatidReq);
#endif /* __ICatInformation_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __comcat_h__ */
