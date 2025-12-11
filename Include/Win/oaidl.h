/* Generated from oaidl.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef __oaidl_h__
#define __oaidl_h__

#if __POCC__ >= 500
#pragma once
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2198)  /* Nameless field is not standard */
#endif

/* Forward declarations */

#ifndef __ICreateTypeInfo_FWD_DEFINED__
#define __ICreateTypeInfo_FWD_DEFINED__
typedef interface ICreateTypeInfo ICreateTypeInfo;
#endif /* __ICreateTypeInfo_FWD_DEFINED__ */

#ifndef __ICreateTypeInfo2_FWD_DEFINED__
#define __ICreateTypeInfo2_FWD_DEFINED__
typedef interface ICreateTypeInfo2 ICreateTypeInfo2;
#endif /* __ICreateTypeInfo2_FWD_DEFINED__ */

#ifndef __ICreateTypeLib_FWD_DEFINED__
#define __ICreateTypeLib_FWD_DEFINED__
typedef interface ICreateTypeLib ICreateTypeLib;
#endif /* __ICreateTypeLib_FWD_DEFINED__ */

#ifndef __ICreateTypeLib2_FWD_DEFINED__
#define __ICreateTypeLib2_FWD_DEFINED__
typedef interface ICreateTypeLib2 ICreateTypeLib2;
#endif /* __ICreateTypeLib2_FWD_DEFINED__ */

#ifndef __IDispatch_FWD_DEFINED__
#define __IDispatch_FWD_DEFINED__
typedef interface IDispatch IDispatch;
#endif /* __IDispatch_FWD_DEFINED__ */

#ifndef __IEnumVARIANT_FWD_DEFINED__
#define __IEnumVARIANT_FWD_DEFINED__
typedef interface IEnumVARIANT IEnumVARIANT;
#endif /* __IEnumVARIANT_FWD_DEFINED__ */

#ifndef __ITypeComp_FWD_DEFINED__
#define __ITypeComp_FWD_DEFINED__
typedef interface ITypeComp ITypeComp;
#endif /* __ITypeComp_FWD_DEFINED__ */

#ifndef __ITypeInfo_FWD_DEFINED__
#define __ITypeInfo_FWD_DEFINED__
typedef interface ITypeInfo ITypeInfo;
#endif /* __ITypeInfo_FWD_DEFINED__ */

#ifndef __ITypeInfo2_FWD_DEFINED__
#define __ITypeInfo2_FWD_DEFINED__
typedef interface ITypeInfo2 ITypeInfo2;
#endif /* __ITypeInfo2_FWD_DEFINED__ */

#ifndef __ITypeLib_FWD_DEFINED__
#define __ITypeLib_FWD_DEFINED__
typedef interface ITypeLib ITypeLib;
#endif /* __ITypeLib_FWD_DEFINED__ */

#ifndef __ITypeLib2_FWD_DEFINED__
#define __ITypeLib2_FWD_DEFINED__
typedef interface ITypeLib2 ITypeLib2;
#endif /* __ITypeLib2_FWD_DEFINED__ */

#ifndef __ITypeChangeEvents_FWD_DEFINED__
#define __ITypeChangeEvents_FWD_DEFINED__
typedef interface ITypeChangeEvents ITypeChangeEvents;
#endif /* __ITypeChangeEvents_FWD_DEFINED__ */

#ifndef __IErrorInfo_FWD_DEFINED__
#define __IErrorInfo_FWD_DEFINED__
typedef interface IErrorInfo IErrorInfo;
#endif /* __IErrorInfo_FWD_DEFINED__ */

#ifndef __ICreateErrorInfo_FWD_DEFINED__
#define __ICreateErrorInfo_FWD_DEFINED__
typedef interface ICreateErrorInfo ICreateErrorInfo;
#endif /* __ICreateErrorInfo_FWD_DEFINED__ */

#ifndef __ISupportErrorInfo_FWD_DEFINED__
#define __ISupportErrorInfo_FWD_DEFINED__
typedef interface ISupportErrorInfo ISupportErrorInfo;
#endif /* __ISupportErrorInfo_FWD_DEFINED__ */

#ifndef __ITypeFactory_FWD_DEFINED__
#define __ITypeFactory_FWD_DEFINED__
typedef interface ITypeFactory ITypeFactory;
#endif /* __ITypeFactory_FWD_DEFINED__ */

#ifndef __ITypeMarshal_FWD_DEFINED__
#define __ITypeMarshal_FWD_DEFINED__
typedef interface ITypeMarshal ITypeMarshal;
#endif /* __ITypeMarshal_FWD_DEFINED__ */

#ifndef __IRecordInfo_FWD_DEFINED__
#define __IRecordInfo_FWD_DEFINED__
typedef interface IRecordInfo IRecordInfo;
#endif /* __IRecordInfo_FWD_DEFINED__ */

#ifndef __IErrorLog_FWD_DEFINED__
#define __IErrorLog_FWD_DEFINED__
typedef interface IErrorLog IErrorLog;
#endif /* __IErrorLog_FWD_DEFINED__ */

#ifndef __IPropertyBag_FWD_DEFINED__
#define __IPropertyBag_FWD_DEFINED__
typedef interface IPropertyBag IPropertyBag;
#endif /* __IPropertyBag_FWD_DEFINED__ */

#ifndef __ITypeLibRegistrationReader_FWD_DEFINED__
#define __ITypeLibRegistrationReader_FWD_DEFINED__
typedef interface ITypeLibRegistrationReader ITypeLibRegistrationReader;
#endif /* __ITypeLibRegistrationReader_FWD_DEFINED__ */

#ifndef __ITypeLibRegistration_FWD_DEFINED__
#define __ITypeLibRegistration_FWD_DEFINED__
typedef interface ITypeLibRegistration ITypeLibRegistration;
#endif /* __ITypeLibRegistration_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"

#include <winapifamily.h>


#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#ifndef __ICreateTypeInfo_FWD_DEFINED__
#define __ICreateTypeInfo_FWD_DEFINED__
typedef interface ICreateTypeInfo ICreateTypeInfo;
#endif /* __ICreateTypeInfo_FWD_DEFINED__ */

#ifndef __ICreateTypeInfo2_FWD_DEFINED__
#define __ICreateTypeInfo2_FWD_DEFINED__
typedef interface ICreateTypeInfo2 ICreateTypeInfo2;
#endif /* __ICreateTypeInfo2_FWD_DEFINED__ */

#ifndef __ICreateTypeLib_FWD_DEFINED__
#define __ICreateTypeLib_FWD_DEFINED__
typedef interface ICreateTypeLib ICreateTypeLib;
#endif /* __ICreateTypeLib_FWD_DEFINED__ */

#ifndef __ICreateTypeLib2_FWD_DEFINED__
#define __ICreateTypeLib2_FWD_DEFINED__
typedef interface ICreateTypeLib2 ICreateTypeLib2;
#endif /* __ICreateTypeLib2_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#ifndef __IDispatch_FWD_DEFINED__
#define __IDispatch_FWD_DEFINED__
typedef interface IDispatch IDispatch;
#endif /* __IDispatch_FWD_DEFINED__ */

#ifndef __IEnumVARIANT_FWD_DEFINED__
#define __IEnumVARIANT_FWD_DEFINED__
typedef interface IEnumVARIANT IEnumVARIANT;
#endif /* __IEnumVARIANT_FWD_DEFINED__ */

#ifndef __ITypeComp_FWD_DEFINED__
#define __ITypeComp_FWD_DEFINED__
typedef interface ITypeComp ITypeComp;
#endif /* __ITypeComp_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#ifndef __ITypeInfo_FWD_DEFINED__
#define __ITypeInfo_FWD_DEFINED__
typedef interface ITypeInfo ITypeInfo;
#endif /* __ITypeInfo_FWD_DEFINED__ */

#ifndef __ITypeInfo2_FWD_DEFINED__
#define __ITypeInfo2_FWD_DEFINED__
typedef interface ITypeInfo2 ITypeInfo2;
#endif /* __ITypeInfo2_FWD_DEFINED__ */

#ifndef __ITypeLib_FWD_DEFINED__
#define __ITypeLib_FWD_DEFINED__
typedef interface ITypeLib ITypeLib;
#endif /* __ITypeLib_FWD_DEFINED__ */

#ifndef __ITypeLib2_FWD_DEFINED__
#define __ITypeLib2_FWD_DEFINED__
typedef interface ITypeLib2 ITypeLib2;
#endif /* __ITypeLib2_FWD_DEFINED__ */

#ifndef __ITypeChangeEvents_FWD_DEFINED__
#define __ITypeChangeEvents_FWD_DEFINED__
typedef interface ITypeChangeEvents ITypeChangeEvents;
#endif /* __ITypeChangeEvents_FWD_DEFINED__ */

#ifndef __IErrorInfo_FWD_DEFINED__
#define __IErrorInfo_FWD_DEFINED__
typedef interface IErrorInfo IErrorInfo;
#endif /* __IErrorInfo_FWD_DEFINED__ */

#ifndef __ICreateErrorInfo_FWD_DEFINED__
#define __ICreateErrorInfo_FWD_DEFINED__
typedef interface ICreateErrorInfo ICreateErrorInfo;
#endif /* __ICreateErrorInfo_FWD_DEFINED__ */

#ifndef __ISupportErrorInfo_FWD_DEFINED__
#define __ISupportErrorInfo_FWD_DEFINED__
typedef interface ISupportErrorInfo ISupportErrorInfo;
#endif /* __ISupportErrorInfo_FWD_DEFINED__ */

#ifndef __ITypeFactory_FWD_DEFINED__
#define __ITypeFactory_FWD_DEFINED__
typedef interface ITypeFactory ITypeFactory;
#endif /* __ITypeFactory_FWD_DEFINED__ */

#ifndef __ITypeMarshal_FWD_DEFINED__
#define __ITypeMarshal_FWD_DEFINED__
typedef interface ITypeMarshal ITypeMarshal;
#endif /* __ITypeMarshal_FWD_DEFINED__ */

#ifndef __IRecordInfo_FWD_DEFINED__
#define __IRecordInfo_FWD_DEFINED__
typedef interface IRecordInfo IRecordInfo;
#endif /* __IRecordInfo_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IOleAutomationTypes interface (v1.0)
 */
#ifndef __IOleAutomationTypes_INTERFACE_DEFINED__
#define __IOleAutomationTypes_INTERFACE_DEFINED__

typedef CY CURRENCY;

typedef struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
} SAFEARRAYBOUND;
typedef struct tagSAFEARRAYBOUND *LPSAFEARRAYBOUND;

/* the following is what MIDL knows how to remote */

typedef struct _wireVARIANT *wireVARIANT;
typedef struct _wireBRECORD *wireBRECORD;

typedef struct _wireSAFEARR_BSTR {
    ULONG Size;
    wireBSTR *aBstr;
} SAFEARR_BSTR;

typedef struct _wireSAFEARR_UNKNOWN {
    ULONG Size;
    IUnknown **apUnknown;
} SAFEARR_UNKNOWN;

typedef struct _wireSAFEARR_DISPATCH {
    ULONG Size;
    IDispatch **apDispatch;
} SAFEARR_DISPATCH;

typedef struct _wireSAFEARR_VARIANT {
    ULONG Size;
    wireVARIANT *aVariant;
} SAFEARR_VARIANT;

typedef struct _wireSAFEARR_BRECORD {
    ULONG Size;
    wireBRECORD *aRecord;
} SAFEARR_BRECORD;

typedef struct _wireSAFEARR_HAVEIID {
    ULONG Size;
    IUnknown **apUnknown;
    IID iid;
} SAFEARR_HAVEIID;

typedef enum tagSF_TYPE {
    SF_ERROR = VT_ERROR,
    SF_I1 = VT_I1,
    SF_I2 = VT_I2,
    SF_I4 = VT_I4,
    SF_I8 = VT_I8,
    SF_BSTR = VT_BSTR,
    SF_UNKNOWN = VT_UNKNOWN,
    SF_DISPATCH = VT_DISPATCH,
    SF_VARIANT = VT_VARIANT,
    SF_RECORD = VT_RECORD,
    SF_HAVEIID = VT_UNKNOWN | VT_RESERVED
} SF_TYPE;

typedef struct _wireSAFEARRAY_UNION {
    SAFEARR_BSTR BstrStr;
    SAFEARR_UNKNOWN UnknownStr;
    SAFEARR_DISPATCH DispatchStr;
    SAFEARR_VARIANT VariantStr;
    SAFEARR_BRECORD RecordStr;
    SAFEARR_HAVEIID HaveIidStr;
    BYTE_SIZEDARR ByteStr;
    WORD_SIZEDARR WordStr;
    DWORD_SIZEDARR LongStr;
    HYPER_SIZEDARR HyperStr;
} SAFEARRAYUNION;

typedef struct _wireSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    SAFEARRAYUNION uArrayStructs;
    SAFEARRAYBOUND rgsabound[ 1 ];
} *wireSAFEARRAY;

typedef wireSAFEARRAY *wirePSAFEARRAY;

typedef struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND *rgsabound;
} SAFEARRAY;

typedef SAFEARRAY *LPSAFEARRAY;

#define FADF_AUTO  (0x1)
#define FADF_STATIC  (0x2)
#define FADF_EMBEDDED  (0x4)
#define FADF_FIXEDSIZE  (0x10)
#define FADF_RECORD  (0x20)
#define FADF_HAVEIID  (0x40)

#define FADF_HAVEVARTYPE  (0x80)
#define FADF_BSTR  (0x100)
#define FADF_UNKNOWN  (0x200)
#define FADF_DISPATCH  (0x400)
#define FADF_VARIANT  (0x800)
#define FADF_RESERVED  (0xf008)

/* VARIANT STRUCTURE
 *
 *  VARTYPE vt;
 *  WORD wReserved1;
 *  WORD wReserved2;
 *  WORD wReserved3;
 *  union {
 *    LONGLONG       VT_I8
 *    LONG           VT_I4
 *    BYTE           VT_UI1
 *    SHORT          VT_I2
 *    FLOAT          VT_R4
 *    DOUBLE         VT_R8
 *    VARIANT_BOOL   VT_BOOL
 *    SCODE          VT_ERROR
 *    CY             VT_CY
 *    DATE           VT_DATE
 *    BSTR           VT_BSTR
 *    IUnknown *     VT_UNKNOWN
 *    IDispatch *    VT_DISPATCH
 *    SAFEARRAY *    VT_ARRAY
 *    BYTE *         VT_BYREF|VT_UI1
 *    SHORT *        VT_BYREF|VT_I2
 *    LONG *         VT_BYREF|VT_I4
 *    LONGLONG *     VT_BYREF|VT_I8
 *    FLOAT *        VT_BYREF|VT_R4
 *    DOUBLE *       VT_BYREF|VT_R8
 *    VARIANT_BOOL * VT_BYREF|VT_BOOL
 *    SCODE *        VT_BYREF|VT_ERROR
 *    CY *           VT_BYREF|VT_CY
 *    DATE *         VT_BYREF|VT_DATE
 *    BSTR *         VT_BYREF|VT_BSTR
 *    IUnknown **    VT_BYREF|VT_UNKNOWN
 *    IDispatch **   VT_BYREF|VT_DISPATCH
 *    SAFEARRAY **   VT_BYREF|VT_ARRAY
 *    VARIANT *      VT_BYREF|VT_VARIANT
 *    PVOID          VT_BYREF (Generic ByRef)
 *    CHAR           VT_I1
 *    USHORT         VT_UI2
 *    ULONG          VT_UI4
 *    ULONGLONG      VT_UI8
 *    INT            VT_INT
 *    UINT           VT_UINT
 *    DECIMAL *      VT_BYREF|VT_DECIMAL
 *    CHAR *         VT_BYREF|VT_I1
 *    USHORT *       VT_BYREF|VT_UI2
 *    ULONG *        VT_BYREF|VT_UI4
 *    ULONGLONG *    VT_BYREF|VT_UI8
 *    INT *          VT_BYREF|VT_INT
 *    UINT *         VT_BYREF|VT_UINT
 *  }
 */

