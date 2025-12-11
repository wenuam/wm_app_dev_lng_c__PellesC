#ifndef _SHLOBJ_H
#define _SHLOBJ_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Shell object definitions */

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2185)  /* Alignment of field 'x' can be less than the natural alignment */
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef SNDMSG
#define SNDMSG SendMessage
#endif /* !SNDMSG */

#ifndef WINSHELLAPI
#define WINSHELLAPI       DECLSPEC_IMPORT
#endif /* !WINSHELLAPI */

#ifndef SHSTDAPI
#define SHSTDAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif /* !SHSTDAPI */

#ifndef SHDOCAPI
#define SHDOCAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHDOCAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif /* !SHDOCAPI */

#ifndef SHSTDDOCAPI
#define SHSTDDOCAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDDOCAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif /* !SHSTDDOCAPI */

#ifndef BROWSEUIAPI
#define BROWSEUIAPI           EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define BROWSEUIAPI_(type)    EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif /* !BROWSEUIAPI */

#ifndef SHFOLDERAPI
#define SHFOLDERAPI           EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#endif /* !SHFOLDERAPI */

#include <ole2.h>
#include <prsht.h>
#include <commctrl.h>
#include <shtypes.h>
#include <shobjidl.h>
#include <shlobj_core.h>

#include <pshpack1.h>

#undef  INTERFACE
#define INTERFACE   INewShortcutHookA
DECLARE_INTERFACE_IID_(INewShortcutHookA, IUnknown, "000214e1-0000-0000-c000-000000000046") {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetReferent)(THIS_ PCSTR pcszReferent, HWND hwnd) PURE;
    STDMETHOD(GetReferent)(THIS_ PSTR pszReferent, int cchReferent) PURE;
    STDMETHOD(SetFolder)(THIS_ PCSTR pcszFolder) PURE;
    STDMETHOD(GetFolder)(THIS_ PSTR pszFolder, int cchFolder) PURE;
    STDMETHOD(GetName)(THIS_ PSTR pszName, int cchName) PURE;
    STDMETHOD(GetExtension)(THIS_ PSTR pszExtension, int cchExtension) PURE;
};

#undef  INTERFACE
#define INTERFACE   INewShortcutHookW
DECLARE_INTERFACE_IID_(INewShortcutHookW, IUnknown, "000214f7-0000-0000-c000-000000000046") {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetReferent)(THIS_ PCWSTR pcszReferent, HWND hwnd) PURE;
    STDMETHOD(GetReferent)(THIS_ PWSTR pszReferent, int cchReferent) PURE;
    STDMETHOD(SetFolder)(THIS_ PCWSTR pcszFolder) PURE;
    STDMETHOD(GetFolder)(THIS_ PWSTR pszFolder, int cchFolder) PURE;
    STDMETHOD(GetName)(THIS_ PWSTR pszName, int cchName) PURE;
    STDMETHOD(GetExtension)(THIS_ PWSTR pszExtension, int cchExtension) PURE;
};

#ifdef UNICODE
#define INewShortcutHook        INewShortcutHookW
#define INewShortcutHookVtbl    INewShortcutHookWVtbl
#else /* !UNICODE */
#define INewShortcutHook        INewShortcutHookA
#define INewShortcutHookVtbl    INewShortcutHookAVtbl
#endif /* !UNICODE */

#undef  INTERFACE
#define INTERFACE   ICopyHookA
DECLARE_INTERFACE_IID_(ICopyHookA, IUnknown, "000214EF-0000-0000-c000-000000000046") {
    STDMETHOD_(UINT, CopyCallback)(THIS_ HWND hwnd, UINT wFunc, UINT wFlags, PCSTR pszSrcFile, DWORD dwSrcAttribs, PCSTR pszDestFile, DWORD dwDestAttribs) PURE;
};
typedef ICopyHookA *LPCOPYHOOKA;

