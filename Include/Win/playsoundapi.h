#ifndef _PLAYSOUNDAPI_H
#define _PLAYSOUNDAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-mm-playsound-l1-1-0 */

#include <apiset.h>
#include <apisetcconv.h>

#include <mmsyscom.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef MMNOSOUND

WINMMAPI BOOL WINAPI sndPlaySoundA(
    LPCSTR pszSound,
    UINT fuSound
);
WINMMAPI BOOL WINAPI sndPlaySoundW(
    LPCWSTR pszSound,
    UINT fuSound
);
#ifdef UNICODE
#define sndPlaySound  sndPlaySoundW
#else /* !UNICODE */
#define sndPlaySound  sndPlaySoundA
#endif /* !UNICODE */

#define SND_SYNC            0x0000
#define SND_ASYNC           0x0001
#define SND_NODEFAULT       0x0002
#define SND_MEMORY          0x0004
#define SND_LOOP            0x0008
#define SND_NOSTOP          0x0010

#define SND_NOWAIT      0x00002000L
#define SND_ALIAS       0x00010000L
#define SND_ALIAS_ID    0x00110000L
#define SND_FILENAME    0x00020000L
#define SND_RESOURCE    0x00040004L
#define SND_PURGE           0x0040
#define SND_APPLICATION     0x0080
#define SND_SENTRY      0x00080000L
#define SND_RING        0x00100000L
#define SND_SYSTEM      0x00200000L

#define SND_ALIAS_START  0

#define sndAlias(ch0, ch1)      (SND_ALIAS_START + (DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8))

#define SND_ALIAS_SYSTEMASTERISK        sndAlias('S', '*')
#define SND_ALIAS_SYSTEMQUESTION        sndAlias('S', '?')
#define SND_ALIAS_SYSTEMHAND            sndAlias('S', 'H')
#define SND_ALIAS_SYSTEMEXIT            sndAlias('S', 'E')
#define SND_ALIAS_SYSTEMSTART           sndAlias('S', 'S')
#define SND_ALIAS_SYSTEMWELCOME         sndAlias('S', 'W')
#define SND_ALIAS_SYSTEMEXCLAMATION     sndAlias('S', '!')
#define SND_ALIAS_SYSTEMDEFAULT         sndAlias('S', 'D')

WINMMAPI BOOL WINAPI PlaySoundA(
    LPCSTR pszSound,
    HMODULE hmod,
    DWORD fdwSound
);
WINMMAPI BOOL WINAPI PlaySoundW(
    LPCWSTR pszSound,
    HMODULE hmod,
    DWORD fdwSound
);
#ifdef UNICODE
#define PlaySound  PlaySoundW
#else /* !UNICODE */
#define PlaySound  PlaySoundA
#endif /* !UNICODE */

#endif /* ifndef MMNOSOUND */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _PLAYSOUNDAPI_H */
