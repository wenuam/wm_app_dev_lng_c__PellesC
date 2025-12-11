#ifndef _WBEMIDL_H
#define _WBEMIDL_H

#if __POCC__ >= 500
#pragma once
#endif

/* WBEM interfaces definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)

#include <wbemcli.h>
#include <wbemprov.h>
#include <wbemtran.h>
#include <wbemdisp.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT) */

#endif /* _WBEMIDL_H */