#undef  INTERFACE
#define INTERFACE   ICopyHookW
DECLARE_INTERFACE_IID_(ICopyHookW, IUnknown, "000214FC-0000-0000-c000-000000000046") {
    STDMETHOD_(UINT, CopyCallback)(THIS_ HWND hwnd, UINT wFunc, UINT wFlags, PCWSTR pszSrcFile, DWORD dwSrcAttribs, PCWSTR pszDestFile, DWORD dwDestAttribs) PURE;
};
typedef ICopyHookW *LPCOPYHOOKW;

#ifdef UNICODE
#define ICopyHook       ICopyHookW
#define ICopyHookVtbl   ICopyHookWVtbl
#define LPCOPYHOOK      LPCOPYHOOKW
#else /* !UNICODE */
#define ICopyHook       ICopyHookA
#define ICopyHookVtbl   ICopyHookAVtbl
#define LPCOPYHOOK      LPCOPYHOOKA
#endif /* !UNICODE */

#if (NTDDI_VERSION < NTDDI_WIN2K)

#undef  INTERFACE
#define INTERFACE   IFileViewerSite
DECLARE_INTERFACE_IID_(IFileViewerSite, IUnknown, "000214f3-0000-0000-c000-000000000046") {
    STDMETHOD(SetPinnedWindow)(THIS_ HWND hwnd) PURE;
    STDMETHOD(GetPinnedWindow)(THIS_ HWND * phwnd) PURE;
};
typedef IFileViewerSite *LPFILEVIEWERSITE;

#include <pshpack8.h>

typedef struct {
    DWORD cbSize;
    HWND hwndOwner;
    int iShow;
    DWORD dwFlags;
    RECT rect;
    IUnknown *punkRel;
    OLECHAR strNewFile[MAX_PATH];
} FVSHOWINFO, *LPFVSHOWINFO;

#include <poppack.h>

#define FVSIF_RECT      0x00000001
#define FVSIF_PINNED    0x00000002
#define FVSIF_NEWFAILED 0x08000000
#define FVSIF_NEWFILE   0x80000000
#define FVSIF_CANVIEWIT 0x40000000

#undef  INTERFACE
#define INTERFACE   IFileViewerA
DECLARE_INTERFACE_IID(IFileViewerA, "000214f0-0000-0000-c000-000000000046") {
    STDMETHOD(ShowInitialize)(THIS_ LPFILEVIEWERSITE lpfsi) PURE;
    STDMETHOD(Show)(THIS_ LPFVSHOWINFO pvsi) PURE;
    STDMETHOD(PrintTo)(THIS_ PSTR pszDriver, BOOL fSuppressUI) PURE;
};
typedef IFileViewerA *LPFILEVIEWERA;

#undef  INTERFACE
#define INTERFACE   IFileViewerW
DECLARE_INTERFACE_IID(IFileViewerW, "000214f8-0000-0000-c000-000000000046") {
    STDMETHOD(ShowInitialize)(THIS_ LPFILEVIEWERSITE lpfsi) PURE;
    STDMETHOD(Show)(THIS_ LPFVSHOWINFO pvsi) PURE;
    STDMETHOD(PrintTo)(THIS_ PWSTR pszDriver, BOOL fSuppressUI) PURE;
};
typedef IFileViewerW *LPFILEVIEWERW;

#ifdef UNICODE
#define IFileViewer IFileViewerW
#define LPFILEVIEWER LPFILEVIEWERW
#else /* !UNICODE */
#define IFileViewer IFileViewerA
#define LPFILEVIEWER LPFILEVIEWERA
#endif /* !UNICODE */

#endif /* (NTDDI_VERSION < NTDDI_WIN2K) */

#define FCIDM_TOOLBAR      (FCIDM_BROWSERFIRST + 0)
#define FCIDM_STATUS       (FCIDM_BROWSERFIRST + 1)

