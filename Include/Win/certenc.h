 /* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /* COM_NO_WINDOWS_H */

#ifndef __certenc_h__
#define __certenc_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward Declarations */

#ifndef __ICertEncodeStringArray_FWD_DEFINED__
#define __ICertEncodeStringArray_FWD_DEFINED__
typedef interface ICertEncodeStringArray ICertEncodeStringArray;
#endif  /* __ICertEncodeStringArray_FWD_DEFINED__ */

#ifndef __ICertEncodeStringArray2_FWD_DEFINED__
#define __ICertEncodeStringArray2_FWD_DEFINED__
typedef interface ICertEncodeStringArray2 ICertEncodeStringArray2;
#endif  /* __ICertEncodeStringArray2_FWD_DEFINED__ */

#ifndef __ICertEncodeLongArray_FWD_DEFINED__
#define __ICertEncodeLongArray_FWD_DEFINED__
typedef interface ICertEncodeLongArray ICertEncodeLongArray;
#endif  /* __ICertEncodeLongArray_FWD_DEFINED__ */

#ifndef __ICertEncodeLongArray2_FWD_DEFINED__
#define __ICertEncodeLongArray2_FWD_DEFINED__
typedef interface ICertEncodeLongArray2 ICertEncodeLongArray2;
#endif  /* __ICertEncodeLongArray2_FWD_DEFINED__ */

#ifndef __ICertEncodeDateArray_FWD_DEFINED__
#define __ICertEncodeDateArray_FWD_DEFINED__
typedef interface ICertEncodeDateArray ICertEncodeDateArray;
#endif  /* __ICertEncodeDateArray_FWD_DEFINED__ */

#ifndef __ICertEncodeDateArray2_FWD_DEFINED__
#define __ICertEncodeDateArray2_FWD_DEFINED__
typedef interface ICertEncodeDateArray2 ICertEncodeDateArray2;
#endif  /* __ICertEncodeDateArray2_FWD_DEFINED__ */

#ifndef __ICertEncodeCRLDistInfo_FWD_DEFINED__
#define __ICertEncodeCRLDistInfo_FWD_DEFINED__
typedef interface ICertEncodeCRLDistInfo ICertEncodeCRLDistInfo;
#endif  /* __ICertEncodeCRLDistInfo_FWD_DEFINED__ */

#ifndef __ICertEncodeCRLDistInfo2_FWD_DEFINED__
#define __ICertEncodeCRLDistInfo2_FWD_DEFINED__
typedef interface ICertEncodeCRLDistInfo2 ICertEncodeCRLDistInfo2;
#endif  /* __ICertEncodeCRLDistInfo2_FWD_DEFINED__ */

#ifndef __ICertEncodeAltName_FWD_DEFINED__
#define __ICertEncodeAltName_FWD_DEFINED__
typedef interface ICertEncodeAltName ICertEncodeAltName;
#endif  /* __ICertEncodeAltName_FWD_DEFINED__ */

#ifndef __ICertEncodeAltName2_FWD_DEFINED__
#define __ICertEncodeAltName2_FWD_DEFINED__
typedef interface ICertEncodeAltName2 ICertEncodeAltName2;
#endif  /* __ICertEncodeAltName2_FWD_DEFINED__ */

#ifndef __ICertEncodeBitString_FWD_DEFINED__
#define __ICertEncodeBitString_FWD_DEFINED__
typedef interface ICertEncodeBitString ICertEncodeBitString;
#endif  /* __ICertEncodeBitString_FWD_DEFINED__ */

#ifndef __ICertEncodeBitString2_FWD_DEFINED__
#define __ICertEncodeBitString2_FWD_DEFINED__
typedef interface ICertEncodeBitString2 ICertEncodeBitString2;
#endif  /* __ICertEncodeBitString2_FWD_DEFINED__ */

#ifndef __CCertEncodeStringArray_FWD_DEFINED__
#define __CCertEncodeStringArray_FWD_DEFINED__
typedef struct CCertEncodeStringArray CCertEncodeStringArray;
#endif  /* __CCertEncodeStringArray_FWD_DEFINED__ */

#ifndef __CCertEncodeLongArray_FWD_DEFINED__
#define __CCertEncodeLongArray_FWD_DEFINED__
typedef struct CCertEncodeLongArray CCertEncodeLongArray;
#endif  /* __CCertEncodeLongArray_FWD_DEFINED__ */

#ifndef __CCertEncodeDateArray_FWD_DEFINED__
#define __CCertEncodeDateArray_FWD_DEFINED__
typedef struct CCertEncodeDateArray CCertEncodeDateArray;
#endif  /* __CCertEncodeDateArray_FWD_DEFINED__ */

