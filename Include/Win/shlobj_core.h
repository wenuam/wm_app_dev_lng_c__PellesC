
#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

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
#endif /* BROWSEUIAPI */

#ifndef SHFOLDERAPI
#define SHFOLDERAPI           EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#endif /* !SHFOLDERAPI */

#include <ole2.h>

#ifndef INITGUID
#include <shlguid.h>
#endif /* !INITGUID */

#if __POCC__ >= 500
#pragma once
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2185)  /* Alignment of field 'x' can be less than the natural alignment */
#pragma warn(disable:2198)  /* Nameless field is not standard */
#endif

#include <shtypes.h>
#include <shobjidl_core.h>

#include <pshpack1.h>

SHSTDAPI SHGetMalloc(IMalloc * *ppMalloc);
SHSTDAPI_(void *) SHAlloc(SIZE_T cb);
SHSTDAPI_(void) SHFree( void * pv);

#define GIL_OPENICON            0x0001
#define GIL_FORSHELL            0x0002
#define GIL_ASYNC               0x0020
#define GIL_DEFAULTICON         0x0040
#define GIL_FORSHORTCUT         0x0080
#define GIL_CHECKSHIELD         0x0200

#define GIL_SIMULATEDOC         0x0001
#define GIL_PERINSTANCE         0x0002
#define GIL_PERCLASS            0x0004
#define GIL_NOTFILENAME         0x0008
#define GIL_DONTCACHE           0x0010
#define GIL_SHIELD              0x0200
#define GIL_FORCENOSHIELD       0x0400

#undef  INTERFACE
#define INTERFACE   IExtractIconA

DECLARE_INTERFACE_IID_(IExtractIconA, IUnknown, "000214eb-0000-0000-c000-000000000046") {
    STDMETHOD(GetIconLocation)(THIS_ UINT uFlags, PSTR pszIconFile, UINT cchMax, int * piIndex, UINT * pwFlags) PURE;
    STDMETHOD(Extract)(THIS_ PCSTR pszFile, UINT nIconIndex, HICON * phiconLarge, HICON * phiconSmall, UINT nIconSize) PURE;
};
typedef IExtractIconA * LPEXTRACTICONA;

#undef  INTERFACE
#define INTERFACE   IExtractIconW
DECLARE_INTERFACE_IID_(IExtractIconW, IUnknown, "000214fa-0000-0000-c000-000000000046") {
    STDMETHOD(GetIconLocation)(THIS_ UINT uFlags, PWSTR pszIconFile, UINT cchMax, int * piIndex, UINT * pwFlags) PURE;
    STDMETHOD(Extract)(THIS_ PCWSTR pszFile, UINT nIconIndex, HICON * phiconLarge, HICON * phiconSmall, UINT nIconSize) PURE;
};
typedef IExtractIconW * LPEXTRACTICONW;

#ifdef UNICODE
#define IExtractIcon        IExtractIconW
#define IExtractIconVtbl    IExtractIconWVtbl
#define LPEXTRACTICON       LPEXTRACTICONW
#else /* !UNICODE */
#define IExtractIcon        IExtractIconA
#define IExtractIconVtbl    IExtractIconAVtbl
#define LPEXTRACTICON       LPEXTRACTICONA
#endif /* !UNICODE */

#undef  INTERFACE
#define INTERFACE   IShellIconOverlayManager
DECLARE_INTERFACE_IID_(IShellIconOverlayManager, IUnknown, "f10b5e34-dd3b-42a7-aa7d-2f4ec54bb09b") {
    STDMETHOD(GetFileOverlayInfo)(THIS_ PCWSTR pwszPath, DWORD dwAttrib, int * pIndex, DWORD dwflags) PURE;
    STDMETHOD(GetReservedOverlayInfo)(THIS_ PCWSTR pwszPath, DWORD dwAttrib, int * pIndex, DWORD dwflags, int iReservedID) PURE;
    STDMETHOD(RefreshOverlayImages)(THIS_ DWORD dwFlags) PURE;
    STDMETHOD(LoadNonloadedOverlayIdentifiers)(THIS) PURE;
    STDMETHOD(OverlayIndexFromImageIndex)(THIS_ int iImage, int * piIndex, BOOL fAdd) PURE;
};

#define SIOM_OVERLAYINDEX         0x1
#define SIOM_ICONINDEX            0x2
#define SIOM_RESERVED_SHARED      0
#define SIOM_RESERVED_LINK        1
#define SIOM_RESERVED_SLOWFILE    2
#define SIOM_RESERVED_DEFAULT     3

#undef  INTERFACE
#define INTERFACE   IShellIconOverlay
DECLARE_INTERFACE_IID_(IShellIconOverlay, IUnknown, "7d688a70-c613-11d0-999b-00c04fd655e1") {
    STDMETHOD(GetOverlayIndex)(THIS_ PCUITEMID_CHILD pidl, int * pIndex) PURE;
    STDMETHOD(GetOverlayIconIndex)(THIS_ PCUITEMID_CHILD pidl, int * pIconIndex) PURE;
};

#define OI_DEFAULT 0x00000000
#define OI_ASYNC 0xFFFFEEEE

#define IDO_SHGIOI_SHARE  0x0FFFFFFF
#define IDO_SHGIOI_LINK   0x0FFFFFFE
#define IDO_SHGIOI_SLOWFILE 0x0FFFFFFFD
#define IDO_SHGIOI_DEFAULT  0x0FFFFFFFC
SHSTDAPI_(int) SHGetIconOverlayIndexA( LPCSTR pszIconPath, int iIconIndex);
SHSTDAPI_(int) SHGetIconOverlayIndexW( LPCWSTR pszIconPath, int iIconIndex);
#ifdef UNICODE
#define SHGetIconOverlayIndex  SHGetIconOverlayIndexW
#else /* !UNICODE */
#define SHGetIconOverlayIndex  SHGetIconOverlayIndexA
#endif /* !UNICODE */

typedef enum {
    SLDF_DEFAULT = 0x00000000,
    SLDF_HAS_ID_LIST = 0x00000001,
    SLDF_HAS_LINK_INFO = 0x00000002,
    SLDF_HAS_NAME = 0x00000004,
    SLDF_HAS_RELPATH = 0x00000008,
    SLDF_HAS_WORKINGDIR = 0x00000010,
    SLDF_HAS_ARGS = 0x00000020,
    SLDF_HAS_ICONLOCATION = 0x00000040,
    SLDF_UNICODE = 0x00000080,
    SLDF_FORCE_NO_LINKINFO = 0x00000100,
    SLDF_HAS_EXP_SZ = 0x00000200,
    SLDF_RUN_IN_SEPARATE = 0x00000400,
#if (NTDDI_VERSION < NTDDI_VISTA)
    SLDF_HAS_LOGO3ID = 0x00000800,
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */
    SLDF_HAS_DARWINID = 0x00001000,
    SLDF_RUNAS_USER = 0x00002000,
    SLDF_HAS_EXP_ICON_SZ = 0x00004000,
#if (NTDDI_VERSION >= NTDDI_WINXP)
    SLDF_NO_PIDL_ALIAS = 0x00008000,
    SLDF_FORCE_UNCNAME = 0x00010000,
    SLDF_RUN_WITH_SHIMLAYER = 0x00020000,
#if (NTDDI_VERSION >= NTDDI_VISTA)
    SLDF_FORCE_NO_LINKTRACK = 0x00040000,
    SLDF_ENABLE_TARGET_METADATA = 0x00080000,
    SLDF_DISABLE_LINK_PATH_TRACKING = 0x00100000,
    SLDF_DISABLE_KNOWNFOLDER_RELATIVE_TRACKING = 0x00200000,
#if (NTDDI_VERSION >= NTDDI_WIN7)
    SLDF_NO_KF_ALIAS = 0x00400000,
    SLDF_ALLOW_LINK_TO_LINK = 0x00800000,
    SLDF_UNALIAS_ON_SAVE = 0x01000000,
    SLDF_PREFER_ENVIRONMENT_PATH = 0x02000000,
    SLDF_KEEP_LOCAL_IDLIST_FOR_UNC_TARGET = 0x04000000,
#if (NTDDI_VERSION >= NTDDI_WIN8)
    SLDF_PERSIST_VOLUME_ID_RELATIVE = 0x08000000,
    SLDF_VALID = 0x0FFFF7FF,
#else /* (NTDDI_VERSION < NTDDI_WIN8) */
    SLDF_VALID = 0x07FFF7FF,
#endif /* (NTDDI_VERSION < NTDDI_WIN8) */
#else /* (NTDDI_VERSION < NTDDI_WIN7) */
    SLDF_VALID = 0x003FF7FF,
#endif /* (NTDDI_VERSION < NTDDI_WIN7) */
#endif
    SLDF_RESERVED = (int) 0x80000000,
#endif
} SHELL_LINK_DATA_FLAGS;

/*DEFINE_ENUM_FLAG_OPERATORS(SHELL_LINK_DATA_FLAGS)*/

typedef struct tagDATABLOCKHEADER {
    DWORD cbSize;
    DWORD dwSignature;
} DATABLOCK_HEADER, *LPDATABLOCK_HEADER, *LPDBLIST;

#ifdef LF_FACESIZE
typedef struct {
    DATABLOCK_HEADER DUMMYSTRUCTNAME;
    WORD wFillAttribute;
    WORD wPopupFillAttribute;
    COORD dwScreenBufferSize;
    COORD dwWindowSize;
    COORD dwWindowOrigin;
    DWORD nFont;
    DWORD nInputBufferSize;
    COORD dwFontSize;
    UINT uFontFamily;
    UINT uFontWeight;
    WCHAR FaceName[LF_FACESIZE];
    UINT uCursorSize;
    BOOL bFullScreen;
    BOOL bQuickEdit;
    BOOL bInsertMode;
    BOOL bAutoPosition;
    UINT uHistoryBufferSize;
    UINT uNumberOfHistoryBuffers;
    BOOL bHistoryNoDup;
    COLORREF ColorTable[ 16 ];
} NT_CONSOLE_PROPS, *LPNT_CONSOLE_PROPS;
#define NT_CONSOLE_PROPS_SIG  0xA0000002
#endif /* LF_FACESIZE */

typedef struct {
    DATABLOCK_HEADER DUMMYSTRUCTNAME;
    UINT uCodePage;
} NT_FE_CONSOLE_PROPS, *LPNT_FE_CONSOLE_PROPS;
#define NT_FE_CONSOLE_PROPS_SIG  0xA0000004

typedef struct {
    DATABLOCK_HEADER DUMMYSTRUCTNAME;
    CHAR szDarwinID[MAX_PATH];
    WCHAR szwDarwinID[MAX_PATH];
} EXP_DARWIN_LINK, *LPEXP_DARWIN_LINK;
#define EXP_DARWIN_ID_SIG  0xA0000006

#define EXP_SPECIAL_FOLDER_SIG   0xA0000005

typedef struct {
    DWORD cbSize;
    DWORD dwSignature;
    DWORD idSpecialFolder;
    DWORD cbOffset;
} EXP_SPECIAL_FOLDER, *LPEXP_SPECIAL_FOLDER;

typedef struct {
    DWORD cbSize;
    DWORD dwSignature;
    CHAR szTarget[ MAX_PATH ];
    WCHAR swzTarget[ MAX_PATH ];
} EXP_SZ_LINK, *LPEXP_SZ_LINK;
#define EXP_SZ_LINK_SIG  0xA0000001
#define EXP_SZ_ICON_SIG  0xA0000007

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct {
    DWORD cbSize;
    DWORD dwSignature;
    BYTE abPropertyStorage[1];
} EXP_PROPERTYSTORAGE;
#define EXP_PROPERTYSTORAGE_SIG  0xA0000009
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#ifdef _SHELLAPI_H

#undef  INTERFACE
#define INTERFACE   IShellExecuteHookA
DECLARE_INTERFACE_IID_(IShellExecuteHookA, IUnknown, "000214f5-0000-0000-c000-000000000046") {
    STDMETHOD(Execute)(THIS_ LPSHELLEXECUTEINFOA pei) PURE;
};

#undef  INTERFACE
#define INTERFACE   IShellExecuteHookW
DECLARE_INTERFACE_IID_(IShellExecuteHookW, IUnknown, "000214fb-0000-0000-c000-000000000046") {
    STDMETHOD(Execute)(THIS_ LPSHELLEXECUTEINFOW pei) PURE;
};

#ifdef UNICODE
#define IShellExecuteHook       IShellExecuteHookW
#define IShellExecuteHookVtbl   IShellExecuteHookWVtbl
#else /* !UNICODE */
#define IShellExecuteHook       IShellExecuteHookA
#define IShellExecuteHookVtbl   IShellExecuteHookAVtbl
#endif /* !UNICODE */

#endif /* _SHELLAPI_H */

#undef  INTERFACE
#define INTERFACE   IURLSearchHook
DECLARE_INTERFACE_IID_(IURLSearchHook, IUnknown, "ac60f6a0-0fd9-11d0-99cb-00c04fd64497") {
    STDMETHOD(Translate)(THIS_ PWSTR pwszSearchURL, DWORD cchBufferSize) PURE;
};

#undef  INTERFACE
#define INTERFACE   ISearchContext
DECLARE_INTERFACE_IID_(ISearchContext, IUnknown, "09F656A2-41AF-480C-88F7-16CC0D164615") {
    STDMETHOD(GetSearchUrl)(THIS_ BSTR * pbstrSearchUrl) PURE;
    STDMETHOD(GetSearchText)(THIS_ BSTR * pbstrSearchText) PURE;
    STDMETHOD(GetSearchStyle)(THIS_ DWORD * pdwSearchStyle) PURE;
};

#undef  INTERFACE
#define INTERFACE   IURLSearchHook2
DECLARE_INTERFACE_IID_(IURLSearchHook2, IURLSearchHook, "5ee44da4-6d32-46e3-86bc-07540dedd0e0") {
    STDMETHOD(TranslateWithSearchContext)(THIS_ PWSTR pwszSearchURL, DWORD cchBufferSize, ISearchContext * pSearchContext) PURE;
};

#define FCIDM_SHVIEWFIRST           0x0000
#define FCIDM_SHVIEWLAST            0x7fff
#define FCIDM_BROWSERFIRST          0xa000
#define FCIDM_BROWSERLAST           0xbf00
#define FCIDM_GLOBALFIRST           0x8000
#define FCIDM_GLOBALLAST            0x9fff

#define FCIDM_MENU_FILE             (FCIDM_GLOBALFIRST+0x0000)
#define FCIDM_MENU_EDIT             (FCIDM_GLOBALFIRST+0x0040)
#define FCIDM_MENU_VIEW             (FCIDM_GLOBALFIRST+0x0080)
#define FCIDM_MENU_VIEW_SEP_OPTIONS (FCIDM_GLOBALFIRST+0x0081)
#define FCIDM_MENU_TOOLS            (FCIDM_GLOBALFIRST+0x00c0)
#define FCIDM_MENU_TOOLS_SEP_GOTO   (FCIDM_GLOBALFIRST+0x00c1)
#define FCIDM_MENU_HELP             (FCIDM_GLOBALFIRST+0x0100)
#define FCIDM_MENU_FIND             (FCIDM_GLOBALFIRST+0x0140)
#define FCIDM_MENU_EXPLORE          (FCIDM_GLOBALFIRST+0x0150)
#define FCIDM_MENU_FAVORITES        (FCIDM_GLOBALFIRST+0x0170)

