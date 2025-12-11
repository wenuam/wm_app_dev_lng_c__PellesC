/* Generated from portabledevicetypes.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __portabledevicetypes_h__
#define __portabledevicetypes_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IWpdSerializer_FWD_DEFINED__
#define __IWpdSerializer_FWD_DEFINED__
typedef interface IWpdSerializer IWpdSerializer;
#endif /* __IWpdSerializer_FWD_DEFINED__ */

#ifndef __IPortableDeviceValues_FWD_DEFINED__
#define __IPortableDeviceValues_FWD_DEFINED__
typedef interface IPortableDeviceValues IPortableDeviceValues;
#endif /* __IPortableDeviceValues_FWD_DEFINED__ */

#ifndef __IPortableDeviceKeyCollection_FWD_DEFINED__
#define __IPortableDeviceKeyCollection_FWD_DEFINED__
typedef interface IPortableDeviceKeyCollection IPortableDeviceKeyCollection;
#endif /* __IPortableDeviceKeyCollection_FWD_DEFINED__ */

#ifndef __IPortableDevicePropVariantCollection_FWD_DEFINED__
#define __IPortableDevicePropVariantCollection_FWD_DEFINED__
typedef interface IPortableDevicePropVariantCollection IPortableDevicePropVariantCollection;
#endif /* __IPortableDevicePropVariantCollection_FWD_DEFINED__ */

#ifndef __IPortableDeviceValuesCollection_FWD_DEFINED__
#define __IPortableDeviceValuesCollection_FWD_DEFINED__
typedef interface IPortableDeviceValuesCollection IPortableDeviceValuesCollection;
#endif /* __IPortableDeviceValuesCollection_FWD_DEFINED__ */

#ifndef __WpdSerializer_FWD_DEFINED__
#define __WpdSerializer_FWD_DEFINED__
typedef struct WpdSerializer WpdSerializer;
#endif /* __WpdSerializer_FWD_DEFINED__ */

#ifndef __PortableDeviceValues_FWD_DEFINED__
#define __PortableDeviceValues_FWD_DEFINED__
typedef struct PortableDeviceValues PortableDeviceValues;
#endif /* __PortableDeviceValues_FWD_DEFINED__ */

#ifndef __PortableDeviceKeyCollection_FWD_DEFINED__
#define __PortableDeviceKeyCollection_FWD_DEFINED__
typedef struct PortableDeviceKeyCollection PortableDeviceKeyCollection;
#endif /* __PortableDeviceKeyCollection_FWD_DEFINED__ */

#ifndef __PortableDevicePropVariantCollection_FWD_DEFINED__
#define __PortableDevicePropVariantCollection_FWD_DEFINED__
typedef struct PortableDevicePropVariantCollection PortableDevicePropVariantCollection;
#endif /* __PortableDevicePropVariantCollection_FWD_DEFINED__ */

#ifndef __PortableDeviceValuesCollection_FWD_DEFINED__
#define __PortableDeviceValuesCollection_FWD_DEFINED__
typedef struct PortableDeviceValuesCollection PortableDeviceValuesCollection;
#endif /* __PortableDeviceValuesCollection_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "wtypes.h"


#include <winapifamily.h>

#if (_WIN32_WINNT >= 0x0501) // XP and later

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef enum tagWPD_STREAM_UNITS {
    WPD_STREAM_UNITS_BYTES = 0x0,
    WPD_STREAM_UNITS_FRAMES = 0x1,
    WPD_STREAM_UNITS_ROWS = 0x2,
    WPD_STREAM_UNITS_MILLISECONDS = 0x4,
    WPD_STREAM_UNITS_MICROSECONDS = 0x8
} WPD_STREAM_UNITS;


#ifndef __IWpdSerializer_FWD_DEFINED__
#define __IWpdSerializer_FWD_DEFINED__
typedef interface IWpdSerializer IWpdSerializer;
#endif /* __IWpdSerializer_FWD_DEFINED__ */

#ifndef __IPortableDeviceValues_FWD_DEFINED__
#define __IPortableDeviceValues_FWD_DEFINED__
typedef interface IPortableDeviceValues IPortableDeviceValues;
#endif /* __IPortableDeviceValues_FWD_DEFINED__ */

#ifndef __IPortableDeviceKeyCollection_FWD_DEFINED__
#define __IPortableDeviceKeyCollection_FWD_DEFINED__
typedef interface IPortableDeviceKeyCollection IPortableDeviceKeyCollection;
#endif /* __IPortableDeviceKeyCollection_FWD_DEFINED__ */