#if (__STDC__ && !defined(_FORCENAMELESSUNION)) || defined(NONAMELESSUNION) || (!defined(_MSC_EXTENSIONS) && !defined(_FORCENAMELESSUNION))
#define __VARIANT_NAME_1 n1
#define __VARIANT_NAME_2 n2
#define __VARIANT_NAME_3 n3
#define __VARIANT_NAME_4 brecVal
#else
#define __tagVARIANT
#define __VARIANT_NAME_1
#define __VARIANT_NAME_2
#define __VARIANT_NAME_3
#define __tagBRECORD
#define __VARIANT_NAME_4
#endif

typedef struct tagVARIANT VARIANT;

struct tagVARIANT {
    union {
        struct __tagVARIANT {
            VARTYPE vt;
            WORD wReserved1;
            WORD wReserved2;
            WORD wReserved3;
            union {
                LONGLONG llVal;
                LONG lVal;
                BYTE bVal;
                SHORT iVal;
                FLOAT fltVal;
                DOUBLE dblVal;
                VARIANT_BOOL boolVal;
                VARIANT_BOOL __OBSOLETE__VARIANT_BOOL;
                SCODE scode;
                CY cyVal;
                DATE date;
                BSTR bstrVal;
                IUnknown *punkVal;
                IDispatch *pdispVal;
                SAFEARRAY *parray;
                BYTE *pbVal;
                SHORT *piVal;
                LONG *plVal;
                LONGLONG *pllVal;
                FLOAT *pfltVal;
                DOUBLE *pdblVal;
                VARIANT_BOOL *pboolVal;
                VARIANT_BOOL *__OBSOLETE__VARIANT_PBOOL;
                SCODE *pscode;
                CY *pcyVal;
                DATE *pdate;
                BSTR *pbstrVal;
                IUnknown **ppunkVal;
                IDispatch **ppdispVal;
                SAFEARRAY **pparray;
                VARIANT *pvarVal;
                PVOID byref;
                CHAR cVal;
                USHORT uiVal;
                ULONG ulVal;
                ULONGLONG ullVal;
                INT intVal;
                UINT uintVal;
                DECIMAL *pdecVal;
                CHAR *pcVal;
                USHORT *puiVal;
                ULONG *pulVal;
                ULONGLONG *pullVal;
                INT *pintVal;
                UINT *puintVal;
                struct __tagBRECORD {
                    PVOID pvRecord;
                    IRecordInfo *pRecInfo;
                } __VARIANT_NAME_4;
            } __VARIANT_NAME_3;
        } __VARIANT_NAME_2;
        DECIMAL decVal;
    } __VARIANT_NAME_1;
};

typedef VARIANT *LPVARIANT;
typedef VARIANT VARIANTARG;
typedef VARIANT *LPVARIANTARG;

#ifdef MIDL_PASS
typedef const VARIANT *REFVARIANT;
#else /* !MIDL_PASS */
#ifndef _REFVARIANT_DEFINED
#define _REFVARIANT_DEFINED
#define REFVARIANT const VARIANT * __MIDL_CONST
#endif /* !_REFVARIANT_DEFINED */
#endif /* !MIDL_PASS */

/* the following is what MIDL knows how to remote */

struct _wireBRECORD {
    ULONG fFlags;
    ULONG clSize;
    IRecordInfo *pRecInfo;
    byte *pRecord;
};

struct _wireVARIANT {
    DWORD clSize;
    DWORD rpcReserved;
    USHORT vt;
    USHORT wReserved1;
    USHORT wReserved2;
    USHORT wReserved3;
    union {
        LONGLONG llVal;
        LONG lVal;
        BYTE bVal;
        SHORT iVal;
        FLOAT fltVal;
        DOUBLE dblVal;
        VARIANT_BOOL boolVal;
        SCODE scode;
        CY cyVal;
        DATE date;
        wireBSTR bstrVal;
        IUnknown *punkVal;
        IDispatch *pdispVal;
        wirePSAFEARRAY parray;
        wireBRECORD brecVal;
        BYTE *pbVal;
        SHORT *piVal;
        LONG *plVal;
        LONGLONG *pllVal;
        FLOAT *pfltVal;
        DOUBLE *pdblVal;
        VARIANT_BOOL *pboolVal;
        SCODE *pscode;
        CY *pcyVal;
        DATE *pdate;
        wireBSTR *pbstrVal;
        IUnknown **ppunkVal;
        IDispatch **ppdispVal;
        wirePSAFEARRAY *pparray;
        wireVARIANT *pvarVal;
        CHAR cVal;
        USHORT uiVal;
        ULONG ulVal;
        ULONGLONG ullVal;
        INT intVal;
        UINT uintVal;
        DECIMAL decVal;
        DECIMAL *pdecVal;
        CHAR *pcVal;
        USHORT *puiVal;
        ULONG *pulVal;
        ULONGLONG *pullVal;
        INT *pintVal;
        UINT *puintVal;
    } DUMMYUNIONNAME;
};

typedef LONG DISPID;
typedef DISPID MEMBERID;
typedef DWORD HREFTYPE;

typedef enum tagTYPEKIND {
    TKIND_ENUM = 0,
    TKIND_RECORD = 1,
    TKIND_MODULE = 2,
    TKIND_INTERFACE = 3,
    TKIND_DISPATCH = 4,
    TKIND_COCLASS = 5,
    TKIND_ALIAS = 6,
    TKIND_UNION = 7,
    TKIND_MAX = 8
} TYPEKIND;

typedef struct tagTYPEDESC {
    union {
        struct tagTYPEDESC *lptdesc;
        struct tagARRAYDESC *lpadesc;
        HREFTYPE hreftype;
    } DUMMYUNIONNAME;
    VARTYPE vt;
} TYPEDESC;

typedef struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[ 1 ];
} ARRAYDESC;

typedef struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
} PARAMDESCEX;
typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
} PARAMDESC;
typedef struct tagPARAMDESC *LPPARAMDESC;

#define PARAMFLAG_NONE  (0x0)
#define PARAMFLAG_FIN  (0x1)
#define PARAMFLAG_FOUT  (0x2)
#define PARAMFLAG_FLCID  (0x4)
#define PARAMFLAG_FRETVAL  (0x8)
#define PARAMFLAG_FOPT  (0x10)
#define PARAMFLAG_FHASDEFAULT  (0x20)
#define PARAMFLAG_FHASCUSTDATA  (0x40)

typedef struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
} IDLDESC;
typedef struct tagIDLDESC *LPIDLDESC;

#define IDLFLAG_NONE  (PARAMFLAG_NONE)
#define IDLFLAG_FIN  (PARAMFLAG_FIN)
#define IDLFLAG_FOUT  (PARAMFLAG_FOUT)
#define IDLFLAG_FLCID  (PARAMFLAG_FLCID)
#define IDLFLAG_FRETVAL  (PARAMFLAG_FRETVAL)

typedef struct tagELEMDESC {
    TYPEDESC tdesc;             /* the type of the element */
    union {
        IDLDESC idldesc;        /* info for remoting the element */
        PARAMDESC paramdesc;    /* info about the parameter */
    } DUMMYUNIONNAME;
} ELEMDESC, * LPELEMDESC;

typedef struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
} TYPEATTR;
typedef struct tagTYPEATTR *LPTYPEATTR;

typedef struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
} DISPPARAMS;

typedef struct tagEXCEPINFO {
    WORD  wCode;
    WORD  wReserved;
    BSTR  bstrSource;
    BSTR  bstrDescription;
    BSTR  bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (__stdcall *pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
} EXCEPINFO, * LPEXCEPINFO;

typedef enum tagCALLCONV {
    CC_FASTCALL = 0,
    CC_CDECL = 1,
    CC_MSCPASCAL = 2,
    CC_PASCAL = CC_MSCPASCAL,
    CC_MACPASCAL = 3,
    CC_STDCALL = 4,
    CC_FPFASTCALL = 5,
    CC_SYSCALL = 6,
    CC_MPWCDECL = 7,
    CC_MPWPASCAL = 8,
    CC_MAX = 9
} CALLCONV;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL = 0,
    FUNC_PUREVIRTUAL = 1,
    FUNC_NONVIRTUAL = 2,
    FUNC_STATIC = 3,
    FUNC_DISPATCH = 4
} FUNCKIND;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC = 1,
    INVOKE_PROPERTYGET = 2,
    INVOKE_PROPERTYPUT = 4,
    INVOKE_PROPERTYPUTREF = 8
} INVOKEKIND;

typedef struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
} FUNCDESC;
typedef struct tagFUNCDESC *LPFUNCDESC;

typedef enum tagVARKIND {
    VAR_PERINSTANCE = 0,
    VAR_STATIC = 1,
    VAR_CONST = 2,
    VAR_DISPATCH = 3
} VARKIND;

#define IMPLTYPEFLAG_FDEFAULT  (0x1)
#define IMPLTYPEFLAG_FSOURCE  (0x2)
#define IMPLTYPEFLAG_FRESTRICTED  (0x4)
#define IMPLTYPEFLAG_FDEFAULTVTABLE  (0x8)

typedef struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union {
        ULONG oInst;
        VARIANT *lpvarValue;
    } DUMMYUNIONNAME;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
} VARDESC;
typedef struct tagVARDESC *LPVARDESC;

typedef enum tagTYPEFLAGS {
    TYPEFLAG_FAPPOBJECT = 0x1,
    TYPEFLAG_FCANCREATE = 0x2,
    TYPEFLAG_FLICENSED = 0x4,
    TYPEFLAG_FPREDECLID = 0x8,
    TYPEFLAG_FHIDDEN = 0x10,
    TYPEFLAG_FCONTROL = 0x20,
    TYPEFLAG_FDUAL = 0x40,
    TYPEFLAG_FNONEXTENSIBLE = 0x80,
    TYPEFLAG_FOLEAUTOMATION = 0x100,
    TYPEFLAG_FRESTRICTED = 0x200,
    TYPEFLAG_FAGGREGATABLE = 0x400,
    TYPEFLAG_FREPLACEABLE = 0x800,
    TYPEFLAG_FDISPATCHABLE = 0x1000,
    TYPEFLAG_FREVERSEBIND = 0x2000,
    TYPEFLAG_FPROXY = 0x4000
} TYPEFLAGS;

typedef enum tagFUNCFLAGS {
    FUNCFLAG_FRESTRICTED = 0x1,
    FUNCFLAG_FSOURCE = 0x2,
    FUNCFLAG_FBINDABLE = 0x4,
    FUNCFLAG_FREQUESTEDIT = 0x8,
    FUNCFLAG_FDISPLAYBIND = 0x10,
    FUNCFLAG_FDEFAULTBIND = 0x20,
    FUNCFLAG_FHIDDEN = 0x40,
    FUNCFLAG_FUSESGETLASTERROR = 0x80,
    FUNCFLAG_FDEFAULTCOLLELEM = 0x100,
    FUNCFLAG_FUIDEFAULT = 0x200,
    FUNCFLAG_FNONBROWSABLE = 0x400,
    FUNCFLAG_FREPLACEABLE = 0x800,
    FUNCFLAG_FIMMEDIATEBIND = 0x1000
} FUNCFLAGS;

typedef enum tagVARFLAGS {
    VARFLAG_FREADONLY = 0x1,
    VARFLAG_FSOURCE = 0x2,
    VARFLAG_FBINDABLE = 0x4,
    VARFLAG_FREQUESTEDIT = 0x8,
    VARFLAG_FDISPLAYBIND = 0x10,
    VARFLAG_FDEFAULTBIND = 0x20,
    VARFLAG_FHIDDEN = 0x40,
    VARFLAG_FRESTRICTED = 0x80,
    VARFLAG_FDEFAULTCOLLELEM = 0x100,
    VARFLAG_FUIDEFAULT = 0x200,
    VARFLAG_FNONBROWSABLE = 0x400,
    VARFLAG_FREPLACEABLE = 0x800,
    VARFLAG_FIMMEDIATEBIND = 0x1000
} VARFLAGS;

typedef struct tagCLEANLOCALSTORAGE {
    IUnknown *pInterface;
    PVOID pStorage;
    DWORD flags;
} CLEANLOCALSTORAGE;

typedef struct tagCUSTDATAITEM {
    GUID guid;
    VARIANTARG varValue;
} CUSTDATAITEM;
typedef struct tagCUSTDATAITEM *LPCUSTDATAITEM;

typedef struct tagCUSTDATA {
    DWORD cCustData;
    LPCUSTDATAITEM prgCustData;
} CUSTDATA;
typedef struct tagCUSTDATA *LPCUSTDATA;

extern RPC_IF_HANDLE IOleAutomationTypes_v1_0_c_ifspec;
extern RPC_IF_HANDLE IOleAutomationTypes_v1_0_s_ifspec;

#endif /* __IOleAutomationTypes_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * ICreateTypeInfo interface
 */
#ifndef __ICreateTypeInfo_INTERFACE_DEFINED__
#define __ICreateTypeInfo_INTERFACE_DEFINED__

typedef ICreateTypeInfo *LPCREATETYPEINFO;

EXTERN_C const IID IID_ICreateTypeInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreateTypeInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreateTypeInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreateTypeInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreateTypeInfo *This);

    /*** ICreateTypeInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGuid)(
        ICreateTypeInfo *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *SetTypeFlags)(
        ICreateTypeInfo *This,
        UINT uTypeFlags);

    HRESULT (STDMETHODCALLTYPE *SetDocString)(
        ICreateTypeInfo *This,
        LPOLESTR pStrDoc);

    HRESULT (STDMETHODCALLTYPE *SetHelpContext)(
        ICreateTypeInfo *This,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetVersion)(
        ICreateTypeInfo *This,
        WORD wMajorVerNum,
        WORD wMinorVerNum);

    HRESULT (STDMETHODCALLTYPE *AddRefTypeInfo)(
        ICreateTypeInfo *This,
        ITypeInfo *pTInfo,
        HREFTYPE *phRefType);

    HRESULT (STDMETHODCALLTYPE *AddFuncDesc)(
        ICreateTypeInfo *This,
        UINT index,
        FUNCDESC *pFuncDesc);

    HRESULT (STDMETHODCALLTYPE *AddImplType)(
        ICreateTypeInfo *This,
        UINT index,
        HREFTYPE hRefType);

    HRESULT (STDMETHODCALLTYPE *SetImplTypeFlags)(
        ICreateTypeInfo *This,
        UINT index,
        INT implTypeFlags);

    HRESULT (STDMETHODCALLTYPE *SetAlignment)(
        ICreateTypeInfo *This,
        WORD cbAlignment);

    HRESULT (STDMETHODCALLTYPE *SetSchema)(
        ICreateTypeInfo *This,
        LPOLESTR pStrSchema);

    HRESULT (STDMETHODCALLTYPE *AddVarDesc)(
        ICreateTypeInfo *This,
        UINT index,
        VARDESC *pVarDesc);

    HRESULT (STDMETHODCALLTYPE *SetFuncAndParamNames)(
        ICreateTypeInfo *This,
        UINT index,
        LPOLESTR *rgszNames,
        UINT cNames);

    HRESULT (STDMETHODCALLTYPE *SetVarName)(
        ICreateTypeInfo *This,
        UINT index,
        LPOLESTR szName);

    HRESULT (STDMETHODCALLTYPE *SetTypeDescAlias)(
        ICreateTypeInfo *This,
        TYPEDESC *pTDescAlias);

    HRESULT (STDMETHODCALLTYPE *DefineFuncAsDllEntry)(
        ICreateTypeInfo *This,
        UINT index,
        LPOLESTR szDllName,
        LPOLESTR szProcName);

    HRESULT (STDMETHODCALLTYPE *SetFuncDocString)(
        ICreateTypeInfo *This,
        UINT index,
        LPOLESTR szDocString);

    HRESULT (STDMETHODCALLTYPE *SetVarDocString)(
        ICreateTypeInfo *This,
        UINT index,
        LPOLESTR szDocString);

    HRESULT (STDMETHODCALLTYPE *SetFuncHelpContext)(
        ICreateTypeInfo *This,
        UINT index,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetVarHelpContext)(
        ICreateTypeInfo *This,
        UINT index,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetMops)(
        ICreateTypeInfo *This,
        UINT index,
        BSTR bstrMops);

    HRESULT (STDMETHODCALLTYPE *SetTypeIdldesc)(
        ICreateTypeInfo *This,
        IDLDESC *pIdlDesc);

    HRESULT (STDMETHODCALLTYPE *LayOut)(
        ICreateTypeInfo *This);

    END_INTERFACE
} ICreateTypeInfoVtbl;

interface ICreateTypeInfo {
    CONST_VTBL ICreateTypeInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreateTypeInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreateTypeInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreateTypeInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreateTypeInfo methods ***/
