#ifndef _SPORDER_H
#define _SPORDER_H

#if __POCC__ >= 500
#pragma once
#endif

/* WinSock2 transport service provider reorder definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

int WSPAPI WSCWriteProviderOrder(
    LPDWORD lpwdCatalogEntryId,
    DWORD dwNumberOfEntries);

typedef int (WSPAPI * LPWSCWRITEPROVIDERORDER)(
    LPDWORD lpwdCatalogEntryId,
    DWORD dwNumberOfEntries);

#if (_WIN32_WINNT >= 0x0501)
#ifdef _WIN64
int WSPAPI WSCWriteProviderOrder32(
    LPDWORD lpwdCatalogEntryId,
    DWORD dwNumberOfEntries);
#endif /* _WIN64 */
#endif /* (_WIN32_WINNT >= 0x0501) */

int WSPAPI WSCWriteNameSpaceOrder(
    LPGUID lpProviderId,
    DWORD dwNumberOfEntries);

typedef int (WSPAPI * LPWSCWRITENAMESPACEORDER)(
    LPGUID lpProviderId,
    DWORD dwNumberOfEntries);

#if (_WIN32_WINNT >= 0x0501)
#ifdef _WIN64
int WSPAPI WSCWriteNameSpaceOrder32(
    LPGUID lpProviderId,
    DWORD dwNumberOfEntries);
#endif /* _WIN64 */
#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _SPORDER_H */