#ifndef __CCertEncodeCRLDistInfo_FWD_DEFINED__
#define __CCertEncodeCRLDistInfo_FWD_DEFINED__
typedef struct CCertEncodeCRLDistInfo CCertEncodeCRLDistInfo;
#endif  /* __CCertEncodeCRLDistInfo_FWD_DEFINED__ */

#ifndef __CCertEncodeAltName_FWD_DEFINED__
#define __CCertEncodeAltName_FWD_DEFINED__
typedef struct CCertEncodeAltName CCertEncodeAltName;
#endif  /* __CCertEncodeAltName_FWD_DEFINED__ */

#ifndef __CCertEncodeBitString_FWD_DEFINED__
#define __CCertEncodeBitString_FWD_DEFINED__
typedef struct CCertEncodeBitString CCertEncodeBitString;
#endif  /* __CCertEncodeBitString_FWD_DEFINED__ */

/* header files for imported files */
#include "wtypes.h"
#include "certenroll.h"

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0000_v0_0_s_ifspec;

#ifndef __ICertEncodeStringArray_INTERFACE_DEFINED__
#define __ICertEncodeStringArray_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeStringArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeStringArrayVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeStringArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeStringArray *This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeStringArray *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeStringArray *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeStringArray *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeStringArray *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeStringArray *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeStringArray *This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetStringType )(
        ICertEncodeStringArray *This,
        LONG *pStringType);

    HRESULT (STDMETHODCALLTYPE *GetCount )(
        ICertEncodeStringArray *This,
        LONG *pCount);

    HRESULT (STDMETHODCALLTYPE *GetValue )(
        ICertEncodeStringArray *This,
        LONG Index,
        BSTR *pstr);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeStringArray *This,
        LONG Count,
        LONG StringType);

    HRESULT (STDMETHODCALLTYPE *SetValue )(
        ICertEncodeStringArray *This,
        LONG Index,
        const BSTR str);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeStringArray *This,
        BSTR *pstrBinary);

    END_INTERFACE
} ICertEncodeStringArrayVtbl;

interface ICertEncodeStringArray {
    CONST_VTBL struct ICertEncodeStringArrayVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeStringArray_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeStringArray_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeStringArray_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeStringArray_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeStringArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeStringArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeStringArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeStringArray_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeStringArray_GetStringType(This,pStringType) \
    ((This)->lpVtbl->GetStringType(This,pStringType))

#define ICertEncodeStringArray_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))

#define ICertEncodeStringArray_GetValue(This,Index,pstr) \
    ((This)->lpVtbl->GetValue(This,Index,pstr))

#define ICertEncodeStringArray_Reset(This,Count,StringType) \
    ((This)->lpVtbl->Reset(This,Count,StringType))

#define ICertEncodeStringArray_SetValue(This,Index,str) \
    ((This)->lpVtbl->SetValue(This,Index,str))

#define ICertEncodeStringArray_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeStringArray_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeStringArray2_INTERFACE_DEFINED__
#define __ICertEncodeStringArray2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeStringArray2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeStringArray2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeStringArray2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeStringArray2 *This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeStringArray2 *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeStringArray2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeStringArray2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeStringArray2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeStringArray2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeStringArray2 *This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetStringType )(
        ICertEncodeStringArray2 *This,
        LONG *pStringType);

    HRESULT (STDMETHODCALLTYPE *GetCount )(
        ICertEncodeStringArray2 *This,
        LONG *pCount);

    HRESULT (STDMETHODCALLTYPE *GetValue )(
        ICertEncodeStringArray2 *This,
        LONG Index,
        BSTR *pstr);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeStringArray2 *This,
        LONG Count,
        LONG StringType);

    HRESULT (STDMETHODCALLTYPE *SetValue )(
        ICertEncodeStringArray2 *This,
        LONG Index,
        const BSTR str);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeStringArray2 *This,
        BSTR *pstrBinary);

    HRESULT (STDMETHODCALLTYPE *DecodeBlob )(
        ICertEncodeStringArray2 *This,
        const BSTR strEncodedData,
        EncodingType Encoding);

    HRESULT (STDMETHODCALLTYPE *EncodeBlob )(
        ICertEncodeStringArray2 *This,
        EncodingType Encoding,
        BSTR *pstrEncodedData);

    END_INTERFACE
} ICertEncodeStringArray2Vtbl;