#define ICreateTypeInfo_SetGuid(This,guid) \
    ((This)->lpVtbl->SetGuid(This,guid))
#define ICreateTypeInfo_SetTypeFlags(This,uTypeFlags) \
    ((This)->lpVtbl->SetTypeFlags(This,uTypeFlags))
#define ICreateTypeInfo_SetDocString(This,pStrDoc) \
    ((This)->lpVtbl->SetDocString(This,pStrDoc))
#define ICreateTypeInfo_SetHelpContext(This,dwHelpContext) \
    ((This)->lpVtbl->SetHelpContext(This,dwHelpContext))
#define ICreateTypeInfo_SetVersion(This,wMajorVerNum,wMinorVerNum) \
    ((This)->lpVtbl->SetVersion(This,wMajorVerNum,wMinorVerNum))
#define ICreateTypeInfo_AddRefTypeInfo(This,pTInfo,phRefType) \
    ((This)->lpVtbl->AddRefTypeInfo(This,pTInfo,phRefType))
#define ICreateTypeInfo_AddFuncDesc(This,index,pFuncDesc) \
    ((This)->lpVtbl->AddFuncDesc(This,index,pFuncDesc))
#define ICreateTypeInfo_AddImplType(This,index,hRefType) \
    ((This)->lpVtbl->AddImplType(This,index,hRefType))
#define ICreateTypeInfo_SetImplTypeFlags(This,index,implTypeFlags) \
    ((This)->lpVtbl->SetImplTypeFlags(This,index,implTypeFlags))
#define ICreateTypeInfo_SetAlignment(This,cbAlignment) \
    ((This)->lpVtbl->SetAlignment(This,cbAlignment))
#define ICreateTypeInfo_SetSchema(This,pStrSchema) \
    ((This)->lpVtbl->SetSchema(This,pStrSchema))
#define ICreateTypeInfo_AddVarDesc(This,index,pVarDesc) \
    ((This)->lpVtbl->AddVarDesc(This,index,pVarDesc))
#define ICreateTypeInfo_SetFuncAndParamNames(This,index,rgszNames,cNames) \
    ((This)->lpVtbl->SetFuncAndParamNames(This,index,rgszNames,cNames))
#define ICreateTypeInfo_SetVarName(This,index,szName) \
    ((This)->lpVtbl->SetVarName(This,index,szName))
#define ICreateTypeInfo_SetTypeDescAlias(This,pTDescAlias) \
    ((This)->lpVtbl->SetTypeDescAlias(This,pTDescAlias))
#define ICreateTypeInfo_DefineFuncAsDllEntry(This,index,szDllName,szProcName) \
    ((This)->lpVtbl->DefineFuncAsDllEntry(This,index,szDllName,szProcName))
#define ICreateTypeInfo_SetFuncDocString(This,index,szDocString) \
    ((This)->lpVtbl->SetFuncDocString(This,index,szDocString))
#define ICreateTypeInfo_SetVarDocString(This,index,szDocString) \
    ((This)->lpVtbl->SetVarDocString(This,index,szDocString))
#define ICreateTypeInfo_SetFuncHelpContext(This,index,dwHelpContext) \
    ((This)->lpVtbl->SetFuncHelpContext(This,index,dwHelpContext))
#define ICreateTypeInfo_SetVarHelpContext(This,index,dwHelpContext) \
    ((This)->lpVtbl->SetVarHelpContext(This,index,dwHelpContext))
#define ICreateTypeInfo_SetMops(This,index,bstrMops) \
    ((This)->lpVtbl->SetMops(This,index,bstrMops))
#define ICreateTypeInfo_SetTypeIdldesc(This,pIdlDesc) \
    ((This)->lpVtbl->SetTypeIdldesc(This,pIdlDesc))
#define ICreateTypeInfo_LayOut(This) \
    ((This)->lpVtbl->LayOut(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreateTypeInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICreateTypeInfo2 interface
 */
#ifndef __ICreateTypeInfo2_INTERFACE_DEFINED__
#define __ICreateTypeInfo2_INTERFACE_DEFINED__

typedef ICreateTypeInfo2 *LPCREATETYPEINFO2;

EXTERN_C const IID IID_ICreateTypeInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreateTypeInfo2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreateTypeInfo2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreateTypeInfo2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreateTypeInfo2 *This);

    /*** ICreateTypeInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGuid)(
        ICreateTypeInfo2 *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *SetTypeFlags)(
        ICreateTypeInfo2 *This,
        UINT uTypeFlags);

    HRESULT (STDMETHODCALLTYPE *SetDocString)(
        ICreateTypeInfo2 *This,
        LPOLESTR pStrDoc);

    HRESULT (STDMETHODCALLTYPE *SetHelpContext)(
        ICreateTypeInfo2 *This,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetVersion)(
        ICreateTypeInfo2 *This,
        WORD wMajorVerNum,
        WORD wMinorVerNum);

    HRESULT (STDMETHODCALLTYPE *AddRefTypeInfo)(
        ICreateTypeInfo2 *This,
        ITypeInfo *pTInfo,
        HREFTYPE *phRefType);

    HRESULT (STDMETHODCALLTYPE *AddFuncDesc)(
        ICreateTypeInfo2 *This,
        UINT index,
        FUNCDESC *pFuncDesc);

    HRESULT (STDMETHODCALLTYPE *AddImplType)(
        ICreateTypeInfo2 *This,
        UINT index,
        HREFTYPE hRefType);

    HRESULT (STDMETHODCALLTYPE *SetImplTypeFlags)(
        ICreateTypeInfo2 *This,
        UINT index,
        INT implTypeFlags);

    HRESULT (STDMETHODCALLTYPE *SetAlignment)(
        ICreateTypeInfo2 *This,
        WORD cbAlignment);

    HRESULT (STDMETHODCALLTYPE *SetSchema)(
        ICreateTypeInfo2 *This,
        LPOLESTR pStrSchema);

    HRESULT (STDMETHODCALLTYPE *AddVarDesc)(
        ICreateTypeInfo2 *This,
        UINT index,
        VARDESC *pVarDesc);

    HRESULT (STDMETHODCALLTYPE *SetFuncAndParamNames)(
        ICreateTypeInfo2 *This,
        UINT index,
        LPOLESTR *rgszNames,
        UINT cNames);

    HRESULT (STDMETHODCALLTYPE *SetVarName)(
        ICreateTypeInfo2 *This,
        UINT index,
        LPOLESTR szName);

    HRESULT (STDMETHODCALLTYPE *SetTypeDescAlias)(
        ICreateTypeInfo2 *This,
        TYPEDESC *pTDescAlias);

    HRESULT (STDMETHODCALLTYPE *DefineFuncAsDllEntry)(
        ICreateTypeInfo2 *This,
        UINT index,
        LPOLESTR szDllName,
        LPOLESTR szProcName);

    HRESULT (STDMETHODCALLTYPE *SetFuncDocString)(
        ICreateTypeInfo2 *This,
        UINT index,
        LPOLESTR szDocString);

    HRESULT (STDMETHODCALLTYPE *SetVarDocString)(
        ICreateTypeInfo2 *This,
        UINT index,
        LPOLESTR szDocString);

    HRESULT (STDMETHODCALLTYPE *SetFuncHelpContext)(
        ICreateTypeInfo2 *This,
        UINT index,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetVarHelpContext)(
        ICreateTypeInfo2 *This,
        UINT index,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetMops)(
        ICreateTypeInfo2 *This,
        UINT index,
        BSTR bstrMops);

    HRESULT (STDMETHODCALLTYPE *SetTypeIdldesc)(
        ICreateTypeInfo2 *This,
        IDLDESC *pIdlDesc);

    HRESULT (STDMETHODCALLTYPE *LayOut)(
        ICreateTypeInfo2 *This);

    /*** ICreateTypeInfo2 methods ***/
    HRESULT (STDMETHODCALLTYPE *DeleteFuncDesc)(
        ICreateTypeInfo2 *This,
        UINT index);

    HRESULT (STDMETHODCALLTYPE *DeleteFuncDescByMemId)(
        ICreateTypeInfo2 *This,
        MEMBERID memid,
        INVOKEKIND invKind);

    HRESULT (STDMETHODCALLTYPE *DeleteVarDesc)(
        ICreateTypeInfo2 *This,
        UINT index);

    HRESULT (STDMETHODCALLTYPE *DeleteVarDescByMemId)(
        ICreateTypeInfo2 *This,
        MEMBERID memid);

    HRESULT (STDMETHODCALLTYPE *DeleteImplType)(
        ICreateTypeInfo2 *This,
        UINT index);

    HRESULT (STDMETHODCALLTYPE *SetCustData)(
        ICreateTypeInfo2 *This,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *SetFuncCustData)(
        ICreateTypeInfo2 *This,
        UINT index,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *SetParamCustData)(
        ICreateTypeInfo2 *This,
        UINT indexFunc,
        UINT indexParam,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *SetVarCustData)(
        ICreateTypeInfo2 *This,
        UINT index,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *SetImplTypeCustData)(
        ICreateTypeInfo2 *This,
        UINT index,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *SetHelpStringContext)(
        ICreateTypeInfo2 *This,
        ULONG dwHelpStringContext);

    HRESULT (STDMETHODCALLTYPE *SetFuncHelpStringContext)(
        ICreateTypeInfo2 *This,
        UINT index,
        ULONG dwHelpStringContext);

    HRESULT (STDMETHODCALLTYPE *SetVarHelpStringContext)(
        ICreateTypeInfo2 *This,
        UINT index,
        ULONG dwHelpStringContext);

    HRESULT (STDMETHODCALLTYPE *Invalidate)(
        ICreateTypeInfo2 *This);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        ICreateTypeInfo2 *This,
        LPOLESTR szName);

    END_INTERFACE
} ICreateTypeInfo2Vtbl;

