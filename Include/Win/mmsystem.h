#ifndef _MMSYSTEM_H
#define _MMSYSTEM_H

/* Windows Multimedia API definitions */

#include <mmsyscom.h>

#include <pshpack1.h>

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef MMNOMCI
#include <mciapi.h>
#endif /* !MMNOMCI */

#include <mmiscapi.h>
#include <mmiscapi2.h>

#include <playsoundapi.h>

#include <mmeapi.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef MMNOTIMER
#include <timeapi.h>
#endif  /* !MMNOTIMER */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <joystickapi.h>

#ifndef NEWTRANSPARENT
    #define NEWTRANSPARENT  3
    #define QUERYROPSUPPORT 40
#endif  /* ifndef NEWTRANSPARENT */

#define SELECTDIB    41
#define DIBINDEX(n)  MAKELONG((n),0x10FF)

#ifndef SC_SCREENSAVE
#define SC_SCREENSAVE  0xF140
#endif /* !SC_SCREENSAVE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#include <poppack.h>

#endif /* _MMSYSTEM_H */
