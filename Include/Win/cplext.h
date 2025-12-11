#ifndef _CPLEXT_H
#define _CPLEXT_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Control panel property sheet extension definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define CPLPAGE_MOUSE_BUTTONS  1
#define CPLPAGE_MOUSE_PTRMOTION  2
#define CPLPAGE_MOUSE_WHEEL  3

#define CPLPAGE_KEYBOARD_SPEED  1

#define CPLPAGE_DISPLAY_BACKGROUND  1

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _CPLEXT_H */