interface ICreateTypeInfo2 {
    CONST_VTBL ICreateTypeInfo2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreateTypeInfo2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreateTypeInfo2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreateTypeInfo2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreateTypeInfo methods ***/
#define ICreateTypeInfo2_SetGuid(This,guid) \
    ((This)->lpVtbl->SetGuid(This,guid))
#define ICreateTypeInfo2_SetTypeFlags(This,uTypeFlags) \
    ((This)->lpVtbl->SetTypeFlags(This,uTypeFlags))
#define ICreateTypeInfo2_SetDocString(This,pStrDoc) \
    ((This)->lpVtbl->SetDocString(This,pStrDoc))
#define ICreateTypeInfo2_SetHelpContext(This,dwHelpContext) \
    ((This)->lpVtbl->SetHelpContext(This,dwHelpContext))
#define ICreateTypeInfo2_SetVersion(This,wMajorVerNum,wMinorVerNum) \
    ((This)->lpVtbl->SetVersion(This,wMajorVerNum,wMinorVerNum))
#define ICreateTypeInfo2_AddRefTypeInfo(This,pTInfo,phRefType) \
    ((This)->lpVtbl->AddRefTypeInfo(This,pTInfo,phRefType))
#define ICreateTypeInfo2_AddFuncDesc(This,index,pFuncDesc) \
    ((This)->lpVtbl->AddFuncDesc(This,index,pFuncDesc))
#define ICreateTypeInfo2_AddImplType(This,index,hRefType) \
    ((This)->lpVtbl->AddImplType(This,index,hRefType))
#define ICreateTypeInfo2_SetImplTypeFlags(This,index,implTypeFlags) \
    ((This)->lpVtbl->SetImplTypeFlags(This,index,implTypeFlags))
#define ICreateTypeInfo2_SetAlignment(This,cbAlignment) \
    ((This)->lpVtbl->SetAlignment(This,cbAlignment))
#define ICreateTypeInfo2_SetSchema(This,pStrSchema) \
    ((This)->lpVtbl->SetSchema(This,pStrSchema))
#define ICreateTypeInfo2_AddVarDesc(This,index,pVarDesc) \
    ((This)->lpVtbl->AddVarDesc(This,index,pVarDesc))
#define ICreateTypeInfo2_SetFuncAndParamNames(This,index,rgszNames,cNames) \
    ((This)->lpVtbl->SetFuncAndParamNames(This,index,rgszNames,cNames))
#define ICreateTypeInfo2_SetVarName(This,index,szName) \
    ((This)->lpVtbl->SetVarName(This,index,szName))
#define ICreateTypeInfo2_SetTypeDescAlias(This,pTDescAlias) \
    ((This)->lpVtbl->SetTypeDescAlias(This,pTDescAlias))
#define ICreateTypeInfo2_DefineFuncAsDllEntry(This,index,szDllName,szProcName) \
    ((This)->lpVtbl->DefineFuncAsDllEntry(This,index,szDllName,szProcName))
#define ICreateTypeInfo2_SetFuncDocString(This,index,szDocString) \
    ((This)->lpVtbl->SetFuncDocString(This,index,szDocString))
#define ICreateTypeInfo2_SetVarDocString(This,index,szDocString) \
    ((This)->lpVtbl->SetVarDocString(This,index,szDocString))
#define ICreateTypeInfo2_SetFuncHelpContext(This,index,dwHelpContext) \
    ((This)->lpVtbl->SetFuncHelpContext(This,index,dwHelpContext))
#define ICreateTypeInfo2_SetVarHelpContext(This,index,dwHelpContext) \
    ((This)->lpVtbl->SetVarHelpContext(This,index,dwHelpContext))
#define ICreateTypeInfo2_SetMops(This,index,bstrMops) \
    ((This)->lpVtbl->SetMops(This,index,bstrMops))
#define ICreateTypeInfo2_SetTypeIdldesc(This,pIdlDesc) \
    ((This)->lpVtbl->SetTypeIdldesc(This,pIdlDesc))
#define ICreateTypeInfo2_LayOut(This) \
    ((This)->lpVtbl->LayOut(This))
/*** ICreateTypeInfo2 methods ***/
#define ICreateTypeInfo2_DeleteFuncDesc(This,index) \
    ((This)->lpVtbl->DeleteFuncDesc(This,index))
#define ICreateTypeInfo2_DeleteFuncDescByMemId(This,memid,invKind) \
    ((This)->lpVtbl->DeleteFuncDescByMemId(This,memid,invKind))
#define ICreateTypeInfo2_DeleteVarDesc(This,index) \
    ((This)->lpVtbl->DeleteVarDesc(This,index))
#define ICreateTypeInfo2_DeleteVarDescByMemId(This,memid) \
    ((This)->lpVtbl->DeleteVarDescByMemId(This,memid))
#define ICreateTypeInfo2_DeleteImplType(This,index) \
    ((This)->lpVtbl->DeleteImplType(This,index))
#define ICreateTypeInfo2_SetCustData(This,guid,pVarVal) \
    ((This)->lpVtbl->SetCustData(This,guid,pVarVal))
#define ICreateTypeInfo2_SetFuncCustData(This,index,guid,pVarVal) \
    ((This)->lpVtbl->SetFuncCustData(This,index,guid,pVarVal))
#define ICreateTypeInfo2_SetParamCustData(This,indexFunc,indexParam,guid,pVarVal) \
    ((This)->lpVtbl->SetParamCustData(This,indexFunc,indexParam,guid,pVarVal))
#define ICreateTypeInfo2_SetVarCustData(This,index,guid,pVarVal) \
    ((This)->lpVtbl->SetVarCustData(This,index,guid,pVarVal))
#define ICreateTypeInfo2_SetImplTypeCustData(This,index,guid,pVarVal) \
    ((This)->lpVtbl->SetImplTypeCustData(This,index,guid,pVarVal))
#define ICreateTypeInfo2_SetHelpStringContext(This,dwHelpStringContext) \
    ((This)->lpVtbl->SetHelpStringContext(This,dwHelpStringContext))
#define ICreateTypeInfo2_SetFuncHelpStringContext(This,index,dwHelpStringContext) \
    ((This)->lpVtbl->SetFuncHelpStringContext(This,index,dwHelpStringContext))
#define ICreateTypeInfo2_SetVarHelpStringContext(This,index,dwHelpStringContext) \
    ((This)->lpVtbl->SetVarHelpStringContext(This,index,dwHelpStringContext))
#define ICreateTypeInfo2_Invalidate(This) \
    ((This)->lpVtbl->Invalidate(This))
#define ICreateTypeInfo2_SetName(This,szName) \
    ((This)->lpVtbl->SetName(This,szName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreateTypeInfo2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICreateTypeLib interface
 */
#ifndef __ICreateTypeLib_INTERFACE_DEFINED__
#define __ICreateTypeLib_INTERFACE_DEFINED__

typedef ICreateTypeLib *LPCREATETYPELIB;

EXTERN_C const IID IID_ICreateTypeLib;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreateTypeLibVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreateTypeLib *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreateTypeLib *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreateTypeLib *This);

    /*** ICreateTypeLib methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateTypeInfo)(
        ICreateTypeLib *This,
        LPOLESTR szName,
        TYPEKIND tkind,
        ICreateTypeInfo **ppCTInfo);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        ICreateTypeLib *This,
        LPOLESTR szName);

    HRESULT (STDMETHODCALLTYPE *SetVersion)(
        ICreateTypeLib *This,
        WORD wMajorVerNum,
        WORD wMinorVerNum);

    HRESULT (STDMETHODCALLTYPE *SetGuid)(
        ICreateTypeLib *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *SetDocString)(
        ICreateTypeLib *This,
        LPOLESTR szDoc);

    HRESULT (STDMETHODCALLTYPE *SetHelpFileName)(
        ICreateTypeLib *This,
        LPOLESTR szHelpFileName);

    HRESULT (STDMETHODCALLTYPE *SetHelpContext)(
        ICreateTypeLib *This,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetLcid)(
        ICreateTypeLib *This,
        LCID lcid);

    HRESULT (STDMETHODCALLTYPE *SetLibFlags)(
        ICreateTypeLib *This,
        UINT uLibFlags);

    HRESULT (STDMETHODCALLTYPE *SaveAllChanges)(
        ICreateTypeLib *This);

    END_INTERFACE
} ICreateTypeLibVtbl;

interface ICreateTypeLib {
    CONST_VTBL ICreateTypeLibVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreateTypeLib_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreateTypeLib_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreateTypeLib_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreateTypeLib methods ***/
#define ICreateTypeLib_CreateTypeInfo(This,szName,tkind,ppCTInfo) \
    ((This)->lpVtbl->CreateTypeInfo(This,szName,tkind,ppCTInfo))
#define ICreateTypeLib_SetName(This,szName) \
    ((This)->lpVtbl->SetName(This,szName))
#define ICreateTypeLib_SetVersion(This,wMajorVerNum,wMinorVerNum) \
    ((This)->lpVtbl->SetVersion(This,wMajorVerNum,wMinorVerNum))
#define ICreateTypeLib_SetGuid(This,guid) \
    ((This)->lpVtbl->SetGuid(This,guid))
#define ICreateTypeLib_SetDocString(This,szDoc) \
    ((This)->lpVtbl->SetDocString(This,szDoc))
#define ICreateTypeLib_SetHelpFileName(This,szHelpFileName) \
    ((This)->lpVtbl->SetHelpFileName(This,szHelpFileName))
#define ICreateTypeLib_SetHelpContext(This,dwHelpContext) \
    ((This)->lpVtbl->SetHelpContext(This,dwHelpContext))
#define ICreateTypeLib_SetLcid(This,lcid) \
    ((This)->lpVtbl->SetLcid(This,lcid))
#define ICreateTypeLib_SetLibFlags(This,uLibFlags) \
    ((This)->lpVtbl->SetLibFlags(This,uLibFlags))
#define ICreateTypeLib_SaveAllChanges(This) \
    ((This)->lpVtbl->SaveAllChanges(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreateTypeLib_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICreateTypeLib2 interface
 */
#ifndef __ICreateTypeLib2_INTERFACE_DEFINED__
#define __ICreateTypeLib2_INTERFACE_DEFINED__

typedef ICreateTypeLib2 *LPCREATETYPELIB2;

EXTERN_C const IID IID_ICreateTypeLib2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreateTypeLib2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreateTypeLib2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreateTypeLib2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreateTypeLib2 *This);

    /*** ICreateTypeLib methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateTypeInfo)(
        ICreateTypeLib2 *This,
        LPOLESTR szName,
        TYPEKIND tkind,
        ICreateTypeInfo **ppCTInfo);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        ICreateTypeLib2 *This,
        LPOLESTR szName);

    HRESULT (STDMETHODCALLTYPE *SetVersion)(
        ICreateTypeLib2 *This,
        WORD wMajorVerNum,
        WORD wMinorVerNum);

    HRESULT (STDMETHODCALLTYPE *SetGuid)(
        ICreateTypeLib2 *This,
        REFGUID guid);

    HRESULT (STDMETHODCALLTYPE *SetDocString)(
        ICreateTypeLib2 *This,
        LPOLESTR szDoc);

    HRESULT (STDMETHODCALLTYPE *SetHelpFileName)(
        ICreateTypeLib2 *This,
        LPOLESTR szHelpFileName);

    HRESULT (STDMETHODCALLTYPE *SetHelpContext)(
        ICreateTypeLib2 *This,
        DWORD dwHelpContext);

    HRESULT (STDMETHODCALLTYPE *SetLcid)(
        ICreateTypeLib2 *This,
        LCID lcid);

    HRESULT (STDMETHODCALLTYPE *SetLibFlags)(
        ICreateTypeLib2 *This,
        UINT uLibFlags);

    HRESULT (STDMETHODCALLTYPE *SaveAllChanges)(
        ICreateTypeLib2 *This);

    /*** ICreateTypeLib2 methods ***/
    HRESULT (STDMETHODCALLTYPE *DeleteTypeInfo)(
        ICreateTypeLib2 *This,
        LPOLESTR szName);

    HRESULT (STDMETHODCALLTYPE *SetCustData)(
        ICreateTypeLib2 *This,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *SetHelpStringContext)(
        ICreateTypeLib2 *This,
        ULONG dwHelpStringContext);

    HRESULT (STDMETHODCALLTYPE *SetHelpStringDll)(
        ICreateTypeLib2 *This,
        LPOLESTR szFileName);

    END_INTERFACE
} ICreateTypeLib2Vtbl;

interface ICreateTypeLib2 {
    CONST_VTBL ICreateTypeLib2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreateTypeLib2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreateTypeLib2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreateTypeLib2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreateTypeLib methods ***/
#define ICreateTypeLib2_CreateTypeInfo(This,szName,tkind,ppCTInfo) \
    ((This)->lpVtbl->CreateTypeInfo(This,szName,tkind,ppCTInfo))
#define ICreateTypeLib2_SetName(This,szName) \
    ((This)->lpVtbl->SetName(This,szName))
#define ICreateTypeLib2_SetVersion(This,wMajorVerNum,wMinorVerNum) \
    ((This)->lpVtbl->SetVersion(This,wMajorVerNum,wMinorVerNum))
#define ICreateTypeLib2_SetGuid(This,guid) \
    ((This)->lpVtbl->SetGuid(This,guid))
#define ICreateTypeLib2_SetDocString(This,szDoc) \
    ((This)->lpVtbl->SetDocString(This,szDoc))
#define ICreateTypeLib2_SetHelpFileName(This,szHelpFileName) \
    ((This)->lpVtbl->SetHelpFileName(This,szHelpFileName))
#define ICreateTypeLib2_SetHelpContext(This,dwHelpContext) \
    ((This)->lpVtbl->SetHelpContext(This,dwHelpContext))
#define ICreateTypeLib2_SetLcid(This,lcid) \
    ((This)->lpVtbl->SetLcid(This,lcid))
#define ICreateTypeLib2_SetLibFlags(This,uLibFlags) \
    ((This)->lpVtbl->SetLibFlags(This,uLibFlags))
#define ICreateTypeLib2_SaveAllChanges(This) \
    ((This)->lpVtbl->SaveAllChanges(This))
/*** ICreateTypeLib2 methods ***/
#define ICreateTypeLib2_DeleteTypeInfo(This,szName) \
    ((This)->lpVtbl->DeleteTypeInfo(This,szName))
#define ICreateTypeLib2_SetCustData(This,guid,pVarVal) \
    ((This)->lpVtbl->SetCustData(This,guid,pVarVal))
#define ICreateTypeLib2_SetHelpStringContext(This,dwHelpStringContext) \
    ((This)->lpVtbl->SetHelpStringContext(This,dwHelpStringContext))
#define ICreateTypeLib2_SetHelpStringDll(This,szFileName) \
    ((This)->lpVtbl->SetHelpStringDll(This,szFileName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreateTypeLib2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * IDispatch interface
 */
#ifndef __IDispatch_INTERFACE_DEFINED__
#define __IDispatch_INTERFACE_DEFINED__

typedef IDispatch *LPDISPATCH;

/* DISPID reserved to indicate an "unknown" name */
/* only reserved for data members (properties); reused as a method dispid below */
#define DISPID_UNKNOWN  (-1)

/* DISPID reserved for the "value" property */
#define DISPID_VALUE  (0)

/* The following DISPID is reserved to indicate the param
 * that is the right-hand-side (or "put" value) of a PropertyPut
 */
#define DISPID_PROPERTYPUT  (-3)

/* DISPID reserved for the standard "NewEnum" method */
#define DISPID_NEWENUM  (-4)

/* DISPID reserved for the standard "Evaluate" method */
#define DISPID_EVALUATE  (-5)

#define DISPID_CONSTRUCTOR  (-6)

#define DISPID_DESTRUCTOR  (-7)

#define DISPID_COLLECT  (-8)

/* The range -500 through -999 is reserved for Controls */
/* The range 0x80010000 through 0x8001FFFF is reserved for Controls */
/* The range -5000 through -5499 is reserved for ActiveX Accessability */
/* The range -2000 through -2499 is reserved for VB5 */
/* The range -3900 through -3999 is reserved for Forms */
/* The range -5500 through -5550 is reserved for Forms */
/* The remainder of the negative DISPIDs are reserved for future use */

EXTERN_C const IID IID_IDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDispatchVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDispatch *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDispatch *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDispatch *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IDispatch *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IDispatch *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IDispatch *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IDispatch *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    END_INTERFACE
} IDispatchVtbl;

interface IDispatch {
    CONST_VTBL IDispatchVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDispatch_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDispatch_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDispatch_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define IDispatch_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define IDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define IDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define IDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IDispatch_RemoteInvoke_Proxy(
    IDispatch *This,
    DISPID dispIdMember,
    REFIID riid,
    LCID lcid,
    DWORD dwFlags,
    DISPPARAMS *pDispParams,
    VARIANT *pVarResult,
    EXCEPINFO *pExcepInfo,
    UINT *pArgErr,
    UINT cVarRef,
    UINT *rgVarRefIdx,
    VARIANTARG *rgVarRef);

void __RPC_STUB IDispatch_RemoteInvoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IDispatch_Invoke_Proxy(
    DISPID dispIdMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS *pDispParams,
    VARIANT *pVarResult,
    EXCEPINFO *pExcepInfo,
    UINT *puArgErr);
HRESULT IDispatch_Invoke_Stub(
    DISPID dispIdMember,
    REFIID riid,
    LCID lcid,
    DWORD dwFlags,
    DISPPARAMS *pDispParams,
    VARIANT *pVarResult,
    EXCEPINFO *pExcepInfo,
    UINT *pArgErr,
    UINT cVarRef,
    UINT *rgVarRefIdx,
    VARIANTARG *rgVarRef);
#endif /* __IDispatch_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumVARIANT interface
 */
#ifndef __IEnumVARIANT_INTERFACE_DEFINED__
#define __IEnumVARIANT_INTERFACE_DEFINED__

typedef IEnumVARIANT *LPENUMVARIANT;

EXTERN_C const IID IID_IEnumVARIANT;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumVARIANTVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumVARIANT *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumVARIANT *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumVARIANT *This);

    /*** IEnumVARIANT methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumVARIANT *This,
        ULONG celt,
        VARIANT *rgVar,
        ULONG *pCeltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumVARIANT *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumVARIANT *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumVARIANT *This,
        IEnumVARIANT **ppEnum);

    END_INTERFACE
} IEnumVARIANTVtbl;

interface IEnumVARIANT {
    CONST_VTBL IEnumVARIANTVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumVARIANT_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumVARIANT_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumVARIANT_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumVARIANT methods ***/
#define IEnumVARIANT_Next(This,celt,rgVar,pCeltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgVar,pCeltFetched))
#define IEnumVARIANT_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumVARIANT_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumVARIANT_Clone(This,ppEnum) \
    ((This)->lpVtbl->Clone(This,ppEnum))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IEnumVARIANT_RemoteNext_Proxy(
    IEnumVARIANT *This,
    ULONG celt,
    VARIANT *rgVar,
    ULONG *pCeltFetched);

void __RPC_STUB IEnumVARIANT_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IEnumVARIANT_Next_Proxy(
    ULONG celt,
    VARIANT *rgVar,
    ULONG *pCeltFetched);
HRESULT IEnumVARIANT_Next_Stub(
    ULONG celt,
    VARIANT *rgVar,
    ULONG *pCeltFetched);
#endif /* __IEnumVARIANT_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITypeComp interface
 */
#ifndef __ITypeComp_INTERFACE_DEFINED__
#define __ITypeComp_INTERFACE_DEFINED__

typedef ITypeComp *LPTYPECOMP;

typedef enum tagDESCKIND {
    DESCKIND_NONE = 0,
    DESCKIND_FUNCDESC = 1,
    DESCKIND_VARDESC = 2,
    DESCKIND_TYPECOMP = 3,
    DESCKIND_IMPLICITAPPOBJ = 4,
    DESCKIND_MAX = 5
} DESCKIND;

typedef union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    ITypeComp *lptcomp;
} BINDPTR;
typedef union tagBINDPTR *LPBINDPTR;

EXTERN_C const IID IID_ITypeComp;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeCompVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeComp *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeComp *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeComp *This);

    /*** ITypeComp methods ***/
    HRESULT (STDMETHODCALLTYPE *Bind)(
        ITypeComp *This,
        LPOLESTR szName,
        ULONG lHashVal,
        WORD wFlags,
        ITypeInfo **ppTInfo,
        DESCKIND *pDescKind,
        BINDPTR *pBindPtr);

    HRESULT (STDMETHODCALLTYPE *BindType)(
        ITypeComp *This,
        LPOLESTR szName,
        ULONG lHashVal,
        ITypeInfo **ppTInfo,
        ITypeComp **ppTComp);

    END_INTERFACE
} ITypeCompVtbl;

interface ITypeComp {
    CONST_VTBL ITypeCompVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeComp_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeComp_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeComp_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeComp methods ***/
#define ITypeComp_Bind(This,szName,lHashVal,wFlags,ppTInfo,pDescKind,pBindPtr) \
    ((This)->lpVtbl->Bind(This,szName,lHashVal,wFlags,ppTInfo,pDescKind,pBindPtr))
#define ITypeComp_BindType(This,szName,lHashVal,ppTInfo,ppTComp) \
    ((This)->lpVtbl->BindType(This,szName,lHashVal,ppTInfo,ppTComp))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBind_Proxy(
    ITypeComp *This,
    LPOLESTR szName,
    ULONG lHashVal,
    WORD wFlags,
    ITypeInfo **ppTInfo,
    DESCKIND *pDescKind,
    LPFUNCDESC *ppFuncDesc,
    LPVARDESC *ppVarDesc,
    ITypeComp **ppTypeComp,
    CLEANLOCALSTORAGE *pDummy);

void __RPC_STUB ITypeComp_RemoteBind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBindType_Proxy(
    ITypeComp *This,
    LPOLESTR szName,
    ULONG lHashVal,
    ITypeInfo **ppTInfo);

void __RPC_STUB ITypeComp_RemoteBindType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ITypeComp_Bind_Proxy(
    LPOLESTR szName,
    ULONG lHashVal,
    WORD wFlags,
    ITypeInfo **ppTInfo,
    DESCKIND *pDescKind,
    BINDPTR *pBindPtr);
HRESULT ITypeComp_Bind_Stub(
    LPOLESTR szName,
    ULONG lHashVal,
    WORD wFlags,
    ITypeInfo **ppTInfo,
    DESCKIND *pDescKind,
    LPFUNCDESC *ppFuncDesc,
    LPVARDESC *ppVarDesc,
    ITypeComp **ppTypeComp,
    CLEANLOCALSTORAGE *pDummy);
HRESULT ITypeComp_BindType_Proxy(
    LPOLESTR szName,
    ULONG lHashVal,
    ITypeInfo **ppTInfo,
    ITypeComp **ppTComp);
HRESULT ITypeComp_BindType_Stub(
    LPOLESTR szName,
    ULONG lHashVal,
    ITypeInfo **ppTInfo);
#endif /* __ITypeComp_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * ITypeInfo interface
 */
#ifndef __ITypeInfo_INTERFACE_DEFINED__
#define __ITypeInfo_INTERFACE_DEFINED__

typedef ITypeInfo *LPTYPEINFO;

EXTERN_C const IID IID_ITypeInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeInfo *This);

