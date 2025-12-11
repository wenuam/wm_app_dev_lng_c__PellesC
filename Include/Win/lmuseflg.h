#ifndef _LMUSEFLG_H
#define _LMUSEFLG_H

#if __POCC__ >= 500
#pragma once
#endif

/* Force levels when deleting a connection */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define USE_NOFORCE  0
#define USE_FORCE  1
#define USE_LOTS_OF_FORCE  2

#define FORCE_LEVEL(LEVELFLAGS)  ((LEVELFLAGS) & 0xffff)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _LMUSEFLG_H */