interface ICertEncodeStringArray2 {
    CONST_VTBL struct ICertEncodeStringArray2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeStringArray2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeStringArray2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeStringArray2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeStringArray2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeStringArray2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeStringArray2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeStringArray2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeStringArray2_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeStringArray2_GetStringType(This,pStringType) \
    ((This)->lpVtbl->GetStringType(This,pStringType))

#define ICertEncodeStringArray2_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))

#define ICertEncodeStringArray2_GetValue(This,Index,pstr) \
    ((This)->lpVtbl->GetValue(This,Index,pstr))

#define ICertEncodeStringArray2_Reset(This,Count,StringType) \
    ((This)->lpVtbl->Reset(This,Count,StringType))

#define ICertEncodeStringArray2_SetValue(This,Index,str) \
    ((This)->lpVtbl->SetValue(This,Index,str))

#define ICertEncodeStringArray2_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#define ICertEncodeStringArray2_DecodeBlob(This,strEncodedData,Encoding) \
    ((This)->lpVtbl->DecodeBlob(This,strEncodedData,Encoding))

#define ICertEncodeStringArray2_EncodeBlob(This,Encoding,pstrEncodedData) \
    ((This)->lpVtbl->EncodeBlob(This,Encoding,pstrEncodedData))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeStringArray2_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeLongArray_INTERFACE_DEFINED__
#define __ICertEncodeLongArray_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeLongArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeLongArrayVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeLongArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeLongArray *This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeLongArray *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeLongArray *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeLongArray *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeLongArray *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeLongArray *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeLongArray *This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetCount )(
        ICertEncodeLongArray *This,
        LONG *pCount);

    HRESULT (STDMETHODCALLTYPE *GetValue )(
        ICertEncodeLongArray *This,
        LONG Index,
        LONG *pValue);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeLongArray *This,
        LONG Count);

    HRESULT (STDMETHODCALLTYPE *SetValue )(
        ICertEncodeLongArray *This,
        LONG Index,
        LONG Value);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeLongArray *This,
        BSTR *pstrBinary);

    END_INTERFACE
} ICertEncodeLongArrayVtbl;

interface ICertEncodeLongArray {
    CONST_VTBL struct ICertEncodeLongArrayVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeLongArray_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeLongArray_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeLongArray_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeLongArray_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeLongArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeLongArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeLongArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeLongArray_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeLongArray_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))

#define ICertEncodeLongArray_GetValue(This,Index,pValue) \
    ((This)->lpVtbl->GetValue(This,Index,pValue))

#define ICertEncodeLongArray_Reset(This,Count) \
    ((This)->lpVtbl->Reset(This,Count))

#define ICertEncodeLongArray_SetValue(This,Index,Value) \
    ((This)->lpVtbl->SetValue(This,Index,Value))

#define ICertEncodeLongArray_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeLongArray_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeLongArray2_INTERFACE_DEFINED__
#define __ICertEncodeLongArray2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeLongArray2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeLongArray2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeLongArray2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeLongArray2 *This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeLongArray2 *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeLongArray2 *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeLongArray2 *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeLongArray2 *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeLongArray2 *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeLongArray2 *This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetCount )(
        ICertEncodeLongArray2 *This,
        LONG *pCount);

    HRESULT (STDMETHODCALLTYPE *GetValue )(
        ICertEncodeLongArray2 *This,
        LONG Index,
        LONG *pValue);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeLongArray2 *This,
        LONG Count);

    HRESULT (STDMETHODCALLTYPE *SetValue )(
        ICertEncodeLongArray2 *This,
        LONG Index,
        LONG Value);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeLongArray2 *This,
        BSTR *pstrBinary);

    HRESULT (STDMETHODCALLTYPE *DecodeBlob )(
        ICertEncodeLongArray2 *This,
        const BSTR strEncodedData,
        EncodingType Encoding);

    HRESULT (STDMETHODCALLTYPE *EncodeBlob )(
        ICertEncodeLongArray2 *This,
        EncodingType Encoding,
        BSTR *pstrEncodedData);

    END_INTERFACE
} ICertEncodeLongArray2Vtbl;

interface ICertEncodeLongArray2 {
    CONST_VTBL struct ICertEncodeLongArray2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeLongArray2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeLongArray2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeLongArray2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeLongArray2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeLongArray2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeLongArray2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeLongArray2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeLongArray2_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeLongArray2_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))

#define ICertEncodeLongArray2_GetValue(This,Index,pValue) \
    ((This)->lpVtbl->GetValue(This,Index,pValue))

#define ICertEncodeLongArray2_Reset(This,Count) \
    ((This)->lpVtbl->Reset(This,Count))

#define ICertEncodeLongArray2_SetValue(This,Index,Value) \
    ((This)->lpVtbl->SetValue(This,Index,Value))

#define ICertEncodeLongArray2_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#define ICertEncodeLongArray2_DecodeBlob(This,strEncodedData,Encoding) \
    ((This)->lpVtbl->DecodeBlob(This,strEncodedData,Encoding))

