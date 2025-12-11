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

#ifndef __certif_h__
#define __certif_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward Declarations */

#ifndef __ICertServerPolicy_FWD_DEFINED__
#define __ICertServerPolicy_FWD_DEFINED__
typedef interface ICertServerPolicy ICertServerPolicy;
#endif  /* __ICertServerPolicy_FWD_DEFINED__ */

#ifndef __ICertServerExit_FWD_DEFINED__
#define __ICertServerExit_FWD_DEFINED__
typedef interface ICertServerExit ICertServerExit;
#endif  /* __ICertServerExit_FWD_DEFINED__ */

/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define ENUMEXT_OBJECTID ( 0x1 )

extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0000_v0_0_s_ifspec;

#ifndef __ICertServerPolicy_INTERFACE_DEFINED__
#define __ICertServerPolicy_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertServerPolicy;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertServerPolicyVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertServerPolicy * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertServerPolicy * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertServerPolicy * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertServerPolicy * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertServerPolicy * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertServerPolicy * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertServerPolicy * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *SetContext )(
        ICertServerPolicy * This,
        LONG Context);

    HRESULT (STDMETHODCALLTYPE *GetRequestProperty )(
        ICertServerPolicy * This,
        const BSTR strPropertyName,
        LONG PropertyType,
        VARIANT *pvarPropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetRequestAttribute )(
        ICertServerPolicy * This,
        const BSTR strAttributeName,
        BSTR *pstrAttributeValue);

    HRESULT (STDMETHODCALLTYPE *GetCertificateProperty )(
        ICertServerPolicy * This,
        const BSTR strPropertyName,
        LONG PropertyType,
        VARIANT *pvarPropertyValue);

    HRESULT (STDMETHODCALLTYPE *SetCertificateProperty )(
        ICertServerPolicy * This,
        const BSTR strPropertyName,
        LONG PropertyType,
        const VARIANT *pvarPropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetCertificateExtension )(
        ICertServerPolicy * This,
        const BSTR strExtensionName,
        LONG Type,
        VARIANT *pvarValue);

    HRESULT (STDMETHODCALLTYPE *GetCertificateExtensionFlags )(
        ICertServerPolicy * This,
        LONG *pExtFlags);

    HRESULT (STDMETHODCALLTYPE *SetCertificateExtension )(
        ICertServerPolicy * This,
        const BSTR strExtensionName,
        LONG Type,
        LONG ExtFlags,
        const VARIANT *pvarValue);

    HRESULT (STDMETHODCALLTYPE *EnumerateExtensionsSetup )(
        ICertServerPolicy * This,
        LONG Flags);

    HRESULT (STDMETHODCALLTYPE *EnumerateExtensions )(
        ICertServerPolicy * This,
        BSTR *pstrExtensionName);

    HRESULT (STDMETHODCALLTYPE *EnumerateExtensionsClose )(
        ICertServerPolicy * This);

    HRESULT (STDMETHODCALLTYPE *EnumerateAttributesSetup )(
        ICertServerPolicy * This,
        LONG Flags);

    HRESULT (STDMETHODCALLTYPE *EnumerateAttributes )(
        ICertServerPolicy * This,
        BSTR *pstrAttributeName);

    HRESULT (STDMETHODCALLTYPE *EnumerateAttributesClose )(
        ICertServerPolicy * This);

    END_INTERFACE
} ICertServerPolicyVtbl;

interface ICertServerPolicy {
    CONST_VTBL struct ICertServerPolicyVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertServerPolicy_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertServerPolicy_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertServerPolicy_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 

#define ICertServerPolicy_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertServerPolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertServerPolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertServerPolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ICertServerPolicy_SetContext(This,Context) \
    ( (This)->lpVtbl -> SetContext(This,Context) ) 

#define ICertServerPolicy_GetRequestProperty(This,strPropertyName,PropertyType,pvarPropertyValue) \
    ( (This)->lpVtbl -> GetRequestProperty(This,strPropertyName,PropertyType,pvarPropertyValue) ) 

#define ICertServerPolicy_GetRequestAttribute(This,strAttributeName,pstrAttributeValue) \
    ( (This)->lpVtbl -> GetRequestAttribute(This,strAttributeName,pstrAttributeValue) ) 

#define ICertServerPolicy_GetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) \
    ( (This)->lpVtbl -> GetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) ) 