SHSTDAPI_(PIDLIST_RELATIVE) ILClone( PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(PITEMID_CHILD) ILCloneFirst( PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCombine( PCIDLIST_ABSOLUTE pidl1, PCUIDLIST_RELATIVE pidl2);
SHSTDAPI_(void) ILFree( PIDLIST_RELATIVE pidl);
SHSTDAPI_(PUIDLIST_RELATIVE) ILGetNext( PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(UINT) ILGetSize( PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(PUIDLIST_RELATIVE) ILFindChild( PIDLIST_ABSOLUTE pidlParent, PCIDLIST_ABSOLUTE pidlChild);
SHSTDAPI_(PUITEMID_CHILD) ILFindLastID( PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(BOOL) ILRemoveLastID( PUIDLIST_RELATIVE pidl);
SHSTDAPI_(BOOL) ILIsEqual( PCIDLIST_ABSOLUTE pidl1, PCIDLIST_ABSOLUTE pidl2);
SHSTDAPI_(BOOL) ILIsParent( PCIDLIST_ABSOLUTE pidl1, PCIDLIST_ABSOLUTE pidl2, BOOL fImmediate);
SHSTDAPI ILSaveToStream(IStream *pstm, PCUIDLIST_RELATIVE pidl);
EXTERN_C /*DECLSPEC_DEPRECATED*/ HRESULT STDAPICALLTYPE ILLoadFromStream( IStream *pstm, PIDLIST_RELATIVE *pidl);
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI ILLoadFromStreamEx(IStream *pstm, PIDLIST_RELATIVE *pidl);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

SHSTDAPI_(PIDLIST_ABSOLUTE) ILCreateFromPathA( PCSTR pszPath);
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCreateFromPathW( PCWSTR pszPath);

#ifdef NO_WRAPPERS_FOR_ILCREATEFROMPATH
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCreateFromPath( PCTSTR pszPath);
#else /* !NO_WRAPPERS_FOR_ILCREATEFROMPATH */
#ifdef UNICODE
#define ILCreateFromPath        ILCreateFromPathW
#else /* !UNICODE */
#define ILCreateFromPath        ILCreateFromPathA
#endif /* !UNICODE */
#endif /* !NO_WRAPPERS_FOR_ILCREATEFROMPATH */

SHSTDAPI SHILCreateFromPath(PCWSTR pszPath, PIDLIST_ABSOLUTE *ppidl, DWORD *rgfInOut);

#define VOID_OFFSET(pv, cb)     ((void*)(((BYTE*)(pv))+(cb)))

#define ILCloneFull             ILClone
#define ILCloneChild            ILCloneFirst
#define ILSkip(pidl, cb)        ((PUIDLIST_RELATIVE)VOID_OFFSET((pidl), (cb)))
#define ILNext(pidl)            ILSkip(pidl, (pidl)->mkid.cb)
#define ILIsAligned(pidl)       (((DWORD_PTR)(pidl) & (sizeof(void*) - 1)) == 0)
#define ILIsEmpty(pidl)         ((pidl) == NULL || (pidl)->mkid.cb==0)
#define ILIsChild(pidl)         (ILIsEmpty(pidl) || ILIsEmpty(ILNext(pidl)))

SHSTDAPI_(PIDLIST_RELATIVE) ILAppendID( PIDLIST_RELATIVE pidl, LPCSHITEMID pmkid, BOOL fAppend);

#if (NTDDI_VERSION >= NTDDI_VISTA)
enum {
    GPFIDL_DEFAULT = 0x0000,
    GPFIDL_ALTNAME = 0x0001,
    GPFIDL_UNCPRINTER = 0x0002,
};

typedef int GPFIDL_FLAGS;
SHSTDAPI_(BOOL) SHGetPathFromIDListEx( PCIDLIST_ABSOLUTE pidl, PWSTR pszPath, DWORD cchPath, GPFIDL_FLAGS uOpts);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

SHSTDAPI_(BOOL) SHGetPathFromIDListA( PCIDLIST_ABSOLUTE pidl, LPSTR pszPath);
SHSTDAPI_(BOOL) SHGetPathFromIDListW( PCIDLIST_ABSOLUTE pidl, LPWSTR pszPath);
#ifdef UNICODE
#define SHGetPathFromIDList  SHGetPathFromIDListW
#else /* !UNICODE */
#define SHGetPathFromIDList  SHGetPathFromIDListA
#endif /* !UNICODE */

SHSTDAPI_(int) SHCreateDirectory( HWND hwnd, PCWSTR pszPath);
SHSTDAPI_(int) SHCreateDirectoryExA( HWND hwnd, LPCSTR pszPath, const SECURITY_ATTRIBUTES *psa);
SHSTDAPI_(int) SHCreateDirectoryExW( HWND hwnd, LPCWSTR pszPath, const SECURITY_ATTRIBUTES *psa);
#ifdef UNICODE
#define SHCreateDirectoryEx  SHCreateDirectoryExW
#else /* !UNICODE */
#define SHCreateDirectoryEx  SHCreateDirectoryExA
#endif /* !UNICODE */

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define OFASI_EDIT          0x0001
#define OFASI_OPENDESKTOP   0x0002
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_WINXP)
SHSTDAPI SHOpenFolderAndSelectItems(PCIDLIST_ABSOLUTE pidlFolder, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, DWORD dwFlags);
SHSTDAPI SHCreateShellItem(PCIDLIST_ABSOLUTE pidlParent, IShellFolder *psfParent, PCUITEMID_CHILD pidl, IShellItem * *ppsi);
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

#define REGSTR_PATH_SPECIAL_FOLDERS     REGSTR_PATH_EXPLORER TEXT("\\Shell Folders")

#define CSIDL_DESKTOP                   0x0000
#define CSIDL_INTERNET                  0x0001
#define CSIDL_PROGRAMS                  0x0002
#define CSIDL_CONTROLS                  0x0003
#define CSIDL_PRINTERS                  0x0004
#define CSIDL_PERSONAL                  0x0005
#define CSIDL_FAVORITES                 0x0006
#define CSIDL_STARTUP                   0x0007
#define CSIDL_RECENT                    0x0008
#define CSIDL_SENDTO                    0x0009
#define CSIDL_BITBUCKET                 0x000a
#define CSIDL_STARTMENU                 0x000b
#define CSIDL_MYDOCUMENTS               CSIDL_PERSONAL
#define CSIDL_MYMUSIC                   0x000d
#define CSIDL_MYVIDEO                   0x000e
#define CSIDL_DESKTOPDIRECTORY          0x0010
#define CSIDL_DRIVES                    0x0011
#define CSIDL_NETWORK                   0x0012
#define CSIDL_NETHOOD                   0x0013
#define CSIDL_FONTS                     0x0014
#define CSIDL_TEMPLATES                 0x0015
#define CSIDL_COMMON_STARTMENU          0x0016
#define CSIDL_COMMON_PROGRAMS           0X0017
#define CSIDL_COMMON_STARTUP            0x0018
#define CSIDL_COMMON_DESKTOPDIRECTORY   0x0019
#define CSIDL_APPDATA                   0x001a
#define CSIDL_PRINTHOOD                 0x001b

#ifndef CSIDL_LOCAL_APPDATA
#define CSIDL_LOCAL_APPDATA             0x001c
#endif /* CSIDL_LOCAL_APPDATA */

#define CSIDL_ALTSTARTUP                0x001d
#define CSIDL_COMMON_ALTSTARTUP         0x001e
#define CSIDL_COMMON_FAVORITES          0x001f

#ifndef _SHFOLDER_H_
#define CSIDL_INTERNET_CACHE            0x0020
#define CSIDL_COOKIES                   0x0021
#define CSIDL_HISTORY                   0x0022
#define CSIDL_COMMON_APPDATA            0x0023
#define CSIDL_WINDOWS                   0x0024
#define CSIDL_SYSTEM                    0x0025
#define CSIDL_PROGRAM_FILES             0x0026
#define CSIDL_MYPICTURES                0x0027
#endif /* !_SHFOLDER_H_ */

#define CSIDL_PROFILE                   0x0028
#define CSIDL_SYSTEMX86                 0x0029
#define CSIDL_PROGRAM_FILESX86          0x002a

#ifndef _SHFOLDER_H_
#define CSIDL_PROGRAM_FILES_COMMON      0x002b
#endif /* !_SHFOLDER_H_ */

#define CSIDL_PROGRAM_FILES_COMMONX86   0x002c
#define CSIDL_COMMON_TEMPLATES          0x002d

#ifndef _SHFOLDER_H_
#define CSIDL_COMMON_DOCUMENTS          0x002e
#define CSIDL_COMMON_ADMINTOOLS         0x002f
#define CSIDL_ADMINTOOLS                0x0030
#endif /* !_SHFOLDER_H_ */

#define CSIDL_CONNECTIONS               0x0031
#define CSIDL_COMMON_MUSIC              0x0035
#define CSIDL_COMMON_PICTURES           0x0036
#define CSIDL_COMMON_VIDEO              0x0037
#define CSIDL_RESOURCES                 0x0038

#ifndef _SHFOLDER_H_
#define CSIDL_RESOURCES_LOCALIZED       0x0039
#endif /* !_SHFOLDER_H_ */

#define CSIDL_COMMON_OEM_LINKS          0x003a
#define CSIDL_CDBURN_AREA               0x003b
#define CSIDL_COMPUTERSNEARME           0x003d

#ifndef _SHFOLDER_H_
#define CSIDL_FLAG_CREATE               0x8000
#endif /* !_SHFOLDER_H_ */

#define CSIDL_FLAG_DONT_VERIFY          0x4000
#define CSIDL_FLAG_DONT_UNEXPAND        0x2000
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define CSIDL_FLAG_NO_ALIAS             0x1000
#define CSIDL_FLAG_PER_USER_INIT        0x0800
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#define CSIDL_FLAG_MASK                 0xFF00

STDAPI SHGetSpecialFolderLocation(HWND hwnd, int csidl, PIDLIST_ABSOLUTE *ppidl);

SHSTDAPI_(PIDLIST_ABSOLUTE) SHCloneSpecialIDList(HWND hwnd, int csidl, BOOL fCreate);
SHSTDAPI_(BOOL) SHGetSpecialFolderPathA(HWND hwnd, LPSTR pszPath, int csidl, BOOL fCreate);
SHSTDAPI_(BOOL) SHGetSpecialFolderPathW(HWND hwnd, LPWSTR pszPath, int csidl, BOOL fCreate);
#ifdef UNICODE
#define SHGetSpecialFolderPath  SHGetSpecialFolderPathW
#else /* !UNICODE */
#define SHGetSpecialFolderPath  SHGetSpecialFolderPathA
#endif /* !UNICODE */

#if (NTDDI_VERSION >= NTDDI_WIN2K)

SHSTDAPI_(void) SHFlushSFCache(void);

typedef enum {
    SHGFP_TYPE_CURRENT = 0,
    SHGFP_TYPE_DEFAULT = 1,
} SHGFP_TYPE;

SHFOLDERAPI SHGetFolderPathA(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPSTR pszPath);
SHFOLDERAPI SHGetFolderPathW(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath);
#ifdef UNICODE
#define SHGetFolderPath  SHGetFolderPathW
#else /* !UNICODE */
#define SHGetFolderPath  SHGetFolderPathA
#endif /* !UNICODE */
SHSTDAPI SHGetFolderLocation(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, PIDLIST_ABSOLUTE *ppidl);

#endif /* (NTDDI_VERSION >= NTDDI_WIN2K) */

#if (NTDDI_VERSION >= NTDDI_WINXP)
STDAPI SHSetFolderPathA(int csidl, HANDLE hToken, DWORD dwFlags, LPCSTR pszPath);
STDAPI SHSetFolderPathW(int csidl, HANDLE hToken, DWORD dwFlags, LPCWSTR pszPath);
#ifdef UNICODE
#define SHSetFolderPath  SHSetFolderPathW
#else /* !UNICODE */
#define SHSetFolderPath  SHSetFolderPathA
#endif /* !UNICODE */
STDAPI SHGetFolderPathAndSubDirA(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPCSTR pszSubDir, LPSTR pszPath);
STDAPI SHGetFolderPathAndSubDirW(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPCWSTR pszSubDir, LPWSTR pszPath);
#ifdef UNICODE
#define SHGetFolderPathAndSubDir  SHGetFolderPathAndSubDirW
#else /* !UNICODE */
#define SHGetFolderPathAndSubDir  SHGetFolderPathAndSubDirA
#endif /* !UNICODE */
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef enum {
    KF_FLAG_DEFAULT = 0x00000000,
#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
    KF_FLAG_FORCE_APP_DATA_REDIRECTION = 0x00080000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS3) */
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
    KF_FLAG_RETURN_FILTER_REDIRECTION_TARGET = 0x00040000,
    KF_FLAG_FORCE_PACKAGE_REDIRECTION = 0x00020000,
    KF_FLAG_NO_PACKAGE_REDIRECTION = 0x00010000,
    KF_FLAG_FORCE_APPCONTAINER_REDIRECTION = 0x00020000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS2) */
#if (NTDDI_VERSION >= NTDDI_WIN7)
    KF_FLAG_NO_APPCONTAINER_REDIRECTION = 0x00010000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */
    KF_FLAG_CREATE = 0x00008000,
    KF_FLAG_DONT_VERIFY = 0x00004000,
    KF_FLAG_DONT_UNEXPAND = 0x00002000,
    KF_FLAG_NO_ALIAS = 0x00001000,
    KF_FLAG_INIT = 0x00000800,
    KF_FLAG_DEFAULT_PATH = 0x00000400,
    KF_FLAG_NOT_PARENT_RELATIVE = 0x00000200,
    KF_FLAG_SIMPLE_IDLIST = 0x00000100,
    KF_FLAG_ALIAS_ONLY = 0x80000000,
} KNOWN_FOLDER_FLAG;

/*DEFINE_ENUM_FLAG_OPERATORS(KNOWN_FOLDER_FLAG)*/

STDAPI SHGetKnownFolderIDList(REFKNOWNFOLDERID rfid,
    DWORD dwFlags,
    HANDLE hToken,
    PIDLIST_ABSOLUTE *ppidl);

STDAPI SHSetKnownFolderPath(REFKNOWNFOLDERID rfid,
    DWORD dwFlags,
    HANDLE hToken,
    PCWSTR pszPath);

STDAPI SHGetKnownFolderPath(REFKNOWNFOLDERID rfid,
    DWORD dwFlags,
    HANDLE hToken,
    PWSTR *ppszPath);

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_WIN7)
STDAPI SHGetKnownFolderItem(REFKNOWNFOLDERID rfid,
    KNOWN_FOLDER_FLAG flags,
    HANDLE hToken,
    REFIID riid,
    void * *ppv);
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#if (NTDDI_VERSION >= NTDDI_WIN2K)

#define FCS_READ                    0x00000001
#define FCS_FORCEWRITE              0x00000002
#define FCS_WRITE                   (FCS_READ | FCS_FORCEWRITE)

#define FCS_FLAG_DRAGDROP           2

#define FCSM_VIEWID                 0x00000001
#define FCSM_WEBVIEWTEMPLATE        0x00000002
#define FCSM_INFOTIP                0x00000004
#define FCSM_CLSID                  0x00000008
#define FCSM_ICONFILE               0x00000010
#define FCSM_LOGO                   0x00000020
#define FCSM_FLAGS                  0x00000040

#if (NTDDI_VERSION >= NTDDI_VISTA)

#include <pshpack8.h>
typedef struct {
    DWORD dwSize;
    DWORD dwMask;
    SHELLVIEWID * pvid;
    LPWSTR pszWebViewTemplate;
    DWORD cchWebViewTemplate;
    LPWSTR pszWebViewTemplateVersion;
    LPWSTR pszInfoTip;
    DWORD cchInfoTip;
    CLSID * pclsid;
    DWORD dwFlags;
    LPWSTR pszIconFile;
    DWORD cchIconFile;
    int iIconIndex;
    LPWSTR pszLogo;
    DWORD cchLogo;
} SHFOLDERCUSTOMSETTINGS, *LPSHFOLDERCUSTOMSETTINGS;
#include <poppack.h>

SHSTDAPI SHGetSetFolderCustomSettings(LPSHFOLDERCUSTOMSETTINGS pfcs, PCWSTR pszPath, DWORD dwReadWrite);

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#endif /* (NTDDI_VERSION >= NTDDI_WIN2K) */

typedef int (CALLBACK * BFFCALLBACK)(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData);

#include <pshpack8.h>

typedef struct _browseinfoA {
    HWND hwndOwner;
    PCIDLIST_ABSOLUTE pidlRoot;
    LPSTR pszDisplayName;
    LPCSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
} BROWSEINFOA, *PBROWSEINFOA, *LPBROWSEINFOA;

typedef struct _browseinfoW {
    HWND hwndOwner;
    PCIDLIST_ABSOLUTE pidlRoot;
    LPWSTR pszDisplayName;
    LPCWSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
} BROWSEINFOW, *PBROWSEINFOW, *LPBROWSEINFOW;

#include <poppack.h>

#ifdef UNICODE
#define BROWSEINFO      BROWSEINFOW
#define PBROWSEINFO     PBROWSEINFOW
#define LPBROWSEINFO    LPBROWSEINFOW
#else /* !UNICODE */
#define BROWSEINFO      BROWSEINFOA
#define PBROWSEINFO     PBROWSEINFOA
#define LPBROWSEINFO    LPBROWSEINFOA
#endif /* !UNICODE */

#define BIF_RETURNONLYFSDIRS    0x00000001
#define BIF_DONTGOBELOWDOMAIN   0x00000002
#define BIF_STATUSTEXT          0x00000004
#define BIF_RETURNFSANCESTORS   0x00000008
#define BIF_EDITBOX             0x00000010
#define BIF_VALIDATE            0x00000020
#define BIF_NEWDIALOGSTYLE      0x00000040
#define BIF_USENEWUI            (BIF_NEWDIALOGSTYLE | BIF_EDITBOX)
#define BIF_BROWSEINCLUDEURLS   0x00000080
#define BIF_UAHINT              0x00000100
#define BIF_NONEWFOLDERBUTTON   0x00000200
#define BIF_NOTRANSLATETARGETS  0x00000400

#define BIF_BROWSEFORCOMPUTER   0x00001000
#define BIF_BROWSEFORPRINTER    0x00002000
#define BIF_BROWSEINCLUDEFILES  0x00004000
#define BIF_SHAREABLE           0x00008000
#define BIF_BROWSEFILEJUNCTIONS 0x00010000

#define BFFM_INITIALIZED        1
#define BFFM_SELCHANGED         2
#define BFFM_VALIDATEFAILEDA    3
#define BFFM_VALIDATEFAILEDW    4
#define BFFM_IUNKNOWN           5

#define BFFM_SETSTATUSTEXTA     (WM_USER + 100)
#define BFFM_ENABLEOK           (WM_USER + 101)
#define BFFM_SETSELECTIONA      (WM_USER + 102)
#define BFFM_SETSELECTIONW      (WM_USER + 103)
#define BFFM_SETSTATUSTEXTW     (WM_USER + 104)
#define BFFM_SETOKTEXT          (WM_USER + 105)
#define BFFM_SETEXPANDED        (WM_USER + 106)

SHSTDAPI_(PIDLIST_ABSOLUTE) SHBrowseForFolderA( LPBROWSEINFOA lpbi);
SHSTDAPI_(PIDLIST_ABSOLUTE) SHBrowseForFolderW( LPBROWSEINFOW lpbi);
#ifdef UNICODE
#define SHBrowseForFolder   SHBrowseForFolderW
#define BFFM_SETSTATUSTEXT  BFFM_SETSTATUSTEXTW
#define BFFM_SETSELECTION   BFFM_SETSELECTIONW
#define BFFM_VALIDATEFAILED BFFM_VALIDATEFAILEDW
#else /* !UNICODE */
#define SHBrowseForFolder   SHBrowseForFolderA
#define BFFM_SETSTATUSTEXT  BFFM_SETSTATUSTEXTA
#define BFFM_SETSELECTION   BFFM_SETSELECTIONA
#define BFFM_VALIDATEFAILED BFFM_VALIDATEFAILEDA
#endif /* !UNICODE */

SHSTDAPI SHLoadInProc(REFCLSID rclsid);

enum {
    ISHCUTCMDID_DOWNLOADICON = 0,
    ISHCUTCMDID_INTSHORTCUTCREATE = 1,
#if (_WIN32_IE >= _WIN32_IE_IE70)
    ISHCUTCMDID_COMMITHISTORY = 2,
    ISHCUTCMDID_SETUSERAWURL = 3,
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
};
#define CMDID_INTSHORTCUTCREATE ISHCUTCMDID_INTSHORTCUTCREATE

#define STR_PARSE_WITH_PROPERTIES  L"ParseWithProperties"
#define STR_PARSE_PARTIAL_IDLIST   L"ParseOriginalItem"

SHSTDAPI SHGetDesktopFolder(IShellFolder * *ppshf);

#undef  INTERFACE
#define INTERFACE   IShellDetails
DECLARE_INTERFACE_IID_(IShellDetails, IUnknown, "000214EC-0000-0000-c000-000000000046") {
    STDMETHOD(GetDetailsOf)(THIS_ PCUITEMID_CHILD pidl, UINT iColumn, SHELLDETAILS * pDetails) PURE;
    STDMETHOD(ColumnClick)(THIS_ UINT iColumn) PURE;
};

#undef INTERFACE
#define INTERFACE IObjMgr
DECLARE_INTERFACE_IID_(IObjMgr, IUnknown, "00BB2761-6A77-11D0-A535-00C04FD7D062") {
    STDMETHOD(Append) (THIS_ IUnknown * punk) PURE;
    STDMETHOD(Remove) (THIS_ IUnknown * punk) PURE;
};

#undef INTERFACE
#define INTERFACE IACList
DECLARE_INTERFACE_IID_(IACList, IUnknown, "77A130B0-94FD-11D0-A544-00C04FD7d062") {
    STDMETHOD(Expand) (THIS_ PCWSTR pszExpand) PURE;
};

#undef INTERFACE
#define INTERFACE IACList2
typedef enum _tagAUTOCOMPLETELISTOPTIONS {
    ACLO_NONE = 0,
    ACLO_CURRENTDIR = 1,
    ACLO_MYCOMPUTER = 2,
    ACLO_DESKTOP = 4,
    ACLO_FAVORITES = 8,
    ACLO_FILESYSONLY = 16,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    ACLO_FILESYSDIRS = 32,
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#if (_WIN32_IE >= _WIN32_IE_IE70)
    ACLO_VIRTUALNAMESPACE = 64,
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
} AUTOCOMPLETELISTOPTIONS;

DECLARE_INTERFACE_IID_(IACList2, IACList, "470141a0-5186-11d2-bbb6-0060977b464c") {
    STDMETHOD(SetOptions)(THIS_ DWORD dwFlag) PURE;
    STDMETHOD(GetOptions)(THIS_ DWORD * pdwFlag) PURE;
};

#define PROGDLG_NORMAL          0x00000000
#define PROGDLG_MODAL           0x00000001
#define PROGDLG_AUTOTIME        0x00000002
#define PROGDLG_NOTIME          0x00000004
#define PROGDLG_NOMINIMIZE      0x00000008
#define PROGDLG_NOPROGRESSBAR   0x00000010
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PROGDLG_MARQUEEPROGRESS 0x00000020
#define PROGDLG_NOCANCEL        0x00000040
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */

#define PDTIMER_RESET       0x00000001

#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PDTIMER_PAUSE       0x00000002
#define PDTIMER_RESUME      0x00000003
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */

#undef  INTERFACE
#define INTERFACE   IProgressDialog
DECLARE_INTERFACE_IID_(IProgressDialog, IUnknown, "EBBC7C04-315E-11d2-B62F-006097DF5BD4") {
    STDMETHOD(StartProgressDialog)(THIS_ HWND hwndParent, IUnknown * punkEnableModless, DWORD dwFlags, LPCVOID pvResevered) PURE;
    STDMETHOD(StopProgressDialog)(THIS) PURE;
    STDMETHOD(SetTitle)(THIS_ PCWSTR pwzTitle) PURE;
    STDMETHOD(SetAnimation)(THIS_ HINSTANCE hInstAnimation, UINT idAnimation) PURE;
    STDMETHOD_(BOOL, HasUserCancelled) (THIS) PURE;
    STDMETHOD(SetProgress)(THIS_ DWORD dwCompleted, DWORD dwTotal) PURE;
    STDMETHOD(SetProgress64)(THIS_ ULONGLONG ullCompleted, ULONGLONG ullTotal) PURE;
    STDMETHOD(SetLine)(THIS_ DWORD dwLineNum, PCWSTR pwzString, BOOL fCompactPath, LPCVOID pvResevered) PURE;
    STDMETHOD(SetCancelMsg)(THIS_ PCWSTR pwzCancelMsg, LPCVOID pvResevered) PURE;
    STDMETHOD(Timer)(THIS_ DWORD dwTimerAction, LPCVOID pvResevered) PURE;
};

#undef  INTERFACE
#define INTERFACE   IDockingWindowSite
DECLARE_INTERFACE_IID_(IDockingWindowSite, IOleWindow, "2a342fc2-7b26-11d0-8ca9-00a0c92dbfe8") {
    STDMETHOD(GetBorderDW) (THIS_ IUnknown * punkObj, RECT * prcBorder) PURE;
    STDMETHOD(RequestBorderSpaceDW) (THIS_ IUnknown * punkObj, LPCBORDERWIDTHS pbw) PURE;
    STDMETHOD(SetBorderSpaceDW) (THIS_ IUnknown * punkObj, LPCBORDERWIDTHS pbw) PURE;
};

#ifdef _WININET_H

typedef struct _tagWALLPAPEROPT {
    DWORD dwSize;
    DWORD dwStyle;
} WALLPAPEROPT;

typedef WALLPAPEROPT *LPWALLPAPEROPT;
typedef const WALLPAPEROPT *LPCWALLPAPEROPT;

typedef struct _tagCOMPONENTSOPT {
    DWORD dwSize;
    BOOL fEnableComponents;
    BOOL fActiveDesktop;
} COMPONENTSOPT;

typedef COMPONENTSOPT *LPCOMPONENTSOPT;
typedef const COMPONENTSOPT *LPCCOMPONENTSOPT;

typedef struct _tagCOMPPOS {
    DWORD dwSize;
    int iLeft;
    int iTop;
    DWORD dwWidth;
    DWORD dwHeight;
    int izIndex;
    BOOL fCanResize;
    BOOL fCanResizeX;
    BOOL fCanResizeY;
    int iPreferredLeftPercent;
    int iPreferredTopPercent;
} COMPPOS;

typedef COMPPOS *LPCOMPPOS;
typedef const COMPPOS *LPCCOMPPOS;

typedef struct _tagCOMPSTATEINFO {
    DWORD dwSize;
    int iLeft;
    int iTop;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwItemState;
} COMPSTATEINFO;

typedef COMPSTATEINFO *LPCOMPSTATEINFO;
typedef const COMPSTATEINFO *LPCCOMPSTATEINFO;

#define COMPONENT_TOP (0x3fffffff)

#define COMP_TYPE_HTMLDOC       0
#define COMP_TYPE_PICTURE       1
#define COMP_TYPE_WEBSITE       2
#define COMP_TYPE_CONTROL       3
#define COMP_TYPE_CFHTML        4
#define COMP_TYPE_MAX           4

typedef struct _tagIE4COMPONENT {
    DWORD dwSize;
    DWORD dwID;
    int iComponentType;
    BOOL fChecked;
    BOOL fDirty;
    BOOL fNoScroll;
    COMPPOS cpPos;
    WCHAR wszFriendlyName[MAX_PATH];
    WCHAR wszSource[INTERNET_MAX_URL_LENGTH];
    WCHAR wszSubscribedURL[INTERNET_MAX_URL_LENGTH];
} IE4COMPONENT;

typedef IE4COMPONENT *LPIE4COMPONENT;
typedef const IE4COMPONENT *LPCIE4COMPONENT;

typedef struct _tagCOMPONENT {
    DWORD dwSize;
    DWORD dwID;
    int iComponentType;
    BOOL fChecked;
    BOOL fDirty;
    BOOL fNoScroll;
    COMPPOS cpPos;
    WCHAR wszFriendlyName[MAX_PATH];
    WCHAR wszSource[INTERNET_MAX_URL_LENGTH];
    WCHAR wszSubscribedURL[INTERNET_MAX_URL_LENGTH];
    DWORD dwCurItemState;
    COMPSTATEINFO csiOriginal;
    COMPSTATEINFO csiRestored;
} COMPONENT;

typedef COMPONENT *LPCOMPONENT;
typedef const COMPONENT *LPCCOMPONENT;

#define IS_NORMAL               0x00000001
#define IS_FULLSCREEN           0x00000002
#define IS_SPLIT                0x00000004
#define IS_VALIDSIZESTATEBITS   (IS_NORMAL | IS_SPLIT | IS_FULLSCREEN)
#define IS_VALIDSTATEBITS       (IS_NORMAL | IS_SPLIT | IS_FULLSCREEN | 0x80000000 | 0x40000000)

#define AD_APPLY_SAVE             0x00000001
#define AD_APPLY_HTMLGEN          0x00000002
#define AD_APPLY_REFRESH          0x00000004
#define AD_APPLY_ALL              (AD_APPLY_SAVE | AD_APPLY_HTMLGEN | AD_APPLY_REFRESH)
#define AD_APPLY_FORCE            0x00000008
#define AD_APPLY_BUFFERED_REFRESH 0x00000010
#define AD_APPLY_DYNAMICREFRESH   0x00000020

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define AD_GETWP_BMP            0x00000000
#define AD_GETWP_IMAGE          0x00000001
#define AD_GETWP_LAST_APPLIED   0x00000002
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#define WPSTYLE_CENTER      0
#define WPSTYLE_TILE        1
#define WPSTYLE_STRETCH     2
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define WPSTYLE_KEEPASPECT  3
#define WPSTYLE_CROPTOFIT   4
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define WPSTYLE_SPAN        5
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define WPSTYLE_MAX         6
#elif (NTDDI_VERSION >= NTDDI_WIN7)
#define WPSTYLE_MAX         5
#else
#define WPSTYLE_MAX         3
#endif /* NTDDI_VERSION */

#define COMP_ELEM_TYPE          0x00000001
#define COMP_ELEM_CHECKED       0x00000002
#define COMP_ELEM_DIRTY         0x00000004
#define COMP_ELEM_NOSCROLL      0x00000008
#define COMP_ELEM_POS_LEFT      0x00000010
#define COMP_ELEM_POS_TOP       0x00000020
#define COMP_ELEM_SIZE_WIDTH    0x00000040
#define COMP_ELEM_SIZE_HEIGHT   0x00000080
#define COMP_ELEM_POS_ZINDEX    0x00000100
#define COMP_ELEM_SOURCE        0x00000200
#define COMP_ELEM_FRIENDLYNAME  0x00000400
#define COMP_ELEM_SUBSCRIBEDURL 0x00000800
#define COMP_ELEM_ORIGINAL_CSI  0x00001000
#define COMP_ELEM_RESTORED_CSI  0x00002000
#define COMP_ELEM_CURITEMSTATE  0x00004000

#define COMP_ELEM_ALL   (COMP_ELEM_TYPE | COMP_ELEM_CHECKED | COMP_ELEM_DIRTY |                     \
                         COMP_ELEM_NOSCROLL | COMP_ELEM_POS_LEFT | COMP_ELEM_SIZE_WIDTH  |          \
                         COMP_ELEM_SIZE_HEIGHT | COMP_ELEM_POS_ZINDEX | COMP_ELEM_SOURCE |          \
                         COMP_ELEM_FRIENDLYNAME | COMP_ELEM_POS_TOP | COMP_ELEM_SUBSCRIBEDURL |     \
                         COMP_ELEM_ORIGINAL_CSI | COMP_ELEM_RESTORED_CSI | COMP_ELEM_CURITEMSTATE)

