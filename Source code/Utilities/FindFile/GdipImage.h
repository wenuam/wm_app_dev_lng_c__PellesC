/****************************************************************************
 *																			*
 * File    : GdipImage.h													*
 *																			*
 * Purpose : Minimum implementation of GdiPlus that allows the loading and	*
 *			 rendering of image files in the preview plane.					*
 *																			*
 ****************************************************************************/
#ifndef _PLUSGDI_H_
#define _PLUSGDI_H_

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#define WINGDIPAPI __stdcall
#define GDIPCONST const

// Visible functions
int GdiPlusLoadImage(const wchar_t * filename);
void GdiPLusDelete(void);
void GdiPlusDrawImage(HDC hdc, const RECT * rc, BOOL fit);

typedef enum GpStatus
{	Ok 				= 0,
	GenericError 	= 1,
	InvalidParameter = 2,
	OutOfMemory 	= 3,
	ObjectBusy 		= 4,
	InsufficientBuffer = 5,
	NotImplemented  = 6,
	Win32Error 		= 7,
	WrongState 		= 8,
	Aborted 		= 9,
	FileNotFound 	= 10,
	ValueOverflow 	= 11,
	AccessDenied 	= 12,
	UnknownImageFormat = 13,
	FontFamilyNotFound = 14,
	FontStyleNotFound = 15,
	NotTrueTypeFont = 16,
	UnsupportedGdiplusVersion = 17,
	GdiplusNotInitialized = 18,
	PropertyNotFound = 19,
	PropertyNotSupported = 20,
	ProfileNotFound = 21
} GpStatus;

typedef struct tagGp_GpImage
{	int unused;
} GP_GPIMAGE;

typedef struct tagGp_GpGraphics
{	int unused;
} GP_GPGRAPHICS;

typedef struct tagGp_Graphics
{	GP_GPGRAPHICS * nativeGraphics;
	GpStatus lastResult;
} GP_GRAPHICS;

typedef struct tagGp_Image
{	GP_GPIMAGE * nativeImage;
	GpStatus lastResult;
} GP_IMAGE;

typedef void *DebugEventProc;

typedef struct GdiplusStartupInput
{	UINT32 GdiplusVersion;
	DebugEventProc DebugEventCallback;
	BOOL SuppressBackgroundThread;
	BOOL SuppressExternalCodecs;
} GdiplusStartupInput;

typedef GpStatus (WINAPI *NotificationHookProc)(ULONG_PTR *token);
typedef VOID (WINAPI *NotificationUnhookProc)(ULONG_PTR token);

typedef struct GdiplusStartupOutput
{	NotificationHookProc NotificationHook;
	NotificationUnhookProc NotificationUnhook;
} GdiplusStartupOutput;

GpStatus WINAPI GdiplusStartup(ULONG_PTR *token, GdiplusStartupInput *input, GdiplusStartupOutput *output);
VOID WINAPI GdiplusShutdown(ULONG_PTR token);

GpStatus WINGDIPAPI GdipCreateFromHDC(HDC,GP_GPGRAPHICS**);
GpStatus WINGDIPAPI GdipDrawImageRectI(GP_GPGRAPHICS*,GP_GPIMAGE*,INT,INT,INT,INT);
GpStatus WINGDIPAPI GdipGetImageHeight(GP_GPIMAGE*,UINT*);
GpStatus WINGDIPAPI GdipGetImageWidth(GP_GPIMAGE*,UINT*);
GpStatus WINGDIPAPI GdipDisposeImage(GP_GPIMAGE*);
GpStatus WINGDIPAPI GdipDeleteGraphics(GP_GPGRAPHICS*);
GpStatus WINGDIPAPI GdipLoadImageFromFileICM(GDIPCONST wchar_t*,GP_GPIMAGE**);
GpStatus WINGDIPAPI GdipLoadImageFromFile(GDIPCONST wchar_t*,GP_GPIMAGE**);

#endif // _PLUSGDI_H_