    /*** ITypeInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeAttr)(
        ITypeInfo *This,
        TYPEATTR **ppTypeAttr);

    HRESULT (STDMETHODCALLTYPE *GetTypeComp)(
        ITypeInfo *This,
        ITypeComp **ppTComp);

    HRESULT (STDMETHODCALLTYPE *GetFuncDesc)(
        ITypeInfo *This,
        UINT index,
        FUNCDESC **ppFuncDesc);

    HRESULT (STDMETHODCALLTYPE *GetVarDesc)(
        ITypeInfo *This,
        UINT index,
        VARDESC **ppVarDesc);

    HRESULT (STDMETHODCALLTYPE *GetNames)(
        ITypeInfo *This,
        MEMBERID memid,
        BSTR *rgBstrNames,
        UINT cMaxNames,
        UINT *pcNames);

    HRESULT (STDMETHODCALLTYPE *GetRefTypeOfImplType)(
        ITypeInfo *This,
        UINT index,
        HREFTYPE *pRefType);

    HRESULT (STDMETHODCALLTYPE *GetImplTypeFlags)(
        ITypeInfo *This,
        UINT index,
        INT *pImplTypeFlags);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITypeInfo *This,
        LPOLESTR *rgszNames,
        UINT cNames,
        MEMBERID *pMemId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITypeInfo *This,
        PVOID pvInstance,
        MEMBERID memid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *GetDocumentation)(
        ITypeInfo *This,
        MEMBERID memid,
        BSTR *pBstrName,
        BSTR *pBstrDocString,
        DWORD *pdwHelpContext,
        BSTR *pBstrHelpFile);

    HRESULT (STDMETHODCALLTYPE *GetDllEntry)(
        ITypeInfo *This,
        MEMBERID memid,
        INVOKEKIND invKind,
        BSTR *pBstrDllName,
        BSTR *pBstrName,
        WORD *pwOrdinal);

    HRESULT (STDMETHODCALLTYPE *GetRefTypeInfo)(
        ITypeInfo *This,
        HREFTYPE hRefType,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *AddressOfMember)(
        ITypeInfo *This,
        MEMBERID memid,
        INVOKEKIND invKind,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        ITypeInfo *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        PVOID *ppvObj);

    HRESULT (STDMETHODCALLTYPE *GetMops)(
        ITypeInfo *This,
        MEMBERID memid,
        BSTR *pBstrMops);

    HRESULT (STDMETHODCALLTYPE *GetContainingTypeLib)(
        ITypeInfo *This,
        ITypeLib **ppTLib,
        UINT *pIndex);

    void (STDMETHODCALLTYPE *ReleaseTypeAttr)(
        ITypeInfo *This,
        TYPEATTR *pTypeAttr);

    void (STDMETHODCALLTYPE *ReleaseFuncDesc)(
        ITypeInfo *This,
        FUNCDESC *pFuncDesc);

    void (STDMETHODCALLTYPE *ReleaseVarDesc)(
        ITypeInfo *This,
        VARDESC *pVarDesc);

    END_INTERFACE
} ITypeInfoVtbl;

interface ITypeInfo {
    CONST_VTBL ITypeInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeInfo methods ***/
#define ITypeInfo_GetTypeAttr(This,ppTypeAttr) \
    ((This)->lpVtbl->GetTypeAttr(This,ppTypeAttr))
#define ITypeInfo_GetTypeComp(This,ppTComp) \
    ((This)->lpVtbl->GetTypeComp(This,ppTComp))
#define ITypeInfo_GetFuncDesc(This,index,ppFuncDesc) \
    ((This)->lpVtbl->GetFuncDesc(This,index,ppFuncDesc))
#define ITypeInfo_GetVarDesc(This,index,ppVarDesc) \
    ((This)->lpVtbl->GetVarDesc(This,index,ppVarDesc))
#define ITypeInfo_GetNames(This,memid,rgBstrNames,cMaxNames,pcNames) \
    ((This)->lpVtbl->GetNames(This,memid,rgBstrNames,cMaxNames,pcNames))
#define ITypeInfo_GetRefTypeOfImplType(This,index,pRefType) \
    ((This)->lpVtbl->GetRefTypeOfImplType(This,index,pRefType))
#define ITypeInfo_GetImplTypeFlags(This,index,pImplTypeFlags) \
    ((This)->lpVtbl->GetImplTypeFlags(This,index,pImplTypeFlags))
#define ITypeInfo_GetIDsOfNames(This,rgszNames,cNames,pMemId) \
    ((This)->lpVtbl->GetIDsOfNames(This,rgszNames,cNames,pMemId))
#define ITypeInfo_Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#define ITypeInfo_GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) \
    ((This)->lpVtbl->GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile))
#define ITypeInfo_GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal) \
    ((This)->lpVtbl->GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal))
#define ITypeInfo_GetRefTypeInfo(This,hRefType,ppTInfo) \
    ((This)->lpVtbl->GetRefTypeInfo(This,hRefType,ppTInfo))
#define ITypeInfo_AddressOfMember(This,memid,invKind,ppv) \
    ((This)->lpVtbl->AddressOfMember(This,memid,invKind,ppv))
#define ITypeInfo_CreateInstance(This,pUnkOuter,riid,ppvObj) \
    ((This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObj))
#define ITypeInfo_GetMops(This,memid,pBstrMops) \
    ((This)->lpVtbl->GetMops(This,memid,pBstrMops))
#define ITypeInfo_GetContainingTypeLib(This,ppTLib,pIndex) \
    ((This)->lpVtbl->GetContainingTypeLib(This,ppTLib,pIndex))
#define ITypeInfo_ReleaseTypeAttr(This,pTypeAttr) \
    ((This)->lpVtbl->ReleaseTypeAttr(This,pTypeAttr))
#define ITypeInfo_ReleaseFuncDesc(This,pFuncDesc) \
    ((This)->lpVtbl->ReleaseFuncDesc(This,pFuncDesc))
#define ITypeInfo_ReleaseVarDesc(This,pVarDesc) \
    ((This)->lpVtbl->ReleaseVarDesc(This,pVarDesc))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetTypeAttr_Proxy(
    ITypeInfo *This,
    LPTYPEATTR *ppTypeAttr,
    CLEANLOCALSTORAGE *pDummy);

void __RPC_STUB ITypeInfo_RemoteGetTypeAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetFuncDesc_Proxy(
    ITypeInfo *This,
    UINT index,
    LPFUNCDESC *ppFuncDesc,
    CLEANLOCALSTORAGE *pDummy);

void __RPC_STUB ITypeInfo_RemoteGetFuncDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetVarDesc_Proxy(
    ITypeInfo *This,
    UINT index,
    LPVARDESC *ppVarDesc,
    CLEANLOCALSTORAGE *pDummy);

void __RPC_STUB ITypeInfo_RemoteGetVarDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetNames_Proxy(
    ITypeInfo *This,
    MEMBERID memid,
    BSTR *rgBstrNames,
    UINT cMaxNames,
    UINT *pcNames);

void __RPC_STUB ITypeInfo_RemoteGetNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_LocalGetIDsOfNames_Proxy(
    ITypeInfo *This);

void __RPC_STUB ITypeInfo_LocalGetIDsOfNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_LocalInvoke_Proxy(
    ITypeInfo *This);

void __RPC_STUB ITypeInfo_LocalInvoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDocumentation_Proxy(
    ITypeInfo *This,
    MEMBERID memid,
    DWORD refPtrFlags,
    BSTR *pBstrName,
    BSTR *pBstrDocString,
    DWORD *pdwHelpContext,
    BSTR *pBstrHelpFile);

void __RPC_STUB ITypeInfo_RemoteGetDocumentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDllEntry_Proxy(
    ITypeInfo *This,
    MEMBERID memid,
    INVOKEKIND invKind,
    DWORD refPtrFlags,
    BSTR *pBstrDllName,
    BSTR *pBstrName,
    WORD *pwOrdinal);

void __RPC_STUB ITypeInfo_RemoteGetDllEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_LocalAddressOfMember_Proxy(
    ITypeInfo *This);

void __RPC_STUB ITypeInfo_LocalAddressOfMember_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteCreateInstance_Proxy(
    ITypeInfo *This,
    REFIID riid,
    IUnknown **ppvObj);

void __RPC_STUB ITypeInfo_RemoteCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetContainingTypeLib_Proxy(
    ITypeInfo *This,
    ITypeLib **ppTLib,
    UINT *pIndex);

void __RPC_STUB ITypeInfo_RemoteGetContainingTypeLib_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseTypeAttr_Proxy(
    ITypeInfo *This);

void __RPC_STUB ITypeInfo_LocalReleaseTypeAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseFuncDesc_Proxy(
    ITypeInfo *This);

void __RPC_STUB ITypeInfo_LocalReleaseFuncDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseVarDesc_Proxy(
    ITypeInfo *This);

void __RPC_STUB ITypeInfo_LocalReleaseVarDesc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ITypeInfo_GetTypeAttr_Proxy(
    TYPEATTR **ppTypeAttr);
HRESULT ITypeInfo_GetTypeAttr_Stub(
    LPTYPEATTR *ppTypeAttr,
    CLEANLOCALSTORAGE *pDummy);
HRESULT ITypeInfo_GetFuncDesc_Proxy(
    UINT index,
    FUNCDESC **ppFuncDesc);
HRESULT ITypeInfo_GetFuncDesc_Stub(
    UINT index,
    LPFUNCDESC *ppFuncDesc,
    CLEANLOCALSTORAGE *pDummy);
HRESULT ITypeInfo_GetVarDesc_Proxy(
    UINT index,
    VARDESC **ppVarDesc);
HRESULT ITypeInfo_GetVarDesc_Stub(
    UINT index,
    LPVARDESC *ppVarDesc,
    CLEANLOCALSTORAGE *pDummy);
HRESULT ITypeInfo_GetNames_Proxy(
    MEMBERID memid,
    BSTR *rgBstrNames,
    UINT cMaxNames,
    UINT *pcNames);
HRESULT ITypeInfo_GetNames_Stub(
    MEMBERID memid,
    BSTR *rgBstrNames,
    UINT cMaxNames,
    UINT *pcNames);
HRESULT ITypeInfo_GetIDsOfNames_Proxy(
    LPOLESTR *rgszNames,
    UINT cNames,
    MEMBERID *pMemId);
HRESULT ITypeInfo_GetIDsOfNames_Stub(
    void
    );
HRESULT ITypeInfo_Invoke_Proxy(
    PVOID pvInstance,
    MEMBERID memid,
    WORD wFlags,
    DISPPARAMS *pDispParams,
    VARIANT *pVarResult,
    EXCEPINFO *pExcepInfo,
    UINT *puArgErr);
HRESULT ITypeInfo_Invoke_Stub(
    void);
HRESULT ITypeInfo_GetDocumentation_Proxy(
    MEMBERID memid,
    BSTR *pBstrName,
    BSTR *pBstrDocString,
    DWORD *pdwHelpContext,
    BSTR *pBstrHelpFile);
HRESULT ITypeInfo_GetDocumentation_Stub(
    MEMBERID memid,
    DWORD refPtrFlags,
    BSTR *pBstrName,
    BSTR *pBstrDocString,
    DWORD *pdwHelpContext,
    BSTR *pBstrHelpFile);
HRESULT ITypeInfo_GetDllEntry_Proxy(
    MEMBERID memid,
    INVOKEKIND invKind,
    BSTR *pBstrDllName,
    BSTR *pBstrName,
    WORD *pwOrdinal);
HRESULT ITypeInfo_GetDllEntry_Stub(
    MEMBERID memid,
    INVOKEKIND invKind,
    DWORD refPtrFlags,
    BSTR *pBstrDllName,
    BSTR *pBstrName,
    WORD *pwOrdinal);
HRESULT ITypeInfo_AddressOfMember_Proxy(
    MEMBERID memid,
    INVOKEKIND invKind,
    PVOID *ppv);
HRESULT ITypeInfo_AddressOfMember_Stub(
    void);
HRESULT ITypeInfo_CreateInstance_Proxy(
    IUnknown *pUnkOuter,
    REFIID riid,
    PVOID *ppvObj);
HRESULT ITypeInfo_CreateInstance_Stub(
    REFIID riid,
    IUnknown **ppvObj);
HRESULT ITypeInfo_GetContainingTypeLib_Proxy(
    ITypeLib **ppTLib,
    UINT *pIndex);
HRESULT ITypeInfo_GetContainingTypeLib_Stub(
    ITypeLib **ppTLib,
    UINT *pIndex);
void ITypeInfo_ReleaseTypeAttr_Proxy(
    TYPEATTR *pTypeAttr);
HRESULT ITypeInfo_ReleaseTypeAttr_Stub(
    void);
void ITypeInfo_ReleaseFuncDesc_Proxy(
    FUNCDESC *pFuncDesc);
HRESULT ITypeInfo_ReleaseFuncDesc_Stub(
    void);
void ITypeInfo_ReleaseVarDesc_Proxy(
    VARDESC *pVarDesc);
HRESULT ITypeInfo_ReleaseVarDesc_Stub(
    void);
#endif /* __ITypeInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITypeInfo2 interface
 */
#ifndef __ITypeInfo2_INTERFACE_DEFINED__
#define __ITypeInfo2_INTERFACE_DEFINED__

typedef ITypeInfo2 *LPTYPEINFO2;