enum tagDTI_ADTIWUI {
    DTI_ADDUI_DEFAULT = 0x00000000,
    DTI_ADDUI_DISPSUBWIZARD = 0x00000001,
    DTI_ADDUI_POSITIONITEM = 0x00000002,
};

#define ADDURL_SILENT           0X0001

#define COMPONENT_DEFAULT_LEFT    (0xFFFF)
#define COMPONENT_DEFAULT_TOP     (0xFFFF)

#undef INTERFACE
#define INTERFACE IActiveDesktop
DECLARE_INTERFACE_IID_(IActiveDesktop, IUnknown, "f490eb00-1240-11d1-9888-006097deacf9") {
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, void * *ppv) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(ApplyChanges)(THIS_ DWORD dwFlags) PURE;
    STDMETHOD(GetWallpaper)(THIS_ PWSTR pwszWallpaper, UINT cchWallpaper, DWORD dwFlags) PURE;
    STDMETHOD(SetWallpaper)(THIS_ PCWSTR pwszWallpaper, DWORD dwReserved) PURE;
    STDMETHOD(GetWallpaperOptions)(THIS_ LPWALLPAPEROPT pwpo, DWORD dwReserved) PURE;
    STDMETHOD(SetWallpaperOptions)(THIS_ LPCWALLPAPEROPT pwpo, DWORD dwReserved) PURE;
    STDMETHOD(GetPattern)(THIS_ PWSTR pwszPattern, UINT cchPattern, DWORD dwReserved) PURE;
    STDMETHOD(SetPattern)(THIS_ PCWSTR pwszPattern, DWORD dwReserved) PURE;
    STDMETHOD(GetDesktopItemOptions)(THIS_ LPCOMPONENTSOPT pco, DWORD dwReserved) PURE;
    STDMETHOD(SetDesktopItemOptions)(THIS_ LPCCOMPONENTSOPT pco, DWORD dwReserved) PURE;
    STDMETHOD(AddDesktopItem)(THIS_ LPCCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD(AddDesktopItemWithUI)(THIS_ HWND hwnd, LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD(ModifyDesktopItem)(THIS_ LPCCOMPONENT pcomp, DWORD dwFlags) PURE;
    STDMETHOD(RemoveDesktopItem)(THIS_ LPCCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD(GetDesktopItemCount)(THIS_ int *pcItems, DWORD dwReserved) PURE;
    STDMETHOD(GetDesktopItem)(THIS_ int nComponent, LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD(GetDesktopItemByID)(THIS_ ULONG_PTR dwID, LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD(GenerateDesktopItemHtml)(THIS_ PCWSTR pwszFileName, LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD(AddUrl)(THIS_ HWND hwnd, PCWSTR pszSource, LPCOMPONENT pcomp, DWORD dwFlags) PURE;
    STDMETHOD(GetDesktopItemBySource)(THIS_ PCWSTR pwszSource, LPCOMPONENT pcomp, DWORD dwReserved) PURE;
};
typedef IActiveDesktop * LPACTIVEDESKTOP;

#endif /* _WININET_H */

#define MAX_COLUMN_NAME_LEN 80
#define MAX_COLUMN_DESC_LEN 128

#define CFSTR_SHELLIDLIST                   TEXT("Shell IDList Array")
#define CFSTR_SHELLIDLISTOFFSET             TEXT("Shell Object Offsets")
#define CFSTR_NETRESOURCES                  TEXT("Net Resource")
#define CFSTR_FILEDESCRIPTORA               TEXT("FileGroupDescriptor")
#define CFSTR_FILEDESCRIPTORW               TEXT("FileGroupDescriptorW")
#define CFSTR_FILECONTENTS                  TEXT("FileContents")
#define CFSTR_FILENAMEA                     TEXT("FileName")
#define CFSTR_FILENAMEW                     TEXT("FileNameW")
#define CFSTR_PRINTERGROUP                  TEXT("PrinterFriendlyName")
#define CFSTR_FILENAMEMAPA                  TEXT("FileNameMap")
#define CFSTR_FILENAMEMAPW                  TEXT("FileNameMapW")
#define CFSTR_SHELLURL                      TEXT("UniformResourceLocator")
#define CFSTR_INETURLA                      CFSTR_SHELLURL
#define CFSTR_INETURLW                      TEXT("UniformResourceLocatorW")
#define CFSTR_PREFERREDDROPEFFECT           TEXT("Preferred DropEffect")
#define CFSTR_PERFORMEDDROPEFFECT           TEXT("Performed DropEffect")
#define CFSTR_PASTESUCCEEDED                TEXT("Paste Succeeded")
#define CFSTR_INDRAGLOOP                    TEXT("InShellDragLoop")
#define CFSTR_MOUNTEDVOLUME                 TEXT("MountedVolume")
#define CFSTR_PERSISTEDDATAOBJECT           TEXT("PersistedDataObject")
#define CFSTR_TARGETCLSID                   TEXT("TargetCLSID")
#define CFSTR_LOGICALPERFORMEDDROPEFFECT    TEXT("Logical Performed DropEffect")
#define CFSTR_AUTOPLAY_SHELLIDLISTS         TEXT("Autoplay Enumerated IDList Array")
#define CFSTR_UNTRUSTEDDRAGDROP             TEXT("UntrustedDragDrop")
#define CFSTR_FILE_ATTRIBUTES_ARRAY         TEXT("File Attributes Array")
#define CFSTR_INVOKECOMMAND_DROPPARAM       TEXT("InvokeCommand DropParam")
#define CFSTR_SHELLDROPHANDLER              TEXT("DropHandlerCLSID")
#define CFSTR_DROPDESCRIPTION               TEXT("DropDescription")
#define CFSTR_ZONEIDENTIFIER                TEXT("ZoneIdentifier")

#ifdef UNICODE
#define CFSTR_FILEDESCRIPTOR    CFSTR_FILEDESCRIPTORW
#define CFSTR_FILENAME          CFSTR_FILENAMEW
#define CFSTR_FILENAMEMAP       CFSTR_FILENAMEMAPW
#define CFSTR_INETURL           CFSTR_INETURLW
#else /* !UNICODE */
#define CFSTR_FILEDESCRIPTOR    CFSTR_FILEDESCRIPTORA
#define CFSTR_FILENAME          CFSTR_FILENAMEA
#define CFSTR_FILENAMEMAP       CFSTR_FILENAMEMAPA
#define CFSTR_INETURL           CFSTR_INETURLA
#endif /* !UNICODE */

#define DVASPECT_SHORTNAME      2
#define DVASPECT_COPY           3
#define DVASPECT_LINK           4

#include <pshpack8.h>
typedef struct _NRESARRAY {
    UINT cItems;
    NETRESOURCE nr[1];
} NRESARRAY, * LPNRESARRAY;
#include <poppack.h>

typedef struct _IDA {
    UINT cidl;
    UINT aoffset[1];
} CIDA, * LPIDA;

typedef enum {
    FD_CLSID = 0x00000001,
    FD_SIZEPOINT = 0x00000002,
    FD_ATTRIBUTES = 0x00000004,
    FD_CREATETIME = 0x00000008,
    FD_ACCESSTIME = 0x00000010,
    FD_WRITESTIME = 0x00000020,
    FD_FILESIZE = 0x00000040,
    FD_PROGRESSUI = 0x00004000,
    FD_LINKUI = 0x00008000,
#if (NTDDI_VERSION >= NTDDI_VISTA)
    FD_UNICODE = (int) 0x80000000,
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
} FD_FLAGS;

typedef struct _FILEDESCRIPTORA {
    DWORD dwFlags;
    CLSID clsid;
    SIZEL sizel;
    POINTL pointl;
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    CHAR cFileName[ MAX_PATH ];
} FILEDESCRIPTORA, *LPFILEDESCRIPTORA;

typedef struct _FILEDESCRIPTORW {
    DWORD dwFlags;
    CLSID clsid;
    SIZEL sizel;
    POINTL pointl;
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    WCHAR cFileName[ MAX_PATH ];
} FILEDESCRIPTORW, *LPFILEDESCRIPTORW;

#ifdef UNICODE
#define FILEDESCRIPTOR      FILEDESCRIPTORW
#define LPFILEDESCRIPTOR    LPFILEDESCRIPTORW
#else /* !UNICODE */
#define FILEDESCRIPTOR      FILEDESCRIPTORA
#define LPFILEDESCRIPTOR    LPFILEDESCRIPTORA
#endif /* !UNICODE */

typedef struct _FILEGROUPDESCRIPTORA {
    UINT cItems;
    FILEDESCRIPTORA fgd[1];
} FILEGROUPDESCRIPTORA, * LPFILEGROUPDESCRIPTORA;

typedef struct _FILEGROUPDESCRIPTORW {
    UINT cItems;
    FILEDESCRIPTORW fgd[1];
} FILEGROUPDESCRIPTORW, * LPFILEGROUPDESCRIPTORW;

#ifdef UNICODE
#define FILEGROUPDESCRIPTOR     FILEGROUPDESCRIPTORW
#define LPFILEGROUPDESCRIPTOR   LPFILEGROUPDESCRIPTORW
#else /* !UNICODE */
#define FILEGROUPDESCRIPTOR     FILEGROUPDESCRIPTORA
#define LPFILEGROUPDESCRIPTOR   LPFILEGROUPDESCRIPTORA
#endif /* !UNICODE */

typedef struct _DROPFILES {
    DWORD pFiles;
    POINT pt;
    BOOL fNC;
    BOOL fWide;
} DROPFILES, *LPDROPFILES;

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct {
    UINT cItems;
    DWORD dwSumFileAttributes;
    DWORD dwProductFileAttributes;
    DWORD rgdwFileAttributes[1];
} FILE_ATTRIBUTES_ARRAY;
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef enum {
    DROPIMAGE_INVALID = -1,
    DROPIMAGE_NONE = 0,
    DROPIMAGE_COPY = DROPEFFECT_COPY,
    DROPIMAGE_MOVE = DROPEFFECT_MOVE,
    DROPIMAGE_LINK = DROPEFFECT_LINK,
    DROPIMAGE_LABEL = 6,
    DROPIMAGE_WARNING = 7,
    DROPIMAGE_NOIMAGE = 8,
} DROPIMAGETYPE;

typedef struct {
    DROPIMAGETYPE type;

    WCHAR szMessage[MAX_PATH];
    WCHAR szInsert[MAX_PATH];
} DROPDESCRIPTION;

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

typedef struct _SHChangeNotifyEntry {
    PCIDLIST_ABSOLUTE pidl;
    BOOL fRecursive;
} SHChangeNotifyEntry;

#define SHCNRF_InterruptLevel      0x0001
#define SHCNRF_ShellLevel          0x0002
#define SHCNRF_RecursiveInterrupt  0x1000
#define SHCNRF_NewDelivery         0x8000

#define SHCNE_RENAMEITEM          0x00000001L
#define SHCNE_CREATE              0x00000002L
#define SHCNE_DELETE              0x00000004L
#define SHCNE_MKDIR               0x00000008L
#define SHCNE_RMDIR               0x00000010L
#define SHCNE_MEDIAINSERTED       0x00000020L
#define SHCNE_MEDIAREMOVED        0x00000040L
#define SHCNE_DRIVEREMOVED        0x00000080L
#define SHCNE_DRIVEADD            0x00000100L
#define SHCNE_NETSHARE            0x00000200L
#define SHCNE_NETUNSHARE          0x00000400L
#define SHCNE_ATTRIBUTES          0x00000800L
#define SHCNE_UPDATEDIR           0x00001000L
#define SHCNE_UPDATEITEM          0x00002000L
#define SHCNE_SERVERDISCONNECT    0x00004000L
#define SHCNE_UPDATEIMAGE         0x00008000L
#define SHCNE_DRIVEADDGUI         0x00010000L
#define SHCNE_RENAMEFOLDER        0x00020000L
#define SHCNE_FREESPACE           0x00040000L

#define SHCNE_EXTENDED_EVENT      0x04000000L

#define SHCNE_ASSOCCHANGED        0x08000000L

#define SHCNE_DISKEVENTS          0x0002381FL
#define SHCNE_GLOBALEVENTS        0x0C0581E0L
#define SHCNE_ALLEVENTS           0x7FFFFFFFL
#define SHCNE_INTERRUPT           0x80000000L

#define SHCNEE_ORDERCHANGED             2L
#define SHCNEE_MSI_CHANGE               4L
#define SHCNEE_MSI_UNINSTALL            5L

#define SHCNF_IDLIST      0x0000
#define SHCNF_PATHA       0x0001
#define SHCNF_PRINTERA    0x0002
#define SHCNF_DWORD       0x0003
#define SHCNF_PATHW       0x0005
#define SHCNF_PRINTERW    0x0006
#define SHCNF_TYPE        0x00FF
#define SHCNF_FLUSH       0x1000
#define SHCNF_FLUSHNOWAIT 0x3000

#define SHCNF_NOTIFYRECURSIVE      0x10000

#ifdef UNICODE
#define SHCNF_PATH      SHCNF_PATHW
#define SHCNF_PRINTER   SHCNF_PRINTERW
#else /* !UNICODE */
#define SHCNF_PATH      SHCNF_PATHA
#define SHCNF_PRINTER   SHCNF_PRINTERA
#endif /* !UNICODE */

SHSTDAPI_(void) SHChangeNotify(LONG wEventId, UINT uFlags, LPCVOID dwItem1, LPCVOID dwItem2);

#undef  INTERFACE
#define INTERFACE  IShellChangeNotify
DECLARE_INTERFACE_IID_(IShellChangeNotify, IUnknown, "D82BE2B1-5764-11D0-A96E-00C04FD705A2") {
    STDMETHOD(OnChange) (THIS_ LONG lEvent, PCIDLIST_ABSOLUTE pidl1, PCIDLIST_ABSOLUTE pidl2) PURE;
};

#undef  INTERFACE
#define INTERFACE  IQueryInfo

DECLARE_INTERFACE_IID_(IQueryInfo, IUnknown, "00021500-0000-0000-c000-000000000046") {
    STDMETHOD(GetInfoTip)(THIS_ DWORD dwFlags, PWSTR * ppwszTip) PURE;
    STDMETHOD(GetInfoFlags)(THIS_ DWORD * pdwFlags) PURE;
};

#define QITIPF_DEFAULT          0x00000000
#define QITIPF_USENAME          0x00000001
#define QITIPF_LINKNOTARGET     0x00000002
#define QITIPF_LINKUSETARGET    0x00000004
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define QITIPF_USESLOWTIP       0x00000008
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define QITIPF_SINGLELINE       0x00000010
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#define QIF_CACHED              0x00000001
#define QIF_DONTEXPANDFOLDER    0x00000002

typedef enum {
    SHARD_PIDL = 0x00000001L,
    SHARD_PATHA = 0x00000002L,
    SHARD_PATHW = 0x00000003L,
#if (NTDDI_VERSION >= NTDDI_WIN7)
    SHARD_APPIDINFO = 0x00000004L,
    SHARD_APPIDINFOIDLIST = 0x00000005L,
    SHARD_LINK = 0x00000006L,
    SHARD_APPIDINFOLINK = 0x00000007L,
    SHARD_SHELLITEM = 0x00000008L,
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */
} SHARD;

#if (NTDDI_VERSION >= NTDDI_WIN7)

typedef struct SHARDAPPIDINFO {
    IShellItem *psi;
    PCWSTR pszAppID;
} SHARDAPPIDINFO;

typedef struct SHARDAPPIDINFOIDLIST {
    PCIDLIST_ABSOLUTE pidl;
    PCWSTR pszAppID;
} SHARDAPPIDINFOIDLIST;

typedef struct SHARDAPPIDINFOLINK {
    IShellLink *psl;

    PCWSTR pszAppID;
} SHARDAPPIDINFOLINK;

#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#ifdef UNICODE
#define SHARD_PATH  SHARD_PATHW
#else /* !UNICODE */
#define SHARD_PATH  SHARD_PATHA
#endif /* !UNICODE */

SHSTDAPI_(void) SHAddToRecentDocs(UINT uFlags, LPCVOID pv);

#include <pshpack1.h>
typedef struct _SHChangeDWORDAsIDList {
    USHORT cb;
    DWORD dwItem1;
    DWORD dwItem2;
    USHORT cbZero;
} SHChangeDWORDAsIDList, *LPSHChangeDWORDAsIDList;
#include <poppack.h>

#if (NTDDI_VERSION >= NTDDI_WIN2K)
typedef struct _SHChangeUpdateImageIDList {
    USHORT cb;
    int iIconIndex;
    int iCurIndex;
    UINT uFlags;
    DWORD dwProcessID;
    WCHAR szName[MAX_PATH];
    USHORT cbZero;
} SHChangeUpdateImageIDList, * LPSHChangeUpdateImageIDList;
SHSTDAPI_(int) SHHandleUpdateImage( PCIDLIST_ABSOLUTE pidlExtra);
SHSTDAPI_(void) SHUpdateImageA( LPCSTR pszHashItem, int iIndex, UINT uFlags, int iImageIndex);
SHSTDAPI_(void) SHUpdateImageW( LPCWSTR pszHashItem, int iIndex, UINT uFlags, int iImageIndex);
#ifdef UNICODE
#define SHUpdateImage  SHUpdateImageW
#else /* !UNICODE */
#define SHUpdateImage  SHUpdateImageA
#endif /* !UNICODE */
#endif /* (NTDDI_VERSION >= NTDDI_WIN2K) */

SHSTDAPI_(ULONG) SHChangeNotifyRegister( HWND hwnd, int fSources, LONG fEvents, UINT wMsg, int cEntries, const SHChangeNotifyEntry *pshcne);
SHSTDAPI_(BOOL) SHChangeNotifyDeregister(ULONG ulID);

typedef enum {
    SCNRT_ENABLE = 0,
    SCNRT_DISABLE = 1,
} SCNRT_STATUS;

SHSTDAPI_(HANDLE) SHChangeNotification_Lock( HANDLE hChange, DWORD dwProcId, PIDLIST_ABSOLUTE * *pppidl, LONG *plEvent);
SHSTDAPI_(BOOL) SHChangeNotification_Unlock( HANDLE hLock);
SHSTDAPI SHGetRealIDL(IShellFolder *psf, PCUITEMID_CHILD pidlSimple, PITEMID_CHILD *ppidlReal);

SHSTDAPI SHGetInstanceExplorer(IUnknown * *ppunk);

#define SHGDFIL_FINDDATA        1
#define SHGDFIL_NETRESOURCE     2
#define SHGDFIL_DESCRIPTIONID   3

#define SHDID_ROOT_REGITEM          1
#define SHDID_FS_FILE               2
#define SHDID_FS_DIRECTORY          3
#define SHDID_FS_OTHER              4
#define SHDID_COMPUTER_DRIVE35      5
#define SHDID_COMPUTER_DRIVE525     6
#define SHDID_COMPUTER_REMOVABLE    7
#define SHDID_COMPUTER_FIXED        8
#define SHDID_COMPUTER_NETDRIVE     9
#define SHDID_COMPUTER_CDROM        10
#define SHDID_COMPUTER_RAMDISK      11
#define SHDID_COMPUTER_OTHER        12
#define SHDID_NET_DOMAIN            13
#define SHDID_NET_SERVER            14
#define SHDID_NET_SHARE             15
#define SHDID_NET_RESTOFNET         16
#define SHDID_NET_OTHER             17
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define SHDID_COMPUTER_IMAGING      18
#define SHDID_COMPUTER_AUDIO        19
#define SHDID_COMPUTER_SHAREDDOCS   20
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SHDID_MOBILE_DEVICE         21
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)
#define SHDID_REMOTE_DESKTOP_DRIVE  22
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS4) */

#include <pshpack8.h>
typedef struct _SHDESCRIPTIONID {
    DWORD dwDescriptionId;
    CLSID clsid;
} SHDESCRIPTIONID, *LPSHDESCRIPTIONID;
#include <poppack.h>

SHSTDAPI SHGetDataFromIDListA(IShellFolder *psf, PCUITEMID_CHILD pidl, int nFormat, void *pv, int cb);
SHSTDAPI SHGetDataFromIDListW(IShellFolder *psf, PCUITEMID_CHILD pidl, int nFormat, void *pv, int cb);
#ifdef UNICODE
#define SHGetDataFromIDList  SHGetDataFromIDListW
#else /* !UNICODE */
#define SHGetDataFromIDList  SHGetDataFromIDListA
#endif /* !UNICODE */

#define PRF_VERIFYEXISTS            0x0001
#define PRF_TRYPROGRAMEXTENSIONS    (0x0002 | PRF_VERIFYEXISTS)
#define PRF_FIRSTDIRDEF             0x0004
#define PRF_DONTFINDLNK             0x0008
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
#define PRF_REQUIREABSOLUTE         0x0010
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) */

SHSTDAPI_(int) RestartDialog( HWND hwnd, PCWSTR pszPrompt, DWORD dwReturn);
#if (NTDDI_VERSION >= NTDDI_WINXP)
SHSTDAPI_(int) RestartDialogEx( HWND hwnd, PCWSTR pszPrompt, DWORD dwReturn, DWORD dwReasonCode);
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

SHSTDAPI SHCoCreateInstance(PCWSTR pszCLSID, const CLSID *pclsid, IUnknown *pUnkOuter, REFIID riid, void * *ppv);

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHCreateDataObject(PCIDLIST_ABSOLUTE pidlFolder, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, IDataObject *pdtInner, REFIID riid, void * *ppv);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
SHSTDAPI CIDLData_CreateFromIDArray(PCIDLIST_ABSOLUTE pidlFolder, UINT cidl, PCUIDLIST_RELATIVE_ARRAY apidl, IDataObject * *ppdtobj);
SHSTDAPI SHCreateStdEnumFmtEtc(UINT cfmt, const FORMATETC afmt[], IEnumFORMATETC * *ppenumFormatEtc);
SHSTDAPI SHDoDragDrop(HWND hwnd, IDataObject *pdata, IDropSource *pdsrc, DWORD dwEffect, DWORD *pdwEffect);

#define NUM_POINTS  3
typedef struct {
    int iNextSample;
    DWORD dwLastScroll;
    BOOL bFull;
    POINT pts[NUM_POINTS];
    DWORD dwTimes[NUM_POINTS];
} AUTO_SCROLL_DATA;

SHSTDAPI_(BOOL) DAD_SetDragImage(HIMAGELIST him, POINT * pptOffset);
SHSTDAPI_(BOOL) DAD_DragEnterEx(HWND hwndTarget, const POINT ptStart);
SHSTDAPI_(BOOL) DAD_DragEnterEx2( HWND hwndTarget, const POINT ptStart, IDataObject *pdtObject);
SHSTDAPI_(BOOL) DAD_ShowDragImage(BOOL fShow);
SHSTDAPI_(BOOL) DAD_DragMove(POINT pt);
SHSTDAPI_(BOOL) DAD_DragLeave(void);
SHSTDAPI_(BOOL) DAD_AutoScroll(HWND hwnd, AUTO_SCROLL_DATA *pad, const POINT *pptNow);

typedef struct {
    WORD cLength;
    WORD nVersion;
    BOOL fFullPathTitle : 1;
    BOOL fSaveLocalView : 1;
    BOOL fNotShell : 1;
    BOOL fSimpleDefault : 1;
    BOOL fDontShowDescBar : 1;
    BOOL fNewWindowMode : 1;
    BOOL fShowCompColor : 1;
    BOOL fDontPrettyNames : 1;
    BOOL fAdminsCreateCommonGroups : 1;
    UINT fUnusedFlags : 7;
    UINT fMenuEnumFilter;
} CABINETSTATE, * LPCABINETSTATE;

#define CABINETSTATE_VERSION 2

SHSTDAPI_(BOOL) ReadCabinetState( CABINETSTATE *pcs, int cLength);
SHSTDAPI_(BOOL) WriteCabinetState( CABINETSTATE *pcs);
SHSTDAPI_(BOOL) PathMakeUniqueName( PWSTR pszUniqueName, UINT cchMax, PCWSTR pszTemplate, PCWSTR pszLongPlate, PCWSTR pszDir);
SHSTDAPI_(BOOL) PathIsExe( PCWSTR pszPath);

#define PCS_FATAL           0x80000000
#define PCS_REPLACEDCHAR    0x00000001
#define PCS_REMOVEDCHAR     0x00000002
#define PCS_TRUNCATED       0x00000004
#define PCS_PATHTOOLONG     0x00000008

SHSTDAPI_(int) PathCleanupSpec( PCWSTR pszDir, PWSTR pszSpec);

SHSTDAPI_(int) PathResolve( PWSTR pszPath, PZPCWSTR dirs, UINT fFlags);
SHSTDAPI_(BOOL) GetFileNameFromBrowse( HWND hwnd, PWSTR pszFilePath, UINT cchFilePath,
PCWSTR pszWorkingDir, PCWSTR pszDefExt, PCWSTR pszFilters, PCWSTR pszTitle);
SHSTDAPI_(int) DriveType(int iDrive);

SHSTDAPI_(int) RealDriveType(int iDrive, BOOL fOKToHitNet);
SHSTDAPI_(int) IsNetDrive(int iDrive);

#define MM_ADDSEPARATOR         0x00000001L
#define MM_SUBMENUSHAVEIDS      0x00000002L
#define MM_DONTREMOVESEPS       0x00000004L

SHSTDAPI_(UINT) Shell_MergeMenus( HMENU hmDst, HMENU hmSrc, UINT uInsert, UINT uIDAdjust, UINT uIDAdjustMax, ULONG uFlags);

SHSTDAPI_(BOOL) SHObjectProperties( HWND hwnd, DWORD shopObjectType, PCWSTR pszObjectName, PCWSTR pszPropertyPage);

#define SHOP_PRINTERNAME 0x00000001
#define SHOP_FILEPATH    0x00000002
#define SHOP_VOLUMEGUID  0x00000004

SHSTDAPI_(DWORD) SHFormatDrive( HWND hwnd, UINT drive, UINT fmtID, UINT options);

#define SHFMT_ID_DEFAULT    0xFFFF

#define SHFMT_OPT_FULL     0x0001
#define SHFMT_OPT_SYSONLY  0x0002

#define SHFMT_ERROR     0xFFFFFFFFL
#define SHFMT_CANCEL    0xFFFFFFFEL
#define SHFMT_NOFORMAT  0xFFFFFFFDL

#ifndef HPSXA_DEFINED
#define HPSXA_DEFINED
DECLARE_HANDLE(HPSXA);
#endif /* !HPSXA_DEFINED */
WINSHELLAPI void WINAPI SHDestroyPropSheetExtArray(HPSXA hpsxa);
WINSHELLAPI UINT WINAPI SHAddFromPropSheetExtArray(HPSXA hpsxa, LPFNADDPROPSHEETPAGE lpfnAddPage, LPARAM lParam);
WINSHELLAPI UINT WINAPI SHReplaceFromPropSheetExtArray(HPSXA hpsxa, UINT uPageID, LPFNADDPROPSHEETPAGE lpfnReplaceWith, LPARAM lParam);

typedef enum RESTRICTIONS {
    REST_NONE = 0x00000000,
    REST_NORUN = 0x00000001,
    REST_NOCLOSE = 0x00000002,
    REST_NOSAVESET = 0x00000004,
    REST_NOFILEMENU = 0x00000008,
    REST_NOSETFOLDERS = 0x00000010,
    REST_NOSETTASKBAR = 0x00000020,
    REST_NODESKTOP = 0x00000040,
    REST_NOFIND = 0x00000080,
    REST_NODRIVES = 0x00000100,
    REST_NODRIVEAUTORUN = 0x00000200,
    REST_NODRIVETYPEAUTORUN = 0x00000400,
    REST_NONETHOOD = 0x00000800,
    REST_STARTBANNER = 0x00001000,
    REST_RESTRICTRUN = 0x00002000,
    REST_NOPRINTERTABS = 0x00004000,
    REST_NOPRINTERDELETE = 0x00008000,
    REST_NOPRINTERADD = 0x00010000,
    REST_NOSTARTMENUSUBFOLDERS = 0x00020000,
    REST_MYDOCSONNET = 0x00040000,
    REST_NOEXITTODOS = 0x00080000,
    REST_ENFORCESHELLEXTSECURITY = 0x00100000,
    REST_LINKRESOLVEIGNORELINKINFO = 0x00200000,
    REST_NOCOMMONGROUPS = 0x00400000,
    REST_SEPARATEDESKTOPPROCESS = 0x00800000,
    REST_NOWEB = 0x01000000,
    REST_NOTRAYCONTEXTMENU = 0x02000000,
    REST_NOVIEWCONTEXTMENU = 0x04000000,
    REST_NONETCONNECTDISCONNECT = 0x08000000,
    REST_STARTMENULOGOFF = 0x10000000,
    REST_NOSETTINGSASSIST = 0x20000000,
    REST_NOINTERNETICON = 0x40000001,
    REST_NORECENTDOCSHISTORY = 0x40000002,
    REST_NORECENTDOCSMENU = 0x40000003,
    REST_NOACTIVEDESKTOP = 0x40000004,
    REST_NOACTIVEDESKTOPCHANGES = 0x40000005,
    REST_NOFAVORITESMENU = 0x40000006,
    REST_CLEARRECENTDOCSONEXIT = 0x40000007,
    REST_CLASSICSHELL = 0x40000008,
    REST_NOCUSTOMIZEWEBVIEW = 0x40000009,
    REST_NOHTMLWALLPAPER = 0x40000010,
    REST_NOCHANGINGWALLPAPER = 0x40000011,
    REST_NODESKCOMP = 0x40000012,
    REST_NOADDDESKCOMP = 0x40000013,
    REST_NODELDESKCOMP = 0x40000014,
    REST_NOCLOSEDESKCOMP = 0x40000015,
    REST_NOCLOSE_DRAGDROPBAND = 0x40000016,
    REST_NOMOVINGBAND = 0x40000017,
    REST_NOEDITDESKCOMP = 0x40000018,
    REST_NORESOLVESEARCH = 0x40000019,
    REST_NORESOLVETRACK = 0x4000001A,
    REST_FORCECOPYACLWITHFILE = 0x4000001B,
#if (NTDDI_VERSION < NTDDI_VISTA)
    REST_NOLOGO3CHANNELNOTIFY = 0x4000001C,
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */
    REST_NOFORGETSOFTWAREUPDATE = 0x4000001D,
    REST_NOSETACTIVEDESKTOP = 0x4000001E,
    REST_NOUPDATEWINDOWS = 0x4000001F,
    REST_NOCHANGESTARMENU = 0x40000020,
    REST_NOFOLDEROPTIONS = 0x40000021,
    REST_HASFINDCOMPUTERS = 0x40000022,
    REST_INTELLIMENUS = 0x40000023,
    REST_RUNDLGMEMCHECKBOX = 0x40000024,
    REST_ARP_ShowPostSetup = 0x40000025,
    REST_NOCSC = 0x40000026,
    REST_NOCONTROLPANEL = 0x40000027,
    REST_ENUMWORKGROUP = 0x40000028,
    REST_ARP_NOARP = 0x40000029,
    REST_ARP_NOREMOVEPAGE = 0x4000002A,
    REST_ARP_NOADDPAGE = 0x4000002B,
    REST_ARP_NOWINSETUPPAGE = 0x4000002C,
    REST_GREYMSIADS = 0x4000002D,
    REST_NOCHANGEMAPPEDDRIVELABEL = 0x4000002E,
    REST_NOCHANGEMAPPEDDRIVECOMMENT = 0x4000002F,
    REST_MaxRecentDocs = 0x40000030,
    REST_NONETWORKCONNECTIONS = 0x40000031,
    REST_FORCESTARTMENULOGOFF = 0x40000032,
    REST_NOWEBVIEW = 0x40000033,
    REST_NOCUSTOMIZETHISFOLDER = 0x40000034,
    REST_NOENCRYPTION = 0x40000035,
    REST_DONTSHOWSUPERHIDDEN = 0x40000037,
    REST_NOSHELLSEARCHBUTTON = 0x40000038,
    REST_NOHARDWARETAB = 0x40000039,
    REST_NORUNASINSTALLPROMPT = 0x4000003A,
    REST_PROMPTRUNASINSTALLNETPATH = 0x4000003B,
    REST_NOMANAGEMYCOMPUTERVERB = 0x4000003C,
    REST_DISALLOWRUN = 0x4000003E,
    REST_NOWELCOMESCREEN = 0x4000003F,
    REST_RESTRICTCPL = 0x40000040,
    REST_DISALLOWCPL = 0x40000041,
    REST_NOSMBALLOONTIP = 0x40000042,
    REST_NOSMHELP = 0x40000043,
    REST_NOWINKEYS = 0x40000044,
    REST_NOENCRYPTONMOVE = 0x40000045,
    REST_NOLOCALMACHINERUN = 0x40000046,
    REST_NOCURRENTUSERRUN = 0x40000047,
    REST_NOLOCALMACHINERUNONCE = 0x40000048,
    REST_NOCURRENTUSERRUNONCE = 0x40000049,
    REST_FORCEACTIVEDESKTOPON = 0x4000004A,
    REST_NOVIEWONDRIVE = 0x4000004C,
#if (NTDDI_VERSION >= NTDDI_WINXP) || defined(IE_BACKCOMPAT_VERSION)
    REST_NONETCRAWL = 0x4000004D,
    REST_NOSHAREDDOCUMENTS = 0x4000004E,
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) || defined(IE_BACKCOMPAT_VERSION) */
    REST_NOSMMYDOCS = 0x4000004F,
#if (NTDDI_VERSION >= NTDDI_WINXP)
    REST_NOSMMYPICS = 0x40000050,
    REST_ALLOWBITBUCKDRIVES = 0x40000051,
    REST_NONLEGACYSHELLMODE = 0x40000052,
    REST_NOCONTROLPANELBARRICADE = 0x40000053,
    REST_NOSTARTPAGE = 0x40000054,
    REST_NOAUTOTRAYNOTIFY = 0x40000055,
    REST_NOTASKGROUPING = 0x40000056,
    REST_NOCDBURNING = 0x40000057,
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_WIN2KSP3)
    REST_MYCOMPNOPROP = 0x40000058,
    REST_MYDOCSNOPROP = 0x40000059,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP3) */
