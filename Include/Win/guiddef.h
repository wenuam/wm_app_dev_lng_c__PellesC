/* Windows GUID definitions (from Hell) */

#ifndef GUID_DEFINED
#define GUID_DEFINED
#ifdef __midl
typedef struct {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    byte           Data4[ 8 ];
} GUID;
#else /* !__midl */
typedef struct _GUID {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[ 8 ];
} GUID;
#endif /* !__midl */
#endif /* !GUID_DEFINED */

#ifndef DECLSPEC_SELECTANY
#if __POCC__ >= 1100
#define DECLSPEC_SELECTANY  __declspec(selectany)
#else
#define DECLSPEC_SELECTANY
#endif
#endif /* DECLSPEC_SELECTANY */

#ifndef EXTERN_C
#define EXTERN_C  extern
#endif

#undef DEFINE_GUID
#ifdef INITGUID
#define DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    EXTERN_C const GUID DECLSPEC_SELECTANY name = { l,w1,w2, { b1,b2,b3,b4,b5,b6,b7,b8 } }
#else /* !INITGUID */
#define DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    EXTERN_C const GUID name
#endif /* !INITGUID */

#define DEFINE_OLEGUID(name,l,w1,w2) \
    DEFINE_GUID(name, l, w1, w2, 0xC0,0,0,0,0,0,0,0x46)

#ifndef _GUIDDEF_H
#define _GUIDDEF_H

#ifndef __LPGUID_DEFINED__
#define __LPGUID_DEFINED__
typedef GUID *LPGUID;
#endif /* __LPGUID_DEFINED__ */

#ifndef __LPCGUID_DEFINED__
#define __LPCGUID_DEFINED__
typedef const GUID *LPCGUID;
#endif /* __LPCGUID_DEFINED__ */

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef GUID IID;
typedef IID *LPIID;
#define IID_NULL  GUID_NULL
#define IsEqualIID(riid1,riid2)  IsEqualGUID(riid1, riid2)
typedef GUID CLSID;
typedef CLSID *LPCLSID;
#define CLSID_NULL  GUID_NULL
#define IsEqualCLSID(rclsid1,rclsid2)  IsEqualGUID(rclsid1, rclsid2)
typedef GUID FMTID;
typedef FMTID *LPFMTID;
#define FMTID_NULL  GUID_NULL
#define IsEqualFMTID(rfmtid1,rfmtid2)  IsEqualGUID(rfmtid1, rfmtid2)

#ifdef __midl_proxy
#define __MIDL_CONST
#else /* !__midl_proxy */
#define __MIDL_CONST const
#endif /* !__midl_proxy */

#ifndef _REFGUID_DEFINED
#define _REFGUID_DEFINED
#define REFGUID const GUID * __MIDL_CONST
#endif /* !_REFGUID_DEFINED */

#ifndef _REFIID_DEFINED
#define _REFIID_DEFINED
#define REFIID const IID * __MIDL_CONST
#endif /* !_REFIID_DEFINED */

#ifndef _REFCLSID_DEFINED
#define _REFCLSID_DEFINED
#define REFCLSID const IID * __MIDL_CONST
#endif /* !_REFCLSID_DEFINED */

#ifndef _REFFMTID_DEFINED
#define _REFFMTID_DEFINED
#define REFFMTID const IID * __MIDL_CONST
#endif /* !_REFFMTID_DEFINED */

#endif /* !__IID_DEFINED__ */

#ifndef __midl

#ifndef _SYS_GUID_OPERATORS_
#define _SYS_GUID_OPERATORS_

#include <string.h>
#define IsEqualGUID(rguid1, rguid2)  (memcmp((rguid1), (rguid2), sizeof(GUID)) == 0)

#endif /* !_SYS_GUID_OPERATORS_ */

#endif /* !__midl */

#endif /* _GUIDDEF_H */
