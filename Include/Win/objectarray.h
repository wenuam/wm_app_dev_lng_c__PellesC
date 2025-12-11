/* Generated from objectarray.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __objectarray_h__
#define __objectarray_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IObjectArray_FWD_DEFINED__
#define __IObjectArray_FWD_DEFINED__
typedef interface IObjectArray IObjectArray;
#endif /* __IObjectArray_FWD_DEFINED__ */

#ifndef __IObjectCollection_FWD_DEFINED__
#define __IObjectCollection_FWD_DEFINED__
typedef interface IObjectCollection IObjectCollection;
#endif /* __IObjectCollection_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IObjectArray interface
 */
#ifndef __IObjectArray_INTERFACE_DEFINED__
#define __IObjectArray_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectArrayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectArray *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectArray *This);

    /*** IObjectArray methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IObjectArray *This,
        UINT *pcObjects);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IObjectArray *This,
        UINT uiIndex,
        REFIID riid,
        void **ppv);

    END_INTERFACE
} IObjectArrayVtbl;

interface IObjectArray {
    CONST_VTBL IObjectArrayVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectArray_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectArray_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectArray_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectArray methods ***/
#define IObjectArray_GetCount(This,pcObjects) \
    ((This)->lpVtbl->GetCount(This,pcObjects))
#define IObjectArray_GetAt(This,uiIndex,riid,ppv) \
    ((This)->lpVtbl->GetAt(This,uiIndex,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectArray_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IObjectCollection interface
 */
#ifndef __IObjectCollection_INTERFACE_DEFINED__
#define __IObjectCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IObjectCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IObjectCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IObjectCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IObjectCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IObjectCollection *This);

    /*** IObjectArray methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IObjectCollection *This,
        UINT *pcObjects);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IObjectCollection *This,
        UINT uiIndex,
        REFIID riid,
        void **ppv);

    /*** IObjectCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *AddObject)(
        IObjectCollection *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *AddFromArray)(
        IObjectCollection *This,
        IObjectArray *poaSource);

    HRESULT (STDMETHODCALLTYPE *RemoveObjectAt)(
        IObjectCollection *This,
        UINT uiIndex);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IObjectCollection *This);

    END_INTERFACE
} IObjectCollectionVtbl;

interface IObjectCollection {
    CONST_VTBL IObjectCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IObjectCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IObjectCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IObjectCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IObjectArray methods ***/
#define IObjectCollection_GetCount(This,pcObjects) \
    ((This)->lpVtbl->GetCount(This,pcObjects))
#define IObjectCollection_GetAt(This,uiIndex,riid,ppv) \
    ((This)->lpVtbl->GetAt(This,uiIndex,riid,ppv))
/*** IObjectCollection methods ***/
#define IObjectCollection_AddObject(This,punk) \
    ((This)->lpVtbl->AddObject(This,punk))
#define IObjectCollection_AddFromArray(This,poaSource) \
    ((This)->lpVtbl->AddFromArray(This,poaSource))
#define IObjectCollection_RemoveObjectAt(This,uiIndex) \
    ((This)->lpVtbl->RemoveObjectAt(This,uiIndex))
#define IObjectCollection_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IObjectCollection_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __objectarray_h__ */