#if (NTDDI_VERSION >= NTDDI_WINXP)
    REST_NOSTARTPANEL = 0x4000005A,
    REST_NODISPLAYAPPEARANCEPAGE = 0x4000005B,
    REST_NOTHEMESTAB = 0x4000005C,
    REST_NOVISUALSTYLECHOICE = 0x4000005D,
    REST_NOSIZECHOICE = 0x4000005E,
    REST_NOCOLORCHOICE = 0x4000005F,
    REST_SETVISUALSTYLE = 0x40000060,
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_WIN2KSP3)
    REST_STARTRUNNOHOMEPATH = 0x40000061,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP3) */
#if (NTDDI_VERSION >= NTDDI_WINXP)
    REST_NOUSERNAMEINSTARTPANEL = 0x40000062,
    REST_NOMYCOMPUTERICON = 0x40000063,
    REST_NOSMNETWORKPLACES = 0x40000064,
    REST_NOSMPINNEDLIST = 0x40000065,
    REST_NOSMMYMUSIC = 0x40000066,
    REST_NOSMEJECTPC = 0x40000067,
    REST_NOSMMOREPROGRAMS = 0x40000068,
    REST_NOSMMFUPROGRAMS = 0x40000069,
    REST_NOTRAYITEMSDISPLAY = 0x4000006A,
    REST_NOTOOLBARSONTASKBAR = 0x4000006B,
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_WIN2KSP3)
    REST_NOSMCONFIGUREPROGRAMS = 0x4000006F,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP3) */
