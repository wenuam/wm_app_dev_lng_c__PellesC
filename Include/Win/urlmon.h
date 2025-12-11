/* Generated from urlmon.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __urlmon_h__
#define __urlmon_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IPersistMoniker_FWD_DEFINED__
#define __IPersistMoniker_FWD_DEFINED__
typedef interface IPersistMoniker IPersistMoniker;
#endif /* __IPersistMoniker_FWD_DEFINED__ */

#ifndef __IMonikerProp_FWD_DEFINED__
#define __IMonikerProp_FWD_DEFINED__
typedef interface IMonikerProp IMonikerProp;
#endif /* __IMonikerProp_FWD_DEFINED__ */

#ifndef __IBindProtocol_FWD_DEFINED__
#define __IBindProtocol_FWD_DEFINED__
typedef interface IBindProtocol IBindProtocol;
#endif /* __IBindProtocol_FWD_DEFINED__ */

#ifndef __IBinding_FWD_DEFINED__
#define __IBinding_FWD_DEFINED__
typedef interface IBinding IBinding;
#endif /* __IBinding_FWD_DEFINED__ */

#ifndef __IBindStatusCallback_FWD_DEFINED__
#define __IBindStatusCallback_FWD_DEFINED__
typedef interface IBindStatusCallback IBindStatusCallback;
#endif /* __IBindStatusCallback_FWD_DEFINED__ */

#ifndef __IBindStatusCallbackEx_FWD_DEFINED__
#define __IBindStatusCallbackEx_FWD_DEFINED__
typedef interface IBindStatusCallbackEx IBindStatusCallbackEx;
#endif /* __IBindStatusCallbackEx_FWD_DEFINED__ */

#ifndef __IAuthenticate_FWD_DEFINED__
#define __IAuthenticate_FWD_DEFINED__
typedef interface IAuthenticate IAuthenticate;
#endif /* __IAuthenticate_FWD_DEFINED__ */

#ifndef __IAuthenticateEx_FWD_DEFINED__
#define __IAuthenticateEx_FWD_DEFINED__
typedef interface IAuthenticateEx IAuthenticateEx;
#endif /* __IAuthenticateEx_FWD_DEFINED__ */

#ifndef __IHttpNegotiate_FWD_DEFINED__
#define __IHttpNegotiate_FWD_DEFINED__
typedef interface IHttpNegotiate IHttpNegotiate;
#endif /* __IHttpNegotiate_FWD_DEFINED__ */

#ifndef __IHttpNegotiate2_FWD_DEFINED__
#define __IHttpNegotiate2_FWD_DEFINED__
typedef interface IHttpNegotiate2 IHttpNegotiate2;
#endif /* __IHttpNegotiate2_FWD_DEFINED__ */

#ifndef __IHttpNegotiate3_FWD_DEFINED__
#define __IHttpNegotiate3_FWD_DEFINED__
typedef interface IHttpNegotiate3 IHttpNegotiate3;
#endif /* __IHttpNegotiate3_FWD_DEFINED__ */

#ifndef __IWinInetFileStream_FWD_DEFINED__
#define __IWinInetFileStream_FWD_DEFINED__
typedef interface IWinInetFileStream IWinInetFileStream;
#endif /* __IWinInetFileStream_FWD_DEFINED__ */

#ifndef __IWindowForBindingUI_FWD_DEFINED__
#define __IWindowForBindingUI_FWD_DEFINED__
typedef interface IWindowForBindingUI IWindowForBindingUI;
#endif /* __IWindowForBindingUI_FWD_DEFINED__ */

#ifndef __ICodeInstall_FWD_DEFINED__
#define __ICodeInstall_FWD_DEFINED__
typedef interface ICodeInstall ICodeInstall;
#endif /* __ICodeInstall_FWD_DEFINED__ */

#ifndef __IUri_FWD_DEFINED__
#define __IUri_FWD_DEFINED__
typedef interface IUri IUri;
#endif /* __IUri_FWD_DEFINED__ */

#ifndef __IUriContainer_FWD_DEFINED__
#define __IUriContainer_FWD_DEFINED__
typedef interface IUriContainer IUriContainer;
#endif /* __IUriContainer_FWD_DEFINED__ */

#ifndef __IUriBuilder_FWD_DEFINED__
#define __IUriBuilder_FWD_DEFINED__
typedef interface IUriBuilder IUriBuilder;
#endif /* __IUriBuilder_FWD_DEFINED__ */

#ifndef __IUriBuilderFactory_FWD_DEFINED__
#define __IUriBuilderFactory_FWD_DEFINED__
typedef interface IUriBuilderFactory IUriBuilderFactory;
#endif /* __IUriBuilderFactory_FWD_DEFINED__ */

#ifndef __IWinInetInfo_FWD_DEFINED__
#define __IWinInetInfo_FWD_DEFINED__
typedef interface IWinInetInfo IWinInetInfo;
#endif /* __IWinInetInfo_FWD_DEFINED__ */

#ifndef __IHttpSecurity_FWD_DEFINED__
#define __IHttpSecurity_FWD_DEFINED__
typedef interface IHttpSecurity IHttpSecurity;
#endif /* __IHttpSecurity_FWD_DEFINED__ */

#ifndef __IWinInetHttpInfo_FWD_DEFINED__
#define __IWinInetHttpInfo_FWD_DEFINED__
typedef interface IWinInetHttpInfo IWinInetHttpInfo;
#endif /* __IWinInetHttpInfo_FWD_DEFINED__ */

#ifndef __IWinInetHttpTimeouts_FWD_DEFINED__
#define __IWinInetHttpTimeouts_FWD_DEFINED__
typedef interface IWinInetHttpTimeouts IWinInetHttpTimeouts;
#endif /* __IWinInetHttpTimeouts_FWD_DEFINED__ */

#ifndef __IWinInetCacheHints_FWD_DEFINED__
#define __IWinInetCacheHints_FWD_DEFINED__
typedef interface IWinInetCacheHints IWinInetCacheHints;
#endif /* __IWinInetCacheHints_FWD_DEFINED__ */

#ifndef __IWinInetCacheHints2_FWD_DEFINED__
#define __IWinInetCacheHints2_FWD_DEFINED__
typedef interface IWinInetCacheHints2 IWinInetCacheHints2;
#endif /* __IWinInetCacheHints2_FWD_DEFINED__ */

#ifndef __IBindHost_FWD_DEFINED__
#define __IBindHost_FWD_DEFINED__
typedef interface IBindHost IBindHost;
#endif /* __IBindHost_FWD_DEFINED__ */

#ifndef __IInternet_FWD_DEFINED__
#define __IInternet_FWD_DEFINED__
typedef interface IInternet IInternet;
#endif /* __IInternet_FWD_DEFINED__ */

#ifndef __IInternetBindInfo_FWD_DEFINED__
#define __IInternetBindInfo_FWD_DEFINED__
typedef interface IInternetBindInfo IInternetBindInfo;
#endif /* __IInternetBindInfo_FWD_DEFINED__ */

#ifndef __IInternetBindInfoEx_FWD_DEFINED__
#define __IInternetBindInfoEx_FWD_DEFINED__
typedef interface IInternetBindInfoEx IInternetBindInfoEx;
#endif /* __IInternetBindInfoEx_FWD_DEFINED__ */

#ifndef __IInternetProtocolRoot_FWD_DEFINED__
#define __IInternetProtocolRoot_FWD_DEFINED__
typedef interface IInternetProtocolRoot IInternetProtocolRoot;
#endif /* __IInternetProtocolRoot_FWD_DEFINED__ */

#ifndef __IInternetProtocol_FWD_DEFINED__
#define __IInternetProtocol_FWD_DEFINED__
typedef interface IInternetProtocol IInternetProtocol;
#endif /* __IInternetProtocol_FWD_DEFINED__ */

#ifndef __IInternetProtocolEx_FWD_DEFINED__
#define __IInternetProtocolEx_FWD_DEFINED__
typedef interface IInternetProtocolEx IInternetProtocolEx;
#endif /* __IInternetProtocolEx_FWD_DEFINED__ */

#ifndef __IInternetProtocolSink_FWD_DEFINED__
#define __IInternetProtocolSink_FWD_DEFINED__
typedef interface IInternetProtocolSink IInternetProtocolSink;
#endif /* __IInternetProtocolSink_FWD_DEFINED__ */

#ifndef __IInternetProtocolSinkStackable_FWD_DEFINED__
#define __IInternetProtocolSinkStackable_FWD_DEFINED__
typedef interface IInternetProtocolSinkStackable IInternetProtocolSinkStackable;
#endif /* __IInternetProtocolSinkStackable_FWD_DEFINED__ */

#ifndef __IInternetSession_FWD_DEFINED__
#define __IInternetSession_FWD_DEFINED__
typedef interface IInternetSession IInternetSession;
#endif /* __IInternetSession_FWD_DEFINED__ */

#ifndef __IInternetThreadSwitch_FWD_DEFINED__
#define __IInternetThreadSwitch_FWD_DEFINED__
typedef interface IInternetThreadSwitch IInternetThreadSwitch;
#endif /* __IInternetThreadSwitch_FWD_DEFINED__ */

#ifndef __IInternetPriority_FWD_DEFINED__
#define __IInternetPriority_FWD_DEFINED__
typedef interface IInternetPriority IInternetPriority;
#endif /* __IInternetPriority_FWD_DEFINED__ */

#ifndef __IInternetProtocolInfo_FWD_DEFINED__
#define __IInternetProtocolInfo_FWD_DEFINED__
typedef interface IInternetProtocolInfo IInternetProtocolInfo;
#endif /* __IInternetProtocolInfo_FWD_DEFINED__ */

#ifndef __IInternetSecurityMgrSite_FWD_DEFINED__
#define __IInternetSecurityMgrSite_FWD_DEFINED__
typedef interface IInternetSecurityMgrSite IInternetSecurityMgrSite;
#endif /* __IInternetSecurityMgrSite_FWD_DEFINED__ */

#ifndef __IInternetSecurityManager_FWD_DEFINED__
#define __IInternetSecurityManager_FWD_DEFINED__
typedef interface IInternetSecurityManager IInternetSecurityManager;
#endif /* __IInternetSecurityManager_FWD_DEFINED__ */

#ifndef __IInternetSecurityManagerEx_FWD_DEFINED__
#define __IInternetSecurityManagerEx_FWD_DEFINED__
typedef interface IInternetSecurityManagerEx IInternetSecurityManagerEx;
#endif /* __IInternetSecurityManagerEx_FWD_DEFINED__ */

#ifndef __IInternetSecurityManagerEx2_FWD_DEFINED__
#define __IInternetSecurityManagerEx2_FWD_DEFINED__
typedef interface IInternetSecurityManagerEx2 IInternetSecurityManagerEx2;
#endif /* __IInternetSecurityManagerEx2_FWD_DEFINED__ */

#ifndef __IZoneIdentifier_FWD_DEFINED__
#define __IZoneIdentifier_FWD_DEFINED__
typedef interface IZoneIdentifier IZoneIdentifier;
#endif /* __IZoneIdentifier_FWD_DEFINED__ */

#ifndef __IZoneIdentifier2_FWD_DEFINED__
#define __IZoneIdentifier2_FWD_DEFINED__
typedef interface IZoneIdentifier2 IZoneIdentifier2;
#endif /* __IZoneIdentifier2_FWD_DEFINED__ */

#ifndef __IInternetHostSecurityManager_FWD_DEFINED__
#define __IInternetHostSecurityManager_FWD_DEFINED__
typedef interface IInternetHostSecurityManager IInternetHostSecurityManager;
#endif /* __IInternetHostSecurityManager_FWD_DEFINED__ */

#ifndef __IInternetZoneManager_FWD_DEFINED__
#define __IInternetZoneManager_FWD_DEFINED__
typedef interface IInternetZoneManager IInternetZoneManager;
#endif /* __IInternetZoneManager_FWD_DEFINED__ */

#ifndef __IInternetZoneManagerEx_FWD_DEFINED__
#define __IInternetZoneManagerEx_FWD_DEFINED__
typedef interface IInternetZoneManagerEx IInternetZoneManagerEx;
#endif /* __IInternetZoneManagerEx_FWD_DEFINED__ */

#ifndef __IInternetZoneManagerEx2_FWD_DEFINED__
#define __IInternetZoneManagerEx2_FWD_DEFINED__
typedef interface IInternetZoneManagerEx2 IInternetZoneManagerEx2;
#endif /* __IInternetZoneManagerEx2_FWD_DEFINED__ */

#ifndef __ISoftDistExt_FWD_DEFINED__
#define __ISoftDistExt_FWD_DEFINED__
typedef interface ISoftDistExt ISoftDistExt;
#endif /* __ISoftDistExt_FWD_DEFINED__ */

#ifndef __ICatalogFileInfo_FWD_DEFINED__
#define __ICatalogFileInfo_FWD_DEFINED__
typedef interface ICatalogFileInfo ICatalogFileInfo;
#endif /* __ICatalogFileInfo_FWD_DEFINED__ */

#ifndef __IDataFilter_FWD_DEFINED__
#define __IDataFilter_FWD_DEFINED__
typedef interface IDataFilter IDataFilter;
#endif /* __IDataFilter_FWD_DEFINED__ */

#ifndef __IEncodingFilterFactory_FWD_DEFINED__
#define __IEncodingFilterFactory_FWD_DEFINED__
typedef interface IEncodingFilterFactory IEncodingFilterFactory;
#endif /* __IEncodingFilterFactory_FWD_DEFINED__ */

#ifndef __IWrappedProtocol_FWD_DEFINED__
#define __IWrappedProtocol_FWD_DEFINED__
typedef interface IWrappedProtocol IWrappedProtocol;
#endif /* __IWrappedProtocol_FWD_DEFINED__ */

#ifndef __IGetBindHandle_FWD_DEFINED__
#define __IGetBindHandle_FWD_DEFINED__
typedef interface IGetBindHandle IGetBindHandle;
#endif /* __IGetBindHandle_FWD_DEFINED__ */

#ifndef __IBindCallbackRedirect_FWD_DEFINED__
#define __IBindCallbackRedirect_FWD_DEFINED__
typedef interface IBindCallbackRedirect IBindCallbackRedirect;
#endif /* __IBindCallbackRedirect_FWD_DEFINED__ */

#ifndef __IBindHttpSecurity_FWD_DEFINED__
#define __IBindHttpSecurity_FWD_DEFINED__
typedef interface IBindHttpSecurity IBindHttpSecurity;
#endif /* __IBindHttpSecurity_FWD_DEFINED__ */

/* Headers for imported files */

#include "objidl.h"
#include "oleidl.h"
#include "servprov.h"
#include "msxml.h"


#pragma comment(lib,"uuid.lib")

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef __IPersistMoniker_FWD_DEFINED__
#define __IPersistMoniker_FWD_DEFINED__
typedef interface IPersistMoniker IPersistMoniker;
#endif /* __IPersistMoniker_FWD_DEFINED__ */

#ifndef __IBindProtocol_FWD_DEFINED__
#define __IBindProtocol_FWD_DEFINED__
typedef interface IBindProtocol IBindProtocol;
#endif /* __IBindProtocol_FWD_DEFINED__ */

#ifndef __IBinding_FWD_DEFINED__
#define __IBinding_FWD_DEFINED__
typedef interface IBinding IBinding;
#endif /* __IBinding_FWD_DEFINED__ */

#ifndef __IBindStatusCallback_FWD_DEFINED__
#define __IBindStatusCallback_FWD_DEFINED__
typedef interface IBindStatusCallback IBindStatusCallback;
#endif /* __IBindStatusCallback_FWD_DEFINED__ */

#ifndef __IBindStatusCallbackEx_FWD_DEFINED__
#define __IBindStatusCallbackEx_FWD_DEFINED__
typedef interface IBindStatusCallbackEx IBindStatusCallbackEx;
#endif /* __IBindStatusCallbackEx_FWD_DEFINED__ */

#ifndef __IAuthenticate_FWD_DEFINED__
#define __IAuthenticate_FWD_DEFINED__
typedef interface IAuthenticate IAuthenticate;
#endif /* __IAuthenticate_FWD_DEFINED__ */

#ifndef __IAuthenticateEx_FWD_DEFINED__
#define __IAuthenticateEx_FWD_DEFINED__
typedef interface IAuthenticateEx IAuthenticateEx;
#endif /* __IAuthenticateEx_FWD_DEFINED__ */

#ifndef __IWindowForBindingUI_FWD_DEFINED__
#define __IWindowForBindingUI_FWD_DEFINED__
typedef interface IWindowForBindingUI IWindowForBindingUI;
#endif /* __IWindowForBindingUI_FWD_DEFINED__ */

#ifndef __ICodeInstall_FWD_DEFINED__
#define __ICodeInstall_FWD_DEFINED__
typedef interface ICodeInstall ICodeInstall;
#endif /* __ICodeInstall_FWD_DEFINED__ */

#ifndef __IHttpNegotiate_FWD_DEFINED__
#define __IHttpNegotiate_FWD_DEFINED__
typedef interface IHttpNegotiate IHttpNegotiate;
#endif /* __IHttpNegotiate_FWD_DEFINED__ */

#ifndef __IHttpNegotiate2_FWD_DEFINED__
#define __IHttpNegotiate2_FWD_DEFINED__
typedef interface IHttpNegotiate2 IHttpNegotiate2;
#endif /* __IHttpNegotiate2_FWD_DEFINED__ */

#ifndef __IHttpNegotiate3_FWD_DEFINED__
#define __IHttpNegotiate3_FWD_DEFINED__
typedef interface IHttpNegotiate3 IHttpNegotiate3;
#endif /* __IHttpNegotiate3_FWD_DEFINED__ */

#ifndef __IWinInetFileStream_FWD_DEFINED__
#define __IWinInetFileStream_FWD_DEFINED__
typedef interface IWinInetFileStream IWinInetFileStream;
#endif /* __IWinInetFileStream_FWD_DEFINED__ */

// Side-by-Side clsid
EXTERN_C const IID CLSID_SBS_StdURLMoniker;
EXTERN_C const IID CLSID_SBS_HttpProtocol;
EXTERN_C const IID CLSID_SBS_FtpProtocol;
EXTERN_C const IID CLSID_SBS_GopherProtocol;
EXTERN_C const IID CLSID_SBS_HttpSProtocol;
EXTERN_C const IID CLSID_SBS_FileProtocol;
EXTERN_C const IID CLSID_SBS_MkProtocol;
EXTERN_C const IID CLSID_SBS_UrlMkBindCtx;
EXTERN_C const IID CLSID_SBS_SoftDistExt;
EXTERN_C const IID CLSID_SBS_CdlProtocol;
EXTERN_C const IID CLSID_SBS_ClassInstallFilter;
EXTERN_C const IID CLSID_SBS_InternetSecurityManager;
EXTERN_C const IID CLSID_SBS_InternetZoneManager;
// END Side-by-Side clsid

// These are for backwards compatibility with previous URLMON versions
#define BINDF_DONTUSECACHE BINDF_GETNEWESTVERSION
#define BINDF_DONTPUTINCACHE BINDF_NOWRITECACHE
#define BINDF_NOCOPYDATA BINDF_PULLDATA
#define INVALID_P_ROOT_SECURITY_ID ((BYTE*)-1)

#define PI_DOCFILECLSIDLOOKUP PI_CLSIDLOOKUP

EXTERN_C const IID IID_IAsyncMoniker;
EXTERN_C const IID CLSID_StdURLMoniker;
EXTERN_C const IID CLSID_HttpProtocol;
EXTERN_C const IID CLSID_FtpProtocol;
EXTERN_C const IID CLSID_GopherProtocol;
EXTERN_C const IID CLSID_HttpSProtocol;
EXTERN_C const IID CLSID_FileProtocol;
EXTERN_C const IID CLSID_ResProtocol;
EXTERN_C const IID CLSID_AboutProtocol;
EXTERN_C const IID CLSID_JSProtocol;
EXTERN_C const IID CLSID_MailtoProtocol;
EXTERN_C const IID CLSID_IE4_PROTOCOLS;
EXTERN_C const IID CLSID_MkProtocol;
EXTERN_C const IID CLSID_StdURLProtocol;
EXTERN_C const IID CLSID_TBAuthProtocol;
EXTERN_C const IID CLSID_UrlMkBindCtx;
EXTERN_C const IID CLSID_CdlProtocol;
EXTERN_C const IID CLSID_ClassInstallFilter;
EXTERN_C const IID IID_IAsyncBindCtx;

#define SZ_URLCONTEXT           OLESTR("URL Context")
#define SZ_ASYNC_CALLEE         OLESTR("AsyncCallee")

#define MKSYS_URLMONIKER         6
#define URL_MK_LEGACY            0
#define URL_MK_UNIFORM           1
#define URL_MK_NO_CANONICALIZE   2
STDAPI CreateURLMoniker( LPMONIKER pMkCtx,  LPCWSTR szURL,  LPMONIKER  * ppmk);
STDAPI CreateURLMonikerEx( LPMONIKER pMkCtx,  LPCWSTR szURL,  LPMONIKER  * ppmk, DWORD dwFlags);
STDAPI GetClassURL( LPCWSTR szURL,  CLSID *pClsID);
STDAPI CreateAsyncBindCtx(DWORD reserved,  IBindStatusCallback *pBSCb,
                                 IEnumFORMATETC *pEFetc,  IBindCtx **ppBC);

#if (_WIN32_IE >= _WIN32_IE_IE70)
STDAPI CreateURLMonikerEx2( LPMONIKER pMkCtx,  IUri* pUri,  LPMONIKER  * ppmk, DWORD dwFlags);
#endif

STDAPI CreateAsyncBindCtxEx( IBindCtx *pbc, DWORD dwOptions,  IBindStatusCallback *pBSCb,  IEnumFORMATETC *pEnum,
                             IBindCtx **ppBC, DWORD reserved);

STDAPI MkParseDisplayNameEx( IBindCtx *pbc,  LPCWSTR szDisplayName,   ULONG *pchEaten,
                                 LPMONIKER *ppmk);
STDAPI RegisterBindStatusCallback( LPBC pBC,  IBindStatusCallback *pBSCb,
                                 IBindStatusCallback**  ppBSCBPrev, DWORD dwReserved);
STDAPI RevokeBindStatusCallback( LPBC pBC,  IBindStatusCallback *pBSCb);

STDAPI GetClassFileOrMime( LPBC pBC,  LPCWSTR szFilename,  LPVOID pBuffer, DWORD cbSize,  LPCWSTR szMime, DWORD dwReserved,  CLSID *pclsid);
STDAPI IsValidURL( LPBC pBC,  LPCWSTR szURL, DWORD dwReserved);

STDAPI CoGetClassObjectFromURL(  REFCLSID rCLASSID,
             LPCWSTR szCODE, DWORD dwFileVersionMS,
            DWORD dwFileVersionLS,  LPCWSTR szTYPE,
             LPBINDCTX pBindCtx, DWORD dwClsContext,
             LPVOID pvReserved, REFIID riid,  LPVOID * ppv);

STDAPI IEInstallScope( LPDWORD pdwScope);

STDAPI FaultInIEFeature( HWND hWnd,
             uCLSSPEC *pClassSpec,
             QUERYCONTEXT *pQuery, DWORD dwFlags);

STDAPI GetComponentIDFromCLSSPEC( uCLSSPEC *pClassspec,
             LPSTR * ppszComponentID);

// flags for FaultInIEFeature
#define FIEF_FLAG_FORCE_JITUI               0x1     // force JIT ui even if
                                                 // previoulsy rejected by
                                                 // user in this session or
                                                 // marked as Never Ask Again
#define FIEF_FLAG_PEEK                      0x2     // just peek, don't faultin
#define FIEF_FLAG_SKIP_INSTALLED_VERSION_CHECK        0x4     // force JIT without checking local version
#define FIEF_FLAG_RESERVED_0                0x8     // reserved

//helper apis
STDAPI IsAsyncMoniker( IMoniker* pmk);
STDAPI CreateURLBinding(LPCWSTR lpszUrl,  IBindCtx *pbc,  IBinding **ppBdg);
STDAPI RegisterMediaTypes(  UINT ctypes,  const LPCSTR* rgszTypes,  CLIPFORMAT* rgcfTypes);
STDAPI FindMediaType( LPCSTR rgszTypes,  CLIPFORMAT* rgcfTypes);
STDAPI CreateFormatEnumerator(   UINT cfmtetc,  FORMATETC* rgfmtetc,  IEnumFORMATETC** ppenumfmtetc);
STDAPI RegisterFormatEnumerator( LPBC pBC,  IEnumFORMATETC *pEFetc, DWORD reserved);
STDAPI RevokeFormatEnumerator( LPBC pBC,  IEnumFORMATETC *pEFetc);
STDAPI RegisterMediaTypeClass( LPBC pBC,   UINT ctypes,  const LPCSTR* rgszTypes,   CLSID *rgclsID, DWORD reserved);
STDAPI FindMediaTypeClass( LPBC pBC,  LPCSTR szType,  CLSID *pclsID, DWORD reserved);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
STDAPI UrlMkSetSessionOption(DWORD dwOption,  LPVOID pBuffer, DWORD dwBufferLength,  DWORD dwReserved);
STDAPI UrlMkGetSessionOption(DWORD dwOption,  LPVOID pBuffer, DWORD dwBufferLength,  DWORD *pdwBufferLengthOut,  DWORD dwReserved);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

STDAPI FindMimeFromData(
                         LPBC    pBC,                   // bind context - can be NULL
                         LPCWSTR pwzUrl,                // url - can be null
     LPVOID  pBuffer,               // buffer with data to sniff - can be null (pwzUrl must be valid)
                                 DWORD   cbSize,                // size of buffer
                         LPCWSTR pwzMimeProposed,       // proposed mime if - can be null
                                 DWORD   dwMimeFlags,           // will be defined
                         LPWSTR  *ppwzMimeOut,          // the suggested mime
                       DWORD   dwReserved);           // must be 0

#define     FMFD_DEFAULT             0x00000000
#define     FMFD_URLASFILENAME       0x00000001

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define     FMFD_ENABLEMIMESNIFFING  0x00000002
#define     FMFD_IGNOREMIMETEXTPLAIN  0x00000004

#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#define     FMFD_SERVERMIME   0x00000008
#define     FMFD_RESPECTTEXTPLAIN   0x00000010
#define     FMFD_RETURNUPDATEDIMGMIMES   0x00000020
#define     FMFD_RESERVED_1   0x00000040
#define     FMFD_RESERVED_2   0x00000080

#define     UAS_EXACTLEGACY   0x00001000
STDAPI ObtainUserAgentString(
                                         DWORD dwOption,
        LPSTR pszUAOut,
                                  DWORD *cbSize);

STDAPI CompareSecurityIds( BYTE* pbSecurityId1,  DWORD dwLen1,  BYTE* pbSecurityId2,  DWORD dwLen2,  DWORD dwReserved);

STDAPI CompatFlagsFromClsid( CLSID *pclsid,  LPDWORD pdwCompatFlags,  LPDWORD pdwMiscStatusFlags);

#if (NTDDI_VERSION > NTDDI_WINBLUE || (NTDDI_VERSION == NTDDI_WINBLUE && defined(WINBLUE_KBSPRING14)))
// Enhanced Protected Mode (EPM) Convenience Functions
typedef enum IEObjectType
{
    IE_EPM_OBJECT_EVENT,
    IE_EPM_OBJECT_MUTEX,
    IE_EPM_OBJECT_SEMAPHORE,
    IE_EPM_OBJECT_SHARED_MEMORY,
    IE_EPM_OBJECT_WAITABLE_TIMER,
    IE_EPM_OBJECT_FILE,
    IE_EPM_OBJECT_NAMED_PIPE,
    IE_EPM_OBJECT_REGISTRY,
} IEObjectType;
STDAPI SetAccessForIEAppContainer(
     HANDLE hObject,
     IEObjectType ieObjectType,
     DWORD dwAccessMask
    );
#endif

// URLMON-specific defines for UrlMkSetSessionOption() above
#define URLMON_OPTION_USERAGENT           0x10000001
#define URLMON_OPTION_USERAGENT_REFRESH   0x10000002
#define URLMON_OPTION_URL_ENCODING        0x10000004
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define URLMON_OPTION_USE_BINDSTRINGCREDS 0x10000008
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define URLMON_OPTION_USE_BROWSERAPPSDOCUMENTS 0x10000010
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#define CF_NULL                 0
#define CFSTR_MIME_NULL         NULL

#define CFSTR_MIME_TEXT         (TEXT("text/plain"))
#define CFSTR_MIME_RICHTEXT     (TEXT("text/richtext"))
#define CFSTR_MIME_MANIFEST     (TEXT("text/cache-manifest"))
#define CFSTR_MIME_WEBVTT       (TEXT("text/vtt"))
#define CFSTR_MIME_X_BITMAP     (TEXT("image/x-xbitmap"))
#define CFSTR_MIME_POSTSCRIPT   (TEXT("application/postscript"))

#define CFSTR_MIME_AIFF         (TEXT("audio/aiff"))
#define CFSTR_MIME_BASICAUDIO   (TEXT("audio/basic"))
#define CFSTR_MIME_WAV          (TEXT("audio/wav"))
#define CFSTR_MIME_X_WAV        (TEXT("audio/x-wav"))
#define CFSTR_MIME_GIF          (TEXT("image/gif"))
#define CFSTR_MIME_PJPEG        (TEXT("image/pjpeg"))
#define CFSTR_MIME_JPEG         (TEXT("image/jpeg"))
#define CFSTR_MIME_TIFF         (TEXT("image/tiff"))
#define CFSTR_MIME_JPEG_XR      (TEXT("image/vnd.ms-photo"))
#define CFSTR_MIME_PNG          (TEXT("image/png"))
#define CFSTR_MIME_DDS          (TEXT("image/vnd.ms-dds"))
#define CFSTR_MIME_X_PNG        (TEXT("image/x-png"))
#define CFSTR_MIME_X_ICON       (TEXT("image/x-icon"))
#define CFSTR_MIME_SVG_XML      (TEXT("image/svg+xml"))
#define CFSTR_MIME_BMP          (TEXT("image/bmp"))
#define CFSTR_MIME_X_EMF        (TEXT("image/x-emf"))
#define CFSTR_MIME_X_WMF        (TEXT("image/x-wmf"))
#define CFSTR_MIME_AVI          (TEXT("video/avi"))
#define CFSTR_MIME_MPEG         (TEXT("video/mpeg"))
#define CFSTR_MIME_FRACTALS     (TEXT("application/fractals"))
#define CFSTR_MIME_RAWDATA      (TEXT("application/octet-stream"))
#define CFSTR_MIME_RAWDATASTRM  (TEXT("application/octet-stream"))
#define CFSTR_MIME_PDF          (TEXT("application/pdf"))
#define CFSTR_MIME_HTA          (TEXT("application/hta"))
#define CFSTR_MIME_APP_XML      (TEXT("application/xml"))
#define CFSTR_MIME_XHTML        (TEXT("application/xhtml+xml"))
#define CFSTR_MIME_X_AIFF       (TEXT("audio/x-aiff"))
#define CFSTR_MIME_X_REALAUDIO  (TEXT("audio/x-pn-realaudio"))
#define CFSTR_MIME_XBM          (TEXT("image/xbm"))
#define CFSTR_MIME_QUICKTIME    (TEXT("video/quicktime"))
#define CFSTR_MIME_X_MSVIDEO    (TEXT("video/x-msvideo"))
#define CFSTR_MIME_X_SGI_MOVIE  (TEXT("video/x-sgi-movie"))
#define CFSTR_MIME_X_MIXED_REPLACE (TEXT("multipart/x-mixed-replace"))

