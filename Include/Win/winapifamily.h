#ifndef _WINAPIFAMILY_H
#define _WINAPIFAMILY_H

/* Windows API family partitioning master include */

#if __POCC__ >= 500
#pragma once
#endif

#include <winpackagefamily.h>

#define WINAPI_FAMILY_PC_APP  2
#define WINAPI_FAMILY_SYSTEM  4
#define WINAPI_FAMILY_SERVER  5
#define WINAPI_FAMILY_GAMES   6
#define WINAPI_FAMILY_DESKTOP_APP  100

/* compatibility with Windows 8 header files */
#define WINAPI_FAMILY_APP  WINAPI_FAMILY_PC_APP

#ifndef WINAPI_FAMILY
#define WINAPI_FAMILY  WINAPI_FAMILY_DESKTOP_APP
#endif /* !WINAPI_FAMILY */

#if (WINAPI_FAMILY != WINAPI_FAMILY_DESKTOP_APP && \
     WINAPI_FAMILY != WINAPI_FAMILY_PC_APP && \
     WINAPI_FAMILY != WINAPI_FAMILY_SYSTEM && \
     WINAPI_FAMILY != WINAPI_FAMILY_GAMES && \
     WINAPI_FAMILY != WINAPI_FAMILY_SERVER)
#error Unknown WINAPI_FAMILY value. What a fiasco.
#endif

#ifndef WINAPI_PARTITION_DESKTOP
#define WINAPI_PARTITION_DESKTOP  (WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP)
#endif /* !WINAPI_PARTITION_DESKTOP */

#ifndef WINAPI_PARTITION_APP
#define WINAPI_PARTITION_APP \
    (WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP || \
     WINAPI_FAMILY == WINAPI_FAMILY_PC_APP)
#endif /* !WINAPI_PARTITION_APP */

#ifndef WINAPI_PARTITION_PC_APP
#define WINAPI_PARTITION_PC_APP                                                \
    (WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP ||                               \
     WINAPI_FAMILY == WINAPI_FAMILY_PC_APP)
#endif /* !WINAPI_PARTITION_PC_APP */

#ifndef WINAPI_PARTITION_GAMES
#define WINAPI_PARTITION_GAMES                                                 \
    (WINAPI_FAMILY == WINAPI_FAMILY_GAMES ||                                     \
     WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP)
#endif /* !WINAPI_PARTITION_GAMES */

/*
 * SYSTEM is the only partition defined here.
 * All other System based editions are defined as packages
 * on top of the System partition.
 * See winpackagefamily.h for packages level partitions
 */
#ifndef WINAPI_PARTITION_SYSTEM
#define WINAPI_PARTITION_SYSTEM                                                \
    (WINAPI_FAMILY == WINAPI_FAMILY_SYSTEM ||                                    \
     WINAPI_FAMILY == WINAPI_FAMILY_SERVER)
#endif /* !WINAPI_PARTITION_SYSTEM */

/* #define WINAPI_PARTITION_PHONE  WINAPI_PARTITION_PHONE_APP */

#define WINAPI_FAMILY_PARTITION(Partitions)  (Partitions)

/* for selective deprecation of individual methods of COM interfaces */
#define _WINAPI_DEPRECATED_DECLARATION  __declspec(deprecated("This API cannot be used in the context of the caller's application type."))

/* compatibility with Windows 8 header files */
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define APP_DEPRECATED_HRESULT  HRESULT _WINAPI_DEPRECATED_DECLARATION
#endif /* WINAPIFAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WINAPIFAMILY_H */
