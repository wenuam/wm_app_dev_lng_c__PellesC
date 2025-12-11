/* Generated from mfobjects.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __mfobjects_h__
#define __mfobjects_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IMFAttributes_FWD_DEFINED__
#define __IMFAttributes_FWD_DEFINED__
typedef interface IMFAttributes IMFAttributes;
#endif /* __IMFAttributes_FWD_DEFINED__ */

#ifndef __IMFMediaBuffer_FWD_DEFINED__
#define __IMFMediaBuffer_FWD_DEFINED__
typedef interface IMFMediaBuffer IMFMediaBuffer;
#endif /* __IMFMediaBuffer_FWD_DEFINED__ */

#ifndef __IMFSample_FWD_DEFINED__
#define __IMFSample_FWD_DEFINED__
typedef interface IMFSample IMFSample;
#endif /* __IMFSample_FWD_DEFINED__ */

#ifndef __IMF2DBuffer_FWD_DEFINED__
#define __IMF2DBuffer_FWD_DEFINED__
typedef interface IMF2DBuffer IMF2DBuffer;
#endif /* __IMF2DBuffer_FWD_DEFINED__ */

#ifndef __IMF2DBuffer2_FWD_DEFINED__
#define __IMF2DBuffer2_FWD_DEFINED__
typedef interface IMF2DBuffer2 IMF2DBuffer2;
#endif /* __IMF2DBuffer2_FWD_DEFINED__ */

#ifndef __IMFDXGIBuffer_FWD_DEFINED__
#define __IMFDXGIBuffer_FWD_DEFINED__
typedef interface IMFDXGIBuffer IMFDXGIBuffer;
#endif /* __IMFDXGIBuffer_FWD_DEFINED__ */

#ifndef __IMFMediaType_FWD_DEFINED__
#define __IMFMediaType_FWD_DEFINED__
typedef interface IMFMediaType IMFMediaType;
#endif /* __IMFMediaType_FWD_DEFINED__ */

#ifndef __IMFAudioMediaType_FWD_DEFINED__
#define __IMFAudioMediaType_FWD_DEFINED__
typedef interface IMFAudioMediaType IMFAudioMediaType;
#endif /* __IMFAudioMediaType_FWD_DEFINED__ */

#ifndef __IMFVideoMediaType_FWD_DEFINED__
#define __IMFVideoMediaType_FWD_DEFINED__
typedef interface IMFVideoMediaType IMFVideoMediaType;
#endif /* __IMFVideoMediaType_FWD_DEFINED__ */

#ifndef __IMFAsyncResult_FWD_DEFINED__
#define __IMFAsyncResult_FWD_DEFINED__
typedef interface IMFAsyncResult IMFAsyncResult;
#endif /* __IMFAsyncResult_FWD_DEFINED__ */

#ifndef __IMFAsyncCallback_FWD_DEFINED__
#define __IMFAsyncCallback_FWD_DEFINED__
typedef interface IMFAsyncCallback IMFAsyncCallback;
#endif /* __IMFAsyncCallback_FWD_DEFINED__ */

#ifndef __IMFAsyncCallbackLogging_FWD_DEFINED__
#define __IMFAsyncCallbackLogging_FWD_DEFINED__
typedef interface IMFAsyncCallbackLogging IMFAsyncCallbackLogging;
#endif /* __IMFAsyncCallbackLogging_FWD_DEFINED__ */

#ifndef __IMFMediaEvent_FWD_DEFINED__
#define __IMFMediaEvent_FWD_DEFINED__
typedef interface IMFMediaEvent IMFMediaEvent;
#endif /* __IMFMediaEvent_FWD_DEFINED__ */

#ifndef __IMFMediaEventGenerator_FWD_DEFINED__
#define __IMFMediaEventGenerator_FWD_DEFINED__
typedef interface IMFMediaEventGenerator IMFMediaEventGenerator;
#endif /* __IMFMediaEventGenerator_FWD_DEFINED__ */

#ifndef __IMFRemoteAsyncCallback_FWD_DEFINED__
#define __IMFRemoteAsyncCallback_FWD_DEFINED__
typedef interface IMFRemoteAsyncCallback IMFRemoteAsyncCallback;
#endif /* __IMFRemoteAsyncCallback_FWD_DEFINED__ */

#ifndef __IMFByteStream_FWD_DEFINED__
#define __IMFByteStream_FWD_DEFINED__
typedef interface IMFByteStream IMFByteStream;
#endif /* __IMFByteStream_FWD_DEFINED__ */

#ifndef __IMFByteStreamProxyClassFactory_FWD_DEFINED__
#define __IMFByteStreamProxyClassFactory_FWD_DEFINED__
typedef interface IMFByteStreamProxyClassFactory IMFByteStreamProxyClassFactory;
#endif /* __IMFByteStreamProxyClassFactory_FWD_DEFINED__ */

#ifndef __IMFSampleOutputStream_FWD_DEFINED__
#define __IMFSampleOutputStream_FWD_DEFINED__
typedef interface IMFSampleOutputStream IMFSampleOutputStream;
#endif /* __IMFSampleOutputStream_FWD_DEFINED__ */

#ifndef __IMFCollection_FWD_DEFINED__
#define __IMFCollection_FWD_DEFINED__
typedef interface IMFCollection IMFCollection;
#endif /* __IMFCollection_FWD_DEFINED__ */

#ifndef __IMFMediaEventQueue_FWD_DEFINED__
#define __IMFMediaEventQueue_FWD_DEFINED__
typedef interface IMFMediaEventQueue IMFMediaEventQueue;
#endif /* __IMFMediaEventQueue_FWD_DEFINED__ */

#ifndef __IMFActivate_FWD_DEFINED__
#define __IMFActivate_FWD_DEFINED__
typedef interface IMFActivate IMFActivate;
#endif /* __IMFActivate_FWD_DEFINED__ */

#ifndef __IMFPluginControl_FWD_DEFINED__
#define __IMFPluginControl_FWD_DEFINED__
typedef interface IMFPluginControl IMFPluginControl;
#endif /* __IMFPluginControl_FWD_DEFINED__ */

#ifndef __IMFPluginControl2_FWD_DEFINED__
#define __IMFPluginControl2_FWD_DEFINED__
typedef interface IMFPluginControl2 IMFPluginControl2;
#endif /* __IMFPluginControl2_FWD_DEFINED__ */

#ifndef __IMFDXGIDeviceManager_FWD_DEFINED__
#define __IMFDXGIDeviceManager_FWD_DEFINED__
typedef interface IMFDXGIDeviceManager IMFDXGIDeviceManager;
#endif /* __IMFDXGIDeviceManager_FWD_DEFINED__ */

#ifndef __IMFMuxStreamAttributesManager_FWD_DEFINED__
#define __IMFMuxStreamAttributesManager_FWD_DEFINED__
typedef interface IMFMuxStreamAttributesManager IMFMuxStreamAttributesManager;
#endif /* __IMFMuxStreamAttributesManager_FWD_DEFINED__ */

#ifndef __IMFMuxStreamMediaTypeManager_FWD_DEFINED__
#define __IMFMuxStreamMediaTypeManager_FWD_DEFINED__
typedef interface IMFMuxStreamMediaTypeManager IMFMuxStreamMediaTypeManager;
#endif /* __IMFMuxStreamMediaTypeManager_FWD_DEFINED__ */

#ifndef __IMFMuxStreamSampleManager_FWD_DEFINED__
#define __IMFMuxStreamSampleManager_FWD_DEFINED__
typedef interface IMFMuxStreamSampleManager IMFMuxStreamSampleManager;
#endif /* __IMFMuxStreamSampleManager_FWD_DEFINED__ */

#ifndef __IMFSecureBuffer_FWD_DEFINED__
#define __IMFSecureBuffer_FWD_DEFINED__
typedef interface IMFSecureBuffer IMFSecureBuffer;
#endif /* __IMFSecureBuffer_FWD_DEFINED__ */

/* Headers for imported files */

#include "unknwn.h"
#include "propsys.h"
#include "mediaobj.h"
#include "mmreg.h"


#include <winapifamily.h>

typedef ULONGLONG QWORD;

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef enum _MF_ATTRIBUTE_TYPE {
    MF_ATTRIBUTE_UINT32 = VT_UI4,
    MF_ATTRIBUTE_UINT64 = VT_UI8,
    MF_ATTRIBUTE_DOUBLE = VT_R8,
    MF_ATTRIBUTE_GUID = VT_CLSID,
    MF_ATTRIBUTE_STRING = VT_LPWSTR,
    MF_ATTRIBUTE_BLOB = VT_VECTOR | VT_UI1,
    MF_ATTRIBUTE_IUNKNOWN = VT_UNKNOWN
} MF_ATTRIBUTE_TYPE;

typedef enum _MF_ATTRIBUTES_MATCH_TYPE {
    MF_ATTRIBUTES_MATCH_OUR_ITEMS = 0,
    MF_ATTRIBUTES_MATCH_THEIR_ITEMS = 1,
    MF_ATTRIBUTES_MATCH_ALL_ITEMS = 2,
    MF_ATTRIBUTES_MATCH_INTERSECTION = 3,
    MF_ATTRIBUTES_MATCH_SMALLER = 4
} MF_ATTRIBUTES_MATCH_TYPE;

/*****************************************************************************
 * IMFAttributes interface
 */
#ifndef __IMFAttributes_INTERFACE_DEFINED__
#define __IMFAttributes_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAttributesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAttributes *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAttributes *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAttributes *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFAttributes *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFAttributes *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFAttributes *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFAttributes *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFAttributes *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFAttributes *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFAttributes *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFAttributes *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFAttributes *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFAttributes *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFAttributes *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFAttributes *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFAttributes *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFAttributes *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFAttributes *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFAttributes *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFAttributes *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFAttributes *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFAttributes *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFAttributes *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFAttributes *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFAttributes *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFAttributes *This,
        IMFAttributes *pDest);

    END_INTERFACE
} IMFAttributesVtbl;

interface IMFAttributes {
    CONST_VTBL IMFAttributesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAttributes_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAttributes_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAttributes_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFAttributes_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFAttributes_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFAttributes_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFAttributes_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFAttributes_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFAttributes_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFAttributes_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFAttributes_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFAttributes_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFAttributes_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFAttributes_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFAttributes_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFAttributes_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFAttributes_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFAttributes_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFAttributes_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFAttributes_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFAttributes_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFAttributes_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFAttributes_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFAttributes_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFAttributes_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFAttributes_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFAttributes_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFAttributes_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFAttributes_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFAttributes_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFAttributes_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFAttributes_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFAttributes_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAttributes_INTERFACE_DEFINED__ */

enum MF_ATTRIBUTE_SERIALIZE_OPTIONS {
    MF_ATTRIBUTE_SERIALIZE_UNKNOWN_BYREF = 0x1
};

STDAPI MFSerializeAttributesToStream(
  IMFAttributes * pAttr,
  DWORD dwOptions,
  IStream * pStm);

STDAPI MFDeserializeAttributesFromStream(
  IMFAttributes * pAttr,
  DWORD dwOptions,
  IStream * pStm);

/*****************************************************************************
 * IMFMediaBuffer interface
 */
#ifndef __IMFMediaBuffer_INTERFACE_DEFINED__
#define __IMFMediaBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaBuffer *This);