#define ICertServerPolicy_SetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) \
    ( (This)->lpVtbl -> SetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) ) 

#define ICertServerPolicy_GetCertificateExtension(This,strExtensionName,Type,pvarValue) \
    ( (This)->lpVtbl -> GetCertificateExtension(This,strExtensionName,Type,pvarValue) ) 

#define ICertServerPolicy_GetCertificateExtensionFlags(This,pExtFlags) \
    ( (This)->lpVtbl -> GetCertificateExtensionFlags(This,pExtFlags) ) 

#define ICertServerPolicy_SetCertificateExtension(This,strExtensionName,Type,ExtFlags,pvarValue) \
    ( (This)->lpVtbl -> SetCertificateExtension(This,strExtensionName,Type,ExtFlags,pvarValue) ) 

#define ICertServerPolicy_EnumerateExtensionsSetup(This,Flags) \
    ( (This)->lpVtbl -> EnumerateExtensionsSetup(This,Flags) ) 

#define ICertServerPolicy_EnumerateExtensions(This,pstrExtensionName) \
    ( (This)->lpVtbl -> EnumerateExtensions(This,pstrExtensionName) ) 

#define ICertServerPolicy_EnumerateExtensionsClose(This) \
    ( (This)->lpVtbl -> EnumerateExtensionsClose(This) ) 

#define ICertServerPolicy_EnumerateAttributesSetup(This,Flags) \
    ( (This)->lpVtbl -> EnumerateAttributesSetup(This,Flags) ) 

#define ICertServerPolicy_EnumerateAttributes(This,pstrAttributeName) \
    ( (This)->lpVtbl -> EnumerateAttributes(This,pstrAttributeName) ) 

#define ICertServerPolicy_EnumerateAttributesClose(This) \
    ( (This)->lpVtbl -> EnumerateAttributesClose(This) ) 

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertServerPolicy_INTERFACE_DEFINED__ */

#ifndef __ICertServerExit_INTERFACE_DEFINED__
#define __ICertServerExit_INTERFACE_DEFINED__

EXTERN_C const IID IID_ICertServerExit;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else  /* C style interface */

typedef struct ICertServerExitVtbl {
    BEGIN_INTERFACE

    HRESULT(STDMETHODCALLTYPE *QueryInterface)(
        ICertServerExit * This,
        REFIID riid,
        void * *ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef )(
        ICertServerExit * This);

    ULONG (STDMETHODCALLTYPE *Release )(
        ICertServerExit * This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount )(
        ICertServerExit * This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo )(
        ICertServerExit * This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo * *ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames )(
        ICertServerExit * This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke )(
        ICertServerExit * This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *SetContext )(
        ICertServerExit * This,
        LONG Context);

    HRESULT (STDMETHODCALLTYPE *GetRequestProperty )(
        ICertServerExit * This,
        const BSTR strPropertyName,
        LONG PropertyType,
        VARIANT *pvarPropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetRequestAttribute )(
        ICertServerExit * This,
        const BSTR strAttributeName,
        BSTR *pstrAttributeValue);

    HRESULT (STDMETHODCALLTYPE *GetCertificateProperty )(
        ICertServerExit * This,
        const BSTR strPropertyName,
        LONG PropertyType,
        VARIANT *pvarPropertyValue);

    HRESULT (STDMETHODCALLTYPE *GetCertificateExtension )(
        ICertServerExit * This,
        const BSTR strExtensionName,
        LONG Type,
        VARIANT *pvarValue);

    HRESULT (STDMETHODCALLTYPE *GetCertificateExtensionFlags )(
        ICertServerExit * This,
        LONG *pExtFlags);

    HRESULT (STDMETHODCALLTYPE *EnumerateExtensionsSetup )(
        ICertServerExit * This,
        LONG Flags);

    HRESULT (STDMETHODCALLTYPE *EnumerateExtensions )(
        ICertServerExit * This,
        BSTR *pstrExtensionName);

    HRESULT (STDMETHODCALLTYPE *EnumerateExtensionsClose )(
        ICertServerExit * This);

    HRESULT (STDMETHODCALLTYPE *EnumerateAttributesSetup )(
        ICertServerExit * This,
        LONG Flags);

    HRESULT (STDMETHODCALLTYPE *EnumerateAttributes )(
        ICertServerExit * This,
        BSTR *pstrAttributeName);

    HRESULT (STDMETHODCALLTYPE *EnumerateAttributesClose )(
        ICertServerExit * This);

    END_INTERFACE
} ICertServerExitVtbl;

