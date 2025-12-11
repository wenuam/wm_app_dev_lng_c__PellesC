#ifndef _VERSIONHELPERS_H
#define _VERSIONHELPERS_H

/* #include <winapifamily.h> */

#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef __midl

#if (NTDDI_VERSION >= NTDDI_WINXP)

#ifndef _versionhelpers_H_INCLUDED_
#define _versionhelpers_H_INCLUDED_

#define VERSIONHELPERAPI FORCEINLINE BOOL

VERSIONHELPERAPI IsWindowsVersionOrGreater(
    WORD wMajorVersion,
    WORD wMinorVersion,
    WORD wServicePackMajor)
{
    OSVERSIONINFOEXW osvi = { sizeof(osvi), 0, 0, 0, 0, {0}, 0, 0 };
    const DWORDLONG dwlConditionMask = VerSetConditionMask(
        VerSetConditionMask(
        VerSetConditionMask(
            0, VER_MAJORVERSION, VER_GREATER_EQUAL),
               VER_MINORVERSION, VER_GREATER_EQUAL),
               VER_SERVICEPACKMAJOR, VER_GREATER_EQUAL);

    osvi.dwMajorVersion = wMajorVersion;
    osvi.dwMinorVersion = wMinorVersion;
    osvi.wServicePackMajor = wServicePackMajor;

    return VerifyVersionInfoW(&osvi,
        (VER_MAJORVERSION | VER_MINORVERSION | VER_SERVICEPACKMAJOR),
        dwlConditionMask) != FALSE;
}

VERSIONHELPERAPI IsWindowsXPOrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINXP), LOBYTE(_WIN32_WINNT_WINXP), 0);
}

VERSIONHELPERAPI IsWindowsXPSP1OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINXP), LOBYTE(_WIN32_WINNT_WINXP), 1);
}

VERSIONHELPERAPI IsWindowsXPSP2OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINXP), LOBYTE(_WIN32_WINNT_WINXP), 2);
}

VERSIONHELPERAPI IsWindowsXPSP3OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINXP), LOBYTE(_WIN32_WINNT_WINXP), 3);
}

VERSIONHELPERAPI IsWindowsVistaOrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_VISTA), LOBYTE(_WIN32_WINNT_VISTA), 0);
}

VERSIONHELPERAPI IsWindowsVistaSP1OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_VISTA), LOBYTE(_WIN32_WINNT_VISTA), 1);
}

VERSIONHELPERAPI IsWindowsVistaSP2OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_VISTA), LOBYTE(_WIN32_WINNT_VISTA), 2);
}

VERSIONHELPERAPI IsWindows7OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WIN7), LOBYTE(_WIN32_WINNT_WIN7), 0);
}

VERSIONHELPERAPI IsWindows7SP1OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WIN7), LOBYTE(_WIN32_WINNT_WIN7), 1);
}

VERSIONHELPERAPI IsWindows8OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WIN8), LOBYTE(_WIN32_WINNT_WIN8), 0);
}

VERSIONHELPERAPI IsWindows8Point1OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINBLUE), LOBYTE(_WIN32_WINNT_WINBLUE), 0);
}

VERSIONHELPERAPI IsWindowsThresholdOrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINTHRESHOLD), LOBYTE(_WIN32_WINNT_WINTHRESHOLD), 0);
}

VERSIONHELPERAPI IsWindows10OrGreater(void)
{
    return IsWindowsVersionOrGreater(HIBYTE(_WIN32_WINNT_WINTHRESHOLD), LOBYTE(_WIN32_WINNT_WINTHRESHOLD), 0);
}

VERSIONHELPERAPI IsWindowsServer(void)
{
    OSVERSIONINFOEXW osvi = { sizeof(osvi), 0, 0, 0, 0, {0}, 0, 0, 0, VER_NT_WORKSTATION };
    const DWORDLONG dwlConditionMask = VerSetConditionMask( 0, VER_PRODUCT_TYPE, VER_EQUAL );
    return !VerifyVersionInfoW(&osvi, VER_PRODUCT_TYPE, dwlConditionMask);
}

VERSIONHELPERAPI IsActiveSessionCountLimited(void)
{
    BOOL fActiveSessionCountLimited = FALSE;
    DWORDLONG dwlConditionMask = 0;
    OSVERSIONINFOEX VersionInfo = { 0 };

    VER_SET_CONDITION(dwlConditionMask, VER_SUITENAME, VER_AND);
    VersionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

    VersionInfo.wSuiteMask = VER_SUITE_TERMINAL;
    BOOL fSuiteTerminal = VerifyVersionInfo( &VersionInfo, VER_SUITENAME, dwlConditionMask );

    VersionInfo.wSuiteMask = VER_SUITE_SINGLEUSERTS;
    BOOL fSuiteSingleUserTS = VerifyVersionInfo( &VersionInfo, VER_SUITENAME, dwlConditionMask );

    fActiveSessionCountLimited  = !(fSuiteTerminal & !fSuiteSingleUserTS);

    return fActiveSessionCountLimited != FALSE;
}

#endif /* _versionhelpers_H_INCLUDED_ */

#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

#endif /* !__midl */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _VERSIONHELPERS_H */