#if (NTDDI_VERSION >= NTDDI_WINXP)
    REST_HIDECLOCK = 0x40000070,
    REST_NOLOWDISKSPACECHECKS = 0x40000071,
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_WIN2KSP4)
    REST_NOENTIRENETWORK = 0x40000072,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP4) */
#if (NTDDI_VERSION >= NTDDI_WINXP)
    REST_NODESKTOPCLEANUP = 0x40000073,
    REST_BITBUCKNUKEONDELETE = 0x40000074,
    REST_BITBUCKCONFIRMDELETE = 0x40000075,
    REST_BITBUCKNOPROP = 0x40000076,
    REST_NODISPBACKGROUND = 0x40000077,
    REST_NODISPSCREENSAVEPG = 0x40000078,
    REST_NODISPSETTINGSPG = 0x40000079,
    REST_NODISPSCREENSAVEPREVIEW = 0x4000007A,
    REST_NODISPLAYCPL = 0x4000007B,
    REST_HIDERUNASVERB = 0x4000007C,
    REST_NOTHUMBNAILCACHE = 0x4000007D,
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_WINXPSP1) || defined(IE_BACKCOMPAT_VERSION)
    REST_NOSTRCMPLOGICAL = 0x4000007E,
    REST_NOPUBLISHWIZARD = 0x4000007F,
    REST_NOONLINEPRINTSWIZARD = 0x40000080,
    REST_NOWEBSERVICES = 0x40000081,
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP1) || defined(IE_BACKCOMPAT_VERSION) */
#if (NTDDI_VERSION >= NTDDI_WIN2KSP3)
    REST_ALLOWUNHASHEDWEBVIEW = 0x40000082,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP3) */
    REST_ALLOWLEGACYWEBVIEW = 0x40000083,
