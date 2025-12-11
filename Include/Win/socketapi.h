#ifndef _SOCKETAPI_H
#define _SOCKETAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* Socket API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if NTDDI_VERSION >= NTDDI_WIN8
HRESULT WINAPI SetSocketMediaStreamingMode(BOOL value);
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif /* _SOCKETAPI_H */