#define IDC_OFFLINE_HAND        103
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define IDC_PANTOOL_HAND_OPEN   104
#define IDC_PANTOOL_HAND_CLOSED 105
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */

#define PANE_NONE        ((DWORD)-1)
#define PANE_ZONE        1
#define PANE_OFFLINE     2
#define PANE_PRINTER     3
#define PANE_SSL         4
#define PANE_NAVIGATION  5
#define PANE_PROGRESS    6
#if (_WIN32_IE >= _WIN32_IE_IE60)
#define PANE_PRIVACY     7
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */

#undef INTERFACE
#define INTERFACE ICurrentWorkingDirectory
DECLARE_INTERFACE_IID_(ICurrentWorkingDirectory, IUnknown, "91956D21-9276-11d1-921A-006097DF5BD4") {
    STDMETHOD(GetDirectory)(THIS_ PWSTR pwzPath, DWORD cchSize) PURE;
    STDMETHOD(SetDirectory)(THIS_ PCWSTR pwzPath) PURE;
};

#define DWFRF_NORMAL            0x0000
#define DWFRF_DELETECONFIGDATA  0x0001

#define DWFAF_HIDDEN    0x0001
#define DWFAF_GROUP1    0x0002
#define DWFAF_GROUP2    0x0004
#define DWFAF_AUTOHIDE  0x0010

#undef  INTERFACE
#define INTERFACE   IDockingWindowFrame
DECLARE_INTERFACE_IID_(IDockingWindowFrame, IOleWindow, "47d2657a-7b27-11d0-8ca9-00a0c92dbfe8") {
    STDMETHOD(AddToolbar)(THIS_ IUnknown * punkSrc, PCWSTR pwszItem, DWORD dwAddFlags) PURE;
    STDMETHOD(RemoveToolbar)(THIS_ IUnknown * punkSrc, DWORD dwRemoveFlags) PURE;
    STDMETHOD(FindToolbar)(THIS_ PCWSTR pwszItem, REFIID riid, void * *ppv) PURE;
};

#undef  INTERFACE
#define INTERFACE   IThumbnailCapture
DECLARE_INTERFACE_IID_(IThumbnailCapture, IUnknown, "4ea39266-7211-409f-b622-f63dbd16c533") {
    STDMETHOD(CaptureThumbnail)(THIS_ const SIZE * pMaxSize, IUnknown * pHTMLDoc2, HBITMAP * phbmThumbnail) PURE;
};
typedef IThumbnailCapture *LPTHUMBNAILCAPTURE;

#if (NTDDI_VERSION >= NTDDI_WIN2K && NTDDI_VERSION < NTDDI_VISTA)

#include <pshpack8.h>
typedef struct _EnumImageStoreDATAtag {
    WCHAR szPath[MAX_PATH];
    FILETIME ftTimeStamp;
} ENUMSHELLIMAGESTOREDATA, * PENUMSHELLIMAGESTOREDATA;
#include <poppack.h>

#undef  INTERFACE
#define INTERFACE   IEnumShellImageStore
DECLARE_INTERFACE_IID_(IEnumShellImageStore, IUnknown, "6DFD582B-92E3-11D1-98A3-00C04FB687DA" ) {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Next)(THIS_ ULONG celt, PENUMSHELLIMAGESTOREDATA * prgElt, ULONG * pceltFetched) PURE;
    STDMETHOD(Skip)(THIS_ ULONG celt) PURE;
    STDMETHOD(Clone)(THIS_ IEnumShellImageStore * * ppEnum) PURE;
};
typedef IEnumShellImageStore *LPENUMSHELLIMAGESTORE;

#define SHIMSTCAPFLAG_LOCKABLE    0x0001
#define SHIMSTCAPFLAG_PURGEABLE   0x0002

