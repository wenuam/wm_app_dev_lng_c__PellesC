/* Generated from shtypes.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __shtypes_h__
#define __shtypes_h__

#if __POCC__ >= 500
#pragma once
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2185)  /* Alignment of field 'x' can be less than the natural alignment */
#pragma warn(disable:2198)  /* Nameless field is not standard */
#endif

/* Forward declarations */

/* Headers for imported files */

#include "wtypes.h"

#include "unknwn.h"

//
// For compilers that don't support nameless unions
//
#ifndef DUMMYUNIONNAME
#ifdef NONAMELESSUNION
#define DUMMYUNIONNAME   u
#define DUMMYUNIONNAME2  u2
#define DUMMYUNIONNAME3  u3
#define DUMMYUNIONNAME4  u4
#define DUMMYUNIONNAME5  u5
#else
#define DUMMYUNIONNAME
#define DUMMYUNIONNAME2
#define DUMMYUNIONNAME3
#define DUMMYUNIONNAME4
#define DUMMYUNIONNAME5
#endif
#endif // DUMMYUNIONNAME

//===========================================================================
//
// Object identifiers in the explorer's name space (ItemID and IDList)
//
//  All the items that the user can browse with the explorer (such as files,
// directories, servers, work-groups, etc.) has an identifier which is unique
// among items within the parent folder. Those identifiers are called item
// IDs (SHITEMID). Since all its parent folders have their own item IDs,
// any items can be uniquely identified by a list of item IDs, which is called
// an ID list (ITEMIDLIST).
//
//  ID lists are almost always allocated by the task allocator (see some
// description below as well as OLE 2.0 SDK) and may be passed across
// some of shell interfaces (such as IShellFolder). Each item ID in an ID list
// is only meaningful to its parent folder (which has generated it), and all
// the clients must treat it as an opaque binary data except the first two
// bytes, which indicates the size of the item ID.
//
//  When a shell extension -- which implements the IShellFolder interace --
// generates an item ID, it may put any information in it, not only the data
// with that it needs to identifies the item, but also some additional
// information, which would help implementing some other functions efficiently.
// For example, the shell's IShellFolder implementation of file system items
// stores the primary (long) name of a file or a directory as the item
// identifier, but it also stores its alternative (short) name, size and date
// etc.
//
//  When an ID list is passed to one of shell APIs (such as SHGetPathFromIDList),
// it is always an absolute path -- relative from the root of the name space,
// which is the desktop folder. When an ID list is passed to one of IShellFolder
// member function, it is always a relative path from the folder (unless it
// is explicitly specified).
//
//===========================================================================

//
// SHITEMID -- Item ID  (mkid)
//     USHORT      cb;             // Size of the ID (including cb itself)
//     BYTE        abID[];         // The item ID (variable length)
//
#include <pshpack1.h>

typedef struct _SHITEMID {
    USHORT cb;
    BYTE abID[ 1 ];
} SHITEMID;
#include <poppack.h>

#if defined(_M_IX86)
#define __unaligned
#endif // __unaligned

typedef __unaligned SHITEMID *LPSHITEMID;
typedef const __unaligned SHITEMID *LPCSHITEMID;

//
// ITEMIDLIST -- List if item IDs (combined with 0-terminator)
//
#include <pshpack1.h>

typedef struct _ITEMIDLIST {
    SHITEMID mkid;
} ITEMIDLIST;

typedef ITEMIDLIST ITEMIDLIST_RELATIVE;
typedef ITEMIDLIST ITEMID_CHILD;
typedef ITEMIDLIST ITEMIDLIST_ABSOLUTE;

#include <poppack.h>

typedef BYTE_BLOB *wirePIDL;
typedef __unaligned ITEMIDLIST *LPITEMIDLIST;
typedef const __unaligned ITEMIDLIST *LPCITEMIDLIST;