#define CFSTR_MIME_HTML         (TEXT("text/html"))
#define CFSTR_MIME_XML          (TEXT("text/xml"))
#define CFSTR_MIME_TTML         (TEXT("application/ttml+xml"))
#define CFSTR_MIME_TTAF         (TEXT("application/ttaf+xml"))
#define CFSTR_MIME_X_JAVASCRIPT (TEXT("application/x-javascript"))
#define CFSTR_MIME_TEXT_JSON    (TEXT("text/json"))
#define CFSTR_MIME_APPLICATION_JAVASCRIPT (TEXT("application/javascript"))

// MessageId: MK_S_ASYNCHRONOUS
// MessageText: Operation is successful, but will complete asynchronously.
//
#define MK_S_ASYNCHRONOUS    _HRESULT_TYPEDEF_(0x000401E8L)
#ifndef S_ASYNCHRONOUS
#define S_ASYNCHRONOUS       MK_S_ASYNCHRONOUS
#endif
#ifndef E_PENDING
#define E_PENDING _HRESULT_TYPEDEF_(0x8000000AL)
#endif
//
//
// WinINet and protocol specific errors are mapped to one of the following
// error which are returned in IBSC::OnStopBinding
//
//
// Note: FACILITY C is split into ranges of 1k
// C0000 - C03FF  INET_E_ (URLMON's original hresult)
// C0400 - C07FF  INET_E_CLIENT_xxx
// C0800 - C0BFF  INET_E_SERVER_xxx
// C0C00 - C0FFF  INET_E_????
// C1000 - C13FF  INET_E_AGENT_xxx (info delivery agents)

#define INET_E_INVALID_URL               _HRESULT_TYPEDEF_(0x800C0002L)

#define INET_E_NO_SESSION                _HRESULT_TYPEDEF_(0x800C0003L)

#define INET_E_CANNOT_CONNECT            _HRESULT_TYPEDEF_(0x800C0004L)

#define INET_E_RESOURCE_NOT_FOUND        _HRESULT_TYPEDEF_(0x800C0005L)

#define INET_E_OBJECT_NOT_FOUND          _HRESULT_TYPEDEF_(0x800C0006L)

#define INET_E_DATA_NOT_AVAILABLE        _HRESULT_TYPEDEF_(0x800C0007L)

#define INET_E_DOWNLOAD_FAILURE          _HRESULT_TYPEDEF_(0x800C0008L)

#define INET_E_AUTHENTICATION_REQUIRED   _HRESULT_TYPEDEF_(0x800C0009L)

#define INET_E_NO_VALID_MEDIA            _HRESULT_TYPEDEF_(0x800C000AL)

#define INET_E_CONNECTION_TIMEOUT        _HRESULT_TYPEDEF_(0x800C000BL)

#define INET_E_INVALID_REQUEST           _HRESULT_TYPEDEF_(0x800C000CL)

#define INET_E_UNKNOWN_PROTOCOL          _HRESULT_TYPEDEF_(0x800C000DL)

#define INET_E_SECURITY_PROBLEM          _HRESULT_TYPEDEF_(0x800C000EL)

#define INET_E_CANNOT_LOAD_DATA          _HRESULT_TYPEDEF_(0x800C000FL)

#define INET_E_CANNOT_INSTANTIATE_OBJECT _HRESULT_TYPEDEF_(0x800C0010L)

#define INET_E_INVALID_CERTIFICATE       _HRESULT_TYPEDEF_(0x800C0019L)

#define INET_E_REDIRECT_FAILED           _HRESULT_TYPEDEF_(0x800C0014L)

#define INET_E_REDIRECT_TO_DIR           _HRESULT_TYPEDEF_(0x800C0015L)

#define INET_E_CANNOT_LOCK_REQUEST                   _HRESULT_TYPEDEF_(0x800C0016L)
#define INET_E_USE_EXTEND_BINDING                    _HRESULT_TYPEDEF_(0x800C0017L)
#define INET_E_TERMINATED_BIND                       _HRESULT_TYPEDEF_(0x800C0018L)
#define INET_E_RESERVED_1                            _HRESULT_TYPEDEF_(0x800C001AL)
#define INET_E_BLOCKED_REDIRECT_XSECURITYID          _HRESULT_TYPEDEF_(0x800C001BL)
#define INET_E_DOMINJECTIONVALIDATION                _HRESULT_TYPEDEF_(0x800C001CL)
#define INET_E_VTAB_SWITCH_FORCE_ENGINE              _HRESULT_TYPEDEF_(0x800C001DL)
#define INET_E_HSTS_CERTIFICATE_ERROR                _HRESULT_TYPEDEF_(0x800C001EL)
#define INET_E_RESERVED_2                            _HRESULT_TYPEDEF_(0x800C001FL)
#define INET_E_RESERVED_3                            _HRESULT_TYPEDEF_(0x800C0020L)
#define INET_E_RESERVED_4                            _HRESULT_TYPEDEF_(0x800C0021L)
#define INET_E_RESERVED_5                            _HRESULT_TYPEDEF_(0x800C0022L)
#define INET_E_ERROR_FIRST                           _HRESULT_TYPEDEF_(0x800C0002L)

#define INET_E_CODE_DOWNLOAD_DECLINED                _HRESULT_TYPEDEF_(0x800C0100L)
#define INET_E_RESULT_DISPATCHED                     _HRESULT_TYPEDEF_(0x800C0200L)

#define INET_E_CANNOT_REPLACE_SFP_FILE               _HRESULT_TYPEDEF_(0x800C0300L)

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

#define INET_E_CODE_INSTALL_SUPPRESSED               _HRESULT_TYPEDEF_(0x800C0400L)
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#define INET_E_CODE_INSTALL_BLOCKED_BY_HASH_POLICY   _HRESULT_TYPEDEF_(0x800C0500L)

#define INET_E_DOWNLOAD_BLOCKED_BY_INPRIVATE         _HRESULT_TYPEDEF_(0x800C0501L)

#define INET_E_CODE_INSTALL_BLOCKED_IMMERSIVE        _HRESULT_TYPEDEF_(0x800C0502L)

#define INET_E_FORBIDFRAMING                         _HRESULT_TYPEDEF_(0x800C0503L)

#define INET_E_CODE_INSTALL_BLOCKED_ARM              _HRESULT_TYPEDEF_(0x800C0504L)

#define INET_E_BLOCKED_PLUGGABLE_PROTOCOL            _HRESULT_TYPEDEF_(0x800C0505L)

#define INET_E_BLOCKED_ENHANCEDPROTECTEDMODE         _HRESULT_TYPEDEF_(0x800C0506L)

#define INET_E_CODE_INSTALL_BLOCKED_BITNESS          _HRESULT_TYPEDEF_(0x800C0507L)

#define INET_E_DOWNLOAD_BLOCKED_BY_CSP               _HRESULT_TYPEDEF_(0x800C0508L)

#define INET_E_ERROR_LAST                INET_E_DOWNLOAD_BLOCKED_BY_CSP

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _LPPERSISTMONIKER_DEFINED
#define _LPPERSISTMONIKER_DEFINED

/*****************************************************************************
 * IPersistMoniker interface
 */
#ifndef __IPersistMoniker_INTERFACE_DEFINED__
#define __IPersistMoniker_INTERFACE_DEFINED__

typedef IPersistMoniker *LPPERSISTMONIKER;

EXTERN_C const IID IID_IPersistMoniker;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IPersistMonikerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPersistMoniker *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPersistMoniker *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPersistMoniker *This);

    /*** IPersistMoniker methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        IPersistMoniker *This,
        CLSID *pClassID);

    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        IPersistMoniker *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        IPersistMoniker *This,
        BOOL fFullyAvailable,
        IMoniker *pimkName,
        LPBC pibc,
        DWORD grfMode);

    HRESULT (STDMETHODCALLTYPE *Save)(
        IPersistMoniker *This,
        IMoniker *pimkName,
        LPBC pbc,
        BOOL fRemember);

    HRESULT (STDMETHODCALLTYPE *SaveCompleted)(
        IPersistMoniker *This,
        IMoniker *pimkName,
        LPBC pibc);

    HRESULT (STDMETHODCALLTYPE *GetCurMoniker)(
        IPersistMoniker *This,
        IMoniker **ppimkName);

    END_INTERFACE
} IPersistMonikerVtbl;

interface IPersistMoniker {
    CONST_VTBL IPersistMonikerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IPersistMoniker_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IPersistMoniker_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IPersistMoniker_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IPersistMoniker methods ***/
#define IPersistMoniker_GetClassID(This,pClassID) \
    ((This)->lpVtbl->GetClassID(This,pClassID))
#define IPersistMoniker_IsDirty(This) \
    ((This)->lpVtbl->IsDirty(This))
#define IPersistMoniker_Load(This,fFullyAvailable,pimkName,pibc,grfMode) \
    ((This)->lpVtbl->Load(This,fFullyAvailable,pimkName,pibc,grfMode))
#define IPersistMoniker_Save(This,pimkName,pbc,fRemember) \
    ((This)->lpVtbl->Save(This,pimkName,pbc,fRemember))
#define IPersistMoniker_SaveCompleted(This,pimkName,pibc) \
    ((This)->lpVtbl->SaveCompleted(This,pimkName,pibc))
#define IPersistMoniker_GetCurMoniker(This,ppimkName) \
    ((This)->lpVtbl->GetCurMoniker(This,ppimkName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IPersistMoniker_INTERFACE_DEFINED__ */

#endif

#ifndef _LPMONIKERPROP_DEFINED
#define _LPMONIKERPROP_DEFINED

/*****************************************************************************
 * IMonikerProp interface
 */
#ifndef __IMonikerProp_INTERFACE_DEFINED__
#define __IMonikerProp_INTERFACE_DEFINED__

typedef IMonikerProp *LPMONIKERPROP;

typedef enum __POIDL_urlmon_tag_00000002 {
    MIMETYPEPROP = 0x0,
    USE_SRC_URL = 0x1,
    CLASSIDPROP = 0x2,
    TRUSTEDDOWNLOADPROP = 0x3,
    POPUPLEVELPROP = 0x4
} MONIKERPROPERTY;

EXTERN_C const IID IID_IMonikerProp;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IMonikerPropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMonikerProp *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMonikerProp *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMonikerProp *This);

    /*** IMonikerProp methods ***/
    HRESULT (STDMETHODCALLTYPE *PutProperty)(
        IMonikerProp *This,
        MONIKERPROPERTY mkp,
        LPCWSTR val);

    END_INTERFACE
} IMonikerPropVtbl;

interface IMonikerProp {
    CONST_VTBL IMonikerPropVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMonikerProp_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IMonikerProp_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IMonikerProp_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IMonikerProp methods ***/
#define IMonikerProp_PutProperty(This,mkp,val) \
    ((This)->lpVtbl->PutProperty(This,mkp,val))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IMonikerProp_INTERFACE_DEFINED__ */

#endif

#ifndef _LPBINDPROTOCOL_DEFINED
#define _LPBINDPROTOCOL_DEFINED

/*****************************************************************************
 * IBindProtocol interface
 */
#ifndef __IBindProtocol_INTERFACE_DEFINED__
#define __IBindProtocol_INTERFACE_DEFINED__

typedef IBindProtocol *LPBINDPROTOCOL;

EXTERN_C const IID IID_IBindProtocol;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindProtocolVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindProtocol *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindProtocol *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindProtocol *This);

    /*** IBindProtocol methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateBinding)(
        IBindProtocol *This,
        LPCWSTR szUrl,
        IBindCtx *pbc,
        IBinding **ppb);

    END_INTERFACE
} IBindProtocolVtbl;

interface IBindProtocol {
    CONST_VTBL IBindProtocolVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindProtocol_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindProtocol_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindProtocol_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindProtocol methods ***/
#define IBindProtocol_CreateBinding(This,szUrl,pbc,ppb) \
    ((This)->lpVtbl->CreateBinding(This,szUrl,pbc,ppb))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBindProtocol_INTERFACE_DEFINED__ */

#endif

#ifndef _LPBINDING_DEFINED
#define _LPBINDING_DEFINED

/*****************************************************************************
 * IBinding interface
 */
#ifndef __IBinding_INTERFACE_DEFINED__
#define __IBinding_INTERFACE_DEFINED__

typedef IBinding *LPBINDING;

EXTERN_C const IID IID_IBinding;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBinding *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBinding *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBinding *This);

    /*** IBinding methods ***/
    HRESULT (STDMETHODCALLTYPE *Abort)(
        IBinding *This);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IBinding *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IBinding *This);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IBinding *This,
        LONG nPriority);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBinding *This,
        LONG *pnPriority);

    HRESULT (STDMETHODCALLTYPE *GetBindResult)(
        IBinding *This,
        CLSID *pclsidProtocol,
        DWORD *pdwResult,
        LPOLESTR *pszResult,
        DWORD *pdwReserved);

    END_INTERFACE
} IBindingVtbl;

interface IBinding {
    CONST_VTBL IBindingVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBinding_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBinding_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBinding_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBinding methods ***/
#define IBinding_Abort(This) \
    ((This)->lpVtbl->Abort(This))
#define IBinding_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IBinding_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define IBinding_SetPriority(This,nPriority) \
    ((This)->lpVtbl->SetPriority(This,nPriority))
#define IBinding_GetPriority(This,pnPriority) \
    ((This)->lpVtbl->GetPriority(This,pnPriority))
#define IBinding_GetBindResult(This,pclsidProtocol,pdwResult,pszResult,pdwReserved) \
    ((This)->lpVtbl->GetBindResult(This,pclsidProtocol,pdwResult,pszResult,pdwReserved))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBinding_RemoteGetBindResult_Proxy(
    IBinding *This,
    CLSID *pclsidProtocol,
    DWORD *pdwResult,
    LPOLESTR *pszResult,
    DWORD dwReserved);

void __RPC_STUB IBinding_RemoteGetBindResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBinding_GetBindResult_Proxy(
    CLSID *pclsidProtocol,
    DWORD *pdwResult,
    LPOLESTR *pszResult,
    DWORD *pdwReserved);
HRESULT IBinding_GetBindResult_Stub(
    CLSID *pclsidProtocol,
    DWORD *pdwResult,
    LPOLESTR *pszResult,
    DWORD dwReserved);
#endif /* __IBinding_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#ifndef _LPBINDSTATUSCALLBACK_DEFINED
#define _LPBINDSTATUSCALLBACK_DEFINED

/*****************************************************************************
 * IBindStatusCallback interface
 */
#ifndef __IBindStatusCallback_INTERFACE_DEFINED__
#define __IBindStatusCallback_INTERFACE_DEFINED__

typedef IBindStatusCallback *LPBINDSTATUSCALLBACK;

typedef enum __POIDL_urlmon_tag_00000003 {
    BINDVERB_GET = 0x0,
    BINDVERB_POST = 0x1,
    BINDVERB_PUT = 0x2,
    BINDVERB_CUSTOM = 0x3,
    BINDVERB_RESERVED1 = 0x4
} BINDVERB;

typedef enum __POIDL_urlmon_tag_00000004 {
    BINDINFOF_URLENCODESTGMEDDATA = 0x1,
    BINDINFOF_URLENCODEDEXTRAINFO = 0x2
} BINDINFOF;

typedef enum __POIDL_urlmon_tag_00000005 {
    BINDF_ASYNCHRONOUS = 0x1,
    BINDF_ASYNCSTORAGE = 0x2,
    BINDF_NOPROGRESSIVERENDERING = 0x4,
    BINDF_OFFLINEOPERATION = 0x8,
    BINDF_GETNEWESTVERSION = 0x10,
    BINDF_NOWRITECACHE = 0x20,
    BINDF_NEEDFILE = 0x40,
    BINDF_PULLDATA = 0x80,
    BINDF_IGNORESECURITYPROBLEM = 0x100,
    BINDF_RESYNCHRONIZE = 0x200,
    BINDF_HYPERLINK = 0x400,
    BINDF_NO_UI = 0x800,
    BINDF_SILENTOPERATION = 0x1000,
    BINDF_PRAGMA_NO_CACHE = 0x2000,
    BINDF_GETCLASSOBJECT = 0x4000,
    BINDF_RESERVED_1 = 0x8000,
    BINDF_FREE_THREADED = 0x10000,
    BINDF_DIRECT_READ = 0x20000,
    BINDF_FORMS_SUBMIT = 0x40000,
    BINDF_GETFROMCACHE_IF_NET_FAIL = 0x80000,
    BINDF_FROMURLMON = 0x100000,
    BINDF_FWD_BACK = 0x200000,
    BINDF_PREFERDEFAULTHANDLER = 0x400000,
    BINDF_ENFORCERESTRICTED = 0x800000,
    BINDF_RESERVED_2 = 0x80000000,
    BINDF_RESERVED_3 = 0x1000000,
    BINDF_RESERVED_4 = 0x2000000,
    BINDF_RESERVED_5 = 0x4000000,
    BINDF_RESERVED_6 = 0x8000000,
    BINDF_RESERVED_7 = 0x40000000,
    BINDF_RESERVED_8 = 0x20000000
} BINDF;

typedef enum __POIDL_urlmon_tag_00000006 {
    URL_ENCODING_NONE = 0x0,
    URL_ENCODING_ENABLE_UTF8 = 0x10000000,
    URL_ENCODING_DISABLE_UTF8 = 0x20000000
} URL_ENCODING;

typedef struct _tagBINDINFO {
    ULONG cbSize;
    LPWSTR szExtraInfo;
    STGMEDIUM stgmedData;
    DWORD grfBindInfoF;
    DWORD dwBindVerb;
    LPWSTR szCustomVerb;
    DWORD cbstgmedData;
    DWORD dwOptions;
    DWORD dwOptionsFlags;
    DWORD dwCodePage;
    SECURITY_ATTRIBUTES securityAttributes;
    IID iid;
    IUnknown *pUnk;
    DWORD dwReserved;
} BINDINFO;

typedef struct _REMSECURITY_ATTRIBUTES {
    DWORD nLength;
    DWORD lpSecurityDescriptor;
    BOOL bInheritHandle;
} REMSECURITY_ATTRIBUTES;
typedef struct _REMSECURITY_ATTRIBUTES *PREMSECURITY_ATTRIBUTES;
typedef struct _REMSECURITY_ATTRIBUTES *LPREMSECURITY_ATTRIBUTES;

typedef struct _tagRemBINDINFO {
    ULONG cbSize;
    LPWSTR szExtraInfo;
    DWORD grfBindInfoF;
    DWORD dwBindVerb;
    LPWSTR szCustomVerb;
    DWORD cbstgmedData;
    DWORD dwOptions;
    DWORD dwOptionsFlags;
    DWORD dwCodePage;
    REMSECURITY_ATTRIBUTES securityAttributes;
    IID iid;
    IUnknown *pUnk;
    DWORD dwReserved;
} RemBINDINFO;

typedef struct tagRemFORMATETC {
    DWORD cfFormat;
    DWORD ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
} RemFORMATETC;
typedef struct tagRemFORMATETC *LPREMFORMATETC;

typedef enum __POIDL_urlmon_tag_00000007 {
    BINDINFO_OPTIONS_WININETFLAG = 0x10000,
    BINDINFO_OPTIONS_ENABLE_UTF8 = 0x20000,
    BINDINFO_OPTIONS_DISABLE_UTF8 = 0x40000,
    BINDINFO_OPTIONS_USE_IE_ENCODING = 0x80000,
    BINDINFO_OPTIONS_BINDTOOBJECT = 0x100000,
    BINDINFO_OPTIONS_SECURITYOPTOUT = 0x200000,
    BINDINFO_OPTIONS_IGNOREMIMETEXTPLAIN = 0x400000,
    BINDINFO_OPTIONS_USEBINDSTRINGCREDS = 0x800000,
    BINDINFO_OPTIONS_IGNOREHTTPHTTPSREDIRECTS = 0x1000000,
    BINDINFO_OPTIONS_IGNORE_SSLERRORS_ONCE = 0x2000000,
    BINDINFO_WPC_DOWNLOADBLOCKED = 0x8000000,
    BINDINFO_WPC_LOGGING_ENABLED = 0x10000000,
    BINDINFO_OPTIONS_ALLOWCONNECTDATA = 0x20000000,
    BINDINFO_OPTIONS_DISABLEAUTOREDIRECTS = 0x40000000,
    BINDINFO_OPTIONS_SHDOCVW_NAVIGATE = (int)0x80000000
} BINDINFO_OPTIONS;

typedef enum __POIDL_urlmon_tag_00000008 {
    BSCF_FIRSTDATANOTIFICATION = 0x1,
    BSCF_INTERMEDIATEDATANOTIFICATION = 0x2,
    BSCF_LASTDATANOTIFICATION = 0x4,
    BSCF_DATAFULLYAVAILABLE = 0x8,
    BSCF_AVAILABLEDATASIZEUNKNOWN = 0x10,
    BSCF_SKIPDRAINDATAFORFILEURLS = 0x20,
    BSCF_64BITLENGTHDOWNLOAD = 0x40
} BSCF;

typedef enum tagBINDSTATUS {
    BINDSTATUS_FINDINGRESOURCE = 1,
    BINDSTATUS_CONNECTING = 2,
    BINDSTATUS_REDIRECTING = 3,
    BINDSTATUS_BEGINDOWNLOADDATA = 4,
    BINDSTATUS_DOWNLOADINGDATA = 5,
    BINDSTATUS_ENDDOWNLOADDATA = 6,
    BINDSTATUS_BEGINDOWNLOADCOMPONENTS = 7,
    BINDSTATUS_INSTALLINGCOMPONENTS = 8,
    BINDSTATUS_ENDDOWNLOADCOMPONENTS = 9,
    BINDSTATUS_USINGCACHEDCOPY = 10,
    BINDSTATUS_SENDINGREQUEST = 11,
    BINDSTATUS_CLASSIDAVAILABLE = 12,
    BINDSTATUS_MIMETYPEAVAILABLE = 13,
    BINDSTATUS_CACHEFILENAMEAVAILABLE = 14,
    BINDSTATUS_BEGINSYNCOPERATION = 15,
    BINDSTATUS_ENDSYNCOPERATION = 16,
    BINDSTATUS_BEGINUPLOADDATA = 17,
    BINDSTATUS_UPLOADINGDATA = 18,
    BINDSTATUS_ENDUPLOADDATA = 19,
    BINDSTATUS_PROTOCOLCLASSID = 20,
    BINDSTATUS_ENCODING = 21,
    BINDSTATUS_VERIFIEDMIMETYPEAVAILABLE = 22,
    BINDSTATUS_CLASSINSTALLLOCATION = 23,
    BINDSTATUS_DECODING = 24,
    BINDSTATUS_LOADINGMIMEHANDLER = 25,
    BINDSTATUS_CONTENTDISPOSITIONATTACH = 26,
    BINDSTATUS_FILTERREPORTMIMETYPE = 27,
    BINDSTATUS_CLSIDCANINSTANTIATE = 28,
    BINDSTATUS_IUNKNOWNAVAILABLE = 29,
    BINDSTATUS_DIRECTBIND = 30,
    BINDSTATUS_RAWMIMETYPE = 31,
    BINDSTATUS_PROXYDETECTING = 32,
    BINDSTATUS_ACCEPTRANGES = 33,
    BINDSTATUS_COOKIE_SENT = 34,
    BINDSTATUS_COMPACT_POLICY_RECEIVED = 35,
    BINDSTATUS_COOKIE_SUPPRESSED = 36,
    BINDSTATUS_COOKIE_STATE_UNKNOWN = 37,
    BINDSTATUS_COOKIE_STATE_ACCEPT = 38,
    BINDSTATUS_COOKIE_STATE_REJECT = 39,
    BINDSTATUS_COOKIE_STATE_PROMPT = 40,
    BINDSTATUS_COOKIE_STATE_LEASH = 41,
    BINDSTATUS_COOKIE_STATE_DOWNGRADE = 42,
    BINDSTATUS_POLICY_HREF = 43,
    BINDSTATUS_P3P_HEADER = 44,
    BINDSTATUS_SESSION_COOKIE_RECEIVED = 45,
    BINDSTATUS_PERSISTENT_COOKIE_RECEIVED = 46,
    BINDSTATUS_SESSION_COOKIES_ALLOWED = 47,
    BINDSTATUS_CACHECONTROL = 48,
    BINDSTATUS_CONTENTDISPOSITIONFILENAME = 49,
    BINDSTATUS_MIMETEXTPLAINMISMATCH = 50,
    BINDSTATUS_PUBLISHERAVAILABLE = 51,
    BINDSTATUS_DISPLAYNAMEAVAILABLE = 52,
    BINDSTATUS_SSLUX_NAVBLOCKED = 53,
    BINDSTATUS_SERVER_MIMETYPEAVAILABLE = 54,
    BINDSTATUS_SNIFFED_CLASSIDAVAILABLE = 55,
    BINDSTATUS_64BIT_PROGRESS = 56,
    BINDSTATUS_LAST = BINDSTATUS_64BIT_PROGRESS,
    BINDSTATUS_RESERVED_0 = 57,
    BINDSTATUS_RESERVED_1 = 58,
    BINDSTATUS_RESERVED_2 = 59,
    BINDSTATUS_RESERVED_3 = 60,
    BINDSTATUS_RESERVED_4 = 61,
    BINDSTATUS_RESERVED_5 = 62,
    BINDSTATUS_RESERVED_6 = 63,
    BINDSTATUS_RESERVED_7 = 64,
    BINDSTATUS_RESERVED_8 = 65,
    BINDSTATUS_RESERVED_9 = 66,
    BINDSTATUS_RESERVED_A = 67,
    BINDSTATUS_RESERVED_B = 68,
    BINDSTATUS_RESERVED_C = 69,
    BINDSTATUS_RESERVED_D = 70,
    BINDSTATUS_RESERVED_E = 71,
    BINDSTATUS_RESERVED_F = 72,
    BINDSTATUS_RESERVED_10 = 73,
    BINDSTATUS_RESERVED_11 = 74,
    BINDSTATUS_RESERVED_12 = 75,
    BINDSTATUS_RESERVED_13 = 76,
    BINDSTATUS_RESERVED_14 = 77,
    BINDSTATUS_LAST_PRIVATE = BINDSTATUS_RESERVED_14
} BINDSTATUS;

EXTERN_C const IID IID_IBindStatusCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindStatusCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindStatusCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindStatusCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindStatusCallback *This);

    /*** IBindStatusCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnStartBinding)(
        IBindStatusCallback *This,
        DWORD dwReserved,
        IBinding *pib);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBindStatusCallback *This,
        LONG *pnPriority);

    HRESULT (STDMETHODCALLTYPE *OnLowResource)(
        IBindStatusCallback *This,
        DWORD reserved);

    HRESULT (STDMETHODCALLTYPE *OnProgress)(
        IBindStatusCallback *This,
        ULONG ulProgress,
        ULONG ulProgressMax,
        ULONG ulStatusCode,
        LPCWSTR szStatusText);

    HRESULT (STDMETHODCALLTYPE *OnStopBinding)(
        IBindStatusCallback *This,
        HRESULT hresult,
        LPCWSTR szError);

    HRESULT (STDMETHODCALLTYPE *GetBindInfo)(
        IBindStatusCallback *This,
        DWORD *grfBINDF,
        BINDINFO *pbindinfo);

    HRESULT (STDMETHODCALLTYPE *OnDataAvailable)(
        IBindStatusCallback *This,
        DWORD grfBSCF,
        DWORD dwSize,
        FORMATETC *pformatetc,
        STGMEDIUM *pstgmed);

    HRESULT (STDMETHODCALLTYPE *OnObjectAvailable)(
        IBindStatusCallback *This,
        REFIID riid,
        IUnknown *punk);

    END_INTERFACE
} IBindStatusCallbackVtbl;

interface IBindStatusCallback {
    CONST_VTBL IBindStatusCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindStatusCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindStatusCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindStatusCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindStatusCallback methods ***/
#define IBindStatusCallback_OnStartBinding(This,dwReserved,pib) \
    ((This)->lpVtbl->OnStartBinding(This,dwReserved,pib))
#define IBindStatusCallback_GetPriority(This,pnPriority) \
    ((This)->lpVtbl->GetPriority(This,pnPriority))
#define IBindStatusCallback_OnLowResource(This,reserved) \
    ((This)->lpVtbl->OnLowResource(This,reserved))
#define IBindStatusCallback_OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText) \
    ((This)->lpVtbl->OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText))
#define IBindStatusCallback_OnStopBinding(This,hresult,szError) \
    ((This)->lpVtbl->OnStopBinding(This,hresult,szError))
#define IBindStatusCallback_GetBindInfo(This,grfBINDF,pbindinfo) \
    ((This)->lpVtbl->GetBindInfo(This,grfBINDF,pbindinfo))
#define IBindStatusCallback_OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed) \
    ((This)->lpVtbl->OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed))
#define IBindStatusCallback_OnObjectAvailable(This,riid,punk) \
    ((This)->lpVtbl->OnObjectAvailable(This,riid,punk))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBindStatusCallback_RemoteGetBindInfo_Proxy(
    IBindStatusCallback *This,
    DWORD *grfBINDF,
    RemBINDINFO *pbindinfo,
    RemSTGMEDIUM *pstgmed);

void __RPC_STUB IBindStatusCallback_RemoteGetBindInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IBindStatusCallback_RemoteOnDataAvailable_Proxy(
    IBindStatusCallback *This,
    DWORD grfBSCF,
    DWORD dwSize,
    RemFORMATETC *pformatetc,
    RemSTGMEDIUM *pstgmed);

void __RPC_STUB IBindStatusCallback_RemoteOnDataAvailable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBindStatusCallback_GetBindInfo_Proxy(
    DWORD *grfBINDF,
    BINDINFO *pbindinfo);
HRESULT IBindStatusCallback_GetBindInfo_Stub(
    DWORD *grfBINDF,
    RemBINDINFO *pbindinfo,
    RemSTGMEDIUM *pstgmed);
HRESULT IBindStatusCallback_OnDataAvailable_Proxy(
    DWORD grfBSCF,
    DWORD dwSize,
    FORMATETC *pformatetc,
    STGMEDIUM *pstgmed);
HRESULT IBindStatusCallback_OnDataAvailable_Stub(
    DWORD grfBSCF,
    DWORD dwSize,
    RemFORMATETC *pformatetc,
    RemSTGMEDIUM *pstgmed);
#endif /* __IBindStatusCallback_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _LPBINDSTATUSCALLBACKEX_DEFINED
#define _LPBINDSTATUSCALLBACKEX_DEFINED

/*****************************************************************************
 * IBindStatusCallbackEx interface
 */
#ifndef __IBindStatusCallbackEx_INTERFACE_DEFINED__
#define __IBindStatusCallbackEx_INTERFACE_DEFINED__

typedef IBindStatusCallbackEx *LPBINDSTATUSCALLBACKEX;

typedef enum __POIDL_urlmon_tag_00000009 {
    BINDF2_DISABLEBASICOVERHTTP = 0x1,
    BINDF2_DISABLEAUTOCOOKIEHANDLING = 0x2,
    BINDF2_READ_DATA_GREATER_THAN_4GB = 0x4,
    BINDF2_DISABLE_HTTP_REDIRECT_XSECURITYID = 0x8,
    BINDF2_SETDOWNLOADMODE = 0x20,
    BINDF2_DISABLE_HTTP_REDIRECT_CACHING = 0x40,
    BINDF2_KEEP_CALLBACK_MODULE_LOADED = 0x80,
    BINDF2_ALLOW_PROXY_CRED_PROMPT = 0x100,
    BINDF2_RESERVED_17 = 0x200,
    BINDF2_RESERVED_16 = 0x400,
    BINDF2_RESERVED_15 = 0x800,
    BINDF2_RESERVED_14 = 0x1000,
    BINDF2_RESERVED_13 = 0x2000,
    BINDF2_RESERVED_12 = 0x4000,
    BINDF2_RESERVED_11 = 0x8000,
    BINDF2_RESERVED_10 = 0x10000,
    BINDF2_RESERVED_F = 0x20000,
    BINDF2_RESERVED_E = 0x40000,
    BINDF2_RESERVED_D = 0x80000,
    BINDF2_RESERVED_C = 0x100000,
    BINDF2_RESERVED_B = 0x200000,
    BINDF2_RESERVED_A = 0x400000,
    BINDF2_RESERVED_9 = 0x800000,
    BINDF2_RESERVED_8 = 0x1000000,
    BINDF2_RESERVED_7 = 0x2000000,
    BINDF2_RESERVED_6 = 0x4000000,
    BINDF2_RESERVED_5 = 0x8000000,
    BINDF2_RESERVED_4 = 0x10000000,
    BINDF2_RESERVED_3 = 0x20000000,
    BINDF2_RESERVED_2 = 0x40000000,
    BINDF2_RESERVED_1 = 0x80000000
} BINDF2;