#undef  INTERFACE
#define INTERFACE   IShellImageStore
DECLARE_INTERFACE_IID_(IShellImageStore, IUnknown, "48C8118C-B924-11D1-98D5-00C04FB687DA" ) {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Open)(THIS_ DWORD dwMode, DWORD * pdwLock) PURE;
    STDMETHOD(Create)(THIS_ DWORD dwMode, DWORD * pdwLock) PURE;
    STDMETHOD(ReleaseLock)(THIS_ DWORD const * pdwLock) PURE;
    STDMETHOD(Close)(THIS_ DWORD const * pdwLock) PURE;
    STDMETHOD(Commit)(THIS_ DWORD const * pdwLock) PURE;
    STDMETHOD(IsLocked)(THIS) PURE;
    STDMETHOD(GetMode)(THIS_ DWORD * pdwMode) PURE;
    STDMETHOD(GetCapabilities)(THIS_ DWORD * pdwCapMask) PURE;
    STDMETHOD(AddEntry)(THIS_ PCWSTR pszName, const FILETIME * pftTimeStamp, DWORD dwMode, HBITMAP hImage ) PURE;
    STDMETHOD(GetEntry)(THIS_ PCWSTR pszName, DWORD dwMode, HBITMAP * phImage) PURE;
    STDMETHOD(DeleteEntry)(THIS_ PCWSTR pszName) PURE;
    STDMETHOD(IsEntryInStore)(THIS_ PCWSTR pszName, FILETIME * pftTimeStamp) PURE;
    STDMETHOD(Enum)(THIS_ LPENUMSHELLIMAGESTORE * ppEnum) PURE;
};
typedef IShellImageStore * LPSHELLIMAGESTORE;

#endif /* (NTDDI_VERSION >= NTDDI_WIN2K && NTDDI_VERSION < NTDDI_VISTA) */

#define ISFB_MASK_STATE          0x00000001
#define ISFB_MASK_BKCOLOR        0x00000002
#define ISFB_MASK_VIEWMODE       0x00000004
#define ISFB_MASK_SHELLFOLDER    0x00000008
#define ISFB_MASK_IDLIST         0x00000010
#define ISFB_MASK_COLORS         0x00000020

#define ISFB_STATE_DEFAULT       0x00000000
#define ISFB_STATE_DEBOSSED      0x00000001
#define ISFB_STATE_ALLOWRENAME   0x00000002
#define ISFB_STATE_NOSHOWTEXT    0x00000004
#define ISFB_STATE_CHANNELBAR    0x00000010
#define ISFB_STATE_QLINKSMODE    0x00000020
#define ISFB_STATE_FULLOPEN      0x00000040
#define ISFB_STATE_NONAMESORT    0x00000080
#define ISFB_STATE_BTNMINSIZE    0x00000100

#define ISFBVIEWMODE_SMALLICONS   0x0001
#define ISFBVIEWMODE_LARGEICONS   0x0002
#if (_WIN32_IE < _WIN32_IE_IE70)
#define ISFBVIEWMODE_LOGOS        0x0003
#endif /* (_WIN32_IE < _WIN32_IE_IE70) */

#include <pshpack8.h>

typedef struct {
    DWORD dwMask;
    DWORD dwStateMask;
    DWORD dwState;
    COLORREF crBkgnd;
    COLORREF crBtnLt;
    COLORREF crBtnDk;
    WORD wViewMode;
    WORD wAlign;
    IShellFolder * psf;
    PIDLIST_ABSOLUTE pidl;
} BANDINFOSFB, *PBANDINFOSFB;

#include <poppack.h>

#undef INTERFACE
#define INTERFACE IShellFolderBand
DECLARE_INTERFACE_IID_(IShellFolderBand, IUnknown, "7FE80CC8-C247-11d0-B93A-00A0C90312E1") {
    STDMETHOD(InitializeSFB)(THIS_ IShellFolder * psf, PCIDLIST_ABSOLUTE pidl) PURE;
    STDMETHOD(SetBandInfoSFB)(THIS_ PBANDINFOSFB pbi) PURE;
    STDMETHOD(GetBandInfoSFB)(THIS_ PBANDINFOSFB pbi) PURE;
};