interface ICertServerExit {
    CONST_VTBL struct ICertServerExitVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define ICertServerExit_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertServerExit_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertServerExit_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 

#define ICertServerExit_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertServerExit_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertServerExit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertServerExit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#define ICertServerExit_SetContext(This,Context) \
    ( (This)->lpVtbl -> SetContext(This,Context) ) 

#define ICertServerExit_GetRequestProperty(This,strPropertyName,PropertyType,pvarPropertyValue) \
    ( (This)->lpVtbl -> GetRequestProperty(This,strPropertyName,PropertyType,pvarPropertyValue) ) 

#define ICertServerExit_GetRequestAttribute(This,strAttributeName,pstrAttributeValue) \
    ( (This)->lpVtbl -> GetRequestAttribute(This,strAttributeName,pstrAttributeValue) ) 

#define ICertServerExit_GetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) \
    ( (This)->lpVtbl -> GetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) ) 

#define ICertServerExit_GetCertificateExtension(This,strExtensionName,Type,pvarValue) \
    ( (This)->lpVtbl -> GetCertificateExtension(This,strExtensionName,Type,pvarValue) ) 

#define ICertServerExit_GetCertificateExtensionFlags(This,pExtFlags) \
    ( (This)->lpVtbl -> GetCertificateExtensionFlags(This,pExtFlags) ) 

#define ICertServerExit_EnumerateExtensionsSetup(This,Flags) \
    ( (This)->lpVtbl -> EnumerateExtensionsSetup(This,Flags) ) 

#define ICertServerExit_EnumerateExtensions(This,pstrExtensionName) \
    ( (This)->lpVtbl -> EnumerateExtensions(This,pstrExtensionName) ) 

#define ICertServerExit_EnumerateExtensionsClose(This) \
    ( (This)->lpVtbl -> EnumerateExtensionsClose(This) ) 

#define ICertServerExit_EnumerateAttributesSetup(This,Flags) \
    ( (This)->lpVtbl -> EnumerateAttributesSetup(This,Flags) ) 

#define ICertServerExit_EnumerateAttributes(This,pstrAttributeName) \
    ( (This)->lpVtbl -> EnumerateAttributes(This,pstrAttributeName) ) 

#define ICertServerExit_EnumerateAttributesClose(This) \
    ( (This)->lpVtbl -> EnumerateAttributesClose(This) ) 

#endif /* COBJMACROS */

#endif  /* C style interface */

#endif  /* __ICertServerExit_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long, BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal( unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );

unsigned long __RPC_USER VARIANT_UserSize( unsigned long *, unsigned long, VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( unsigned long *, unsigned char *, VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal( unsigned long *, unsigned char *, VARIANT * );
void __RPC_USER VARIANT_UserFree( unsigned long *, VARIANT * );

unsigned long __RPC_USER BSTR_UserSize64( unsigned long *, unsigned long, BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64( unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree64( unsigned long *, BSTR * );

unsigned long __RPC_USER VARIANT_UserSize64( unsigned long *, unsigned long, VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( unsigned long *, unsigned char *, VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64( unsigned long *, unsigned char *, VARIANT * );
void __RPC_USER VARIANT_UserFree64( unsigned long *, VARIANT * );

/* end of Additional Prototypes */

#endif
