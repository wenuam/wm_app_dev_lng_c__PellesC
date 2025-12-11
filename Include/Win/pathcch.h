#ifndef _PATHCCH_H
#define _PATHCCH_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-Path-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef enum PATHCCH_OPTIONS {
    PATHCCH_NONE = 0x0,
    PATHCCH_ALLOW_LONG_PATHS = 0x01,
    PATHCCH_FORCE_ENABLE_LONG_NAME_PROCESS = 0x02,
    PATHCCH_FORCE_DISABLE_LONG_NAME_PROCESS = 0x04,
    PATHCCH_DO_NOT_NORMALIZE_SEGMENTS = 0x08,
    PATHCCH_ENSURE_IS_EXTENDED_LENGTH_PATH = 0x10,
    PATHCCH_ENSURE_TRAILING_SLASH = 0x020,
    PATHCCH_CANONICALIZE_SLASHES = 0x040,
} PATHCCH_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(PATHCCH_OPTIONS)

#define VOLUME_PREFIX       L"\\\\?\\Volume"
#define VOLUME_PREFIX_LEN   (ARRAYSIZE(VOLUME_PREFIX) - 1)

#define PATHCCH_MAX_CCH  0x8000

WINPATHCCHAPI BOOL APIENTRY PathIsUNCEx(
    PCWSTR pszPath,
    PCWSTR *ppszServer
);

WINPATHCCHAPI BOOL APIENTRY PathCchIsRoot(
    PCWSTR pszPath
);

WINPATHCCHAPI HRESULT APIENTRY PathCchAddBackslashEx(
    PWSTR pszPath,
    size_t cchPath,
    PWSTR *ppszEnd,
    size_t *pcchRemaining
);

WINPATHCCHAPI HRESULT APIENTRY PathCchAddBackslash(
    PWSTR pszPath,
    size_t cchPath
);

WINPATHCCHAPI HRESULT APIENTRY PathCchRemoveBackslashEx(
    PWSTR pszPath,
    size_t cchPath,
    PWSTR *ppszEnd,
    size_t *pcchRemaining
);

WINPATHCCHAPI HRESULT APIENTRY PathCchRemoveBackslash(
    PWSTR pszPath,
    size_t cchPath
);

WINPATHCCHAPI HRESULT APIENTRY PathCchSkipRoot(
    PCWSTR pszPath,
    PCWSTR *ppszRootEnd
);

WINPATHCCHAPI HRESULT APIENTRY PathCchStripToRoot(
    PWSTR pszPath,
    size_t cchPath
);

WINPATHCCHAPI HRESULT APIENTRY PathCchRemoveFileSpec(
    PWSTR pszPath,
    size_t cchPath
);

WINPATHCCHAPI HRESULT APIENTRY PathCchFindExtension(
    PCWSTR pszPath,
    size_t cchPath,
    PCWSTR *ppszExt
);

WINPATHCCHAPI HRESULT APIENTRY PathCchAddExtension(
    PWSTR pszPath,
    size_t cchPath,
    PCWSTR pszExt
);

WINPATHCCHAPI HRESULT APIENTRY PathCchRenameExtension(
    PWSTR pszPath,
    size_t cchPath,
    PCWSTR pszExt
);

WINPATHCCHAPI HRESULT APIENTRY PathCchRemoveExtension(
    PWSTR pszPath,
    size_t cchPath
);

WINPATHCCHAPI HRESULT APIENTRY PathCchCanonicalizeEx(
    PWSTR pszPathOut,
    size_t cchPathOut,
    PCWSTR pszPathIn,
    ULONG dwFlags
);

WINPATHCCHAPI HRESULT APIENTRY PathCchCanonicalize(
    PWSTR pszPathOut,
    size_t cchPathOut,
    PCWSTR pszPathIn
);

WINPATHCCHAPI HRESULT APIENTRY PathCchCombineEx(
    PWSTR pszPathOut,
    size_t cchPathOut,
    PCWSTR pszPathIn,
    PCWSTR pszMore,
    ULONG dwFlags
);

WINPATHCCHAPI HRESULT APIENTRY PathCchCombine(
    PWSTR pszPathOut,
    size_t cchPathOut,
    PCWSTR pszPathIn,
    PCWSTR pszMore
);

WINPATHCCHAPI HRESULT APIENTRY PathCchAppendEx(
    PWSTR pszPath,
    size_t cchPath,
    PCWSTR pszMore,
    ULONG dwFlags
);

WINPATHCCHAPI HRESULT APIENTRY PathCchAppend(
    PWSTR pszPath,
    size_t cchPath,
    PCWSTR pszMore
);

WINPATHCCHAPI HRESULT APIENTRY PathCchStripPrefix(
    PWSTR pszPath,
    size_t cchPath
);

WINPATHCCHAPI HRESULT APIENTRY PathAllocCombine(
    PCWSTR pszPathIn,
    PCWSTR pszMore,
    ULONG dwFlags,
    PWSTR *ppszPathOut
);

WINPATHCCHAPI HRESULT APIENTRY PathAllocCanonicalize(
    PCWSTR pszPathIn,
    ULONG dwFlags,
    PWSTR *ppszPathOut
);

#ifndef PATHCCH_NO_DEPRECATE
#ifdef DEPRECATE_SUPPORTED
#pragma deprecated(PathAddBackslashA)
#pragma deprecated(PathAddBackslashW)
#pragma deprecated(PathAddExtensionA)
#pragma deprecated(PathAddExtensionW)
#pragma deprecated(PathAppendA)
#pragma deprecated(PathAppendW)
#pragma deprecated(PathCanonicalizeA)
#pragma deprecated(PathCanonicalizeW)
#pragma deprecated(PathCombineA)
#pragma deprecated(PathCombineW)
#pragma deprecated(PathRenameExtensionA)
#pragma deprecated(PathRenameExtensionW)
#endif /* DEPRECATE_SUPPORTED */
#endif /* !PATHCCH_NO_DEPRECATE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _PATHCCH_H */