EXTERN_C const IID IID_IBindStatusCallbackEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindStatusCallbackExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindStatusCallbackEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindStatusCallbackEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindStatusCallbackEx *This);

    /*** IBindStatusCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnStartBinding)(
        IBindStatusCallbackEx *This,
        DWORD dwReserved,
        IBinding *pib);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IBindStatusCallbackEx *This,
        LONG *pnPriority);

    HRESULT (STDMETHODCALLTYPE *OnLowResource)(
        IBindStatusCallbackEx *This,
        DWORD reserved);

    HRESULT (STDMETHODCALLTYPE *OnProgress)(
        IBindStatusCallbackEx *This,
        ULONG ulProgress,
        ULONG ulProgressMax,
        ULONG ulStatusCode,
        LPCWSTR szStatusText);

    HRESULT (STDMETHODCALLTYPE *OnStopBinding)(
        IBindStatusCallbackEx *This,
        HRESULT hresult,
        LPCWSTR szError);

    HRESULT (STDMETHODCALLTYPE *GetBindInfo)(
        IBindStatusCallbackEx *This,
        DWORD *grfBINDF,
        BINDINFO *pbindinfo);

    HRESULT (STDMETHODCALLTYPE *OnDataAvailable)(
        IBindStatusCallbackEx *This,
        DWORD grfBSCF,
        DWORD dwSize,
        FORMATETC *pformatetc,
        STGMEDIUM *pstgmed);

    HRESULT (STDMETHODCALLTYPE *OnObjectAvailable)(
        IBindStatusCallbackEx *This,
        REFIID riid,
        IUnknown *punk);

    /*** IBindStatusCallbackEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBindInfoEx)(
        IBindStatusCallbackEx *This,
        DWORD *grfBINDF,
        BINDINFO *pbindinfo,
        DWORD *grfBINDF2,
        DWORD *pdwReserved);

    END_INTERFACE
} IBindStatusCallbackExVtbl;

interface IBindStatusCallbackEx {
    CONST_VTBL IBindStatusCallbackExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindStatusCallbackEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindStatusCallbackEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindStatusCallbackEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindStatusCallback methods ***/
#define IBindStatusCallbackEx_OnStartBinding(This,dwReserved,pib) \
    ((This)->lpVtbl->OnStartBinding(This,dwReserved,pib))
#define IBindStatusCallbackEx_GetPriority(This,pnPriority) \
    ((This)->lpVtbl->GetPriority(This,pnPriority))
#define IBindStatusCallbackEx_OnLowResource(This,reserved) \
    ((This)->lpVtbl->OnLowResource(This,reserved))
#define IBindStatusCallbackEx_OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText) \
    ((This)->lpVtbl->OnProgress(This,ulProgress,ulProgressMax,ulStatusCode,szStatusText))
#define IBindStatusCallbackEx_OnStopBinding(This,hresult,szError) \
    ((This)->lpVtbl->OnStopBinding(This,hresult,szError))
#define IBindStatusCallbackEx_GetBindInfo(This,grfBINDF,pbindinfo) \
    ((This)->lpVtbl->GetBindInfo(This,grfBINDF,pbindinfo))
#define IBindStatusCallbackEx_OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed) \
    ((This)->lpVtbl->OnDataAvailable(This,grfBSCF,dwSize,pformatetc,pstgmed))
#define IBindStatusCallbackEx_OnObjectAvailable(This,riid,punk) \
    ((This)->lpVtbl->OnObjectAvailable(This,riid,punk))
/*** IBindStatusCallbackEx methods ***/
#define IBindStatusCallbackEx_GetBindInfoEx(This,grfBINDF,pbindinfo,grfBINDF2,pdwReserved) \
    ((This)->lpVtbl->GetBindInfoEx(This,grfBINDF,pbindinfo,grfBINDF2,pdwReserved))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBindStatusCallbackEx_RemoteGetBindInfoEx_Proxy(
    IBindStatusCallbackEx *This,
    DWORD *grfBINDF,
    RemBINDINFO *pbindinfo,
    RemSTGMEDIUM *pstgmed,
    DWORD *grfBINDF2,
    DWORD *pdwReserved);

void __RPC_STUB IBindStatusCallbackEx_RemoteGetBindInfoEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBindStatusCallbackEx_GetBindInfoEx_Proxy(
    DWORD *grfBINDF,
    BINDINFO *pbindinfo,
    DWORD *grfBINDF2,
    DWORD *pdwReserved);
HRESULT IBindStatusCallbackEx_GetBindInfoEx_Stub(
    DWORD *grfBINDF,
    RemBINDINFO *pbindinfo,
    RemSTGMEDIUM *pstgmed,
    DWORD *grfBINDF2,
    DWORD *pdwReserved);
#endif /* __IBindStatusCallbackEx_INTERFACE_DEFINED__ */

#endif

#ifndef _LPAUTHENTICATION_DEFINED
#define _LPAUTHENTICATION_DEFINED

/*****************************************************************************
 * IAuthenticate interface
 */
#ifndef __IAuthenticate_INTERFACE_DEFINED__
#define __IAuthenticate_INTERFACE_DEFINED__

typedef IAuthenticate *LPAUTHENTICATION;

EXTERN_C const IID IID_IAuthenticate;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAuthenticateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAuthenticate *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAuthenticate *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAuthenticate *This);

    /*** IAuthenticate methods ***/
    HRESULT (STDMETHODCALLTYPE *Authenticate)(
        IAuthenticate *This,
        HWND *phwnd,
        LPWSTR *pszUsername,
        LPWSTR *pszPassword);

    END_INTERFACE
} IAuthenticateVtbl;

interface IAuthenticate {
    CONST_VTBL IAuthenticateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAuthenticate_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAuthenticate_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAuthenticate_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAuthenticate methods ***/
#define IAuthenticate_Authenticate(This,phwnd,pszUsername,pszPassword) \
    ((This)->lpVtbl->Authenticate(This,phwnd,pszUsername,pszPassword))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAuthenticate_INTERFACE_DEFINED__ */

#endif

#ifndef _LPAUTHENTICATIONEX_DEFINED
#define _LPAUTHENTICATIONEX_DEFINED

/*****************************************************************************
 * IAuthenticateEx interface
 */
#ifndef __IAuthenticateEx_INTERFACE_DEFINED__
#define __IAuthenticateEx_INTERFACE_DEFINED__

typedef IAuthenticateEx *LPAUTHENTICATIONEX;

typedef enum __POIDL_urlmon_tag_0000000A {
    AUTHENTICATEF_PROXY = 0x1,
    AUTHENTICATEF_BASIC = 0x2,
    AUTHENTICATEF_HTTP = 0x4
} AUTHENTICATEF;

typedef struct _tagAUTHENTICATEINFO {
    DWORD dwFlags;
    DWORD dwReserved;
} AUTHENTICATEINFO;

EXTERN_C const IID IID_IAuthenticateEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IAuthenticateExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAuthenticateEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAuthenticateEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAuthenticateEx *This);

    /*** IAuthenticate methods ***/
    HRESULT (STDMETHODCALLTYPE *Authenticate)(
        IAuthenticateEx *This,
        HWND *phwnd,
        LPWSTR *pszUsername,
        LPWSTR *pszPassword);

    /*** IAuthenticateEx methods ***/
    HRESULT (STDMETHODCALLTYPE *AuthenticateEx)(
        IAuthenticateEx *This,
        HWND *phwnd,
        LPWSTR *pszUsername,
        LPWSTR *pszPassword,
        AUTHENTICATEINFO *pauthinfo);

    END_INTERFACE
} IAuthenticateExVtbl;

interface IAuthenticateEx {
    CONST_VTBL IAuthenticateExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAuthenticateEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IAuthenticateEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IAuthenticateEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IAuthenticate methods ***/
#define IAuthenticateEx_Authenticate(This,phwnd,pszUsername,pszPassword) \
    ((This)->lpVtbl->Authenticate(This,phwnd,pszUsername,pszPassword))
/*** IAuthenticateEx methods ***/
#define IAuthenticateEx_AuthenticateEx(This,phwnd,pszUsername,pszPassword,pauthinfo) \
    ((This)->lpVtbl->AuthenticateEx(This,phwnd,pszUsername,pszPassword,pauthinfo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IAuthenticateEx_INTERFACE_DEFINED__ */

#endif

#ifndef _LPHTTPNEGOTIATE_DEFINED
#define _LPHTTPNEGOTIATE_DEFINED

/*****************************************************************************
 * IHttpNegotiate interface
 */
#ifndef __IHttpNegotiate_INTERFACE_DEFINED__
#define __IHttpNegotiate_INTERFACE_DEFINED__

typedef IHttpNegotiate *LPHTTPNEGOTIATE;

EXTERN_C const IID IID_IHttpNegotiate;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHttpNegotiateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHttpNegotiate *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHttpNegotiate *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHttpNegotiate *This);

    /*** IHttpNegotiate methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginningTransaction)(
        IHttpNegotiate *This,
        LPCWSTR szURL,
        LPCWSTR szHeaders,
        DWORD dwReserved,
        LPWSTR *pszAdditionalHeaders);

    HRESULT (STDMETHODCALLTYPE *OnResponse)(
        IHttpNegotiate *This,
        DWORD dwResponseCode,
        LPCWSTR szResponseHeaders,
        LPCWSTR szRequestHeaders,
        LPWSTR *pszAdditionalRequestHeaders);

    END_INTERFACE
} IHttpNegotiateVtbl;

interface IHttpNegotiate {
    CONST_VTBL IHttpNegotiateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHttpNegotiate_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHttpNegotiate_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHttpNegotiate_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHttpNegotiate methods ***/
#define IHttpNegotiate_BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders) \
    ((This)->lpVtbl->BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders))
#define IHttpNegotiate_OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders) \
    ((This)->lpVtbl->OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHttpNegotiate_INTERFACE_DEFINED__ */

#endif

#ifndef _LPHTTPNEGOTIATE2_DEFINED
#define _LPHTTPNEGOTIATE2_DEFINED

/*****************************************************************************
 * IHttpNegotiate2 interface
 */
#ifndef __IHttpNegotiate2_INTERFACE_DEFINED__
#define __IHttpNegotiate2_INTERFACE_DEFINED__

typedef IHttpNegotiate2 *LPHTTPNEGOTIATE2;

EXTERN_C const IID IID_IHttpNegotiate2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHttpNegotiate2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHttpNegotiate2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHttpNegotiate2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHttpNegotiate2 *This);

    /*** IHttpNegotiate methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginningTransaction)(
        IHttpNegotiate2 *This,
        LPCWSTR szURL,
        LPCWSTR szHeaders,
        DWORD dwReserved,
        LPWSTR *pszAdditionalHeaders);

    HRESULT (STDMETHODCALLTYPE *OnResponse)(
        IHttpNegotiate2 *This,
        DWORD dwResponseCode,
        LPCWSTR szResponseHeaders,
        LPCWSTR szRequestHeaders,
        LPWSTR *pszAdditionalRequestHeaders);

    /*** IHttpNegotiate2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRootSecurityId)(
        IHttpNegotiate2 *This,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    END_INTERFACE
} IHttpNegotiate2Vtbl;

interface IHttpNegotiate2 {
    CONST_VTBL IHttpNegotiate2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHttpNegotiate2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHttpNegotiate2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHttpNegotiate2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHttpNegotiate methods ***/
#define IHttpNegotiate2_BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders) \
    ((This)->lpVtbl->BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders))
#define IHttpNegotiate2_OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders) \
    ((This)->lpVtbl->OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders))
/*** IHttpNegotiate2 methods ***/
#define IHttpNegotiate2_GetRootSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetRootSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHttpNegotiate2_INTERFACE_DEFINED__ */

#endif

#ifndef _LPHTTPNEGOTIATE3_DEFINED
#define _LPHTTPNEGOTIATE3_DEFINED

/*****************************************************************************
 * IHttpNegotiate3 interface
 */
#ifndef __IHttpNegotiate3_INTERFACE_DEFINED__
#define __IHttpNegotiate3_INTERFACE_DEFINED__

typedef IHttpNegotiate3 *LPHTTPNEGOTIATE3;

EXTERN_C const IID IID_IHttpNegotiate3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHttpNegotiate3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHttpNegotiate3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHttpNegotiate3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHttpNegotiate3 *This);

    /*** IHttpNegotiate methods ***/
    HRESULT (STDMETHODCALLTYPE *BeginningTransaction)(
        IHttpNegotiate3 *This,
        LPCWSTR szURL,
        LPCWSTR szHeaders,
        DWORD dwReserved,
        LPWSTR *pszAdditionalHeaders);

    HRESULT (STDMETHODCALLTYPE *OnResponse)(
        IHttpNegotiate3 *This,
        DWORD dwResponseCode,
        LPCWSTR szResponseHeaders,
        LPCWSTR szRequestHeaders,
        LPWSTR *pszAdditionalRequestHeaders);

    /*** IHttpNegotiate2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRootSecurityId)(
        IHttpNegotiate3 *This,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    /*** IHttpNegotiate3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSerializedClientCertContext)(
        IHttpNegotiate3 *This,
        BYTE **ppbCert,
        DWORD *pcbCert);

    END_INTERFACE
} IHttpNegotiate3Vtbl;

interface IHttpNegotiate3 {
    CONST_VTBL IHttpNegotiate3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHttpNegotiate3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHttpNegotiate3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHttpNegotiate3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IHttpNegotiate methods ***/
#define IHttpNegotiate3_BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders) \
    ((This)->lpVtbl->BeginningTransaction(This,szURL,szHeaders,dwReserved,pszAdditionalHeaders))
#define IHttpNegotiate3_OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders) \
    ((This)->lpVtbl->OnResponse(This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders))
/*** IHttpNegotiate2 methods ***/
#define IHttpNegotiate3_GetRootSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetRootSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved))
/*** IHttpNegotiate3 methods ***/
#define IHttpNegotiate3_GetSerializedClientCertContext(This,ppbCert,pcbCert) \
    ((This)->lpVtbl->GetSerializedClientCertContext(This,ppbCert,pcbCert))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHttpNegotiate3_INTERFACE_DEFINED__ */

#endif

#ifndef _LPWININETFILESTREAM_DEFINED
#define _LPWININETFILESTREAM_DEFINED

/*****************************************************************************
 * IWinInetFileStream interface
 */
#ifndef __IWinInetFileStream_INTERFACE_DEFINED__
#define __IWinInetFileStream_INTERFACE_DEFINED__

typedef IWinInetFileStream *LPWININETFILESTREAM;

EXTERN_C const IID IID_IWinInetFileStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWinInetFileStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinInetFileStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinInetFileStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinInetFileStream *This);

    /*** IWinInetFileStream methods ***/
    HRESULT (STDMETHODCALLTYPE *SetHandleForUnlock)(
        IWinInetFileStream *This,
        DWORD_PTR hWinInetLockHandle,
        DWORD_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetDeleteFile)(
        IWinInetFileStream *This,
        DWORD_PTR dwReserved);

    END_INTERFACE
} IWinInetFileStreamVtbl;

interface IWinInetFileStream {
    CONST_VTBL IWinInetFileStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWinInetFileStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWinInetFileStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWinInetFileStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWinInetFileStream methods ***/
#define IWinInetFileStream_SetHandleForUnlock(This,hWinInetLockHandle,dwReserved) \
    ((This)->lpVtbl->SetHandleForUnlock(This,hWinInetLockHandle,dwReserved))
#define IWinInetFileStream_SetDeleteFile(This,dwReserved) \
    ((This)->lpVtbl->SetDeleteFile(This,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWinInetFileStream_INTERFACE_DEFINED__ */

#endif

#ifndef _LPWINDOWFORBINDINGUI_DEFINED
#define _LPWINDOWFORBINDINGUI_DEFINED

/*****************************************************************************
 * IWindowForBindingUI interface
 */
#ifndef __IWindowForBindingUI_INTERFACE_DEFINED__
#define __IWindowForBindingUI_INTERFACE_DEFINED__

typedef IWindowForBindingUI *LPWINDOWFORBINDINGUI;

EXTERN_C const IID IID_IWindowForBindingUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWindowForBindingUIVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWindowForBindingUI *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWindowForBindingUI *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWindowForBindingUI *This);

    /*** IWindowForBindingUI methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IWindowForBindingUI *This,
        REFGUID rguidReason,
        HWND *phwnd);

    END_INTERFACE
} IWindowForBindingUIVtbl;

interface IWindowForBindingUI {
    CONST_VTBL IWindowForBindingUIVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWindowForBindingUI_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWindowForBindingUI_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWindowForBindingUI_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWindowForBindingUI methods ***/
#define IWindowForBindingUI_GetWindow(This,rguidReason,phwnd) \
    ((This)->lpVtbl->GetWindow(This,rguidReason,phwnd))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWindowForBindingUI_INTERFACE_DEFINED__ */

#endif

#ifndef _LPCODEINSTALL_DEFINED
#define _LPCODEINSTALL_DEFINED

/*****************************************************************************
 * ICodeInstall interface
 */
#ifndef __ICodeInstall_INTERFACE_DEFINED__
#define __ICodeInstall_INTERFACE_DEFINED__

typedef ICodeInstall *LPCODEINSTALL;

typedef enum __POIDL_urlmon_tag_0000000B {
    CIP_DISK_FULL = 0,
    CIP_ACCESS_DENIED = 1,
    CIP_NEWER_VERSION_EXISTS = 2,
    CIP_OLDER_VERSION_EXISTS = 3,
    CIP_NAME_CONFLICT = 4,
    CIP_TRUST_VERIFICATION_COMPONENT_MISSING = 5,
    CIP_EXE_SELF_REGISTERATION_TIMEOUT = 6,
    CIP_UNSAFE_TO_ABORT = 7,
    CIP_NEED_REBOOT = 8,
    CIP_NEED_REBOOT_UI_PERMISSION = 9
} CIP_STATUS;

EXTERN_C const IID IID_ICodeInstall;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICodeInstallVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICodeInstall *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICodeInstall *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICodeInstall *This);

    /*** IWindowForBindingUI methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        ICodeInstall *This,
        REFGUID rguidReason,
        HWND *phwnd);

    /*** ICodeInstall methods ***/
    HRESULT (STDMETHODCALLTYPE *OnCodeInstallProblem)(
        ICodeInstall *This,
        ULONG ulStatusCode,
        LPCWSTR szDestination,
        LPCWSTR szSource,
        DWORD dwReserved);

    END_INTERFACE
} ICodeInstallVtbl;

interface ICodeInstall {
    CONST_VTBL ICodeInstallVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICodeInstall_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICodeInstall_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICodeInstall_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWindowForBindingUI methods ***/
#define ICodeInstall_GetWindow(This,rguidReason,phwnd) \
    ((This)->lpVtbl->GetWindow(This,rguidReason,phwnd))
/*** ICodeInstall methods ***/
#define ICodeInstall_OnCodeInstallProblem(This,ulStatusCode,szDestination,szSource,dwReserved) \
    ((This)->lpVtbl->OnCodeInstallProblem(This,ulStatusCode,szDestination,szSource,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICodeInstall_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if (_WIN32_IE >= _WIN32_IE_IE70)

#ifndef _LPUri_DEFINED
#define _LPUri_DEFINED

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

/*****************************************************************************
 * IUri interface
 */
#ifndef __IUri_INTERFACE_DEFINED__
#define __IUri_INTERFACE_DEFINED__

typedef enum __POIDL_urlmon_tag_0000000C {
    Uri_PROPERTY_ABSOLUTE_URI = 0,
    Uri_PROPERTY_STRING_START = Uri_PROPERTY_ABSOLUTE_URI,
    Uri_PROPERTY_AUTHORITY = 1,
    Uri_PROPERTY_DISPLAY_URI = 2,
    Uri_PROPERTY_DOMAIN = 3,
    Uri_PROPERTY_EXTENSION = 4,
    Uri_PROPERTY_FRAGMENT = 5,
    Uri_PROPERTY_HOST = 6,
    Uri_PROPERTY_PASSWORD = 7,
    Uri_PROPERTY_PATH = 8,
    Uri_PROPERTY_PATH_AND_QUERY = 9,
    Uri_PROPERTY_QUERY = 10,
    Uri_PROPERTY_RAW_URI = 11,
    Uri_PROPERTY_SCHEME_NAME = 12,
    Uri_PROPERTY_USER_INFO = 13,
    Uri_PROPERTY_USER_NAME = 14,
    Uri_PROPERTY_STRING_LAST = Uri_PROPERTY_USER_NAME,
    Uri_PROPERTY_HOST_TYPE = 15,
    Uri_PROPERTY_DWORD_START = Uri_PROPERTY_HOST_TYPE,
    Uri_PROPERTY_PORT = 16,
    Uri_PROPERTY_SCHEME = 17,
    Uri_PROPERTY_ZONE = 18,
    Uri_PROPERTY_DWORD_LAST = Uri_PROPERTY_ZONE
} Uri_PROPERTY;

typedef enum __POIDL_urlmon_tag_0000000D {
    Uri_HOST_UNKNOWN = 0,
    Uri_HOST_DNS = 1,
    Uri_HOST_IPV4 = 2,
    Uri_HOST_IPV6 = 3,
    Uri_HOST_IDN = 4
} Uri_HOST_TYPE;

EXTERN_C const IID IID_IUri;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUriVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUri *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUri *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUri *This);

    /*** IUri methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPropertyBSTR)(
        IUri *This,
        Uri_PROPERTY uriProp,
        BSTR *pbstrProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPropertyLength)(
        IUri *This,
        Uri_PROPERTY uriProp,
        DWORD *pcchProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetPropertyDWORD)(
        IUri *This,
        Uri_PROPERTY uriProp,
        DWORD *pdwProperty,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *HasProperty)(
        IUri *This,
        Uri_PROPERTY uriProp,
        BOOL *pfHasProperty);

    HRESULT (STDMETHODCALLTYPE *GetAbsoluteUri)(
        IUri *This,
        BSTR *pbstrAbsoluteUri);

    HRESULT (STDMETHODCALLTYPE *GetAuthority)(
        IUri *This,
        BSTR *pbstrAuthority);

    HRESULT (STDMETHODCALLTYPE *GetDisplayUri)(
        IUri *This,
        BSTR *pbstrDisplayString);

    HRESULT (STDMETHODCALLTYPE *GetDomain)(
        IUri *This,
        BSTR *pbstrDomain);

    HRESULT (STDMETHODCALLTYPE *GetExtension)(
        IUri *This,
        BSTR *pbstrExtension);

    HRESULT (STDMETHODCALLTYPE *GetFragment)(
        IUri *This,
        BSTR *pbstrFragment);

    HRESULT (STDMETHODCALLTYPE *GetHost)(
        IUri *This,
        BSTR *pbstrHost);

    HRESULT (STDMETHODCALLTYPE *GetPassword)(
        IUri *This,
        BSTR *pbstrPassword);

    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IUri *This,
        BSTR *pbstrPath);

    HRESULT (STDMETHODCALLTYPE *GetPathAndQuery)(
        IUri *This,
        BSTR *pbstrPathAndQuery);

    HRESULT (STDMETHODCALLTYPE *GetQuery)(
        IUri *This,
        BSTR *pbstrQuery);

    HRESULT (STDMETHODCALLTYPE *GetRawUri)(
        IUri *This,
        BSTR *pbstrRawUri);

    HRESULT (STDMETHODCALLTYPE *GetSchemeName)(
        IUri *This,
        BSTR *pbstrSchemeName);

    HRESULT (STDMETHODCALLTYPE *GetUserInfo)(
        IUri *This,
        BSTR *pbstrUserInfo);

    HRESULT (STDMETHODCALLTYPE *GetUserName)(
        IUri *This,
        BSTR *pbstrUserName);

    HRESULT (STDMETHODCALLTYPE *GetHostType)(
        IUri *This,
        DWORD *pdwHostType);

    HRESULT (STDMETHODCALLTYPE *GetPort)(
        IUri *This,
        DWORD *pdwPort);

    HRESULT (STDMETHODCALLTYPE *GetScheme)(
        IUri *This,
        DWORD *pdwScheme);

    HRESULT (STDMETHODCALLTYPE *GetZone)(
        IUri *This,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        IUri *This,
        LPDWORD pdwFlags);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IUri *This,
        IUri *pUri,
        BOOL *pfEqual);

    END_INTERFACE
} IUriVtbl;

interface IUri {
    CONST_VTBL IUriVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUri_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUri_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUri_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUri methods ***/
#define IUri_GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) \
    ((This)->lpVtbl->GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags))
#define IUri_GetPropertyLength(This,uriProp,pcchProperty,dwFlags) \
    ((This)->lpVtbl->GetPropertyLength(This,uriProp,pcchProperty,dwFlags))
#define IUri_GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) \
    ((This)->lpVtbl->GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags))
#define IUri_HasProperty(This,uriProp,pfHasProperty) \
    ((This)->lpVtbl->HasProperty(This,uriProp,pfHasProperty))
#define IUri_GetAbsoluteUri(This,pbstrAbsoluteUri) \
    ((This)->lpVtbl->GetAbsoluteUri(This,pbstrAbsoluteUri))
#define IUri_GetAuthority(This,pbstrAuthority) \
    ((This)->lpVtbl->GetAuthority(This,pbstrAuthority))
#define IUri_GetDisplayUri(This,pbstrDisplayString) \
    ((This)->lpVtbl->GetDisplayUri(This,pbstrDisplayString))
#define IUri_GetDomain(This,pbstrDomain) \
    ((This)->lpVtbl->GetDomain(This,pbstrDomain))
#define IUri_GetExtension(This,pbstrExtension) \
    ((This)->lpVtbl->GetExtension(This,pbstrExtension))
#define IUri_GetFragment(This,pbstrFragment) \
    ((This)->lpVtbl->GetFragment(This,pbstrFragment))
#define IUri_GetHost(This,pbstrHost) \
    ((This)->lpVtbl->GetHost(This,pbstrHost))
#define IUri_GetPassword(This,pbstrPassword) \
    ((This)->lpVtbl->GetPassword(This,pbstrPassword))
#define IUri_GetPath(This,pbstrPath) \
    ((This)->lpVtbl->GetPath(This,pbstrPath))
#define IUri_GetPathAndQuery(This,pbstrPathAndQuery) \
    ((This)->lpVtbl->GetPathAndQuery(This,pbstrPathAndQuery))
#define IUri_GetQuery(This,pbstrQuery) \
    ((This)->lpVtbl->GetQuery(This,pbstrQuery))
#define IUri_GetRawUri(This,pbstrRawUri) \
    ((This)->lpVtbl->GetRawUri(This,pbstrRawUri))
#define IUri_GetSchemeName(This,pbstrSchemeName) \
    ((This)->lpVtbl->GetSchemeName(This,pbstrSchemeName))
#define IUri_GetUserInfo(This,pbstrUserInfo) \
    ((This)->lpVtbl->GetUserInfo(This,pbstrUserInfo))
#define IUri_GetUserName(This,pbstrUserName) \
    ((This)->lpVtbl->GetUserName(This,pbstrUserName))
#define IUri_GetHostType(This,pdwHostType) \
    ((This)->lpVtbl->GetHostType(This,pdwHostType))
#define IUri_GetPort(This,pdwPort) \
    ((This)->lpVtbl->GetPort(This,pdwPort))
#define IUri_GetScheme(This,pdwScheme) \
    ((This)->lpVtbl->GetScheme(This,pdwScheme))
#define IUri_GetZone(This,pdwZone) \
    ((This)->lpVtbl->GetZone(This,pdwZone))
#define IUri_GetProperties(This,pdwFlags) \
    ((This)->lpVtbl->GetProperties(This,pdwFlags))
#define IUri_IsEqual(This,pUri,pfEqual) \
    ((This)->lpVtbl->IsEqual(This,pUri,pfEqual))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUri_INTERFACE_DEFINED__ */

STDAPI CreateUri( LPCWSTR pwzURI,
                  DWORD dwFlags,
                  DWORD_PTR dwReserved,   // must be 0
                  IUri** ppURI);
STDAPI CreateUriWithFragment(
                  LPCWSTR pwzURI,
                  LPCWSTR pwzFragment,        // can be NULL
                  DWORD dwFlags,
                  DWORD_PTR dwReserved,   // must be 0
                  IUri** ppURI);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI CreateUriFromMultiByteString(
           LPCSTR    pszANSIInputUri,
               DWORD     dwEncodingFlags, // ORed set of Uri_ENCODING_ flags
               DWORD     dwCodePage,
               DWORD     dwCreateFlags,
     DWORD_PTR dwReserved,   // must be 0
       IUri**    ppUri);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
//The following flags are used with IUri::GetProperties.
#define Uri_HAS_ABSOLUTE_URI    (1 << Uri_PROPERTY_ABSOLUTE_URI)
#define Uri_HAS_AUTHORITY       (1 << Uri_PROPERTY_AUTHORITY)
#define Uri_HAS_DISPLAY_URI     (1 << Uri_PROPERTY_DISPLAY_URI)
#define Uri_HAS_DOMAIN          (1 << Uri_PROPERTY_DOMAIN)
#define Uri_HAS_EXTENSION       (1 << Uri_PROPERTY_EXTENSION)
#define Uri_HAS_FRAGMENT        (1 << Uri_PROPERTY_FRAGMENT)
#define Uri_HAS_HOST            (1 << Uri_PROPERTY_HOST)
#define Uri_HAS_PASSWORD        (1 << Uri_PROPERTY_PASSWORD)
#define Uri_HAS_PATH            (1 << Uri_PROPERTY_PATH)
#define Uri_HAS_QUERY           (1 << Uri_PROPERTY_QUERY)
#define Uri_HAS_RAW_URI         (1 << Uri_PROPERTY_RAW_URI)
#define Uri_HAS_SCHEME_NAME     (1 << Uri_PROPERTY_SCHEME_NAME)
#define Uri_HAS_USER_NAME       (1 << Uri_PROPERTY_USER_NAME)
#define Uri_HAS_PATH_AND_QUERY  (1 << Uri_PROPERTY_PATH_AND_QUERY)
#define Uri_HAS_USER_INFO       (1 << Uri_PROPERTY_USER_INFO)
#define Uri_HAS_HOST_TYPE       (1 << Uri_PROPERTY_HOST_TYPE)
#define Uri_HAS_PORT            (1 << Uri_PROPERTY_PORT)
#define Uri_HAS_SCHEME          (1 << Uri_PROPERTY_SCHEME)
#define Uri_HAS_ZONE            (1 << Uri_PROPERTY_ZONE)
//The following public Uri_CREATE flags may be passed in
//through the dwFlags parameter of the CreateUri functions.
//Note that ALLOW_RELATIVE and ALLOW_IMPLICIT_WILDCARD_SCHEME are mutually exclusive and may not be passed together.
#define Uri_CREATE_ALLOW_RELATIVE                 0x00000001    // When the scheme is unspecified and not implicit file, assume relative.
#define Uri_CREATE_ALLOW_IMPLICIT_WILDCARD_SCHEME 0x00000002    // When the scheme is unspecified and not implicit file, assume wildcard.
#define Uri_CREATE_ALLOW_IMPLICIT_FILE_SCHEME     0x00000004    // When the scheme is unspecified and it starts with X: or \\ assume its a file scheme.
#define Uri_CREATE_NOFRAG                         0x00000008    // If there's a query string don't look for a fragment
#define Uri_CREATE_NO_CANONICALIZE                0x00000010    // Do not canonicalize the scheme, host, authority, or path
#define Uri_CREATE_CANONICALIZE                   0x00000100    // DEFAULT: Canonicalize the scheme, host, authority, and path
#define Uri_CREATE_FILE_USE_DOS_PATH              0x00000020    // Use DOS path compat mode for file URI creation
#define Uri_CREATE_DECODE_EXTRA_INFO              0x00000040    // Beta2 DEFAULT: Decode the contents of query and fragment, then re-encode reserved characters
#define Uri_CREATE_NO_DECODE_EXTRA_INFO           0x00000080    // Beta1 DEFAULT: Neither decode nor re-encode any part of the query or fragment
#define Uri_CREATE_CRACK_UNKNOWN_SCHEMES          0x00000200    // Beta2 DEFAULT: Heirarchical URIs with present and unknown schemes will be treated like heirarchical URIs
#define Uri_CREATE_NO_CRACK_UNKNOWN_SCHEMES       0x00000400    // Beta1 DEFAULT: Heirarchical URIs with present and unknown schemes will be treated like opaque URIs
#define Uri_CREATE_PRE_PROCESS_HTML_URI           0x00000800    // DEFAULT:  Perform pre-processing on the URI to remove control characters and whitespace as if the URI comes from the raw href value of an HTML page.
#define Uri_CREATE_NO_PRE_PROCESS_HTML_URI        0x00001000    // Don't perform pre-processing to remove control characters and whitespace as appropriate.
#define Uri_CREATE_IE_SETTINGS                    0x00002000    // Use IE registry settings for such things as whether or not to use IDN.
#define Uri_CREATE_NO_IE_SETTINGS                 0x00004000    // DEFAULT: Don't use IE registry settings.
#define Uri_CREATE_NO_ENCODE_FORBIDDEN_CHARACTERS 0x00008000    // Don't percent-encode characters that are forbidden by the RFC.
#define Uri_CREATE_NORMALIZE_INTL_CHARACTERS      0x00010000    // Percent encode all extended unicode charcters, then decode all percent encoded extended unicode characters (except those identified as dangerous)
#define Uri_CREATE_CANONICALIZE_ABSOLUTE          0x00020000    // Generate a fully UTF-8 encoded value for absoluteUri

