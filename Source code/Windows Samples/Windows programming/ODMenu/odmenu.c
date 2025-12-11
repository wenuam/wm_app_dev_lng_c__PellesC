/****************************************************************************
 *                                                                          *
 * File    : odmenu.c                                                       *
 *                                                                          *
 * Purpose : Owner-draw menu functions.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

/* Note! Remember to set WINVER to an appropriate value for *your* Windows version;
 *       see "Project" -> "Project Options" -> "Compiler", and also Microsoft's
 *       documentation for possible values.
 */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include <stdlib.h>
#include "odmenu.h"
#include "main.h"

#define DT_MYSTYLE  (DT_LEFT|DT_VCENTER|DT_SINGLELINE)

#define CCHMAXMENUTEXT  128
#define CXTEXTMARGIN    6
#define CXTOOLBORDER    4
#define CYTOOLBORDER    2
#define CXYTOOLIMAGE    16
#define CYMENUITEM      16

typedef struct _MYMENUITEM *PMYMENUITEM;  // pmmi
typedef struct _MYMENUITEM  // mmi
{
    TCHAR szText[CCHMAXMENUTEXT];   // Saved item text.
    UINT fType;                     // Saved item flags.
    HICON hIcon;                    // Toolbar image as an Icon.
} MYMENUITEM;

// Locals.
static WNDPROC g_pfnMainWndProc = NULL;
static HWND g_hwndTools = NULL;
static HFONT g_hFont = NULL;
static HMENU g_ahMenuConv[128];
static int g_cMenuConv = 0;

// Static function prototypes.
static void UninstallOwnerDrawMenuHandler(HWND);
static LRESULT CALLBACK ODMenuWndProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT ODMenu_DefProc(HWND, UINT, WPARAM, LPARAM);
static void ODMenu_OnDestroy(HWND);
static void ODMenu_OnWinIniChange(HWND, LPCTSTR);
static void ODMenu_OnInitMenuPopup(HWND, HMENU, UINT, BOOL);
static void ODMenu_OnMenuSelect(HWND, HMENU, int, HMENU, UINT);
static DWORD ODMenu_OnMenuChar(HWND, UINT, UINT, HMENU);
static void ODMenu_OnMeasureItem(HWND, MEASUREITEMSTRUCT *);
static void ODMenu_OnDrawItem(HWND, const DRAWITEMSTRUCT *);
static void DrawMenuText(HDC, PCTSTR, PRECT, COLORREF);
static void ConvertMenu(HMENU, BOOL);
static void AddMenuToConvList(HMENU);

/****************************************************************************
 *                                                                          *
 * Function: InstallOwnerDrawMenuHandler                                    *
 *                                                                          *
 * Purpose : Install message hook for owner-draw menus.                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

BOOL InstallOwnerDrawMenuHandler(HWND hwnd, HWND hwndTB)
{
    NONCLIENTMETRICS ncm;

    if (g_pfnMainWndProc != NULL)
        return FALSE;

    // Subclass the window so that we can intercept messages.
    g_pfnMainWndProc = SubclassWindow(hwnd, ODMenuWndProc);

    g_hwndTools = hwndTB;

    // We need a menu font to play with.
    ncm.cbSize = sizeof(ncm);
    if (SystemParametersInfo(SPI_GETNONCLIENTMETRICS, sizeof(ncm), &ncm, 0))  /* added sizeof(ncm) 2009-01-17, reported by Czerny */
        g_hFont = CreateFontIndirect(&ncm.lfMenuFont);

    if (!g_hFont)
        return FALSE;

    return TRUE;
}