enum {
    SFBID_PIDLCHANGED,
};

#undef  INTERFACE
#define INTERFACE   IDeskBarClient
DECLARE_INTERFACE_IID_(IDeskBarClient, IOleWindow, "EB0FE175-1A3A-11D0-89B3-00A0C90A90AC") {
    STDMETHOD(SetDeskBarSite)(THIS_ IUnknown * punkSite) PURE;
    STDMETHOD(SetModeDBC)(THIS_ DWORD dwMode) PURE;
    STDMETHOD(UIActivateDBC)(THIS_ DWORD dwState) PURE;
    STDMETHOD(GetSize)(THIS_ DWORD dwWhich, LPRECT prc) PURE;
};

#define DBC_GS_IDEAL     0
#define DBC_GS_SIZEDOWN  1

#define DBC_HIDE         0
#define DBC_SHOW         1
#define DBC_SHOWOBSCURE  2

enum {
    DBCID_EMPTY = 0,
    DBCID_ONDRAG = 1,
    DBCID_CLSIDOFBAR = 2,
    DBCID_RESIZE = 3,
    DBCID_GETBAR = 4,
    DBCID_UPDATESIZE = 5,
};

#define SSM_CLEAR   0x0000
#define SSM_SET     0x0001
#define SSM_REFRESH 0x0002
#define SSM_UPDATE  0x0004

#define SCHEME_DISPLAY  0x0001
#define SCHEME_EDIT     0x0002
#define SCHEME_LOCAL    0x0004
#define SCHEME_GLOBAL   0x0008
#define SCHEME_REFRESH  0x0010
#define SCHEME_UPDATE   0x0020
#define SCHEME_DONOTUSE 0x0040
#define SCHEME_CREATE   0x0080

#undef INTERFACE
#define INTERFACE IActiveDesktopP
DECLARE_INTERFACE_IID_(IActiveDesktopP, IUnknown, "52502EE0-EC80-11D0-89AB-00C04FC2972D") {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetSafeMode)(THIS_ DWORD dwFlags) PURE;
    STDMETHOD(EnsureUpdateHTML)(THIS) PURE;
    STDMETHOD(SetScheme)(THIS_ PCWSTR pwszSchemeName, DWORD dwFlags) PURE;
    STDMETHOD(GetScheme)(THIS_ PWSTR pwszSchemeName, DWORD * pdwcchBuffer, DWORD dwFlags) PURE;
};
typedef IActiveDesktopP *LPACTIVEDESKTOPP;

#define GADOF_DIRTY    0x00000001

#undef INTERFACE
#define INTERFACE IADesktopP2
DECLARE_INTERFACE_IID_(IADesktopP2, IUnknown, "B22754E2-4574-11d1-9888-006097DEACF9") {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(ReReadWallpaper)(THIS) PURE;
    STDMETHOD(GetADObjectFlags)(THIS_ DWORD * pdwFlags, DWORD dwMask) PURE;
    STDMETHOD(UpdateAllDesktopSubscriptions)(THIS) PURE;
    STDMETHOD(MakeDynamicChanges)(THIS_ IOleObject * pOleObj) PURE;
};
typedef IADesktopP2 * LPADESKTOPP2;

#include <pshpack1.h>
typedef struct {
    SHCOLUMNID scid;
    VARTYPE vt;
    DWORD fmt;
    UINT cChars;
    DWORD csFlags;
    WCHAR wszTitle[MAX_COLUMN_NAME_LEN];
    WCHAR wszDescription[MAX_COLUMN_DESC_LEN];
} SHCOLUMNINFO, *LPSHCOLUMNINFO;
typedef const SHCOLUMNINFO * LPCSHCOLUMNINFO;
#include <poppack.h>

#include <pshpack8.h>