#define ICertEncodeLongArray2_EncodeBlob(This,Encoding,pstrEncodedData) \
    ((This)->lpVtbl->EncodeBlob(This,Encoding,pstrEncodedData))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeLongArray2_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeDateArray_INTERFACE_DEFINED__
#define __ICertEncodeDateArray_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeDateArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeDateArrayVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeDateArray *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeDateArray *This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeDateArray *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeDateArray *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeDateArray *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeDateArray *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeDateArray *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeDateArray *This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetCount )(
        ICertEncodeDateArray *This,
        LONG *pCount);

    HRESULT (STDMETHODCALLTYPE *GetValue )(
        ICertEncodeDateArray *This,
        LONG Index,
        DATE *pValue);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeDateArray *This,
        LONG Count);

    HRESULT (STDMETHODCALLTYPE *SetValue )(
        ICertEncodeDateArray *This,
        LONG Index,
        DATE Value);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeDateArray *This,
        BSTR *pstrBinary);

    END_INTERFACE
} ICertEncodeDateArrayVtbl;

interface ICertEncodeDateArray {
    CONST_VTBL struct ICertEncodeDateArrayVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeDateArray_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeDateArray_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeDateArray_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeDateArray_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeDateArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeDateArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeDateArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeDateArray_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeDateArray_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))

#define ICertEncodeDateArray_GetValue(This,Index,pValue) \
    ((This)->lpVtbl->GetValue(This,Index,pValue))

#define ICertEncodeDateArray_Reset(This,Count) \
    ((This)->lpVtbl->Reset(This,Count))

#define ICertEncodeDateArray_SetValue(This,Index,Value) \
    ((This)->lpVtbl->SetValue(This,Index,Value))

#define ICertEncodeDateArray_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeDateArray_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeDateArray2_INTERFACE_DEFINED__
#define __ICertEncodeDateArray2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeDateArray2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeDateArray2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeDateArray2 * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeDateArray2 * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeDateArray2 * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeDateArray2 * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeDateArray2 * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeDateArray2 * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeDateArray2 * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeDateArray2 * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetCount )(
        ICertEncodeDateArray2 * This,
        LONG *pCount);

    HRESULT (STDMETHODCALLTYPE *GetValue )(
        ICertEncodeDateArray2 * This,
        LONG Index,
        DATE *pValue);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeDateArray2 * This,
        LONG Count);

    HRESULT (STDMETHODCALLTYPE *SetValue )(
        ICertEncodeDateArray2 * This,
        LONG Index,
        DATE Value);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeDateArray2 * This,
        BSTR *pstrBinary);

    HRESULT (STDMETHODCALLTYPE *DecodeBlob )(
        ICertEncodeDateArray2 * This,
        const BSTR strEncodedData,
        EncodingType Encoding);

    HRESULT (STDMETHODCALLTYPE *EncodeBlob )(
        ICertEncodeDateArray2 * This,
        EncodingType Encoding,
        BSTR *pstrEncodedData);

    END_INTERFACE
} ICertEncodeDateArray2Vtbl;

interface ICertEncodeDateArray2 {
    CONST_VTBL struct ICertEncodeDateArray2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeDateArray2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeDateArray2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeDateArray2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeDateArray2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeDateArray2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeDateArray2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeDateArray2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeDateArray2_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeDateArray2_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))

#define ICertEncodeDateArray2_GetValue(This,Index,pValue) \
    ((This)->lpVtbl->GetValue(This,Index,pValue))

#define ICertEncodeDateArray2_Reset(This,Count) \
    ((This)->lpVtbl->Reset(This,Count))

#define ICertEncodeDateArray2_SetValue(This,Index,Value) \
    ((This)->lpVtbl->SetValue(This,Index,Value))

#define ICertEncodeDateArray2_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#define ICertEncodeDateArray2_DecodeBlob(This,strEncodedData,Encoding) \
    ((This)->lpVtbl->DecodeBlob(This,strEncodedData,Encoding))

#define ICertEncodeDateArray2_EncodeBlob(This,Encoding,pstrEncodedData) \
    ((This)->lpVtbl->EncodeBlob(This,Encoding,pstrEncodedData))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeDateArray2_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__