    /*** IMFMediaBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *Lock)(
        IMFMediaBuffer *This,
        BYTE **ppbBuffer,
        DWORD *pcbMaxLength,
        DWORD *pcbCurrentLength);

    HRESULT (STDMETHODCALLTYPE *Unlock)(
        IMFMediaBuffer *This);

    HRESULT (STDMETHODCALLTYPE *GetCurrentLength)(
        IMFMediaBuffer *This,
        DWORD *pcbCurrentLength);

    HRESULT (STDMETHODCALLTYPE *SetCurrentLength)(
        IMFMediaBuffer *This,
        DWORD cbCurrentLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        IMFMediaBuffer *This,
        DWORD *pcbMaxLength);

    END_INTERFACE
} IMFMediaBufferVtbl;

interface IMFMediaBuffer {
    CONST_VTBL IMFMediaBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaBuffer methods ***/
#define IMFMediaBuffer_Lock(This,ppbBuffer,pcbMaxLength,pcbCurrentLength) \
    ((This)->lpVtbl->Lock(This,ppbBuffer,pcbMaxLength,pcbCurrentLength))
#define IMFMediaBuffer_Unlock(This) \
    ((This)->lpVtbl->Unlock(This))
#define IMFMediaBuffer_GetCurrentLength(This,pcbCurrentLength) \
    ((This)->lpVtbl->GetCurrentLength(This,pcbCurrentLength))
#define IMFMediaBuffer_SetCurrentLength(This,cbCurrentLength) \
    ((This)->lpVtbl->SetCurrentLength(This,cbCurrentLength))
#define IMFMediaBuffer_GetMaxLength(This,pcbMaxLength) \
    ((This)->lpVtbl->GetMaxLength(This,pcbMaxLength))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSample interface
 */
#ifndef __IMFSample_INTERFACE_DEFINED__
#define __IMFSample_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSample;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSampleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSample *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSample *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSample *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFSample *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFSample *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFSample *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFSample *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFSample *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFSample *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFSample *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFSample *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFSample *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFSample *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFSample *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFSample *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFSample *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFSample *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFSample *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFSample *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFSample *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFSample *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFSample *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFSample *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFSample *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFSample *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFSample *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFSample *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFSample *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFSample *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFSample *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFSample *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFSample *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFSample *This,
        IMFAttributes *pDest);

    /*** IMFSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSampleFlags)(
        IMFSample *This,
        DWORD *pdwSampleFlags);

    HRESULT (STDMETHODCALLTYPE *SetSampleFlags)(
        IMFSample *This,
        DWORD dwSampleFlags);

    HRESULT (STDMETHODCALLTYPE *GetSampleTime)(
        IMFSample *This,
        LONGLONG *phnsSampleTime);

    HRESULT (STDMETHODCALLTYPE *SetSampleTime)(
        IMFSample *This,
        LONGLONG hnsSampleTime);

    HRESULT (STDMETHODCALLTYPE *GetSampleDuration)(
        IMFSample *This,
        LONGLONG *phnsSampleDuration);

    HRESULT (STDMETHODCALLTYPE *SetSampleDuration)(
        IMFSample *This,
        LONGLONG hnsSampleDuration);

    HRESULT (STDMETHODCALLTYPE *GetBufferCount)(
        IMFSample *This,
        DWORD *pdwBufferCount);

    HRESULT (STDMETHODCALLTYPE *GetBufferByIndex)(
        IMFSample *This,
        DWORD dwIndex,
        IMFMediaBuffer **ppBuffer);

    HRESULT (STDMETHODCALLTYPE *ConvertToContiguousBuffer)(
        IMFSample *This,
        IMFMediaBuffer **ppBuffer);

    HRESULT (STDMETHODCALLTYPE *AddBuffer)(
        IMFSample *This,
        IMFMediaBuffer *pBuffer);

    HRESULT (STDMETHODCALLTYPE *RemoveBufferByIndex)(
        IMFSample *This,
        DWORD dwIndex);

    HRESULT (STDMETHODCALLTYPE *RemoveAllBuffers)(
        IMFSample *This);

    HRESULT (STDMETHODCALLTYPE *GetTotalLength)(
        IMFSample *This,
        DWORD *pcbTotalLength);

    HRESULT (STDMETHODCALLTYPE *CopyToBuffer)(
        IMFSample *This,
        IMFMediaBuffer *pBuffer);

    END_INTERFACE
} IMFSampleVtbl;

interface IMFSample {
    CONST_VTBL IMFSampleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSample_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSample_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSample_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFSample_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFSample_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFSample_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFSample_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFSample_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFSample_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFSample_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFSample_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFSample_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFSample_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFSample_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFSample_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFSample_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFSample_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFSample_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFSample_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFSample_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFSample_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFSample_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFSample_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFSample_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFSample_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFSample_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFSample_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFSample_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFSample_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFSample_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFSample_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFSample_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFSample_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFSample methods ***/
#define IMFSample_GetSampleFlags(This,pdwSampleFlags) \
    ((This)->lpVtbl->GetSampleFlags(This,pdwSampleFlags))
#define IMFSample_SetSampleFlags(This,dwSampleFlags) \
    ((This)->lpVtbl->SetSampleFlags(This,dwSampleFlags))
#define IMFSample_GetSampleTime(This,phnsSampleTime) \
    ((This)->lpVtbl->GetSampleTime(This,phnsSampleTime))
#define IMFSample_SetSampleTime(This,hnsSampleTime) \
    ((This)->lpVtbl->SetSampleTime(This,hnsSampleTime))
#define IMFSample_GetSampleDuration(This,phnsSampleDuration) \
    ((This)->lpVtbl->GetSampleDuration(This,phnsSampleDuration))
#define IMFSample_SetSampleDuration(This,hnsSampleDuration) \
    ((This)->lpVtbl->SetSampleDuration(This,hnsSampleDuration))
#define IMFSample_GetBufferCount(This,pdwBufferCount) \
    ((This)->lpVtbl->GetBufferCount(This,pdwBufferCount))
#define IMFSample_GetBufferByIndex(This,dwIndex,ppBuffer) \
    ((This)->lpVtbl->GetBufferByIndex(This,dwIndex,ppBuffer))
#define IMFSample_ConvertToContiguousBuffer(This,ppBuffer) \
    ((This)->lpVtbl->ConvertToContiguousBuffer(This,ppBuffer))
#define IMFSample_AddBuffer(This,pBuffer) \
    ((This)->lpVtbl->AddBuffer(This,pBuffer))
#define IMFSample_RemoveBufferByIndex(This,dwIndex) \
    ((This)->lpVtbl->RemoveBufferByIndex(This,dwIndex))
#define IMFSample_RemoveAllBuffers(This) \
    ((This)->lpVtbl->RemoveAllBuffers(This))
#define IMFSample_GetTotalLength(This,pcbTotalLength) \
    ((This)->lpVtbl->GetTotalLength(This,pcbTotalLength))
#define IMFSample_CopyToBuffer(This,pBuffer) \
    ((This)->lpVtbl->CopyToBuffer(This,pBuffer))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSample_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMF2DBuffer interface
 */
#ifndef __IMF2DBuffer_INTERFACE_DEFINED__
#define __IMF2DBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMF2DBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMF2DBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMF2DBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMF2DBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMF2DBuffer *This);

    /*** IMF2DBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *Lock2D)(
        IMF2DBuffer *This,
        BYTE **ppbScanline0,
        LONG *plPitch);

    HRESULT (STDMETHODCALLTYPE *Unlock2D)(
        IMF2DBuffer *This);

    HRESULT (STDMETHODCALLTYPE *GetScanline0AndPitch)(
        IMF2DBuffer *This,
        BYTE **pbScanline0,
        LONG *plPitch);

    HRESULT (STDMETHODCALLTYPE *IsContiguousFormat)(
        IMF2DBuffer *This,
        BOOL *pfIsContiguous);

    HRESULT (STDMETHODCALLTYPE *GetContiguousLength)(
        IMF2DBuffer *This,
        DWORD *pcbLength);

    HRESULT (STDMETHODCALLTYPE *ContiguousCopyTo)(
        IMF2DBuffer *This,
        BYTE *pbDestBuffer,
        DWORD cbDestBuffer);

    HRESULT (STDMETHODCALLTYPE *ContiguousCopyFrom)(
        IMF2DBuffer *This,
        const BYTE *pbSrcBuffer,
        DWORD cbSrcBuffer);

    END_INTERFACE
} IMF2DBufferVtbl;

interface IMF2DBuffer {
    CONST_VTBL IMF2DBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMF2DBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMF2DBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMF2DBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMF2DBuffer methods ***/
#define IMF2DBuffer_Lock2D(This,ppbScanline0,plPitch) \
    ((This)->lpVtbl->Lock2D(This,ppbScanline0,plPitch))
#define IMF2DBuffer_Unlock2D(This) \
    ((This)->lpVtbl->Unlock2D(This))
#define IMF2DBuffer_GetScanline0AndPitch(This,pbScanline0,plPitch) \
    ((This)->lpVtbl->GetScanline0AndPitch(This,pbScanline0,plPitch))
#define IMF2DBuffer_IsContiguousFormat(This,pfIsContiguous) \
    ((This)->lpVtbl->IsContiguousFormat(This,pfIsContiguous))
#define IMF2DBuffer_GetContiguousLength(This,pcbLength) \
    ((This)->lpVtbl->GetContiguousLength(This,pcbLength))
#define IMF2DBuffer_ContiguousCopyTo(This,pbDestBuffer,cbDestBuffer) \
    ((This)->lpVtbl->ContiguousCopyTo(This,pbDestBuffer,cbDestBuffer))
#define IMF2DBuffer_ContiguousCopyFrom(This,pbSrcBuffer,cbSrcBuffer) \
    ((This)->lpVtbl->ContiguousCopyFrom(This,pbSrcBuffer,cbSrcBuffer))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMF2DBuffer_INTERFACE_DEFINED__ */

typedef enum _MF2DBuffer_LockFlags {
    MF2DBuffer_LockFlags_LockTypeMask = (0x1 | 0x2) | 0x3,
    MF2DBuffer_LockFlags_Read = 0x1,
    MF2DBuffer_LockFlags_Write = 0x2,
    MF2DBuffer_LockFlags_ReadWrite = 0x3,
    MF2DBuffer_LockFlags_ForceDWORD = 0x7fffffff
} MF2DBuffer_LockFlags;

/*****************************************************************************
 * IMF2DBuffer2 interface
 */
#ifndef __IMF2DBuffer2_INTERFACE_DEFINED__
#define __IMF2DBuffer2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMF2DBuffer2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMF2DBuffer2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMF2DBuffer2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMF2DBuffer2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMF2DBuffer2 *This);

    /*** IMF2DBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *Lock2D)(
        IMF2DBuffer2 *This,
        BYTE **ppbScanline0,
        LONG *plPitch);

    HRESULT (STDMETHODCALLTYPE *Unlock2D)(
        IMF2DBuffer2 *This);

    HRESULT (STDMETHODCALLTYPE *GetScanline0AndPitch)(
        IMF2DBuffer2 *This,
        BYTE **pbScanline0,
        LONG *plPitch);

    HRESULT (STDMETHODCALLTYPE *IsContiguousFormat)(
        IMF2DBuffer2 *This,
        BOOL *pfIsContiguous);

    HRESULT (STDMETHODCALLTYPE *GetContiguousLength)(
        IMF2DBuffer2 *This,
        DWORD *pcbLength);

    HRESULT (STDMETHODCALLTYPE *ContiguousCopyTo)(
        IMF2DBuffer2 *This,
        BYTE *pbDestBuffer,
        DWORD cbDestBuffer);

    HRESULT (STDMETHODCALLTYPE *ContiguousCopyFrom)(
        IMF2DBuffer2 *This,
        const BYTE *pbSrcBuffer,
        DWORD cbSrcBuffer);

    /*** IMF2DBuffer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *Lock2DSize)(
        IMF2DBuffer2 *This,
        MF2DBuffer_LockFlags lockFlags,
        BYTE **ppbScanline0,
        LONG *plPitch,
        BYTE **ppbBufferStart,
        DWORD *pcbBufferLength);

    HRESULT (STDMETHODCALLTYPE *Copy2DTo)(
        IMF2DBuffer2 *This,
        IMF2DBuffer2 *pDestBuffer);

    END_INTERFACE
} IMF2DBuffer2Vtbl;

interface IMF2DBuffer2 {
    CONST_VTBL IMF2DBuffer2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMF2DBuffer2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMF2DBuffer2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMF2DBuffer2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMF2DBuffer methods ***/
#define IMF2DBuffer2_Lock2D(This,ppbScanline0,plPitch) \
    ((This)->lpVtbl->Lock2D(This,ppbScanline0,plPitch))
#define IMF2DBuffer2_Unlock2D(This) \
    ((This)->lpVtbl->Unlock2D(This))
#define IMF2DBuffer2_GetScanline0AndPitch(This,pbScanline0,plPitch) \
    ((This)->lpVtbl->GetScanline0AndPitch(This,pbScanline0,plPitch))
#define IMF2DBuffer2_IsContiguousFormat(This,pfIsContiguous) \
    ((This)->lpVtbl->IsContiguousFormat(This,pfIsContiguous))
#define IMF2DBuffer2_GetContiguousLength(This,pcbLength) \
    ((This)->lpVtbl->GetContiguousLength(This,pcbLength))
#define IMF2DBuffer2_ContiguousCopyTo(This,pbDestBuffer,cbDestBuffer) \
    ((This)->lpVtbl->ContiguousCopyTo(This,pbDestBuffer,cbDestBuffer))
#define IMF2DBuffer2_ContiguousCopyFrom(This,pbSrcBuffer,cbSrcBuffer) \
    ((This)->lpVtbl->ContiguousCopyFrom(This,pbSrcBuffer,cbSrcBuffer))
/*** IMF2DBuffer2 methods ***/
#define IMF2DBuffer2_Lock2DSize(This,lockFlags,ppbScanline0,plPitch,ppbBufferStart,pcbBufferLength) \
    ((This)->lpVtbl->Lock2DSize(This,lockFlags,ppbScanline0,plPitch,ppbBufferStart,pcbBufferLength))
#define IMF2DBuffer2_Copy2DTo(This,pDestBuffer) \
    ((This)->lpVtbl->Copy2DTo(This,pDestBuffer))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMF2DBuffer2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFDXGIBuffer interface
 */
#ifndef __IMFDXGIBuffer_INTERFACE_DEFINED__
#define __IMFDXGIBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFDXGIBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFDXGIBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFDXGIBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFDXGIBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFDXGIBuffer *This);

    /*** IMFDXGIBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResource)(
        IMFDXGIBuffer *This,
        REFIID riid,
        LPVOID *ppvObject);

    HRESULT (STDMETHODCALLTYPE *GetSubresourceIndex)(
        IMFDXGIBuffer *This,
        UINT *puSubresource);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFDXGIBuffer *This,
        REFIID guid,
        REFIID riid,
        LPVOID *ppvObject);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFDXGIBuffer *This,
        REFIID guid,
        IUnknown *pUnkData);

    END_INTERFACE
} IMFDXGIBufferVtbl;

interface IMFDXGIBuffer {
    CONST_VTBL IMFDXGIBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFDXGIBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFDXGIBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFDXGIBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFDXGIBuffer methods ***/
#define IMFDXGIBuffer_GetResource(This,riid,ppvObject) \
    ((This)->lpVtbl->GetResource(This,riid,ppvObject))
#define IMFDXGIBuffer_GetSubresourceIndex(This,puSubresource) \
    ((This)->lpVtbl->GetSubresourceIndex(This,puSubresource))
#define IMFDXGIBuffer_GetUnknown(This,guid,riid,ppvObject) \
    ((This)->lpVtbl->GetUnknown(This,guid,riid,ppvObject))
