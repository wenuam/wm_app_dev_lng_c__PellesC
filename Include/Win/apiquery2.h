#ifndef _APIQUERY2_H
#define _APIQUERY2_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-apiquery-l2 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

#undef APICONTRACT
#ifdef API_QUERY_IMPORT
#define APICONTRACT DECLSPEC_IMPORT
#else
#define APICONTRACT
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
APICONTRACT BOOL APIENTRY IsApiSetImplemented(PCSTR Contract);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _APIQUERY2_H */