#ifndef __IPortableDevicePropVariantCollection_FWD_DEFINED__
#define __IPortableDevicePropVariantCollection_FWD_DEFINED__
typedef interface IPortableDevicePropVariantCollection IPortableDevicePropVariantCollection;
#endif /* __IPortableDevicePropVariantCollection_FWD_DEFINED__ */

#ifndef __IPortableDeviceValuesCollection_FWD_DEFINED__
#define __IPortableDeviceValuesCollection_FWD_DEFINED__
typedef interface IPortableDeviceValuesCollection IPortableDeviceValuesCollection;
#endif /* __IPortableDeviceValuesCollection_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IWpdSerializer interface
 */
#ifndef __IWpdSerializer_INTERFACE_DEFINED__
#define __IWpdSerializer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWpdSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWpdSerializerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWpdSerializer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWpdSerializer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWpdSerializer *This);

    /*** IWpdSerializer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIPortableDeviceValuesFromBuffer)(
        IWpdSerializer *This,
        BYTE *pBuffer,
        DWORD dwInputBufferLength,
        IPortableDeviceValues **ppParams);

    HRESULT (STDMETHODCALLTYPE *WriteIPortableDeviceValuesToBuffer)(
        IWpdSerializer *This,
        DWORD dwOutputBufferLength,
        IPortableDeviceValues *pResults,
        BYTE *pBuffer,
        DWORD *pdwBytesWritten);

    HRESULT (STDMETHODCALLTYPE *GetBufferFromIPortableDeviceValues)(
        IWpdSerializer *This,
        IPortableDeviceValues *pSource,
        BYTE **ppBuffer,
        DWORD *pdwBufferSize);

    HRESULT (STDMETHODCALLTYPE *GetSerializedSize)(
        IWpdSerializer *This,
        IPortableDeviceValues *pSource,
        DWORD *pdwSize);

    END_INTERFACE
} IWpdSerializerVtbl;

interface IWpdSerializer {
    CONST_VTBL IWpdSerializerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWpdSerializer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWpdSerializer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWpdSerializer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWpdSerializer methods ***/
#define IWpdSerializer_GetIPortableDeviceValuesFromBuffer(This,pBuffer,dwInputBufferLength,ppParams) \
    ((This)->lpVtbl->GetIPortableDeviceValuesFromBuffer(This,pBuffer,dwInputBufferLength,ppParams))
#define IWpdSerializer_WriteIPortableDeviceValuesToBuffer(This,dwOutputBufferLength,pResults,pBuffer,pdwBytesWritten) \
    ((This)->lpVtbl->WriteIPortableDeviceValuesToBuffer(This,dwOutputBufferLength,pResults,pBuffer,pdwBytesWritten))
#define IWpdSerializer_GetBufferFromIPortableDeviceValues(This,pSource,ppBuffer,pdwBufferSize) \
    ((This)->lpVtbl->GetBufferFromIPortableDeviceValues(This,pSource,ppBuffer,pdwBufferSize))
