#ifndef _UXTHEME_H
#define _UXTHEME_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Theme API definitions (Windows Vista/7/8) */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <commctrl.h>

#ifndef THEMEAPI
#define THEMEAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define THEMEAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif /* THEMEAPI */

typedef HANDLE HTHEME;

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define MAX_THEMECOLOR  64
#define MAX_THEMESIZE   64
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION>= NTDDI_WIN7)

THEMEAPI_(BOOL) BeginPanningFeedback(
    HWND hwnd
);

THEMEAPI_(BOOL) UpdatePanningFeedback(
    HWND hwnd,
    LONG lTotalOverpanOffsetX,
    LONG lTotalOverpanOffsetY,
    BOOL fInInertia
);

THEMEAPI_(BOOL) EndPanningFeedback(
    HWND hwnd,
    BOOL fAnimateBack);

#endif /* (NTDDI_VERSION>= NTDDI_WIN7) */

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef enum TA_PROPERTY {
    TAP_FLAGS,
    TAP_TRANSFORMCOUNT,
    TAP_STAGGERDELAY,
    TAP_STAGGERDELAYCAP,
    TAP_STAGGERDELAYFACTOR,
    TAP_ZORDER,
} TA_PROPERTY;

typedef enum TA_PROPERTY_FLAG {
    TAPF_NONE = 0x0,
    TAPF_HASSTAGGER = 0x1,
    TAPF_ISRTLAWARE = 0x2,
    TAPF_ALLOWCOLLECTION = 0x4,
    TAPF_HASBACKGROUND = 0x8,
    TAPF_HASPERSPECTIVE = 0x10,
} TA_PROPERTY_FLAG;

THEMEAPI GetThemeAnimationProperty(
    HTHEME hTheme,
    int iStoryboardId,
    int iTargetId,
    TA_PROPERTY eProperty,
    VOID *pvProperty,
    DWORD cbSize,
    DWORD *pcbSizeOut);

typedef enum TA_TRANSFORM_TYPE {
    TATT_TRANSLATE_2D,
    TATT_SCALE_2D,
    TATT_OPACITY,
    TATT_CLIP,
} TA_TRANSFORM_TYPE;

typedef enum TA_TRANSFORM_FLAG {
    TATF_NONE = 0x0,
    TATF_TARGETVALUES_USER = 0x1,
    TATF_HASINITIALVALUES = 0x2,
    TATF_HASORIGINVALUES = 0x4,
} TA_TRANSFORM_FLAG;

DEFINE_ENUM_FLAG_OPERATORS(TA_TRANSFORM_FLAG)

#include <pshpack8.h>

typedef struct TA_TRANSFORM {
    TA_TRANSFORM_TYPE eTransformType;
    DWORD dwTimingFunctionId;
    DWORD dwStartTime;
    DWORD dwDurationTime;
    TA_TRANSFORM_FLAG eFlags;
} TA_TRANSFORM, *PTA_TRANSFORM;

typedef struct TA_TRANSFORM_2D {
    TA_TRANSFORM header;
    float rX;
    float rY;
    float rInitialX;
    float rInitialY;
    float rOriginX;
    float rOriginY;
} TA_TRANSFORM_2D, *PTA_TRANSFORM_2D;

typedef struct TA_TRANSFORM_OPACITY {
    TA_TRANSFORM header;
    float rOpacity;
    float rInitialOpacity;
} TA_TRANSFORM_OPACITY, *PTA_TRANSFORM_OPACITY;

typedef struct TA_TRANSFORM_CLIP {
    TA_TRANSFORM header;
    float rLeft;
    float rTop;
    float rRight;
    float rBottom;
    float rInitialLeft;
    float rInitialTop;
    float rInitialRight;
    float rInitialBottom;
} TA_TRANSFORM_CLIP, *PTA_TRANSFORM_CLIP;

#include <poppack.h>

THEMEAPI GetThemeAnimationTransform(
    HTHEME hTheme,
    int iStoryboardId,
    int iTargetId,
    DWORD dwTransformIndex,
    TA_TRANSFORM *pTransform,
    DWORD cbSize,
    DWORD *pcbSizeOut
);

