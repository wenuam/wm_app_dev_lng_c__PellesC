// findfileres.h

#ifndef _FINDFILERES_H_
#define _FINDFILERES_H_

// icon ID's
#define IDI_FINDFILE 		1
#define IDI_DELETE  		2
#define IDI_MOVE  			3

#define ID_LNK     21
#define IDACCEL    99

// Main dialog
#define IDDIALOG_MAIN       100
#define IDDIALOG_CONFIRM    101
#define IDDIALOG_CONFIRMALL 102
#define IDDIALOG_MESBOX     103
#define IDDIALOG_SENDTO     104
#define IDDIALOG_EDITSENDTO 105
#define IDDIALOG_EXTENDED   106
#define IDDIALOG_ABOUT      107

#define IDMENU_MAIN      110
#define IDMENU_POPUP     111

#define ID_BUT_OK        127
#define ID_BUT_CANCEL    129
#define ID_BUT_RESET     130
#define ID_BUT_CLEAR     131

#define ID_STATIC_PICBOX    132 // subclassed to paint images
#define ID_STATIC_BACK	133 	// back panel
#define ID_STATIC_EXTBACK   134
#define ID_STATIC_FILE      135 // File Search
#define ID_STATIC_TSEARCH   136 // Text Search
#define ID_STATIC_DATE_AFTER 137
#define ID_STATIC_DATE_BEFORE 138
#define ID_STATIC_SIZE_MORE   139
#define ID_STATIC_SIZE_LESS   140
#define ID_STATIC_DATE_AFTER_TXT 141
#define ID_STATIC_DATE_BEFORE_TXT 142
#define ID_STATIC_SIZE_MORE_TXT  143
#define ID_STATIC_SIZE_LESS_TXT  144

#define ID_CHK_ENABLE_EXT  145
#define ID_CHK_CASE        146
#define ID_CHK_SUBFOLDER   147
#define ID_CHK_AUTOWILDC   148
#define ID_CHK_OCCUR       149
#define ID_CHK_UNI         150

#define IDC_COMBO      151
#define IDC_STATUSBAR  152
#define IDC_LISTVIEW   153

#define ID_EDIT_FILTER    154
#define ID_EDIT_SEARCH    155
#define ID_EDIT_RENAME    156
#define ID_EDIT_HEADER    157

// Confirm Dialog
#define ID_STATIC_TEXTCONFIRM 165
#define ID_BUT_CONFIRMYES     166
#define ID_BUT_CONFIRMCANCEL  167
#define ID_BUT_CONFIRMYESALL  168
#define IDI_CONFIRMICONDEL 	  169
#define IDI_CONFIRMICONMOV 	  170

// MessageBox Dialog
#define ID_STATIC_MESSAGETEXT 180

// Menu items
#define IDM_FOLDER      200
#define IDM_DEPENDS     201
#define IDM_OPEN        202
#define IDM_RENAME      203
#define IDM_COPYTO      204
#define IDM_MOVETO      205
#define IDM_DELETE      206
#define IDM_RECYCLE     207
#define IDM_PROPERTIES  208
#define IDM_EXIT        209
#define IDM_EDITSENDTO  210
#define IDM_EXTENDEDSEARCH 211
#define IDM_ABOUT       212
#define IDM_UP          213 // these three are not used
#define IDM_DOWN        214 // as menu items but ID's
#define IDM_NOTDEPENDS  215 // for loading bitmaps

#define IDM_VSEARCH     216
#define IDM_SENDTOFIRST 217
#define IDM_SENDTO      225

#define IDM_RESTART     230

// Choose SendTo Dialog
#define ID_EDIT_1     301
#define ID_EDIT_2     302
#define ID_EDIT_3     303
#define ID_EDIT_4     304
#define ID_EDIT_5     305
#define ID_EDIT_6     306

#define ID_BUT_ED1 311
#define ID_BUT_ED2 312
#define ID_BUT_ED3 313
#define ID_BUT_ED4 314
#define ID_BUT_ED5 315
#define ID_BUT_ED6 316

#define ID_BUT_PROG_1 321
#define ID_BUT_PROG_2 322
#define ID_BUT_PROG_3 323
#define ID_BUT_PROG_4 324
#define ID_BUT_PROG_5 325
#define ID_BUT_PROG_6 326

#define ID_BUT_FOLD_1 327
#define ID_EDIT_DISP   328

// Extended Pararmeters Dialog
#define ID_EDIT_SIZE_GREATER    351
#define ID_EDIT_SIZE_LESS       352
#define IDC_DAY_BEFORE      353
#define IDC_MONTH_BEFORE    354
#define IDC_YEAR_BEFORE     355
#define IDC_DAY_AFTER       356
#define IDC_MONTH_AFTER     357
#define IDC_YEAR_AFTER      358

// About Dlg
#define ID_STATIC_VERSION   5000
#define ID_COPYRIGHT        5001

#endif // _FINDFILERES_H_
