#include <winapifamily.h>

#include <rpc.h>
#include <rpcndr.h>

#ifndef _OBJBASE_H
#define _OBJBASE_H

/* Windows Component Object Model defintions */

#if __POCC__ >= 500
#pragma once
#endif

#include <pshpack8.h>
#include <combaseapi.h>
#include <coml2api.h>

typedef enum tagCOINIT {
    COINIT_APARTMENTTHREADED = 0x2,
#if (_WIN32_WINNT >= 0x0400) || defined(_WIN32_DCOM)
    COINIT_MULTITHREADED = COINITBASE_MULTITHREADED,
    COINIT_DISABLE_OLE1DDE = 0x4,
    COINIT_SPEED_OVER_MEMORY = 0x8,
#endif /* (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM) */
} COINIT;

#define MARSHALINTERFACE_MIN  500

#define ASYNC_MODE_COMPATIBILITY    0x00000001L
#define ASYNC_MODE_DEFAULT          0x00000000L

#define STGTY_REPEAT                0x00000100L
#define STG_TOEND                   0xFFFFFFFFL

#define STG_LAYOUT_SEQUENTIAL       0x00000000L
#define STG_LAYOUT_INTERLEAVED      0x00000001L

#include <objidl.h>

#ifdef _OLE32_
#ifdef _OLE32PRIV_
BOOL _fastcall wIsEqualGUID(REFGUID rguid1, REFGUID rguid2);
#define IsEqualGUID(rguid1, rguid2) wIsEqualGUID(rguid1, rguid2)
#else /* !_OLE32PRIV_ */
#define __INLINE_ISEQUAL_GUID
#endif /* !_OLE32PRIV_ */
#endif /* _OLE32_ */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINOLEAPI_(DWORD) CoBuildVersion(void);

WINOLEAPI CoInitialize(LPVOID pvReserved);

#define COM_SUPPORT_MALLOC_SPIES
WINOLEAPI CoRegisterMallocSpy(LPMALLOCSPY pMallocSpy);
WINOLEAPI CoRevokeMallocSpy(void);
WINOLEAPI CoCreateStandardMalloc(DWORD memctx, IMalloc **ppMalloc);

#if (_WIN32_WINNT >= 0x0501)

WINOLEAPI CoRegisterInitializeSpy(IInitializeSpy *pSpy, ULARGE_INTEGER *puliCookie);
WINOLEAPI CoRevokeInitializeSpy(ULARGE_INTEGER uliCookie);

typedef enum tagCOMSD {
    SD_LAUNCHPERMISSIONS = 0,
    SD_ACCESSPERMISSIONS = 1,
    SD_LAUNCHRESTRICTIONS = 2,
    SD_ACCESSRESTRICTIONS = 3
} COMSD;
WINOLEAPI CoGetSystemSecurityPermissions(COMSD comSDType, PSECURITY_DESCRIPTOR *ppSD);

#endif /* (_WIN32_WINNT >= 0x0501) */

WINOLEAPI_(HINSTANCE) CoLoadLibrary( LPOLESTR lpszLibName, BOOL bAutoFree);
WINOLEAPI_(void) CoFreeLibrary( HINSTANCE hInst);
WINOLEAPI_(void) CoFreeAllLibraries(void);

#if (_WIN32_WINNT >= 0x0400) || defined(_WIN32_DCOM)

WINOLEAPI CoGetInstanceFromFile(
    COSERVERINFO *pServerInfo,
    CLSID *pClsid,
    IUnknown *punkOuter,
    DWORD dwClsCtx,
    DWORD grfMode,
    OLECHAR *pwszName,
    DWORD dwCount,
    MULTI_QI *pResults
);

WINOLEAPI CoGetInstanceFromIStorage(
    COSERVERINFO *pServerInfo,
    CLSID *pClsid,
    IUnknown *punkOuter,
    DWORD dwClsCtx,
    struct IStorage *pstg,
    DWORD dwCount,
    MULTI_QI *pResults
);

#endif /* (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM) */

#if (_WIN32_WINNT >= 0x0500) || defined(_WIN32_DCOM)

WINOLEAPI CoAllowSetForegroundWindow(IUnknown *pUnk, LPVOID lpvReserved);
WINOLEAPI DcomChannelSetHResult(LPVOID pvReserved, ULONG * pulReserved, HRESULT appsHR);

#endif /* (_WIN32_WINNT >= 0x0500 ) || defined(_WIN32_DCOM) */

WINOLEAPI_(BOOL) CoIsOle1Class( REFCLSID rclsid);
WINOLEAPI CLSIDFromProgIDEx(LPCOLESTR lpszProgID, LPCLSID lpclsid);