typedef enum TA_TIMINGFUNCTION_TYPE {
    TTFT_UNDEFINED,
    TTFT_CUBIC_BEZIER,
} TA_TIMINGFUNCTION_TYPE;

#include <pshpack8.h>

typedef struct TA_TIMINGFUNCTION {
    TA_TIMINGFUNCTION_TYPE eTimingFunctionType;
} TA_TIMINGFUNCTION, *PTA_TIMINGFUNCTION;

typedef struct TA_CUBIC_BEZIER {
    TA_TIMINGFUNCTION header;
    float rX0;
    float rY0;
    float rX1;
    float rY1;
} TA_CUBIC_BEZIER, *PTA_CUBIC_BEZIER;

#include <poppack.h>

THEMEAPI GetThemeTimingFunction(
    HTHEME hTheme,
    int iTimingFunctionId,
    TA_TIMINGFUNCTION *pTimingFunction,
    DWORD cbSize,
    DWORD *pcbSizeOut
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

THEMEAPI_(HTHEME) OpenThemeData(
    HWND hwnd,
    LPCWSTR pszClassList
);

#define OTD_FORCE_RECT_SIZING   0x00000001
#define OTD_NONCLIENT           0x00000002
#define OTD_VALIDBITS           (OTD_FORCE_RECT_SIZING | \
                                 OTD_NONCLIENT)

THEMEAPI_(HTHEME) OpenThemeDataForDpi(
    HWND hwnd,
    LPCWSTR pszClassList,
    UINT dpi
);

THEMEAPI_(HTHEME) OpenThemeDataEx(
    HWND hwnd,
    LPCWSTR pszClassList,
    DWORD dwFlags
);

THEMEAPI CloseThemeData(
    HTHEME hTheme
);

THEMEAPI DrawThemeBackground(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pRect,
    LPCRECT pClipRect
);

#define DTBG_CLIPRECT           0x00000001
#define DTBG_DRAWSOLID          0x00000002
#define DTBG_OMITBORDER         0x00000004
#define DTBG_OMITCONTENT        0x00000008
#define DTBG_COMPUTINGREGION    0x00000010
#define DTBG_MIRRORDC           0x00000020

#define DTBG_NOMIRROR           0x00000040
#define DTBG_VALIDBITS          (DTBG_CLIPRECT | \
                                 DTBG_DRAWSOLID | \
                                 DTBG_OMITBORDER | \
                                 DTBG_OMITCONTENT | \
                                 DTBG_COMPUTINGREGION | \
                                 DTBG_MIRRORDC | \
                                 DTBG_NOMIRROR)

typedef struct _DTBGOPTS {
    DWORD dwSize;
    DWORD dwFlags;
    RECT rcClip;
} DTBGOPTS, *PDTBGOPTS;

THEMEAPI DrawThemeBackgroundEx(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pRect,
    const DTBGOPTS *pOptions
);

#define DTT_GRAYED              0x00000001
#define DTT_FLAGS2VALIDBITS     (DTT_GRAYED)

THEMEAPI DrawThemeText(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCWSTR pszText,
    int cchText,
    DWORD dwTextFlags,
    DWORD dwTextFlags2,
    LPCRECT pRect
);

THEMEAPI GetThemeBackgroundContentRect(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pBoundingRect,
    LPRECT pContentRect
);

THEMEAPI GetThemeBackgroundExtent(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pContentRect,
    LPRECT pExtentRect
);

THEMEAPI GetThemeBackgroundRegion(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pRect,
    HRGN *pRegion
);

enum THEMESIZE {
    TS_MIN,
    TS_TRUE,
    TS_DRAW
};

THEMEAPI GetThemePartSize(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT prc,
    enum THEMESIZE eSize,
    SIZE *psz
);

THEMEAPI GetThemeTextExtent(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCWSTR pszText,
    int cchCharCount,
    DWORD dwTextFlags,
    LPCRECT pBoundingRect,
    LPRECT pExtentRect
);

THEMEAPI GetThemeTextMetrics(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    TEXTMETRICW *ptm
);