EXTERN_C const IID IID_ITypeInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeInfo2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeInfo2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeInfo2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeInfo2 *This);

    /*** ITypeInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeAttr)(
        ITypeInfo2 *This,
        TYPEATTR **ppTypeAttr);

    HRESULT (STDMETHODCALLTYPE *GetTypeComp)(
        ITypeInfo2 *This,
        ITypeComp **ppTComp);

    HRESULT (STDMETHODCALLTYPE *GetFuncDesc)(
        ITypeInfo2 *This,
        UINT index,
        FUNCDESC **ppFuncDesc);

    HRESULT (STDMETHODCALLTYPE *GetVarDesc)(
        ITypeInfo2 *This,
        UINT index,
        VARDESC **ppVarDesc);

    HRESULT (STDMETHODCALLTYPE *GetNames)(
        ITypeInfo2 *This,
        MEMBERID memid,
        BSTR *rgBstrNames,
        UINT cMaxNames,
        UINT *pcNames);

    HRESULT (STDMETHODCALLTYPE *GetRefTypeOfImplType)(
        ITypeInfo2 *This,
        UINT index,
        HREFTYPE *pRefType);

    HRESULT (STDMETHODCALLTYPE *GetImplTypeFlags)(
        ITypeInfo2 *This,
        UINT index,
        INT *pImplTypeFlags);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITypeInfo2 *This,
        LPOLESTR *rgszNames,
        UINT cNames,
        MEMBERID *pMemId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITypeInfo2 *This,
        PVOID pvInstance,
        MEMBERID memid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    HRESULT (STDMETHODCALLTYPE *GetDocumentation)(
        ITypeInfo2 *This,
        MEMBERID memid,
        BSTR *pBstrName,
        BSTR *pBstrDocString,
        DWORD *pdwHelpContext,
        BSTR *pBstrHelpFile);

    HRESULT (STDMETHODCALLTYPE *GetDllEntry)(
        ITypeInfo2 *This,
        MEMBERID memid,
        INVOKEKIND invKind,
        BSTR *pBstrDllName,
        BSTR *pBstrName,
        WORD *pwOrdinal);

    HRESULT (STDMETHODCALLTYPE *GetRefTypeInfo)(
        ITypeInfo2 *This,
        HREFTYPE hRefType,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *AddressOfMember)(
        ITypeInfo2 *This,
        MEMBERID memid,
        INVOKEKIND invKind,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        ITypeInfo2 *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        PVOID *ppvObj);

    HRESULT (STDMETHODCALLTYPE *GetMops)(
        ITypeInfo2 *This,
        MEMBERID memid,
        BSTR *pBstrMops);

    HRESULT (STDMETHODCALLTYPE *GetContainingTypeLib)(
        ITypeInfo2 *This,
        ITypeLib **ppTLib,
        UINT *pIndex);

    void (STDMETHODCALLTYPE *ReleaseTypeAttr)(
        ITypeInfo2 *This,
        TYPEATTR *pTypeAttr);

    void (STDMETHODCALLTYPE *ReleaseFuncDesc)(
        ITypeInfo2 *This,
        FUNCDESC *pFuncDesc);

    void (STDMETHODCALLTYPE *ReleaseVarDesc)(
        ITypeInfo2 *This,
        VARDESC *pVarDesc);

    /*** ITypeInfo2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeKind)(
        ITypeInfo2 *This,
        TYPEKIND *pTypeKind);

    HRESULT (STDMETHODCALLTYPE *GetTypeFlags)(
        ITypeInfo2 *This,
        ULONG *pTypeFlags);

    HRESULT (STDMETHODCALLTYPE *GetFuncIndexOfMemId)(
        ITypeInfo2 *This,
        MEMBERID memid,
        INVOKEKIND invKind,
        UINT *pFuncIndex);

    HRESULT (STDMETHODCALLTYPE *GetVarIndexOfMemId)(
        ITypeInfo2 *This,
        MEMBERID memid,
        UINT *pVarIndex);

    HRESULT (STDMETHODCALLTYPE *GetCustData)(
        ITypeInfo2 *This,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *GetFuncCustData)(
        ITypeInfo2 *This,
        UINT index,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *GetParamCustData)(
        ITypeInfo2 *This,
        UINT indexFunc,
        UINT indexParam,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *GetVarCustData)(
        ITypeInfo2 *This,
        UINT index,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *GetImplTypeCustData)(
        ITypeInfo2 *This,
        UINT index,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *GetDocumentation2)(
        ITypeInfo2 *This,
        MEMBERID memid,
        LCID lcid,
        BSTR *pbstrHelpString,
        DWORD *pdwHelpStringContext,
        BSTR *pbstrHelpStringDll);

    HRESULT (STDMETHODCALLTYPE *GetAllCustData)(
        ITypeInfo2 *This,
        CUSTDATA *pCustData);

    HRESULT (STDMETHODCALLTYPE *GetAllFuncCustData)(
        ITypeInfo2 *This,
        UINT index,
        CUSTDATA *pCustData);

    HRESULT (STDMETHODCALLTYPE *GetAllParamCustData)(
        ITypeInfo2 *This,
        UINT indexFunc,
        UINT indexParam,
        CUSTDATA *pCustData);

    HRESULT (STDMETHODCALLTYPE *GetAllVarCustData)(
        ITypeInfo2 *This,
        UINT index,
        CUSTDATA *pCustData);

    HRESULT (STDMETHODCALLTYPE *GetAllImplTypeCustData)(
        ITypeInfo2 *This,
        UINT index,
        CUSTDATA *pCustData);

    END_INTERFACE
} ITypeInfo2Vtbl;

interface ITypeInfo2 {
    CONST_VTBL ITypeInfo2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeInfo2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeInfo2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeInfo2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeInfo methods ***/
#define ITypeInfo2_GetTypeAttr(This,ppTypeAttr) \
    ((This)->lpVtbl->GetTypeAttr(This,ppTypeAttr))
#define ITypeInfo2_GetTypeComp(This,ppTComp) \
    ((This)->lpVtbl->GetTypeComp(This,ppTComp))
#define ITypeInfo2_GetFuncDesc(This,index,ppFuncDesc) \
    ((This)->lpVtbl->GetFuncDesc(This,index,ppFuncDesc))
#define ITypeInfo2_GetVarDesc(This,index,ppVarDesc) \
    ((This)->lpVtbl->GetVarDesc(This,index,ppVarDesc))
#define ITypeInfo2_GetNames(This,memid,rgBstrNames,cMaxNames,pcNames) \
    ((This)->lpVtbl->GetNames(This,memid,rgBstrNames,cMaxNames,pcNames))
#define ITypeInfo2_GetRefTypeOfImplType(This,index,pRefType) \
    ((This)->lpVtbl->GetRefTypeOfImplType(This,index,pRefType))
#define ITypeInfo2_GetImplTypeFlags(This,index,pImplTypeFlags) \
    ((This)->lpVtbl->GetImplTypeFlags(This,index,pImplTypeFlags))
#define ITypeInfo2_GetIDsOfNames(This,rgszNames,cNames,pMemId) \
    ((This)->lpVtbl->GetIDsOfNames(This,rgszNames,cNames,pMemId))
#define ITypeInfo2_Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
#define ITypeInfo2_GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) \
    ((This)->lpVtbl->GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile))
#define ITypeInfo2_GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal) \
    ((This)->lpVtbl->GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal))
#define ITypeInfo2_GetRefTypeInfo(This,hRefType,ppTInfo) \
    ((This)->lpVtbl->GetRefTypeInfo(This,hRefType,ppTInfo))
#define ITypeInfo2_AddressOfMember(This,memid,invKind,ppv) \
    ((This)->lpVtbl->AddressOfMember(This,memid,invKind,ppv))
#define ITypeInfo2_CreateInstance(This,pUnkOuter,riid,ppvObj) \
    ((This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObj))
#define ITypeInfo2_GetMops(This,memid,pBstrMops) \
    ((This)->lpVtbl->GetMops(This,memid,pBstrMops))
#define ITypeInfo2_GetContainingTypeLib(This,ppTLib,pIndex) \
    ((This)->lpVtbl->GetContainingTypeLib(This,ppTLib,pIndex))
#define ITypeInfo2_ReleaseTypeAttr(This,pTypeAttr) \
    ((This)->lpVtbl->ReleaseTypeAttr(This,pTypeAttr))
#define ITypeInfo2_ReleaseFuncDesc(This,pFuncDesc) \
    ((This)->lpVtbl->ReleaseFuncDesc(This,pFuncDesc))
#define ITypeInfo2_ReleaseVarDesc(This,pVarDesc) \
    ((This)->lpVtbl->ReleaseVarDesc(This,pVarDesc))
/*** ITypeInfo2 methods ***/
#define ITypeInfo2_GetTypeKind(This,pTypeKind) \
    ((This)->lpVtbl->GetTypeKind(This,pTypeKind))
#define ITypeInfo2_GetTypeFlags(This,pTypeFlags) \
    ((This)->lpVtbl->GetTypeFlags(This,pTypeFlags))
#define ITypeInfo2_GetFuncIndexOfMemId(This,memid,invKind,pFuncIndex) \
    ((This)->lpVtbl->GetFuncIndexOfMemId(This,memid,invKind,pFuncIndex))
#define ITypeInfo2_GetVarIndexOfMemId(This,memid,pVarIndex) \
    ((This)->lpVtbl->GetVarIndexOfMemId(This,memid,pVarIndex))
#define ITypeInfo2_GetCustData(This,guid,pVarVal) \
    ((This)->lpVtbl->GetCustData(This,guid,pVarVal))
#define ITypeInfo2_GetFuncCustData(This,index,guid,pVarVal) \
    ((This)->lpVtbl->GetFuncCustData(This,index,guid,pVarVal))
#define ITypeInfo2_GetParamCustData(This,indexFunc,indexParam,guid,pVarVal) \
    ((This)->lpVtbl->GetParamCustData(This,indexFunc,indexParam,guid,pVarVal))
#define ITypeInfo2_GetVarCustData(This,index,guid,pVarVal) \
    ((This)->lpVtbl->GetVarCustData(This,index,guid,pVarVal))
#define ITypeInfo2_GetImplTypeCustData(This,index,guid,pVarVal) \
    ((This)->lpVtbl->GetImplTypeCustData(This,index,guid,pVarVal))
#define ITypeInfo2_GetDocumentation2(This,memid,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll) \
    ((This)->lpVtbl->GetDocumentation2(This,memid,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll))
#define ITypeInfo2_GetAllCustData(This,pCustData) \
    ((This)->lpVtbl->GetAllCustData(This,pCustData))
#define ITypeInfo2_GetAllFuncCustData(This,index,pCustData) \
    ((This)->lpVtbl->GetAllFuncCustData(This,index,pCustData))
#define ITypeInfo2_GetAllParamCustData(This,indexFunc,indexParam,pCustData) \
    ((This)->lpVtbl->GetAllParamCustData(This,indexFunc,indexParam,pCustData))
#define ITypeInfo2_GetAllVarCustData(This,index,pCustData) \
    ((This)->lpVtbl->GetAllVarCustData(This,index,pCustData))
#define ITypeInfo2_GetAllImplTypeCustData(This,index,pCustData) \
    ((This)->lpVtbl->GetAllImplTypeCustData(This,index,pCustData))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ITypeInfo2_RemoteGetDocumentation2_Proxy(
    ITypeInfo2 *This,
    MEMBERID memid,
    LCID lcid,
    DWORD refPtrFlags,
    BSTR *pbstrHelpString,
    DWORD *pdwHelpStringContext,
    BSTR *pbstrHelpStringDll);

void __RPC_STUB ITypeInfo2_RemoteGetDocumentation2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ITypeInfo2_GetDocumentation2_Proxy(
    MEMBERID memid,
    LCID lcid,
    BSTR *pbstrHelpString,
    DWORD *pdwHelpStringContext,
    BSTR *pbstrHelpStringDll);
HRESULT ITypeInfo2_GetDocumentation2_Stub(
    MEMBERID memid,
    LCID lcid,
    DWORD refPtrFlags,
    BSTR *pbstrHelpString,
    DWORD *pdwHelpStringContext,
    BSTR *pbstrHelpStringDll);
#endif /* __ITypeInfo2_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

/*****************************************************************************
 * ITypeLib interface
 */
#ifndef __ITypeLib_INTERFACE_DEFINED__
#define __ITypeLib_INTERFACE_DEFINED__

typedef enum tagSYSKIND {
    SYS_WIN16 = 0,
    SYS_WIN32 = 1,
    SYS_MAC = 2,
    SYS_WIN64 = 3
} SYSKIND;

typedef enum tagLIBFLAGS {
    LIBFLAG_FRESTRICTED = 0x1,
    LIBFLAG_FCONTROL = 0x2,
    LIBFLAG_FHIDDEN = 0x4,
    LIBFLAG_FHASDISKIMAGE = 0x8
} LIBFLAGS;

typedef ITypeLib *LPTYPELIB;

typedef struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
} TLIBATTR;
typedef struct tagTLIBATTR *LPTLIBATTR;

EXTERN_C const IID IID_ITypeLib;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeLibVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeLib *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeLib *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeLib *This);

    /*** ITypeLib methods ***/
    UINT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITypeLib *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITypeLib *This,
        UINT index,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoType)(
        ITypeLib *This,
        UINT index,
        TYPEKIND *pTKind);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoOfGuid)(
        ITypeLib *This,
        REFGUID guid,
        ITypeInfo **ppTinfo);

    HRESULT (STDMETHODCALLTYPE *GetLibAttr)(
        ITypeLib *This,
        TLIBATTR **ppTLibAttr);

    HRESULT (STDMETHODCALLTYPE *GetTypeComp)(
        ITypeLib *This,
        ITypeComp **ppTComp);

    HRESULT (STDMETHODCALLTYPE *GetDocumentation)(
        ITypeLib *This,
        INT index,
        BSTR *pBstrName,
        BSTR *pBstrDocString,
        DWORD *pdwHelpContext,
        BSTR *pBstrHelpFile);

    HRESULT (STDMETHODCALLTYPE *IsName)(
        ITypeLib *This,
        LPOLESTR szNameBuf,
        ULONG lHashVal,
        BOOL *pfName);

    HRESULT (STDMETHODCALLTYPE *FindName)(
        ITypeLib *This,
        LPOLESTR szNameBuf,
        ULONG lHashVal,
        ITypeInfo **ppTInfo,
        MEMBERID *rgMemId,
        USHORT *pcFound);

    void (STDMETHODCALLTYPE *ReleaseTLibAttr)(
        ITypeLib *This,
        TLIBATTR *pTLibAttr);

    END_INTERFACE
} ITypeLibVtbl;

interface ITypeLib {
    CONST_VTBL ITypeLibVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeLib_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeLib_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeLib_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeLib methods ***/
#define ITypeLib_GetTypeInfoCount(This) \
    ((This)->lpVtbl->GetTypeInfoCount(This))
#define ITypeLib_GetTypeInfo(This,index,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,index,ppTInfo))
#define ITypeLib_GetTypeInfoType(This,index,pTKind) \
    ((This)->lpVtbl->GetTypeInfoType(This,index,pTKind))
#define ITypeLib_GetTypeInfoOfGuid(This,guid,ppTinfo) \
    ((This)->lpVtbl->GetTypeInfoOfGuid(This,guid,ppTinfo))
#define ITypeLib_GetLibAttr(This,ppTLibAttr) \
    ((This)->lpVtbl->GetLibAttr(This,ppTLibAttr))
#define ITypeLib_GetTypeComp(This,ppTComp) \
    ((This)->lpVtbl->GetTypeComp(This,ppTComp))
#define ITypeLib_GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) \
    ((This)->lpVtbl->GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile))
#define ITypeLib_IsName(This,szNameBuf,lHashVal,pfName) \
    ((This)->lpVtbl->IsName(This,szNameBuf,lHashVal,pfName))
#define ITypeLib_FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound) \
    ((This)->lpVtbl->FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound))
#define ITypeLib_ReleaseTLibAttr(This,pTLibAttr) \
    ((This)->lpVtbl->ReleaseTLibAttr(This,pTLibAttr))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetTypeInfoCount_Proxy(
    ITypeLib *This,
    UINT *pcTInfo);

void __RPC_STUB ITypeLib_RemoteGetTypeInfoCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetLibAttr_Proxy(
    ITypeLib *This,
    LPTLIBATTR *ppTLibAttr,
    CLEANLOCALSTORAGE *pDummy);