#define IMFDXGIBuffer_SetUnknown(This,guid,pUnkData) \
    ((This)->lpVtbl->SetUnknown(This,guid,pUnkData))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFDXGIBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMediaType interface
 */
#ifndef __IMFMediaType_INTERFACE_DEFINED__
#define __IMFMediaType_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaType;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaTypeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaType *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaType *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaType *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFMediaType *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFMediaType *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFMediaType *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFMediaType *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFMediaType *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFMediaType *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFMediaType *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFMediaType *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFMediaType *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFMediaType *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFMediaType *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFMediaType *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFMediaType *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFMediaType *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFMediaType *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFMediaType *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFMediaType *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFMediaType *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFMediaType *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFMediaType *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFMediaType *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFMediaType *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFMediaType *This,
        IMFAttributes *pDest);

    /*** IMFMediaType methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMajorType)(
        IMFMediaType *This,
        GUID *pguidMajorType);

    HRESULT (STDMETHODCALLTYPE *IsCompressedFormat)(
        IMFMediaType *This,
        BOOL *pfCompressed);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IMFMediaType *This,
        IMFMediaType *pIMediaType,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetRepresentation)(
        IMFMediaType *This,
        GUID guidRepresentation,
        LPVOID *ppvRepresentation);

    HRESULT (STDMETHODCALLTYPE *FreeRepresentation)(
        IMFMediaType *This,
        GUID guidRepresentation,
        LPVOID pvRepresentation);

    END_INTERFACE
} IMFMediaTypeVtbl;

interface IMFMediaType {
    CONST_VTBL IMFMediaTypeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaType_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaType_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaType_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFMediaType_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFMediaType_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFMediaType_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFMediaType_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFMediaType_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFMediaType_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFMediaType_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFMediaType_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFMediaType_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFMediaType_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFMediaType_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFMediaType_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFMediaType_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFMediaType_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFMediaType_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFMediaType_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFMediaType_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFMediaType_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFMediaType_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFMediaType_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFMediaType_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFMediaType_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFMediaType_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFMediaType_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFMediaType_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFMediaType_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFMediaType_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFMediaType_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFMediaType_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFMediaType_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFMediaType methods ***/
#define IMFMediaType_GetMajorType(This,pguidMajorType) \
    ((This)->lpVtbl->GetMajorType(This,pguidMajorType))
#define IMFMediaType_IsCompressedFormat(This,pfCompressed) \
    ((This)->lpVtbl->IsCompressedFormat(This,pfCompressed))
#define IMFMediaType_IsEqual(This,pIMediaType,pdwFlags) \
    ((This)->lpVtbl->IsEqual(This,pIMediaType,pdwFlags))
#define IMFMediaType_GetRepresentation(This,guidRepresentation,ppvRepresentation) \
    ((This)->lpVtbl->GetRepresentation(This,guidRepresentation,ppvRepresentation))
#define IMFMediaType_FreeRepresentation(This,guidRepresentation,pvRepresentation) \
    ((This)->lpVtbl->FreeRepresentation(This,guidRepresentation,pvRepresentation))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaType_INTERFACE_DEFINED__ */

#define MF_MEDIATYPE_EQUAL_MAJOR_TYPES  0x00000001
#define MF_MEDIATYPE_EQUAL_FORMAT_TYPES 0x00000002
#define MF_MEDIATYPE_EQUAL_FORMAT_DATA  0x00000004
#define MF_MEDIATYPE_EQUAL_FORMAT_USER_DATA  0x00000008

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFAudioMediaType interface
 */
#ifndef __IMFAudioMediaType_INTERFACE_DEFINED__
#define __IMFAudioMediaType_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAudioMediaType;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAudioMediaTypeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAudioMediaType *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAudioMediaType *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAudioMediaType *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFAudioMediaType *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFAudioMediaType *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFAudioMediaType *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFAudioMediaType *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFAudioMediaType *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFAudioMediaType *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFAudioMediaType *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFAudioMediaType *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFAudioMediaType *This,
        IMFAttributes *pDest);

    /*** IMFMediaType methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMajorType)(
        IMFAudioMediaType *This,
        GUID *pguidMajorType);

    HRESULT (STDMETHODCALLTYPE *IsCompressedFormat)(
        IMFAudioMediaType *This,
        BOOL *pfCompressed);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IMFAudioMediaType *This,
        IMFMediaType *pIMediaType,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetRepresentation)(
        IMFAudioMediaType *This,
        GUID guidRepresentation,
        LPVOID *ppvRepresentation);

    HRESULT (STDMETHODCALLTYPE *FreeRepresentation)(
        IMFAudioMediaType *This,
        GUID guidRepresentation,
        LPVOID pvRepresentation);

    /*** IMFAudioMediaType methods ***/
    const WAVEFORMATEX * (STDMETHODCALLTYPE *GetAudioFormat)(
        IMFAudioMediaType *This);

    END_INTERFACE
} IMFAudioMediaTypeVtbl;

interface IMFAudioMediaType {
    CONST_VTBL IMFAudioMediaTypeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAudioMediaType_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAudioMediaType_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAudioMediaType_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFAudioMediaType_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFAudioMediaType_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFAudioMediaType_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFAudioMediaType_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFAudioMediaType_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFAudioMediaType_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFAudioMediaType_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFAudioMediaType_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFAudioMediaType_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFAudioMediaType_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFAudioMediaType_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFAudioMediaType_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFAudioMediaType_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFAudioMediaType_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFAudioMediaType_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFAudioMediaType_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFAudioMediaType_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFAudioMediaType_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFAudioMediaType_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFAudioMediaType_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFAudioMediaType_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFAudioMediaType_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFAudioMediaType_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFAudioMediaType_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFAudioMediaType_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFAudioMediaType_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFAudioMediaType_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFAudioMediaType_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFAudioMediaType_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFAudioMediaType_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFMediaType methods ***/
#define IMFAudioMediaType_GetMajorType(This,pguidMajorType) \
    ((This)->lpVtbl->GetMajorType(This,pguidMajorType))
#define IMFAudioMediaType_IsCompressedFormat(This,pfCompressed) \
    ((This)->lpVtbl->IsCompressedFormat(This,pfCompressed))
#define IMFAudioMediaType_IsEqual(This,pIMediaType,pdwFlags) \
    ((This)->lpVtbl->IsEqual(This,pIMediaType,pdwFlags))
#define IMFAudioMediaType_GetRepresentation(This,guidRepresentation,ppvRepresentation) \
    ((This)->lpVtbl->GetRepresentation(This,guidRepresentation,ppvRepresentation))
#define IMFAudioMediaType_FreeRepresentation(This,guidRepresentation,pvRepresentation) \
    ((This)->lpVtbl->FreeRepresentation(This,guidRepresentation,pvRepresentation))
/*** IMFAudioMediaType methods ***/
#define IMFAudioMediaType_GetAudioFormat(This) \
    ((This)->lpVtbl->GetAudioFormat(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAudioMediaType_INTERFACE_DEFINED__ */

#ifndef _WINGDI_H

typedef DWORD RGBQUAD;

typedef struct __POIDL_mfobjects_tag_00000014 {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
} BITMAPINFOHEADER;

typedef struct __POIDL_mfobjects_tag_00000015 {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[ 1 ];
} BITMAPINFO;

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef struct __POIDL_mfobjects_tag_00000016 {
    GUID guidMajorType;
    GUID guidSubtype;
} MFT_REGISTER_TYPE_INFO;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if !defined( _MFVIDEOFORMAT_ )
#define _MFVIDEOFORMAT_

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef enum _MFVideoInterlaceMode {
    MFVideoInterlace_Unknown = 0,
    MFVideoInterlace_Progressive = 2,
    MFVideoInterlace_FieldInterleavedUpperFirst = 3,
    MFVideoInterlace_FieldInterleavedLowerFirst = 4,
    MFVideoInterlace_FieldSingleUpper = 5,
    MFVideoInterlace_FieldSingleLower = 6,
    MFVideoInterlace_MixedInterlaceOrProgressive = 7,
    MFVideoInterlace_Last = 8,
    MFVideoInterlace_ForceDWORD = 0x7fffffff
} MFVideoInterlaceMode;

#define MFVideoInterlace_FieldSingleUpperFirst MFVideoInterlace_FieldSingleUpper
#define MFVideoInterlace_FieldSingleLowerFirst MFVideoInterlace_FieldSingleLower

typedef enum _MFVideoTransferFunction {
    MFVideoTransFunc_Unknown = 0,
    MFVideoTransFunc_10 = 1,
    MFVideoTransFunc_18 = 2,
    MFVideoTransFunc_20 = 3,
    MFVideoTransFunc_22 = 4,
    MFVideoTransFunc_709 = 5,
    MFVideoTransFunc_240M = 6,
    MFVideoTransFunc_sRGB = 7,
    MFVideoTransFunc_28 = 8,
    MFVideoTransFunc_Log_100 = 9,
    MFVideoTransFunc_Log_316 = 10,
    MFVideoTransFunc_709_sym = 11,
    MFVideoTransFunc_2020_const = 12,
    MFVideoTransFunc_2020 = 13,
    MFVideoTransFunc_26 = 14,
    MFVideoTransFunc_2084 = 15,
    MFVideoTransFunc_HLG = 16,
    MFVideoTransFunc_10_rel = 17,
    MFVideoTransFunc_Last = 18,
    MFVideoTransFunc_ForceDWORD = 0x7fffffff
} MFVideoTransferFunction;

typedef enum _MFVideoPrimaries {
    MFVideoPrimaries_Unknown = 0,
    MFVideoPrimaries_reserved = 1,
    MFVideoPrimaries_BT709 = 2,
    MFVideoPrimaries_BT470_2_SysM = 3,
    MFVideoPrimaries_BT470_2_SysBG = 4,
    MFVideoPrimaries_SMPTE170M = 5,
    MFVideoPrimaries_SMPTE240M = 6,
    MFVideoPrimaries_EBU3213 = 7,
    MFVideoPrimaries_SMPTE_C = 8,
    MFVideoPrimaries_BT2020 = 9,
    MFVideoPrimaries_XYZ = 10,
    MFVideoPrimaries_DCI_P3 = 11,
    MFVideoPrimaries_ACES = 12,
    MFVideoPrimaries_Last = 13,
    MFVideoPrimaries_ForceDWORD = 0x7fffffff
} MFVideoPrimaries;

typedef enum _MFVideoLighting {
    MFVideoLighting_Unknown = 0,
    MFVideoLighting_bright = 1,
    MFVideoLighting_office = 2,
    MFVideoLighting_dim = 3,
    MFVideoLighting_dark = 4,
    MFVideoLighting_Last = 5,
    MFVideoLighting_ForceDWORD = 0x7fffffff
} MFVideoLighting;

typedef enum _MFVideoTransferMatrix {
    MFVideoTransferMatrix_Unknown = 0,
    MFVideoTransferMatrix_BT709 = 1,
    MFVideoTransferMatrix_BT601 = 2,
    MFVideoTransferMatrix_SMPTE240M = 3,
    MFVideoTransferMatrix_BT2020_10 = 4,
    MFVideoTransferMatrix_BT2020_12 = 5,
    MFVideoTransferMatrix_Last = 6,
    MFVideoTransferMatrix_ForceDWORD = 0x7fffffff
} MFVideoTransferMatrix;

typedef enum _MFVideoChromaSubsampling {
    MFVideoChromaSubsampling_Unknown = 0,
    MFVideoChromaSubsampling_ProgressiveChroma = 0x8,
    MFVideoChromaSubsampling_Horizontally_Cosited = 0x4,
    MFVideoChromaSubsampling_Vertically_Cosited = 0x2,
    MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes = 0x1,
    MFVideoChromaSubsampling_MPEG2 = MFVideoChromaSubsampling_Horizontally_Cosited | MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes,
    MFVideoChromaSubsampling_MPEG1 = MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes,
    MFVideoChromaSubsampling_DV_PAL = MFVideoChromaSubsampling_Horizontally_Cosited | MFVideoChromaSubsampling_Vertically_Cosited,
    MFVideoChromaSubsampling_Cosited = (MFVideoChromaSubsampling_Horizontally_Cosited | MFVideoChromaSubsampling_Vertically_Cosited) | MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes,
    MFVideoChromaSubsampling_Last = MFVideoChromaSubsampling_Cosited + 1,
    MFVideoChromaSubsampling_ForceDWORD = 0x7fffffff
} MFVideoChromaSubsampling;

typedef enum _MFNominalRange {
    MFNominalRange_Unknown = 0,
    MFNominalRange_Normal = 1,
    MFNominalRange_Wide = 2,
    MFNominalRange_0_255 = 1,
    MFNominalRange_16_235 = 2,
    MFNominalRange_48_208 = 3,
    MFNominalRange_64_127 = 4,
    MFNominalRange_Last = 5,
    MFNominalRange_ForceDWORD = 0x7fffffff
} MFNominalRange;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

typedef enum _MFVideoFlags {
    MFVideoFlag_PAD_TO_Mask = 0x1 | 0x2,
    MFVideoFlag_PAD_TO_None = 0 * 0x1,
    MFVideoFlag_PAD_TO_4x3 = 1 * 0x1,
    MFVideoFlag_PAD_TO_16x9 = 2 * 0x1,
    MFVideoFlag_SrcContentHintMask = (0x4 | 0x8) | 0x10,
    MFVideoFlag_SrcContentHintNone = 0 * 0x4,
    MFVideoFlag_SrcContentHint16x9 = 1 * 0x4,
    MFVideoFlag_SrcContentHint235_1 = 2 * 0x4,
    MFVideoFlag_AnalogProtected = 0x20,
    MFVideoFlag_DigitallyProtected = 0x40,
    MFVideoFlag_ProgressiveContent = 0x80,
    MFVideoFlag_FieldRepeatCountMask = (0x100 | 0x200) | 0x400,
    MFVideoFlag_FieldRepeatCountShift = 8,
    MFVideoFlag_ProgressiveSeqReset = 0x800,
    MFVideoFlag_PanScanEnabled = 0x20000,
    MFVideoFlag_LowerFieldFirst = 0x40000,
    MFVideoFlag_BottomUpLinearRep = 0x80000,
    MFVideoFlags_DXVASurface = 0x100000,
    MFVideoFlags_RenderTargetSurface = 0x400000,
    MFVideoFlags_ForceQWORD = 0x7fffffff
} MFVideoFlags;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef struct _MFRatio {
    DWORD Numerator;
    DWORD Denominator;
} MFRatio;

typedef struct _MFOffset {
    WORD fract;
    short value;
} MFOffset;

typedef struct _MFVideoArea {
    MFOffset OffsetX;
    MFOffset OffsetY;
    SIZE Area;
} MFVideoArea;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

typedef struct _MFVideoInfo {
    DWORD dwWidth;
    DWORD dwHeight;
    MFRatio PixelAspectRatio;
    MFVideoChromaSubsampling SourceChromaSubsampling;
    MFVideoInterlaceMode InterlaceMode;
    MFVideoTransferFunction TransferFunction;
    MFVideoPrimaries ColorPrimaries;
    MFVideoTransferMatrix TransferMatrix;
    MFVideoLighting SourceLighting;
    MFRatio FramesPerSecond;
    MFNominalRange NominalRange;
    MFVideoArea GeometricAperture;
    MFVideoArea MinimumDisplayAperture;
    MFVideoArea PanScanAperture;
    unsigned __int64 VideoFlags;
} MFVideoInfo;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef struct __MFAYUVSample {
    BYTE bCrValue;
    BYTE bCbValue;
    BYTE bYValue;
    BYTE bSampleAlpha8;
} MFAYUVSample;

typedef struct _MFARGB {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbAlpha;
} MFARGB;

typedef union _MFPaletteEntry {
    MFARGB ARGB;
    MFAYUVSample AYCbCr;
} MFPaletteEntry;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

typedef struct _MFVideoSurfaceInfo {
    DWORD Format;
    DWORD PaletteEntries;
    MFPaletteEntry Palette[ 1 ];
} MFVideoSurfaceInfo;

typedef struct _MFVideoCompressedInfo {
    LONGLONG AvgBitrate;
    LONGLONG AvgBitErrorRate;
    DWORD MaxKeyFrameSpacing;
} MFVideoCompressedInfo;

typedef struct _MFVIDEOFORMAT {
    DWORD dwSize;
    MFVideoInfo videoInfo;
    GUID guidFormat;
    MFVideoCompressedInfo compressedInfo;
    MFVideoSurfaceInfo surfaceInfo;
} MFVIDEOFORMAT;

typedef enum _MFStandardVideoFormat {
    MFStdVideoFormat_reserved = 0,
    MFStdVideoFormat_NTSC = 1,
    MFStdVideoFormat_PAL = 2,
    MFStdVideoFormat_DVD_NTSC = 3,
    MFStdVideoFormat_DVD_PAL = 4,
    MFStdVideoFormat_DV_PAL = 5,
    MFStdVideoFormat_DV_NTSC = 6,
    MFStdVideoFormat_ATSC_SD480i = 7,
    MFStdVideoFormat_ATSC_HD1080i = 8,
    MFStdVideoFormat_ATSC_HD720p = 9
} MFStandardVideoFormat;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFVideoMediaType interface
 */
#ifndef __IMFVideoMediaType_INTERFACE_DEFINED__
#define __IMFVideoMediaType_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFVideoMediaType;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFVideoMediaTypeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFVideoMediaType *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFVideoMediaType *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFVideoMediaType *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFVideoMediaType *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFVideoMediaType *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFVideoMediaType *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFVideoMediaType *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFVideoMediaType *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFVideoMediaType *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFVideoMediaType *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFVideoMediaType *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFVideoMediaType *This,
        IMFAttributes *pDest);

    /*** IMFMediaType methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMajorType)(
        IMFVideoMediaType *This,
        GUID *pguidMajorType);

    HRESULT (STDMETHODCALLTYPE *IsCompressedFormat)(
        IMFVideoMediaType *This,
        BOOL *pfCompressed);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IMFVideoMediaType *This,
        IMFMediaType *pIMediaType,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetRepresentation)(
        IMFVideoMediaType *This,
        GUID guidRepresentation,
        LPVOID *ppvRepresentation);

    HRESULT (STDMETHODCALLTYPE *FreeRepresentation)(
        IMFVideoMediaType *This,
        GUID guidRepresentation,
        LPVOID pvRepresentation);

    /*** IMFVideoMediaType methods ***/
    const MFVIDEOFORMAT * (STDMETHODCALLTYPE *GetVideoFormat)(
        IMFVideoMediaType *This);

    HRESULT (STDMETHODCALLTYPE *GetVideoRepresentation)(
        IMFVideoMediaType *This,
        GUID guidRepresentation,
        LPVOID *ppvRepresentation,
        LONG lStride);

    END_INTERFACE
} IMFVideoMediaTypeVtbl;

interface IMFVideoMediaType {
    CONST_VTBL IMFVideoMediaTypeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFVideoMediaType_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFVideoMediaType_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFVideoMediaType_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFVideoMediaType_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFVideoMediaType_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFVideoMediaType_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFVideoMediaType_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFVideoMediaType_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFVideoMediaType_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFVideoMediaType_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFVideoMediaType_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFVideoMediaType_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFVideoMediaType_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFVideoMediaType_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFVideoMediaType_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFVideoMediaType_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFVideoMediaType_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFVideoMediaType_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFVideoMediaType_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFVideoMediaType_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFVideoMediaType_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFVideoMediaType_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFVideoMediaType_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFVideoMediaType_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFVideoMediaType_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFVideoMediaType_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFVideoMediaType_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFVideoMediaType_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFVideoMediaType_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFVideoMediaType_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFVideoMediaType_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFVideoMediaType_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFVideoMediaType_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFMediaType methods ***/
#define IMFVideoMediaType_GetMajorType(This,pguidMajorType) \
    ((This)->lpVtbl->GetMajorType(This,pguidMajorType))
#define IMFVideoMediaType_IsCompressedFormat(This,pfCompressed) \
    ((This)->lpVtbl->IsCompressedFormat(This,pfCompressed))
#define IMFVideoMediaType_IsEqual(This,pIMediaType,pdwFlags) \
    ((This)->lpVtbl->IsEqual(This,pIMediaType,pdwFlags))
#define IMFVideoMediaType_GetRepresentation(This,guidRepresentation,ppvRepresentation) \
    ((This)->lpVtbl->GetRepresentation(This,guidRepresentation,ppvRepresentation))
#define IMFVideoMediaType_FreeRepresentation(This,guidRepresentation,pvRepresentation) \
    ((This)->lpVtbl->FreeRepresentation(This,guidRepresentation,pvRepresentation))
/*** IMFVideoMediaType methods ***/
#define IMFVideoMediaType_GetVideoFormat(This) \
    ((This)->lpVtbl->GetVideoFormat(This))
#define IMFVideoMediaType_GetVideoRepresentation(This,guidRepresentation,ppvRepresentation,lStride) \
    ((This)->lpVtbl->GetVideoRepresentation(This,guidRepresentation,ppvRepresentation,lStride))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFVideoMediaType_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFAsyncResult interface
 */
#ifndef __IMFAsyncResult_INTERFACE_DEFINED__
#define __IMFAsyncResult_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAsyncResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAsyncResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAsyncResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAsyncResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAsyncResult *This);

