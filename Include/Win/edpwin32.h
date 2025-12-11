#ifndef _EDPWIN32_H
#define _EDPWIN32_H

#if __POCC__ >= 500
#pragma once
#endif

/* Enterprise Data Protection Win32 API definitions */

#ifndef NT_INCLUDED
#include <winnt.h>
#endif /* NT_INCLUDED */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)

#if NTDDI_VERSION >= NTDDI_WIN10_TH2
STDAPI ProtectFileToEnterpriseIdentity(
    PCWSTR fileOrFolderPath,
    PCWSTR identity
);
#endif /* NTDDI_VERSION >= NTDDI_WIN10_TH2 */

#if NTDDI_VERSION >= NTDDI_WIN10_RS2
typedef struct {
    bool audit;
} FILE_UNPROTECT_OPTIONS;

STDAPI UnprotectFile(
    PCWSTR fileOrFolderPath,
    const FILE_UNPROTECT_OPTIONS * options
);
#endif /* NTDDI_VERSION >= NTDDI_WIN10_RS2 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP) */

#endif /* _EDPWIN32_H */