#if (NTDDI_VERSION >= NTDDI_WIN2KSP3)
    REST_REVERTWEBVIEWSECURITY = 0x40000084,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP3) */
#if (NTDDI_VERSION >= NTDDI_WIN2KSP4)
    REST_INHERITCONSOLEHANDLES = 0x40000086,
#endif /* (NTDDI_VERSION >= NTDDI_WIN2KSP4) */
#if (NTDDI_VERSION >= NTDDI_WINXPSP2 && NTDDI_VERSION < NTDDI_VISTA)
    REST_SORTMAXITEMCOUNT = 0x40000087,
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2 && NTDDI_VERSION < NTDDI_VISTA) */
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
    REST_NOREMOTERECURSIVEEVENTS = 0x40000089,
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) */
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
    REST_NOREMOTECHANGENOTIFY = 0x40000091,
#if (NTDDI_VERSION < NTDDI_VISTA)
    REST_NOSIMPLENETIDLIST = 0x40000092,
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */
    REST_NOENUMENTIRENETWORK = 0x40000093,
#if (NTDDI_VERSION < NTDDI_VISTA)
    REST_NODETAILSTHUMBNAILONNETWORK = 0x40000094,
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */
    REST_NOINTERNETOPENWITH = 0x40000095,
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) */
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
    REST_DONTRETRYBADNETNAME = 0x4000009B,
    REST_ALLOWFILECLSIDJUNCTIONS = 0x4000009C,
    REST_NOUPNPINSTALL = 0x4000009D,
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) */
    REST_ARP_DONTGROUPPATCHES = 0x400000AC,
    REST_ARP_NOCHOOSEPROGRAMSPAGE = 0x400000AD,
    REST_NODISCONNECT = 0x41000001,
    REST_NOSECURITY = 0x41000002,
    REST_NOFILEASSOCIATE = 0x41000003,
#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
    REST_ALLOWCOMMENTTOGGLE = 0x41000004,
#if (NTDDI_VERSION < NTDDI_VISTA)
    REST_USEDESKTOPINICACHE = 0x41000005,
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) */
} RESTRICTIONS;
SHSTDAPI_(IStream *) OpenRegStream( HKEY hkey, PCWSTR pszSubkey, PCWSTR pszValue, DWORD grfMode);
SHSTDAPI_(BOOL) SHFindFiles( PCIDLIST_ABSOLUTE pidlFolder, PCIDLIST_ABSOLUTE pidlSaveFile);
SHSTDAPI_(void) PathGetShortPath( PWSTR pszLongPath);
SHSTDAPI_(BOOL) PathYetAnotherMakeUniqueName( PWSTR pszUniqueName, PCWSTR pszPath, PCWSTR pszShort, PCWSTR pszFileSpec);
SHSTDAPI_(BOOL) Win32DeleteFile( PCWSTR pszPath);
SHSTDAPI_(DWORD) SHRestricted(RESTRICTIONS rest);
SHSTDAPI_(BOOL) SignalFileOpen( PCIDLIST_ABSOLUTE pidl);

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI AssocGetDetailsOfPropKey(IShellFolder *psf, PCUITEMID_CHILD pidl, const PROPERTYKEY *pkey, VARIANT *pv, BOOL *pfFoundPropKey);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

SHSTDAPI SHStartNetConnectionDialogA(HWND hwnd, LPCSTR pszRemoteName, DWORD dwType);
SHSTDAPI SHStartNetConnectionDialogW(HWND hwnd, LPCWSTR pszRemoteName, DWORD dwType);
#ifdef UNICODE
#define SHStartNetConnectionDialog  SHStartNetConnectionDialogW
#else /* !UNICODE */
#define SHStartNetConnectionDialog  SHStartNetConnectionDialogA
#endif /* !UNICODE */
SHSTDAPI SHDefExtractIconA(LPCSTR pszIconFile, int iIndex, UINT uFlags,
    HICON *phiconLarge, HICON *phiconSmall, UINT nIconSize);
SHSTDAPI SHDefExtractIconW(LPCWSTR pszIconFile, int iIndex, UINT uFlags,
    HICON *phiconLarge, HICON *phiconSmall, UINT nIconSize);
#ifdef UNICODE
#define SHDefExtractIcon  SHDefExtractIconW
#else /* !UNICODE */
#define SHDefExtractIcon  SHDefExtractIconA
#endif /* !UNICODE */