#define PIDLIST_ABSOLUTE         LPITEMIDLIST
#define PCIDLIST_ABSOLUTE        LPCITEMIDLIST
#define PCUIDLIST_ABSOLUTE       LPCITEMIDLIST
#define PIDLIST_RELATIVE         LPITEMIDLIST
#define PCIDLIST_RELATIVE        LPCITEMIDLIST
#define PUIDLIST_RELATIVE        LPITEMIDLIST
#define PCUIDLIST_RELATIVE       LPCITEMIDLIST
#define PITEMID_CHILD            LPITEMIDLIST
#define PCITEMID_CHILD           LPCITEMIDLIST
#define PUITEMID_CHILD           LPITEMIDLIST
#define PCUITEMID_CHILD          LPCITEMIDLIST
#define PCUITEMID_CHILD_ARRAY    LPCITEMIDLIST *
#define PCUIDLIST_RELATIVE_ARRAY LPCITEMIDLIST *
#define PCIDLIST_ABSOLUTE_ARRAY  LPCITEMIDLIST *
#define PCUIDLIST_ABSOLUTE_ARRAY LPCITEMIDLIST *

#ifdef MIDL_PASS

typedef struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[ 260 ];
    CHAR cAlternateFileName[ 14 ];
} WIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAA *PWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[ 260 ];
    WCHAR cAlternateFileName[ 14 ];
} WIN32_FIND_DATAW;
typedef struct _WIN32_FIND_DATAW *PWIN32_FIND_DATAW;
typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

#endif // MIDL_PASS

//-------------------------------------------------------------------------
//
// struct STRRET
//
// structure for returning strings from IShellFolder member functions
//
//-------------------------------------------------------------------------
//
//  uType indicate which union member to use
//    STRRET_WSTR    Use STRRET.pOleStr     must be freed by caller of GetDisplayNameOf
//    STRRET_OFFSET  Use STRRET.uOffset     Offset into SHITEMID for ANSI string
//    STRRET_CSTR    Use STRRET.cStr        ANSI Buffer
//

typedef enum tagSTRRET_TYPE {
    STRRET_WSTR = 0x0,
    STRRET_OFFSET = 0x1,
    STRRET_CSTR = 0x2
} STRRET_TYPE;

#include <pshpack8.h>

typedef struct _STRRET {
    UINT uType;
    union {
        LPWSTR pOleStr;
        UINT uOffset;
        unsigned char cStr[ 260 ];
    } DUMMYUNIONNAME;
} STRRET;
#include <poppack.h>

typedef STRRET *LPSTRRET;

//-------------------------------------------------------------------------
//
// struct SHELLDETAILS
//
// structure for returning strings from IShellDetails
//
//-------------------------------------------------------------------------
//
//  fmt;            // LVCFMT_* value (header only)
//  cxChar;         // Number of 'average' characters (header only)
//  str;            // String information
//
#include <pshpack1.h>

typedef struct _SHELLDETAILS {
    int fmt;
    int cxChar;
    STRRET str;
} SHELLDETAILS;
typedef struct _SHELLDETAILS *LPSHELLDETAILS;
#include <poppack.h>

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

typedef enum tagPERCEIVED {
    PERCEIVED_TYPE_FIRST = -3,
    PERCEIVED_TYPE_CUSTOM = -3,
    PERCEIVED_TYPE_UNSPECIFIED = -2,
    PERCEIVED_TYPE_FOLDER = -1,
    PERCEIVED_TYPE_UNKNOWN = 0,
    PERCEIVED_TYPE_TEXT = 1,
    PERCEIVED_TYPE_IMAGE = 2,
    PERCEIVED_TYPE_AUDIO = 3,
    PERCEIVED_TYPE_VIDEO = 4,
    PERCEIVED_TYPE_COMPRESSED = 5,
    PERCEIVED_TYPE_DOCUMENT = 6,
    PERCEIVED_TYPE_SYSTEM = 7,
    PERCEIVED_TYPE_APPLICATION = 8,
    PERCEIVED_TYPE_GAMEMEDIA = 9,
    PERCEIVED_TYPE_CONTACTS = 10,
    PERCEIVED_TYPE_LAST = 10
} PERCEIVED;