//The following flags may be passed in through the dwFlags
//parameter of the IUri::GetPropertyBSTR or IUri::GetPropertyLength functions.
//The following flags apply only to the property Uri_PROPERTY_DISPLAY_URI:
#define Uri_DISPLAY_NO_FRAGMENT               0x00000001    // Exclude fragment from the DisplayUri, if one exists
#define Uri_PUNYCODE_IDN_HOST                 0x00000002    // Show the hostname encoded as punycode inside the Host, Domain, or AbsoluteUri properties, if the Uri is IDN
#define Uri_DISPLAY_IDN_HOST                  0x00000004    // Show the hostname encoded as punycode or Unicode as it would appear in the DisplayUri property. This applies to the Host, Domain, and AbsoluteUri properties.
#define Uri_DISPLAY_NO_PUNYCODE               0x00000008    // Show the hostname encoded as Unicode from the DisplayUri, if the Uri is IDN

// The following are Uri_ENCODING_ flags for use with the function CreateUriFromMultiByteString
#define Uri_ENCODING_USER_INFO_AND_PATH_IS_PERCENT_ENCODED_UTF8  0x00000001
#define Uri_ENCODING_USER_INFO_AND_PATH_IS_CP                    0x00000002
#define Uri_ENCODING_HOST_IS_IDN                                 0x00000004
#define Uri_ENCODING_HOST_IS_PERCENT_ENCODED_UTF8                0x00000008
#define Uri_ENCODING_HOST_IS_PERCENT_ENCODED_CP                  0x00000010
#define Uri_ENCODING_QUERY_AND_FRAGMENT_IS_PERCENT_ENCODED_UTF8  0x00000020
#define Uri_ENCODING_QUERY_AND_FRAGMENT_IS_CP                    0x00000040
#define Uri_ENCODING_RFC (Uri_ENCODING_USER_INFO_AND_PATH_IS_PERCENT_ENCODED_UTF8 | Uri_ENCODING_HOST_IS_PERCENT_ENCODED_UTF8 | Uri_ENCODING_QUERY_AND_FRAGMENT_IS_PERCENT_ENCODED_UTF8)

//The following flags may be passed in through the dwUriBuilderFlags
//parameter of the IUriBuilder::CreateUri
#define UriBuilder_USE_ORIGINAL_FLAGS             0x00000001    // Use the create flags from the underlying IUri if they are available.

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IUriContainer interface
 */
#ifndef __IUriContainer_INTERFACE_DEFINED__
#define __IUriContainer_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUriContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUriContainerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUriContainer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUriContainer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUriContainer *This);

    /*** IUriContainer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIUri)(
        IUriContainer *This,
        IUri **ppIUri);

    END_INTERFACE
} IUriContainerVtbl;

interface IUriContainer {
    CONST_VTBL IUriContainerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUriContainer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUriContainer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUriContainer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUriContainer methods ***/
#define IUriContainer_GetIUri(This,ppIUri) \
    ((This)->lpVtbl->GetIUri(This,ppIUri))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUriContainer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUriBuilder interface
 */
#ifndef __IUriBuilder_INTERFACE_DEFINED__
#define __IUriBuilder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUriBuilder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUriBuilderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUriBuilder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUriBuilder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUriBuilder *This);

    /*** IUriBuilder methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateUriSimple)(
        IUriBuilder *This,
        DWORD dwAllowEncodingPropertyMask,
        DWORD_PTR dwReserved,
        IUri **ppIUri);

    HRESULT (STDMETHODCALLTYPE *CreateUri)(
        IUriBuilder *This,
        DWORD dwCreateFlags,
        DWORD dwAllowEncodingPropertyMask,
        DWORD_PTR dwReserved,
        IUri **ppIUri);

    HRESULT (STDMETHODCALLTYPE *CreateUriWithFlags)(
        IUriBuilder *This,
        DWORD dwCreateFlags,
        DWORD dwUriBuilderFlags,
        DWORD dwAllowEncodingPropertyMask,
        DWORD_PTR dwReserved,
        IUri **ppIUri);

    HRESULT (STDMETHODCALLTYPE *GetIUri)(
        IUriBuilder *This,
        IUri **ppIUri);

    HRESULT (STDMETHODCALLTYPE *SetIUri)(
        IUriBuilder *This,
        IUri *pIUri);

    HRESULT (STDMETHODCALLTYPE *GetFragment)(
        IUriBuilder *This,
        DWORD *pcchFragment,
        LPCWSTR *ppwzFragment);

    HRESULT (STDMETHODCALLTYPE *GetHost)(
        IUriBuilder *This,
        DWORD *pcchHost,
        LPCWSTR *ppwzHost);

    HRESULT (STDMETHODCALLTYPE *GetPassword)(
        IUriBuilder *This,
        DWORD *pcchPassword,
        LPCWSTR *ppwzPassword);

    HRESULT (STDMETHODCALLTYPE *GetPath)(
        IUriBuilder *This,
        DWORD *pcchPath,
        LPCWSTR *ppwzPath);

    HRESULT (STDMETHODCALLTYPE *GetPort)(
        IUriBuilder *This,
        BOOL *pfHasPort,
        DWORD *pdwPort);

    HRESULT (STDMETHODCALLTYPE *GetQuery)(
        IUriBuilder *This,
        DWORD *pcchQuery,
        LPCWSTR *ppwzQuery);

    HRESULT (STDMETHODCALLTYPE *GetSchemeName)(
        IUriBuilder *This,
        DWORD *pcchSchemeName,
        LPCWSTR *ppwzSchemeName);

    HRESULT (STDMETHODCALLTYPE *GetUserName)(
        IUriBuilder *This,
        DWORD *pcchUserName,
        LPCWSTR *ppwzUserName);

    HRESULT (STDMETHODCALLTYPE *SetFragment)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *SetHost)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *SetPassword)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *SetPath)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *SetPort)(
        IUriBuilder *This,
        BOOL fHasPort,
        DWORD dwNewValue);

    HRESULT (STDMETHODCALLTYPE *SetQuery)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *SetSchemeName)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *SetUserName)(
        IUriBuilder *This,
        LPCWSTR pwzNewValue);

    HRESULT (STDMETHODCALLTYPE *RemoveProperties)(
        IUriBuilder *This,
        DWORD dwPropertyMask);

    HRESULT (STDMETHODCALLTYPE *HasBeenModified)(
        IUriBuilder *This,
        BOOL *pfModified);

    END_INTERFACE
} IUriBuilderVtbl;

interface IUriBuilder {
    CONST_VTBL IUriBuilderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUriBuilder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUriBuilder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUriBuilder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUriBuilder methods ***/
#define IUriBuilder_CreateUriSimple(This,dwAllowEncodingPropertyMask,dwReserved,ppIUri) \
    ((This)->lpVtbl->CreateUriSimple(This,dwAllowEncodingPropertyMask,dwReserved,ppIUri))
#define IUriBuilder_CreateUri(This,dwCreateFlags,dwAllowEncodingPropertyMask,dwReserved,ppIUri) \
    ((This)->lpVtbl->CreateUri(This,dwCreateFlags,dwAllowEncodingPropertyMask,dwReserved,ppIUri))
#define IUriBuilder_CreateUriWithFlags(This,dwCreateFlags,dwUriBuilderFlags,dwAllowEncodingPropertyMask,dwReserved,ppIUri) \
    ((This)->lpVtbl->CreateUriWithFlags(This,dwCreateFlags,dwUriBuilderFlags,dwAllowEncodingPropertyMask,dwReserved,ppIUri))
#define IUriBuilder_GetIUri(This,ppIUri) \
    ((This)->lpVtbl->GetIUri(This,ppIUri))
#define IUriBuilder_SetIUri(This,pIUri) \
    ((This)->lpVtbl->SetIUri(This,pIUri))
#define IUriBuilder_GetFragment(This,pcchFragment,ppwzFragment) \
    ((This)->lpVtbl->GetFragment(This,pcchFragment,ppwzFragment))
#define IUriBuilder_GetHost(This,pcchHost,ppwzHost) \
    ((This)->lpVtbl->GetHost(This,pcchHost,ppwzHost))
#define IUriBuilder_GetPassword(This,pcchPassword,ppwzPassword) \
    ((This)->lpVtbl->GetPassword(This,pcchPassword,ppwzPassword))
#define IUriBuilder_GetPath(This,pcchPath,ppwzPath) \
    ((This)->lpVtbl->GetPath(This,pcchPath,ppwzPath))
#define IUriBuilder_GetPort(This,pfHasPort,pdwPort) \
    ((This)->lpVtbl->GetPort(This,pfHasPort,pdwPort))
#define IUriBuilder_GetQuery(This,pcchQuery,ppwzQuery) \
    ((This)->lpVtbl->GetQuery(This,pcchQuery,ppwzQuery))
#define IUriBuilder_GetSchemeName(This,pcchSchemeName,ppwzSchemeName) \
    ((This)->lpVtbl->GetSchemeName(This,pcchSchemeName,ppwzSchemeName))
#define IUriBuilder_GetUserName(This,pcchUserName,ppwzUserName) \
    ((This)->lpVtbl->GetUserName(This,pcchUserName,ppwzUserName))
#define IUriBuilder_SetFragment(This,pwzNewValue) \
    ((This)->lpVtbl->SetFragment(This,pwzNewValue))
#define IUriBuilder_SetHost(This,pwzNewValue) \
    ((This)->lpVtbl->SetHost(This,pwzNewValue))
#define IUriBuilder_SetPassword(This,pwzNewValue) \
    ((This)->lpVtbl->SetPassword(This,pwzNewValue))
#define IUriBuilder_SetPath(This,pwzNewValue) \
    ((This)->lpVtbl->SetPath(This,pwzNewValue))
#define IUriBuilder_SetPort(This,fHasPort,dwNewValue) \
    ((This)->lpVtbl->SetPort(This,fHasPort,dwNewValue))
#define IUriBuilder_SetQuery(This,pwzNewValue) \
    ((This)->lpVtbl->SetQuery(This,pwzNewValue))
#define IUriBuilder_SetSchemeName(This,pwzNewValue) \
    ((This)->lpVtbl->SetSchemeName(This,pwzNewValue))
#define IUriBuilder_SetUserName(This,pwzNewValue) \
    ((This)->lpVtbl->SetUserName(This,pwzNewValue))
#define IUriBuilder_RemoveProperties(This,dwPropertyMask) \
    ((This)->lpVtbl->RemoveProperties(This,dwPropertyMask))
#define IUriBuilder_HasBeenModified(This,pfModified) \
    ((This)->lpVtbl->HasBeenModified(This,pfModified))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUriBuilder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IUriBuilderFactory interface
 */
#ifndef __IUriBuilderFactory_INTERFACE_DEFINED__
#define __IUriBuilderFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IUriBuilderFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IUriBuilderFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUriBuilderFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUriBuilderFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUriBuilderFactory *This);

    /*** IUriBuilderFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateIUriBuilder)(
        IUriBuilderFactory *This,
        DWORD dwFlags,
        DWORD_PTR dwReserved,
        IUriBuilder **ppIUriBuilder);

    HRESULT (STDMETHODCALLTYPE *CreateInitializedIUriBuilder)(
        IUriBuilderFactory *This,
        DWORD dwFlags,
        DWORD_PTR dwReserved,
        IUriBuilder **ppIUriBuilder);

    END_INTERFACE
} IUriBuilderFactoryVtbl;

interface IUriBuilderFactory {
    CONST_VTBL IUriBuilderFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUriBuilderFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IUriBuilderFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IUriBuilderFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IUriBuilderFactory methods ***/
#define IUriBuilderFactory_CreateIUriBuilder(This,dwFlags,dwReserved,ppIUriBuilder) \
    ((This)->lpVtbl->CreateIUriBuilder(This,dwFlags,dwReserved,ppIUriBuilder))
#define IUriBuilderFactory_CreateInitializedIUriBuilder(This,dwFlags,dwReserved,ppIUriBuilder) \
    ((This)->lpVtbl->CreateInitializedIUriBuilder(This,dwFlags,dwReserved,ppIUriBuilder))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IUriBuilderFactory_INTERFACE_DEFINED__ */

STDAPI CreateIUriBuilder(
         IUri         *pIUri,
             DWORD         dwFlags,
             DWORD_PTR     dwReserved,
         IUriBuilder **ppIUriBuilder
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _LPWININETINFO_DEFINED
#define _LPWININETINFO_DEFINED

/*****************************************************************************
 * IWinInetInfo interface
 */
#ifndef __IWinInetInfo_INTERFACE_DEFINED__
#define __IWinInetInfo_INTERFACE_DEFINED__

typedef IWinInetInfo *LPWININETINFO;

EXTERN_C const IID IID_IWinInetInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWinInetInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinInetInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinInetInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinInetInfo *This);

    /*** IWinInetInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryOption)(
        IWinInetInfo *This,
        DWORD dwOption,
        LPVOID pBuffer,
        DWORD *pcbBuf);

    END_INTERFACE
} IWinInetInfoVtbl;

interface IWinInetInfo {
    CONST_VTBL IWinInetInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWinInetInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWinInetInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWinInetInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWinInetInfo methods ***/
#define IWinInetInfo_QueryOption(This,dwOption,pBuffer,pcbBuf) \
    ((This)->lpVtbl->QueryOption(This,dwOption,pBuffer,pcbBuf))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IWinInetInfo_RemoteQueryOption_Proxy(
    IWinInetInfo *This,
    DWORD dwOption,
    BYTE *pBuffer,
    DWORD *pcbBuf);

void __RPC_STUB IWinInetInfo_RemoteQueryOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IWinInetInfo_QueryOption_Proxy(
    DWORD dwOption,
    LPVOID pBuffer,
    DWORD *pcbBuf);
HRESULT IWinInetInfo_QueryOption_Stub(
    DWORD dwOption,
    BYTE *pBuffer,
    DWORD *pcbBuf);
#endif /* __IWinInetInfo_INTERFACE_DEFINED__ */

#endif

#define WININETINFO_OPTION_LOCK_HANDLE 65534

#ifndef _LPHTTPSECURITY_DEFINED
#define _LPHTTPSECURITY_DEFINED

/*****************************************************************************
 * IHttpSecurity interface
 */
#ifndef __IHttpSecurity_INTERFACE_DEFINED__
#define __IHttpSecurity_INTERFACE_DEFINED__

typedef IHttpSecurity *LPHTTPSECURITY;

EXTERN_C const IID IID_IHttpSecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IHttpSecurityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IHttpSecurity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IHttpSecurity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IHttpSecurity *This);

    /*** IWindowForBindingUI methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IHttpSecurity *This,
        REFGUID rguidReason,
        HWND *phwnd);

    /*** IHttpSecurity methods ***/
    HRESULT (STDMETHODCALLTYPE *OnSecurityProblem)(
        IHttpSecurity *This,
        DWORD dwProblem);

    END_INTERFACE
} IHttpSecurityVtbl;

interface IHttpSecurity {
    CONST_VTBL IHttpSecurityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IHttpSecurity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IHttpSecurity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IHttpSecurity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWindowForBindingUI methods ***/
#define IHttpSecurity_GetWindow(This,rguidReason,phwnd) \
    ((This)->lpVtbl->GetWindow(This,rguidReason,phwnd))
/*** IHttpSecurity methods ***/
#define IHttpSecurity_OnSecurityProblem(This,dwProblem) \
    ((This)->lpVtbl->OnSecurityProblem(This,dwProblem))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IHttpSecurity_INTERFACE_DEFINED__ */

#endif

#ifndef _LPWININETHTTPINFO_DEFINED
#define _LPWININETHTTPINFO_DEFINED

/*****************************************************************************
 * IWinInetHttpInfo interface
 */
#ifndef __IWinInetHttpInfo_INTERFACE_DEFINED__
#define __IWinInetHttpInfo_INTERFACE_DEFINED__

typedef IWinInetHttpInfo *LPWININETHTTPINFO;

EXTERN_C const IID IID_IWinInetHttpInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWinInetHttpInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinInetHttpInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinInetHttpInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinInetHttpInfo *This);

    /*** IWinInetInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryOption)(
        IWinInetHttpInfo *This,
        DWORD dwOption,
        LPVOID pBuffer,
        DWORD *pcbBuf);

    /*** IWinInetHttpInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInfo)(
        IWinInetHttpInfo *This,
        DWORD dwOption,
        LPVOID pBuffer,
        DWORD *pcbBuf,
        DWORD *pdwFlags,
        DWORD *pdwReserved);

    END_INTERFACE
} IWinInetHttpInfoVtbl;

interface IWinInetHttpInfo {
    CONST_VTBL IWinInetHttpInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWinInetHttpInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWinInetHttpInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWinInetHttpInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWinInetInfo methods ***/
#define IWinInetHttpInfo_QueryOption(This,dwOption,pBuffer,pcbBuf) \
    ((This)->lpVtbl->QueryOption(This,dwOption,pBuffer,pcbBuf))
/*** IWinInetHttpInfo methods ***/
#define IWinInetHttpInfo_QueryInfo(This,dwOption,pBuffer,pcbBuf,pdwFlags,pdwReserved) \
    ((This)->lpVtbl->QueryInfo(This,dwOption,pBuffer,pcbBuf,pdwFlags,pdwReserved))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IWinInetHttpInfo_RemoteQueryInfo_Proxy(
    IWinInetHttpInfo *This,
    DWORD dwOption,
    BYTE *pBuffer,
    DWORD *pcbBuf,
    DWORD *pdwFlags,
    DWORD *pdwReserved);

void __RPC_STUB IWinInetHttpInfo_RemoteQueryInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IWinInetHttpInfo_QueryInfo_Proxy(
    DWORD dwOption,
    LPVOID pBuffer,
    DWORD *pcbBuf,
    DWORD *pdwFlags,
    DWORD *pdwReserved);
HRESULT IWinInetHttpInfo_QueryInfo_Stub(
    DWORD dwOption,
    BYTE *pBuffer,
    DWORD *pcbBuf,
    DWORD *pdwFlags,
    DWORD *pdwReserved);
#endif /* __IWinInetHttpInfo_INTERFACE_DEFINED__ */

#endif

#ifndef _LPWININETHTTPTIMEOUTS_DEFINED
#define _LPWININETHTTPTIMEOUTS_DEFINED

/*****************************************************************************
 * IWinInetHttpTimeouts interface
 */
#ifndef __IWinInetHttpTimeouts_INTERFACE_DEFINED__
#define __IWinInetHttpTimeouts_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWinInetHttpTimeouts;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWinInetHttpTimeoutsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinInetHttpTimeouts *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinInetHttpTimeouts *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinInetHttpTimeouts *This);

    /*** IWinInetHttpTimeouts methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRequestTimeouts)(
        IWinInetHttpTimeouts *This,
        DWORD *pdwConnectTimeout,
        DWORD *pdwSendTimeout,
        DWORD *pdwReceiveTimeout);

    END_INTERFACE
} IWinInetHttpTimeoutsVtbl;

interface IWinInetHttpTimeouts {
    CONST_VTBL IWinInetHttpTimeoutsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWinInetHttpTimeouts_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWinInetHttpTimeouts_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWinInetHttpTimeouts_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWinInetHttpTimeouts methods ***/
#define IWinInetHttpTimeouts_GetRequestTimeouts(This,pdwConnectTimeout,pdwSendTimeout,pdwReceiveTimeout) \
    ((This)->lpVtbl->GetRequestTimeouts(This,pdwConnectTimeout,pdwSendTimeout,pdwReceiveTimeout))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWinInetHttpTimeouts_INTERFACE_DEFINED__ */

#endif

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

#ifndef _LPWININETCACHEHINTS_DEFINED
#define _LPWININETCACHEHINTS_DEFINED

/*****************************************************************************
 * IWinInetCacheHints interface
 */
#ifndef __IWinInetCacheHints_INTERFACE_DEFINED__
#define __IWinInetCacheHints_INTERFACE_DEFINED__

typedef IWinInetCacheHints *LPWININETCACHEHINTS;

EXTERN_C const IID IID_IWinInetCacheHints;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWinInetCacheHintsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinInetCacheHints *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinInetCacheHints *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinInetCacheHints *This);

    /*** IWinInetCacheHints methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCacheExtension)(
        IWinInetCacheHints *This,
        LPCWSTR pwzExt,
        LPVOID pszCacheFile,
        DWORD *pcbCacheFile,
        DWORD *pdwWinInetError,
        DWORD *pdwReserved);

    END_INTERFACE
} IWinInetCacheHintsVtbl;

interface IWinInetCacheHints {
    CONST_VTBL IWinInetCacheHintsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWinInetCacheHints_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWinInetCacheHints_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWinInetCacheHints_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWinInetCacheHints methods ***/
