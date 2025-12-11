#ifndef _ADSPROP_H
#define _ADSPROP_H

#if __POCC__ >= 500
#pragma once
#endif

/* Active Directory Service Property Pages */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define WM_ADSPROP_NOTIFY_PAGEINIT    (WM_USER + 1101) 
#define WM_ADSPROP_NOTIFY_PAGEHWND    (WM_USER + 1102) 
#define WM_ADSPROP_NOTIFY_CHANGE      (WM_USER + 1103) 
#define WM_ADSPROP_NOTIFY_APPLY       (WM_USER + 1104) 
#define WM_ADSPROP_NOTIFY_SETFOCUS    (WM_USER + 1105) 
#define WM_ADSPROP_NOTIFY_FOREGROUND  (WM_USER + 1106) 
#define WM_ADSPROP_NOTIFY_EXIT        (WM_USER + 1107) 
#define WM_ADSPROP_NOTIFY_ERROR       (WM_USER + 1110) 

typedef struct _ADSPROPINITPARAMS {
    DWORD dwSize;
    DWORD dwFlags;
    HRESULT hr;
    IDirectoryObject *pDsObj;
    LPWSTR pwzCN;
    PADS_ATTR_INFO pWritableAttrs;
} ADSPROPINITPARAMS, *PADSPROPINITPARAMS;

typedef struct _ADSPROPERROR {
    HWND hwndPage;
    PWSTR pszPageTitle;
    PWSTR pszObjPath;
    PWSTR pszObjClass;
    HRESULT hr;
    PWSTR pszError;
} ADSPROPERROR, *PADSPROPERROR;

STDAPI ADsPropCreateNotifyObj(LPDATAOBJECT pAppThdDataObj, PWSTR pwzADsObjName, HWND *phNotifyObj);
STDAPI_(BOOL) ADsPropGetInitInfo(HWND hNotifyObj, PADSPROPINITPARAMS pInitParams);
STDAPI_(BOOL) ADsPropSetHwndWithTitle(HWND hNotifyObj, HWND hPage, PTSTR ptzTitle);
STDAPI_(BOOL) ADsPropSetHwnd(HWND hNotifyObj, HWND hPage);
STDAPI_(BOOL) ADsPropCheckIfWritable(const PWSTR pwzAttr, const PADS_ATTR_INFO pWritableAttrs);
STDAPI_(BOOL) ADsPropSendErrorMessage(HWND hNotifyObj, PADSPROPERROR pError);
STDAPI_(BOOL) ADsPropShowErrorDialog(HWND hNotifyObj, HWND hPage);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _ADSPROP_H */
