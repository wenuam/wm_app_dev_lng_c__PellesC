// Dialogs.h

#ifndef _DIALOGS_H_
#define _DIALOGS_H_

#include "find.h"

#define GetCtrl GetDlgItem

void DrawBitmap(HWND hwnd, HDC hdc, HBITMAP hBmp);

int DoExtendedParams(HWND hwnd, EXTENDED * pext);

LRESULT CALLBACK AboutDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK MessageDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
#define MsgBox(hwndDlg, s) 	DialogBoxParam(GetModuleHandle(NULL), MAKEINTRESOURCE(IDDIALOG_MESBOX), hwndDlg,(DLGPROC)MessageDialogProc, (LPARAM)s)

LRESULT CALLBACK ConfirmDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
#define MsgBoxYesNo(hwndDlg, s)	DialogBoxParam(GetModuleHandle(NULL), MAKEINTRESOURCE(IDDIALOG_CONFIRM), hwndDlg,(DLGPROC)ConfirmDialogProc, (LPARAM)s)

LRESULT CALLBACK ConfirmAllDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
#define MsgBoxYesAll(hwndDlg, s)	DialogBoxParam(GetModuleHandle(NULL), MAKEINTRESOURCE(IDDIALOG_CONFIRMALL), hwndDlg,(DLGPROC)ConfirmAllDialogProc, (LPARAM)s)

LRESULT CALLBACK DisplaySendToDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);

#endif // _DIALOGS_H_