#define IWinInetCacheHints_SetCacheExtension(This,pwzExt,pszCacheFile,pcbCacheFile,pdwWinInetError,pdwReserved) \
    ((This)->lpVtbl->SetCacheExtension(This,pwzExt,pszCacheFile,pcbCacheFile,pdwWinInetError,pdwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWinInetCacheHints_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#if (_WIN32_IE >= _WIN32_IE_IE70)

#ifndef _LPWININETCACHEHINTS2_DEFINED
#define _LPWININETCACHEHINTS2_DEFINED

/*****************************************************************************
 * IWinInetCacheHints2 interface
 */
#ifndef __IWinInetCacheHints2_INTERFACE_DEFINED__
#define __IWinInetCacheHints2_INTERFACE_DEFINED__

typedef IWinInetCacheHints2 *LPWININETCACHEHINTS2;

EXTERN_C const IID IID_IWinInetCacheHints2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWinInetCacheHints2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinInetCacheHints2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinInetCacheHints2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinInetCacheHints2 *This);

    /*** IWinInetCacheHints methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCacheExtension)(
        IWinInetCacheHints2 *This,
        LPCWSTR pwzExt,
        LPVOID pszCacheFile,
        DWORD *pcbCacheFile,
        DWORD *pdwWinInetError,
        DWORD *pdwReserved);

    /*** IWinInetCacheHints2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetCacheExtension2)(
        IWinInetCacheHints2 *This,
        LPCWSTR pwzExt,
        WCHAR *pwzCacheFile,
        DWORD *pcchCacheFile,
        DWORD *pdwWinInetError,
        DWORD *pdwReserved);

    END_INTERFACE
} IWinInetCacheHints2Vtbl;

interface IWinInetCacheHints2 {
    CONST_VTBL IWinInetCacheHints2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWinInetCacheHints2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWinInetCacheHints2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWinInetCacheHints2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWinInetCacheHints methods ***/
#define IWinInetCacheHints2_SetCacheExtension(This,pwzExt,pszCacheFile,pcbCacheFile,pdwWinInetError,pdwReserved) \
    ((This)->lpVtbl->SetCacheExtension(This,pwzExt,pszCacheFile,pcbCacheFile,pdwWinInetError,pdwReserved))
/*** IWinInetCacheHints2 methods ***/
#define IWinInetCacheHints2_SetCacheExtension2(This,pwzExt,pwzCacheFile,pcchCacheFile,pdwWinInetError,pdwReserved) \
    ((This)->lpVtbl->SetCacheExtension2(This,pwzExt,pwzCacheFile,pcchCacheFile,pdwWinInetError,pdwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWinInetCacheHints2_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define SID_IBindHost IID_IBindHost
#define SID_SBindHost IID_IBindHost

#ifndef _LPBINDHOST_DEFINED
#define _LPBINDHOST_DEFINED

EXTERN_C const GUID SID_BindHost;

/*****************************************************************************
 * IBindHost interface
 */
#ifndef __IBindHost_INTERFACE_DEFINED__
#define __IBindHost_INTERFACE_DEFINED__

typedef IBindHost *LPBINDHOST;

EXTERN_C const IID IID_IBindHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindHost *This);

    /*** IBindHost methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateMoniker)(
        IBindHost *This,
        LPOLESTR szName,
        IBindCtx *pBC,
        IMoniker **ppmk,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *MonikerBindToStorage)(
        IBindHost *This,
        IMoniker *pMk,
        IBindCtx *pBC,
        IBindStatusCallback *pBSC,
        REFIID riid,
        void **ppvObj);

    HRESULT (STDMETHODCALLTYPE *MonikerBindToObject)(
        IBindHost *This,
        IMoniker *pMk,
        IBindCtx *pBC,
        IBindStatusCallback *pBSC,
        REFIID riid,
        void **ppvObj);

    END_INTERFACE
} IBindHostVtbl;

interface IBindHost {
    CONST_VTBL IBindHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindHost_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindHost_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindHost_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindHost methods ***/
#define IBindHost_CreateMoniker(This,szName,pBC,ppmk,dwReserved) \
    ((This)->lpVtbl->CreateMoniker(This,szName,pBC,ppmk,dwReserved))
#define IBindHost_MonikerBindToStorage(This,pMk,pBC,pBSC,riid,ppvObj) \
    ((This)->lpVtbl->MonikerBindToStorage(This,pMk,pBC,pBSC,riid,ppvObj))
#define IBindHost_MonikerBindToObject(This,pMk,pBC,pBSC,riid,ppvObj) \
    ((This)->lpVtbl->MonikerBindToObject(This,pMk,pBC,pBSC,riid,ppvObj))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IBindHost_RemoteMonikerBindToStorage_Proxy(
    IBindHost *This,
    IMoniker *pMk,
    IBindCtx *pBC,
    IBindStatusCallback *pBSC,
    REFIID riid,
    IUnknown **ppvObj);

void __RPC_STUB IBindHost_RemoteMonikerBindToStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IBindHost_RemoteMonikerBindToObject_Proxy(
    IBindHost *This,
    IMoniker *pMk,
    IBindCtx *pBC,
    IBindStatusCallback *pBSC,
    REFIID riid,
    IUnknown **ppvObj);

void __RPC_STUB IBindHost_RemoteMonikerBindToObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IBindHost_MonikerBindToStorage_Proxy(
    IMoniker *pMk,
    IBindCtx *pBC,
    IBindStatusCallback *pBSC,
    REFIID riid,
    void **ppvObj);
HRESULT IBindHost_MonikerBindToStorage_Stub(
    IMoniker *pMk,
    IBindCtx *pBC,
    IBindStatusCallback *pBSC,
    REFIID riid,
    IUnknown **ppvObj);
HRESULT IBindHost_MonikerBindToObject_Proxy(
    IMoniker *pMk,
    IBindCtx *pBC,
    IBindStatusCallback *pBSC,
    REFIID riid,
    void **ppvObj);
HRESULT IBindHost_MonikerBindToObject_Stub(
    IMoniker *pMk,
    IBindCtx *pBC,
    IBindStatusCallback *pBSC,
    REFIID riid,
    IUnknown **ppvObj);
#endif /* __IBindHost_INTERFACE_DEFINED__ */

#endif

// These are for backwards compatibility with previous URLMON versions
// Flags for the UrlDownloadToCacheFile
#define URLOSTRM_USECACHEDCOPY_ONLY             0x1      // Only get from cache
#define URLOSTRM_USECACHEDCOPY                  0x2      // Get from cache if available else download
#define URLOSTRM_GETNEWESTVERSION               0x3      // Get new version only. But put it in cache too
struct IBindStatusCallback;
STDAPI HlinkSimpleNavigateToString(
     LPCWSTR szTarget,         // required - target document - null if local jump w/in doc
     LPCWSTR szLocation,       // optional, for navigation into middle of a doc
     LPCWSTR szTargetFrameName,// optional, for targeting frame-sets
         IUnknown *pUnk,           // required - we'll search this for other necessary interfaces
     IBindCtx *pbc,            // optional. caller may register an IBSC in this
     IBindStatusCallback *,
    /* [in] */ DWORD grfHLNF,            // flags
    /* [in] */ DWORD dwReserved          // for future use, must be NULL
);
STDAPI HlinkSimpleNavigateToMoniker(
     IMoniker *pmkTarget,      // required - target document - (may be null
     LPCWSTR szLocation,       // optional, for navigation into middle of a doc
     LPCWSTR szTargetFrameName,// optional, for targeting frame-sets
     IUnknown *pUnk,           // required - we'll search this for other necessary interfaces
     IBindCtx *pbc,            // optional. caller may register an IBSC in this
     IBindStatusCallback *,
    /* [in] */ DWORD grfHLNF,            // flags
    /* [in] */ DWORD dwReserved          // for future use, must be NULL
);

STDAPI URLOpenStreamA( LPUNKNOWN,  LPCSTR,DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLOpenStreamW( LPUNKNOWN,  LPCWSTR,DWORD, LPBINDSTATUSCALLBACK);
STDAPI URLOpenPullStreamA( LPUNKNOWN,  LPCSTR,DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLOpenPullStreamW( LPUNKNOWN, LPCWSTR,DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToFileA( LPUNKNOWN,  LPCSTR,  LPCSTR,DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToFileW( LPUNKNOWN,  LPCWSTR, LPCWSTR,DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToCacheFileA( LPUNKNOWN,  LPCSTR,   LPSTR,  DWORD cchFileName, DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLDownloadToCacheFileW( LPUNKNOWN,  LPCWSTR,  LPWSTR, DWORD cchFileName, DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLOpenBlockingStreamA( LPUNKNOWN,  LPCSTR,  LPSTREAM*,DWORD,  LPBINDSTATUSCALLBACK);
STDAPI URLOpenBlockingStreamW( LPUNKNOWN,  LPCWSTR,  LPSTREAM*,DWORD,  LPBINDSTATUSCALLBACK);
#ifdef UNICODE
#define URLOpenStream            URLOpenStreamW
#define URLOpenPullStream        URLOpenPullStreamW
#define URLDownloadToFile        URLDownloadToFileW
#define URLDownloadToCacheFile   URLDownloadToCacheFileW
#define URLOpenBlockingStream    URLOpenBlockingStreamW
#else
#define URLOpenStream            URLOpenStreamA
#define URLOpenPullStream        URLOpenPullStreamA
#define URLDownloadToFile        URLDownloadToFileA
#define URLDownloadToCacheFile   URLDownloadToCacheFileA
#define URLOpenBlockingStream    URLOpenBlockingStreamA
#endif // !UNICODE
STDAPI HlinkGoBack( IUnknown *pUnk);
STDAPI HlinkGoForward( IUnknown *pUnk);
STDAPI HlinkNavigateString( IUnknown *pUnk,  LPCWSTR szTarget);
STDAPI HlinkNavigateMoniker( IUnknown *pUnk,  IMoniker *pmkTarget);

#ifndef  _URLMON_NO_ASYNC_PLUGABLE_PROTOCOLS_


#ifndef __IInternet_FWD_DEFINED__
#define __IInternet_FWD_DEFINED__
typedef interface IInternet IInternet;
#endif /* __IInternet_FWD_DEFINED__ */

#ifndef __IInternetBindInfo_FWD_DEFINED__
#define __IInternetBindInfo_FWD_DEFINED__
typedef interface IInternetBindInfo IInternetBindInfo;
#endif /* __IInternetBindInfo_FWD_DEFINED__ */

#ifndef __IInternetBindInfoEx_FWD_DEFINED__
#define __IInternetBindInfoEx_FWD_DEFINED__
typedef interface IInternetBindInfoEx IInternetBindInfoEx;
#endif /* __IInternetBindInfoEx_FWD_DEFINED__ */

#ifndef __IInternetProtocolRoot_FWD_DEFINED__
#define __IInternetProtocolRoot_FWD_DEFINED__
typedef interface IInternetProtocolRoot IInternetProtocolRoot;
#endif /* __IInternetProtocolRoot_FWD_DEFINED__ */

#ifndef __IInternetProtocol_FWD_DEFINED__
#define __IInternetProtocol_FWD_DEFINED__
typedef interface IInternetProtocol IInternetProtocol;
#endif /* __IInternetProtocol_FWD_DEFINED__ */

#ifndef __IInternetProtocolEx_FWD_DEFINED__
#define __IInternetProtocolEx_FWD_DEFINED__
typedef interface IInternetProtocolEx IInternetProtocolEx;
#endif /* __IInternetProtocolEx_FWD_DEFINED__ */

#ifndef __IInternetProtocolSink_FWD_DEFINED__
#define __IInternetProtocolSink_FWD_DEFINED__
typedef interface IInternetProtocolSink IInternetProtocolSink;
#endif /* __IInternetProtocolSink_FWD_DEFINED__ */

#ifndef __IInternetProtocolInfo_FWD_DEFINED__
#define __IInternetProtocolInfo_FWD_DEFINED__
typedef interface IInternetProtocolInfo IInternetProtocolInfo;
#endif /* __IInternetProtocolInfo_FWD_DEFINED__ */

#ifndef __IInternetSession_FWD_DEFINED__
#define __IInternetSession_FWD_DEFINED__
typedef interface IInternetSession IInternetSession;
#endif /* __IInternetSession_FWD_DEFINED__ */

#ifndef __IInternetProtocolSinkStackable_FWD_DEFINED__
#define __IInternetProtocolSinkStackable_FWD_DEFINED__
typedef interface IInternetProtocolSinkStackable IInternetProtocolSinkStackable;
#endif /* __IInternetProtocolSinkStackable_FWD_DEFINED__ */

#ifndef _LPIINTERNET
#define _LPIINTERNET

/*****************************************************************************
 * IInternet interface
 */
#ifndef __IInternet_INTERFACE_DEFINED__
#define __IInternet_INTERFACE_DEFINED__

typedef IInternet *LPIINTERNET;

EXTERN_C const IID IID_IInternet;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternet *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternet *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternet *This);

    END_INTERFACE
} IInternetVtbl;

interface IInternet {
    CONST_VTBL IInternetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternet_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternet_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternet_Release(This) \
    ((This)->lpVtbl->Release(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternet_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETBINDINFO
#define _LPIINTERNETBINDINFO

/*****************************************************************************
 * IInternetBindInfo interface
 */
#ifndef __IInternetBindInfo_INTERFACE_DEFINED__
#define __IInternetBindInfo_INTERFACE_DEFINED__

typedef IInternetBindInfo *LPIINTERNETBINDINFO;

typedef enum tagBINDSTRING {
    BINDSTRING_HEADERS = 1,
    BINDSTRING_ACCEPT_MIMES = 2,
    BINDSTRING_EXTRA_URL = 3,
    BINDSTRING_LANGUAGE = 4,
    BINDSTRING_USERNAME = 5,
    BINDSTRING_PASSWORD = 6,
    BINDSTRING_UA_PIXELS = 7,
    BINDSTRING_UA_COLOR = 8,
    BINDSTRING_OS = 9,
    BINDSTRING_USER_AGENT = 10,
    BINDSTRING_ACCEPT_ENCODINGS = 11,
    BINDSTRING_POST_COOKIE = 12,
    BINDSTRING_POST_DATA_MIME = 13,
    BINDSTRING_URL = 14,
    BINDSTRING_IID = 15,
    BINDSTRING_FLAG_BIND_TO_OBJECT = 16,
    BINDSTRING_PTR_BIND_CONTEXT = 17,
    BINDSTRING_XDR_ORIGIN = 18,
    BINDSTRING_DOWNLOADPATH = 19,
    BINDSTRING_ROOTDOC_URL = 20,
    BINDSTRING_INITIAL_FILENAME = 21,
    BINDSTRING_PROXY_USERNAME = 22,
    BINDSTRING_PROXY_PASSWORD = 23,
    BINDSTRING_ENTERPRISE_ID = 24,
    BINDSTRING_DOC_URL = 25,
    BINDSTRING_SAMESITE_COOKIE_LEVEL = 26
} BINDSTRING;

EXTERN_C const IID IID_IInternetBindInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetBindInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetBindInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetBindInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetBindInfo *This);

    /*** IInternetBindInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBindInfo)(
        IInternetBindInfo *This,
        DWORD *grfBINDF,
        BINDINFO *pbindinfo);

    HRESULT (STDMETHODCALLTYPE *GetBindString)(
        IInternetBindInfo *This,
        ULONG ulStringType,
        LPOLESTR *ppwzStr,
        ULONG cEl,
        ULONG *pcElFetched);

    END_INTERFACE
} IInternetBindInfoVtbl;

interface IInternetBindInfo {
    CONST_VTBL IInternetBindInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetBindInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetBindInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetBindInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetBindInfo methods ***/
#define IInternetBindInfo_GetBindInfo(This,grfBINDF,pbindinfo) \
    ((This)->lpVtbl->GetBindInfo(This,grfBINDF,pbindinfo))
#define IInternetBindInfo_GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched) \
    ((This)->lpVtbl->GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetBindInfo_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETBINDINFOEX
#define _LPIINTERNETBINDINFOEX

/*****************************************************************************
 * IInternetBindInfoEx interface
 */
#ifndef __IInternetBindInfoEx_INTERFACE_DEFINED__
#define __IInternetBindInfoEx_INTERFACE_DEFINED__

typedef IInternetBindInfoEx *LPIINTERNETBINDINFOEX;

EXTERN_C const IID IID_IInternetBindInfoEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetBindInfoExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetBindInfoEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetBindInfoEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetBindInfoEx *This);

    /*** IInternetBindInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBindInfo)(
        IInternetBindInfoEx *This,
        DWORD *grfBINDF,
        BINDINFO *pbindinfo);

    HRESULT (STDMETHODCALLTYPE *GetBindString)(
        IInternetBindInfoEx *This,
        ULONG ulStringType,
        LPOLESTR *ppwzStr,
        ULONG cEl,
        ULONG *pcElFetched);

    /*** IInternetBindInfoEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBindInfoEx)(
        IInternetBindInfoEx *This,
        DWORD *grfBINDF,
        BINDINFO *pbindinfo,
        DWORD *grfBINDF2,
        DWORD *pdwReserved);

    END_INTERFACE
} IInternetBindInfoExVtbl;

interface IInternetBindInfoEx {
    CONST_VTBL IInternetBindInfoExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetBindInfoEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetBindInfoEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetBindInfoEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetBindInfo methods ***/
#define IInternetBindInfoEx_GetBindInfo(This,grfBINDF,pbindinfo) \
    ((This)->lpVtbl->GetBindInfo(This,grfBINDF,pbindinfo))
#define IInternetBindInfoEx_GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched) \
    ((This)->lpVtbl->GetBindString(This,ulStringType,ppwzStr,cEl,pcElFetched))
/*** IInternetBindInfoEx methods ***/
#define IInternetBindInfoEx_GetBindInfoEx(This,grfBINDF,pbindinfo,grfBINDF2,pdwReserved) \
    ((This)->lpVtbl->GetBindInfoEx(This,grfBINDF,pbindinfo,grfBINDF2,pdwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetBindInfoEx_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETPROTOCOLROOT_DEFINED
#define _LPIINTERNETPROTOCOLROOT_DEFINED

/*****************************************************************************
 * IInternetProtocolRoot interface
 */
#ifndef __IInternetProtocolRoot_INTERFACE_DEFINED__
#define __IInternetProtocolRoot_INTERFACE_DEFINED__

typedef IInternetProtocolRoot *LPIINTERNETPROTOCOLROOT;

typedef enum _tagPI_FLAGS {
    PI_PARSE_URL = 0x1,
    PI_FILTER_MODE = 0x2,
    PI_FORCE_ASYNC = 0x4,
    PI_USE_WORKERTHREAD = 0x8,
    PI_MIMEVERIFICATION = 0x10,
    PI_CLSIDLOOKUP = 0x20,
    PI_DATAPROGRESS = 0x40,
    PI_SYNCHRONOUS = 0x80,
    PI_APARTMENTTHREADED = 0x100,
    PI_CLASSINSTALL = 0x200,
    PI_PASSONBINDCTX = 0x2000,
    PI_NOMIMEHANDLER = 0x8000,
    PI_LOADAPPDIRECT = 0x4000,
    PD_FORCE_SWITCH = 0x10000,
    PI_PREFERDEFAULTHANDLER = 0x20000
} PI_FLAGS;

typedef struct _tagPROTOCOLDATA {
    DWORD grfFlags;
    DWORD dwState;
    LPVOID pData;
    ULONG cbData;
} PROTOCOLDATA;

typedef struct _tagStartParam {
    IID iid;
    IBindCtx *pIBindCtx;
    IUnknown *pItf;
} StartParam;

EXTERN_C const IID IID_IInternetProtocolRoot;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetProtocolRootVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetProtocolRoot *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetProtocolRoot *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetProtocolRoot *This);

    /*** IInternetProtocolRoot methods ***/
    HRESULT (STDMETHODCALLTYPE *Start)(
        IInternetProtocolRoot *This,
        LPCWSTR szUrl,
        IInternetProtocolSink *pOIProtSink,
        IInternetBindInfo *pOIBindInfo,
        DWORD grfPI,
        HANDLE_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *Continue)(
        IInternetProtocolRoot *This,
        PROTOCOLDATA *pProtocolData);

    HRESULT (STDMETHODCALLTYPE *Abort)(
        IInternetProtocolRoot *This,
        HRESULT hrReason,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *Terminate)(
        IInternetProtocolRoot *This,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IInternetProtocolRoot *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IInternetProtocolRoot *This);

    END_INTERFACE
} IInternetProtocolRootVtbl;

interface IInternetProtocolRoot {
    CONST_VTBL IInternetProtocolRootVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetProtocolRoot_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetProtocolRoot_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetProtocolRoot_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetProtocolRoot methods ***/
#define IInternetProtocolRoot_Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved) \
    ((This)->lpVtbl->Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved))
#define IInternetProtocolRoot_Continue(This,pProtocolData) \
    ((This)->lpVtbl->Continue(This,pProtocolData))
#define IInternetProtocolRoot_Abort(This,hrReason,dwOptions) \
    ((This)->lpVtbl->Abort(This,hrReason,dwOptions))
#define IInternetProtocolRoot_Terminate(This,dwOptions) \
    ((This)->lpVtbl->Terminate(This,dwOptions))
#define IInternetProtocolRoot_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IInternetProtocolRoot_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetProtocolRoot_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETPROTOCOL_DEFINED
#define _LPIINTERNETPROTOCOL_DEFINED

/*****************************************************************************
 * IInternetProtocol interface
 */
#ifndef __IInternetProtocol_INTERFACE_DEFINED__
#define __IInternetProtocol_INTERFACE_DEFINED__

typedef IInternetProtocol *LPIINTERNETPROTOCOL;

EXTERN_C const IID IID_IInternetProtocol;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetProtocolVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetProtocol *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetProtocol *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetProtocol *This);

    /*** IInternetProtocolRoot methods ***/
    HRESULT (STDMETHODCALLTYPE *Start)(
        IInternetProtocol *This,
        LPCWSTR szUrl,
        IInternetProtocolSink *pOIProtSink,
        IInternetBindInfo *pOIBindInfo,
        DWORD grfPI,
        HANDLE_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *Continue)(
        IInternetProtocol *This,
        PROTOCOLDATA *pProtocolData);

    HRESULT (STDMETHODCALLTYPE *Abort)(
        IInternetProtocol *This,
        HRESULT hrReason,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *Terminate)(
        IInternetProtocol *This,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IInternetProtocol *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IInternetProtocol *This);

    /*** IInternetProtocol methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IInternetProtocol *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Seek)(
        IInternetProtocol *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *LockRequest)(
        IInternetProtocol *This,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *UnlockRequest)(
        IInternetProtocol *This);

    END_INTERFACE
} IInternetProtocolVtbl;

interface IInternetProtocol {
    CONST_VTBL IInternetProtocolVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetProtocol_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetProtocol_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetProtocol_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetProtocolRoot methods ***/
#define IInternetProtocol_Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved) \
    ((This)->lpVtbl->Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved))
#define IInternetProtocol_Continue(This,pProtocolData) \
    ((This)->lpVtbl->Continue(This,pProtocolData))
#define IInternetProtocol_Abort(This,hrReason,dwOptions) \
    ((This)->lpVtbl->Abort(This,hrReason,dwOptions))
#define IInternetProtocol_Terminate(This,dwOptions) \
    ((This)->lpVtbl->Terminate(This,dwOptions))
#define IInternetProtocol_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IInternetProtocol_Resume(This) \
    ((This)->lpVtbl->Resume(This))
/*** IInternetProtocol methods ***/
#define IInternetProtocol_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define IInternetProtocol_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define IInternetProtocol_LockRequest(This,dwOptions) \
    ((This)->lpVtbl->LockRequest(This,dwOptions))
#define IInternetProtocol_UnlockRequest(This) \
    ((This)->lpVtbl->UnlockRequest(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetProtocol_INTERFACE_DEFINED__ */

#endif

#if (_WIN32_IE >= _WIN32_IE_IE70)

#ifndef _LPIINTERNETPROTOCOLEX_DEFINED
#define _LPIINTERNETPROTOCOLEX_DEFINED

/*****************************************************************************
 * IInternetProtocolEx interface
 */
#ifndef __IInternetProtocolEx_INTERFACE_DEFINED__
#define __IInternetProtocolEx_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInternetProtocolEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetProtocolExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetProtocolEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetProtocolEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetProtocolEx *This);

    /*** IInternetProtocolRoot methods ***/
    HRESULT (STDMETHODCALLTYPE *Start)(
        IInternetProtocolEx *This,
        LPCWSTR szUrl,
        IInternetProtocolSink *pOIProtSink,
        IInternetBindInfo *pOIBindInfo,
        DWORD grfPI,
        HANDLE_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *Continue)(
        IInternetProtocolEx *This,
        PROTOCOLDATA *pProtocolData);

    HRESULT (STDMETHODCALLTYPE *Abort)(
        IInternetProtocolEx *This,
        HRESULT hrReason,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *Terminate)(
        IInternetProtocolEx *This,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *Suspend)(
        IInternetProtocolEx *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        IInternetProtocolEx *This);

    /*** IInternetProtocol methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IInternetProtocolEx *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Seek)(
        IInternetProtocolEx *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *LockRequest)(
        IInternetProtocolEx *This,
        DWORD dwOptions);

    HRESULT (STDMETHODCALLTYPE *UnlockRequest)(
        IInternetProtocolEx *This);

    /*** IInternetProtocolEx methods ***/
    HRESULT (STDMETHODCALLTYPE *StartEx)(
        IInternetProtocolEx *This,
        IUri *pUri,
        IInternetProtocolSink *pOIProtSink,
        IInternetBindInfo *pOIBindInfo,
        DWORD grfPI,
        HANDLE_PTR dwReserved);

    END_INTERFACE
} IInternetProtocolExVtbl;

interface IInternetProtocolEx {
    CONST_VTBL IInternetProtocolExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetProtocolEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetProtocolEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetProtocolEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetProtocolRoot methods ***/
#define IInternetProtocolEx_Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved) \
    ((This)->lpVtbl->Start(This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved))
#define IInternetProtocolEx_Continue(This,pProtocolData) \
    ((This)->lpVtbl->Continue(This,pProtocolData))
#define IInternetProtocolEx_Abort(This,hrReason,dwOptions) \
    ((This)->lpVtbl->Abort(This,hrReason,dwOptions))
#define IInternetProtocolEx_Terminate(This,dwOptions) \
    ((This)->lpVtbl->Terminate(This,dwOptions))
#define IInternetProtocolEx_Suspend(This) \
    ((This)->lpVtbl->Suspend(This))
#define IInternetProtocolEx_Resume(This) \
    ((This)->lpVtbl->Resume(This))
/*** IInternetProtocol methods ***/
#define IInternetProtocolEx_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define IInternetProtocolEx_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define IInternetProtocolEx_LockRequest(This,dwOptions) \
    ((This)->lpVtbl->LockRequest(This,dwOptions))
#define IInternetProtocolEx_UnlockRequest(This) \
    ((This)->lpVtbl->UnlockRequest(This))
/*** IInternetProtocolEx methods ***/
#define IInternetProtocolEx_StartEx(This,pUri,pOIProtSink,pOIBindInfo,grfPI,dwReserved) \
    ((This)->lpVtbl->StartEx(This,pUri,pOIProtSink,pOIBindInfo,grfPI,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetProtocolEx_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#ifndef _LPIINTERNETPROTOCOLSINK_DEFINED
#define _LPIINTERNETPROTOCOLSINK_DEFINED

/*****************************************************************************
 * IInternetProtocolSink interface
 */
#ifndef __IInternetProtocolSink_INTERFACE_DEFINED__
#define __IInternetProtocolSink_INTERFACE_DEFINED__

typedef IInternetProtocolSink *LPIINTERNETPROTOCOLSINK;

EXTERN_C const IID IID_IInternetProtocolSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetProtocolSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetProtocolSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetProtocolSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetProtocolSink *This);

    /*** IInternetProtocolSink methods ***/
    HRESULT (STDMETHODCALLTYPE *Switch)(
        IInternetProtocolSink *This,
        PROTOCOLDATA *pProtocolData);

    HRESULT (STDMETHODCALLTYPE *ReportProgress)(
        IInternetProtocolSink *This,
        ULONG ulStatusCode,
        LPCWSTR szStatusText);

    HRESULT (STDMETHODCALLTYPE *ReportData)(
        IInternetProtocolSink *This,
        DWORD grfBSCF,
        ULONG ulProgress,
        ULONG ulProgressMax);

    HRESULT (STDMETHODCALLTYPE *ReportResult)(
        IInternetProtocolSink *This,
        HRESULT hrResult,
        DWORD dwError,
        LPCWSTR szResult);

    END_INTERFACE
} IInternetProtocolSinkVtbl;

interface IInternetProtocolSink {
    CONST_VTBL IInternetProtocolSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetProtocolSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetProtocolSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetProtocolSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetProtocolSink methods ***/
#define IInternetProtocolSink_Switch(This,pProtocolData) \
    ((This)->lpVtbl->Switch(This,pProtocolData))
#define IInternetProtocolSink_ReportProgress(This,ulStatusCode,szStatusText) \
    ((This)->lpVtbl->ReportProgress(This,ulStatusCode,szStatusText))
#define IInternetProtocolSink_ReportData(This,grfBSCF,ulProgress,ulProgressMax) \
    ((This)->lpVtbl->ReportData(This,grfBSCF,ulProgress,ulProgressMax))
#define IInternetProtocolSink_ReportResult(This,hrResult,dwError,szResult) \
    ((This)->lpVtbl->ReportResult(This,hrResult,dwError,szResult))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetProtocolSink_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETPROTOCOLSINKSTACKABLE_DEFINED
#define _LPIINTERNETPROTOCOLSINKSTACKABLE_DEFINED

/*****************************************************************************
 * IInternetProtocolSinkStackable interface
 */
#ifndef __IInternetProtocolSinkStackable_INTERFACE_DEFINED__
#define __IInternetProtocolSinkStackable_INTERFACE_DEFINED__

typedef IInternetProtocolSinkStackable *LPIINTERNETPROTOCOLSINKStackable;

EXTERN_C const IID IID_IInternetProtocolSinkStackable;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetProtocolSinkStackableVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetProtocolSinkStackable *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetProtocolSinkStackable *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetProtocolSinkStackable *This);

    /*** IInternetProtocolSinkStackable methods ***/
    HRESULT (STDMETHODCALLTYPE *SwitchSink)(
        IInternetProtocolSinkStackable *This,
        IInternetProtocolSink *pOIProtSink);

    HRESULT (STDMETHODCALLTYPE *CommitSwitch)(
        IInternetProtocolSinkStackable *This);

    HRESULT (STDMETHODCALLTYPE *RollbackSwitch)(
        IInternetProtocolSinkStackable *This);

    END_INTERFACE
} IInternetProtocolSinkStackableVtbl;

interface IInternetProtocolSinkStackable {
    CONST_VTBL IInternetProtocolSinkStackableVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetProtocolSinkStackable_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetProtocolSinkStackable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetProtocolSinkStackable_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetProtocolSinkStackable methods ***/
#define IInternetProtocolSinkStackable_SwitchSink(This,pOIProtSink) \
    ((This)->lpVtbl->SwitchSink(This,pOIProtSink))
#define IInternetProtocolSinkStackable_CommitSwitch(This) \
    ((This)->lpVtbl->CommitSwitch(This))
#define IInternetProtocolSinkStackable_RollbackSwitch(This) \
    ((This)->lpVtbl->RollbackSwitch(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetProtocolSinkStackable_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETSESSION_DEFINED
#define _LPIINTERNETSESSION_DEFINED

/*****************************************************************************
 * IInternetSession interface
 */
#ifndef __IInternetSession_INTERFACE_DEFINED__
#define __IInternetSession_INTERFACE_DEFINED__

typedef IInternetSession *LPIINTERNETSESSION;

typedef enum _tagOIBDG_FLAGS {
    OIBDG_APARTMENTTHREADED = 0x100,
    OIBDG_DATAONLY = 0x1000
} OIBDG_FLAGS;

EXTERN_C const IID IID_IInternetSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetSessionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetSession *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetSession *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetSession *This);

    /*** IInternetSession methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterNameSpace)(
        IInternetSession *This,
        IClassFactory *pCF,
        REFCLSID rclsid,
        LPCWSTR pwzProtocol,
        ULONG cPatterns,
        const LPCWSTR *ppwzPatterns,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *UnregisterNameSpace)(
        IInternetSession *This,
        IClassFactory *pCF,
        LPCWSTR pszProtocol);

    HRESULT (STDMETHODCALLTYPE *RegisterMimeFilter)(
        IInternetSession *This,
        IClassFactory *pCF,
        REFCLSID rclsid,
        LPCWSTR pwzType);

    HRESULT (STDMETHODCALLTYPE *UnregisterMimeFilter)(
        IInternetSession *This,
        IClassFactory *pCF,
        LPCWSTR pwzType);

    HRESULT (STDMETHODCALLTYPE *CreateBinding)(
        IInternetSession *This,
        LPBC pBC,
        LPCWSTR szUrl,
        IUnknown *pUnkOuter,
        IUnknown **ppUnk,
        IInternetProtocol **ppOInetProt,
        DWORD dwOption);

    HRESULT (STDMETHODCALLTYPE *SetSessionOption)(
        IInternetSession *This,
        DWORD dwOption,
        LPVOID pBuffer,
        DWORD dwBufferLength,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *GetSessionOption)(
        IInternetSession *This,
        DWORD dwOption,
        LPVOID pBuffer,
        DWORD *pdwBufferLength,
        DWORD dwReserved);

    END_INTERFACE
} IInternetSessionVtbl;

interface IInternetSession {
    CONST_VTBL IInternetSessionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetSession_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetSession_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetSession_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetSession methods ***/
#define IInternetSession_RegisterNameSpace(This,pCF,rclsid,pwzProtocol,cPatterns,ppwzPatterns,dwReserved) \
    ((This)->lpVtbl->RegisterNameSpace(This,pCF,rclsid,pwzProtocol,cPatterns,ppwzPatterns,dwReserved))
#define IInternetSession_UnregisterNameSpace(This,pCF,pszProtocol) \
    ((This)->lpVtbl->UnregisterNameSpace(This,pCF,pszProtocol))
#define IInternetSession_RegisterMimeFilter(This,pCF,rclsid,pwzType) \
    ((This)->lpVtbl->RegisterMimeFilter(This,pCF,rclsid,pwzType))
#define IInternetSession_UnregisterMimeFilter(This,pCF,pwzType) \
    ((This)->lpVtbl->UnregisterMimeFilter(This,pCF,pwzType))
#define IInternetSession_CreateBinding(This,pBC,szUrl,pUnkOuter,ppUnk,ppOInetProt,dwOption) \
    ((This)->lpVtbl->CreateBinding(This,pBC,szUrl,pUnkOuter,ppUnk,ppOInetProt,dwOption))
#define IInternetSession_SetSessionOption(This,dwOption,pBuffer,dwBufferLength,dwReserved) \
    ((This)->lpVtbl->SetSessionOption(This,dwOption,pBuffer,dwBufferLength,dwReserved))
#define IInternetSession_GetSessionOption(This,dwOption,pBuffer,pdwBufferLength,dwReserved) \
    ((This)->lpVtbl->GetSessionOption(This,dwOption,pBuffer,pdwBufferLength,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetSession_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETTHREADSWITCH_DEFINED
#define _LPIINTERNETTHREADSWITCH_DEFINED

/*****************************************************************************
 * IInternetThreadSwitch interface
 */
#ifndef __IInternetThreadSwitch_INTERFACE_DEFINED__
#define __IInternetThreadSwitch_INTERFACE_DEFINED__

typedef IInternetThreadSwitch *LPIINTERNETTHREADSWITCH;

EXTERN_C const IID IID_IInternetThreadSwitch;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetThreadSwitchVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetThreadSwitch *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetThreadSwitch *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetThreadSwitch *This);

    /*** IInternetThreadSwitch methods ***/
    HRESULT (STDMETHODCALLTYPE *Prepare)(
        IInternetThreadSwitch *This);

    HRESULT (STDMETHODCALLTYPE *Continue)(
        IInternetThreadSwitch *This);

    END_INTERFACE
} IInternetThreadSwitchVtbl;

interface IInternetThreadSwitch {
    CONST_VTBL IInternetThreadSwitchVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetThreadSwitch_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetThreadSwitch_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetThreadSwitch_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetThreadSwitch methods ***/
#define IInternetThreadSwitch_Prepare(This) \
    ((This)->lpVtbl->Prepare(This))
#define IInternetThreadSwitch_Continue(This) \
    ((This)->lpVtbl->Continue(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetThreadSwitch_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETPRIORITY_DEFINED
#define _LPIINTERNETPRIORITY_DEFINED

/*****************************************************************************
 * IInternetPriority interface
 */
#ifndef __IInternetPriority_INTERFACE_DEFINED__
#define __IInternetPriority_INTERFACE_DEFINED__

typedef IInternetPriority *LPIINTERNETPRIORITY;

EXTERN_C const IID IID_IInternetPriority;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetPriorityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetPriority *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetPriority *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetPriority *This);

    /*** IInternetPriority methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        IInternetPriority *This,
        LONG nPriority);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        IInternetPriority *This,
        LONG *pnPriority);

    END_INTERFACE
} IInternetPriorityVtbl;

interface IInternetPriority {
    CONST_VTBL IInternetPriorityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetPriority_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetPriority_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetPriority_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetPriority methods ***/
#define IInternetPriority_SetPriority(This,nPriority) \
    ((This)->lpVtbl->SetPriority(This,nPriority))
#define IInternetPriority_GetPriority(This,pnPriority) \
    ((This)->lpVtbl->GetPriority(This,pnPriority))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetPriority_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIINTERNETPROTOCOLINFO_DEFINED
#define _LPIINTERNETPROTOCOLINFO_DEFINED

/*****************************************************************************
 * IInternetProtocolInfo interface
 */
#ifndef __IInternetProtocolInfo_INTERFACE_DEFINED__
#define __IInternetProtocolInfo_INTERFACE_DEFINED__

typedef IInternetProtocolInfo *LPIINTERNETPROTOCOLINFO;

typedef enum _tagPARSEACTION {
    PARSE_CANONICALIZE = 1,
    PARSE_FRIENDLY = 2,
    PARSE_SECURITY_URL = 3,
    PARSE_ROOTDOCUMENT = 4,
    PARSE_DOCUMENT = 5,
    PARSE_ANCHOR = 6,
    PARSE_ENCODE_IS_UNESCAPE = 7,
    PARSE_DECODE_IS_ESCAPE = 8,
    PARSE_PATH_FROM_URL = 9,
    PARSE_URL_FROM_PATH = 10,
    PARSE_MIME = 11,
    PARSE_SERVER = 12,
    PARSE_SCHEMA = 13,
    PARSE_SITE = 14,
    PARSE_DOMAIN = 15,
    PARSE_LOCATION = 16,
    PARSE_SECURITY_DOMAIN = 17,
    PARSE_ESCAPE = 18,
    PARSE_UNESCAPE = 19
} PARSEACTION;

typedef enum _tagPSUACTION {
    PSU_DEFAULT = 1,
    PSU_SECURITY_URL_ONLY = 2
} PSUACTION;

typedef enum _tagQUERYOPTION {
    QUERY_EXPIRATION_DATE = 1,
    QUERY_TIME_OF_LAST_CHANGE = 2,
    QUERY_CONTENT_ENCODING = 3,
    QUERY_CONTENT_TYPE = 4,
    QUERY_REFRESH = 5,
    QUERY_RECOMBINE = 6,
    QUERY_CAN_NAVIGATE = 7,
    QUERY_USES_NETWORK = 8,
    QUERY_IS_CACHED = 9,
    QUERY_IS_INSTALLEDENTRY = 10,
    QUERY_IS_CACHED_OR_MAPPED = 11,
    QUERY_USES_CACHE = 12,
    QUERY_IS_SECURE = 13,
    QUERY_IS_SAFE = 14,
    QUERY_USES_HISTORYFOLDER = 15,
    QUERY_IS_CACHED_AND_USABLE_OFFLINE = 16
} QUERYOPTION;

EXTERN_C const IID IID_IInternetProtocolInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetProtocolInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetProtocolInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetProtocolInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetProtocolInfo *This);

    /*** IInternetProtocolInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *ParseUrl)(
        IInternetProtocolInfo *This,
        LPCWSTR pwzUrl,
        PARSEACTION ParseAction,
        DWORD dwParseFlags,
        LPWSTR pwzResult,
        DWORD cchResult,
        DWORD *pcchResult,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *CombineUrl)(
        IInternetProtocolInfo *This,
        LPCWSTR pwzBaseUrl,
        LPCWSTR pwzRelativeUrl,
        DWORD dwCombineFlags,
        LPWSTR pwzResult,
        DWORD cchResult,
        DWORD *pcchResult,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *CompareUrl)(
        IInternetProtocolInfo *This,
        LPCWSTR pwzUrl1,
        LPCWSTR pwzUrl2,
        DWORD dwCompareFlags);

    HRESULT (STDMETHODCALLTYPE *QueryInfo)(
        IInternetProtocolInfo *This,
        LPCWSTR pwzUrl,
        QUERYOPTION OueryOption,
        DWORD dwQueryFlags,
        LPVOID pBuffer,
        DWORD cbBuffer,
        DWORD *pcbBuf,
        DWORD dwReserved);

    END_INTERFACE
} IInternetProtocolInfoVtbl;

interface IInternetProtocolInfo {
    CONST_VTBL IInternetProtocolInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetProtocolInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetProtocolInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetProtocolInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetProtocolInfo methods ***/
#define IInternetProtocolInfo_ParseUrl(This,pwzUrl,ParseAction,dwParseFlags,pwzResult,cchResult,pcchResult,dwReserved) \
    ((This)->lpVtbl->ParseUrl(This,pwzUrl,ParseAction,dwParseFlags,pwzResult,cchResult,pcchResult,dwReserved))
#define IInternetProtocolInfo_CombineUrl(This,pwzBaseUrl,pwzRelativeUrl,dwCombineFlags,pwzResult,cchResult,pcchResult,dwReserved) \
    ((This)->lpVtbl->CombineUrl(This,pwzBaseUrl,pwzRelativeUrl,dwCombineFlags,pwzResult,cchResult,pcchResult,dwReserved))
#define IInternetProtocolInfo_CompareUrl(This,pwzUrl1,pwzUrl2,dwCompareFlags) \
    ((This)->lpVtbl->CompareUrl(This,pwzUrl1,pwzUrl2,dwCompareFlags))
#define IInternetProtocolInfo_QueryInfo(This,pwzUrl,OueryOption,dwQueryFlags,pBuffer,cbBuffer,pcbBuf,dwReserved) \
    ((This)->lpVtbl->QueryInfo(This,pwzUrl,OueryOption,dwQueryFlags,pBuffer,cbBuffer,pcbBuf,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetProtocolInfo_INTERFACE_DEFINED__ */

#ifndef URLMON_STRICT
// PARSE_ENCODE was misnamed and is deprecated for PARSE_UNESCAPE
#define PARSE_ENCODE PARSE_ENCODE_IS_UNESCAPE
// PARSE_DECODE was misnamed and is deprecated for PARSE_ESCAPE
#define PARSE_DECODE PARSE_DECODE_IS_ESCAPE
#endif //!URLMON_STRICT

#endif

#define IOInet               IInternet
#define IOInetBindInfo       IInternetBindInfo
#define IOInetBindInfoEx     IInternetBindInfoEx
#define IOInetProtocolRoot   IInternetProtocolRoot
#define IOInetProtocol       IInternetProtocol

#if (_WIN32_IE >= _WIN32_IE_IE70)
#define IOInetProtocolEx     IInternetProtocolEx
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define IOInetProtocolSink   IInternetProtocolSink
#define IOInetProtocolInfo   IInternetProtocolInfo
#define IOInetSession        IInternetSession
#define IOInetPriority       IInternetPriority
#define IOInetThreadSwitch   IInternetThreadSwitch
#define IOInetProtocolSinkStackable   IInternetProtocolSinkStackable

#define LPOINET              LPIINTERNET
#define LPOINETPROTOCOLINFO  LPIINTERNETPROTOCOLINFO
#define LPOINETBINDINFO      LPIINTERNETBINDINFO
#define LPOINETPROTOCOLROOT  LPIINTERNETPROTOCOLROOT
#define LPOINETPROTOCOL      LPIINTERNETPROTOCOL

#if (_WIN32_IE >= _WIN32_IE_IE70)
#define LPOINETPROTOCOLEX    LPIINTERNETPROTOCOLEX
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define LPOINETPROTOCOLSINK  LPIINTERNETPROTOCOLSINK
#define LPOINETSESSION       LPIINTERNETSESSION
#define LPOINETTHREADSWITCH  LPIINTERNETTHREADSWITCH
#define LPOINETPRIORITY      LPIINTERNETPRIORITY
#define LPOINETPROTOCOLINFO  LPIINTERNETPROTOCOLINFO
#define LPOINETPROTOCOLSINKSTACKABLE  LPIINTERNETPROTOCOLSINKSTACKABLE

#define IID_IOInet               IID_IInternet
#define IID_IOInetBindInfo       IID_IInternetBindInfo
#define IID_IOInetBindInfoEx     IID_IInternetBindInfoEx
#define IID_IOInetProtocolRoot   IID_IInternetProtocolRoot
#define IID_IOInetProtocol       IID_IInternetProtocol

#if (_WIN32_IE >= _WIN32_IE_IE70)
#define IID_IOInetProtocolEx     IID_IInternetProtocolEx
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define IID_IOInetProtocolSink   IID_IInternetProtocolSink
#define IID_IOInetProtocolInfo   IID_IInternetProtocolInfo
#define IID_IOInetSession        IID_IInternetSession
#define IID_IOInetPriority       IID_IInternetPriority
#define IID_IOInetThreadSwitch   IID_IInternetThreadSwitch
#define IID_IOInetProtocolSinkStackable   IID_IInternetProtocolSinkStackable

STDAPI CoInternetParseUrl(
                                             LPCWSTR      pwzUrl,
                                             PARSEACTION  ParseAction,
                                             DWORD        dwFlags,
     LPWSTR       pszResult,
                                             DWORD        cchResult,
                                        DWORD       *pcchResult,
                                             DWORD        dwReserved
    );

#if (_WIN32_IE >= _WIN32_IE_IE70)
STDAPI CoInternetParseIUri(
                                         IUri        *pIUri,
                                             PARSEACTION  ParseAction,
                                             DWORD        dwFlags,
     LPWSTR       pwzResult,
                                             DWORD        cchResult,
                                        DWORD       *pcchResult,
                                   DWORD_PTR    dwReserved
    );
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

STDAPI CoInternetCombineUrl(
                                             LPCWSTR   pwzBaseUrl,
                                             LPCWSTR   pwzRelativeUrl,
                                             DWORD     dwCombineFlags,
     LPWSTR    pszResult,
                                             DWORD     cchResult,
                                    DWORD     *pcchResult,
                                   DWORD     dwReserved
    );

#if (_WIN32_IE >= _WIN32_IE_IE70)
STDAPI CoInternetCombineUrlEx(
         IUri       *pBaseUri,
         LPCWSTR     pwzRelativeUrl,
                 DWORD       dwCombineFlags,
         IUri      **ppCombinedUri,
         DWORD_PTR   dwReserved
    );
STDAPI CoInternetCombineIUri (
             IUri       *pBaseUri,
             IUri       *pRelativeUri,
                 DWORD       dwCombineFlags,
         IUri      **ppCombinedUri,
         DWORD_PTR   dwReserved
    );
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

STDAPI CoInternetCompareUrl(
    LPCWSTR pwzUrl1,
    LPCWSTR pwzUrl2,
    DWORD dwFlags
    );
STDAPI CoInternetGetProtocolFlags(
             LPCWSTR     pwzUrl,
        DWORD      *pdwFlags,
             DWORD       dwReserved
    );
STDAPI CoInternetQueryInfo(
                                                 LPCWSTR     pwzUrl,
                                                 QUERYOPTION QueryOptions,
                                                 DWORD       dwQueryFlags,
      LPVOID      pvBuffer,
                    DWORD       cbBuffer,
                                        DWORD      *pcbBuffer,
                                                 DWORD       dwReserved
    );
STDAPI CoInternetGetSession(
                 DWORD               dwSessionMode,
         IInternetSession  **ppIInternetSession,
                 DWORD               dwReserved
    );
STDAPI CoInternetGetSecurityUrl(
                 LPCWSTR pwszUrl,
         LPWSTR *ppwszSecUrl,
             PSUACTION   psuAction,
       DWORD dwReserved
    );
STDAPI AsyncInstallDistributionUnit(
     LPCWSTR szDistUnit,
     LPCWSTR szTYPE,
     LPCWSTR szExt,
    DWORD dwFileVersionMS,
    DWORD dwFileVersionLS,
     LPCWSTR szURL,
     IBindCtx *pbc,
     LPVOID   pvReserved,
    DWORD   flags
    );

#if (_WIN32_IE >= _WIN32_IE_IE70)
STDAPI CoInternetGetSecurityUrlEx(
             IUri           *pUri,
         IUri          **ppSecUri,
                 PSUACTION       psuAction,
       DWORD_PTR       dwReserved
    );
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

#ifndef _INTERNETFEATURELIST_DEFINED
#define _INTERNETFEATURELIST_DEFINED

typedef enum _tagINTERNETFEATURELIST {
    FEATURE_OBJECT_CACHING = 0,
    FEATURE_ZONE_ELEVATION = 1,
    FEATURE_MIME_HANDLING = 2,
    FEATURE_MIME_SNIFFING = 3,
    FEATURE_WINDOW_RESTRICTIONS = 4,
    FEATURE_WEBOC_POPUPMANAGEMENT = 5,
    FEATURE_BEHAVIORS = 6,
    FEATURE_DISABLE_MK_PROTOCOL = 7,
    FEATURE_LOCALMACHINE_LOCKDOWN = 8,
    FEATURE_SECURITYBAND = 9,
    FEATURE_RESTRICT_ACTIVEXINSTALL = 10,
    FEATURE_VALIDATE_NAVIGATE_URL = 11,
    FEATURE_RESTRICT_FILEDOWNLOAD = 12,
    FEATURE_ADDON_MANAGEMENT = 13,
    FEATURE_PROTOCOL_LOCKDOWN = 14,
    FEATURE_HTTP_USERNAME_PASSWORD_DISABLE = 15,
    FEATURE_SAFE_BINDTOOBJECT = 16,
    FEATURE_UNC_SAVEDFILECHECK = 17,
    FEATURE_GET_URL_DOM_FILEPATH_UNENCODED = 18,
    FEATURE_TABBED_BROWSING = 19,
    FEATURE_SSLUX = 20,
    FEATURE_DISABLE_NAVIGATION_SOUNDS = 21,
    FEATURE_DISABLE_LEGACY_COMPRESSION = 22,
    FEATURE_FORCE_ADDR_AND_STATUS = 23,
    FEATURE_XMLHTTP = 24,
    FEATURE_DISABLE_TELNET_PROTOCOL = 25,
    FEATURE_FEEDS = 26,
    FEATURE_BLOCK_INPUT_PROMPTS = 27,
    FEATURE_ENTRY_COUNT = 28
} INTERNETFEATURELIST;

// CoInternetSetFeatureEnabled can be used to set/reset features.
// The following flags control where the feature is set
#define SET_FEATURE_ON_THREAD                       0x00000001
#define SET_FEATURE_ON_PROCESS                      0x00000002
#define SET_FEATURE_IN_REGISTRY                     0x00000004
#define SET_FEATURE_ON_THREAD_LOCALMACHINE          0x00000008
#define SET_FEATURE_ON_THREAD_INTRANET              0x00000010
#define SET_FEATURE_ON_THREAD_TRUSTED               0x00000020
#define SET_FEATURE_ON_THREAD_INTERNET              0x00000040
#define SET_FEATURE_ON_THREAD_RESTRICTED            0x00000080

// CoInternetIsFeatureEnabled can be used to get features.
// The following flags control where the feature is obtained from
// default is from process
#define GET_FEATURE_FROM_THREAD                      0x00000001
#define GET_FEATURE_FROM_PROCESS                     0x00000002
#define GET_FEATURE_FROM_REGISTRY                    0x00000004
#define GET_FEATURE_FROM_THREAD_LOCALMACHINE         0x00000008
#define GET_FEATURE_FROM_THREAD_INTRANET             0x00000010
#define GET_FEATURE_FROM_THREAD_TRUSTED              0x00000020
#define GET_FEATURE_FROM_THREAD_INTERNET             0x00000040
#define GET_FEATURE_FROM_THREAD_RESTRICTED           0x00000080

#endif

STDAPI CoInternetSetFeatureEnabled(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags,
    BOOL fEnable
    );

STDAPI CoInternetIsFeatureEnabled(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags
    );

STDAPI CoInternetIsFeatureEnabledForUrl(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags,
     LPCWSTR szURL,
     IInternetSecurityManager *pSecMgr
    );

STDAPI CoInternetIsFeatureEnabledForIUri(
    INTERNETFEATURELIST FeatureEntry,
    DWORD dwFlags,
     IUri * pIUri,
     IInternetSecurityManagerEx2 *pSecMgr
    );

STDAPI CoInternetIsFeatureZoneElevationEnabled(
     LPCWSTR szFromURL,
     LPCWSTR szToURL,
     IInternetSecurityManager *pSecMgr,
    DWORD dwFlags
    );
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

STDAPI CopyStgMedium( const STGMEDIUM * pcstgmedSrc,
                           STGMEDIUM * pstgmedDest);

STDAPI CopyBindInfo( const BINDINFO * pcbiSrc,
                          BINDINFO * pbiDest );

STDAPI_(void) ReleaseBindInfo(  BINDINFO * pbindinfo );

#define INET_E_USE_DEFAULT_PROTOCOLHANDLER _HRESULT_TYPEDEF_(0x800C0011L)
#define INET_E_USE_DEFAULT_SETTING         _HRESULT_TYPEDEF_(0x800C0012L)
#define INET_E_DEFAULT_ACTION              INET_E_USE_DEFAULT_PROTOCOLHANDLER
#define INET_E_QUERYOPTION_UNKNOWN         _HRESULT_TYPEDEF_(0x800C0013L)
#define INET_E_REDIRECTING                 _HRESULT_TYPEDEF_(0x800C0014L)

#define OInetParseUrl               CoInternetParseUrl
#define OInetCombineUrl             CoInternetCombineUrl

#if (_WIN32_IE >= _WIN32_IE_IE70)
#define OInetCombineUrlEx           CoInternetCombineUrlEx
#define OInetCombineIUri            CoInternetCombineIUri
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define OInetCompareUrl             CoInternetCompareUrl
#define OInetQueryInfo              CoInternetQueryInfo
#define OInetGetSession             CoInternetGetSession

#endif // !_URLMON_NO_ASYNC_PLUGABLE_PROTOCOLS_

//
// Static Protocol flags
//
#define PROTOCOLFLAG_NO_PICS_CHECK     0x00000001

// Do not take a dependency on the exact value of the private namespace, no guarantee is given that it won't change.
STDAPI_(PWSTR) IEGetUserPrivateNamespaceName(void);

// Creates the security manager object. The first argument is the Service provider
// to allow for delegation
STDAPI CoInternetCreateSecurityManager( IServiceProvider *pSP,  IInternetSecurityManager **ppSM, DWORD dwReserved);
STDAPI CoInternetCreateZoneManager( IServiceProvider *pSP,  IInternetZoneManager **ppZM, DWORD dwReserved);

// Security manager CLSID's
EXTERN_C const IID CLSID_InternetSecurityManager;
EXTERN_C const IID CLSID_InternetZoneManager;

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
EXTERN_C const IID CLSID_PersistentZoneIdentifier;
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

// This service is used for delegation support on the Security Manager interface
#define SID_SInternetSecurityManager         IID_IInternetSecurityManager

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SID_SInternetSecurityManagerEx         IID_IInternetSecurityManagerEx
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SID_SInternetSecurityManagerEx2         IID_IInternetSecurityManagerEx2
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define SID_SInternetHostSecurityManager     IID_IInternetHostSecurityManager

#ifndef _LPINTERNETSECURITYMGRSITE_DEFINED
#define _LPINTERNETSECURITYMGRSITE_DEFINED

/*****************************************************************************
 * IInternetSecurityMgrSite interface
 */
#ifndef __IInternetSecurityMgrSite_INTERFACE_DEFINED__
#define __IInternetSecurityMgrSite_INTERFACE_DEFINED__

EXTERN_C const IID IID_IInternetSecurityMgrSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetSecurityMgrSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetSecurityMgrSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetSecurityMgrSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetSecurityMgrSite *This);

    /*** IInternetSecurityMgrSite methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWindow)(
        IInternetSecurityMgrSite *This,
        HWND *phwnd);

    HRESULT (STDMETHODCALLTYPE *EnableModeless)(
        IInternetSecurityMgrSite *This,
        BOOL fEnable);

    END_INTERFACE
} IInternetSecurityMgrSiteVtbl;

interface IInternetSecurityMgrSite {
    CONST_VTBL IInternetSecurityMgrSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetSecurityMgrSite_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetSecurityMgrSite_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetSecurityMgrSite_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetSecurityMgrSite methods ***/
#define IInternetSecurityMgrSite_GetWindow(This,phwnd) \
    ((This)->lpVtbl->GetWindow(This,phwnd))
#define IInternetSecurityMgrSite_EnableModeless(This,fEnable) \
    ((This)->lpVtbl->EnableModeless(This,fEnable))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetSecurityMgrSite_INTERFACE_DEFINED__ */

#endif

#ifndef _LPINTERNETSECURITYMANANGER_DEFINED
#define _LPINTERNETSECURITYMANANGER_DEFINED

/*****************************************************************************
 * IInternetSecurityManager interface
 */
#ifndef __IInternetSecurityManager_INTERFACE_DEFINED__
#define __IInternetSecurityManager_INTERFACE_DEFINED__

#define MUTZ_NOSAVEDFILECHECK        0x00000001 // don't check file: for saved file comment
#define MUTZ_ISFILE                  0x00000002 // Assume URL if File, url does not need file://
#define MUTZ_ACCEPT_WILDCARD_SCHEME  0x00000080 // Accept a wildcard scheme
#define MUTZ_ENFORCERESTRICTED       0x00000100 // enforce restricted zone independent of URL
#define MUTZ_RESERVED                0x00000200 // This is same as PUAF_NOSAVEDFILECHECK. However we already have MUTZ_NOSAVEDFILECHECK for this.
#define MUTZ_REQUIRESAVEDFILECHECK   0x00000400 // always check the file for MOTW (overriding FEATURE_UNC_SAVEDFILECHECK)
#define MUTZ_DONT_UNESCAPE           0x00000800 // Do not unescape the url
#define MUTZ_DONT_USE_CACHE          0x00001000 // Do not check the cache
#define MUTZ_FORCE_INTRANET_FLAGS    0x00002000 // Force the intranet flags to be active
#define MUTZ_IGNORE_ZONE_MAPPINGS    0x00004000 // Don't look up the Zone Mappings

// MapUrlToZone returns the zone index given a URL

#define MAX_SIZE_SECURITY_ID 512 // bytes

typedef enum __POIDL_urlmon_tag_0000000E {
    PUAF_DEFAULT = 0x0,
    PUAF_NOUI = 0x1,
    PUAF_ISFILE = 0x2,
    PUAF_WARN_IF_DENIED = 0x4,
    PUAF_FORCEUI_FOREGROUND = 0x8,
    PUAF_CHECK_TIFS = 0x10,
    PUAF_DONTCHECKBOXINDIALOG = 0x20,
    PUAF_TRUSTED = 0x40,
    PUAF_ACCEPT_WILDCARD_SCHEME = 0x80,
    PUAF_ENFORCERESTRICTED = 0x100,
    PUAF_NOSAVEDFILECHECK = 0x200,
    PUAF_REQUIRESAVEDFILECHECK = 0x400,
    PUAF_DONT_USE_CACHE = 0x1000,
    PUAF_RESERVED1 = 0x2000,
    PUAF_RESERVED2 = 0x4000,
    PUAF_LMZ_UNLOCKED = 0x10000,
    PUAF_LMZ_LOCKED = 0x20000,
    PUAF_DEFAULTZONEPOL = 0x40000,
    PUAF_NPL_USE_LOCKED_IF_RESTRICTED = 0x80000,
    PUAF_NOUIIFLOCKED = 0x100000,
    PUAF_DRAGPROTOCOLCHECK = 0x200000
} PUAF;

typedef enum __POIDL_urlmon_tag_0000000F {
    PUAFOUT_DEFAULT = 0x0,
    PUAFOUT_ISLOCKZONEPOLICY = 0x1
} PUAFOUT;

// Note that for the below function, the semantics of the 'pwszUrl',
// 'pContext', and 'cbContext' parameters depend on the specific
// URLACTION_* enum value that is passed for 'dwAction'. For example,
// when 'dwAction' is URLACTION_HTML_MIXED_CONTENT, 'pwszUrl' will be
// the target URL of the resource, 'pContext' will be the containing
// document's IUri* cast to BYTE*, and 'cbContext' will be sizeof(Uri*).
// When 'dwAction' is URLACTION_CROSS_DOMAIN_DATA, 'pwszUrl' will be
// the source URL, 'pContext' will be the target PCWSTR cast to BYTE*,
// and 'cbContext' will be the size of the string including its null
// terminator. Implementers should use the value of 'dwAction' to
// correctly interpret the 'pswzUrl', 'pContext' and 'cbContext' for
// each action type.

// This is the wrapper function that most clients will use.
// It figures out the current Policy for the passed in Action,
// and puts up UI if the current Policy indicates that the user
// should be queried. It returns back the Policy which the caller
// will use to determine if the action should be allowed

// This is the wrapper function to conveniently read a custom policy.

typedef enum __POIDL_urlmon_tag_00000010 {
    SZM_CREATE = 0x0,
    SZM_DELETE = 0x1
} SZM_FLAGS;

// SetZoneMapping
//    lpszPattern: string denoting a URL pattern
//        Examples of valid patterns:
//            *://*.msn.com
//            http://*.sony.co.jp
//            *://et.msn.com
//            ftp://157.54.23.41/
//            https://localsvr
//            file:\localsvr\share
//            *://157.54.100-200.*
//        Examples of invalid patterns:
//            http://*.lcs.mit.edu
//            ftp://*
//    dwFlags: SZM_FLAGS values

EXTERN_C const IID IID_IInternetSecurityManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetSecurityManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetSecurityManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetSecurityManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetSecurityManager *This);

    /*** IInternetSecurityManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSecuritySite)(
        IInternetSecurityManager *This,
        IInternetSecurityMgrSite *pSite);

    HRESULT (STDMETHODCALLTYPE *GetSecuritySite)(
        IInternetSecurityManager *This,
        IInternetSecurityMgrSite **ppSite);

    HRESULT (STDMETHODCALLTYPE *MapUrlToZone)(
        IInternetSecurityManager *This,
        LPCWSTR pwszUrl,
        DWORD *pdwZone,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityId)(
        IInternetSecurityManager *This,
        LPCWSTR pwszUrl,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *ProcessUrlAction)(
        IInternetSecurityManager *This,
        LPCWSTR pwszUrl,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *QueryCustomPolicy)(
        IInternetSecurityManager *This,
        LPCWSTR pwszUrl,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetZoneMapping)(
        IInternetSecurityManager *This,
        DWORD dwZone,
        LPCWSTR lpszPattern,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneMappings)(
        IInternetSecurityManager *This,
        DWORD dwZone,
        IEnumString **ppenumString,
        DWORD dwFlags);

    END_INTERFACE
} IInternetSecurityManagerVtbl;

interface IInternetSecurityManager {
    CONST_VTBL IInternetSecurityManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetSecurityManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetSecurityManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetSecurityManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetSecurityManager methods ***/
#define IInternetSecurityManager_SetSecuritySite(This,pSite) \
    ((This)->lpVtbl->SetSecuritySite(This,pSite))
#define IInternetSecurityManager_GetSecuritySite(This,ppSite) \
    ((This)->lpVtbl->GetSecuritySite(This,ppSite))
#define IInternetSecurityManager_MapUrlToZone(This,pwszUrl,pdwZone,dwFlags) \
    ((This)->lpVtbl->MapUrlToZone(This,pwszUrl,pdwZone,dwFlags))
#define IInternetSecurityManager_GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved))
#define IInternetSecurityManager_ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) \
    ((This)->lpVtbl->ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved))
#define IInternetSecurityManager_QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) \
    ((This)->lpVtbl->QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved))
#define IInternetSecurityManager_SetZoneMapping(This,dwZone,lpszPattern,dwFlags) \
    ((This)->lpVtbl->SetZoneMapping(This,dwZone,lpszPattern,dwFlags))
#define IInternetSecurityManager_GetZoneMappings(This,dwZone,ppenumString,dwFlags) \
    ((This)->lpVtbl->GetZoneMappings(This,dwZone,ppenumString,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetSecurityManager_INTERFACE_DEFINED__ */

#endif

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#ifndef _LPINTERNETSECURITYMANANGEREX_DEFINED
#define _LPINTERNETSECURITYMANANGEREX_DEFINED

/*****************************************************************************
 * IInternetSecurityManagerEx interface
 */
#ifndef __IInternetSecurityManagerEx_INTERFACE_DEFINED__
#define __IInternetSecurityManagerEx_INTERFACE_DEFINED__

// Please see notes on IInternetSecurityManager::ProcessUrlAction

// This is the wrapper function that most clients will use.
// It figures out the current Policy for the passed in Action,
// and puts up UI if the current Policy indicates that the user
// should be queried. It returns back the Policy which the caller
// will use to determine if the action should be allowed

EXTERN_C const IID IID_IInternetSecurityManagerEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetSecurityManagerExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetSecurityManagerEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetSecurityManagerEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetSecurityManagerEx *This);

    /*** IInternetSecurityManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSecuritySite)(
        IInternetSecurityManagerEx *This,
        IInternetSecurityMgrSite *pSite);

    HRESULT (STDMETHODCALLTYPE *GetSecuritySite)(
        IInternetSecurityManagerEx *This,
        IInternetSecurityMgrSite **ppSite);

    HRESULT (STDMETHODCALLTYPE *MapUrlToZone)(
        IInternetSecurityManagerEx *This,
        LPCWSTR pwszUrl,
        DWORD *pdwZone,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityId)(
        IInternetSecurityManagerEx *This,
        LPCWSTR pwszUrl,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *ProcessUrlAction)(
        IInternetSecurityManagerEx *This,
        LPCWSTR pwszUrl,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *QueryCustomPolicy)(
        IInternetSecurityManagerEx *This,
        LPCWSTR pwszUrl,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetZoneMapping)(
        IInternetSecurityManagerEx *This,
        DWORD dwZone,
        LPCWSTR lpszPattern,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneMappings)(
        IInternetSecurityManagerEx *This,
        DWORD dwZone,
        IEnumString **ppenumString,
        DWORD dwFlags);

    /*** IInternetSecurityManagerEx methods ***/
    HRESULT (STDMETHODCALLTYPE *ProcessUrlActionEx)(
        IInternetSecurityManagerEx *This,
        LPCWSTR pwszUrl,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved,
        DWORD *pdwOutFlags);

    END_INTERFACE
} IInternetSecurityManagerExVtbl;

interface IInternetSecurityManagerEx {
    CONST_VTBL IInternetSecurityManagerExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetSecurityManagerEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetSecurityManagerEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetSecurityManagerEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetSecurityManager methods ***/
#define IInternetSecurityManagerEx_SetSecuritySite(This,pSite) \
    ((This)->lpVtbl->SetSecuritySite(This,pSite))
#define IInternetSecurityManagerEx_GetSecuritySite(This,ppSite) \
    ((This)->lpVtbl->GetSecuritySite(This,ppSite))
#define IInternetSecurityManagerEx_MapUrlToZone(This,pwszUrl,pdwZone,dwFlags) \
    ((This)->lpVtbl->MapUrlToZone(This,pwszUrl,pdwZone,dwFlags))
#define IInternetSecurityManagerEx_GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved))
#define IInternetSecurityManagerEx_ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) \
    ((This)->lpVtbl->ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved))
#define IInternetSecurityManagerEx_QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) \
    ((This)->lpVtbl->QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved))
#define IInternetSecurityManagerEx_SetZoneMapping(This,dwZone,lpszPattern,dwFlags) \
    ((This)->lpVtbl->SetZoneMapping(This,dwZone,lpszPattern,dwFlags))
#define IInternetSecurityManagerEx_GetZoneMappings(This,dwZone,ppenumString,dwFlags) \
    ((This)->lpVtbl->GetZoneMappings(This,dwZone,ppenumString,dwFlags))
/*** IInternetSecurityManagerEx methods ***/
#define IInternetSecurityManagerEx_ProcessUrlActionEx(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags) \
    ((This)->lpVtbl->ProcessUrlActionEx(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetSecurityManagerEx_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#if (_WIN32_IE >= _WIN32_IE_IE70)
#ifndef _LPINTERNETSECURITYMANANGEREx2_DEFINED
#define _LPINTERNETSECURITYMANANGEREx2_DEFINED

/*****************************************************************************
 * IInternetSecurityManagerEx2 interface
 */
#ifndef __IInternetSecurityManagerEx2_INTERFACE_DEFINED__
#define __IInternetSecurityManagerEx2_INTERFACE_DEFINED__

// Please see notes on IInternetSecurityManager::ProcessUrlAction

EXTERN_C const IID IID_IInternetSecurityManagerEx2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetSecurityManagerEx2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetSecurityManagerEx2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetSecurityManagerEx2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetSecurityManagerEx2 *This);

    /*** IInternetSecurityManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSecuritySite)(
        IInternetSecurityManagerEx2 *This,
        IInternetSecurityMgrSite *pSite);

    HRESULT (STDMETHODCALLTYPE *GetSecuritySite)(
        IInternetSecurityManagerEx2 *This,
        IInternetSecurityMgrSite **ppSite);

    HRESULT (STDMETHODCALLTYPE *MapUrlToZone)(
        IInternetSecurityManagerEx2 *This,
        LPCWSTR pwszUrl,
        DWORD *pdwZone,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityId)(
        IInternetSecurityManagerEx2 *This,
        LPCWSTR pwszUrl,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *ProcessUrlAction)(
        IInternetSecurityManagerEx2 *This,
        LPCWSTR pwszUrl,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *QueryCustomPolicy)(
        IInternetSecurityManagerEx2 *This,
        LPCWSTR pwszUrl,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetZoneMapping)(
        IInternetSecurityManagerEx2 *This,
        DWORD dwZone,
        LPCWSTR lpszPattern,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneMappings)(
        IInternetSecurityManagerEx2 *This,
        DWORD dwZone,
        IEnumString **ppenumString,
        DWORD dwFlags);

    /*** IInternetSecurityManagerEx methods ***/
    HRESULT (STDMETHODCALLTYPE *ProcessUrlActionEx)(
        IInternetSecurityManagerEx2 *This,
        LPCWSTR pwszUrl,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved,
        DWORD *pdwOutFlags);

    /*** IInternetSecurityManagerEx2 methods ***/
    HRESULT (STDMETHODCALLTYPE *MapUrlToZoneEx2)(
        IInternetSecurityManagerEx2 *This,
        IUri *pUri,
        DWORD *pdwZone,
        DWORD dwFlags,
        LPWSTR *ppwszMappedUrl,
        DWORD *pdwOutFlags);

    HRESULT (STDMETHODCALLTYPE *ProcessUrlActionEx2)(
        IInternetSecurityManagerEx2 *This,
        IUri *pUri,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD_PTR dwReserved,
        DWORD *pdwOutFlags);

    HRESULT (STDMETHODCALLTYPE *GetSecurityIdEx2)(
        IInternetSecurityManagerEx2 *This,
        IUri *pUri,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *QueryCustomPolicyEx2)(
        IInternetSecurityManagerEx2 *This,
        IUri *pUri,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD_PTR dwReserved);

    END_INTERFACE
} IInternetSecurityManagerEx2Vtbl;

interface IInternetSecurityManagerEx2 {
    CONST_VTBL IInternetSecurityManagerEx2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetSecurityManagerEx2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetSecurityManagerEx2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetSecurityManagerEx2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetSecurityManager methods ***/
#define IInternetSecurityManagerEx2_SetSecuritySite(This,pSite) \
    ((This)->lpVtbl->SetSecuritySite(This,pSite))
#define IInternetSecurityManagerEx2_GetSecuritySite(This,ppSite) \
    ((This)->lpVtbl->GetSecuritySite(This,ppSite))
#define IInternetSecurityManagerEx2_MapUrlToZone(This,pwszUrl,pdwZone,dwFlags) \
    ((This)->lpVtbl->MapUrlToZone(This,pwszUrl,pdwZone,dwFlags))
#define IInternetSecurityManagerEx2_GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetSecurityId(This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved))
#define IInternetSecurityManagerEx2_ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) \
    ((This)->lpVtbl->ProcessUrlAction(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved))
#define IInternetSecurityManagerEx2_QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) \
    ((This)->lpVtbl->QueryCustomPolicy(This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved))
#define IInternetSecurityManagerEx2_SetZoneMapping(This,dwZone,lpszPattern,dwFlags) \
    ((This)->lpVtbl->SetZoneMapping(This,dwZone,lpszPattern,dwFlags))
#define IInternetSecurityManagerEx2_GetZoneMappings(This,dwZone,ppenumString,dwFlags) \
    ((This)->lpVtbl->GetZoneMappings(This,dwZone,ppenumString,dwFlags))
/*** IInternetSecurityManagerEx methods ***/
#define IInternetSecurityManagerEx2_ProcessUrlActionEx(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags) \
    ((This)->lpVtbl->ProcessUrlActionEx(This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags))
/*** IInternetSecurityManagerEx2 methods ***/
#define IInternetSecurityManagerEx2_MapUrlToZoneEx2(This,pUri,pdwZone,dwFlags,ppwszMappedUrl,pdwOutFlags) \
    ((This)->lpVtbl->MapUrlToZoneEx2(This,pUri,pdwZone,dwFlags,ppwszMappedUrl,pdwOutFlags))
#define IInternetSecurityManagerEx2_ProcessUrlActionEx2(This,pUri,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags) \
    ((This)->lpVtbl->ProcessUrlActionEx2(This,pUri,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved,pdwOutFlags))
#define IInternetSecurityManagerEx2_GetSecurityIdEx2(This,pUri,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetSecurityIdEx2(This,pUri,pbSecurityId,pcbSecurityId,dwReserved))
#define IInternetSecurityManagerEx2_QueryCustomPolicyEx2(This,pUri,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) \
    ((This)->lpVtbl->QueryCustomPolicyEx2(This,pUri,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetSecurityManagerEx2_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

/*****************************************************************************
 * IZoneIdentifier interface
 */
#ifndef __IZoneIdentifier_INTERFACE_DEFINED__
#define __IZoneIdentifier_INTERFACE_DEFINED__

EXTERN_C const IID IID_IZoneIdentifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IZoneIdentifierVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IZoneIdentifier *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IZoneIdentifier *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IZoneIdentifier *This);

    /*** IZoneIdentifier methods ***/
    HRESULT (STDMETHODCALLTYPE *GetId)(
        IZoneIdentifier *This,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *SetId)(
        IZoneIdentifier *This,
        DWORD dwZone);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        IZoneIdentifier *This);

    END_INTERFACE
} IZoneIdentifierVtbl;

interface IZoneIdentifier {
    CONST_VTBL IZoneIdentifierVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IZoneIdentifier_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IZoneIdentifier_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IZoneIdentifier_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IZoneIdentifier methods ***/
#define IZoneIdentifier_GetId(This,pdwZone) \
    ((This)->lpVtbl->GetId(This,pdwZone))
#define IZoneIdentifier_SetId(This,dwZone) \
    ((This)->lpVtbl->SetId(This,dwZone))
#define IZoneIdentifier_Remove(This) \
    ((This)->lpVtbl->Remove(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IZoneIdentifier_INTERFACE_DEFINED__ */

#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#if (_WIN32_IE >= _WIN32_IE_WIN10)

/*****************************************************************************
 * IZoneIdentifier2 interface
 */
#ifndef __IZoneIdentifier2_INTERFACE_DEFINED__
#define __IZoneIdentifier2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IZoneIdentifier2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IZoneIdentifier2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IZoneIdentifier2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IZoneIdentifier2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IZoneIdentifier2 *This);

    /*** IZoneIdentifier methods ***/
    HRESULT (STDMETHODCALLTYPE *GetId)(
        IZoneIdentifier2 *This,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *SetId)(
        IZoneIdentifier2 *This,
        DWORD dwZone);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        IZoneIdentifier2 *This);

    /*** IZoneIdentifier2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLastWriterPackageFamilyName)(
        IZoneIdentifier2 *This,
        LPWSTR *packageFamilyName);

    HRESULT (STDMETHODCALLTYPE *SetLastWriterPackageFamilyName)(
        IZoneIdentifier2 *This,
        LPCWSTR packageFamilyName);

    HRESULT (STDMETHODCALLTYPE *RemoveLastWriterPackageFamilyName)(
        IZoneIdentifier2 *This);

    HRESULT (STDMETHODCALLTYPE *GetAppZoneId)(
        IZoneIdentifier2 *This,
        DWORD *zone);

    HRESULT (STDMETHODCALLTYPE *SetAppZoneId)(
        IZoneIdentifier2 *This,
        DWORD zone);

    HRESULT (STDMETHODCALLTYPE *RemoveAppZoneId)(
        IZoneIdentifier2 *This);

    END_INTERFACE
} IZoneIdentifier2Vtbl;

interface IZoneIdentifier2 {
    CONST_VTBL IZoneIdentifier2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IZoneIdentifier2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IZoneIdentifier2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IZoneIdentifier2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IZoneIdentifier methods ***/
#define IZoneIdentifier2_GetId(This,pdwZone) \
    ((This)->lpVtbl->GetId(This,pdwZone))
#define IZoneIdentifier2_SetId(This,dwZone) \
    ((This)->lpVtbl->SetId(This,dwZone))
#define IZoneIdentifier2_Remove(This) \
    ((This)->lpVtbl->Remove(This))
/*** IZoneIdentifier2 methods ***/
#define IZoneIdentifier2_GetLastWriterPackageFamilyName(This,packageFamilyName) \
    ((This)->lpVtbl->GetLastWriterPackageFamilyName(This,packageFamilyName))
#define IZoneIdentifier2_SetLastWriterPackageFamilyName(This,packageFamilyName) \
    ((This)->lpVtbl->SetLastWriterPackageFamilyName(This,packageFamilyName))
#define IZoneIdentifier2_RemoveLastWriterPackageFamilyName(This) \
    ((This)->lpVtbl->RemoveLastWriterPackageFamilyName(This))
#define IZoneIdentifier2_GetAppZoneId(This,zone) \
    ((This)->lpVtbl->GetAppZoneId(This,zone))
#define IZoneIdentifier2_SetAppZoneId(This,zone) \
    ((This)->lpVtbl->SetAppZoneId(This,zone))
#define IZoneIdentifier2_RemoveAppZoneId(This) \
    ((This)->lpVtbl->RemoveAppZoneId(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IZoneIdentifier2_INTERFACE_DEFINED__ */

#endif //(_WIN32_IE >= _WIN32_IE_WIN10

#ifndef _LPINTERNETHOSTSECURITYMANANGER_DEFINED
#define _LPINTERNETHOSTSECURITYMANANGER_DEFINED

//This is the interface MSHTML exposes to its clients
//The clients need not pass in a URL to these functions
//since MSHTML maintains the notion of the current URL

/*****************************************************************************
 * IInternetHostSecurityManager interface
 */
#ifndef __IInternetHostSecurityManager_INTERFACE_DEFINED__
#define __IInternetHostSecurityManager_INTERFACE_DEFINED__

// Please see notes on IInternetSecurityManager::ProcessUrlAction

EXTERN_C const IID IID_IInternetHostSecurityManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetHostSecurityManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetHostSecurityManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetHostSecurityManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetHostSecurityManager *This);

    /*** IInternetHostSecurityManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSecurityId)(
        IInternetHostSecurityManager *This,
        BYTE *pbSecurityId,
        DWORD *pcbSecurityId,
        DWORD_PTR dwReserved);

    HRESULT (STDMETHODCALLTYPE *ProcessUrlAction)(
        IInternetHostSecurityManager *This,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwFlags,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *QueryCustomPolicy)(
        IInternetHostSecurityManager *This,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        BYTE *pContext,
        DWORD cbContext,
        DWORD dwReserved);

    END_INTERFACE
} IInternetHostSecurityManagerVtbl;

interface IInternetHostSecurityManager {
    CONST_VTBL IInternetHostSecurityManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetHostSecurityManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetHostSecurityManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetHostSecurityManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetHostSecurityManager methods ***/
#define IInternetHostSecurityManager_GetSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved) \
    ((This)->lpVtbl->GetSecurityId(This,pbSecurityId,pcbSecurityId,dwReserved))
#define IInternetHostSecurityManager_ProcessUrlAction(This,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved) \
    ((This)->lpVtbl->ProcessUrlAction(This,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved))
#define IInternetHostSecurityManager_QueryCustomPolicy(This,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved) \
    ((This)->lpVtbl->QueryCustomPolicy(This,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetHostSecurityManager_INTERFACE_DEFINED__ */

#endif

// The zone manager maintains policies for a set of standard actions.
// These actions are identified by integral values (called action indexes)
// specified below.
// Minimum legal value for an action
#define URLACTION_MIN                                          0x00001000
#define URLACTION_DOWNLOAD_MIN                                 0x00001000
#define URLACTION_DOWNLOAD_SIGNED_ACTIVEX                      0x00001001
#define URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX                    0x00001004
#define URLACTION_DOWNLOAD_CURR_MAX                            0x00001004
#define URLACTION_DOWNLOAD_MAX                                 0x000011FF
#define URLACTION_ACTIVEX_MIN                                  0x00001200
#define URLACTION_ACTIVEX_RUN                                  0x00001200
#define URLPOLICY_ACTIVEX_CHECK_LIST                           0x00010000
#define URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY               0x00001201 // aggregate next four
#define URLACTION_ACTIVEX_OVERRIDE_DATA_SAFETY                 0x00001202 //
#define URLACTION_ACTIVEX_OVERRIDE_SCRIPT_SAFETY               0x00001203 //
#define URLACTION_SCRIPT_OVERRIDE_SAFETY                       0x00001401 //
#define URLACTION_ACTIVEX_CONFIRM_NOOBJECTSAFETY               0x00001204 //
#define URLACTION_ACTIVEX_TREATASUNTRUSTED                     0x00001205
#define URLACTION_ACTIVEX_NO_WEBOC_SCRIPT                      0x00001206
#define URLACTION_ACTIVEX_OVERRIDE_REPURPOSEDETECTION          0x00001207
#define URLACTION_ACTIVEX_OVERRIDE_OPTIN                       0x00001208
#define URLACTION_ACTIVEX_SCRIPTLET_RUN                        0x00001209
#define URLACTION_ACTIVEX_DYNSRC_VIDEO_AND_ANIMATION           0x0000120A //
#define URLACTION_ACTIVEX_OVERRIDE_DOMAINLIST                  0x0000120B
#define URLACTION_ACTIVEX_ALLOW_TDC                            0x0000120C
#define URLACTION_ACTIVEX_CURR_MAX                             0x0000120C
#define URLACTION_ACTIVEX_MAX                                  0x000013ff
#define URLACTION_SCRIPT_MIN                                   0x00001400
#define URLACTION_SCRIPT_RUN                                   0x00001400
#define URLACTION_SCRIPT_JAVA_USE                              0x00001402
#define URLACTION_SCRIPT_SAFE_ACTIVEX                          0x00001405
#define URLACTION_CROSS_DOMAIN_DATA                            0x00001406
#define URLACTION_SCRIPT_PASTE                                 0x00001407
#define URLACTION_ALLOW_XDOMAIN_SUBFRAME_RESIZE                0x00001408
#define URLACTION_SCRIPT_XSSFILTER                             0x00001409
#define URLACTION_SCRIPT_NAVIGATE                              0x0000140A
#define URLACTION_PLUGGABLE_PROTOCOL_XHR                       0x0000140B
#define URLACTION_ALLOW_VBSCRIPT_IE                            0x0000140C
#define URLACTION_ALLOW_JSCRIPT_IE                             0x0000140D
#define URLACTION_SCRIPT_CURR_MAX                              0x0000140D
#define URLACTION_SCRIPT_MAX                                   0x000015ff
#define URLACTION_HTML_MIN                                     0x00001600
#define URLACTION_HTML_SUBMIT_FORMS                            0x00001601 // aggregate next two
#define URLACTION_HTML_SUBMIT_FORMS_FROM                       0x00001602 //
#define URLACTION_HTML_SUBMIT_FORMS_TO                         0x00001603 //
#define URLACTION_HTML_FONT_DOWNLOAD                           0x00001604
#define URLACTION_HTML_JAVA_RUN                                0x00001605 // derive from Java custom policy
#define URLACTION_HTML_USERDATA_SAVE                           0x00001606
#define URLACTION_HTML_SUBFRAME_NAVIGATE                       0x00001607
#define URLACTION_HTML_META_REFRESH                            0x00001608
#define URLACTION_HTML_MIXED_CONTENT                           0x00001609
#define URLACTION_HTML_INCLUDE_FILE_PATH                       0x0000160A
#define URLACTION_HTML_ALLOW_INJECTED_DYNAMIC_HTML             0x0000160B
#define URLACTION_HTML_REQUIRE_UTF8_DOCUMENT_CODEPAGE          0x0000160C
#define URLACTION_HTML_ALLOW_CROSS_DOMAIN_CANVAS               0x0000160D
#define URLACTION_HTML_ALLOW_WINDOW_CLOSE                      0x0000160E
#define URLACTION_HTML_ALLOW_CROSS_DOMAIN_WEBWORKER            0x0000160F
#define URLACTION_HTML_ALLOW_CROSS_DOMAIN_TEXTTRACK            0x00001610
#define URLACTION_HTML_ALLOW_INDEXEDDB                         0x00001611

#define URLACTION_HTML_MAX                                     0x000017ff
#define URLACTION_SHELL_MIN                                    0x00001800
#define URLACTION_SHELL_INSTALL_DTITEMS                        0x00001800
#define URLACTION_SHELL_MOVE_OR_COPY                           0x00001802
#define URLACTION_SHELL_FILE_DOWNLOAD                          0x00001803
#define URLACTION_SHELL_VERB                                   0x00001804
#define URLACTION_SHELL_WEBVIEW_VERB                           0x00001805
#define URLACTION_SHELL_SHELLEXECUTE                           0x00001806

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

#define URLACTION_SHELL_EXECUTE_HIGHRISK                       0x00001806
#define URLACTION_SHELL_EXECUTE_MODRISK                        0x00001807
#define URLACTION_SHELL_EXECUTE_LOWRISK                        0x00001808
#define URLACTION_SHELL_POPUPMGR                               0x00001809
#define URLACTION_SHELL_RTF_OBJECTS_LOAD                       0x0000180A
#define URLACTION_SHELL_ENHANCED_DRAGDROP_SECURITY             0x0000180B
#define URLACTION_SHELL_EXTENSIONSECURITY                      0x0000180C
#define URLACTION_SHELL_SECURE_DRAGSOURCE                      0x0000180D
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)
#if (_WIN32_IE >= _WIN32_IE_WIN7)
#define URLACTION_SHELL_REMOTEQUERY                            0x0000180E
#define URLACTION_SHELL_PREVIEW                                0x0000180F
#define URLACTION_SHELL_SHARE                                  0x00001810
#define URLACTION_SHELL_ALLOW_CROSS_SITE_SHARE                 0x00001811
#endif //(_WIN32_IE >= _WIN32_IE_WIN7)
#define URLACTION_SHELL_TOCTOU_RISK                            0x00001812
#define URLACTION_SHELL_CURR_MAX                               0x00001812
#define URLACTION_SHELL_MAX                                    0x000019ff
#define URLACTION_NETWORK_MIN                                  0x00001A00
#define URLACTION_CREDENTIALS_USE                              0x00001A00
#define URLPOLICY_CREDENTIALS_SILENT_LOGON_OK        0x00000000
#define URLPOLICY_CREDENTIALS_MUST_PROMPT_USER       0x00010000
#define URLPOLICY_CREDENTIALS_CONDITIONAL_PROMPT     0x00020000
#define URLPOLICY_CREDENTIALS_ANONYMOUS_ONLY         0x00030000
#define URLACTION_AUTHENTICATE_CLIENT                          0x00001A01
#define URLPOLICY_AUTHENTICATE_CLEARTEXT_OK          0x00000000
#define URLPOLICY_AUTHENTICATE_CHALLENGE_RESPONSE    0x00010000
#define URLPOLICY_AUTHENTICATE_MUTUAL_ONLY           0x00030000
#define URLACTION_COOKIES                                      0x00001A02
#define URLACTION_COOKIES_SESSION                              0x00001A03
#define URLACTION_CLIENT_CERT_PROMPT                           0x00001A04
#define URLACTION_COOKIES_THIRD_PARTY                          0x00001A05
#define URLACTION_COOKIES_SESSION_THIRD_PARTY                  0x00001A06
#define URLACTION_COOKIES_ENABLED                              0x00001A10

#define URLACTION_NETWORK_CURR_MAX                             0x00001A10
#define URLACTION_NETWORK_MAX                                  0x00001Bff
#define URLACTION_JAVA_MIN                                     0x00001C00
#define URLACTION_JAVA_PERMISSIONS                             0x00001C00
#define URLPOLICY_JAVA_PROHIBIT                      0x00000000
#define URLPOLICY_JAVA_HIGH                          0x00010000
#define URLPOLICY_JAVA_MEDIUM                        0x00020000
#define URLPOLICY_JAVA_LOW                           0x00030000
#define URLPOLICY_JAVA_CUSTOM                        0x00800000
#define URLACTION_JAVA_CURR_MAX                                0x00001C00
#define URLACTION_JAVA_MAX                                     0x00001Cff

// The following Infodelivery actions should have no default policies
// in the registry.  They assume that no default policy means fall
// back to the global restriction.  If an admin sets a policy per
// zone, then it overrides the global restriction.
#define URLACTION_INFODELIVERY_MIN                           0x00001D00
#define URLACTION_INFODELIVERY_NO_ADDING_CHANNELS            0x00001D00
#define URLACTION_INFODELIVERY_NO_EDITING_CHANNELS           0x00001D01
#define URLACTION_INFODELIVERY_NO_REMOVING_CHANNELS          0x00001D02
#define URLACTION_INFODELIVERY_NO_ADDING_SUBSCRIPTIONS       0x00001D03
#define URLACTION_INFODELIVERY_NO_EDITING_SUBSCRIPTIONS      0x00001D04
#define URLACTION_INFODELIVERY_NO_REMOVING_SUBSCRIPTIONS     0x00001D05
#define URLACTION_INFODELIVERY_NO_CHANNEL_LOGGING            0x00001D06
#define URLACTION_INFODELIVERY_CURR_MAX                      0x00001D06
#define URLACTION_INFODELIVERY_MAX                           0x00001Dff

#define URLACTION_CHANNEL_SOFTDIST_MIN                       0x00001E00
#define URLACTION_CHANNEL_SOFTDIST_PERMISSIONS               0x00001E05
#define URLPOLICY_CHANNEL_SOFTDIST_PROHIBIT          0x00010000
#define URLPOLICY_CHANNEL_SOFTDIST_PRECACHE          0x00020000
#define URLPOLICY_CHANNEL_SOFTDIST_AUTOINSTALL       0x00030000
#define URLACTION_CHANNEL_SOFTDIST_MAX                       0x00001Eff

#if (_WIN32_IE >= _WIN32_IE_IE80)
#define URLACTION_DOTNET_USERCONTROLS                        0x00002005
#endif //(_WIN32_IE >= _WIN32_IE_IE80)

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define URLACTION_BEHAVIOR_MIN                               0x00002000
#define URLACTION_BEHAVIOR_RUN                               0x00002000
#define URLPOLICY_BEHAVIOR_CHECK_LIST                        0x00010000
// The following actions correspond to the Feature options above.
// However, they are NOT in the same order.
#define URLACTION_FEATURE_MIN                                0x00002100
#define URLACTION_FEATURE_MIME_SNIFFING                      0x00002100
#define URLACTION_FEATURE_ZONE_ELEVATION                     0x00002101
#define URLACTION_FEATURE_WINDOW_RESTRICTIONS                0x00002102
#define URLACTION_FEATURE_SCRIPT_STATUS_BAR                  0x00002103
#define URLACTION_FEATURE_FORCE_ADDR_AND_STATUS              0x00002104
#define URLACTION_FEATURE_BLOCK_INPUT_PROMPTS                0x00002105
#define URLACTION_FEATURE_DATA_BINDING                       0x00002106
#define URLACTION_FEATURE_CROSSDOMAIN_FOCUS_CHANGE           0x00002107

#define URLACTION_AUTOMATIC_DOWNLOAD_UI_MIN                  0x00002200
#define URLACTION_AUTOMATIC_DOWNLOAD_UI                      0x00002200
#define URLACTION_AUTOMATIC_ACTIVEX_UI                       0x00002201

#define URLACTION_ALLOW_RESTRICTEDPROTOCOLS                0x00002300

#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)
#if (_WIN32_IE >= _WIN32_IE_IE70)

// Whether to do the Anti-Phishing check.
#define URLACTION_ALLOW_APEVALUATION                       0x00002301
#define URLACTION_ALLOW_XHR_EVALUATION                     0x00002302

// The following ExpressAPP and XPS actions are trumped by registry in
// case of Internet Explorer upgrade from IE 6.0 which honors registry.
#define URLACTION_WINDOWS_BROWSER_APPLICATIONS             0x00002400
#define URLACTION_XPS_DOCUMENTS                            0x00002401
#define URLACTION_LOOSE_XAML                               0x00002402
#define URLACTION_LOWRIGHTS                                0x00002500
// The following action belong to WinFX Bootstrapper
#define URLACTION_WINFX_SETUP                              0x00002600
#define URLACTION_INPRIVATE_BLOCKING                       0x00002700
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

#define URLACTION_ALLOW_AUDIO_VIDEO                        0x00002701

#define URLACTION_ALLOW_ACTIVEX_FILTERING                  0x00002702

#define URLACTION_ALLOW_STRUCTURED_STORAGE_SNIFFING        0x00002703

#define URLACTION_ALLOW_AUDIO_VIDEO_PLUGINS                0x00002704

// The following two URLACTIONs each have as their context parameter a string that is the destination URI.
#define URLACTION_ALLOW_ZONE_ELEVATION_VIA_OPT_OUT         0x00002705
#define URLACTION_ALLOW_ZONE_ELEVATION_OPT_OUT_ADDITION    0x00002706

#define URLACTION_ALLOW_CROSSDOMAIN_DROP_WITHIN_WINDOW     0x00002708
#define URLACTION_ALLOW_CROSSDOMAIN_DROP_ACROSS_WINDOWS    0x00002709

#define URLACTION_ALLOW_CROSSDOMAIN_APPCACHE_MANIFEST      0x0000270A

#define URLACTION_ALLOW_RENDER_LEGACY_DXTFILTERS           0x0000270B

#define URLACTION_ALLOW_ANTIMALWARE_SCANNING_OF_ACTIVEX    0x0000270C

#define URLACTION_ALLOW_CSS_EXPRESSIONS                    0x0000270D

// For each action specified above the system maintains
// a set of policies for the action.
// The only policies supported currently are permissions (i.e. is something allowed)
// and logging status.
// IMPORTANT: If you are defining your own policies don't overload the meaning of the
// loword of the policy. You can use the hiword to store any policy bits which are only
// meaningful to your action.
// For an example of how to do this look at the URLPOLICY_JAVA above
// Permissions
#define URLPOLICY_ALLOW                0x00
#define URLPOLICY_QUERY                0x01
#define URLPOLICY_DISALLOW             0x03
// Notifications are not done when user already queried.
#define URLPOLICY_NOTIFY_ON_ALLOW      0x10
#define URLPOLICY_NOTIFY_ON_DISALLOW   0x20
// Logging is done regardless of whether user was queried.
#define URLPOLICY_LOG_ON_ALLOW         0x40
#define URLPOLICY_LOG_ON_DISALLOW      0x80
#define URLPOLICY_MASK_PERMISSIONS     0x0f
#define GetUrlPolicyPermissions(dw)        (dw & URLPOLICY_MASK_PERMISSIONS)
#define SetUrlPolicyPermissions(dw,dw2)    ((dw) = ((dw) & ~(URLPOLICY_MASK_PERMISSIONS)) | (dw2))
#define URLPOLICY_DONTCHECKDLGBOX     0x100

// The ordinal #'s that define the predefined zones internet explorer knows about.
// When we support user-defined zones their zone numbers should be between
// URLZONE_USER_MIN and URLZONE_USER_MAX

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
// Custom policy to query whether the local machine zone
// has been unlocked for current document.
EXTERN_C const GUID GUID_CUSTOM_LOCALMACHINEZONEUNLOCKED;
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#ifndef _LPINTERNETZONEMANAGER_DEFINED
#define _LPINTERNETZONEMANAGER_DEFINED

/*****************************************************************************
 * IInternetZoneManager interface
 */
#ifndef __IInternetZoneManager_INTERFACE_DEFINED__
#define __IInternetZoneManager_INTERFACE_DEFINED__

typedef IInternetZoneManager *LPURLZONEMANAGER;

typedef enum tagURLZONE {
    URLZONE_INVALID = -1,
    URLZONE_PREDEFINED_MIN = 0,
    URLZONE_LOCAL_MACHINE = 0,
    URLZONE_INTRANET = 1,
    URLZONE_TRUSTED = 2,
    URLZONE_INTERNET = 3,
    URLZONE_UNTRUSTED = 4,
    URLZONE_PREDEFINED_MAX = 999,
    URLZONE_USER_MIN = 1000,
    URLZONE_USER_MAX = 10000
} URLZONE;

// Enhanced Security Configuration zone mapping flag for IInternetSecurityManager::SetZoneMapping
#define URLZONE_ESC_FLAG     0x100

typedef enum tagURLTEMPLATE {
    URLTEMPLATE_CUSTOM = 0x0,
    URLTEMPLATE_PREDEFINED_MIN = 0x10000,
    URLTEMPLATE_LOW = 0x10000,
    URLTEMPLATE_MEDLOW = 0x10500,
    URLTEMPLATE_MEDIUM = 0x11000,
    URLTEMPLATE_MEDHIGH = 0x11500,
    URLTEMPLATE_HIGH = 0x12000,
    URLTEMPLATE_PREDEFINED_MAX = 0x20000
} URLTEMPLATE;

enum {
    MAX_ZONE_PATH = 260,
    MAX_ZONE_DESCRIPTION = 200
};

typedef enum __POIDL_urlmon_tag_00000011 {
    ZAFLAGS_CUSTOM_EDIT = 0x1,
    ZAFLAGS_ADD_SITES = 0x2,
    ZAFLAGS_REQUIRE_VERIFICATION = 0x4,
    ZAFLAGS_INCLUDE_PROXY_OVERRIDE = 0x8,
    ZAFLAGS_INCLUDE_INTRANET_SITES = 0x10,
    ZAFLAGS_NO_UI = 0x20,
    ZAFLAGS_SUPPORTS_VERIFICATION = 0x40,
    ZAFLAGS_UNC_AS_INTRANET = 0x80,
    ZAFLAGS_DETECT_INTRANET = 0x100,
    ZAFLAGS_USE_LOCKED_ZONES = 0x10000,
    ZAFLAGS_VERIFY_TEMPLATE_SETTINGS = 0x20000,
    ZAFLAGS_NO_CACHE = 0x40000
} ZAFLAGS;

typedef struct _ZONEATTRIBUTES {
    ULONG cbSize;
    WCHAR szDisplayName[ 260 ];
    WCHAR szDescription[ 200 ];
    WCHAR szIconPath[ 260 ];
    DWORD dwTemplateMinLevel;
    DWORD dwTemplateRecommended;
    DWORD dwTemplateCurrentLevel;
    DWORD dwFlags;
} ZONEATTRIBUTES;
typedef struct _ZONEATTRIBUTES *LPZONEATTRIBUTES;

// Gets the zone attributes (information in registry other than actual security
// policies associated with the zone).  Zone attributes are fixed as:

// Sets the zone attributes (information in registry other than actual security
// policies associated with the zone).  Zone attributes as above.
// Returns S_OK or ??? if failed to write the zone attributes.

/* Registry Flags
    When reading, default behavior is:
        If HKLM allows override and HKCU value exists
            Then use HKCU value
            Else use HKLM value
    When writing, default behavior is same as HKCU
        If HKLM allows override
           Then Write to HKCU
           Else Fail
*/

typedef enum _URLZONEREG {
    URLZONEREG_DEFAULT = 0,
    URLZONEREG_HKLM = 1,
    URLZONEREG_HKCU = 2
} URLZONEREG;

// Gets a named custom policy associated with a zone;
// e.g. the Java VM settings can be defined with a unique key such as 'Java'.
// Custom policy support is intended to allow extensibility from the predefined
// set of policies that IE4 has built in.
//
// pwszKey is the string name designating the custom policy.  Components are
//   responsible for having unique names.
// ppPolicy is the callee allocated buffer for the policy byte blob; caller is
//   responsible for freeing this buffer eventually.
// pcbPolicy is the size of the byte blob returned.
// dwRegFlags determines how registry is accessed (see above).
// Returns S_OK if key is found and buffer allocated; ??? if key is not found (no buffer alloced).

// Sets a named custom policy associated with a zone;
// e.g. the Java VM settings can be defined with a unique key such as 'Java'.
// Custom policy support is intended to allow extensibility from the predefined
// set of policies that IE4 has built in.
//
// pwszKey is the string name designating the custom policy.  Components are
//   responsible for having unique names.
// ppPolicy is the caller allocated buffer for the policy byte blob.
// pcbPolicy is the size of the byte blob to be set.
// dwRegFlags determines if HTCU or HKLM is set.
// Returns S_OK or ??? if failed to write the zone custom policy.

// Gets action policy associated with a zone, the builtin, fixed-length policies info.
// dwAction is the action code for the action as defined above.
// pPolicy is the caller allocated buffer for the policy data.
// cbPolicy is the size of the caller allocated buffer.
// dwRegFlags determines how registry is accessed (see above).
// Returns S_OK if action is valid; ??? if action is not valid.

EXTERN_C const IID IID_IInternetZoneManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetZoneManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetZoneManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetZoneManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetZoneManager *This);

    /*** IInternetZoneManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetZoneAttributes)(
        IInternetZoneManager *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes);

    HRESULT (STDMETHODCALLTYPE *SetZoneAttributes)(
        IInternetZoneManager *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes);

    HRESULT (STDMETHODCALLTYPE *GetZoneCustomPolicy)(
        IInternetZoneManager *This,
        DWORD dwZone,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *SetZoneCustomPolicy)(
        IInternetZoneManager *This,
        DWORD dwZone,
        REFGUID guidKey,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *GetZoneActionPolicy)(
        IInternetZoneManager *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *SetZoneActionPolicy)(
        IInternetZoneManager *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *PromptAction)(
        IInternetZoneManager *This,
        DWORD dwAction,
        HWND hwndParent,
        LPCWSTR pwszUrl,
        LPCWSTR pwszText,
        DWORD dwPromptFlags);

    HRESULT (STDMETHODCALLTYPE *LogAction)(
        IInternetZoneManager *This,
        DWORD dwAction,
        LPCWSTR pwszUrl,
        LPCWSTR pwszText,
        DWORD dwLogFlags);

    HRESULT (STDMETHODCALLTYPE *CreateZoneEnumerator)(
        IInternetZoneManager *This,
        DWORD *pdwEnum,
        DWORD *pdwCount,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneAt)(
        IInternetZoneManager *This,
        DWORD dwEnum,
        DWORD dwIndex,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *DestroyZoneEnumerator)(
        IInternetZoneManager *This,
        DWORD dwEnum);

    HRESULT (STDMETHODCALLTYPE *CopyTemplatePoliciesToZone)(
        IInternetZoneManager *This,
        DWORD dwTemplate,
        DWORD dwZone,
        DWORD dwReserved);

    END_INTERFACE
} IInternetZoneManagerVtbl;

interface IInternetZoneManager {
    CONST_VTBL IInternetZoneManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetZoneManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetZoneManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetZoneManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetZoneManager methods ***/
#define IInternetZoneManager_GetZoneAttributes(This,dwZone,pZoneAttributes) \
    ((This)->lpVtbl->GetZoneAttributes(This,dwZone,pZoneAttributes))
#define IInternetZoneManager_SetZoneAttributes(This,dwZone,pZoneAttributes) \
    ((This)->lpVtbl->SetZoneAttributes(This,dwZone,pZoneAttributes))
#define IInternetZoneManager_GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg) \
    ((This)->lpVtbl->GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg))
#define IInternetZoneManager_SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManager_GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManager_SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManager_PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags) \
    ((This)->lpVtbl->PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags))
#define IInternetZoneManager_LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags) \
    ((This)->lpVtbl->LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags))
#define IInternetZoneManager_CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags) \
    ((This)->lpVtbl->CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags))
#define IInternetZoneManager_GetZoneAt(This,dwEnum,dwIndex,pdwZone) \
    ((This)->lpVtbl->GetZoneAt(This,dwEnum,dwIndex,pdwZone))
#define IInternetZoneManager_DestroyZoneEnumerator(This,dwEnum) \
    ((This)->lpVtbl->DestroyZoneEnumerator(This,dwEnum))
#define IInternetZoneManager_CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved) \
    ((This)->lpVtbl->CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetZoneManager_INTERFACE_DEFINED__ */

#endif

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

#ifndef _LPINTERNETZONEMANAGEREX_DEFINED
#define _LPINTERNETZONEMANAGEREX_DEFINED

/*****************************************************************************
 * IInternetZoneManagerEx interface
 */
#ifndef __IInternetZoneManagerEx_INTERFACE_DEFINED__
#define __IInternetZoneManagerEx_INTERFACE_DEFINED__

// Gets action policy associated with a zone, the builtin, fixed-length policies info.
// dwAction is the action code for the action as defined above.
// pPolicy is the caller allocated buffer for the policy data.
// cbPolicy is the size of the caller allocated buffer.
// dwRegFlags determines how registry is accessed (see above).
// dwFlags determine which registry policies are accessed (see above).
// Returns S_OK if action is valid; ??? if action is not valid.

EXTERN_C const IID IID_IInternetZoneManagerEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetZoneManagerExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetZoneManagerEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetZoneManagerEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetZoneManagerEx *This);

    /*** IInternetZoneManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetZoneAttributes)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes);

    HRESULT (STDMETHODCALLTYPE *SetZoneAttributes)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes);

    HRESULT (STDMETHODCALLTYPE *GetZoneCustomPolicy)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *SetZoneCustomPolicy)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        REFGUID guidKey,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *GetZoneActionPolicy)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *SetZoneActionPolicy)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *PromptAction)(
        IInternetZoneManagerEx *This,
        DWORD dwAction,
        HWND hwndParent,
        LPCWSTR pwszUrl,
        LPCWSTR pwszText,
        DWORD dwPromptFlags);

    HRESULT (STDMETHODCALLTYPE *LogAction)(
        IInternetZoneManagerEx *This,
        DWORD dwAction,
        LPCWSTR pwszUrl,
        LPCWSTR pwszText,
        DWORD dwLogFlags);

    HRESULT (STDMETHODCALLTYPE *CreateZoneEnumerator)(
        IInternetZoneManagerEx *This,
        DWORD *pdwEnum,
        DWORD *pdwCount,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneAt)(
        IInternetZoneManagerEx *This,
        DWORD dwEnum,
        DWORD dwIndex,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *DestroyZoneEnumerator)(
        IInternetZoneManagerEx *This,
        DWORD dwEnum);

    HRESULT (STDMETHODCALLTYPE *CopyTemplatePoliciesToZone)(
        IInternetZoneManagerEx *This,
        DWORD dwTemplate,
        DWORD dwZone,
        DWORD dwReserved);

    /*** IInternetZoneManagerEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetZoneActionPolicyEx)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SetZoneActionPolicyEx)(
        IInternetZoneManagerEx *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg,
        DWORD dwFlags);

    END_INTERFACE
} IInternetZoneManagerExVtbl;

interface IInternetZoneManagerEx {
    CONST_VTBL IInternetZoneManagerExVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetZoneManagerEx_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetZoneManagerEx_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetZoneManagerEx_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetZoneManager methods ***/
#define IInternetZoneManagerEx_GetZoneAttributes(This,dwZone,pZoneAttributes) \
    ((This)->lpVtbl->GetZoneAttributes(This,dwZone,pZoneAttributes))
#define IInternetZoneManagerEx_SetZoneAttributes(This,dwZone,pZoneAttributes) \
    ((This)->lpVtbl->SetZoneAttributes(This,dwZone,pZoneAttributes))
#define IInternetZoneManagerEx_GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg) \
    ((This)->lpVtbl->GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg))
#define IInternetZoneManagerEx_SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManagerEx_GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManagerEx_SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManagerEx_PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags) \
    ((This)->lpVtbl->PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags))
#define IInternetZoneManagerEx_LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags) \
    ((This)->lpVtbl->LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags))
#define IInternetZoneManagerEx_CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags) \
    ((This)->lpVtbl->CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags))
#define IInternetZoneManagerEx_GetZoneAt(This,dwEnum,dwIndex,pdwZone) \
    ((This)->lpVtbl->GetZoneAt(This,dwEnum,dwIndex,pdwZone))
#define IInternetZoneManagerEx_DestroyZoneEnumerator(This,dwEnum) \
    ((This)->lpVtbl->DestroyZoneEnumerator(This,dwEnum))
#define IInternetZoneManagerEx_CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved) \
    ((This)->lpVtbl->CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved))
/*** IInternetZoneManagerEx methods ***/
#define IInternetZoneManagerEx_GetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) \
    ((This)->lpVtbl->GetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags))
#define IInternetZoneManagerEx_SetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) \
    ((This)->lpVtbl->SetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetZoneManagerEx_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE60SP2)

#if (_WIN32_IE >= _WIN32_IE_IE70)

#ifndef _LPINTERNETZONEMANAGEREX2_DEFINED
#define _LPINTERNETZONEMANAGEREX2_DEFINED

#define SECURITY_IE_STATE_GREEN 0x00000000
#define SECURITY_IE_STATE_RED   0x00000001

/*****************************************************************************
 * IInternetZoneManagerEx2 interface
 */
#ifndef __IInternetZoneManagerEx2_INTERFACE_DEFINED__
#define __IInternetZoneManagerEx2_INTERFACE_DEFINED__

// Gets the zone attributes (information in registry other than actual security
// policies associated with the zone).  Zone attributes are fixed as:
// Can also verify template settings by matching current settings with security template

EXTERN_C const IID IID_IInternetZoneManagerEx2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IInternetZoneManagerEx2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInternetZoneManagerEx2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInternetZoneManagerEx2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInternetZoneManagerEx2 *This);

    /*** IInternetZoneManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetZoneAttributes)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes);

    HRESULT (STDMETHODCALLTYPE *SetZoneAttributes)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes);

    HRESULT (STDMETHODCALLTYPE *GetZoneCustomPolicy)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        REFGUID guidKey,
        BYTE **ppPolicy,
        DWORD *pcbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *SetZoneCustomPolicy)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        REFGUID guidKey,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *GetZoneActionPolicy)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *SetZoneActionPolicy)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg);

    HRESULT (STDMETHODCALLTYPE *PromptAction)(
        IInternetZoneManagerEx2 *This,
        DWORD dwAction,
        HWND hwndParent,
        LPCWSTR pwszUrl,
        LPCWSTR pwszText,
        DWORD dwPromptFlags);

    HRESULT (STDMETHODCALLTYPE *LogAction)(
        IInternetZoneManagerEx2 *This,
        DWORD dwAction,
        LPCWSTR pwszUrl,
        LPCWSTR pwszText,
        DWORD dwLogFlags);

    HRESULT (STDMETHODCALLTYPE *CreateZoneEnumerator)(
        IInternetZoneManagerEx2 *This,
        DWORD *pdwEnum,
        DWORD *pdwCount,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneAt)(
        IInternetZoneManagerEx2 *This,
        DWORD dwEnum,
        DWORD dwIndex,
        DWORD *pdwZone);

    HRESULT (STDMETHODCALLTYPE *DestroyZoneEnumerator)(
        IInternetZoneManagerEx2 *This,
        DWORD dwEnum);

    HRESULT (STDMETHODCALLTYPE *CopyTemplatePoliciesToZone)(
        IInternetZoneManagerEx2 *This,
        DWORD dwTemplate,
        DWORD dwZone,
        DWORD dwReserved);

    /*** IInternetZoneManagerEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetZoneActionPolicyEx)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SetZoneActionPolicyEx)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        DWORD dwAction,
        BYTE *pPolicy,
        DWORD cbPolicy,
        URLZONEREG urlZoneReg,
        DWORD dwFlags);

    /*** IInternetZoneManagerEx2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetZoneAttributesEx)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZone,
        ZONEATTRIBUTES *pZoneAttributes,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetZoneSecurityState)(
        IInternetZoneManagerEx2 *This,
        DWORD dwZoneIndex,
        BOOL fRespectPolicy,
        LPDWORD pdwState,
        BOOL *pfPolicyEncountered);

    HRESULT (STDMETHODCALLTYPE *GetIESecurityState)(
        IInternetZoneManagerEx2 *This,
        BOOL fRespectPolicy,
        LPDWORD pdwState,
        BOOL *pfPolicyEncountered,
        BOOL fNoCache);

    HRESULT (STDMETHODCALLTYPE *FixUnsecureSettings)(
        IInternetZoneManagerEx2 *This);

    END_INTERFACE
} IInternetZoneManagerEx2Vtbl;

interface IInternetZoneManagerEx2 {
    CONST_VTBL IInternetZoneManagerEx2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IInternetZoneManagerEx2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IInternetZoneManagerEx2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IInternetZoneManagerEx2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IInternetZoneManager methods ***/
