#ifndef _OLE2VER_H
#define _OLE2VER_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows OLE 2 Version Number Info */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define rmm  23
#define rup  639

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _OLE2VER_H */