void __RPC_STUB ITypeLib_RemoteGetLibAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetDocumentation_Proxy(
    ITypeLib *This,
    INT index,
    DWORD refPtrFlags,
    BSTR *pBstrName,
    BSTR *pBstrDocString,
    DWORD *pdwHelpContext,
    BSTR *pBstrHelpFile);

void __RPC_STUB ITypeLib_RemoteGetDocumentation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeLib_RemoteIsName_Proxy(
    ITypeLib *This,
    LPOLESTR szNameBuf,
    ULONG lHashVal,
    BOOL *pfName,
    BSTR *pBstrLibName);

void __RPC_STUB ITypeLib_RemoteIsName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeLib_RemoteFindName_Proxy(
    ITypeLib *This,
    LPOLESTR szNameBuf,
    ULONG lHashVal,
    ITypeInfo **ppTInfo,
    MEMBERID *rgMemId,
    USHORT *pcFound,
    BSTR *pBstrLibName);

void __RPC_STUB ITypeLib_RemoteFindName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeLib_LocalReleaseTLibAttr_Proxy(
    ITypeLib *This);

void __RPC_STUB ITypeLib_LocalReleaseTLibAttr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

UINT ITypeLib_GetTypeInfoCount_Proxy(
    void);
HRESULT ITypeLib_GetTypeInfoCount_Stub(
    UINT *pcTInfo);
HRESULT ITypeLib_GetLibAttr_Proxy(
    TLIBATTR **ppTLibAttr);
HRESULT ITypeLib_GetLibAttr_Stub(
    LPTLIBATTR *ppTLibAttr,
    CLEANLOCALSTORAGE *pDummy);
HRESULT ITypeLib_GetDocumentation_Proxy(
    INT index,
    BSTR *pBstrName,
    BSTR *pBstrDocString,
    DWORD *pdwHelpContext,
    BSTR *pBstrHelpFile);
HRESULT ITypeLib_GetDocumentation_Stub(
    INT index,
    DWORD refPtrFlags,
    BSTR *pBstrName,
    BSTR *pBstrDocString,
    DWORD *pdwHelpContext,
    BSTR *pBstrHelpFile);
HRESULT ITypeLib_IsName_Proxy(
    LPOLESTR szNameBuf,
    ULONG lHashVal,
    BOOL *pfName);
HRESULT ITypeLib_IsName_Stub(
    LPOLESTR szNameBuf,
    ULONG lHashVal,
    BOOL *pfName,
    BSTR *pBstrLibName);
HRESULT ITypeLib_FindName_Proxy(
    LPOLESTR szNameBuf,
    ULONG lHashVal,
    ITypeInfo **ppTInfo,
    MEMBERID *rgMemId,
    USHORT *pcFound);
HRESULT ITypeLib_FindName_Stub(
    LPOLESTR szNameBuf,
    ULONG lHashVal,
    ITypeInfo **ppTInfo,
    MEMBERID *rgMemId,
    USHORT *pcFound,
    BSTR *pBstrLibName);
void ITypeLib_ReleaseTLibAttr_Proxy(
    TLIBATTR *pTLibAttr);
HRESULT ITypeLib_ReleaseTLibAttr_Stub(
    void);
#endif /* __ITypeLib_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * ITypeLib2 interface
 */
#ifndef __ITypeLib2_INTERFACE_DEFINED__
#define __ITypeLib2_INTERFACE_DEFINED__

typedef ITypeLib2 *LPTYPELIB2;

EXTERN_C const IID IID_ITypeLib2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeLib2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeLib2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeLib2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeLib2 *This);

    /*** ITypeLib methods ***/
    UINT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITypeLib2 *This);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITypeLib2 *This,
        UINT index,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoType)(
        ITypeLib2 *This,
        UINT index,
        TYPEKIND *pTKind);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfoOfGuid)(
        ITypeLib2 *This,
        REFGUID guid,
        ITypeInfo **ppTinfo);

    HRESULT (STDMETHODCALLTYPE *GetLibAttr)(
        ITypeLib2 *This,
        TLIBATTR **ppTLibAttr);

    HRESULT (STDMETHODCALLTYPE *GetTypeComp)(
        ITypeLib2 *This,
        ITypeComp **ppTComp);

    HRESULT (STDMETHODCALLTYPE *GetDocumentation)(
        ITypeLib2 *This,
        INT index,
        BSTR *pBstrName,
        BSTR *pBstrDocString,
        DWORD *pdwHelpContext,
        BSTR *pBstrHelpFile);

    HRESULT (STDMETHODCALLTYPE *IsName)(
        ITypeLib2 *This,
        LPOLESTR szNameBuf,
        ULONG lHashVal,
        BOOL *pfName);

    HRESULT (STDMETHODCALLTYPE *FindName)(
        ITypeLib2 *This,
        LPOLESTR szNameBuf,
        ULONG lHashVal,
        ITypeInfo **ppTInfo,
        MEMBERID *rgMemId,
        USHORT *pcFound);

    void (STDMETHODCALLTYPE *ReleaseTLibAttr)(
        ITypeLib2 *This,
        TLIBATTR *pTLibAttr);

    /*** ITypeLib2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCustData)(
        ITypeLib2 *This,
        REFGUID guid,
        VARIANT *pVarVal);

    HRESULT (STDMETHODCALLTYPE *GetLibStatistics)(
        ITypeLib2 *This,
        ULONG *pcUniqueNames,
        ULONG *pcchUniqueNames);

    HRESULT (STDMETHODCALLTYPE *GetDocumentation2)(
        ITypeLib2 *This,
        INT index,
        LCID lcid,
        BSTR *pbstrHelpString,
        DWORD *pdwHelpStringContext,
        BSTR *pbstrHelpStringDll);

    HRESULT (STDMETHODCALLTYPE *GetAllCustData)(
        ITypeLib2 *This,
        CUSTDATA *pCustData);

    END_INTERFACE
} ITypeLib2Vtbl;

interface ITypeLib2 {
    CONST_VTBL ITypeLib2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeLib2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeLib2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeLib2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeLib methods ***/
#define ITypeLib2_GetTypeInfoCount(This) \
    ((This)->lpVtbl->GetTypeInfoCount(This))
#define ITypeLib2_GetTypeInfo(This,index,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,index,ppTInfo))
#define ITypeLib2_GetTypeInfoType(This,index,pTKind) \
    ((This)->lpVtbl->GetTypeInfoType(This,index,pTKind))
#define ITypeLib2_GetTypeInfoOfGuid(This,guid,ppTinfo) \
    ((This)->lpVtbl->GetTypeInfoOfGuid(This,guid,ppTinfo))
#define ITypeLib2_GetLibAttr(This,ppTLibAttr) \
    ((This)->lpVtbl->GetLibAttr(This,ppTLibAttr))
#define ITypeLib2_GetTypeComp(This,ppTComp) \
    ((This)->lpVtbl->GetTypeComp(This,ppTComp))
#define ITypeLib2_GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) \
    ((This)->lpVtbl->GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile))
#define ITypeLib2_IsName(This,szNameBuf,lHashVal,pfName) \
    ((This)->lpVtbl->IsName(This,szNameBuf,lHashVal,pfName))
#define ITypeLib2_FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound) \
    ((This)->lpVtbl->FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound))
#define ITypeLib2_ReleaseTLibAttr(This,pTLibAttr) \
    ((This)->lpVtbl->ReleaseTLibAttr(This,pTLibAttr))
/*** ITypeLib2 methods ***/
#define ITypeLib2_GetCustData(This,guid,pVarVal) \
    ((This)->lpVtbl->GetCustData(This,guid,pVarVal))
#define ITypeLib2_GetLibStatistics(This,pcUniqueNames,pcchUniqueNames) \
    ((This)->lpVtbl->GetLibStatistics(This,pcUniqueNames,pcchUniqueNames))
#define ITypeLib2_GetDocumentation2(This,index,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll) \
    ((This)->lpVtbl->GetDocumentation2(This,index,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll))
#define ITypeLib2_GetAllCustData(This,pCustData) \
    ((This)->lpVtbl->GetAllCustData(This,pCustData))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetLibStatistics_Proxy(
    ITypeLib2 *This,
    ULONG *pcUniqueNames,
    ULONG *pcchUniqueNames);

void __RPC_STUB ITypeLib2_RemoteGetLibStatistics_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetDocumentation2_Proxy(
    ITypeLib2 *This,
    INT index,
    LCID lcid,
    DWORD refPtrFlags,
    BSTR *pbstrHelpString,
    DWORD *pdwHelpStringContext,
    BSTR *pbstrHelpStringDll);

void __RPC_STUB ITypeLib2_RemoteGetDocumentation2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT ITypeLib2_GetLibStatistics_Proxy(
    ULONG *pcUniqueNames,
    ULONG *pcchUniqueNames);
HRESULT ITypeLib2_GetLibStatistics_Stub(
    ULONG *pcUniqueNames,
    ULONG *pcchUniqueNames);
HRESULT ITypeLib2_GetDocumentation2_Proxy(
    INT index,
    LCID lcid,
    BSTR *pbstrHelpString,
    DWORD *pdwHelpStringContext,
    BSTR *pbstrHelpStringDll);
HRESULT ITypeLib2_GetDocumentation2_Stub(
    INT index,
    LCID lcid,
    DWORD refPtrFlags,
    BSTR *pbstrHelpString,
    DWORD *pdwHelpStringContext,
    BSTR *pbstrHelpStringDll);
#endif /* __ITypeLib2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITypeChangeEvents interface
 */
#ifndef __ITypeChangeEvents_INTERFACE_DEFINED__
#define __ITypeChangeEvents_INTERFACE_DEFINED__

typedef ITypeChangeEvents *LPTYPECHANGEEVENTS;

typedef enum tagCHANGEKIND {
    CHANGEKIND_ADDMEMBER = 0,
    CHANGEKIND_DELETEMEMBER = 1,
    CHANGEKIND_SETNAMES = 2,
    CHANGEKIND_SETDOCUMENTATION = 3,
    CHANGEKIND_GENERAL = 4,
    CHANGEKIND_INVALIDATE = 5,
    CHANGEKIND_CHANGEFAILED = 6,
    CHANGEKIND_MAX = 7
} CHANGEKIND;

EXTERN_C const IID IID_ITypeChangeEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeChangeEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeChangeEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeChangeEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeChangeEvents *This);

    /*** ITypeChangeEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *RequestTypeChange)(
        ITypeChangeEvents *This,
        CHANGEKIND changeKind,
        ITypeInfo *pTInfoBefore,
        LPOLESTR pStrName,
        INT *pfCancel);

    HRESULT (STDMETHODCALLTYPE *AfterTypeChange)(
        ITypeChangeEvents *This,
        CHANGEKIND changeKind,
        ITypeInfo *pTInfoAfter,
        LPOLESTR pStrName);

    END_INTERFACE
} ITypeChangeEventsVtbl;

interface ITypeChangeEvents {
    CONST_VTBL ITypeChangeEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeChangeEvents_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeChangeEvents_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeChangeEvents_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeChangeEvents methods ***/
#define ITypeChangeEvents_RequestTypeChange(This,changeKind,pTInfoBefore,pStrName,pfCancel) \
    ((This)->lpVtbl->RequestTypeChange(This,changeKind,pTInfoBefore,pStrName,pfCancel))
#define ITypeChangeEvents_AfterTypeChange(This,changeKind,pTInfoAfter,pStrName) \
    ((This)->lpVtbl->AfterTypeChange(This,changeKind,pTInfoAfter,pStrName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITypeChangeEvents_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IErrorInfo interface
 */
#ifndef __IErrorInfo_INTERFACE_DEFINED__
#define __IErrorInfo_INTERFACE_DEFINED__

typedef IErrorInfo *LPERRORINFO;

EXTERN_C const IID IID_IErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IErrorInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IErrorInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IErrorInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IErrorInfo *This);

    /*** IErrorInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGUID)(
        IErrorInfo *This,
        GUID *pGUID);

    HRESULT (STDMETHODCALLTYPE *GetSource)(
        IErrorInfo *This,
        BSTR *pBstrSource);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IErrorInfo *This,
        BSTR *pBstrDescription);

    HRESULT (STDMETHODCALLTYPE *GetHelpFile)(
        IErrorInfo *This,
        BSTR *pBstrHelpFile);

    HRESULT (STDMETHODCALLTYPE *GetHelpContext)(
        IErrorInfo *This,
        DWORD *pdwHelpContext);

    END_INTERFACE
} IErrorInfoVtbl;

interface IErrorInfo {
    CONST_VTBL IErrorInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IErrorInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IErrorInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IErrorInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IErrorInfo methods ***/
#define IErrorInfo_GetGUID(This,pGUID) \
    ((This)->lpVtbl->GetGUID(This,pGUID))
#define IErrorInfo_GetSource(This,pBstrSource) \
    ((This)->lpVtbl->GetSource(This,pBstrSource))
#define IErrorInfo_GetDescription(This,pBstrDescription) \
    ((This)->lpVtbl->GetDescription(This,pBstrDescription))
#define IErrorInfo_GetHelpFile(This,pBstrHelpFile) \
    ((This)->lpVtbl->GetHelpFile(This,pBstrHelpFile))
#define IErrorInfo_GetHelpContext(This,pdwHelpContext) \
    ((This)->lpVtbl->GetHelpContext(This,pdwHelpContext))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IErrorInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICreateErrorInfo interface
 */
#ifndef __ICreateErrorInfo_INTERFACE_DEFINED__
#define __ICreateErrorInfo_INTERFACE_DEFINED__

typedef ICreateErrorInfo *LPCREATEERRORINFO;

EXTERN_C const IID IID_ICreateErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICreateErrorInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreateErrorInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreateErrorInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreateErrorInfo *This);

    /*** ICreateErrorInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGUID)(
        ICreateErrorInfo *This,
        REFGUID rguid);

    HRESULT (STDMETHODCALLTYPE *SetSource)(
        ICreateErrorInfo *This,
        LPOLESTR szSource);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        ICreateErrorInfo *This,
        LPOLESTR szDescription);

    HRESULT (STDMETHODCALLTYPE *SetHelpFile)(
        ICreateErrorInfo *This,
        LPOLESTR szHelpFile);

    HRESULT (STDMETHODCALLTYPE *SetHelpContext)(
        ICreateErrorInfo *This,
        DWORD dwHelpContext);

    END_INTERFACE
} ICreateErrorInfoVtbl;

interface ICreateErrorInfo {
    CONST_VTBL ICreateErrorInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICreateErrorInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICreateErrorInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICreateErrorInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICreateErrorInfo methods ***/
#define ICreateErrorInfo_SetGUID(This,rguid) \
    ((This)->lpVtbl->SetGUID(This,rguid))
#define ICreateErrorInfo_SetSource(This,szSource) \
    ((This)->lpVtbl->SetSource(This,szSource))
#define ICreateErrorInfo_SetDescription(This,szDescription) \
    ((This)->lpVtbl->SetDescription(This,szDescription))
#define ICreateErrorInfo_SetHelpFile(This,szHelpFile) \
    ((This)->lpVtbl->SetHelpFile(This,szHelpFile))
#define ICreateErrorInfo_SetHelpContext(This,dwHelpContext) \
    ((This)->lpVtbl->SetHelpContext(This,dwHelpContext))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICreateErrorInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISupportErrorInfo interface
 */
#ifndef __ISupportErrorInfo_INTERFACE_DEFINED__
#define __ISupportErrorInfo_INTERFACE_DEFINED__

typedef ISupportErrorInfo *LPSUPPORTERRORINFO;

EXTERN_C const IID IID_ISupportErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISupportErrorInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISupportErrorInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISupportErrorInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISupportErrorInfo *This);

    /*** ISupportErrorInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *InterfaceSupportsErrorInfo)(
        ISupportErrorInfo *This,
        REFIID riid);

    END_INTERFACE
} ISupportErrorInfoVtbl;

interface ISupportErrorInfo {
    CONST_VTBL ISupportErrorInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISupportErrorInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISupportErrorInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISupportErrorInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISupportErrorInfo methods ***/
