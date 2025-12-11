#ifndef _WINCON_H
#define _WINCON_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Console subsystem definitions */

#include <winapifamily.h>

#include <wincontypes.h>

#ifndef NOGDI
#include <wingdi.h>
#endif /* !NOGDI */

#ifndef NOAPISET
#include <consoleapi.h>
#include <consoleapi2.h>
#include <consoleapi3.h>
#endif /* !NOAPISET */

#define CONSOLE_REAL_OUTPUT_HANDLE  (LongToHandle(-2))
#define CONSOLE_REAL_INPUT_HANDLE   (LongToHandle(-3))

#define CONSOLE_TEXTMODE_BUFFER  1

#endif /* _WINCON_H */
