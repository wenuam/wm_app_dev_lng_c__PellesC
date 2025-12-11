#ifndef _WCNAPI_H
#define _WCNAPI_H

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if !defined(NTDDI_VERSION) || NTDDI_VERSION < NTDDI_WIN7
#error <wcnapi.h> is only available when targeting Windows 7 and higher
#endif /* NTDDI_VERSION < NTDDI_WIN7 */

#include <WcnTypes.h>
#include <WcnDevice.h>

#ifndef NO_WCN_PKEYS
#include <WcnFunctionDiscoveryKeys.h>
#endif /* !NO_WCN_KEYS */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WCNAPI_H */