#define HTTB_BACKGROUNDSEG          0x00000000
#define HTTB_FIXEDBORDER            0x00000002
#define HTTB_CAPTION                0x00000004
#define HTTB_RESIZINGBORDER_LEFT    0x00000010
#define HTTB_RESIZINGBORDER_TOP     0x00000020
#define HTTB_RESIZINGBORDER_RIGHT   0x00000040
#define HTTB_RESIZINGBORDER_BOTTOM  0x00000080
#define HTTB_RESIZINGBORDER         (HTTB_RESIZINGBORDER_LEFT | \
                                     HTTB_RESIZINGBORDER_TOP | \
                                     HTTB_RESIZINGBORDER_RIGHT | \
                                     HTTB_RESIZINGBORDER_BOTTOM)
#define HTTB_SIZINGTEMPLATE         0x00000100
#define HTTB_SYSTEMSIZINGMARGINS    0x00000200

THEMEAPI HitTestThemeBackground(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    DWORD dwOptions,
    LPCRECT pRect,
    HRGN hrgn,
    POINT ptTest,
    WORD *pwHitTestCode
);

THEMEAPI DrawThemeEdge(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pDestRect,
    UINT uEdge,
    UINT uFlags,
    LPRECT pContentRect
);

THEMEAPI DrawThemeIcon(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCRECT pRect,
    HIMAGELIST himl,
    int iImageIndex
);

THEMEAPI_(BOOL) IsThemePartDefined(
    HTHEME hTheme,
    int iPartId,
    int iStateId
);

THEMEAPI_(BOOL) IsThemeBackgroundPartiallyTransparent(
    HTHEME hTheme,
    int iPartId,
    int iStateId
);

THEMEAPI GetThemeColor(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    COLORREF *pColor
);

THEMEAPI GetThemeMetric(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    int iPropId,
    int *piVal
);

THEMEAPI GetThemeString(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    LPWSTR pszBuff,
    int cchMaxBuffChars
);

THEMEAPI GetThemeBool(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    BOOL *pfVal
);

THEMEAPI GetThemeInt(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    int *piVal
);

THEMEAPI GetThemeEnumValue(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    int *piVal
);

THEMEAPI GetThemePosition(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    POINT *pPoint
);

THEMEAPI GetThemeFont(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    int iPropId,
    LOGFONTW *pFont
);

THEMEAPI GetThemeRect(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    LPRECT pRect
);

typedef struct _MARGINS {
    int cxLeftWidth;
    int cxRightWidth;
    int cyTopHeight;
    int cyBottomHeight;
} MARGINS, *PMARGINS;

THEMEAPI GetThemeMargins(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    int iPropId,
    LPCRECT prc,
    MARGINS *pMargins
);

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define MAX_INTLIST_COUNT 402
#else /* (NTDDI_VERSION < NTDDI_VISTA) */
#define MAX_INTLIST_COUNT 10
#endif /* (NTDDI_VERSION < NTDDI_VISTA) */

typedef struct _INTLIST {
    int iValueCount;
    int iValues[MAX_INTLIST_COUNT];
} INTLIST, *PINTLIST;

THEMEAPI GetThemeIntList(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    INTLIST *pIntList
);

enum PROPERTYORIGIN {
    PO_STATE,
    PO_PART,
    PO_CLASS,
    PO_GLOBAL,
    PO_NOTFOUND
};

THEMEAPI GetThemePropertyOrigin(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    enum PROPERTYORIGIN *pOrigin
);

THEMEAPI SetWindowTheme(
    HWND hwnd,
    LPCWSTR pszSubAppName,
    LPCWSTR pszSubIdList
);

THEMEAPI GetThemeFilename(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    LPWSTR pszThemeFileName,
    int cchMaxBuffChars
);

THEMEAPI_(COLORREF) GetThemeSysColor(
    HTHEME hTheme,
    int iColorId
);

THEMEAPI_(HBRUSH) GetThemeSysColorBrush(
    HTHEME hTheme,
    int iColorId
);

THEMEAPI_(BOOL) GetThemeSysBool(
    HTHEME hTheme,
    int iBoolId
);