/****************************************************************************
 *                                                                          *
 * Function: UninstallOwnerDrawMenuHandler                                  *
 *                                                                          *
 * Purpose : Uninstall message hook for owner-draw menus.                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void UninstallOwnerDrawMenuHandler(HWND hwnd)
{
    if (g_pfnMainWndProc)
    {
        SubclassWindow(hwnd, g_pfnMainWndProc);
        g_pfnMainWndProc = NULL;
    }

    if (g_hFont)
    {
        DeleteFont(g_hFont);
        g_hFont = NULL;
    }
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenuWndProc                                                  *
 *                                                                          *
 * Purpose : Handle messages relevant for owner-draw menus.                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static LRESULT CALLBACK ODMenuWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
        // Windows messages.
        HANDLE_MSG(hwnd, WM_WININICHANGE, ODMenu_OnWinIniChange);
        HANDLE_MSG(hwnd, WM_INITMENUPOPUP, ODMenu_OnInitMenuPopup);
        HANDLE_MSG(hwnd, WM_MENUSELECT, ODMenu_OnMenuSelect);
        HANDLE_MSG(hwnd, WM_MENUCHAR, ODMenu_OnMenuChar);
        HANDLE_MSG(hwnd, WM_MEASUREITEM, ODMenu_OnMeasureItem);
        HANDLE_MSG(hwnd, WM_DRAWITEM, ODMenu_OnDrawItem);
        HANDLE_MSG(hwnd, WM_DESTROY, ODMenu_OnDestroy);

        default:
            return ODMenu_DefProc(hwnd, msg, wParam, lParam);
    }
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_DefProc                                                 *
 *                                                                          *
 * Purpose : Default procedure interface.                                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static LRESULT ODMenu_DefProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    return CallWindowProc(g_pfnMainWndProc, hwnd, msg, wParam, lParam);
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_OnDestroy                                               *
 *                                                                          *
 * Purpose : Handle WM_DESTROY message.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ODMenu_OnDestroy(HWND hwnd)
{
    FORWARD_WM_DESTROY(hwnd, ODMenu_DefProc);
    UninstallOwnerDrawMenuHandler(hwnd);
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_OnWinIniChange                                          *
 *                                                                          *
 * Purpose : Handle WM_WININICHANGE/WM_SETTINGCHANGE message.               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ODMenu_OnWinIniChange(HWND hwnd, LPCTSTR lpszSectionName)
{
    if (g_hFont)
    {
        NONCLIENTMETRICS ncm;
        HFONT hFont;

        ncm.cbSize = sizeof(ncm);
        if (SystemParametersInfo(SPI_GETNONCLIENTMETRICS, sizeof(ncm), &ncm, 0))  /* added sizeof(ncm) 2009-01-17, reported by Czerny */
            hFont = CreateFontIndirect(&ncm.lfMenuFont);
        else
            hFont = NULL;

        if (hFont)
        {
            DeleteFont(g_hFont);
            g_hFont = hFont;
        }
    }
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_OnInitMenuPopup                                         *
 *                                                                          *
 * Purpose : Handle WM_INITMENUPOPUP message.                               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ODMenu_OnInitMenuPopup(HWND hwnd, HMENU hMenu, UINT item, BOOL fSystemMenu)
{
    FORWARD_WM_INITMENUPOPUP(hwnd, hMenu, item, fSystemMenu, ODMenu_DefProc);

    if (!fSystemMenu)
    {
        // Convert the popup menu to owner-draw style.
        ConvertMenu(hMenu, TRUE);
    }
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_OnMenuSelect                                            *
 *                                                                          *
 * Purpose : Handle WM_MENUSELECT message.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ODMenu_OnMenuSelect(HWND hwnd, HMENU hMenu, int item, HMENU hMenuPopup, UINT flags)
{
    // Is the menu being destroyed?
    if (item == 0 && flags == 0xFFFFFFFF)
    {
        int i;

        // Convert all converted menus back to text style.
        for (i = 0; i < g_cMenuConv; i++)
            ConvertMenu(g_ahMenuConv[i], FALSE);
        g_cMenuConv = 0;
    }

    FORWARD_WM_MENUSELECT(hwnd, hMenu, item, hMenuPopup, flags, ODMenu_DefProc);
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_OnMenuChar                                              *
 *                                                                          *
 * Purpose : Handle WM_MENUCHAR message.                                    *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static DWORD ODMenu_OnMenuChar(HWND hwnd, UINT ch, UINT flags, HMENU hMenu)
{
    int iCurrentItem = -1;
    int cItems;
    int iItem;
    int aiMatchItems[64];
    int cMatch = 0;

    cItems = GetMenuItemCount(hMenu);
    for (iItem = 0; iItem < cItems; iItem++)
    {
        MENUITEMINFO mii;
        PMYMENUITEM pmmi;

        mii.cbSize = sizeof(mii);
        mii.fMask = MIIM_DATA|MIIM_TYPE|MIIM_STATE;
        mii.cch = 0;  /* no buffer */
        if (!GetMenuItemInfo(hMenu, iItem, TRUE, &mii))
            continue;

        pmmi = (PMYMENUITEM)mii.dwItemData;

        if ((mii.fType & MFT_OWNERDRAW) && pmmi != NULL)
        {
            TCHAR *pchMnemonic;

            pchMnemonic = _tcschr(pmmi->szText, '&');
            if (pchMnemonic && *++pchMnemonic)
            {
                if (TOUPPER(*pchMnemonic) == TOUPPER(ch))
                    aiMatchItems[cMatch++] = iItem;
            }
        }

        if (mii.fState & MFS_HILITE)
            iCurrentItem = iItem;
    }

    if (cMatch == 0)
        return MAKELONG(0, MNC_IGNORE);

    if (cMatch == 1)
        return MAKELONG(aiMatchItems[0], MNC_EXECUTE);

    for (iItem = 0; iItem < cMatch; iItem++)
        if (aiMatchItems[iItem] > iCurrentItem) break;

    iItem = (iItem < cMatch) ? iItem : 0;
    return MAKELONG(aiMatchItems[iItem], MNC_SELECT);
}

/****************************************************************************
 *                                                                          *
 * Function: ODMenu_OnMeasureItem                                           *
 *                                                                          *
 * Purpose : Handle WM_MEASUREITEM message.                                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ODMenu_OnMeasureItem(HWND hwnd, MEASUREITEMSTRUCT *pmis)
{
    PMYMENUITEM pmmi;

    pmmi = (PMYMENUITEM)pmis->itemData;

    if (pmis->CtlType != ODT_MENU || pmmi == NULL)
    {
        // The message is not for us, pass it on.
        FORWARD_WM_MEASUREITEM(hwnd, pmis, ODMenu_DefProc);
        return;
    }

    if (pmmi->fType & MFT_SEPARATOR)
    {
        pmis->itemHeight = CYMENUITEM / 2;
        pmis->itemWidth = CXYTOOLIMAGE * 2;
    }
    else
    {
        RECT rcItem = {0};
        int cxItem;
        int cyItem;
        HDC hdc;

        hdc = GetDC(NULL);
        if (hdc)
        {
            SelectFont(hdc, g_hFont);
            DrawText(hdc, pmmi->szText, -1, &rcItem, DT_CALCRECT|DT_LEFT|DT_SINGLELINE);
            ReleaseDC(NULL, hdc);
        }

        cyItem = (rcItem.bottom - rcItem.top);
        cyItem = max(cyItem, CYMENUITEM) + CYTOOLBORDER * 2;

        cxItem = (rcItem.right - rcItem.left);
        cxItem += CXYTOOLIMAGE * 2 + CXTOOLBORDER * 2 + CXTEXTMARGIN;

        pmis->itemHeight = cyItem;
        pmis->itemWidth = cxItem;
    }
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnDrawItem                                                *
 *                                                                          *
 * Purpose : Handle WM_DRAWITEM message.                                    *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ODMenu_OnDrawItem(HWND hwnd, const DRAWITEMSTRUCT *pdis)
{
    PMYMENUITEM pmmi;
    RECT rcItem;
    RECT rcTool;

    pmmi = (PMYMENUITEM)pdis->itemData;

    if (pdis->CtlType != ODT_MENU || pmmi == NULL)
    {
        // The message is not for us, pass it on.
        FORWARD_WM_DRAWITEM(hwnd, pdis, ODMenu_DefProc);
        return;
    }

    // Tool and menu item rectangles.
    rcTool.top = rcItem.top = pdis->rcItem.top;
    rcTool.bottom = rcItem.bottom = pdis->rcItem.bottom;
    rcTool.left = pdis->rcItem.left;
    rcTool.right = rcTool.left + CXYTOOLIMAGE + CXTOOLBORDER * 2;
    rcItem.left = rcTool.right;
    rcItem.right = pdis->rcItem.right;

    if (pmmi->fType & MFT_SEPARATOR)
    {
        FillRect(pdis->hDC, &rcTool, GetSysColorBrush(COLOR_BTNFACE));
        FillRect(pdis->hDC, &rcItem, GetSysColorBrush(COLOR_MENU));
        rcItem.top += (rcItem.bottom - rcItem.top) / 2;
        rcItem.left += CXTEXTMARGIN;
        DrawEdge(pdis->hDC, &rcItem, EDGE_ETCHED, BF_TOP);
    }
    else
    {
        BOOL fDisabled = pdis->itemState & ODS_GRAYED;
        BOOL fSelected = pdis->itemState & ODS_SELECTED;
        BOOL fChecked = pdis->itemState & ODS_CHECKED;

        // Draw the tool background.
        FillRect(pdis->hDC, &rcTool, GetSysColorBrush(fSelected && !fDisabled ? COLOR_HIGHLIGHT : COLOR_BTNFACE));

        // Do we have an image to display?
        if (pmmi->hIcon != NULL || fChecked)
        {
            HICON hIcon;

            if (fChecked && !fSelected)
                DrawEdge(pdis->hDC, &rcTool, BDR_SUNKENOUTER, BF_RECT);

            InflateRect(&rcTool, -CXTOOLBORDER, -CYTOOLBORDER);

            // Make sure to stretch the icon to the proper size.
            hIcon = CopyImage(pmmi->hIcon ? pmmi->hIcon : LoadIconSm(
                ghInstance, MAKEINTRESOURCE(IDR_ICO_CHECK)), IMAGE_ICON,
                CXYTOOLIMAGE, CXYTOOLIMAGE, 0);

            // DrawState is the only function that can give us the
            // embossed look we need for disabled items. For simplicity,
            // we use it for the other states too.
            //
            DrawState(pdis->hDC, NULL, NULL, (LPARAM)(HICON)hIcon, 0,
                rcTool.left, rcTool.top, 0, 0, fDisabled ? DST_ICON|DSS_DISABLED : DST_ICON);

            // Done with the (stretched) icon.
            DestroyIcon(hIcon);
        }

        // Draw the menu item background.
        FillRect(pdis->hDC, &rcItem, GetSysColorBrush(fSelected && !fDisabled ? COLOR_HIGHLIGHT : COLOR_MENU));

        rcItem.left += CXTEXTMARGIN;
        rcItem.right -= CXYTOOLIMAGE;

        if (fDisabled && !fSelected)
        {
            // Draw the menu item text shadow.
            OffsetRect(&rcItem, +1, +1);
            DrawMenuText(pdis->hDC, pmmi->szText, &rcItem, GetSysColor(COLOR_3DHILIGHT));
            OffsetRect(&rcItem, -1, -1);
        }

        // Draw the menu item text.
        DrawMenuText(pdis->hDC, pmmi->szText, &rcItem, GetSysColor(
            fDisabled ? COLOR_GRAYTEXT : fSelected ? COLOR_HIGHLIGHTTEXT : COLOR_MENUTEXT));

        if (fSelected)
            FrameRect(pdis->hDC, &pdis->rcItem, GetStockBrush(BLACK_BRUSH));
    }
}

/****************************************************************************
 *                                                                          *
 * Function: DrawMenuText                                                   *
 *                                                                          *
 * Purpose : Draw the text for a menu item.                                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void DrawMenuText(HDC hdc, PCTSTR pszText, PRECT prcItem, COLORREF clrText)
{
    PCTSTR pszTab;
    int bkMode;

    // Make sure we can restore the DC when we're done.
    clrText = SetTextColor(hdc, clrText);
    bkMode = SetBkMode(hdc, TRANSPARENT);

    pszTab = _tcschr(pszText, '\t');
    if (pszTab != NULL)
    {
        // Draw the menu and accelerator texts.
        DrawText(hdc, pszText, (pszTab - pszText), prcItem, DT_MYSTYLE);
        DrawText(hdc, pszTab+1, -1, prcItem, DT_MYSTYLE|DT_RIGHT);
    }
    else
    {
        // Draw the menu text.
        DrawText(hdc, pszText, -1, prcItem, DT_MYSTYLE);
    }

    SetTextColor(hdc, clrText);
    SetBkMode(hdc, bkMode);
}

/****************************************************************************
 *                                                                          *
 * Function: ConvertMenu                                                    *
 *                                                                          *
 * Purpose : Convert menu items to/from owner-draw style.                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void ConvertMenu(HMENU hMenu, BOOL fOwnerDraw)
{
    HIMAGELIST himl = NULL;
    int cItems;
    int iItem;

#if (_WIN32_IE >= 0x0300)
    himl = ToolBar_GetImageList(g_hwndTools);
    if (!himl) return;
#endif

    cItems = GetMenuItemCount(hMenu);
    for (iItem = 0; iItem < cItems; iItem++)
    {
        TCHAR szText[CCHMAXMENUTEXT];
        MENUITEMINFO mii;
        PMYMENUITEM pmmi;

        mii.cbSize = sizeof(mii);
        mii.fMask = MIIM_SUBMENU|MIIM_DATA|MIIM_ID|MIIM_TYPE;
        mii.dwTypeData = szText;
        mii.cch = NELEMS(szText);
        if (!GetMenuItemInfo(hMenu, iItem, TRUE, &mii))
            continue;

        if (mii.fType & MFT_BITMAP)
            continue;

        pmmi = (PMYMENUITEM)mii.dwItemData;

        // Assume nothing to change.
        mii.fMask = 0;

        if (fOwnerDraw)
        {
            if (!(mii.fType & MFT_OWNERDRAW))
            {
                mii.fType |= MFT_OWNERDRAW;
                mii.fMask |= MIIM_TYPE;

                if (!pmmi)
                {
                    pmmi = malloc(sizeof(*pmmi));
                    if (pmmi)
                    {
                        pmmi->fType = mii.fType;
                        pmmi->hIcon = NULL;

                        if (mii.wID != 0)
                        {
                            int iBitmap = ToolBar_GetBitmap(g_hwndTools, mii.wID);
                            if (iBitmap) pmmi->hIcon = ImageList_GetIcon(himl, iBitmap, ILD_TRANSPARENT);
                        }

                        mii.dwItemData = (DWORD)pmmi;
                        mii.fMask |= MIIM_DATA;
                    }
                }

                if (!(mii.fType & MFT_SEPARATOR))  /* MFT_STRING is zero! */
                    lstrcpyn(pmmi->szText, szText, NELEMS(pmmi->szText));
                else
                    pmmi->szText[0] = '\0';
            }

            // Remember to un-convert this menu!
            AddMenuToConvList(hMenu);
        }
        else
        {
            if (pmmi != NULL)
            {
                if (mii.fType & MFT_OWNERDRAW)
                {
                    mii.fType &= ~MFT_OWNERDRAW;
                    mii.fMask |= MIIM_TYPE;

                    lstrcpyn(szText, pmmi->szText, NELEMS(szText));
                    mii.dwTypeData = szText;
                }

                mii.dwItemData = 0;
                mii.fMask |= MIIM_DATA;

                if (pmmi->hIcon != NULL)
                    DestroyIcon(pmmi->hIcon);

                free(pmmi);
                pmmi = NULL;
            }
        }

        if (mii.fMask)
        {
            // Update the menu item, but only if something changed.
            SetMenuItemInfo(hMenu, iItem, TRUE, &mii);
        }
    }
}

/****************************************************************************
 *                                                                          *
 * Function: AddMenuToConvList                                              *
 *                                                                          *
 * Purpose : Add a menu handle to the list of converted menus.              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void AddMenuToConvList(HMENU hMenu)
{
    int i;

    for (i = 0; i < g_cMenuConv; i++)
        if (g_ahMenuConv[i] == hMenu) return;

    if (g_cMenuConv < NELEMS(g_ahMenuConv))
        g_ahMenuConv[g_cMenuConv++] = hMenu;
}