enum tagOPEN_AS_INFO_FLAGS {
    OAIF_ALLOW_REGISTRATION = 0x00000001,
    OAIF_REGISTER_EXT = 0x00000002,
    OAIF_EXEC = 0x00000004,
    OAIF_FORCE_REGISTRATION = 0x00000008,
#if (NTDDI_VERSION >= NTDDI_VISTA)
    OAIF_HIDE_REGISTRATION = 0x00000020,
    OAIF_URL_PROTOCOL = 0x00000040,
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#if (NTDDI_VERSION >= NTDDI_WIN8)
    OAIF_FILE_IS_URI = 0x00000080,
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */
};
typedef int OPEN_AS_INFO_FLAGS;

#include <pshpack8.h>
typedef struct _openasinfo {
    LPCWSTR pcszFile;
    LPCWSTR pcszClass;
    OPEN_AS_INFO_FLAGS oaifInFlags;
} OPENASINFO, * POPENASINFO;
#include <poppack.h>

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHOpenWithDialog(HWND hwndParent, const OPENASINFO * poainfo);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

SHSTDAPI_(BOOL) Shell_GetImageLists( HIMAGELIST *phiml, HIMAGELIST *phimlSmall);
SHSTDAPI_(int) Shell_GetCachedImageIndex( PCWSTR pwszIconPath, int iIconIndex, UINT uIconFlags);
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI_(int) Shell_GetCachedImageIndexA( LPCSTR pszIconPath, int iIconIndex, UINT uIconFlags);
SHSTDAPI_(int) Shell_GetCachedImageIndexW( LPCWSTR pszIconPath, int iIconIndex, UINT uIconFlags);
#ifdef UNICODE
#define Shell_GetCachedImageIndex  Shell_GetCachedImageIndexW
#else /* !UNICODE */
#define Shell_GetCachedImageIndex  Shell_GetCachedImageIndexA
#endif /* !UNICODE */
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#define VALIDATEUNC_CONNECT     0x0001
#define VALIDATEUNC_NOUI        0x0002
#define VALIDATEUNC_PRINT       0x0004
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define VALIDATEUNC_PERSIST     0x0008
#define VALIDATEUNC_VALID       0x000F
#else /* (NTDDI_VERSION < NTDDI_VISTA) */
#define VALIDATEUNC_VALID       0x0007
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */

SHSTDAPI_(BOOL) SHValidateUNC( HWND hwndOwner, PWSTR pszFile, UINT fConnect);
#define PIFNAMESIZE     30
#define PIFSTARTLOCSIZE 63
#define PIFDEFPATHSIZE  64
#define PIFPARAMSSIZE   64
#define PIFSHPROGSIZE   64
#define PIFSHDATASIZE   64
#define PIFDEFFILESIZE  80
#define PIFMAXFILEPATH  260

typedef struct PROPPRG {
    WORD flPrg;
    WORD flPrgInit;
    CHAR achTitle[PIFNAMESIZE];
    CHAR achCmdLine[PIFSTARTLOCSIZE + PIFPARAMSSIZE + 1];
    CHAR achWorkDir[PIFDEFPATHSIZE];
    WORD wHotKey;
    CHAR achIconFile[PIFDEFFILESIZE];
    WORD wIconIndex;
    DWORD dwEnhModeFlags;
    DWORD dwRealModeFlags;
    CHAR achOtherFile[PIFDEFFILESIZE];
    CHAR achPIFFile[PIFMAXFILEPATH];
} PROPPRG;
typedef UNALIGNED PROPPRG *PPROPPRG;
typedef UNALIGNED PROPPRG *LPPROPPRG;
typedef const UNALIGNED PROPPRG *LPCPROPPRG;

SHSTDAPI_(HANDLE) PifMgr_OpenProperties( PCWSTR pszApp, PCWSTR pszPIF, UINT hInf, UINT flOpt);
SHSTDAPI_(int) PifMgr_GetProperties( HANDLE hProps, PCSTR pszGroup, void *lpProps, int cbProps, UINT flOpt);
SHSTDAPI_(int) PifMgr_SetProperties( HANDLE hProps, PCSTR pszGroup, const void *lpProps, int cbProps, UINT flOpt);
SHSTDAPI_(HANDLE) PifMgr_CloseProperties( HANDLE hProps, UINT flOpt);

SHSTDAPI_(void) SHSetInstanceExplorer( IUnknown *punk);
SHSTDAPI_(BOOL) IsUserAnAdmin(void);

SHSTDAPI_(LRESULT) SHShellFolderView_Message( HWND hwndMain, UINT uMsg, LPARAM lParam);

#undef  INTERFACE
#define INTERFACE   IShellFolderViewCB
DECLARE_INTERFACE_IID_(IShellFolderViewCB, IUnknown, "2047E320-F2A9-11CE-AE65-08002B2E1262") {
    STDMETHOD(MessageSFVCB)(THIS_ UINT uMsg, WPARAM wParam, LPARAM lParam) PURE;
};

#include <pshpack8.h>

#define QCMINFO_PLACE_BEFORE    0
#define QCMINFO_PLACE_AFTER     1
typedef struct _QCMINFO_IDMAP_PLACEMENT {
    UINT id;
    UINT fFlags;
} QCMINFO_IDMAP_PLACEMENT;

typedef struct _QCMINFO_IDMAP {
    UINT nMaxIds;
    QCMINFO_IDMAP_PLACEMENT pIdList[1];
} QCMINFO_IDMAP;

typedef struct _QCMINFO {
    HMENU hmenu;
    UINT indexMenu;
    UINT idCmdFirst;
    UINT idCmdLast;
    QCMINFO_IDMAP const * pIdMap;
} QCMINFO;
typedef QCMINFO * LPQCMINFO;

typedef struct _DETAILSINFO {
    PCUITEMID_CHILD pidl;
    int fmt;
    int cxChar;
    STRRET str;
    int iImage;
} DETAILSINFO;
typedef DETAILSINFO *PDETAILSINFO;

typedef struct _SFVM_PROPPAGE_DATA {
    DWORD dwReserved;
    LPFNADDPROPSHEETPAGE pfn;
    LPARAM lParam;
} SFVM_PROPPAGE_DATA;

typedef struct _SFVM_HELPTOPIC_DATA {
    WCHAR wszHelpFile[MAX_PATH];
    WCHAR wszHelpTopic[MAX_PATH];
} SFVM_HELPTOPIC_DATA;

#define SFVM_MERGEMENU             1
#define SFVM_INVOKECOMMAND         2
#define SFVM_GETHELPTEXT           3
#define SFVM_GETTOOLTIPTEXT        4
#define SFVM_GETBUTTONINFO         5
#define SFVM_GETBUTTONS            6
#define SFVM_INITMENUPOPUP         7
#define SFVM_FSNOTIFY             14
#define SFVM_WINDOWCREATED        15
#define SFVM_GETDETAILSOF         23
#define SFVM_COLUMNCLICK          24
#define SFVM_QUERYFSNOTIFY        25
#define SFVM_DEFITEMCOUNT         26
#define SFVM_DEFVIEWMODE          27
#define SFVM_UNMERGEMENU          28
#define SFVM_UPDATESTATUSBAR      31
#define SFVM_BACKGROUNDENUM       32
#define SFVM_DIDDRAGDROP          36
#define SFVM_SETISFV              39
#define SFVM_THISIDLIST           41
#define SFVM_ADDPROPERTYPAGES     47
#define SFVM_BACKGROUNDENUMDONE   48
#define SFVM_GETNOTIFY            49
#define SFVM_GETSORTDEFAULTS      53
#define SFVM_SIZE                 57
#define SFVM_GETZONE              58
#define SFVM_GETPANE              59
#define SFVM_GETHELPTOPIC         63
#define SFVM_GETANIMATION         68

typedef struct _ITEMSPACING {
    int cxSmall;
    int cySmall;
    int cxLarge;
    int cyLarge;
} ITEMSPACING;

#define SFVSOC_INVALIDATE_ALL   0x00000001
#define SFVSOC_NOSCROLL         LVSICF_NOSCROLL

#define SFVS_SELECT_NONE        0x0
#define SFVS_SELECT_ALLITEMS    0x1
#define SFVS_SELECT_INVERT      0x2

#undef  INTERFACE
#define INTERFACE   IShellFolderView
DECLARE_INTERFACE_IID_(IShellFolderView, IUnknown, "37A378C0-F82D-11CE-AE65-08002B2E1262") {
    STDMETHOD(Rearrange) (THIS_ LPARAM lParamSort) PURE;
    STDMETHOD(GetArrangeParam) (THIS_ LPARAM * plParamSort) PURE;
    STDMETHOD(ArrangeGrid) (THIS) PURE;
    STDMETHOD(AutoArrange) (THIS) PURE;
    STDMETHOD(GetAutoArrange) (THIS) PURE;
    STDMETHOD(AddObject) (THIS_ PUITEMID_CHILD pidl, UINT * puItem) PURE;
    STDMETHOD(GetObject) (THIS_ PITEMID_CHILD * ppidl, UINT uItem) PURE;
    STDMETHOD(RemoveObject) (THIS_ PUITEMID_CHILD pidl, UINT * puItem) PURE;
    STDMETHOD(GetObjectCount) (THIS_ UINT * puCount) PURE;
    STDMETHOD(SetObjectCount) (THIS_ UINT uCount, UINT dwFlags) PURE;
    STDMETHOD(UpdateObject) (THIS_ PUITEMID_CHILD pidlOld, PUITEMID_CHILD pidlNew, UINT * puItem) PURE;
    STDMETHOD(RefreshObject) (THIS_ PUITEMID_CHILD pidl, UINT * puItem) PURE;
    STDMETHOD(SetRedraw) (THIS_ BOOL bRedraw) PURE;
    STDMETHOD(GetSelectedCount) (THIS_ UINT * puSelected) PURE;
    STDMETHOD(GetSelectedObjects) (THIS_ PCUITEMID_CHILD * *pppidl, UINT * puItems) PURE;
    STDMETHOD(IsDropOnSource) (THIS_ IDropTarget * pDropTarget) PURE;
    STDMETHOD(GetDragPoint) (THIS_ POINT * ppt) PURE;
    STDMETHOD(GetDropPoint) (THIS_ POINT * ppt) PURE;
    STDMETHOD(MoveIcons) (THIS_ IDataObject * pDataObject) PURE;
    STDMETHOD(SetItemPos) (THIS_ PCUITEMID_CHILD pidl, POINT * ppt) PURE;
    STDMETHOD(IsBkDropTarget) (THIS_ IDropTarget * pDropTarget) PURE;
    STDMETHOD(SetClipboard) (THIS_ BOOL bMove) PURE;
    STDMETHOD(SetPoints) (THIS_ IDataObject * pDataObject) PURE;
    STDMETHOD(GetItemSpacing) (THIS_ ITEMSPACING * pSpacing) PURE;
    STDMETHOD(SetCallback) (THIS_ IShellFolderViewCB * pNewCB, IShellFolderViewCB * * ppOldCB) PURE;
    STDMETHOD(Select) (THIS_ UINT dwFlags) PURE;
    STDMETHOD(QuerySupport) (THIS_ UINT * pdwSupport) PURE;
    STDMETHOD(SetAutomationObject)(THIS_ IDispatch * pdisp) PURE;
};

typedef struct _SFV_CREATE {
    UINT cbSize;
    IShellFolder * pshf;
    IShellView * psvOuter;
    IShellFolderViewCB * psfvcb;
} SFV_CREATE;

SHSTDAPI SHCreateShellFolderView(const SFV_CREATE * pcsfv, IShellView * * ppsv);

typedef HRESULT (CALLBACK * LPFNDFMCALLBACK)(IShellFolder *psf, HWND hwnd,
    IDataObject *pdtobj, UINT uMsg, WPARAM wParam, LPARAM lParam);

SHSTDAPI CDefFolderMenu_Create2(
    PCIDLIST_ABSOLUTE pidlFolder, HWND hwnd,
    UINT cidl, PCUITEMID_CHILD_ARRAY apidl,
    IShellFolder *psf, LPFNDFMCALLBACK pfn,
    UINT nKeys, const HKEY *ahkeys,
    IContextMenu * *ppcm);

typedef struct {
    HWND hwnd;
    IContextMenuCB *pcmcb;
    PCIDLIST_ABSOLUTE pidlFolder;
    IShellFolder *psf;
    UINT cidl;
    PCUITEMID_CHILD_ARRAY apidl;
    IUnknown *punkAssociationInfo;
    UINT cKeys;
    const HKEY *aKeys;
} DEFCONTEXTMENU;

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHCreateDefaultContextMenu(const DEFCONTEXTMENU *pdcm, REFIID riid, void * *ppv);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

typedef struct {
    DWORD cbSize;
    DWORD fMask;
    LPARAM lParam;
    UINT idCmdFirst;
    UINT idDefMax;
    LPCMINVOKECOMMANDINFO pici;
#if (NTDDI_VERSION >= NTDDI_VISTA)
    IUnknown *punkSite;
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
} DFMICS, *PDFMICS;

#define DFM_MERGECONTEXTMENU         1
#define DFM_INVOKECOMMAND            2
#define DFM_GETHELPTEXT              5
#define DFM_WM_MEASUREITEM           6
#define DFM_WM_DRAWITEM              7
#define DFM_WM_INITMENUPOPUP         8
#define DFM_VALIDATECMD              9
#define DFM_MERGECONTEXTMENU_TOP     10
#define DFM_GETHELPTEXTW             11
#define DFM_INVOKECOMMANDEX          12
#define DFM_MAPCOMMANDNAME           13
#define DFM_GETDEFSTATICID           14
#define DFM_GETVERBW                 15
#define DFM_GETVERBA                 16
#define DFM_MERGECONTEXTMENU_BOTTOM  17
#define DFM_MODIFYQCMFLAGS           18

#define DFM_CMD_DELETE          ((UINT)-1)
#define DFM_CMD_MOVE            ((UINT)-2)
#define DFM_CMD_COPY            ((UINT)-3)
#define DFM_CMD_LINK            ((UINT)-4)
#define DFM_CMD_PROPERTIES      ((UINT)-5)
#define DFM_CMD_NEWFOLDER       ((UINT)-6)
#define DFM_CMD_PASTE           ((UINT)-7)
#define DFM_CMD_VIEWLIST        ((UINT)-8)
#define DFM_CMD_VIEWDETAILS     ((UINT)-9)
#define DFM_CMD_PASTELINK       ((UINT)-10)
#define DFM_CMD_PASTESPECIAL    ((UINT)-11)
#define DFM_CMD_MODALPROP       ((UINT)-12)
#define DFM_CMD_RENAME          ((UINT)-13)