WINOLEAPI_(BOOL) CoFileTimeToDosDateTime(FILETIME *lpFileTime, LPWORD lpDosDate, LPWORD lpDosTime);
WINOLEAPI_(BOOL) CoDosDateTimeToFileTime(WORD nDosDate, WORD nDosTime, FILETIME *lpFileTime);
WINOLEAPI CoFileTimeNow(FILETIME *lpFileTime);

WINOLEAPI CoRegisterMessageFilter(
    LPMESSAGEFILTER lpMessageFilter,
    LPMESSAGEFILTER *lplpMessageFilter
);

#if (_WIN32_WINNT >= 0x0400) || defined(_WIN32_DCOM)
WINOLEAPI CoRegisterChannelHook(REFGUID ExtensionUuid, IChannelHook *pChannelHook);
#endif /* (_WIN32_WINNT >= 0x0400) || defined(_WIN32_DCOM) */

WINOLEAPI CoTreatAsClass(REFCLSID clsidOld, REFCLSID clsidNew);

WINOLEAPI CreateDataAdviseHolder(LPDATAADVISEHOLDER *ppDAHolder);

WINOLEAPI CreateDataCache(LPUNKNOWN pUnkOuter, REFCLSID rclsid, REFIID iid, LPVOID *ppv);

WINOLEAPI StgOpenAsyncDocfileOnIFillLockBytes(
    IFillLockBytes *pflb,
    DWORD grfMode,
    DWORD asyncFlags,
    IStorage **ppstgOpen
);

WINOLEAPI StgGetIFillLockBytesOnILockBytes(
    ILockBytes *pilb,
    IFillLockBytes **ppflb
);

WINOLEAPI StgGetIFillLockBytesOnFile(
    OLECHAR const *pwcsName,
    IFillLockBytes** ppflb
);

WINOLEAPI StgOpenLayoutDocfile(
    OLECHAR const *pwcsDfName,
    DWORD grfMode,
    DWORD reserved,
    IStorage **ppstgOpen
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINOLEAPI CoInstall(
    IBindCtx *pbc,
    DWORD dwFlags,
    uCLSSPEC *pClassSpec,
    QUERYCONTEXT *pQuery,
    LPWSTR pszCodeBase
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
WINOLEAPI BindMoniker(LPMONIKER pmk, DWORD grfOpt, REFIID iidResult, LPVOID *ppvResult);
WINOLEAPI CoGetObject(LPCWSTR pszName, BIND_OPTS *pBindOptions, REFIID riid, void **ppv);
WINOLEAPI MkParseDisplayName(LPBC pbc, LPCOLESTR szUserName, ULONG *pchEaten, LPMONIKER *ppmk);
WINOLEAPI MonikerRelativePathTo(LPMONIKER pmkSrc, LPMONIKER pmkDest, LPMONIKER *ppmkRelPath, BOOL dwReserved);
WINOLEAPI MonikerCommonPrefixWith(LPMONIKER pmkThis, LPMONIKER pmkOther, LPMONIKER *ppmkCommon);
WINOLEAPI CreateBindCtx(DWORD reserved, LPBC *ppbc);
WINOLEAPI CreateGenericComposite(LPMONIKER pmkFirst, LPMONIKER pmkRest, LPMONIKER *ppmkComposite);
WINOLEAPI GetClassFile(LPCOLESTR szFilename, CLSID * pclsid);
WINOLEAPI CreateClassMoniker(REFCLSID rclsid, LPMONIKER *ppmk);
WINOLEAPI CreateFileMoniker(LPCOLESTR lpszPathName, LPMONIKER *ppmk);
WINOLEAPI CreateItemMoniker(LPCOLESTR lpszDelim, LPCOLESTR lpszItem, LPMONIKER *ppmk);
WINOLEAPI CreateAntiMoniker(LPMONIKER * ppmk);
WINOLEAPI CreatePointerMoniker(LPUNKNOWN punk, LPMONIKER *ppmk);
WINOLEAPI CreateObjrefMoniker(LPUNKNOWN punk, LPMONIKER *ppmk);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAPI GetRunningObjectTable(DWORD reserved, LPRUNNINGOBJECTTABLE *pprot);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#include <urlmon.h>
#include <propidl.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAPI CreateStdProgressIndicator(
    HWND hwndParent,
    LPCOLESTR pszTitle,
    IBindStatusCallback *pIbscCaller,
    IBindStatusCallback **ppIbsc
);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#ifndef RC_INVOKED
#include <poppack.h>
#endif /* RC_INVOKED */

#endif /* _OBJBASE_H */