#define __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeCRLDistInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeCRLDistInfoVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeCRLDistInfo * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeCRLDistInfo * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeCRLDistInfo * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeCRLDistInfo * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeCRLDistInfo * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeCRLDistInfo * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeCRLDistInfo * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeCRLDistInfo * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetDistPointCount )(
        ICertEncodeCRLDistInfo * This,
        LONG *pDistPointCount);

    HRESULT (STDMETHODCALLTYPE *GetNameCount )(
        ICertEncodeCRLDistInfo * This,
        LONG DistPointIndex,
        LONG *pNameCount);

    HRESULT (STDMETHODCALLTYPE *GetNameChoice )(
        ICertEncodeCRLDistInfo * This,
        LONG DistPointIndex,
        LONG NameIndex,
        LONG *pNameChoice);

    HRESULT (STDMETHODCALLTYPE *GetName )(
        ICertEncodeCRLDistInfo * This,
        LONG DistPointIndex,
        LONG NameIndex,
        BSTR *pstrName);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeCRLDistInfo * This,
        LONG DistPointCount);

    HRESULT (STDMETHODCALLTYPE *SetNameCount )(
        ICertEncodeCRLDistInfo * This,
        LONG DistPointIndex,
        LONG NameCount);

    HRESULT (STDMETHODCALLTYPE *SetNameEntry )(
        ICertEncodeCRLDistInfo * This,
        LONG DistPointIndex,
        LONG NameIndex,
        LONG NameChoice,
        const BSTR strName);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeCRLDistInfo * This,
        BSTR *pstrBinary);

    END_INTERFACE
} ICertEncodeCRLDistInfoVtbl;

interface ICertEncodeCRLDistInfo {
    CONST_VTBL struct ICertEncodeCRLDistInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeCRLDistInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeCRLDistInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeCRLDistInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeCRLDistInfo_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeCRLDistInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeCRLDistInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeCRLDistInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeCRLDistInfo_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeCRLDistInfo_GetDistPointCount(This,pDistPointCount) \
    ((This)->lpVtbl->GetDistPointCount(This,pDistPointCount))

#define ICertEncodeCRLDistInfo_GetNameCount(This,DistPointIndex,pNameCount) \
    ((This)->lpVtbl->GetNameCount(This,DistPointIndex,pNameCount))

#define ICertEncodeCRLDistInfo_GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice) \
    ((This)->lpVtbl->GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice))

#define ICertEncodeCRLDistInfo_GetName(This,DistPointIndex,NameIndex,pstrName) \
    ((This)->lpVtbl->GetName(This,DistPointIndex,NameIndex,pstrName))

#define ICertEncodeCRLDistInfo_Reset(This,DistPointCount) \
    ((This)->lpVtbl->Reset(This,DistPointCount))

#define ICertEncodeCRLDistInfo_SetNameCount(This,DistPointIndex,NameCount) \
    ((This)->lpVtbl->SetNameCount(This,DistPointIndex,NameCount))

#define ICertEncodeCRLDistInfo_SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName) \
    ((This)->lpVtbl->SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName))

#define ICertEncodeCRLDistInfo_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeCRLDistInfo2_INTERFACE_DEFINED__
#define __ICertEncodeCRLDistInfo2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeCRLDistInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeCRLDistInfo2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeCRLDistInfo2 * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeCRLDistInfo2 * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeCRLDistInfo2 * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeCRLDistInfo2 * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeCRLDistInfo2 * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeCRLDistInfo2 * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeCRLDistInfo2 * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeCRLDistInfo2 * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetDistPointCount )(
        ICertEncodeCRLDistInfo2 * This,
        LONG *pDistPointCount);

    HRESULT (STDMETHODCALLTYPE *GetNameCount )(
        ICertEncodeCRLDistInfo2 * This,
        LONG DistPointIndex,
        LONG *pNameCount);

    HRESULT (STDMETHODCALLTYPE *GetNameChoice )(
        ICertEncodeCRLDistInfo2 * This,
        LONG DistPointIndex,
        LONG NameIndex,
        LONG *pNameChoice);

    HRESULT (STDMETHODCALLTYPE *GetName )(
        ICertEncodeCRLDistInfo2 * This,
        LONG DistPointIndex,
        LONG NameIndex,
        BSTR *pstrName);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeCRLDistInfo2 * This,
        LONG DistPointCount);

    HRESULT (STDMETHODCALLTYPE *SetNameCount )(
        ICertEncodeCRLDistInfo2 * This,
        LONG DistPointIndex,
        LONG NameCount);

    HRESULT (STDMETHODCALLTYPE *SetNameEntry )(
        ICertEncodeCRLDistInfo2 * This,
        LONG DistPointIndex,
        LONG NameIndex,
        LONG NameChoice,
        const BSTR strName);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeCRLDistInfo2 * This,
        BSTR *pstrBinary);

    HRESULT (STDMETHODCALLTYPE *DecodeBlob )(
        ICertEncodeCRLDistInfo2 * This,
        const BSTR strEncodedData,
        EncodingType Encoding);

    HRESULT (STDMETHODCALLTYPE *EncodeBlob )(
        ICertEncodeCRLDistInfo2 * This,
        EncodingType Encoding,
        BSTR *pstrEncodedData);

    END_INTERFACE
} ICertEncodeCRLDistInfo2Vtbl;