typedef struct {
    ULONG dwFlags;
    ULONG dwReserved;
    WCHAR wszFolder[MAX_PATH];
} SHCOLUMNINIT, *LPSHCOLUMNINIT;
typedef const SHCOLUMNINIT * LPCSHCOLUMNINIT;

#define SHCDF_UPDATEITEM  0x00000001

typedef struct {
    ULONG dwFlags;
    DWORD dwFileAttributes;
    ULONG dwReserved;
    WCHAR * pwszExt;
    WCHAR wszFile[MAX_PATH];
} SHCOLUMNDATA, *LPSHCOLUMNDATA;
typedef const SHCOLUMNDATA * LPCSHCOLUMNDATA;

#include <poppack.h>

#undef INTERFACE
#define INTERFACE IColumnProvider
DECLARE_INTERFACE_IID_(IColumnProvider, IUnknown, "E8025004-1C42-11d2-BE2C-00A0C9A83DA1") {
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(Initialize)(THIS_ LPCSHCOLUMNINIT psci) PURE;
    STDMETHOD(GetColumnInfo)(THIS_ DWORD dwIndex, SHCOLUMNINFO * psci) PURE;
    STDMETHOD(GetItemData)(THIS_ LPCSHCOLUMNID pscid, LPCSHCOLUMNDATA pscd, VARIANT * pvarData) PURE;
};

#if (NTDDI_VERSION >= NTDDI_WIN2K)
typedef struct _SHChangeProductKeyAsIDList {
    USHORT cb;
    WCHAR wszProductKey[39];
    USHORT cbZero;
} SHChangeProductKeyAsIDList, *LPSHChangeProductKeyAsIDList;
#endif /* (NTDDI_VERSION >= NTDDI_WIN2K) */

#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(void) SHChangeNotifyRegisterThread(SCNRT_STATUS status);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

SHSTDAPI_(void) PathQualify( PWSTR psz);
SHSTDAPI_(BOOL) PathIsSlowA( LPCSTR pszFile, DWORD dwAttr);
SHSTDAPI_(BOOL) PathIsSlowW( LPCWSTR pszFile, DWORD dwAttr);
#ifdef UNICODE
#define PathIsSlow  PathIsSlowW
#else /* !UNICODE */
#define PathIsSlow  PathIsSlowA
#endif /* !UNICODE */

SHSTDAPI_(BOOL) GetFileNameFromBrowse( HWND hwnd, PWSTR pszFilePath, UINT cchFilePath, PCWSTR pszWorkingDir, PCWSTR pszDefExt, PCWSTR pszFilters, PCWSTR pszTitle);
SHSTDAPI_(int) DriveType(int iDrive);

WINSHELLAPI HPSXA WINAPI SHCreatePropSheetExtArray(HKEY hKey, PCWSTR pszSubKey, UINT max_iface);

#if (NTDDI_VERSION >= NTDDI_WIN2K && NTDDI_VERSION < NTDDI_VISTA)
#undef  INTERFACE
#define INTERFACE   IDefViewFrame
DECLARE_INTERFACE_IID_(IDefViewFrame, IUnknown, "710EB7A0-45ED-11D0-924A-0020AFC7AC4D") {
    STDMETHOD(GetWindowLV)(THIS_ HWND * phwnd) PURE;
    STDMETHOD(ReleaseWindowLV)(THIS) PURE;
    STDMETHOD(GetShellFolder)(THIS_ IShellFolder * *ppsf) PURE;
};
#endif /* (NTDDI_VERSION >= NTDDI_WIN2K && NTDDI_VERSION < NTDDI_VISTA) */

#if (NTDDI_VERSION < NTDDI_VISTA)

#define PPCF_ADDQUOTES               0x00000001
#define PPCF_ADDARGUMENTS            0x00000003
#define PPCF_NODIRECTORIES           0x00000010
#define PPCF_FORCEQUALIFY            0x00000040
#define PPCF_LONGESTPOSSIBLE         0x00000080