THEMEAPI_(int) GetThemeSysSize(
    HTHEME hTheme,
    int iSizeId
);

THEMEAPI GetThemeSysFont(
    HTHEME hTheme,
    int iFontId,
    LOGFONTW *plf
);

THEMEAPI GetThemeSysString(
    HTHEME hTheme,
    int iStringId,
    LPWSTR pszStringBuff,
    int cchMaxStringChars
);

THEMEAPI GetThemeSysInt(
    HTHEME hTheme,
    int iIntId,
    int *piValue
);

THEMEAPI_(BOOL) IsThemeActive(
    void
);

THEMEAPI_(BOOL) IsAppThemed(
    void
);

THEMEAPI_(HTHEME) GetWindowTheme(
    HWND hwnd
);

#define ETDT_DISABLE                    0x00000001
#define ETDT_ENABLE                     0x00000002
#define ETDT_USETABTEXTURE              0x00000004

#define ETDT_ENABLETAB              (ETDT_ENABLE | \
                                     ETDT_USETABTEXTURE)

#if (NTDDI_VERSION >= NTDDI_VISTA)
#define ETDT_USEAEROWIZARDTABTEXTURE    0x00000008

#define ETDT_ENABLEAEROWIZARDTAB    (ETDT_ENABLE | \
                                     ETDT_USEAEROWIZARDTABTEXTURE)

#define ETDT_VALIDBITS              (ETDT_DISABLE | \
                                     ETDT_ENABLE | \
                                     ETDT_USETABTEXTURE | \
                                     ETDT_USEAEROWIZARDTABTEXTURE)
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

THEMEAPI EnableThemeDialogTexture(
    HWND hwnd,
    DWORD dwFlags
);

THEMEAPI_(BOOL) IsThemeDialogTextureEnabled(
    HWND hwnd
);

#define STAP_ALLOW_NONCLIENT    (1UL << 0)
#define STAP_ALLOW_CONTROLS     (1UL << 1)
#define STAP_ALLOW_WEBCONTENT   (1UL << 2)
#define STAP_VALIDBITS          (STAP_ALLOW_NONCLIENT | \
                                 STAP_ALLOW_CONTROLS | \
                                 STAP_ALLOW_WEBCONTENT)

THEMEAPI_(DWORD) GetThemeAppProperties(
    void
);

THEMEAPI_(void) SetThemeAppProperties(
    DWORD dwFlags
);

THEMEAPI GetCurrentThemeName(
    LPWSTR pszThemeFileName,
    int cchMaxNameChars,
    LPWSTR pszColorBuff,
    int cchMaxColorChars,
    LPWSTR pszSizeBuff,
    int cchMaxSizeChars
);

#define SZ_THDOCPROP_DISPLAYNAME    L"DisplayName"
#define SZ_THDOCPROP_CANONICALNAME  L"ThemeName"
#define SZ_THDOCPROP_TOOLTIP        L"ToolTip"
#define SZ_THDOCPROP_AUTHOR         L"author"

THEMEAPI GetThemeDocumentationProperty(
    LPCWSTR pszThemeName,
    LPCWSTR pszPropertyName,
    LPWSTR pszValueBuff,
    int cchMaxValChars
);

THEMEAPI DrawThemeParentBackground(
    HWND hwnd,
    HDC hdc,
    const RECT * prc
);

THEMEAPI EnableTheming(
    BOOL fEnable
);

#define GBF_DIRECT      0x00000001
#define GBF_COPY        0x00000002
#define GBF_VALIDBITS   (GBF_DIRECT | \
                         GBF_COPY)

#if (NTDDI_VERSION >= NTDDI_VISTA)

#define DTPB_WINDOWDC           0x00000001
#define DTPB_USECTLCOLORSTATIC  0x00000002
#define DTPB_USEERASEBKGND      0x00000004

THEMEAPI DrawThemeParentBackgroundEx(
    HWND hwnd,
    HDC hdc,
    DWORD dwFlags,
    const RECT * prc
);

enum WINDOWTHEMEATTRIBUTETYPE {
    WTA_NONCLIENT = 1
};