#define IInternetZoneManagerEx2_GetZoneAttributes(This,dwZone,pZoneAttributes) \
    ((This)->lpVtbl->GetZoneAttributes(This,dwZone,pZoneAttributes))
#define IInternetZoneManagerEx2_SetZoneAttributes(This,dwZone,pZoneAttributes) \
    ((This)->lpVtbl->SetZoneAttributes(This,dwZone,pZoneAttributes))
#define IInternetZoneManagerEx2_GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg) \
    ((This)->lpVtbl->GetZoneCustomPolicy(This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg))
#define IInternetZoneManagerEx2_SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->SetZoneCustomPolicy(This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManagerEx2_GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->GetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManagerEx2_SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg) \
    ((This)->lpVtbl->SetZoneActionPolicy(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg))
#define IInternetZoneManagerEx2_PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags) \
    ((This)->lpVtbl->PromptAction(This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags))
#define IInternetZoneManagerEx2_LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags) \
    ((This)->lpVtbl->LogAction(This,dwAction,pwszUrl,pwszText,dwLogFlags))
#define IInternetZoneManagerEx2_CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags) \
    ((This)->lpVtbl->CreateZoneEnumerator(This,pdwEnum,pdwCount,dwFlags))
#define IInternetZoneManagerEx2_GetZoneAt(This,dwEnum,dwIndex,pdwZone) \
    ((This)->lpVtbl->GetZoneAt(This,dwEnum,dwIndex,pdwZone))