typedef HRESULT (CALLBACK * LPFNVIEWCALLBACK)(IShellView *psvOuter,
    IShellFolder *psf,
    HWND hwndMain,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

typedef struct _CSFV {
    UINT cbSize;
    IShellFolder * pshf;
    IShellView * psvOuter;
    PCIDLIST_ABSOLUTE pidl;
    LONG lEvents;
    LPFNVIEWCALLBACK pfnCallback;
    FOLDERVIEWMODE fvm;
} CSFV, * LPCSFV;

#include <poppack.h>

SHSTDAPI_(IContextMenu *) SHFind_InitMenuPopup( HMENU hmenu, HWND hwndOwner, UINT idCmdFirst, UINT idCmdLast);
SHSTDAPI SHCreateShellFolderViewEx(CSFV *pcsfv, IShellView * *ppsv);

#define PID_IS_URL           2
#define PID_IS_NAME          4
#define PID_IS_WORKINGDIR    5
#define PID_IS_HOTKEY        6
#define PID_IS_SHOWCMD       7
#define PID_IS_ICONINDEX     8
#define PID_IS_ICONFILE      9
#define PID_IS_WHATSNEW      10
#define PID_IS_AUTHOR        11
#define PID_IS_DESCRIPTION   12
#define PID_IS_COMMENT       13
#define PID_IS_ROAMED        15

#define PID_INTSITE_WHATSNEW      2
#define PID_INTSITE_AUTHOR        3
#define PID_INTSITE_LASTVISIT     4
#define PID_INTSITE_LASTMOD       5
#define PID_INTSITE_VISITCOUNT    6
#define PID_INTSITE_DESCRIPTION   7
#define PID_INTSITE_COMMENT       8
#define PID_INTSITE_FLAGS         9
#define PID_INTSITE_CONTENTLEN    10
#define PID_INTSITE_CONTENTCODE   11
#define PID_INTSITE_RECURSE       12
#define PID_INTSITE_WATCH         13
#define PID_INTSITE_SUBSCRIPTION  14
#define PID_INTSITE_URL           15
#define PID_INTSITE_TITLE         16
#define PID_INTSITE_CODEPAGE      18
#define PID_INTSITE_TRACKING      19
#define PID_INTSITE_ICONINDEX     20
#define PID_INTSITE_ICONFILE      21
#define PID_INTSITE_ROAMED        34

#define PIDISF_RECENTLYCHANGED  0x00000001
#define PIDISF_CACHEDSTICKY     0x00000002
#define PIDISF_CACHEIMAGES      0x00000010
#define PIDISF_FOLLOWALLLINKS   0x00000020

#define PIDISM_GLOBAL           0
#define PIDISM_WATCH            1
#define PIDISM_DONTWATCH        2

#define PIDISR_UP_TO_DATE       0
#define PIDISR_NEEDS_ADD        1
#define PIDISR_NEEDS_UPDATE     2
#define PIDISR_NEEDS_DELETE     3

typedef struct {
    BOOL fShowAllObjects : 1;
    BOOL fShowExtensions : 1;
    BOOL fNoConfirmRecycle : 1;
    BOOL fShowSysFiles : 1;
    BOOL fShowCompColor : 1;
    BOOL fDoubleClickInWebView : 1;
    BOOL fDesktopHTML : 1;
    BOOL fWin95Classic : 1;
    BOOL fDontPrettyPath : 1;
    BOOL fShowAttribCol : 1;
    BOOL fMapNetDrvBtn : 1;
    BOOL fShowInfoTip : 1;
    BOOL fHideIcons : 1;
    BOOL fWebView : 1;
    BOOL fFilter : 1;
    BOOL fShowSuperHidden : 1;
    BOOL fNoNetCrawling : 1;
    DWORD dwWin95Unused;
    UINT uWin95Unused;
    LONG lParamSort;
    int iSortDirection;
    UINT version;
    UINT uNotUsed;
    BOOL fSepProcess: 1;
    BOOL fStartPanelOn: 1;
    BOOL fShowStartPage: 1;
    BOOL fAutoCheckSelect: 1;
    BOOL fIconsOnly: 1;
    BOOL fShowTypeOverlay: 1;
    BOOL fShowStatusBar : 1;
    UINT fSpareFlags : 9;
} SHELLSTATEA, *LPSHELLSTATEA;

typedef struct {
    BOOL fShowAllObjects : 1;
    BOOL fShowExtensions : 1;
    BOOL fNoConfirmRecycle : 1;
    BOOL fShowSysFiles : 1;
    BOOL fShowCompColor : 1;
    BOOL fDoubleClickInWebView : 1;
    BOOL fDesktopHTML : 1;
    BOOL fWin95Classic : 1;
    BOOL fDontPrettyPath : 1;
    BOOL fShowAttribCol : 1;
    BOOL fMapNetDrvBtn : 1;
    BOOL fShowInfoTip : 1;
    BOOL fHideIcons : 1;
    BOOL fWebView : 1;
    BOOL fFilter : 1;
    BOOL fShowSuperHidden : 1;
    BOOL fNoNetCrawling : 1;
    DWORD dwWin95Unused;
    UINT uWin95Unused;
    LONG lParamSort;
    int iSortDirection;
    UINT version;
    UINT uNotUsed;
    BOOL fSepProcess: 1;
    BOOL fStartPanelOn: 1;
    BOOL fShowStartPage: 1;
    BOOL fAutoCheckSelect: 1;
    BOOL fIconsOnly: 1;
    BOOL fShowTypeOverlay: 1;
    BOOL fShowStatusBar : 1;
    UINT fSpareFlags : 9;
} SHELLSTATEW, *LPSHELLSTATEW;

#define SHELLSTATEVERSION_IE4   9
#define SHELLSTATEVERSION_WIN2K 10

#ifdef UNICODE
#define SHELLSTATE   SHELLSTATEW
#define LPSHELLSTATE LPSHELLSTATEW
#else /* !UNICODE */
#define SHELLSTATE   SHELLSTATEA
#define LPSHELLSTATE LPSHELLSTATEA
#endif /* !UNICODE */

#define SHELLSTATE_SIZE_WIN95 FIELD_OFFSET(SHELLSTATE,lParamSort)
#define SHELLSTATE_SIZE_NT4   FIELD_OFFSET(SHELLSTATE,version)
#define SHELLSTATE_SIZE_IE4   FIELD_OFFSET(SHELLSTATE,uNotUsed)
#define SHELLSTATE_SIZE_WIN2K sizeof(SHELLSTATE)

SHSTDAPI_(void) SHGetSetSettings( LPSHELLSTATE lpss, DWORD dwMask, BOOL bSet);

typedef struct {
    BOOL fShowAllObjects : 1;
    BOOL fShowExtensions : 1;
    BOOL fNoConfirmRecycle : 1;
    BOOL fShowSysFiles : 1;
    BOOL fShowCompColor : 1;
    BOOL fDoubleClickInWebView : 1;
    BOOL fDesktopHTML : 1;
    BOOL fWin95Classic : 1;
    BOOL fDontPrettyPath : 1;
    BOOL fShowAttribCol : 1;
    BOOL fMapNetDrvBtn : 1;
    BOOL fShowInfoTip : 1;
    BOOL fHideIcons : 1;
#if (NTDDI_VERSION >= NTDDI_VISTA)
    BOOL fAutoCheckSelect: 1;
    BOOL fIconsOnly: 1;
    UINT fRestFlags : 1;
#else /* (NTDDI_VERSION < NTDDI_VISTA) */
    UINT fRestFlags : 3;
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */
} SHELLFLAGSTATE, *LPSHELLFLAGSTATE;

#define SSF_SHOWALLOBJECTS          0x00000001
#define SSF_SHOWEXTENSIONS          0x00000002
#define SSF_HIDDENFILEEXTS          0x00000004
#define SSF_SERVERADMINUI           0x00000004
#define SSF_SHOWCOMPCOLOR           0x00000008
#define SSF_SORTCOLUMNS             0x00000010
#define SSF_SHOWSYSFILES            0x00000020
#define SSF_DOUBLECLICKINWEBVIEW    0x00000080
#define SSF_SHOWATTRIBCOL           0x00000100
#define SSF_DESKTOPHTML             0x00000200
#define SSF_WIN95CLASSIC            0x00000400
#define SSF_DONTPRETTYPATH          0x00000800
#define SSF_SHOWINFOTIP             0x00002000
#define SSF_MAPNETDRVBUTTON         0x00001000
#define SSF_NOCONFIRMRECYCLE        0x00008000
#define SSF_HIDEICONS               0x00004000
#define SSF_FILTER                  0x00010000
#define SSF_WEBVIEW                 0x00020000
#define SSF_SHOWSUPERHIDDEN         0x00040000
#define SSF_SEPPROCESS              0x00080000
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define SSF_NONETCRAWLING           0x00100000
#define SSF_STARTPANELON            0x00200000
#define SSF_SHOWSTARTPAGE           0x00400000
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SSF_AUTOCHECKSELECT         0x00800000
#define SSF_ICONSONLY               0x01000000
#define SSF_SHOWTYPEOVERLAY         0x02000000
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define SSF_SHOWSTATUSBAR           0x04000000
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

SHSTDAPI_(void) SHGetSettings( SHELLFLAGSTATE *psfs, DWORD dwMask);
SHSTDAPI SHBindToParent(PCIDLIST_ABSOLUTE pidl, REFIID riid, void * *ppv, PCUITEMID_CHILD *ppidlLast);

#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHBindToFolderIDListParent(IShellFolder *psfRoot, PCUIDLIST_RELATIVE pidl, REFIID riid, void * *ppv, PCUITEMID_CHILD *ppidlLast);
SHSTDAPI SHBindToFolderIDListParentEx(IShellFolder *psfRoot, PCUIDLIST_RELATIVE pidl, IBindCtx *ppbc, REFIID riid, void * *ppv, PCUITEMID_CHILD *ppidlLast);
SHSTDAPI SHBindToObject(IShellFolder *psf, PCUIDLIST_RELATIVE pidl, IBindCtx *pbc, REFIID riid, void * *ppv);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

__inline BOOL IDListContainerIsConsistent(PCUIDLIST_RELATIVE pidl, UINT cbAlloc) {
    UINT cbPidl = sizeof(pidl->mkid.cb);
    while (cbPidl <= cbAlloc &&
    pidl->mkid.cb >= sizeof(pidl->mkid.cb) &&
    pidl->mkid.cb <= cbAlloc - cbPidl)
    {
        cbPidl += pidl->mkid.cb;
        pidl = ILNext(pidl);
    }
    return cbPidl <= cbAlloc && 0 == pidl->mkid.cb;
}

#if (NTDDI_VERSION >= NTDDI_WINXP)
SHSTDAPI SHParseDisplayName(PCWSTR pszName, IBindCtx *pbc, PIDLIST_ABSOLUTE *ppidl, SFGAOF sfgaoIn, SFGAOF *psfgaoOut);
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

#define SHPPFW_NONE             0x00000000
#define SHPPFW_DEFAULT          SHPPFW_DIRCREATE
#define SHPPFW_DIRCREATE        0x00000001
#define SHPPFW_ASKDIRCREATE     0x00000002
#define SHPPFW_IGNOREFILENAME   0x00000004
#define SHPPFW_NOWRITECHECK     0x00000008
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define SHPPFW_MEDIACHECKONLY   0x00000010
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

SHSTDAPI SHPathPrepareForWriteA(HWND hwnd, IUnknown *punkEnableModless, LPCSTR pszPath, DWORD dwFlags);
SHSTDAPI SHPathPrepareForWriteW(HWND hwnd, IUnknown *punkEnableModless, LPCWSTR pszPath, DWORD dwFlags);
#ifdef UNICODE
#define SHPathPrepareForWrite  SHPathPrepareForWriteW
#else /* !UNICODE */
#define SHPathPrepareForWrite  SHPathPrepareForWriteA
#endif /* !UNICODE */

#undef  INTERFACE
#define INTERFACE  INamedPropertyBag
DECLARE_INTERFACE_IID_(INamedPropertyBag, IUnknown, "FB700430-952C-11d1-946F-000000000000") {
    STDMETHOD(ReadPropertyNPB) (THIS_ PCWSTR pszBagname, PCWSTR pszPropName, PROPVARIANT * pVar) PURE;
    STDMETHOD(WritePropertyNPB)(THIS_ PCWSTR pszBagname, PCWSTR pszPropName, PROPVARIANT * pVar) PURE;
    STDMETHOD(RemovePropertyNPB)(THIS_ PCWSTR pszBagname, PCWSTR pszPropName) PURE;
};

SHSTDAPI SHPropStgCreate(IPropertySetStorage * psstg, REFFMTID fmtid, const CLSID *pclsid, DWORD grfFlags, DWORD grfMode, DWORD dwDisposition, IPropertyStorage * * ppstg, UINT * puCodePage);
SHSTDAPI SHPropStgReadMultiple(IPropertyStorage * pps, UINT uCodePage, ULONG cpspec, PROPSPEC const rgpspec[], PROPVARIANT rgvar[] );
SHSTDAPI SHPropStgWriteMultiple(IPropertyStorage * pps, UINT * puCodePage, ULONG cpspec, PROPSPEC const rgpspec[], PROPVARIANT rgvar[], PROPID propidNameFirst );

#if (NTDDI_VERSION >= NTDDI_WINXP)

SHSTDAPI SHCreateFileExtractIconA(LPCSTR pszFile, DWORD dwFileAttributes, REFIID riid, void * *ppv);
SHSTDAPI SHCreateFileExtractIconW(LPCWSTR pszFile, DWORD dwFileAttributes, REFIID riid, void * *ppv);
#ifdef UNICODE
#define SHCreateFileExtractIcon  SHCreateFileExtractIconW
#else /* !UNICODE */
#define SHCreateFileExtractIcon  SHCreateFileExtractIconA
#endif /* !UNICODE */

SHSTDAPI SHLimitInputEdit(HWND hwndEdit, IShellFolder *psf);
STDAPI SHGetAttributesFromDataObject(IDataObject *pdo, DWORD dwAttributeMask, DWORD *pdwAttributes, UINT *pcItems);

#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

SHSTDAPI_(int) SHMapPIDLToSystemImageListIndex( IShellFolder *pshf, PCUITEMID_CHILD pidl, int *piIndexSel);

SHSTDAPI SHCLSIDFromString(PCWSTR psz, CLSID *pclsid);
SHSTDAPI_(int) PickIconDlg( HWND hwnd, PWSTR pszIconPath, UINT cchIconPath, int *piIconIndex);

#if (NTDDI_VERSION >= NTDDI_WIN7)
STDAPI StgMakeUniqueName(IStorage *pstgParent, PCWSTR pszFileSpec, DWORD grfMode, REFIID riid, void * *ppv);
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#if (_WIN32_IE >= _WIN32_IE_IE70)
typedef enum tagIESHORTCUTFLAGS {
    IESHORTCUT_NEWBROWSER = 0x01,
    IESHORTCUT_OPENNEWTAB = 0x02,
    IESHORTCUT_FORCENAVIGATE = 0x04,
    IESHORTCUT_BACKGROUNDTAB = 0x08,
} IESHORTCUTFLAGS;
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */

#include <poppack.h>

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