#define ISupportErrorInfo_InterfaceSupportsErrorInfo(This,riid) \
    ((This)->lpVtbl->InterfaceSupportsErrorInfo(This,riid))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISupportErrorInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITypeFactory interface
 */
#ifndef __ITypeFactory_INTERFACE_DEFINED__
#define __ITypeFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITypeFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeFactory *This);

    /*** ITypeFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateFromTypeInfo)(
        ITypeFactory *This,
        ITypeInfo *pTypeInfo,
        REFIID riid,
        IUnknown **ppv);

    END_INTERFACE
} ITypeFactoryVtbl;

interface ITypeFactory {
    CONST_VTBL ITypeFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeFactory methods ***/
#define ITypeFactory_CreateFromTypeInfo(This,pTypeInfo,riid,ppv) \
    ((This)->lpVtbl->CreateFromTypeInfo(This,pTypeInfo,riid,ppv))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITypeFactory_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ITypeMarshal interface
 */
#ifndef __ITypeMarshal_INTERFACE_DEFINED__
#define __ITypeMarshal_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITypeMarshal;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeMarshalVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeMarshal *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeMarshal *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeMarshal *This);

    /*** ITypeMarshal methods ***/
    HRESULT (STDMETHODCALLTYPE *Size)(
        ITypeMarshal *This,
        PVOID pvType,
        DWORD dwDestContext,
        PVOID pvDestContext,
        ULONG *pSize);

    HRESULT (STDMETHODCALLTYPE *Marshal)(
        ITypeMarshal *This,
        PVOID pvType,
        DWORD dwDestContext,
        PVOID pvDestContext,
        ULONG cbBufferLength,
        BYTE *pBuffer,
        ULONG *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Unmarshal)(
        ITypeMarshal *This,
        PVOID pvType,
        DWORD dwFlags,
        ULONG cbBufferLength,
        BYTE *pBuffer,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Free)(
        ITypeMarshal *This,
        PVOID pvType);

    END_INTERFACE
} ITypeMarshalVtbl;

interface ITypeMarshal {
    CONST_VTBL ITypeMarshalVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeMarshal_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeMarshal_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeMarshal_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeMarshal methods ***/
#define ITypeMarshal_Size(This,pvType,dwDestContext,pvDestContext,pSize) \
    ((This)->lpVtbl->Size(This,pvType,dwDestContext,pvDestContext,pSize))
#define ITypeMarshal_Marshal(This,pvType,dwDestContext,pvDestContext,cbBufferLength,pBuffer,pcbWritten) \
    ((This)->lpVtbl->Marshal(This,pvType,dwDestContext,pvDestContext,cbBufferLength,pBuffer,pcbWritten))
#define ITypeMarshal_Unmarshal(This,pvType,dwFlags,cbBufferLength,pBuffer,pcbRead) \
    ((This)->lpVtbl->Unmarshal(This,pvType,dwFlags,cbBufferLength,pBuffer,pcbRead))
#define ITypeMarshal_Free(This,pvType) \
    ((This)->lpVtbl->Free(This,pvType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITypeMarshal_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IRecordInfo interface
 */
#ifndef __IRecordInfo_INTERFACE_DEFINED__
#define __IRecordInfo_INTERFACE_DEFINED__

typedef IRecordInfo *LPRECORDINFO;

EXTERN_C const IID IID_IRecordInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IRecordInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRecordInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRecordInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRecordInfo *This);

    /*** IRecordInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *RecordInit)(
        IRecordInfo *This,
        PVOID pvNew);

    HRESULT (STDMETHODCALLTYPE *RecordClear)(
        IRecordInfo *This,
        PVOID pvExisting);

    HRESULT (STDMETHODCALLTYPE *RecordCopy)(
        IRecordInfo *This,
        PVOID pvExisting,
        PVOID pvNew);

    HRESULT (STDMETHODCALLTYPE *GetGuid)(
        IRecordInfo *This,
        GUID *pguid);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IRecordInfo *This,
        BSTR *pbstrName);

    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IRecordInfo *This,
        ULONG *pcbSize);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IRecordInfo *This,
        ITypeInfo **ppTypeInfo);

    HRESULT (STDMETHODCALLTYPE *GetField)(
        IRecordInfo *This,
        PVOID pvData,
        LPCOLESTR szFieldName,
        VARIANT *pvarField);

    HRESULT (STDMETHODCALLTYPE *GetFieldNoCopy)(
        IRecordInfo *This,
        PVOID pvData,
        LPCOLESTR szFieldName,
        VARIANT *pvarField,
        PVOID *ppvDataCArray);

    HRESULT (STDMETHODCALLTYPE *PutField)(
        IRecordInfo *This,
        ULONG wFlags,
        PVOID pvData,
        LPCOLESTR szFieldName,
        VARIANT *pvarField);

    HRESULT (STDMETHODCALLTYPE *PutFieldNoCopy)(
        IRecordInfo *This,
        ULONG wFlags,
        PVOID pvData,
        LPCOLESTR szFieldName,
        VARIANT *pvarField);

    HRESULT (STDMETHODCALLTYPE *GetFieldNames)(
        IRecordInfo *This,
        ULONG *pcNames,
        BSTR *rgBstrNames);

    BOOL (STDMETHODCALLTYPE *IsMatchingType)(
        IRecordInfo *This,
        IRecordInfo *pRecordInfo);

    PVOID (STDMETHODCALLTYPE *RecordCreate)(
        IRecordInfo *This);

    HRESULT (STDMETHODCALLTYPE *RecordCreateCopy)(
        IRecordInfo *This,
        PVOID pvSource,
        PVOID *ppvDest);

    HRESULT (STDMETHODCALLTYPE *RecordDestroy)(
        IRecordInfo *This,
        PVOID pvRecord);

    END_INTERFACE
} IRecordInfoVtbl;

interface IRecordInfo {
    CONST_VTBL IRecordInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IRecordInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IRecordInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IRecordInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IRecordInfo methods ***/
#define IRecordInfo_RecordInit(This,pvNew) \
    ((This)->lpVtbl->RecordInit(This,pvNew))
#define IRecordInfo_RecordClear(This,pvExisting) \
    ((This)->lpVtbl->RecordClear(This,pvExisting))
#define IRecordInfo_RecordCopy(This,pvExisting,pvNew) \
    ((This)->lpVtbl->RecordCopy(This,pvExisting,pvNew))
#define IRecordInfo_GetGuid(This,pguid) \
    ((This)->lpVtbl->GetGuid(This,pguid))
#define IRecordInfo_GetName(This,pbstrName) \
    ((This)->lpVtbl->GetName(This,pbstrName))
#define IRecordInfo_GetSize(This,pcbSize) \
    ((This)->lpVtbl->GetSize(This,pcbSize))
#define IRecordInfo_GetTypeInfo(This,ppTypeInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,ppTypeInfo))
#define IRecordInfo_GetField(This,pvData,szFieldName,pvarField) \
    ((This)->lpVtbl->GetField(This,pvData,szFieldName,pvarField))
#define IRecordInfo_GetFieldNoCopy(This,pvData,szFieldName,pvarField,ppvDataCArray) \
    ((This)->lpVtbl->GetFieldNoCopy(This,pvData,szFieldName,pvarField,ppvDataCArray))
#define IRecordInfo_PutField(This,wFlags,pvData,szFieldName,pvarField) \
    ((This)->lpVtbl->PutField(This,wFlags,pvData,szFieldName,pvarField))
#define IRecordInfo_PutFieldNoCopy(This,wFlags,pvData,szFieldName,pvarField) \
    ((This)->lpVtbl->PutFieldNoCopy(This,wFlags,pvData,szFieldName,pvarField))
#define IRecordInfo_GetFieldNames(This,pcNames,rgBstrNames) \
    ((This)->lpVtbl->GetFieldNames(This,pcNames,rgBstrNames))
#define IRecordInfo_IsMatchingType(This,pRecordInfo) \
    ((This)->lpVtbl->IsMatchingType(This,pRecordInfo))
#define IRecordInfo_RecordCreate(This) \
    ((This)->lpVtbl->RecordCreate(This))
#define IRecordInfo_RecordCreateCopy(This,pvSource,ppvDest) \
    ((This)->lpVtbl->RecordCreateCopy(This,pvSource,ppvDest))
#define IRecordInfo_RecordDestroy(This,pvRecord) \
    ((This)->lpVtbl->RecordDestroy(This,pvRecord))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IRecordInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IErrorLog interface
 */
#ifndef __IErrorLog_INTERFACE_DEFINED__
#define __IErrorLog_INTERFACE_DEFINED__

typedef IErrorLog *LPERRORLOG;

EXTERN_C const IID IID_IErrorLog;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IErrorLogVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IErrorLog *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IErrorLog *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IErrorLog *This);

    /*** IErrorLog methods ***/
    HRESULT (STDMETHODCALLTYPE *AddError)(
        IErrorLog *This,
        LPCOLESTR pszPropName,
        EXCEPINFO *pExcepInfo);

    END_INTERFACE
} IErrorLogVtbl;

interface IErrorLog {
    CONST_VTBL IErrorLogVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IErrorLog_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IErrorLog_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IErrorLog_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IErrorLog methods ***/
#define IErrorLog_AddError(This,pszPropName,pExcepInfo) \
    ((This)->lpVtbl->AddError(This,pszPropName,pExcepInfo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IErrorLog_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPropertyBag interface
 */
#ifndef __IPropertyBag_INTERFACE_DEFINED__
#define __IPropertyBag_INTERFACE_DEFINED__

typedef IPropertyBag *LPPROPERTYBAG;

EXTERN_C const IID IID_IPropertyBag;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPropertyBagVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPropertyBag *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPropertyBag *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPropertyBag *This);

    /*** IPropertyBag methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IPropertyBag *This,
        LPCOLESTR pszPropName,
        VARIANT *pVar,
        IErrorLog *pErrorLog);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IPropertyBag *This,
        LPCOLESTR pszPropName,
        VARIANT *pVar);

    END_INTERFACE
} IPropertyBagVtbl;

interface IPropertyBag {
    CONST_VTBL IPropertyBagVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPropertyBag_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPropertyBag_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPropertyBag_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPropertyBag methods ***/
#define IPropertyBag_Read(This,pszPropName,pVar,pErrorLog) \
    ((This)->lpVtbl->Read(This,pszPropName,pVar,pErrorLog))
#define IPropertyBag_Write(This,pszPropName,pVar) \
    ((This)->lpVtbl->Write(This,pszPropName,pVar))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IPropertyBag_RemoteRead_Proxy(
    IPropertyBag *This,
    LPCOLESTR pszPropName,
    VARIANT *pVar,
    IErrorLog *pErrorLog,
    DWORD varType,
    IUnknown *pUnkObj);

void __RPC_STUB IPropertyBag_RemoteRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IPropertyBag_Read_Proxy(
    LPCOLESTR pszPropName,
    VARIANT *pVar,
    IErrorLog *pErrorLog);
HRESULT IPropertyBag_Read_Stub(
    LPCOLESTR pszPropName,
    VARIANT *pVar,
    IErrorLog *pErrorLog,
    DWORD varType,
    IUnknown *pUnkObj);
#endif /* __IPropertyBag_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITypeLibRegistrationReader interface
 */
#ifndef __ITypeLibRegistrationReader_INTERFACE_DEFINED__
#define __ITypeLibRegistrationReader_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITypeLibRegistrationReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeLibRegistrationReaderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeLibRegistrationReader *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeLibRegistrationReader *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeLibRegistrationReader *This);

    /*** ITypeLibRegistrationReader methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumTypeLibRegistrations)(
        ITypeLibRegistrationReader *This,
        IEnumUnknown **ppEnumUnknown);

    END_INTERFACE
} ITypeLibRegistrationReaderVtbl;

interface ITypeLibRegistrationReader {
    CONST_VTBL ITypeLibRegistrationReaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeLibRegistrationReader_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeLibRegistrationReader_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeLibRegistrationReader_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeLibRegistrationReader methods ***/
#define ITypeLibRegistrationReader_EnumTypeLibRegistrations(This,ppEnumUnknown) \
    ((This)->lpVtbl->EnumTypeLibRegistrations(This,ppEnumUnknown))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITypeLibRegistrationReader_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITypeLibRegistration interface
 */
#ifndef __ITypeLibRegistration_INTERFACE_DEFINED__
#define __ITypeLibRegistration_INTERFACE_DEFINED__

EXTERN_C const IID IID_ITypeLibRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ITypeLibRegistrationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITypeLibRegistration *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITypeLibRegistration *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITypeLibRegistration *This);

    /*** ITypeLibRegistration methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGuid)(
        ITypeLibRegistration *This,
        GUID *pGuid);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        ITypeLibRegistration *This,
        BSTR *pVersion);

    HRESULT (STDMETHODCALLTYPE *GetLcid)(
        ITypeLibRegistration *This,
        LCID *pLcid);

    HRESULT (STDMETHODCALLTYPE *GetWin32Path)(
        ITypeLibRegistration *This,
        BSTR *pWin32Path);

    HRESULT (STDMETHODCALLTYPE *GetWin64Path)(
        ITypeLibRegistration *This,
        BSTR *pWin64Path);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        ITypeLibRegistration *This,
        BSTR *pDisplayName);

    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        ITypeLibRegistration *This,
        DWORD *pFlags);

    HRESULT (STDMETHODCALLTYPE *GetHelpDir)(
        ITypeLibRegistration *This,
        BSTR *pHelpDir);

    END_INTERFACE
} ITypeLibRegistrationVtbl;

interface ITypeLibRegistration {
    CONST_VTBL ITypeLibRegistrationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITypeLibRegistration_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ITypeLibRegistration_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ITypeLibRegistration_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ITypeLibRegistration methods ***/
#define ITypeLibRegistration_GetGuid(This,pGuid) \
    ((This)->lpVtbl->GetGuid(This,pGuid))
#define ITypeLibRegistration_GetVersion(This,pVersion) \
    ((This)->lpVtbl->GetVersion(This,pVersion))
#define ITypeLibRegistration_GetLcid(This,pLcid) \
    ((This)->lpVtbl->GetLcid(This,pLcid))
#define ITypeLibRegistration_GetWin32Path(This,pWin32Path) \
    ((This)->lpVtbl->GetWin32Path(This,pWin32Path))
#define ITypeLibRegistration_GetWin64Path(This,pWin64Path) \
    ((This)->lpVtbl->GetWin64Path(This,pWin64Path))
#define ITypeLibRegistration_GetDisplayName(This,pDisplayName) \
    ((This)->lpVtbl->GetDisplayName(This,pDisplayName))
#define ITypeLibRegistration_GetFlags(This,pFlags) \
    ((This)->lpVtbl->GetFlags(This,pFlags))
#define ITypeLibRegistration_GetHelpDir(This,pHelpDir) \
    ((This)->lpVtbl->GetHelpDir(This,pHelpDir))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ITypeLibRegistration_INTERFACE_DEFINED__ */

EXTERN_C const CLSID CLSID_TypeLibRegistrationReader;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER VARIANT_UserSize(ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal(ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(ULONG *, VARIANT *);
ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER CLEANLOCALSTORAGE_UserSize(ULONG *, ULONG, CLEANLOCALSTORAGE *);
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserMarshal(ULONG *, unsigned char *, CLEANLOCALSTORAGE *);
unsigned char * __RPC_USER CLEANLOCALSTORAGE_UserUnmarshal(ULONG *, unsigned char *, CLEANLOCALSTORAGE *);
void __RPC_USER CLEANLOCALSTORAGE_UserFree(ULONG *, CLEANLOCALSTORAGE *);

/* End additional prototypes for all interfaces */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* __oaidl_h__ */