SHSTDAPI_(LONG) PathProcessCommand( PCWSTR pszSrc, PWSTR pszDest, int cchDest, DWORD dwFlags);

#endif /* (NTDDI_VERSION < NTDDI_VISTA) */

#if (NTDDI_VERSION < NTDDI_VISTA)
SHSTDAPI SHLoadOLE(LPARAM lParam);
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */

#undef  INTERFACE
#define INTERFACE  IDocViewSite
DECLARE_INTERFACE_IID_(IDocViewSite, IUnknown, "87D605E0-C511-11CF-89A9-00A0C9054129") {
    STDMETHOD(OnSetTitle)(THIS_ VARIANTARG * pvTitle) PURE;
};

#define OPENPROPS_NONE          0x0000
#define OPENPROPS_INHIBITPIF    0x8000
#define GETPROPS_NONE           0x0000
#define SETPROPS_NONE           0x0000
#define CLOSEPROPS_NONE         0x0000
#define CLOSEPROPS_DISCARD      0x0001

#undef  INTERFACE
#define INTERFACE   IInitializeObject
DECLARE_INTERFACE_IID_(IInitializeObject, IUnknown, "4622AD16-FF23-11d0-8D34-00A0C90F2719") {
    STDMETHOD(Initialize)(THIS) PURE;
};

enum {
    BMICON_LARGE = 0,
    BMICON_SMALL
};

#undef  INTERFACE
#define INTERFACE   IBanneredBar
DECLARE_INTERFACE_IID_(IBanneredBar, IUnknown, "596A9A94-013E-11d1-8D34-00A0C90F2719") {
    STDMETHOD(SetIconSize)(THIS_ DWORD iIcon) PURE;
    STDMETHOD(GetIconSize)(THIS_ DWORD * piIcon) PURE;
    STDMETHOD(SetBitmap)(THIS_ HBITMAP hBitmap) PURE;
    STDMETHOD(GetBitmap)(THIS_ HBITMAP * phBitmap) PURE;
};

#include <pshpack8.h>

#define TBIF_APPEND   0
#define TBIF_PREPEND  1
#define TBIF_REPLACE  2
#define TBIF_DEFAULT  0x00000000
#define TBIF_INTERNETBAR  0x00010000
#define TBIF_STANDARDTOOLBAR  0x00020000
#define TBIF_NOTOOLBAR  0x00030000

typedef struct _TBINFO {
    UINT cbuttons;
    UINT uFlags;
} TBINFO;
typedef TBINFO * LPTBINFO;

SHSTDAPI_(BOOL) SHOpenPropSheetA( LPCSTR pszCaption, HKEY ahkeys[], UINT ckeys, const CLSID * pclsidDefault, IDataObject *pdtobj, IShellBrowser *psb, LPCSTR pStartPage);
SHSTDAPI_(BOOL) SHOpenPropSheetW( LPCWSTR pszCaption, HKEY ahkeys[], UINT ckeys, const CLSID * pclsidDefault, IDataObject *pdtobj, IShellBrowser *psb, LPCWSTR pStartPage);
#ifdef UNICODE
#define SHOpenPropSheet  SHOpenPropSheetW
#else /* !UNICODE */
#define SHOpenPropSheet  SHOpenPropSheetA
#endif /* !UNICODE */

#define SFVM_REARRANGE          0x00000001
#define ShellFolderView_ReArrange(_hwnd, _lparam) \
        (BOOL)SHShellFolderView_Message(_hwnd, SFVM_REARRANGE, _lparam)