    /*** IMFAsyncResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMFAsyncResult *This,
        IUnknown **ppunkState);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IMFAsyncResult *This);

    HRESULT (STDMETHODCALLTYPE *SetStatus)(
        IMFAsyncResult *This,
        HRESULT hrStatus);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IMFAsyncResult *This,
        IUnknown **ppObject);

    IUnknown * (STDMETHODCALLTYPE *GetStateNoAddRef)(
        IMFAsyncResult *This);

    END_INTERFACE
} IMFAsyncResultVtbl;

interface IMFAsyncResult {
    CONST_VTBL IMFAsyncResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAsyncResult_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAsyncResult_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAsyncResult_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAsyncResult methods ***/
#define IMFAsyncResult_GetState(This,ppunkState) \
    ((This)->lpVtbl->GetState(This,ppunkState))
#define IMFAsyncResult_GetStatus(This) \
    ((This)->lpVtbl->GetStatus(This))
#define IMFAsyncResult_SetStatus(This,hrStatus) \
    ((This)->lpVtbl->SetStatus(This,hrStatus))
#define IMFAsyncResult_GetObject(This,ppObject) \
    ((This)->lpVtbl->GetObject(This,ppObject))
#define IMFAsyncResult_GetStateNoAddRef(This) \
    ((This)->lpVtbl->GetStateNoAddRef(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAsyncResult_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFAsyncCallback interface
 */
#ifndef __IMFAsyncCallback_INTERFACE_DEFINED__
#define __IMFAsyncCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAsyncCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAsyncCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAsyncCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAsyncCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAsyncCallback *This);

    /*** IMFAsyncCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *GetParameters)(
        IMFAsyncCallback *This,
        DWORD *pdwFlags,
        DWORD *pdwQueue);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IMFAsyncCallback *This,
        IMFAsyncResult *pAsyncResult);

    END_INTERFACE
} IMFAsyncCallbackVtbl;

interface IMFAsyncCallback {
    CONST_VTBL IMFAsyncCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAsyncCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAsyncCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAsyncCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAsyncCallback methods ***/
#define IMFAsyncCallback_GetParameters(This,pdwFlags,pdwQueue) \
    ((This)->lpVtbl->GetParameters(This,pdwFlags,pdwQueue))
#define IMFAsyncCallback_Invoke(This,pAsyncResult) \
    ((This)->lpVtbl->Invoke(This,pAsyncResult))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAsyncCallback_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFAsyncCallbackLogging interface
 */
#ifndef __IMFAsyncCallbackLogging_INTERFACE_DEFINED__
#define __IMFAsyncCallbackLogging_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFAsyncCallbackLogging;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFAsyncCallbackLoggingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFAsyncCallbackLogging *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFAsyncCallbackLogging *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFAsyncCallbackLogging *This);

    /*** IMFAsyncCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *GetParameters)(
        IMFAsyncCallbackLogging *This,
        DWORD *pdwFlags,
        DWORD *pdwQueue);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IMFAsyncCallbackLogging *This,
        IMFAsyncResult *pAsyncResult);

    /*** IMFAsyncCallbackLogging methods ***/
    void * (STDMETHODCALLTYPE *GetObjectPointer)(
        IMFAsyncCallbackLogging *This);

    DWORD (STDMETHODCALLTYPE *GetObjectTag)(
        IMFAsyncCallbackLogging *This);

    END_INTERFACE
} IMFAsyncCallbackLoggingVtbl;

interface IMFAsyncCallbackLogging {
    CONST_VTBL IMFAsyncCallbackLoggingVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFAsyncCallbackLogging_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFAsyncCallbackLogging_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFAsyncCallbackLogging_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAsyncCallback methods ***/
#define IMFAsyncCallbackLogging_GetParameters(This,pdwFlags,pdwQueue) \
    ((This)->lpVtbl->GetParameters(This,pdwFlags,pdwQueue))
#define IMFAsyncCallbackLogging_Invoke(This,pAsyncResult) \
    ((This)->lpVtbl->Invoke(This,pAsyncResult))
/*** IMFAsyncCallbackLogging methods ***/
#define IMFAsyncCallbackLogging_GetObjectPointer(This) \
    ((This)->lpVtbl->GetObjectPointer(This))
#define IMFAsyncCallbackLogging_GetObjectTag(This) \
    ((This)->lpVtbl->GetObjectTag(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFAsyncCallbackLogging_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

#define MFASYNC_FAST_IO_PROCESSING_CALLBACK 0x00000001
#define MFASYNC_SIGNAL_CALLBACK 0x00000002
#define MFASYNC_BLOCKING_CALLBACK 0x00000004
#define MFASYNC_REPLY_CALLBACK 0x00000008
#define MFASYNC_LOCALIZE_REMOTE_CALLBACK 0x00000010

#define MFASYNC_CALLBACK_QUEUE_UNDEFINED              0x00000000
#define MFASYNC_CALLBACK_QUEUE_STANDARD               0x00000001
#define MFASYNC_CALLBACK_QUEUE_RT                     0x00000002
#define MFASYNC_CALLBACK_QUEUE_IO                     0x00000003
#define MFASYNC_CALLBACK_QUEUE_TIMER                  0x00000004
#define MFASYNC_CALLBACK_QUEUE_MULTITHREADED          0x00000005
#define MFASYNC_CALLBACK_QUEUE_LONG_FUNCTION          0x00000007
#define MFASYNC_CALLBACK_QUEUE_PRIVATE_MASK           0xFFFF0000
#define MFASYNC_CALLBACK_QUEUE_ALL                    0xFFFFFFFF

enum {
    MEUnknown = 0,
    MEError = 1,
    MEExtendedType = 2,
    MENonFatalError = 3,
    MEGenericV1Anchor = MENonFatalError,
    MESessionUnknown = 100,
    MESessionTopologySet = 101,
    MESessionTopologiesCleared = 102,
    MESessionStarted = 103,
    MESessionPaused = 104,
    MESessionStopped = 105,
    MESessionClosed = 106,
    MESessionEnded = 107,
    MESessionRateChanged = 108,
    MESessionScrubSampleComplete = 109,
    MESessionCapabilitiesChanged = 110,
    MESessionTopologyStatus = 111,
    MESessionNotifyPresentationTime = 112,
    MENewPresentation = 113,
    MELicenseAcquisitionStart = 114,
    MELicenseAcquisitionCompleted = 115,
    MEIndividualizationStart = 116,
    MEIndividualizationCompleted = 117,
    MEEnablerProgress = 118,
    MEEnablerCompleted = 119,
    MEPolicyError = 120,
    MEPolicyReport = 121,
    MEBufferingStarted = 122,
    MEBufferingStopped = 123,
    MEConnectStart = 124,
    MEConnectEnd = 125,
    MEReconnectStart = 126,
    MEReconnectEnd = 127,
    MERendererEvent = 128,
    MESessionStreamSinkFormatChanged = 129,
    MESessionV1Anchor = MESessionStreamSinkFormatChanged,
    MESourceUnknown = 200,
    MESourceStarted = 201,
    MEStreamStarted = 202,
    MESourceSeeked = 203,
    MEStreamSeeked = 204,
    MENewStream = 205,
    MEUpdatedStream = 206,
    MESourceStopped = 207,
    MEStreamStopped = 208,
    MESourcePaused = 209,
    MEStreamPaused = 210,
    MEEndOfPresentation = 211,
    MEEndOfStream = 212,
    MEMediaSample = 213,
    MEStreamTick = 214,
    MEStreamThinMode = 215,
    MEStreamFormatChanged = 216,
    MESourceRateChanged = 217,
    MEEndOfPresentationSegment = 218,
    MESourceCharacteristicsChanged = 219,
    MESourceRateChangeRequested = 220,
    MESourceMetadataChanged = 221,
    MESequencerSourceTopologyUpdated = 222,
    MESourceV1Anchor = MESequencerSourceTopologyUpdated,
    MESinkUnknown = 300,
    MEStreamSinkStarted = 301,
    MEStreamSinkStopped = 302,
    MEStreamSinkPaused = 303,
    MEStreamSinkRateChanged = 304,
    MEStreamSinkRequestSample = 305,
    MEStreamSinkMarker = 306,
    MEStreamSinkPrerolled = 307,
    MEStreamSinkScrubSampleComplete = 308,
    MEStreamSinkFormatChanged = 309,
    MEStreamSinkDeviceChanged = 310,
    MEQualityNotify = 311,
    MESinkInvalidated = 312,
    MEAudioSessionNameChanged = 313,
    MEAudioSessionVolumeChanged = 314,
    MEAudioSessionDeviceRemoved = 315,
    MEAudioSessionServerShutdown = 316,
    MEAudioSessionGroupingParamChanged = 317,
    MEAudioSessionIconChanged = 318,
    MEAudioSessionFormatChanged = 319,
    MEAudioSessionDisconnected = 320,
    MEAudioSessionExclusiveModeOverride = 321,
    MESinkV1Anchor = MEAudioSessionExclusiveModeOverride,
    MECaptureAudioSessionVolumeChanged = 322,
    MECaptureAudioSessionDeviceRemoved = 323,
    MECaptureAudioSessionFormatChanged = 324,
    MECaptureAudioSessionDisconnected = 325,
    MECaptureAudioSessionExclusiveModeOverride = 326,
    MECaptureAudioSessionServerShutdown = 327,
    MESinkV2Anchor = MECaptureAudioSessionServerShutdown,
    METrustUnknown = 400,
    MEPolicyChanged = 401,
    MEContentProtectionMessage = 402,
    MEPolicySet = 403,
    METrustV1Anchor = MEPolicySet,
    MEWMDRMLicenseBackupCompleted = 500,
    MEWMDRMLicenseBackupProgress = 501,
    MEWMDRMLicenseRestoreCompleted = 502,
    MEWMDRMLicenseRestoreProgress = 503,
    MEWMDRMLicenseAcquisitionCompleted = 506,
    MEWMDRMIndividualizationCompleted = 508,
    MEWMDRMIndividualizationProgress = 513,
    MEWMDRMProximityCompleted = 514,
    MEWMDRMLicenseStoreCleaned = 515,
    MEWMDRMRevocationDownloadCompleted = 516,
    MEWMDRMV1Anchor = MEWMDRMRevocationDownloadCompleted,
    METransformUnknown = 600,
    METransformNeedInput = 601,
    METransformHaveOutput = 602,
    METransformDrainComplete = 603,
    METransformMarker = 604,
    METransformInputStreamStateChanged = 605,
    MEByteStreamCharacteristicsChanged = 700,
    MEVideoCaptureDeviceRemoved = 800,
    MEVideoCaptureDevicePreempted = 801,
    MEStreamSinkFormatInvalidated = 802,
    MEEncodingParameters = 803,
    MEContentProtectionMetadata = 900,
    MEDeviceThermalStateChanged = 950,
    MEReservedMax = 10000
};

typedef DWORD MediaEventType;

/*****************************************************************************
 * IMFMediaEvent interface
 */
#ifndef __IMFMediaEvent_INTERFACE_DEFINED__
#define __IMFMediaEvent_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaEventVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaEvent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaEvent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaEvent *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFMediaEvent *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFMediaEvent *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFMediaEvent *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFMediaEvent *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFMediaEvent *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFMediaEvent *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFMediaEvent *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFMediaEvent *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFMediaEvent *This,
        IMFAttributes *pDest);

    /*** IMFMediaEvent methods ***/
    HRESULT (STDMETHODCALLTYPE *GetType)(
        IMFMediaEvent *This,
        MediaEventType *pmet);

    HRESULT (STDMETHODCALLTYPE *GetExtendedType)(
        IMFMediaEvent *This,
        GUID *pguidExtendedType);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IMFMediaEvent *This,
        HRESULT *phrStatus);

    HRESULT (STDMETHODCALLTYPE *GetValue)(
        IMFMediaEvent *This,
        PROPVARIANT *pvValue);

    END_INTERFACE
} IMFMediaEventVtbl;

interface IMFMediaEvent {
    CONST_VTBL IMFMediaEventVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaEvent_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaEvent_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaEvent_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFMediaEvent_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFMediaEvent_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFMediaEvent_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFMediaEvent_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFMediaEvent_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFMediaEvent_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFMediaEvent_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFMediaEvent_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFMediaEvent_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFMediaEvent_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFMediaEvent_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFMediaEvent_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFMediaEvent_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFMediaEvent_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFMediaEvent_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFMediaEvent_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFMediaEvent_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFMediaEvent_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFMediaEvent_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFMediaEvent_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFMediaEvent_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFMediaEvent_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFMediaEvent_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFMediaEvent_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFMediaEvent_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFMediaEvent_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFMediaEvent_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFMediaEvent_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFMediaEvent_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFMediaEvent_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFMediaEvent methods ***/
#define IMFMediaEvent_GetType(This,pmet) \
    ((This)->lpVtbl->GetType(This,pmet))
#define IMFMediaEvent_GetExtendedType(This,pguidExtendedType) \
    ((This)->lpVtbl->GetExtendedType(This,pguidExtendedType))
#define IMFMediaEvent_GetStatus(This,phrStatus) \
    ((This)->lpVtbl->GetStatus(This,phrStatus))
#define IMFMediaEvent_GetValue(This,pvValue) \
    ((This)->lpVtbl->GetValue(This,pvValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaEvent_INTERFACE_DEFINED__ */

#define MF_EVENT_FLAG_NO_WAIT 0x00000001


#ifndef __IMFRemoteAsyncCallback_FWD_DEFINED__
#define __IMFRemoteAsyncCallback_FWD_DEFINED__
typedef interface IMFRemoteAsyncCallback IMFRemoteAsyncCallback;
#endif /* __IMFRemoteAsyncCallback_FWD_DEFINED__ */

/*****************************************************************************
 * IMFMediaEventGenerator interface
 */
#ifndef __IMFMediaEventGenerator_INTERFACE_DEFINED__
#define __IMFMediaEventGenerator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaEventGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaEventGeneratorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaEventGenerator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaEventGenerator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaEventGenerator *This);

    /*** IMFMediaEventGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaEventGenerator *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaEventGenerator *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaEventGenerator *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaEventGenerator *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    END_INTERFACE
} IMFMediaEventGeneratorVtbl;

interface IMFMediaEventGenerator {
    CONST_VTBL IMFMediaEventGeneratorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaEventGenerator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaEventGenerator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaEventGenerator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventGenerator methods ***/
#define IMFMediaEventGenerator_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaEventGenerator_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaEventGenerator_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaEventGenerator_QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEvent(This,met,guidExtendedType,hrStatus,pvValue))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_RemoteBeginGetEvent_Proxy(
    IMFMediaEventGenerator *This,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFMediaEventGenerator_RemoteBeginGetEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_RemoteEndGetEvent_Proxy(
    IMFMediaEventGenerator *This,
    IUnknown *pResult,
    DWORD *pcbEvent,
    BYTE **ppbEvent);

void __RPC_STUB IMFMediaEventGenerator_RemoteEndGetEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFMediaEventGenerator_BeginGetEvent_Proxy(
    IMFAsyncCallback *pCallback,
    IUnknown *punkState);
HRESULT IMFMediaEventGenerator_BeginGetEvent_Stub(
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFMediaEventGenerator_EndGetEvent_Proxy(
    IMFAsyncResult *pResult,
    IMFMediaEvent **ppEvent);
HRESULT IMFMediaEventGenerator_EndGetEvent_Stub(
    IUnknown *pResult,
    DWORD *pcbEvent,
    BYTE **ppbEvent);
#endif /* __IMFMediaEventGenerator_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFRemoteAsyncCallback interface
 */
#ifndef __IMFRemoteAsyncCallback_INTERFACE_DEFINED__
#define __IMFRemoteAsyncCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFRemoteAsyncCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFRemoteAsyncCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFRemoteAsyncCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFRemoteAsyncCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFRemoteAsyncCallback *This);

    /*** IMFRemoteAsyncCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IMFRemoteAsyncCallback *This,
        HRESULT hr,
        IUnknown *pRemoteResult);

    END_INTERFACE
} IMFRemoteAsyncCallbackVtbl;

interface IMFRemoteAsyncCallback {
    CONST_VTBL IMFRemoteAsyncCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFRemoteAsyncCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFRemoteAsyncCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFRemoteAsyncCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFRemoteAsyncCallback methods ***/
#define IMFRemoteAsyncCallback_Invoke(This,hr,pRemoteResult) \
    ((This)->lpVtbl->Invoke(This,hr,pRemoteResult))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFRemoteAsyncCallback_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef enum _MFBYTESTREAM_SEEK_ORIGIN {
    msoBegin = 0,
    msoCurrent = 1
} MFBYTESTREAM_SEEK_ORIGIN;

/*****************************************************************************
 * IMFByteStream interface
 */
#ifndef __IMFByteStream_INTERFACE_DEFINED__
#define __IMFByteStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStream *This);

    /*** IMFByteStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCapabilities)(
        IMFByteStream *This,
        DWORD *pdwCapabilities);

    HRESULT (STDMETHODCALLTYPE *GetLength)(
        IMFByteStream *This,
        QWORD *pqwLength);

    HRESULT (STDMETHODCALLTYPE *SetLength)(
        IMFByteStream *This,
        QWORD qwLength);

    HRESULT (STDMETHODCALLTYPE *GetCurrentPosition)(
        IMFByteStream *This,
        QWORD *pqwPosition);

    HRESULT (STDMETHODCALLTYPE *SetCurrentPosition)(
        IMFByteStream *This,
        QWORD qwPosition);

    HRESULT (STDMETHODCALLTYPE *IsEndOfStream)(
        IMFByteStream *This,
        BOOL *pfEndOfStream);

    HRESULT (STDMETHODCALLTYPE *Read)(
        IMFByteStream *This,
        BYTE *pb,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *BeginRead)(
        IMFByteStream *This,
        BYTE *pb,
        ULONG cb,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndRead)(
        IMFByteStream *This,
        IMFAsyncResult *pResult,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IMFByteStream *This,
        const BYTE *pb,
        ULONG cb,
        ULONG *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *BeginWrite)(
        IMFByteStream *This,
        const BYTE *pb,
        ULONG cb,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndWrite)(
        IMFByteStream *This,
        IMFAsyncResult *pResult,
        ULONG *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Seek)(
        IMFByteStream *This,
        MFBYTESTREAM_SEEK_ORIGIN SeekOrigin,
        LONGLONG llSeekOffset,
        DWORD dwSeekFlags,
        QWORD *pqwCurrentPosition);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IMFByteStream *This);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IMFByteStream *This);

    END_INTERFACE
} IMFByteStreamVtbl;

interface IMFByteStream {
    CONST_VTBL IMFByteStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStream methods ***/
#define IMFByteStream_GetCapabilities(This,pdwCapabilities) \
    ((This)->lpVtbl->GetCapabilities(This,pdwCapabilities))
#define IMFByteStream_GetLength(This,pqwLength) \
    ((This)->lpVtbl->GetLength(This,pqwLength))
#define IMFByteStream_SetLength(This,qwLength) \
    ((This)->lpVtbl->SetLength(This,qwLength))
#define IMFByteStream_GetCurrentPosition(This,pqwPosition) \
    ((This)->lpVtbl->GetCurrentPosition(This,pqwPosition))
#define IMFByteStream_SetCurrentPosition(This,qwPosition) \
    ((This)->lpVtbl->SetCurrentPosition(This,qwPosition))
#define IMFByteStream_IsEndOfStream(This,pfEndOfStream) \
    ((This)->lpVtbl->IsEndOfStream(This,pfEndOfStream))
#define IMFByteStream_Read(This,pb,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pb,cb,pcbRead))
#define IMFByteStream_BeginRead(This,pb,cb,pCallback,punkState) \
    ((This)->lpVtbl->BeginRead(This,pb,cb,pCallback,punkState))
#define IMFByteStream_EndRead(This,pResult,pcbRead) \
    ((This)->lpVtbl->EndRead(This,pResult,pcbRead))
#define IMFByteStream_Write(This,pb,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pb,cb,pcbWritten))
#define IMFByteStream_BeginWrite(This,pb,cb,pCallback,punkState) \
    ((This)->lpVtbl->BeginWrite(This,pb,cb,pCallback,punkState))
#define IMFByteStream_EndWrite(This,pResult,pcbWritten) \
    ((This)->lpVtbl->EndWrite(This,pResult,pcbWritten))
#define IMFByteStream_Seek(This,SeekOrigin,llSeekOffset,dwSeekFlags,pqwCurrentPosition) \
    ((This)->lpVtbl->Seek(This,SeekOrigin,llSeekOffset,dwSeekFlags,pqwCurrentPosition))
#define IMFByteStream_Flush(This) \
    ((This)->lpVtbl->Flush(This))
#define IMFByteStream_Close(This) \
    ((This)->lpVtbl->Close(This))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteBeginRead_Proxy(
    IMFByteStream *This,
    ULONG cb,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFByteStream_RemoteBeginRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteEndRead_Proxy(
    IMFByteStream *This,
    IUnknown *punkResult,
    BYTE *pb,
    ULONG cb,
    ULONG *pcbRead);

void __RPC_STUB IMFByteStream_RemoteEndRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteBeginWrite_Proxy(
    IMFByteStream *This,
    const BYTE *pb,
    ULONG cb,
    IMFRemoteAsyncCallback *pCallback);

void __RPC_STUB IMFByteStream_RemoteBeginWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteEndWrite_Proxy(
    IMFByteStream *This,
    IUnknown *punkResult,
    ULONG *pcbWritten);

void __RPC_STUB IMFByteStream_RemoteEndWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IMFByteStream_BeginRead_Proxy(
    BYTE *pb,
    ULONG cb,
    IMFAsyncCallback *pCallback,
    IUnknown *punkState);
HRESULT IMFByteStream_BeginRead_Stub(
    ULONG cb,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFByteStream_EndRead_Proxy(
    IMFAsyncResult *pResult,
    ULONG *pcbRead);
HRESULT IMFByteStream_EndRead_Stub(
    IUnknown *punkResult,
    BYTE *pb,
    ULONG cb,
    ULONG *pcbRead);
HRESULT IMFByteStream_BeginWrite_Proxy(
    const BYTE *pb,
    ULONG cb,
    IMFAsyncCallback *pCallback,
    IUnknown *punkState);
HRESULT IMFByteStream_BeginWrite_Stub(
    const BYTE *pb,
    ULONG cb,
    IMFRemoteAsyncCallback *pCallback);
HRESULT IMFByteStream_EndWrite_Proxy(
    IMFAsyncResult *pResult,
    ULONG *pcbWritten);
HRESULT IMFByteStream_EndWrite_Stub(
    IUnknown *punkResult,
    ULONG *pcbWritten);
#endif /* __IMFByteStream_INTERFACE_DEFINED__ */

#define MFBYTESTREAM_IS_READABLE                0x00000001

#define MFBYTESTREAM_IS_WRITABLE                0x00000002

#define MFBYTESTREAM_IS_SEEKABLE                0x00000004

#define MFBYTESTREAM_IS_REMOTE                  0x00000008

#define MFBYTESTREAM_IS_DIRECTORY               0x00000080

#define MFBYTESTREAM_HAS_SLOW_SEEK              0x00000100

#define MFBYTESTREAM_IS_PARTIALLY_DOWNLOADED    0x00000200

#if (WINVER >= _WIN32_WINNT_WIN7)

#define MFBYTESTREAM_SHARE_WRITE                0x00000400
#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if (WINVER >= _WIN32_WINNT_WIN8)

#define MFBYTESTREAM_DOES_NOT_USE_NETWORK        0x00000800
#endif // (WINVER >= _WIN32_WINNT_WIN8)

#define MFBYTESTREAM_SEEK_FLAG_CANCEL_PENDING_IO 0x00000001

EXTERN_GUID( MF_BYTESTREAM_ORIGIN_NAME, 0xfc358288, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

EXTERN_GUID( MF_BYTESTREAM_CONTENT_TYPE, 0xfc358289, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

EXTERN_GUID( MF_BYTESTREAM_DURATION, 0xfc35828a, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

EXTERN_GUID( MF_BYTESTREAM_LAST_MODIFIED_TIME, 0xfc35828b, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

#if (WINVER >= _WIN32_WINNT_WIN7)

EXTERN_GUID( MF_BYTESTREAM_IFO_FILE_URI, 0xfc35828c, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

EXTERN_GUID( MF_BYTESTREAM_DLNA_PROFILE_ID, 0xfc35828d, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

EXTERN_GUID( MF_BYTESTREAM_EFFECTIVE_URL, 0x9afa0209, 0x89d1, 0x42af, 0x84, 0x56, 0x1d, 0xe6, 0xb5, 0x62, 0xd6, 0x91);

EXTERN_GUID( MF_BYTESTREAM_TRANSCODED, 0xb6c5c282, 0x4dc9, 0x4db9, 0xab, 0x48, 0xcf, 0x3b, 0x6d, 0x8b, 0xc5, 0xe0 );

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

EXTERN_GUID(CLSID_MFByteStreamProxyClassFactory, 0x770e8e77, 0x4916, 0x441c, 0xa9, 0xa7, 0xb3, 0x42, 0xd0, 0xee, 0xbc, 0x71 );

/*****************************************************************************
 * IMFByteStreamProxyClassFactory interface
 */
#ifndef __IMFByteStreamProxyClassFactory_INTERFACE_DEFINED__
#define __IMFByteStreamProxyClassFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFByteStreamProxyClassFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFByteStreamProxyClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFByteStreamProxyClassFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFByteStreamProxyClassFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFByteStreamProxyClassFactory *This);

    /*** IMFByteStreamProxyClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateByteStreamProxy)(
        IMFByteStreamProxyClassFactory *This,
        IMFByteStream *pByteStream,
        IMFAttributes *pAttributes,
        REFIID riid,
        LPVOID *ppvObject);

    END_INTERFACE
} IMFByteStreamProxyClassFactoryVtbl;

interface IMFByteStreamProxyClassFactory {
    CONST_VTBL IMFByteStreamProxyClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFByteStreamProxyClassFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFByteStreamProxyClassFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFByteStreamProxyClassFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFByteStreamProxyClassFactory methods ***/
#define IMFByteStreamProxyClassFactory_CreateByteStreamProxy(This,pByteStream,pAttributes,riid,ppvObject) \
    ((This)->lpVtbl->CreateByteStreamProxy(This,pByteStream,pAttributes,riid,ppvObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFByteStreamProxyClassFactory_INTERFACE_DEFINED__ */

typedef enum __POIDL_mfobjects_tag_00000017 {
    MF_ACCESSMODE_READ = 1,
    MF_ACCESSMODE_WRITE = 2,
    MF_ACCESSMODE_READWRITE = 3
} MF_FILE_ACCESSMODE;

typedef enum __POIDL_mfobjects_tag_00000018 {
    MF_OPENMODE_FAIL_IF_NOT_EXIST = 0,
    MF_OPENMODE_FAIL_IF_EXIST = 1,
    MF_OPENMODE_RESET_IF_EXIST = 2,
    MF_OPENMODE_APPEND_IF_EXIST = 3,
    MF_OPENMODE_DELETE_IF_EXIST = 4
} MF_FILE_OPENMODE;

typedef enum __POIDL_mfobjects_tag_00000019 {
    MF_FILEFLAGS_NONE = 0x0,
    MF_FILEFLAGS_NOBUFFERING = 0x1,
    MF_FILEFLAGS_ALLOW_WRITE_SHARING = 0x2
} MF_FILE_FLAGS;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFSampleOutputStream interface
 */
#ifndef __IMFSampleOutputStream_INTERFACE_DEFINED__
#define __IMFSampleOutputStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSampleOutputStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSampleOutputStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSampleOutputStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSampleOutputStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSampleOutputStream *This);

    /*** IMFSampleOutputStream methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginWriteSample)(
        IMFSampleOutputStream *This,
        IMFSample *pSample,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndWriteSample)(
        IMFSampleOutputStream *This,
        IMFAsyncResult *pResult);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IMFSampleOutputStream *This);

    END_INTERFACE
} IMFSampleOutputStreamVtbl;

interface IMFSampleOutputStream {
    CONST_VTBL IMFSampleOutputStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSampleOutputStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSampleOutputStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSampleOutputStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSampleOutputStream methods ***/
#define IMFSampleOutputStream_BeginWriteSample(This,pSample,pCallback,punkState) \
    ((This)->lpVtbl->BeginWriteSample(This,pSample,pCallback,punkState))
#define IMFSampleOutputStream_EndWriteSample(This,pResult) \
    ((This)->lpVtbl->EndWriteSample(This,pResult))
#define IMFSampleOutputStream_Close(This) \
    ((This)->lpVtbl->Close(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSampleOutputStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFCollection interface
 */
#ifndef __IMFCollection_INTERFACE_DEFINED__
#define __IMFCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFCollection *This);

    /*** IMFCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetElementCount)(
        IMFCollection *This,
        DWORD *pcElements);

    HRESULT (STDMETHODCALLTYPE *GetElement)(
        IMFCollection *This,
        DWORD dwElementIndex,
        IUnknown **ppUnkElement);

    HRESULT (STDMETHODCALLTYPE *AddElement)(
        IMFCollection *This,
        IUnknown *pUnkElement);

    HRESULT (STDMETHODCALLTYPE *RemoveElement)(
        IMFCollection *This,
        DWORD dwElementIndex,
        IUnknown **ppUnkElement);

    HRESULT (STDMETHODCALLTYPE *InsertElementAt)(
        IMFCollection *This,
        DWORD dwIndex,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *RemoveAllElements)(
        IMFCollection *This);

    END_INTERFACE
} IMFCollectionVtbl;

interface IMFCollection {
    CONST_VTBL IMFCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFCollection methods ***/
#define IMFCollection_GetElementCount(This,pcElements) \
    ((This)->lpVtbl->GetElementCount(This,pcElements))
#define IMFCollection_GetElement(This,dwElementIndex,ppUnkElement) \
    ((This)->lpVtbl->GetElement(This,dwElementIndex,ppUnkElement))
#define IMFCollection_AddElement(This,pUnkElement) \
    ((This)->lpVtbl->AddElement(This,pUnkElement))
#define IMFCollection_RemoveElement(This,dwElementIndex,ppUnkElement) \
    ((This)->lpVtbl->RemoveElement(This,dwElementIndex,ppUnkElement))
#define IMFCollection_InsertElementAt(This,dwIndex,pUnknown) \
    ((This)->lpVtbl->InsertElementAt(This,dwIndex,pUnknown))
#define IMFCollection_RemoveAllElements(This) \
    ((This)->lpVtbl->RemoveAllElements(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMediaEventQueue interface
 */
#ifndef __IMFMediaEventQueue_INTERFACE_DEFINED__
#define __IMFMediaEventQueue_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMediaEventQueue;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMediaEventQueueVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMediaEventQueue *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMediaEventQueue *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMediaEventQueue *This);

    /*** IMFMediaEventQueue methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEvent)(
        IMFMediaEventQueue *This,
        DWORD dwFlags,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *BeginGetEvent)(
        IMFMediaEventQueue *This,
        IMFAsyncCallback *pCallback,
        IUnknown *punkState);

    HRESULT (STDMETHODCALLTYPE *EndGetEvent)(
        IMFMediaEventQueue *This,
        IMFAsyncResult *pResult,
        IMFMediaEvent **ppEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEvent)(
        IMFMediaEventQueue *This,
        IMFMediaEvent *pEvent);

    HRESULT (STDMETHODCALLTYPE *QueueEventParamVar)(
        IMFMediaEventQueue *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        const PROPVARIANT *pvValue);

    HRESULT (STDMETHODCALLTYPE *QueueEventParamUnk)(
        IMFMediaEventQueue *This,
        MediaEventType met,
        REFGUID guidExtendedType,
        HRESULT hrStatus,
        IUnknown *pUnk);

    HRESULT (STDMETHODCALLTYPE *Shutdown)(
        IMFMediaEventQueue *This);

    END_INTERFACE
} IMFMediaEventQueueVtbl;

interface IMFMediaEventQueue {
    CONST_VTBL IMFMediaEventQueueVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMediaEventQueue_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMediaEventQueue_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMediaEventQueue_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMediaEventQueue methods ***/
#define IMFMediaEventQueue_GetEvent(This,dwFlags,ppEvent) \
    ((This)->lpVtbl->GetEvent(This,dwFlags,ppEvent))
#define IMFMediaEventQueue_BeginGetEvent(This,pCallback,punkState) \
    ((This)->lpVtbl->BeginGetEvent(This,pCallback,punkState))
#define IMFMediaEventQueue_EndGetEvent(This,pResult,ppEvent) \
    ((This)->lpVtbl->EndGetEvent(This,pResult,ppEvent))
#define IMFMediaEventQueue_QueueEvent(This,pEvent) \
    ((This)->lpVtbl->QueueEvent(This,pEvent))
#define IMFMediaEventQueue_QueueEventParamVar(This,met,guidExtendedType,hrStatus,pvValue) \
    ((This)->lpVtbl->QueueEventParamVar(This,met,guidExtendedType,hrStatus,pvValue))
#define IMFMediaEventQueue_QueueEventParamUnk(This,met,guidExtendedType,hrStatus,pUnk) \
    ((This)->lpVtbl->QueueEventParamUnk(This,met,guidExtendedType,hrStatus,pUnk))
#define IMFMediaEventQueue_Shutdown(This) \
    ((This)->lpVtbl->Shutdown(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMediaEventQueue_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFActivate interface
 */
#ifndef __IMFActivate_INTERFACE_DEFINED__
#define __IMFActivate_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFActivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFActivateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFActivate *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFActivate *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFActivate *This);

    /*** IMFAttributes methods ***/
    HRESULT (STDMETHODCALLTYPE *GetItem)(
        IMFActivate *This,
        REFGUID guidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetItemType)(
        IMFActivate *This,
        REFGUID guidKey,
        MF_ATTRIBUTE_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *CompareItem)(
        IMFActivate *This,
        REFGUID guidKey,
        REFPROPVARIANT Value,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *Compare)(
        IMFActivate *This,
        IMFAttributes *pTheirs,
        MF_ATTRIBUTES_MATCH_TYPE MatchType,
        BOOL *pbResult);

    HRESULT (STDMETHODCALLTYPE *GetUINT32)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT32 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetUINT64)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT64 *punValue);

    HRESULT (STDMETHODCALLTYPE *GetDouble)(
        IMFActivate *This,
        REFGUID guidKey,
        double *pfValue);

    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IMFActivate *This,
        REFGUID guidKey,
        GUID *pguidValue);

    HRESULT (STDMETHODCALLTYPE *GetStringLength)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetString)(
        IMFActivate *This,
        REFGUID guidKey,
        LPWSTR pwszValue,
        UINT32 cchBufSize,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedString)(
        IMFActivate *This,
        REFGUID guidKey,
        LPWSTR *ppwszValue,
        UINT32 *pcchLength);

    HRESULT (STDMETHODCALLTYPE *GetBlobSize)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetBlob)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT8 *pBuf,
        UINT32 cbBufSize,
        UINT32 *pcbBlobSize);

    HRESULT (STDMETHODCALLTYPE *GetAllocatedBlob)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT8 **ppBuf,
        UINT32 *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetUnknown)(
        IMFActivate *This,
        REFGUID guidKey,
        REFIID riid,
        LPVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *SetItem)(
        IMFActivate *This,
        REFGUID guidKey,
        REFPROPVARIANT Value);

    HRESULT (STDMETHODCALLTYPE *DeleteItem)(
        IMFActivate *This,
        REFGUID guidKey);

    HRESULT (STDMETHODCALLTYPE *DeleteAllItems)(
        IMFActivate *This);

    HRESULT (STDMETHODCALLTYPE *SetUINT32)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT32 unValue);

    HRESULT (STDMETHODCALLTYPE *SetUINT64)(
        IMFActivate *This,
        REFGUID guidKey,
        UINT64 unValue);

    HRESULT (STDMETHODCALLTYPE *SetDouble)(
        IMFActivate *This,
        REFGUID guidKey,
        double fValue);

    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        IMFActivate *This,
        REFGUID guidKey,
        REFGUID guidValue);

    HRESULT (STDMETHODCALLTYPE *SetString)(
        IMFActivate *This,
        REFGUID guidKey,
        LPCWSTR wszValue);

    HRESULT (STDMETHODCALLTYPE *SetBlob)(
        IMFActivate *This,
        REFGUID guidKey,
        const UINT8 *pBuf,
        UINT32 cbBufSize);

    HRESULT (STDMETHODCALLTYPE *SetUnknown)(
        IMFActivate *This,
        REFGUID guidKey,
        IUnknown *pUnknown);

    HRESULT (STDMETHODCALLTYPE *LockStore)(
        IMFActivate *This);

    HRESULT (STDMETHODCALLTYPE *UnlockStore)(
        IMFActivate *This);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMFActivate *This,
        UINT32 *pcItems);

    HRESULT (STDMETHODCALLTYPE *GetItemByIndex)(
        IMFActivate *This,
        UINT32 unIndex,
        GUID *pguidKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *CopyAllItems)(
        IMFActivate *This,
        IMFAttributes *pDest);

    /*** IMFActivate methods ***/
    HRESULT (STDMETHODCALLTYPE *ActivateObject)(
        IMFActivate *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *ShutdownObject)(
        IMFActivate *This);

    HRESULT (STDMETHODCALLTYPE *DetachObject)(
        IMFActivate *This);

    END_INTERFACE
} IMFActivateVtbl;

interface IMFActivate {
    CONST_VTBL IMFActivateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFActivate_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFActivate_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFActivate_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFAttributes methods ***/
#define IMFActivate_GetItem(This,guidKey,pValue) \
    ((This)->lpVtbl->GetItem(This,guidKey,pValue))
#define IMFActivate_GetItemType(This,guidKey,pType) \
    ((This)->lpVtbl->GetItemType(This,guidKey,pType))
#define IMFActivate_CompareItem(This,guidKey,Value,pbResult) \
    ((This)->lpVtbl->CompareItem(This,guidKey,Value,pbResult))
#define IMFActivate_Compare(This,pTheirs,MatchType,pbResult) \
    ((This)->lpVtbl->Compare(This,pTheirs,MatchType,pbResult))
#define IMFActivate_GetUINT32(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT32(This,guidKey,punValue))
#define IMFActivate_GetUINT64(This,guidKey,punValue) \
    ((This)->lpVtbl->GetUINT64(This,guidKey,punValue))
#define IMFActivate_GetDouble(This,guidKey,pfValue) \
    ((This)->lpVtbl->GetDouble(This,guidKey,pfValue))
#define IMFActivate_GetGUID(This,guidKey,pguidValue) \
    ((This)->lpVtbl->GetGUID(This,guidKey,pguidValue))
#define IMFActivate_GetStringLength(This,guidKey,pcchLength) \
    ((This)->lpVtbl->GetStringLength(This,guidKey,pcchLength))
#define IMFActivate_GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) \
    ((This)->lpVtbl->GetString(This,guidKey,pwszValue,cchBufSize,pcchLength))
#define IMFActivate_GetAllocatedString(This,guidKey,ppwszValue,pcchLength) \
    ((This)->lpVtbl->GetAllocatedString(This,guidKey,ppwszValue,pcchLength))
#define IMFActivate_GetBlobSize(This,guidKey,pcbBlobSize) \
    ((This)->lpVtbl->GetBlobSize(This,guidKey,pcbBlobSize))
#define IMFActivate_GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) \
    ((This)->lpVtbl->GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize))
#define IMFActivate_GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) \
    ((This)->lpVtbl->GetAllocatedBlob(This,guidKey,ppBuf,pcbSize))
#define IMFActivate_GetUnknown(This,guidKey,riid,ppv) \
    ((This)->lpVtbl->GetUnknown(This,guidKey,riid,ppv))
#define IMFActivate_SetItem(This,guidKey,Value) \
    ((This)->lpVtbl->SetItem(This,guidKey,Value))
#define IMFActivate_DeleteItem(This,guidKey) \
    ((This)->lpVtbl->DeleteItem(This,guidKey))
#define IMFActivate_DeleteAllItems(This) \
    ((This)->lpVtbl->DeleteAllItems(This))
#define IMFActivate_SetUINT32(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT32(This,guidKey,unValue))
#define IMFActivate_SetUINT64(This,guidKey,unValue) \
    ((This)->lpVtbl->SetUINT64(This,guidKey,unValue))
#define IMFActivate_SetDouble(This,guidKey,fValue) \
    ((This)->lpVtbl->SetDouble(This,guidKey,fValue))
#define IMFActivate_SetGUID(This,guidKey,guidValue) \
    ((This)->lpVtbl->SetGUID(This,guidKey,guidValue))
#define IMFActivate_SetString(This,guidKey,wszValue) \
    ((This)->lpVtbl->SetString(This,guidKey,wszValue))
#define IMFActivate_SetBlob(This,guidKey,pBuf,cbBufSize) \
    ((This)->lpVtbl->SetBlob(This,guidKey,pBuf,cbBufSize))
#define IMFActivate_SetUnknown(This,guidKey,pUnknown) \
    ((This)->lpVtbl->SetUnknown(This,guidKey,pUnknown))
#define IMFActivate_LockStore(This) \
    ((This)->lpVtbl->LockStore(This))
#define IMFActivate_UnlockStore(This) \
    ((This)->lpVtbl->UnlockStore(This))
#define IMFActivate_GetCount(This,pcItems) \
    ((This)->lpVtbl->GetCount(This,pcItems))
#define IMFActivate_GetItemByIndex(This,unIndex,pguidKey,pValue) \
    ((This)->lpVtbl->GetItemByIndex(This,unIndex,pguidKey,pValue))
#define IMFActivate_CopyAllItems(This,pDest) \
    ((This)->lpVtbl->CopyAllItems(This,pDest))
/*** IMFActivate methods ***/
#define IMFActivate_ActivateObject(This,riid,ppv) \
    ((This)->lpVtbl->ActivateObject(This,riid,ppv))
#define IMFActivate_ShutdownObject(This) \
    ((This)->lpVtbl->ShutdownObject(This))
#define IMFActivate_DetachObject(This) \
    ((This)->lpVtbl->DetachObject(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFActivate_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#if (WINVER >= _WIN32_WINNT_WIN7)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

typedef enum _MF_Plugin_Type {
    MF_Plugin_Type_MFT = 0,
    MF_Plugin_Type_MediaSource = 1,
    MF_Plugin_Type_MFT_MatchOutputType = 2,
    MF_Plugin_Type_Other = (DWORD)-1
} MF_Plugin_Type;

/*****************************************************************************
 * IMFPluginControl interface
 */
#ifndef __IMFPluginControl_INTERFACE_DEFINED__
#define __IMFPluginControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPluginControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPluginControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPluginControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPluginControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPluginControl *This);

    /*** IMFPluginControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPreferredClsid)(
        IMFPluginControl *This,
        DWORD pluginType,
        LPCWSTR selector,
        CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *GetPreferredClsidByIndex)(
        IMFPluginControl *This,
        DWORD pluginType,
        DWORD index,
        LPWSTR *selector,
        CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *SetPreferredClsid)(
        IMFPluginControl *This,
        DWORD pluginType,
        LPCWSTR selector,
        const CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *IsDisabled)(
        IMFPluginControl *This,
        DWORD pluginType,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *GetDisabledByIndex)(
        IMFPluginControl *This,
        DWORD pluginType,
        DWORD index,
        CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *SetDisabled)(
        IMFPluginControl *This,
        DWORD pluginType,
        REFCLSID clsid,
        BOOL disabled);

    END_INTERFACE
} IMFPluginControlVtbl;

interface IMFPluginControl {
    CONST_VTBL IMFPluginControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPluginControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPluginControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPluginControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPluginControl methods ***/
#define IMFPluginControl_GetPreferredClsid(This,pluginType,selector,clsid) \
    ((This)->lpVtbl->GetPreferredClsid(This,pluginType,selector,clsid))
#define IMFPluginControl_GetPreferredClsidByIndex(This,pluginType,index,selector,clsid) \
    ((This)->lpVtbl->GetPreferredClsidByIndex(This,pluginType,index,selector,clsid))
#define IMFPluginControl_SetPreferredClsid(This,pluginType,selector,clsid) \
    ((This)->lpVtbl->SetPreferredClsid(This,pluginType,selector,clsid))
#define IMFPluginControl_IsDisabled(This,pluginType,clsid) \
    ((This)->lpVtbl->IsDisabled(This,pluginType,clsid))
#define IMFPluginControl_GetDisabledByIndex(This,pluginType,index,clsid) \
    ((This)->lpVtbl->GetDisabledByIndex(This,pluginType,index,clsid))
#define IMFPluginControl_SetDisabled(This,pluginType,clsid,disabled) \
    ((This)->lpVtbl->SetDisabled(This,pluginType,clsid,disabled))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPluginControl_INTERFACE_DEFINED__ */

typedef enum MF_PLUGIN_CONTROL_POLICY {
    MF_PLUGIN_CONTROL_POLICY_USE_ALL_PLUGINS = 0,
    MF_PLUGIN_CONTROL_POLICY_USE_APPROVED_PLUGINS = 1,
    MF_PLUGIN_CONTROL_POLICY_USE_WEB_PLUGINS = 2,
    MF_PLUGIN_CONTROL_POLICY_USE_WEB_PLUGINS_EDGEMODE = 3
} MF_PLUGIN_CONTROL_POLICY;

/*****************************************************************************
 * IMFPluginControl2 interface
 */
#ifndef __IMFPluginControl2_INTERFACE_DEFINED__
#define __IMFPluginControl2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFPluginControl2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFPluginControl2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFPluginControl2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFPluginControl2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFPluginControl2 *This);

    /*** IMFPluginControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPreferredClsid)(
        IMFPluginControl2 *This,
        DWORD pluginType,
        LPCWSTR selector,
        CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *GetPreferredClsidByIndex)(
        IMFPluginControl2 *This,
        DWORD pluginType,
        DWORD index,
        LPWSTR *selector,
        CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *SetPreferredClsid)(
        IMFPluginControl2 *This,
        DWORD pluginType,
        LPCWSTR selector,
        const CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *IsDisabled)(
        IMFPluginControl2 *This,
        DWORD pluginType,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *GetDisabledByIndex)(
        IMFPluginControl2 *This,
        DWORD pluginType,
        DWORD index,
        CLSID *clsid);

    HRESULT (STDMETHODCALLTYPE *SetDisabled)(
        IMFPluginControl2 *This,
        DWORD pluginType,
        REFCLSID clsid,
        BOOL disabled);

    /*** IMFPluginControl2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPolicy)(
        IMFPluginControl2 *This,
        MF_PLUGIN_CONTROL_POLICY policy);

    END_INTERFACE
} IMFPluginControl2Vtbl;

interface IMFPluginControl2 {
    CONST_VTBL IMFPluginControl2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFPluginControl2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFPluginControl2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFPluginControl2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFPluginControl methods ***/
#define IMFPluginControl2_GetPreferredClsid(This,pluginType,selector,clsid) \
    ((This)->lpVtbl->GetPreferredClsid(This,pluginType,selector,clsid))
#define IMFPluginControl2_GetPreferredClsidByIndex(This,pluginType,index,selector,clsid) \
    ((This)->lpVtbl->GetPreferredClsidByIndex(This,pluginType,index,selector,clsid))
#define IMFPluginControl2_SetPreferredClsid(This,pluginType,selector,clsid) \
    ((This)->lpVtbl->SetPreferredClsid(This,pluginType,selector,clsid))
#define IMFPluginControl2_IsDisabled(This,pluginType,clsid) \
    ((This)->lpVtbl->IsDisabled(This,pluginType,clsid))
#define IMFPluginControl2_GetDisabledByIndex(This,pluginType,index,clsid) \
    ((This)->lpVtbl->GetDisabledByIndex(This,pluginType,index,clsid))
#define IMFPluginControl2_SetDisabled(This,pluginType,clsid,disabled) \
    ((This)->lpVtbl->SetDisabled(This,pluginType,clsid,disabled))
/*** IMFPluginControl2 methods ***/
#define IMFPluginControl2_SetPolicy(This,policy) \
    ((This)->lpVtbl->SetPolicy(This,policy))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFPluginControl2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IMFDXGIDeviceManager interface
 */
#ifndef __IMFDXGIDeviceManager_INTERFACE_DEFINED__
#define __IMFDXGIDeviceManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFDXGIDeviceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFDXGIDeviceManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFDXGIDeviceManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFDXGIDeviceManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFDXGIDeviceManager *This);

    /*** IMFDXGIDeviceManager methods ***/
    HRESULT (STDMETHODCALLTYPE *CloseDeviceHandle)(
        IMFDXGIDeviceManager *This,
        HANDLE hDevice);

    HRESULT (STDMETHODCALLTYPE *GetVideoService)(
        IMFDXGIDeviceManager *This,
        HANDLE hDevice,
        REFIID riid,
        void **ppService);

    HRESULT (STDMETHODCALLTYPE *LockDevice)(
        IMFDXGIDeviceManager *This,
        HANDLE hDevice,
        REFIID riid,
        void **ppUnkDevice,
        BOOL fBlock);

    HRESULT (STDMETHODCALLTYPE *OpenDeviceHandle)(
        IMFDXGIDeviceManager *This,
        HANDLE *phDevice);

    HRESULT (STDMETHODCALLTYPE *ResetDevice)(
        IMFDXGIDeviceManager *This,
        IUnknown *pUnkDevice,
        UINT resetToken);

    HRESULT (STDMETHODCALLTYPE *TestDevice)(
        IMFDXGIDeviceManager *This,
        HANDLE hDevice);

    HRESULT (STDMETHODCALLTYPE *UnlockDevice)(
        IMFDXGIDeviceManager *This,
        HANDLE hDevice,
        BOOL fSaveState);

    END_INTERFACE
} IMFDXGIDeviceManagerVtbl;

interface IMFDXGIDeviceManager {
    CONST_VTBL IMFDXGIDeviceManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFDXGIDeviceManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFDXGIDeviceManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFDXGIDeviceManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFDXGIDeviceManager methods ***/
#define IMFDXGIDeviceManager_CloseDeviceHandle(This,hDevice) \
    ((This)->lpVtbl->CloseDeviceHandle(This,hDevice))
#define IMFDXGIDeviceManager_GetVideoService(This,hDevice,riid,ppService) \
    ((This)->lpVtbl->GetVideoService(This,hDevice,riid,ppService))
#define IMFDXGIDeviceManager_LockDevice(This,hDevice,riid,ppUnkDevice,fBlock) \
    ((This)->lpVtbl->LockDevice(This,hDevice,riid,ppUnkDevice,fBlock))
#define IMFDXGIDeviceManager_OpenDeviceHandle(This,phDevice) \
    ((This)->lpVtbl->OpenDeviceHandle(This,phDevice))
#define IMFDXGIDeviceManager_ResetDevice(This,pUnkDevice,resetToken) \
    ((This)->lpVtbl->ResetDevice(This,pUnkDevice,resetToken))
#define IMFDXGIDeviceManager_TestDevice(This,hDevice) \
    ((This)->lpVtbl->TestDevice(This,hDevice))
#define IMFDXGIDeviceManager_UnlockDevice(This,hDevice,fSaveState) \
    ((This)->lpVtbl->UnlockDevice(This,hDevice,fSaveState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFDXGIDeviceManager_INTERFACE_DEFINED__ */

typedef enum _MF_STREAM_STATE {
    MF_STREAM_STATE_STOPPED = 0,
    MF_STREAM_STATE_PAUSED = 1,
    MF_STREAM_STATE_RUNNING = 2
} MF_STREAM_STATE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#endif // (WINVER >= _WIN32_WINNT_WIN7)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

/*****************************************************************************
 * IMFMuxStreamAttributesManager interface
 */
#ifndef __IMFMuxStreamAttributesManager_INTERFACE_DEFINED__
#define __IMFMuxStreamAttributesManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMuxStreamAttributesManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMuxStreamAttributesManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMuxStreamAttributesManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMuxStreamAttributesManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMuxStreamAttributesManager *This);

    /*** IMFMuxStreamAttributesManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamCount)(
        IMFMuxStreamAttributesManager *This,
        DWORD *pdwMuxStreamCount);

    HRESULT (STDMETHODCALLTYPE *GetAttributes)(
        IMFMuxStreamAttributesManager *This,
        DWORD dwMuxStreamIndex,
        IMFAttributes **ppStreamAttributes);

    END_INTERFACE
} IMFMuxStreamAttributesManagerVtbl;

interface IMFMuxStreamAttributesManager {
    CONST_VTBL IMFMuxStreamAttributesManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMuxStreamAttributesManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMuxStreamAttributesManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMuxStreamAttributesManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMuxStreamAttributesManager methods ***/
#define IMFMuxStreamAttributesManager_GetStreamCount(This,pdwMuxStreamCount) \
    ((This)->lpVtbl->GetStreamCount(This,pdwMuxStreamCount))
#define IMFMuxStreamAttributesManager_GetAttributes(This,dwMuxStreamIndex,ppStreamAttributes) \
    ((This)->lpVtbl->GetAttributes(This,dwMuxStreamIndex,ppStreamAttributes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMuxStreamAttributesManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMuxStreamMediaTypeManager interface
 */
#ifndef __IMFMuxStreamMediaTypeManager_INTERFACE_DEFINED__
#define __IMFMuxStreamMediaTypeManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMuxStreamMediaTypeManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMuxStreamMediaTypeManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMuxStreamMediaTypeManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMuxStreamMediaTypeManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMuxStreamMediaTypeManager *This);

    /*** IMFMuxStreamMediaTypeManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamCount)(
        IMFMuxStreamMediaTypeManager *This,
        DWORD *pdwMuxStreamCount);

    HRESULT (STDMETHODCALLTYPE *GetMediaType)(
        IMFMuxStreamMediaTypeManager *This,
        DWORD dwMuxStreamIndex,
        IMFMediaType **ppMediaType);

    HRESULT (STDMETHODCALLTYPE *GetStreamConfigurationCount)(
        IMFMuxStreamMediaTypeManager *This,
        DWORD *pdwCount);

    HRESULT (STDMETHODCALLTYPE *AddStreamConfiguration)(
        IMFMuxStreamMediaTypeManager *This,
        ULONGLONG ullStreamMask);

    HRESULT (STDMETHODCALLTYPE *RemoveStreamConfiguration)(
        IMFMuxStreamMediaTypeManager *This,
        ULONGLONG ullStreamMask);

    HRESULT (STDMETHODCALLTYPE *GetStreamConfiguration)(
        IMFMuxStreamMediaTypeManager *This,
        DWORD ulIndex,
        ULONGLONG *pullStreamMask);

    END_INTERFACE
} IMFMuxStreamMediaTypeManagerVtbl;

interface IMFMuxStreamMediaTypeManager {
    CONST_VTBL IMFMuxStreamMediaTypeManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMuxStreamMediaTypeManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMuxStreamMediaTypeManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMuxStreamMediaTypeManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMuxStreamMediaTypeManager methods ***/
#define IMFMuxStreamMediaTypeManager_GetStreamCount(This,pdwMuxStreamCount) \
    ((This)->lpVtbl->GetStreamCount(This,pdwMuxStreamCount))
#define IMFMuxStreamMediaTypeManager_GetMediaType(This,dwMuxStreamIndex,ppMediaType) \
    ((This)->lpVtbl->GetMediaType(This,dwMuxStreamIndex,ppMediaType))
#define IMFMuxStreamMediaTypeManager_GetStreamConfigurationCount(This,pdwCount) \
    ((This)->lpVtbl->GetStreamConfigurationCount(This,pdwCount))
#define IMFMuxStreamMediaTypeManager_AddStreamConfiguration(This,ullStreamMask) \
    ((This)->lpVtbl->AddStreamConfiguration(This,ullStreamMask))
#define IMFMuxStreamMediaTypeManager_RemoveStreamConfiguration(This,ullStreamMask) \
    ((This)->lpVtbl->RemoveStreamConfiguration(This,ullStreamMask))
#define IMFMuxStreamMediaTypeManager_GetStreamConfiguration(This,ulIndex,pullStreamMask) \
    ((This)->lpVtbl->GetStreamConfiguration(This,ulIndex,pullStreamMask))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMuxStreamMediaTypeManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFMuxStreamSampleManager interface
 */
#ifndef __IMFMuxStreamSampleManager_INTERFACE_DEFINED__
#define __IMFMuxStreamSampleManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFMuxStreamSampleManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFMuxStreamSampleManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFMuxStreamSampleManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFMuxStreamSampleManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFMuxStreamSampleManager *This);

    /*** IMFMuxStreamSampleManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamCount)(
        IMFMuxStreamSampleManager *This,
        DWORD *pdwMuxStreamCount);

    HRESULT (STDMETHODCALLTYPE *GetSample)(
        IMFMuxStreamSampleManager *This,
        DWORD dwMuxStreamIndex,
        IMFSample **ppSample);

    ULONGLONG (STDMETHODCALLTYPE *GetStreamConfiguration)(
        IMFMuxStreamSampleManager *This);

    END_INTERFACE
} IMFMuxStreamSampleManagerVtbl;

interface IMFMuxStreamSampleManager {
    CONST_VTBL IMFMuxStreamSampleManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFMuxStreamSampleManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFMuxStreamSampleManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFMuxStreamSampleManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFMuxStreamSampleManager methods ***/
#define IMFMuxStreamSampleManager_GetStreamCount(This,pdwMuxStreamCount) \
    ((This)->lpVtbl->GetStreamCount(This,pdwMuxStreamCount))
#define IMFMuxStreamSampleManager_GetSample(This,dwMuxStreamIndex,ppSample) \
    ((This)->lpVtbl->GetSample(This,dwMuxStreamIndex,ppSample))
#define IMFMuxStreamSampleManager_GetStreamConfiguration(This) \
    ((This)->lpVtbl->GetStreamConfiguration(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFMuxStreamSampleManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSecureBuffer interface
 */
#ifndef __IMFSecureBuffer_INTERFACE_DEFINED__
#define __IMFSecureBuffer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IMFSecureBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMFSecureBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSecureBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSecureBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSecureBuffer *This);

    /*** IMFSecureBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIdentifier)(
        IMFSecureBuffer *This,
        GUID *pGuidIdentifier);

    END_INTERFACE
} IMFSecureBufferVtbl;

interface IMFSecureBuffer {
    CONST_VTBL IMFSecureBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMFSecureBuffer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMFSecureBuffer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMFSecureBuffer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMFSecureBuffer methods ***/
#define IMFSecureBuffer_GetIdentifier(This,pGuidIdentifier) \
    ((This)->lpVtbl->GetIdentifier(This,pGuidIdentifier))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMFSecureBuffer_INTERFACE_DEFINED__ */

#endif // (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

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

#endif /* __mfobjects_h__ */
