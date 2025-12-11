#ifndef _APPMGMT_H
#define _APPMGMT_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows MSI Application APIs */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum _INSTALLSPECTYPE {
    APPNAME = 1,
    FILEEXT,
    PROGID,
    COMCLASS
} INSTALLSPECTYPE;

typedef union _INSTALLSPEC {
    struct {
        WCHAR *Name;
        GUID GPOId;
    } AppName;
    WCHAR *FileExt;
    WCHAR *ProgId;
    struct {
        GUID Clsid;
        DWORD ClsCtx;
    } COMClass;
} INSTALLSPEC;

typedef struct _INSTALLDATA {
    INSTALLSPECTYPE Type;
    INSTALLSPEC Spec;
} INSTALLDATA, *PINSTALLDATA;

typedef enum {
    ABSENT,
    ASSIGNED,
    PUBLISHED
} APPSTATE;

#define LOCALSTATE_ASSIGNED  0x1
#define LOCALSTATE_PUBLISHED  0x2
#define LOCALSTATE_UNINSTALL_UNMANAGED  0x4
#define LOCALSTATE_POLICYREMOVE_ORPHAN  0x8
#define LOCALSTATE_POLICYREMOVE_UNINSTALL  0x10
#define LOCALSTATE_ORPHANED  0x20
#define LOCALSTATE_UNINSTALLED  0x40

typedef struct _LOCALMANAGEDAPPLICATION {
    LPWSTR pszDeploymentName;
    LPWSTR pszPolicyName;
    LPWSTR pszProductId;
    DWORD dwState;
} LOCALMANAGEDAPPLICATION, *PLOCALMANAGEDAPPLICATION;

#define MANAGED_APPS_USERAPPLICATIONS  0x1
#define MANAGED_APPS_FROMCATEGORY  0x2
#define MANAGED_APPS_INFOLEVEL_DEFAULT  0x10000

#define MANAGED_APPTYPE_WINDOWSINSTALLER  0x1
#define MANAGED_APPTYPE_SETUPEXE  0x2
#define MANAGED_APPTYPE_UNSUPPORTED  0x3

typedef struct _MANAGEDAPPLICATION {
    LPWSTR pszPackageName;
    LPWSTR pszPublisher;
    DWORD dwVersionHi;
    DWORD dwVersionLo;
    DWORD dwRevision;
    GUID GpoId;
    LPWSTR pszPolicyName;
    GUID ProductId;
    LANGID Language;
    LPWSTR pszOwner;
    LPWSTR pszCompany;
    LPWSTR pszComments;
    LPWSTR pszContact;
    LPWSTR pszSupportUrl;
    DWORD dwPathType;
    BOOL bInstalled;
} MANAGEDAPPLICATION, *PMANAGEDAPPLICATION;

typedef struct _APPCATEGORYINFO {
    LCID Locale;
    LPWSTR pszDescription;
    GUID AppCategoryId;
} APPCATEGORYINFO;

typedef struct _APPCATEGORYINFOLIST {
    DWORD cCategory;
#ifdef MIDL_PASS
    [size_is(cCategory)]
#endif /* MIDL_PASS */
    APPCATEGORYINFO *pCategoryInfo;
} APPCATEGORYINFOLIST;

#ifndef WINAPI
#define WINAPI
#endif

DWORD WINAPI InstallApplication(
    PINSTALLDATA pInstallInfo
);

DWORD WINAPI UninstallApplication(
    LPWSTR ProductCode,
    DWORD dwStatus
);

DWORD WINAPI CommandLineFromMsiDescriptor(
    LPWSTR Descriptor,
    LPWSTR CommandLine,
    DWORD * CommandLineLength
);

DWORD WINAPI GetManagedApplications(
    GUID *pCategory,
    DWORD dwQueryFlags,
    DWORD dwInfoLevel,
    LPDWORD pdwApps,
    PMANAGEDAPPLICATION * prgManagedApps
);

DWORD WINAPI GetLocalManagedApplications(
    BOOL bUserApps,
    LPDWORD pdwApps,
    PLOCALMANAGEDAPPLICATION * prgLocalApps
);

void WINAPI GetLocalManagedApplicationData(
    LPWSTR ProductCode,
    LPWSTR *DisplayName,
    LPWSTR *SupportUrl
);

DWORD WINAPI GetManagedApplicationCategories(
    DWORD dwReserved,
    APPCATEGORYINFOLIST * pAppCategory
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _APPMGMT_H */