#define SFVM_ADDOBJECT         0x00000003
#define ShellFolderView_AddObject(_hwnd, _pidl) \
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_ADDOBJECT, (LPARAM)(_pidl))
#define SFVM_REMOVEOBJECT         0x00000006
#define ShellFolderView_RemoveObject(_hwnd, _pidl) \
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_REMOVEOBJECT, (LPARAM)(_pidl))
#define SFVM_UPDATEOBJECT         0x00000007
#define ShellFolderView_UpdateObject(_hwnd, _ppidl) \
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_UPDATEOBJECT, (LPARAM)(_ppidl))
#define SFVM_GETSELECTEDOBJECTS 0x00000009
#define ShellFolderView_GetSelectedObjects(_hwnd, ppidl) \
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_GETSELECTEDOBJECTS, (LPARAM)(ppidl))

typedef struct _SFV_SETITEMPOS {
    PCUITEMID_CHILD pidl;
    POINT pt;
} SFV_SETITEMPOS;
typedef SFV_SETITEMPOS *LPSFV_SETITEMPOS;
typedef const SFV_SETITEMPOS *PCSFV_SETITEMPOS;

#define SFVM_SETITEMPOS         0x0000000e
#define ShellFolderView_SetItemPos(_hwnd, _pidl, _x, _y) \
{       SFV_SETITEMPOS _sip = {_pidl, {_x, _y}}; \
        SHShellFolderView_Message(_hwnd, SFVM_SETITEMPOS, (LPARAM)(LPSFV_SETITEMPOS)&_sip);}
#define SFVM_SETCLIPBOARD       0x00000010
#define ShellFolderView_SetClipboard(_hwnd, _dwEffect) \
        (void)SHShellFolderView_Message(_hwnd, SFVM_SETCLIPBOARD, (LPARAM)(DWORD)(_dwEffect))
#define SFVM_SETPOINTS           0x00000017
#define ShellFolderView_SetPoints(_hwnd, _pdtobj) \
        (void)SHShellFolderView_Message(_hwnd, SFVM_SETPOINTS, (LPARAM)(_pdtobj))

#include <poppack.h>

#ifdef __urlmon_h__
SHDOCAPI_(DWORD) SoftwareUpdateMessageBox( HWND hWnd, PCWSTR pszDistUnit, DWORD dwFlags, LPSOFTDISTINFO psdi);
#endif /* __urlmon_h__ */

#if (NTDDI_VERSION >= NTDDI_WIN2K)
SHSTDAPI SHMultiFileProperties(IDataObject *pdtobj, DWORD dwFlags);
#endif /* (NTDDI_VERSION >= NTDDI_WIN2K) */

SHSTDAPI SHCreateQueryCancelAutoPlayMoniker(IMoniker * * ppmoniker);
STDAPI_(void) PerUserInit(void);
SHSTDAPI_(BOOL)SHRunControlPanel( PCWSTR lpcszCmdLine, HWND hwndMsgParent);

#include <pshpack8.h>

typedef struct tagAAMENUFILENAME {
    SHORT cbTotal;
    BYTE rgbReserved[12];
    WCHAR szFileName[1];
} AASHELLMENUFILENAME, *LPAASHELLMENUFILENAME;

typedef struct tagAASHELLMENUITEM {
    void * lpReserved1;
    int iReserved;
    UINT uiReserved;
    LPAASHELLMENUFILENAME lpName;
    LPWSTR psz;
} AASHELLMENUITEM, *LPAASHELLMENUITEM;

#include <poppack.h>

#if (_WIN32_IE >= _WIN32_IE_XP)

SHDOCAPI_(BOOL) ImportPrivacySettings( PCWSTR pszFilename, BOOL* pfParsePrivacyPreferences, BOOL * pfParsePerSiteRules);
#ifndef IEnumPrivacyRecords
typedef interface IEnumPrivacyRecords IEnumPrivacyRecords;
#endif
SHDOCAPI DoPrivacyDlg(HWND hwndOwner, PCWSTR pszUrl, IEnumPrivacyRecords *pPrivacyEnum, BOOL fReportAllSites);

#endif /* (_WIN32_IE >= _WIN32_IE_XP) */

#include <poppack.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* _SHLOBJ_H */