#define IInternetZoneManagerEx2_DestroyZoneEnumerator(This,dwEnum) \
    ((This)->lpVtbl->DestroyZoneEnumerator(This,dwEnum))
#define IInternetZoneManagerEx2_CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved) \
    ((This)->lpVtbl->CopyTemplatePoliciesToZone(This,dwTemplate,dwZone,dwReserved))
/*** IInternetZoneManagerEx methods ***/
#define IInternetZoneManagerEx2_GetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) \
    ((This)->lpVtbl->GetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags))
#define IInternetZoneManagerEx2_SetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags) \
    ((This)->lpVtbl->SetZoneActionPolicyEx(This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg,dwFlags))
/*** IInternetZoneManagerEx2 methods ***/
#define IInternetZoneManagerEx2_GetZoneAttributesEx(This,dwZone,pZoneAttributes,dwFlags) \
    ((This)->lpVtbl->GetZoneAttributesEx(This,dwZone,pZoneAttributes,dwFlags))
#define IInternetZoneManagerEx2_GetZoneSecurityState(This,dwZoneIndex,fRespectPolicy,pdwState,pfPolicyEncountered) \
    ((This)->lpVtbl->GetZoneSecurityState(This,dwZoneIndex,fRespectPolicy,pdwState,pfPolicyEncountered))
