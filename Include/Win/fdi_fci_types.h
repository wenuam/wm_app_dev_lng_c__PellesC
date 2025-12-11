#ifndef _FDI_FCI_TYPES_H
#define _FDI_FCI_TYPES_H

/* Common shit for <fdi.h> and <fci.h> */

#include <winapifamily.h>

#ifndef DIAMONDAPI
#define DIAMONDAPI  __cdecl
#endif /* DIAMONDAPI */

#ifndef _WINDOWS_H
typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned int UINT;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
#endif /* _WINDOWS_H */

typedef unsigned long CHECKSUM;

typedef unsigned long UOFF;
typedef unsigned long COFF;

#ifndef TRUE
#define TRUE  1
#endif

#ifndef FALSE
#define FALSE  0
#endif

#ifndef NULL
#define NULL  ((void *)0)
#endif

typedef struct {
    int erfOper;
    int erfType;
    BOOL fError;
} ERF;
typedef ERF *PERF;

#define CB_MAX_CHUNK            32768U
#define CB_MAX_DISK        0x7fffffffL
#define CB_MAX_FILENAME            256
#define CB_MAX_CABINET_NAME        256
#define CB_MAX_CAB_PATH            256
#define CB_MAX_DISK_NAME           256

typedef unsigned short TCOMP;

#define tcompMASK_TYPE          0x000F
#define tcompTYPE_NONE          0x0000
#define tcompTYPE_MSZIP         0x0001
#define tcompTYPE_QUANTUM       0x0002
#define tcompTYPE_LZX           0x0003
#define tcompBAD                0x000F

#define tcompMASK_LZX_WINDOW    0x1F00
#define tcompLZX_WINDOW_LO      0x0F00
#define tcompLZX_WINDOW_HI      0x1500
#define tcompSHIFT_LZX_WINDOW        8

#define tcompMASK_QUANTUM_LEVEL 0x00F0
#define tcompQUANTUM_LEVEL_LO   0x0010
#define tcompQUANTUM_LEVEL_HI   0x0070
#define tcompSHIFT_QUANTUM_LEVEL     4

#define tcompMASK_QUANTUM_MEM   0x1F00
#define tcompQUANTUM_MEM_LO     0x0A00
#define tcompQUANTUM_MEM_HI     0x1500
#define tcompSHIFT_QUANTUM_MEM       8

#define tcompMASK_RESERVED      0xE000

#define CompressionTypeFromTCOMP(tc) \
            ((tc) & tcompMASK_TYPE)

#define CompressionLevelFromTCOMP(tc) \
            (((tc) & tcompMASK_QUANTUM_LEVEL) >> tcompSHIFT_QUANTUM_LEVEL)

#define CompressionMemoryFromTCOMP(tc) \
            (((tc) & tcompMASK_QUANTUM_MEM) >> tcompSHIFT_QUANTUM_MEM)

#define TCOMPfromTypeLevelMemory(t,l,m)           \
            (((m) << tcompSHIFT_QUANTUM_MEM  ) |  \
             ((l) << tcompSHIFT_QUANTUM_LEVEL) |  \
             ( t                             ))

#define LZXCompressionWindowFromTCOMP(tc) \
            (((tc) & tcompMASK_LZX_WINDOW) >> tcompSHIFT_LZX_WINDOW)

#define TCOMPfromLZXWindow(w)      \
            (((w) << tcompSHIFT_LZX_WINDOW ) |  \
             ( tcompTYPE_LZX ))

#endif /* _FDI_FCI_TYPES_H */
