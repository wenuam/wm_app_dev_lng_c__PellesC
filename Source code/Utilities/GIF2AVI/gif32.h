/****************************************************************************
 *                                                                          *
 * File    : gif32.h                                                        *
 *                                                                          *
 * Purpose : Graphics Interchange Format (GIF) file definitions.            *
 *                                                                          *
 * History : Date      Reason                                               *
 *           96-06-01  Created                                              *
 *           97-05-31  Extension definitions added.                         *
 *           98-12-26  Disposal methods added.                              *
 *                                                                          *
 ****************************************************************************/

#ifndef _GIF32_H
#define _GIF32_H

#ifndef RC_INVOKED  // RC can't handle #pragmas
#pragma pack(1)     // Needs tight packing.

#define GIF_VER87a  "GIF87a"
#define GIF_VER89a  "GIF89a"

// Standard Labels.
#define GIF_LABEL_IMAGEDESCRIPTOR   0x2C
#define GIF_LABEL_TRAILER           0x3B
#define GIF_LABEL_EXTENSION         0x21

// Extension Labels.
#define GIF_EXTLABEL_PLAINTEXT      0x01
#define GIF_EXTLABEL_GRAPHCONTROL   0xF9
#define GIF_EXTLABEL_COMMENT        0xFE
#define GIF_EXTLABEL_APPLICATION    0xFF

// File header for GIF files (REQUIRED).
typedef struct tagGIFHEADER *PGIFHEADER;
typedef struct tagGIFHEADER {
    BYTE bSignature[3];             // Signature ("GIF")
    BYTE bVersion[3];               // Version ("87a" or "89a")
} GIFHEADER;

// Logical Screen Descriptor (REQUIRED).
typedef struct tagGIFLSD *PGIFLSD;
typedef struct tagGIFLSD {
    WORD wScreenWidth;
    WORD wScreenHeight;
    BYTE bFlags;
    BYTE bBackgroundColorIndex;
    BYTE bPixelAspectRatio;
} GIFLSD;

// Values for bFlags.
#define LSD_GLOBALCOLORTABLE        0x80    // x-------
#define LSD_COLORRESOLUTION         0x70    // -xxx----
#define LSD_SORTFLAG                0x08    // ----x---
#define LSD_GLOBALCOLORTABLESIZE    0x07    // -----xxx (TableSize)

// Global Color Table entry (size of whole table: 3 * 2^(TableSize+1)
typedef struct tagGIFRGB *PGIFRGB;
typedef struct tagGIFRGB {
    BYTE bRed;
    BYTE bGreen;
    BYTE bBlue;
} GIFRGB;

// Image Descriptor (REQUIRED).
typedef struct tagGIFIMAGEHEADER *PGIFIMAGEHEADER;
typedef struct tagGIFIMAGEHEADER {
    BYTE bImageSeparator;           // GIF_LABEL_IMAGEDESCR (0x2C)
    WORD wLeftPosition;
    WORD wTopPosition;
    WORD wImageWidth;
    WORD wImageHeight;
    BYTE bFlags;
} GIFIMAGEHEADER;

// Values for bFlags.
#define GIH_LOCALCOLORTABLE         0x80    // x-------
#define GIH_INTERLACEFLAG           0x40    // -x------
#define GIH_SORTFLAG                0x20    // --x-----
// Reserved                                 // ---xx---
#define GIH_LOCALCOLORTABLESIZE     0x07    // -----xxx

// Extension Introducer Block.
typedef struct tagGIFEXTENSION *PGIFEXTENSION;
typedef struct tagGIFEXTENSION {
    BYTE bExtensionIntroducer;      // GIF_LABEL_EXTENSION (0x21)
    BYTE bExtensionLabel;           // GIF_EXTLABEL_???
} GIFEXTENSION;

// Graphic Control Extension (OPTIONAL).
typedef struct tagGIFGCE *PGIFGCE;
typedef struct tagGIFGCE {
    BYTE bExtensionIntroducer;      // 0x21
    BYTE bExtensionLabel;           // 0xF9
    BYTE bBlockSize;                // Always 4.
    BYTE bFlags;
    WORD wDelayTime;
    BYTE bTransparentColorIndex;
    BYTE bBlockTerminator;
} GIFGCE;

// Values for bFlags.
// Reserved                                 // xxx-----
#define GCE_DISPOSALMETHOD          0x1C    // ---xxx--
#define GCE_USERINPUTFLAG           0x02    // ------x-
#define GCE_TRANSPARENTCOLORFLAG    0x01    // -------x

// Disposal methods.
#define GCE_DISPOSE_UNSPECIFIED     0       // No disposal specified.
#define GCE_DISPOSE_NOT             1       // Do not dispose.
#define GCE_DISPOSE_RESTOREBACK     2       // Restore to background color.
#define GCE_DISPOSE_RESTOREPREV     3       // Restore to previous.

// Plain Text Extension (OPTIONAL).
typedef struct tagGIFPTE *PGIFPTE;
typedef struct tagGIFPTE {
    BYTE bExtensionIntroducer;      // 0x21
    BYTE bExtensionLabel;           // 0x01
    BYTE bBlockSize;                // Always 12.
    WORD wGridLeftPosition;
    WORD wGridTopPosition;
    WORD wGridWidth;
    WORD wGridHeight;
    BYTE bCharacterCellWidth;
    BYTE bCharacterCellHeight;
    BYTE bForegroundColorIndex;
    BYTE bBackgroundColorIndex;
} GIFPTE;

// Application Extension (OPTIONAL).
typedef struct tagGIFAPE *PGIFAPE;
typedef struct tagGIFAPE {
    BYTE bExtensionIntroducer;      // 0x21
    BYTE bExtensionLabel;           // 0xFF
    BYTE bBlockSize;                // Always 11.
    BYTE bApplicationName[8];       // Application identifier.
    BYTE bAuthenticationCode[3];
} GIFAPE;

// File header (not part of spec).
typedef struct tagGIFFILEHEADER *PGIFFILEHEADER;
typedef struct tagGIFFILEHEADER {
    BYTE bVersion[6];               // "GIF87a" or "GIF89a"
    GIFLSD lsd;
} GIFFILEHEADER;

#pragma pack()  // Default packing.
#endif          // RC_INVOKED

#endif  // _GIF32_H