#define IInternetZoneManagerEx2_GetIESecurityState(This,fRespectPolicy,pdwState,pfPolicyEncountered,fNoCache) \
    ((This)->lpVtbl->GetIESecurityState(This,fRespectPolicy,pdwState,pfPolicyEncountered,fNoCache))
#define IInternetZoneManagerEx2_FixUnsecureSettings(This) \
    ((This)->lpVtbl->FixUnsecureSettings(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IInternetZoneManagerEx2_INTERFACE_DEFINED__ */

#endif
#endif //(_WIN32_IE >= _WIN32_IE_IE70)

EXTERN_C const IID CLSID_SoftDistExt;

#ifndef _LPSOFTDISTEXT_DEFINED
#define _LPSOFTDISTEXT_DEFINED

#define SOFTDIST_FLAG_USAGE_EMAIL        0x00000001
#define SOFTDIST_FLAG_USAGE_PRECACHE     0x00000002
#define SOFTDIST_FLAG_USAGE_AUTOINSTALL  0x00000004
#define SOFTDIST_FLAG_DELETE_SUBSCRIPTION 0x00000008
#define SOFTDIST_ADSTATE_NONE                0x00000000
#define SOFTDIST_ADSTATE_AVAILABLE       0x00000001
#define SOFTDIST_ADSTATE_DOWNLOADED      0x00000002
#define SOFTDIST_ADSTATE_INSTALLED           0x00000003

typedef struct _tagCODEBASEHOLD {
    ULONG cbSize;
    LPWSTR szDistUnit;
    LPWSTR szCodeBase;
    DWORD dwVersionMS;
    DWORD dwVersionLS;
    DWORD dwStyle;
} CODEBASEHOLD;
typedef struct _tagCODEBASEHOLD *LPCODEBASEHOLD;

typedef struct _tagSOFTDISTINFO {
    ULONG cbSize;
    DWORD dwFlags;
    DWORD dwAdState;
    LPWSTR szTitle;
    LPWSTR szAbstract;
    LPWSTR szHREF;
    DWORD dwInstalledVersionMS;
    DWORD dwInstalledVersionLS;
    DWORD dwUpdateVersionMS;
    DWORD dwUpdateVersionLS;
    DWORD dwAdvertisedVersionMS;
    DWORD dwAdvertisedVersionLS;
    DWORD dwReserved;
} SOFTDISTINFO;
typedef struct _tagSOFTDISTINFO *LPSOFTDISTINFO;

/*****************************************************************************
 * ISoftDistExt interface
 */
#ifndef __ISoftDistExt_INTERFACE_DEFINED__
#define __ISoftDistExt_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISoftDistExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISoftDistExtVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISoftDistExt *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISoftDistExt *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISoftDistExt *This);

    /*** ISoftDistExt methods ***/
    HRESULT (STDMETHODCALLTYPE *ProcessSoftDist)(
        ISoftDistExt *This,
        LPCWSTR szCDFURL,
        IXMLElement *pSoftDistElement,
        LPSOFTDISTINFO lpsdi);

    HRESULT (STDMETHODCALLTYPE *GetFirstCodeBase)(
        ISoftDistExt *This,
        LPWSTR *szCodeBase,
        LPDWORD dwMaxSize);

    HRESULT (STDMETHODCALLTYPE *GetNextCodeBase)(
        ISoftDistExt *This,
        LPWSTR *szCodeBase,
        LPDWORD dwMaxSize);

    HRESULT (STDMETHODCALLTYPE *AsyncInstallDistributionUnit)(
        ISoftDistExt *This,
        IBindCtx *pbc,
        LPVOID pvReserved,
        DWORD flags,
        LPCODEBASEHOLD lpcbh);

    END_INTERFACE
} ISoftDistExtVtbl;

interface ISoftDistExt {
    CONST_VTBL ISoftDistExtVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISoftDistExt_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISoftDistExt_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISoftDistExt_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISoftDistExt methods ***/
#define ISoftDistExt_ProcessSoftDist(This,szCDFURL,pSoftDistElement,lpsdi) \
    ((This)->lpVtbl->ProcessSoftDist(This,szCDFURL,pSoftDistElement,lpsdi))
#define ISoftDistExt_GetFirstCodeBase(This,szCodeBase,dwMaxSize) \
    ((This)->lpVtbl->GetFirstCodeBase(This,szCodeBase,dwMaxSize))
#define ISoftDistExt_GetNextCodeBase(This,szCodeBase,dwMaxSize) \
    ((This)->lpVtbl->GetNextCodeBase(This,szCodeBase,dwMaxSize))
#define ISoftDistExt_AsyncInstallDistributionUnit(This,pbc,pvReserved,flags,lpcbh) \
    ((This)->lpVtbl->AsyncInstallDistributionUnit(This,pbc,pvReserved,flags,lpcbh))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISoftDistExt_INTERFACE_DEFINED__ */

STDAPI GetSoftwareUpdateInfo( LPCWSTR szDistUnit,  LPSOFTDISTINFO psdi );
STDAPI SetSoftwareUpdateAdvertisementState( LPCWSTR szDistUnit, DWORD dwAdState, DWORD dwAdvertisedVersionMS, DWORD dwAdvertisedVersionLS );

#endif

#ifndef _LPCATALOGFILEINFO_DEFINED
#define _LPCATALOGFILEINFO_DEFINED

/*****************************************************************************
 * ICatalogFileInfo interface
 */
#ifndef __ICatalogFileInfo_INTERFACE_DEFINED__
#define __ICatalogFileInfo_INTERFACE_DEFINED__

typedef ICatalogFileInfo *LPCATALOGFILEINFO;

EXTERN_C const IID IID_ICatalogFileInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ICatalogFileInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICatalogFileInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICatalogFileInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICatalogFileInfo *This);

    /*** ICatalogFileInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCatalogFile)(
        ICatalogFileInfo *This,
        LPSTR *ppszCatalogFile);

    HRESULT (STDMETHODCALLTYPE *GetJavaTrust)(
        ICatalogFileInfo *This,
        void **ppJavaTrust);

    END_INTERFACE
} ICatalogFileInfoVtbl;

interface ICatalogFileInfo {
    CONST_VTBL ICatalogFileInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ICatalogFileInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ICatalogFileInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ICatalogFileInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ICatalogFileInfo methods ***/
#define ICatalogFileInfo_GetCatalogFile(This,ppszCatalogFile) \
    ((This)->lpVtbl->GetCatalogFile(This,ppszCatalogFile))
#define ICatalogFileInfo_GetJavaTrust(This,ppJavaTrust) \
    ((This)->lpVtbl->GetJavaTrust(This,ppJavaTrust))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ICatalogFileInfo_INTERFACE_DEFINED__ */

#endif

#ifndef _LPDATAFILTER_DEFINED
#define _LPDATAFILTER_DEFINED

/*****************************************************************************
 * IDataFilter interface
 */
#ifndef __IDataFilter_INTERFACE_DEFINED__
#define __IDataFilter_INTERFACE_DEFINED__

typedef IDataFilter *LPDATAFILTER;

EXTERN_C const IID IID_IDataFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IDataFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDataFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDataFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDataFilter *This);

    /*** IDataFilter methods ***/
    HRESULT (STDMETHODCALLTYPE *DoEncode)(
        IDataFilter *This,
        DWORD dwFlags,
        LONG lInBufferSize,
        BYTE *pbInBuffer,
        LONG lOutBufferSize,
        BYTE *pbOutBuffer,
        LONG lInBytesAvailable,
        LONG *plInBytesRead,
        LONG *plOutBytesWritten,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *DoDecode)(
        IDataFilter *This,
        DWORD dwFlags,
        LONG lInBufferSize,
        BYTE *pbInBuffer,
        LONG lOutBufferSize,
        BYTE *pbOutBuffer,
        LONG lInBytesAvailable,
        LONG *plInBytesRead,
        LONG *plOutBytesWritten,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetEncodingLevel)(
        IDataFilter *This,
        DWORD dwEncLevel);

    END_INTERFACE
} IDataFilterVtbl;

interface IDataFilter {
    CONST_VTBL IDataFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IDataFilter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IDataFilter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IDataFilter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDataFilter methods ***/
#define IDataFilter_DoEncode(This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved) \
    ((This)->lpVtbl->DoEncode(This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved))
#define IDataFilter_DoDecode(This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved) \
    ((This)->lpVtbl->DoDecode(This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved))
#define IDataFilter_SetEncodingLevel(This,dwEncLevel) \
    ((This)->lpVtbl->SetEncodingLevel(This,dwEncLevel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IDataFilter_INTERFACE_DEFINED__ */

#endif

#ifndef _LPENCODINGFILTERFACTORY_DEFINED
#define _LPENCODINGFILTERFACTORY_DEFINED

typedef struct _tagPROTOCOLFILTERDATA {
    DWORD cbSize;
    IInternetProtocolSink *pProtocolSink;
    IInternetProtocol *pProtocol;
    IUnknown *pUnk;
    DWORD dwFilterFlags;
} PROTOCOLFILTERDATA;

/*****************************************************************************
 * IEncodingFilterFactory interface
 */
#ifndef __IEncodingFilterFactory_INTERFACE_DEFINED__
#define __IEncodingFilterFactory_INTERFACE_DEFINED__

typedef IEncodingFilterFactory *LPENCODINGFILTERFACTORY;

typedef struct _tagDATAINFO {
    ULONG ulTotalSize;
    ULONG ulavrPacketSize;
    ULONG ulConnectSpeed;
    ULONG ulProcessorSpeed;
} DATAINFO;

EXTERN_C const IID IID_IEncodingFilterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEncodingFilterFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEncodingFilterFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEncodingFilterFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEncodingFilterFactory *This);

    /*** IEncodingFilterFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *FindBestFilter)(
        IEncodingFilterFactory *This,
        LPCWSTR pwzCodeIn,
        LPCWSTR pwzCodeOut,
        DATAINFO info,
        IDataFilter **ppDF);

    HRESULT (STDMETHODCALLTYPE *GetDefaultFilter)(
        IEncodingFilterFactory *This,
        LPCWSTR pwzCodeIn,
        LPCWSTR pwzCodeOut,
        IDataFilter **ppDF);

    END_INTERFACE
} IEncodingFilterFactoryVtbl;

interface IEncodingFilterFactory {
    CONST_VTBL IEncodingFilterFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEncodingFilterFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEncodingFilterFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEncodingFilterFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEncodingFilterFactory methods ***/
#define IEncodingFilterFactory_FindBestFilter(This,pwzCodeIn,pwzCodeOut,info,ppDF) \
    ((This)->lpVtbl->FindBestFilter(This,pwzCodeIn,pwzCodeOut,info,ppDF))
#define IEncodingFilterFactory_GetDefaultFilter(This,pwzCodeIn,pwzCodeOut,ppDF) \
    ((This)->lpVtbl->GetDefaultFilter(This,pwzCodeIn,pwzCodeOut,ppDF))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEncodingFilterFactory_INTERFACE_DEFINED__ */

#endif

#ifndef _HITLOGGING_DEFINED
#define _HITLOGGING_DEFINED

// Logging-specific apis
BOOL WINAPI IsLoggingEnabledA( LPCSTR  pszUrl);
BOOL WINAPI IsLoggingEnabledW( LPCWSTR  pwszUrl);

#ifdef UNICODE
#define IsLoggingEnabled         IsLoggingEnabledW
#else
#define IsLoggingEnabled         IsLoggingEnabledA
#endif // !UNICODE

typedef struct _tagHIT_LOGGING_INFO {
    DWORD dwStructSize;
    LPSTR lpszLoggedUrlName;
    SYSTEMTIME StartTime;
    SYSTEMTIME EndTime;
    LPSTR lpszExtendedInfo;
} HIT_LOGGING_INFO;
typedef struct _tagHIT_LOGGING_INFO *LPHIT_LOGGING_INFO;

BOOL WINAPI WriteHitLogging( LPHIT_LOGGING_INFO lpLogginginfo);

#define CONFIRMSAFETYACTION_LOADOBJECT  0x00000001

struct CONFIRMSAFETY {
    CLSID clsid;
    IUnknown *pUnk;
    DWORD dwFlags;
};

EXTERN_C const GUID GUID_CUSTOM_CONFIRMOBJECTSAFETY;

#endif

#ifndef _LPIWRAPPEDPROTOCOL_DEFINED
#define _LPIWRAPPEDPROTOCOL_DEFINED

/*****************************************************************************
 * IWrappedProtocol interface
 */
#ifndef __IWrappedProtocol_INTERFACE_DEFINED__
#define __IWrappedProtocol_INTERFACE_DEFINED__

typedef IWrappedProtocol *LPIWRAPPEDPROTOCOL;

EXTERN_C const IID IID_IWrappedProtocol;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWrappedProtocolVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWrappedProtocol *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWrappedProtocol *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWrappedProtocol *This);

    /*** IWrappedProtocol methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWrapperCode)(
        IWrappedProtocol *This,
        LONG *pnCode,
        DWORD_PTR dwReserved);

    END_INTERFACE
} IWrappedProtocolVtbl;

interface IWrappedProtocol {
    CONST_VTBL IWrappedProtocolVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWrappedProtocol_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWrappedProtocol_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWrappedProtocol_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWrappedProtocol methods ***/
#define IWrappedProtocol_GetWrapperCode(This,pnCode,dwReserved) \
    ((This)->lpVtbl->GetWrapperCode(This,pnCode,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWrappedProtocol_INTERFACE_DEFINED__ */

#endif

#ifndef _LPGETBINDHANDLE_DEFINED
#define _LPGETBINDHANDLE_DEFINED

/*****************************************************************************
 * IGetBindHandle interface
 */
#ifndef __IGetBindHandle_INTERFACE_DEFINED__
#define __IGetBindHandle_INTERFACE_DEFINED__

typedef IGetBindHandle *LPGETBINDHANDLE;

typedef enum __POIDL_urlmon_tag_00000012 {
    BINDHANDLETYPES_APPCACHE = 0x0,
    BINDHANDLETYPES_DEPENDENCY = 0x1,
    BINDHANDLETYPES_COUNT = 2
} BINDHANDLETYPES;

EXTERN_C const IID IID_IGetBindHandle;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IGetBindHandleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IGetBindHandle *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IGetBindHandle *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IGetBindHandle *This);

    /*** IGetBindHandle methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBindHandle)(
        IGetBindHandle *This,
        BINDHANDLETYPES enumRequestedHandle,
        HANDLE *pRetHandle);

    END_INTERFACE
} IGetBindHandleVtbl;

interface IGetBindHandle {
    CONST_VTBL IGetBindHandleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IGetBindHandle_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IGetBindHandle_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IGetBindHandle_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IGetBindHandle methods ***/
#define IGetBindHandle_GetBindHandle(This,enumRequestedHandle,pRetHandle) \
    ((This)->lpVtbl->GetBindHandle(This,enumRequestedHandle,pRetHandle))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IGetBindHandle_INTERFACE_DEFINED__ */

#endif

#ifndef _XHRPLUGGABLEPROTOCOL_DEFINED
#define _XHRPLUGGABLEPROTOCOL_DEFINED

typedef struct _tagPROTOCOL_ARGUMENT {
    LPCWSTR szMethod;
    LPCWSTR szTargetUrl;
} PROTOCOL_ARGUMENT;
typedef struct _tagPROTOCOL_ARGUMENT *LPPROTOCOL_ARGUMENT;
#endif

#ifndef _LPBINDCALLBACKREDIRECT_DEFINED
#define _LPBINDCALLBACKREDIRECT_DEFINED

/*****************************************************************************
 * IBindCallbackRedirect interface
 */
#ifndef __IBindCallbackRedirect_INTERFACE_DEFINED__
#define __IBindCallbackRedirect_INTERFACE_DEFINED__

typedef IBindCallbackRedirect *LPBINDCALLBACKREDIRECT;

EXTERN_C const IID IID_IBindCallbackRedirect;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindCallbackRedirectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindCallbackRedirect *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindCallbackRedirect *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindCallbackRedirect *This);

    /*** IBindCallbackRedirect methods ***/
    HRESULT (STDMETHODCALLTYPE *Redirect)(
        IBindCallbackRedirect *This,
        LPCWSTR lpcUrl,
        VARIANT_BOOL *vbCancel);

    END_INTERFACE
} IBindCallbackRedirectVtbl;

interface IBindCallbackRedirect {
    CONST_VTBL IBindCallbackRedirectVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindCallbackRedirect_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindCallbackRedirect_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindCallbackRedirect_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindCallbackRedirect methods ***/
#define IBindCallbackRedirect_Redirect(This,lpcUrl,vbCancel) \
    ((This)->lpVtbl->Redirect(This,lpcUrl,vbCancel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBindCallbackRedirect_INTERFACE_DEFINED__ */

#endif

#ifndef _LPIBINDHTTPSECURITY_DEFINED
#define _LPIBINDHTTPSECURITY_DEFINED

/*****************************************************************************
 * IBindHttpSecurity interface
 */
#ifndef __IBindHttpSecurity_INTERFACE_DEFINED__
#define __IBindHttpSecurity_INTERFACE_DEFINED__

EXTERN_C const IID IID_IBindHttpSecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IBindHttpSecurityVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBindHttpSecurity *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBindHttpSecurity *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBindHttpSecurity *This);

    /*** IBindHttpSecurity methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIgnoreCertMask)(
        IBindHttpSecurity *This,
        DWORD *pdwIgnoreCertMask);

    END_INTERFACE
} IBindHttpSecurityVtbl;

interface IBindHttpSecurity {
    CONST_VTBL IBindHttpSecurityVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IBindHttpSecurity_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IBindHttpSecurity_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IBindHttpSecurity_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IBindHttpSecurity methods ***/
#define IBindHttpSecurity_GetIgnoreCertMask(This,pdwIgnoreCertMask) \
    ((This)->lpVtbl->GetIgnoreCertMask(This,pdwIgnoreCertMask))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IBindHttpSecurity_INTERFACE_DEFINED__ */

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER STGMEDIUM_UserSize(ULONG *, ULONG, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserMarshal(ULONG *, unsigned char *, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(ULONG *, STGMEDIUM *);
ULONG __RPC_USER CLIPFORMAT_UserSize(ULONG *, ULONG, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal(ULONG *, unsigned char *, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(ULONG *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(ULONG *, CLIPFORMAT *);
ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);
ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);

/* End additional prototypes for all interfaces */

#endif /* __urlmon_h__ */