#define PERCEIVEDFLAG_UNDEFINED     0x0000
#define PERCEIVEDFLAG_SOFTCODED     0x0001
#define PERCEIVEDFLAG_HARDCODED     0x0002
#define PERCEIVEDFLAG_NATIVESUPPORT 0x0004
#define PERCEIVEDFLAG_GDIPLUS       0x0010
#define PERCEIVEDFLAG_WMSDK         0x0020
#define PERCEIVEDFLAG_ZIPFOLDER     0x0040

typedef DWORD PERCEIVEDFLAG;

#endif  // _WIN32_IE_IE60SP2
#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef struct _COMDLG_FILTERSPEC {
    LPCWSTR pszName;
    LPCWSTR pszSpec;
} COMDLG_FILTERSPEC;

#endif  // NTDDI_VISTA

typedef GUID KNOWNFOLDERID;

#define REFKNOWNFOLDERID const KNOWNFOLDERID * __MIDL_CONST

typedef DWORD KF_REDIRECT_FLAGS;

typedef GUID FOLDERTYPEID;

#define REFFOLDERTYPEID const FOLDERTYPEID * __MIDL_CONST

typedef GUID TASKOWNERID;

#define REFTASKOWNERID const TASKOWNERID * __MIDL_CONST

typedef GUID ELEMENTID;

#define REFELEMENTID const ELEMENTID * __MIDL_CONST

#ifndef LF_FACESIZE

typedef struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[ 32 ];
} LOGFONTA;

typedef struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[ 32 ];
} LOGFONTW;

typedef LOGFONTA LOGFONT;

#endif // LF_FACESIZE

typedef enum tagSHCOLSTATE {
    SHCOLSTATE_DEFAULT = 0x0,
    SHCOLSTATE_TYPE_STR = 0x1,
    SHCOLSTATE_TYPE_INT = 0x2,
    SHCOLSTATE_TYPE_DATE = 0x3,
    SHCOLSTATE_TYPEMASK = 0xf,
    SHCOLSTATE_ONBYDEFAULT = 0x10,
    SHCOLSTATE_SLOW = 0x20,
    SHCOLSTATE_EXTENDED = 0x40,
    SHCOLSTATE_SECONDARYUI = 0x80,
    SHCOLSTATE_HIDDEN = 0x100,
    SHCOLSTATE_PREFER_VARCMP = 0x200,
    SHCOLSTATE_PREFER_FMTCMP = 0x400,
    SHCOLSTATE_NOSORTBYFOLDERNESS = 0x800,
    SHCOLSTATE_VIEWONLY = 0x10000,
    SHCOLSTATE_BATCHREAD = 0x20000,
    SHCOLSTATE_NO_GROUPBY = 0x40000,
    SHCOLSTATE_FIXED_WIDTH = 0x1000,
    SHCOLSTATE_NODPISCALE = 0x2000,
    SHCOLSTATE_FIXED_RATIO = 0x4000,
    SHCOLSTATE_DISPLAYMASK = 0xf000
} SHCOLSTATE;

typedef DWORD SHCOLSTATEF;

typedef PROPERTYKEY SHCOLUMNID;
typedef const SHCOLUMNID *LPCSHCOLUMNID;

typedef enum DEVICE_SCALE_FACTOR {
    DEVICE_SCALE_FACTOR_INVALID = 0,
    SCALE_100_PERCENT = 100,
    SCALE_120_PERCENT = 120,
    SCALE_125_PERCENT = 125,
    SCALE_140_PERCENT = 140,
    SCALE_150_PERCENT = 150,
    SCALE_160_PERCENT = 160,
    SCALE_175_PERCENT = 175,
    SCALE_180_PERCENT = 180,
    SCALE_200_PERCENT = 200,
    SCALE_225_PERCENT = 225,
    SCALE_250_PERCENT = 250,
    SCALE_300_PERCENT = 300,
    SCALE_350_PERCENT = 350,
    SCALE_400_PERCENT = 400,
    SCALE_450_PERCENT = 450,
    SCALE_500_PERCENT = 500
} DEVICE_SCALE_FACTOR;

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* __shtypes_h__ */