typedef struct _WTA_OPTIONS {
    DWORD dwFlags;
    DWORD dwMask;

} WTA_OPTIONS, *PWTA_OPTIONS;

#define WTNCA_NODRAWCAPTION       0x00000001
#define WTNCA_NODRAWICON          0x00000002
#define WTNCA_NOSYSMENU           0x00000004
#define WTNCA_NOMIRRORHELP        0x00000008
#define WTNCA_VALIDBITS           (WTNCA_NODRAWCAPTION | \
                                   WTNCA_NODRAWICON | \
                                   WTNCA_NOSYSMENU | \
                                   WTNCA_NOMIRRORHELP)

THEMEAPI SetWindowThemeAttribute(
    HWND hwnd,
    enum WINDOWTHEMEATTRIBUTETYPE eAttribute,
    PVOID pvAttribute,
    DWORD cbAttribute
);

inline HRESULT SetWindowThemeNonClientAttributes(HWND hwnd, DWORD dwMask, DWORD dwAttributes) {
    WTA_OPTIONS wta;
    wta.dwFlags = dwAttributes;
    wta.dwMask = dwMask;
    return SetWindowThemeAttribute(hwnd, WTA_NONCLIENT, (void *)&(wta), sizeof(wta));
}

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

typedef int (WINAPI *DTT_CALLBACK_PROC)(
    HDC hdc,
    LPWSTR pszText,
    int cchText,
    LPRECT prc,
    UINT dwFlags,
    LPARAM lParam
);

#define DTT_TEXTCOLOR       (1UL << 0)
#define DTT_BORDERCOLOR     (1UL << 1)
#define DTT_SHADOWCOLOR     (1UL << 2)
#define DTT_SHADOWTYPE      (1UL << 3)
#define DTT_SHADOWOFFSET    (1UL << 4)
#define DTT_BORDERSIZE      (1UL << 5)
#define DTT_FONTPROP        (1UL << 6)
#define DTT_COLORPROP       (1UL << 7)
#define DTT_STATEID         (1UL << 8)
#define DTT_CALCRECT        (1UL << 9)
#define DTT_APPLYOVERLAY    (1UL << 10)
#define DTT_GLOWSIZE        (1UL << 11)
#define DTT_CALLBACK        (1UL << 12)
#define DTT_COMPOSITED      (1UL << 13)
#define DTT_VALIDBITS       (DTT_TEXTCOLOR | \
                             DTT_BORDERCOLOR | \
                             DTT_SHADOWCOLOR | \
                             DTT_SHADOWTYPE | \
                             DTT_SHADOWOFFSET | \
                             DTT_BORDERSIZE | \
                             DTT_FONTPROP | \
                             DTT_COLORPROP | \
                             DTT_STATEID | \
                             DTT_CALCRECT | \
                             DTT_APPLYOVERLAY | \
                             DTT_GLOWSIZE | \
                             DTT_COMPOSITED)

typedef struct _DTTOPTS {
    DWORD dwSize;
    DWORD dwFlags;
    COLORREF crText;
    COLORREF crBorder;
    COLORREF crShadow;
    int iTextShadowType;
    POINT ptShadowOffset;
    int iBorderSize;
    int iFontPropId;
    int iColorPropId;
    int iStateId;
    BOOL fApplyOverlay;
    int iGlowSize;
    DTT_CALLBACK_PROC pfnDrawTextCallback;
    LPARAM lParam;
} DTTOPTS, *PDTTOPTS;

#if (NTDDI_VERSION >= NTDDI_VISTA)

THEMEAPI DrawThemeTextEx(
    HTHEME hTheme,
    HDC hdc,
    int iPartId,
    int iStateId,
    LPCWSTR pszText,
    int cchText,
    DWORD dwTextFlags,
    LPRECT pRect,
    const DTTOPTS *pOptions
);

THEMEAPI GetThemeBitmap(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    ULONG dwFlags,
    HBITMAP * phBitmap
);

THEMEAPI GetThemeStream(
    HTHEME hTheme,
    int iPartId,
    int iStateId,
    int iPropId,
    VOID * *ppvStream,
    DWORD *pcbStream,
    HINSTANCE hInst
);