interface ICertEncodeCRLDistInfo2 {
    CONST_VTBL struct ICertEncodeCRLDistInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeCRLDistInfo2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeCRLDistInfo2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeCRLDistInfo2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeCRLDistInfo2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeCRLDistInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeCRLDistInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeCRLDistInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeCRLDistInfo2_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeCRLDistInfo2_GetDistPointCount(This,pDistPointCount) \
    ((This)->lpVtbl->GetDistPointCount(This,pDistPointCount))

#define ICertEncodeCRLDistInfo2_GetNameCount(This,DistPointIndex,pNameCount) \
    ((This)->lpVtbl->GetNameCount(This,DistPointIndex,pNameCount))

#define ICertEncodeCRLDistInfo2_GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice) \
    ((This)->lpVtbl->GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice))

#define ICertEncodeCRLDistInfo2_GetName(This,DistPointIndex,NameIndex,pstrName) \
    ((This)->lpVtbl->GetName(This,DistPointIndex,NameIndex,pstrName))

#define ICertEncodeCRLDistInfo2_Reset(This,DistPointCount) \
    ((This)->lpVtbl->Reset(This,DistPointCount))

#define ICertEncodeCRLDistInfo2_SetNameCount(This,DistPointIndex,NameCount) \
    ((This)->lpVtbl->SetNameCount(This,DistPointIndex,NameCount))

#define ICertEncodeCRLDistInfo2_SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName) \
    ((This)->lpVtbl->SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName))

#define ICertEncodeCRLDistInfo2_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#define ICertEncodeCRLDistInfo2_DecodeBlob(This,strEncodedData,Encoding) \
    ((This)->lpVtbl->DecodeBlob(This,strEncodedData,Encoding))

#define ICertEncodeCRLDistInfo2_EncodeBlob(This,Encoding,pstrEncodedData) \
    ((This)->lpVtbl->EncodeBlob(This,Encoding,pstrEncodedData))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeCRLDistInfo2_INTERFACE_DEFINED__ */

#define EAN_NAMEOBJECTID ( 0x80000000 )

#define EANR_SUPPRESS_IA5CONVERSION ( 0x80000000 )

extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0008_v0_0_s_ifspec;

#ifndef __ICertEncodeAltName_INTERFACE_DEFINED__
#define __ICertEncodeAltName_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeAltName;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeAltNameVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeAltName * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeAltName * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeAltName * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeAltName * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeAltName * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeAltName * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeAltName * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeAltName * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetNameCount )(
        ICertEncodeAltName * This,
        LONG *pNameCount);

    HRESULT (STDMETHODCALLTYPE *GetNameChoice )(
        ICertEncodeAltName * This,
        LONG NameIndex,
        LONG *pNameChoice);

    HRESULT (STDMETHODCALLTYPE *GetName )(
        ICertEncodeAltName * This,
        LONG NameIndex,
        BSTR *pstrName);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeAltName * This,
        LONG NameCount);

    HRESULT (STDMETHODCALLTYPE *SetNameEntry )(
        ICertEncodeAltName * This,
        LONG NameIndex,
        LONG NameChoice,
        const BSTR strName);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeAltName * This,
        BSTR *pstrBinary);

    END_INTERFACE
} ICertEncodeAltNameVtbl;