#define IWpdSerializer_GetSerializedSize(This,pSource,pdwSize) \
    ((This)->lpVtbl->GetSerializedSize(This,pSource,pdwSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWpdSerializer_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define IPropertyStore IUnknown
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IPortableDeviceValues interface
 */
#ifndef __IPortableDeviceValues_INTERFACE_DEFINED__
#define __IPortableDeviceValues_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPortableDeviceValues;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPortableDeviceValuesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPortableDeviceValues *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPortableDeviceValues *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPortableDeviceValues *This);

    /*** IPortableDeviceValues methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IPortableDeviceValues *This,
        DWORD *pcelt);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IPortableDeviceValues *This,
        const DWORD index,
        PROPERTYKEY *pKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *SetValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *SetStringValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        LPCWSTR Value);

    HRESULT (STDMETHODCALLTYPE *GetStringValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        LPWSTR *pValue);

    HRESULT (STDMETHODCALLTYPE *SetUnsignedIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const ULONG Value);

    HRESULT (STDMETHODCALLTYPE *GetUnsignedIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        ULONG *pValue);

    HRESULT (STDMETHODCALLTYPE *SetSignedIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const LONG Value);

    HRESULT (STDMETHODCALLTYPE *GetSignedIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        LONG *pValue);

    HRESULT (STDMETHODCALLTYPE *SetUnsignedLargeIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const ULONGLONG Value);

    HRESULT (STDMETHODCALLTYPE *GetUnsignedLargeIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        ULONGLONG *pValue);

    HRESULT (STDMETHODCALLTYPE *SetSignedLargeIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const LONGLONG Value);

    HRESULT (STDMETHODCALLTYPE *GetSignedLargeIntegerValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        LONGLONG *pValue);

    HRESULT (STDMETHODCALLTYPE *SetFloatValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const FLOAT Value);

    HRESULT (STDMETHODCALLTYPE *GetFloatValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        FLOAT *pValue);

    HRESULT (STDMETHODCALLTYPE *SetErrorValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const HRESULT Value);

    HRESULT (STDMETHODCALLTYPE *GetErrorValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        HRESULT *pValue);

    HRESULT (STDMETHODCALLTYPE *SetKeyValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        REFPROPERTYKEY Value);

    HRESULT (STDMETHODCALLTYPE *GetKeyValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        PROPERTYKEY *pValue);

    HRESULT (STDMETHODCALLTYPE *SetBoolValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        const BOOL Value);

    HRESULT (STDMETHODCALLTYPE *GetBoolValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        BOOL *pValue);

    HRESULT (STDMETHODCALLTYPE *SetIUnknownValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IUnknown *pValue);

    HRESULT (STDMETHODCALLTYPE *GetIUnknownValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IUnknown **ppValue);

    HRESULT (STDMETHODCALLTYPE *SetGuidValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        REFGUID Value);

    HRESULT (STDMETHODCALLTYPE *GetGuidValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        GUID *pValue);

    HRESULT (STDMETHODCALLTYPE *SetBufferValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        BYTE *pValue,
        DWORD cbValue);

    HRESULT (STDMETHODCALLTYPE *GetBufferValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        BYTE **ppValue,
        DWORD *pcbValue);

    HRESULT (STDMETHODCALLTYPE *SetIPortableDeviceValuesValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDeviceValues *pValue);

    HRESULT (STDMETHODCALLTYPE *GetIPortableDeviceValuesValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDeviceValues **ppValue);

    HRESULT (STDMETHODCALLTYPE *SetIPortableDevicePropVariantCollectionValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDevicePropVariantCollection *pValue);

    HRESULT (STDMETHODCALLTYPE *GetIPortableDevicePropVariantCollectionValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDevicePropVariantCollection **ppValue);

    HRESULT (STDMETHODCALLTYPE *SetIPortableDeviceKeyCollectionValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDeviceKeyCollection *pValue);

    HRESULT (STDMETHODCALLTYPE *GetIPortableDeviceKeyCollectionValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDeviceKeyCollection **ppValue);

    HRESULT (STDMETHODCALLTYPE *SetIPortableDeviceValuesCollectionValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDeviceValuesCollection *pValue);

    HRESULT (STDMETHODCALLTYPE *GetIPortableDeviceValuesCollectionValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key,
        IPortableDeviceValuesCollection **ppValue);

    HRESULT (STDMETHODCALLTYPE *RemoveValue)(
        IPortableDeviceValues *This,
        REFPROPERTYKEY key);

    HRESULT (STDMETHODCALLTYPE *CopyValuesFromPropertyStore)(
        IPortableDeviceValues *This,
        IPropertyStore *pStore);

    HRESULT (STDMETHODCALLTYPE *CopyValuesToPropertyStore)(
        IPortableDeviceValues *This,
        IPropertyStore *pStore);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IPortableDeviceValues *This);

    END_INTERFACE
} IPortableDeviceValuesVtbl;

interface IPortableDeviceValues {
    CONST_VTBL IPortableDeviceValuesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPortableDeviceValues_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPortableDeviceValues_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPortableDeviceValues_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPortableDeviceValues methods ***/
#define IPortableDeviceValues_GetCount(This,pcelt) \
    ((This)->lpVtbl->GetCount(This,pcelt))
#define IPortableDeviceValues_GetAt(This,index,pKey,pValue) \
    ((This)->lpVtbl->GetAt(This,index,pKey,pValue))
#define IPortableDeviceValues_SetValue(This,key,pValue) \
    ((This)->lpVtbl->SetValue(This,key,pValue))
#define IPortableDeviceValues_GetValue(This,key,pValue) \
    ((This)->lpVtbl->GetValue(This,key,pValue))
#define IPortableDeviceValues_SetStringValue(This,key,Value) \
    ((This)->lpVtbl->SetStringValue(This,key,Value))
#define IPortableDeviceValues_GetStringValue(This,key,pValue) \
    ((This)->lpVtbl->GetStringValue(This,key,pValue))
#define IPortableDeviceValues_SetUnsignedIntegerValue(This,key,Value) \
    ((This)->lpVtbl->SetUnsignedIntegerValue(This,key,Value))
#define IPortableDeviceValues_GetUnsignedIntegerValue(This,key,pValue) \
    ((This)->lpVtbl->GetUnsignedIntegerValue(This,key,pValue))
#define IPortableDeviceValues_SetSignedIntegerValue(This,key,Value) \
    ((This)->lpVtbl->SetSignedIntegerValue(This,key,Value))
#define IPortableDeviceValues_GetSignedIntegerValue(This,key,pValue) \
    ((This)->lpVtbl->GetSignedIntegerValue(This,key,pValue))
#define IPortableDeviceValues_SetUnsignedLargeIntegerValue(This,key,Value) \
    ((This)->lpVtbl->SetUnsignedLargeIntegerValue(This,key,Value))
#define IPortableDeviceValues_GetUnsignedLargeIntegerValue(This,key,pValue) \
    ((This)->lpVtbl->GetUnsignedLargeIntegerValue(This,key,pValue))
#define IPortableDeviceValues_SetSignedLargeIntegerValue(This,key,Value) \
    ((This)->lpVtbl->SetSignedLargeIntegerValue(This,key,Value))
#define IPortableDeviceValues_GetSignedLargeIntegerValue(This,key,pValue) \
    ((This)->lpVtbl->GetSignedLargeIntegerValue(This,key,pValue))
#define IPortableDeviceValues_SetFloatValue(This,key,Value) \
    ((This)->lpVtbl->SetFloatValue(This,key,Value))
#define IPortableDeviceValues_GetFloatValue(This,key,pValue) \
    ((This)->lpVtbl->GetFloatValue(This,key,pValue))
#define IPortableDeviceValues_SetErrorValue(This,key,Value) \
    ((This)->lpVtbl->SetErrorValue(This,key,Value))
#define IPortableDeviceValues_GetErrorValue(This,key,pValue) \
    ((This)->lpVtbl->GetErrorValue(This,key,pValue))
#define IPortableDeviceValues_SetKeyValue(This,key,Value) \
    ((This)->lpVtbl->SetKeyValue(This,key,Value))
#define IPortableDeviceValues_GetKeyValue(This,key,pValue) \
    ((This)->lpVtbl->GetKeyValue(This,key,pValue))
#define IPortableDeviceValues_SetBoolValue(This,key,Value) \
    ((This)->lpVtbl->SetBoolValue(This,key,Value))
#define IPortableDeviceValues_GetBoolValue(This,key,pValue) \
    ((This)->lpVtbl->GetBoolValue(This,key,pValue))
#define IPortableDeviceValues_SetIUnknownValue(This,key,pValue) \
    ((This)->lpVtbl->SetIUnknownValue(This,key,pValue))
#define IPortableDeviceValues_GetIUnknownValue(This,key,ppValue) \
    ((This)->lpVtbl->GetIUnknownValue(This,key,ppValue))
#define IPortableDeviceValues_SetGuidValue(This,key,Value) \
    ((This)->lpVtbl->SetGuidValue(This,key,Value))
#define IPortableDeviceValues_GetGuidValue(This,key,pValue) \
    ((This)->lpVtbl->GetGuidValue(This,key,pValue))
#define IPortableDeviceValues_SetBufferValue(This,key,pValue,cbValue) \
    ((This)->lpVtbl->SetBufferValue(This,key,pValue,cbValue))
#define IPortableDeviceValues_GetBufferValue(This,key,ppValue,pcbValue) \
    ((This)->lpVtbl->GetBufferValue(This,key,ppValue,pcbValue))
#define IPortableDeviceValues_SetIPortableDeviceValuesValue(This,key,pValue) \
    ((This)->lpVtbl->SetIPortableDeviceValuesValue(This,key,pValue))
#define IPortableDeviceValues_GetIPortableDeviceValuesValue(This,key,ppValue) \
    ((This)->lpVtbl->GetIPortableDeviceValuesValue(This,key,ppValue))
#define IPortableDeviceValues_SetIPortableDevicePropVariantCollectionValue(This,key,pValue) \
    ((This)->lpVtbl->SetIPortableDevicePropVariantCollectionValue(This,key,pValue))
#define IPortableDeviceValues_GetIPortableDevicePropVariantCollectionValue(This,key,ppValue) \
    ((This)->lpVtbl->GetIPortableDevicePropVariantCollectionValue(This,key,ppValue))
#define IPortableDeviceValues_SetIPortableDeviceKeyCollectionValue(This,key,pValue) \
    ((This)->lpVtbl->SetIPortableDeviceKeyCollectionValue(This,key,pValue))
#define IPortableDeviceValues_GetIPortableDeviceKeyCollectionValue(This,key,ppValue) \
    ((This)->lpVtbl->GetIPortableDeviceKeyCollectionValue(This,key,ppValue))
#define IPortableDeviceValues_SetIPortableDeviceValuesCollectionValue(This,key,pValue) \
    ((This)->lpVtbl->SetIPortableDeviceValuesCollectionValue(This,key,pValue))
#define IPortableDeviceValues_GetIPortableDeviceValuesCollectionValue(This,key,ppValue) \
    ((This)->lpVtbl->GetIPortableDeviceValuesCollectionValue(This,key,ppValue))
#define IPortableDeviceValues_RemoveValue(This,key) \
    ((This)->lpVtbl->RemoveValue(This,key))
#define IPortableDeviceValues_CopyValuesFromPropertyStore(This,pStore) \
    ((This)->lpVtbl->CopyValuesFromPropertyStore(This,pStore))
#define IPortableDeviceValues_CopyValuesToPropertyStore(This,pStore) \
    ((This)->lpVtbl->CopyValuesToPropertyStore(This,pStore))
#define IPortableDeviceValues_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPortableDeviceValues_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#undef IPropertyStore
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * IPortableDeviceKeyCollection interface
 */
#ifndef __IPortableDeviceKeyCollection_INTERFACE_DEFINED__
#define __IPortableDeviceKeyCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPortableDeviceKeyCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPortableDeviceKeyCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPortableDeviceKeyCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPortableDeviceKeyCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPortableDeviceKeyCollection *This);

    /*** IPortableDeviceKeyCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IPortableDeviceKeyCollection *This,
        DWORD *pcElems);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IPortableDeviceKeyCollection *This,
        const DWORD dwIndex,
        PROPERTYKEY *pKey);

    HRESULT (STDMETHODCALLTYPE *Add)(
        IPortableDeviceKeyCollection *This,
        REFPROPERTYKEY Key);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IPortableDeviceKeyCollection *This);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IPortableDeviceKeyCollection *This,
        const DWORD dwIndex);

    END_INTERFACE
} IPortableDeviceKeyCollectionVtbl;

interface IPortableDeviceKeyCollection {
    CONST_VTBL IPortableDeviceKeyCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPortableDeviceKeyCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPortableDeviceKeyCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPortableDeviceKeyCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPortableDeviceKeyCollection methods ***/
#define IPortableDeviceKeyCollection_GetCount(This,pcElems) \
    ((This)->lpVtbl->GetCount(This,pcElems))
#define IPortableDeviceKeyCollection_GetAt(This,dwIndex,pKey) \
    ((This)->lpVtbl->GetAt(This,dwIndex,pKey))
#define IPortableDeviceKeyCollection_Add(This,Key) \
    ((This)->lpVtbl->Add(This,Key))
#define IPortableDeviceKeyCollection_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#define IPortableDeviceKeyCollection_RemoveAt(This,dwIndex) \
    ((This)->lpVtbl->RemoveAt(This,dwIndex))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPortableDeviceKeyCollection_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IPortableDevicePropVariantCollection interface
 */
#ifndef __IPortableDevicePropVariantCollection_INTERFACE_DEFINED__
#define __IPortableDevicePropVariantCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPortableDevicePropVariantCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPortableDevicePropVariantCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPortableDevicePropVariantCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPortableDevicePropVariantCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPortableDevicePropVariantCollection *This);

    /*** IPortableDevicePropVariantCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IPortableDevicePropVariantCollection *This,
        DWORD *pcElems);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IPortableDevicePropVariantCollection *This,
        const DWORD dwIndex,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *Add)(
        IPortableDevicePropVariantCollection *This,
        const PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IPortableDevicePropVariantCollection *This,
        VARTYPE *pvt);

    HRESULT (STDMETHODCALLTYPE *ChangeType)(
        IPortableDevicePropVariantCollection *This,
        const VARTYPE vt);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IPortableDevicePropVariantCollection *This);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IPortableDevicePropVariantCollection *This,
        const DWORD dwIndex);

    END_INTERFACE
} IPortableDevicePropVariantCollectionVtbl;

interface IPortableDevicePropVariantCollection {
    CONST_VTBL IPortableDevicePropVariantCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPortableDevicePropVariantCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPortableDevicePropVariantCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPortableDevicePropVariantCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPortableDevicePropVariantCollection methods ***/
#define IPortableDevicePropVariantCollection_GetCount(This,pcElems) \
    ((This)->lpVtbl->GetCount(This,pcElems))
#define IPortableDevicePropVariantCollection_GetAt(This,dwIndex,pValue) \
    ((This)->lpVtbl->GetAt(This,dwIndex,pValue))
#define IPortableDevicePropVariantCollection_Add(This,pValue) \
    ((This)->lpVtbl->Add(This,pValue))
#define IPortableDevicePropVariantCollection_GetType(This,pvt) \
    ((This)->lpVtbl->GetType(This,pvt))
#define IPortableDevicePropVariantCollection_ChangeType(This,vt) \
    ((This)->lpVtbl->ChangeType(This,vt))
#define IPortableDevicePropVariantCollection_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#define IPortableDevicePropVariantCollection_RemoveAt(This,dwIndex) \
    ((This)->lpVtbl->RemoveAt(This,dwIndex))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPortableDevicePropVariantCollection_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IPortableDeviceValuesCollection interface
 */
#ifndef __IPortableDeviceValuesCollection_INTERFACE_DEFINED__
#define __IPortableDeviceValuesCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IPortableDeviceValuesCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPortableDeviceValuesCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPortableDeviceValuesCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPortableDeviceValuesCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPortableDeviceValuesCollection *This);

    /*** IPortableDeviceValuesCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IPortableDeviceValuesCollection *This,
        DWORD *pcElems);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IPortableDeviceValuesCollection *This,
        const DWORD dwIndex,
        IPortableDeviceValues **ppValues);

    HRESULT (STDMETHODCALLTYPE *Add)(
        IPortableDeviceValuesCollection *This,
        IPortableDeviceValues *pValues);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        IPortableDeviceValuesCollection *This);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IPortableDeviceValuesCollection *This,
        const DWORD dwIndex);

    END_INTERFACE
} IPortableDeviceValuesCollectionVtbl;

interface IPortableDeviceValuesCollection {
    CONST_VTBL IPortableDeviceValuesCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPortableDeviceValuesCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPortableDeviceValuesCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPortableDeviceValuesCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPortableDeviceValuesCollection methods ***/
#define IPortableDeviceValuesCollection_GetCount(This,pcElems) \
    ((This)->lpVtbl->GetCount(This,pcElems))
#define IPortableDeviceValuesCollection_GetAt(This,dwIndex,ppValues) \
    ((This)->lpVtbl->GetAt(This,dwIndex,ppValues))
#define IPortableDeviceValuesCollection_Add(This,pValues) \
    ((This)->lpVtbl->Add(This,pValues))
#define IPortableDeviceValuesCollection_Clear(This) \
    ((This)->lpVtbl->Clear(This))
#define IPortableDeviceValuesCollection_RemoveAt(This,dwIndex) \
    ((This)->lpVtbl->RemoveAt(This,dwIndex))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPortableDeviceValuesCollection_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#ifndef __PortableDeviceTypesLib_LIBRARY_DEFINED__
#define __PortableDeviceTypesLib_LIBRARY_DEFINED__


#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * WpdSerializer coclass
 */

EXTERN_C const CLSID CLSID_WpdSerializer;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * PortableDeviceValues coclass
 */

EXTERN_C const CLSID CLSID_PortableDeviceValues;

/*****************************************************************************
 * PortableDeviceKeyCollection coclass
 */

EXTERN_C const CLSID CLSID_PortableDeviceKeyCollection;

/*****************************************************************************
 * PortableDevicePropVariantCollection coclass
 */

EXTERN_C const CLSID CLSID_PortableDevicePropVariantCollection;

/*****************************************************************************
 * PortableDeviceValuesCollection coclass
 */

EXTERN_C const CLSID CLSID_PortableDeviceValuesCollection;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif /* __PortableDeviceTypesLib_LIBRARY_DEFINED__ */

#endif // (_WIN32_WINNT >= 0x0501)
/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER LPSAFEARRAY_UserSize(ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(ULONG *, LPSAFEARRAY *);

/* End additional prototypes for all interfaces */

#endif /* __portabledevicetypes_h__ */