THEMEAPI BufferedPaintInit(
    void
);

THEMEAPI BufferedPaintUnInit(
    void
);

typedef HANDLE HPAINTBUFFER;

typedef enum _BP_BUFFERFORMAT {
    BPBF_COMPATIBLEBITMAP,
    BPBF_DIB,
    BPBF_TOPDOWNDIB,
    BPBF_TOPDOWNMONODIB
} BP_BUFFERFORMAT;

#define BPBF_COMPOSITED BPBF_TOPDOWNDIB

typedef enum _BP_ANIMATIONSTYLE {
    BPAS_NONE,
    BPAS_LINEAR,
    BPAS_CUBIC,
    BPAS_SINE
} BP_ANIMATIONSTYLE;

typedef struct _BP_ANIMATIONPARAMS {
    DWORD cbSize;
    DWORD dwFlags;
    BP_ANIMATIONSTYLE style;
    DWORD dwDuration;
} BP_ANIMATIONPARAMS, *PBP_ANIMATIONPARAMS;

#define BPPF_ERASE               0x0001
#define BPPF_NOCLIP              0x0002
#define BPPF_NONCLIENT           0x0004

typedef struct _BP_PAINTPARAMS {
    DWORD cbSize;
    DWORD dwFlags;
    const RECT * prcExclude;
    const BLENDFUNCTION * pBlendFunction;
} BP_PAINTPARAMS, *PBP_PAINTPARAMS;

THEMEAPI_(HPAINTBUFFER) BeginBufferedPaint(
    HDC hdcTarget,
    const RECT * prcTarget,
    BP_BUFFERFORMAT dwFormat,
    BP_PAINTPARAMS *pPaintParams,
    HDC *phdc
);

THEMEAPI EndBufferedPaint(
    HPAINTBUFFER hBufferedPaint,
    BOOL fUpdateTarget
);

THEMEAPI GetBufferedPaintTargetRect(
    HPAINTBUFFER hBufferedPaint,
    RECT *prc
);

THEMEAPI_(HDC) GetBufferedPaintTargetDC(
    HPAINTBUFFER hBufferedPaint
);

THEMEAPI_(HDC) GetBufferedPaintDC(
    HPAINTBUFFER hBufferedPaint
);

THEMEAPI GetBufferedPaintBits(
    HPAINTBUFFER hBufferedPaint,
    RGBQUAD * *ppbBuffer,
    int *pcxRow
);

THEMEAPI BufferedPaintClear(
    HPAINTBUFFER hBufferedPaint,
    const RECT *prc
);

THEMEAPI BufferedPaintSetAlpha(
    HPAINTBUFFER hBufferedPaint,
    const RECT *prc,
    BYTE alpha
);

#define BufferedPaintMakeOpaque(hBufferedPaint, prc) \
    BufferedPaintSetAlpha(hBufferedPaint, prc, 255)

THEMEAPI BufferedPaintStopAllAnimations(
    HWND hwnd
);

typedef HANDLE HANIMATIONBUFFER;

THEMEAPI_(HANIMATIONBUFFER) BeginBufferedAnimation(
    HWND hwnd,
    HDC hdcTarget,
    const RECT * prcTarget,
    BP_BUFFERFORMAT dwFormat,
    BP_PAINTPARAMS *pPaintParams,
    BP_ANIMATIONPARAMS *pAnimationParams,
    HDC *phdcFrom,
    HDC *phdcTo
);

THEMEAPI EndBufferedAnimation(
    HANIMATIONBUFFER hbpAnimation,
    BOOL fUpdateTarget
);

THEMEAPI_(BOOL) BufferedPaintRenderAnimation(
    HWND hwnd,
    HDC hdcTarget
);

THEMEAPI_(BOOL) IsCompositionActive(void);

THEMEAPI GetThemeTransitionDuration(
    HTHEME hTheme,
    int iPartId,
    int iStateIdFrom,
    int iStateIdTo,
    int iPropId,
    DWORD *pdwDuration
);

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _UXTHEME_H */