interface ICertEncodeAltName {
    CONST_VTBL struct ICertEncodeAltNameVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeAltName_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeAltName_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeAltName_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeAltName_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeAltName_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeAltName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeAltName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeAltName_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeAltName_GetNameCount(This,pNameCount) \
    ((This)->lpVtbl->GetNameCount(This,pNameCount))

#define ICertEncodeAltName_GetNameChoice(This,NameIndex,pNameChoice) \
    ((This)->lpVtbl->GetNameChoice(This,NameIndex,pNameChoice))

#define ICertEncodeAltName_GetName(This,NameIndex,pstrName) \
    ((This)->lpVtbl->GetName(This,NameIndex,pstrName))

#define ICertEncodeAltName_Reset(This,NameCount) \
    ((This)->lpVtbl->Reset(This,NameCount))

#define ICertEncodeAltName_SetNameEntry(This,NameIndex,NameChoice,strName) \
    ((This)->lpVtbl->SetNameEntry(This,NameIndex,NameChoice,strName))

#define ICertEncodeAltName_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeAltName_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeAltName2_INTERFACE_DEFINED__
#define __ICertEncodeAltName2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeAltName2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeAltName2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeAltName2 * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeAltName2 * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeAltName2 * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeAltName2 * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeAltName2 * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeAltName2 * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeAltName2 * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeAltName2 * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetNameCount )(
        ICertEncodeAltName2 * This,
        LONG *pNameCount);

    HRESULT (STDMETHODCALLTYPE *GetNameChoice )(
        ICertEncodeAltName2 * This,
        LONG NameIndex,
        LONG *pNameChoice);

    HRESULT (STDMETHODCALLTYPE *GetName )(
        ICertEncodeAltName2 * This,
        LONG NameIndex,
        BSTR *pstrName);

    HRESULT (STDMETHODCALLTYPE *Reset )(
        ICertEncodeAltName2 * This,
        LONG NameCount);

    HRESULT (STDMETHODCALLTYPE *SetNameEntry )(
        ICertEncodeAltName2 * This,
        LONG NameIndex,
        LONG NameChoice,
        const BSTR strName);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeAltName2 * This,
        BSTR *pstrBinary);

    HRESULT (STDMETHODCALLTYPE *DecodeBlob )(
        ICertEncodeAltName2 * This,
        const BSTR strEncodedData,
        EncodingType Encoding);

    HRESULT (STDMETHODCALLTYPE *EncodeBlob )(
        ICertEncodeAltName2 * This,
        EncodingType Encoding,
        BSTR *pstrEncodedData);

    HRESULT (STDMETHODCALLTYPE *GetNameBlob )(
        ICertEncodeAltName2 * This,
        LONG NameIndex,
        EncodingType Encoding,
        BSTR *pstrName);

    HRESULT (STDMETHODCALLTYPE *SetNameEntryBlob )(
        ICertEncodeAltName2 * This,
        LONG NameIndex,
        LONG NameChoice,
        const BSTR strName,
        EncodingType Encoding);

    END_INTERFACE
} ICertEncodeAltName2Vtbl;

interface ICertEncodeAltName2 {
    CONST_VTBL struct ICertEncodeAltName2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeAltName2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeAltName2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeAltName2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeAltName2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeAltName2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeAltName2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeAltName2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeAltName2_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeAltName2_GetNameCount(This,pNameCount) \
    ((This)->lpVtbl->GetNameCount(This,pNameCount))

#define ICertEncodeAltName2_GetNameChoice(This,NameIndex,pNameChoice) \
    ((This)->lpVtbl->GetNameChoice(This,NameIndex,pNameChoice))

#define ICertEncodeAltName2_GetName(This,NameIndex,pstrName) \
    ((This)->lpVtbl->GetName(This,NameIndex,pstrName))

#define ICertEncodeAltName2_Reset(This,NameCount) \
    ((This)->lpVtbl->Reset(This,NameCount))

#define ICertEncodeAltName2_SetNameEntry(This,NameIndex,NameChoice,strName) \
    ((This)->lpVtbl->SetNameEntry(This,NameIndex,NameChoice,strName))

#define ICertEncodeAltName2_Encode(This,pstrBinary) \
    ((This)->lpVtbl->Encode(This,pstrBinary))

#define ICertEncodeAltName2_DecodeBlob(This,strEncodedData,Encoding) \
    ((This)->lpVtbl->DecodeBlob(This,strEncodedData,Encoding))

#define ICertEncodeAltName2_EncodeBlob(This,Encoding,pstrEncodedData) \
    ((This)->lpVtbl->EncodeBlob(This,Encoding,pstrEncodedData))

#define ICertEncodeAltName2_GetNameBlob(This,NameIndex,Encoding,pstrName) \
    ((This)->lpVtbl->GetNameBlob(This,NameIndex,Encoding,pstrName))

#define ICertEncodeAltName2_SetNameEntryBlob(This,NameIndex,NameChoice,strName,Encoding) \
    ((This)->lpVtbl->SetNameEntryBlob(This,NameIndex,NameChoice,strName,Encoding))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeAltName2_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeBitString_INTERFACE_DEFINED__
#define __ICertEncodeBitString_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeBitString;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeBitStringVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeBitString * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeBitString * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeBitString * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeBitString * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeBitString * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeBitString * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeBitString * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeBitString * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetBitCount )(
        ICertEncodeBitString * This,
        LONG *pBitCount);

    HRESULT (STDMETHODCALLTYPE *GetBitString )(
        ICertEncodeBitString * This,
        BSTR *pstrBitString);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeBitString * This,
        LONG BitCount,
        BSTR strBitString,
        BSTR *pstrBinary);

    END_INTERFACE
} ICertEncodeBitStringVtbl;

interface ICertEncodeBitString {
    CONST_VTBL struct ICertEncodeBitStringVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeBitString_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeBitString_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeBitString_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeBitString_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeBitString_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeBitString_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeBitString_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeBitString_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeBitString_GetBitCount(This,pBitCount) \
    ((This)->lpVtbl->GetBitCount(This,pBitCount))

#define ICertEncodeBitString_GetBitString(This,pstrBitString) \
    ((This)->lpVtbl->GetBitString(This,pstrBitString))

#define ICertEncodeBitString_Encode(This,BitCount,strBitString,pstrBinary) \
    ((This)->lpVtbl->Encode(This,BitCount,strBitString,pstrBinary))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeBitString_INTERFACE_DEFINED__ */

#ifndef __ICertEncodeBitString2_INTERFACE_DEFINED__
#define __ICertEncodeBitString2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertEncodeBitString2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertEncodeBitString2Vtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertEncodeBitString2 * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertEncodeBitString2 * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertEncodeBitString2 * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertEncodeBitString2 * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertEncodeBitString2 * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertEncodeBitString2 * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertEncodeBitString2 * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *Decode )(
        ICertEncodeBitString2 * This,
        const BSTR strBinary);

    HRESULT (STDMETHODCALLTYPE *GetBitCount )(
        ICertEncodeBitString2 * This,
        LONG *pBitCount);

    HRESULT (STDMETHODCALLTYPE *GetBitString )(
        ICertEncodeBitString2 * This,
        BSTR *pstrBitString);

    HRESULT (STDMETHODCALLTYPE *Encode )(
        ICertEncodeBitString2 * This,
        LONG BitCount,
        BSTR strBitString,
        BSTR *pstrBinary);

    HRESULT (STDMETHODCALLTYPE *DecodeBlob )(
        ICertEncodeBitString2 * This,
        const BSTR strEncodedData,
        EncodingType Encoding);

    HRESULT (STDMETHODCALLTYPE *EncodeBlob )(
        ICertEncodeBitString2 * This,
        LONG BitCount,
        const BSTR strBitString,
        EncodingType EncodingIn,
        EncodingType Encoding,
        BSTR *pstrEncodedData);

    HRESULT (STDMETHODCALLTYPE *GetBitStringBlob )(
        ICertEncodeBitString2 * This,
        EncodingType Encoding,
        BSTR *pstrBitString);

    END_INTERFACE
} ICertEncodeBitString2Vtbl;

interface ICertEncodeBitString2 {
    CONST_VTBL struct ICertEncodeBitString2Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertEncodeBitString2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))

#define ICertEncodeBitString2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define ICertEncodeBitString2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define ICertEncodeBitString2_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))

#define ICertEncodeBitString2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))

#define ICertEncodeBitString2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))

#define ICertEncodeBitString2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))

#define ICertEncodeBitString2_Decode(This,strBinary) \
    ((This)->lpVtbl->Decode(This,strBinary))

#define ICertEncodeBitString2_GetBitCount(This,pBitCount) \
    ((This)->lpVtbl->GetBitCount(This,pBitCount))

#define ICertEncodeBitString2_GetBitString(This,pstrBitString) \
    ((This)->lpVtbl->GetBitString(This,pstrBitString))

#define ICertEncodeBitString2_Encode(This,BitCount,strBitString,pstrBinary) \
    ((This)->lpVtbl->Encode(This,BitCount,strBitString,pstrBinary))

#define ICertEncodeBitString2_DecodeBlob(This,strEncodedData,Encoding) \
    ((This)->lpVtbl->DecodeBlob(This,strEncodedData,Encoding))

#define ICertEncodeBitString2_EncodeBlob(This,BitCount,strBitString,EncodingIn,Encoding,pstrEncodedData) \
    ((This)->lpVtbl->EncodeBlob(This,BitCount,strBitString,EncodingIn,Encoding,pstrEncodedData))

#define ICertEncodeBitString2_GetBitStringBlob(This,Encoding,pstrBitString) \
    ((This)->lpVtbl->GetBitStringBlob(This,Encoding,pstrBitString))

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertEncodeBitString2_INTERFACE_DEFINED__ */

#ifndef __CERTENCODELib_LIBRARY_DEFINED__
#define __CERTENCODELib_LIBRARY_DEFINED__

EXTERN_C const IID LIBID_CERTENCODELib;
EXTERN_C const CLSID CLSID_CCertEncodeStringArray;
EXTERN_C const CLSID CLSID_CCertEncodeLongArray;
EXTERN_C const CLSID CLSID_CCertEncodeDateArray;
EXTERN_C const CLSID CLSID_CCertEncodeCRLDistInfo;
EXTERN_C const CLSID CLSID_CCertEncodeAltName;
EXTERN_C const CLSID CLSID_CCertEncodeBitString;

#endif /* __CERTENCODELib_LIBRARY_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0013_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long, BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal( unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );

unsigned long __RPC_USER BSTR_UserSize64( unsigned long *, unsigned long, BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64( unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree64( unsigned long *, BSTR * );

/* end of Additional Prototypes */

#endif
