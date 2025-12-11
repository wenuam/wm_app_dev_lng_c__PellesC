#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <tchar.h>
#include "main.h"
#include <string.h>
#include <setjmp.h>
#include <commctrl.h>

static LRESULT WINAPI MainDlgProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT WINAPI GetIntDlgProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT WINAPI GetStringDlgProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT WINAPI ListSelectDlgProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT WINAPI InsertDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
static LRESULT WINAPI MainWndProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT WINAPI ConvertDlgProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
static LRESULT WINAPI InStringDlgProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
static LRESULT WINAPI AsciiDlgProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
static LRESULT WINAPI TestFunctionDlgProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
static LRESULT WINAPI SendMessageDlgProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);

static LRESULT CALLBACK TestWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef enum {
	unknown,item,loop,endloop,list,endlist,listloop,inlist,endlistloop,getstring,instring,delete,string,at,helpkwd}
keyword;
HWND hMainDlg,hwndtest;
HINSTANCE hinst;
void gettemplate(int dSelect);
void run(void);
int checkscript(char *pszbtext,int size);
keyword getKeyword(char* pszBuf);
void newline(char** ppszBuf);
void execKeyword(char** ppszResult,char** ppszSource);
int getInt(void);
int getList(char*);
int getString(void);
void filllist(HWND hdlg,int idlist);
void deleteitem(void);
void writeregstring(char* pszKey,char* lpValuename,char* pszString);
int getregstring(char* pszKey,char* lpValuename,char* pszReturnBuffer);
int GetFileName(char *buffer);
void findhelpkwd(void);
void gettemplatestring(char** ppszB2,char** ppszB1,char* pszb1end,BOOL exec);
int paste(char** ppszstring);
void filltree(void);
void tabctrlselect(int selection);
void error(void);
#define IDSETFOCUS 10000
#define IDSETCURSEL 10001

#define BUFMAX 128000
#define ITEMMAX 300
#define NAMELENMAX 100
#define LISTLENMAX 300
#define REGBUFLEN 256

typedef int(funcconvert)(char* pszdest,char* pszsource);
//int convFLtoS(char* pszdest,char* pszsource);
funcconvert convFLtoS,convFunctoS,convStructtoC,convStrtoInitStr,	convDelOneWord;

typedef struct _convert{
	funcconvert* pfunc;
	char*  title;
	char*  description;
}
convert,*lpconvert;

#define NCONVERT 5
convert converts[NCONVERT]={
	{
		convFLtoS,
		"Win32.hlp Flag List --> cWiz Script",
		"This converts a clipboard content like this:"
		    "\r\n\r\nREG_LINK	A Unicode symbolic link."
		    "\r\nREG_MULTI_SZ	An array of null-terminated strings, terminated by ..."
		    "\r\nREG_NONE	No defined value type."
		    "\r\nREG_RESOURCE_LIST	A device-driver resource list."
		    "\r\n\r\nto this:\r\n"
		    "\r\n@list"
		    "\r\nREG_LINK"
		    "\r\nREG_MULTI_SZ"
		    "\r\nREG_NONE"
		    "\r\nREG_RESOURCE_LIST@endlist"
		    "\r\n@listloop"
		    "\r\n@inlist | @endlistloop"
		    "\r\n@delete2,"
		    "\r\n\r\nto use as script"
	}
	,
	{
		convFunctoS,
		"Win32.hlp Function --> cWiz Script",
		"-------This will convert a clipboard content like this:\r\n"
		    "\r\n"
		    "HHOOK SetWindowsHookEx(\r\n"
		    "\r\n"
		    "    int idHook,\t// type of hook to install\r\n"
		    "    HOOKPROC lpfn,\t// address of hook procedure\r\n"
		    "    HINSTANCE hMod,\t// handle of application instance\r\n"
		    "    DWORD dwThreadId \t// identity of thread to install hook for \r\n"
		    "   );\t\r\n"
		    "\r\n"
		    "--------to this (for using as cWiz script):\r\n"
		    "\r\n"
		    "SetWindowsHookEx(\r\n"
		    "\r\n"
		    "@\"idHook\"\r\n"
		    "@\"lpfn\"\r\n"
		    "@\"hMod\"\r\n"
		    "@\"dwThreadId\"\r\n"
		    ")\r\n"
		    "\r\n"
		    "\r\n"
	}
	,
	{
		convStrtoInitStr,
		"String --> Initialization of Character Array",
		"This converts a normal string\r\n"
		    "into a string with \\r\\n\" at the end of\r\n"
		    "each line and \" at the beginning of each line\r\n"
		    "to use for initialisation of a character array.\r\n"
		    "or parameter in a messagebox function.\r\n"
		    "\r\n"
		    "\r\n"
		    "\r\n"
		    "testline 1\r\n"
		    "comment: \"yes\" \r\n"
		    "backslash: \\\r\n"
		    "tabulator\t1\t2\t3\r\n"
		    "\t\t4\t55\t666\r\n"
		    "\r\n"
		    "will be converted to:\r\n"
		    "\r\n"
		    "\"testline 1\\r\\n\"\r\n"
		    "\"comment: \\\"yes\\\" \\r\\n\"\r\n"
		    "\"backslash: \\\\\\r\\n\"\r\n"
		    "\"tabulator\\t1\\t2\\t3\\r\\n\"\r\n"
		    "\"\\t\\t4\\t55\\t666\\r\\n\"\r\n"
		    "\r\n"
	}
	,
	{
		convStructtoC,
		"Structure Definition --> cSource Initialization",
		"------------This converts a structure definition like this:\r\n"
		    "\r\n"
		    "   LONG lfHeight; \r\n"
		    "   LONG lfWidth; \r\n"
		    "   LONG lfEscapement; \r\n"
		    "   LONG lfOrientation; \r\n"
		    "   LONG lfWeight; \r\n"
		    "   BYTE lfItalic; \r\n"
		    "   BYTE lfUnderline; \r\n"
		    "   BYTE lfStrikeOut; \r\n"
		    "   BYTE lfCharSet; \r\n"
		    "   BYTE lfOutPrecision; \r\n"
		    "   BYTE lfClipPrecision; \r\n"
		    "   BYTE lfQuality; \r\n"
		    "   BYTE lfPitchAndFamily; \r\n"
		    "   TCHAR lfFaceName[LF_FACESIZE]; \r\n"
		    "\r\n"
		    "--------to this (for initialization in C-code):\r\n"
		    "\r\n"
		    "NameOfStruct.lfHeight=   ;\r\n"
		    "NameOfStruct.lfWidth=   ;\r\n"
		    "NameOfStruct.lfEscapement=   ;\r\n"
		    "NameOfStruct.lfOrientation=   ;\r\n"
		    "NameOfStruct.lfWeight=   ;\r\n"
		    "NameOfStruct.lfItalic=   ;\r\n"
		    "NameOfStruct.lfUnderline=   ;\r\n"
		    "NameOfStruct.lfStrikeOut=   ;\r\n"
		    "NameOfStruct.lfCharSet=   ;\r\n"
		    "NameOfStruct.lfOutPrecision=   ;\r\n"
		    "NameOfStruct.lfClipPrecision=   ;\r\n"
		    "NameOfStruct.lfQuality=   ;\r\n"
		    "NameOfStruct.lfPitchAndFamily=   ;\r\n"
		    "NameOfStruct.lfFaceName=   ;\r\n"
		    "\r\n"
	}
	,
	{
		convDelOneWord,
		"Deletes the n-th word of each line.",
		"If you input for example 3, this\r\n"
		    "converter will delete the 3rd word\r\n"
		    "of each line.\r\n"
	}
};
typedef char _name[NAMELENMAX+1];
typedef struct {
	int dLine;
	char* pChar1;
	char* pChar2;
	_name szName;
}
ITEM;
ITEM items[ITEMMAX+1];

_name listbuffer[LISTLENMAX+1];
char* buffer=NULL;
int globalbuffersize=0;
char* bufferend=NULL;
char buffer2[BUFMAX+2];
char* buffer2end=&buffer2[BUFMAX];
char buffer3[BUFMAX+2];
char* buffer3end=&buffer3[BUFMAX];

char** ppszB1global;
char pszPathOfTextFile[MAX_PATH+1];
_name name;
char* pszname=name;
char* psznameend=&name[NAMELENMAX];

const char* key= "Software\\cwizzardTT\\";
int globalmadechanges=0;
char globalhelpkwd[NAMELENMAX+1]={
	0};

jmp_buf label1;

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{

	hinst=hInstance;
	InitCommonControls();

	FILE* pFile=NULL;
	pszPathOfTextFile[0]=0;
	if(lpszCmdLine[0]==0){
		GetCurrentDirectory(MAX_PATH-20,pszPathOfTextFile);
		strcat(pszPathOfTextFile,"\\cwiz.txt");
		pFile=fopen(pszPathOfTextFile,"rb");
	}
	if(pFile==NULL){
		strncpy(pszPathOfTextFile,lpszCmdLine,MAX_PATH);
		pFile=fopen(pszPathOfTextFile,"rb");
		if(pFile==NULL){
			MessageBox(0,"cannot open the above textfile,\r\n"
				    "please give correct path and textfilename as\r\n"
				    "argument to cwiz.exe.",pszPathOfTextFile,0);

			return 1;
		}
	}
	int c;
	int size=0;
	while(EOF!=getc(pFile))size++;
	size+=3;
	fseek(pFile,0,SEEK_SET);
	buffer=(char*)malloc(size);
	globalbuffersize=size;
	if(buffer==NULL){
		MessageBox(0,"malloc failed","cwiz",0);
		fclose(pFile);
		return 1;
	}
	bufferend=buffer+size-1;
	char* pszBuf=buffer;
	while(EOF!=c && pszBuf<bufferend){
		(*pszBuf++)=c=(getc(pFile));
	}

	fclose(pFile);

	*--pszBuf=0;
	CreateDialog(hInstance, MAKEINTRESOURCE(DLG_MAIN), 0, (DLGPROC)MainDlgProc);
	MSG msg;


	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	free(buffer);
	return msg.wParam;
}


static LRESULT CALLBACK MainDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	hMainDlg=hdlg;
	switch (uMsg)
	{

	case WM_NOTIFY:
	{
		int idCtrl = (int) wParam; 
		LPNMHDR pnmh = (LPNMHDR) lParam; 
		
		if(idCtrl==IDTREEVIEW && pnmh->code==TVN_SELCHANGED){
			TabCtrl_SetCurSel(GetDlgItem(hMainDlg,IDTABCTRL),1);
			tabctrlselect(1);
  		HWND hWndTV=pnmh->hwndFrom;
			HTREEITEM hitem=TreeView_GetSelection(hWndTV);
			TV_ITEM tvitem;
			memset(&tvitem,0,sizeof(TV_ITEM));
			tvitem.hItem=hitem;
			tvitem.mask=TVIF_PARAM;
			TreeView_GetItem(hWndTV,&tvitem);
 			int selection=(int)tvitem.lParam;

			gettemplate(selection);

			if(BST_CHECKED==Button_GetCheck(GetDlgItem(hMainDlg,IDHELPALWAYS))){
						SendMessage(hMainDlg,WM_COMMAND,IDWINHELP,0);
			}
		return 0;
		}	
		if(idCtrl==IDTABCTRL && pnmh->code==TCN_SELCHANGE){
  		HWND hWndTV=pnmh->hwndFrom;
			int selected=TabCtrl_GetCurSel(hWndTV);
			tabctrlselect(selected);
		
		return 0;
		}	
	return 0;
	}
	case WM_INITDIALOG:
		{
			ListBox_ResetContent(GetDlgItem(hMainDlg,IDLIST));
		char* strings[]=
		    {
			"@helpkwd xyz\r\n",
			"",
			"@loop xyz\r\n",
			"@endloop\r\n",
			"",
			"@list xyz\r\n",
			"@endlist\r\n",
			"@listloop\r\n",
			"@inlist ",
			"@endlistloop\r\n",
			"",
			"@delete",
			"",
			"@getstring xyz\r\n",
			"@instring",
			"",
			"@\"xyz\"",
			"",
			"@at"
		};
		for(int c=0;c<19;c++){
			ListBox_AddString(GetDlgItem(hMainDlg,IDLIST),strings[c]);
		}

			{
				HIMAGELIST himagelist=ImageList_LoadBitmap(
					hinst, 	
					MAKEINTRESOURCE(TVBMPS), 	
					16, 	
					2, 	
					CLR_NONE	
   			);	
   		 TreeView_SetImageList(
  		  GetDlgItem(hMainDlg,IDTREEVIEW), 	
  		  himagelist, 	
  		  TVSIL_NORMAL		
  		 );
			}

		{
				HIMAGELIST himagelist=ImageList_LoadBitmap(
					hinst, 	
					MAKEINTRESOURCE(TCBMPS), 	
					16, 	
					2, 	
					CLR_NONE	
   			);	
   		 TabCtrl_SetImageList(
  		  GetDlgItem(hMainDlg,IDTABCTRL), 	
  		  himagelist 	
  		 );

			PostMessage(hMainDlg,WM_COMMAND,IDSETCURSEL,(LPARAM)GetDlgItem(hMainDlg,IDTABCTRL));
//			TabCtrl_SetCurSel(GetDlgItem(hMainDlg,IDTABCTRL),1);
			tabctrlselect(1);


		TCITEM tcitem;
		memset(&tcitem,0,sizeof(tcitem));
    tcitem.mask=TCIF_TEXT|TCIF_IMAGE;// value specifying which members to retrieve or set 
    tcitem.pszText="test";     // pointer to string containing tab text 
    tcitem.cchTextMax=0;    // size of buffer pointed to by the pszText member 
    tcitem.iImage=0;        // index to tab control's image 
    tcitem.lParam=0;     // application-defined data associated with tab 
 
		HWND hwndtab=GetDlgItem(hdlg,IDTABCTRL);

			tcitem.pszText="New Template";
			tcitem.iImage=0;
			TabCtrl_InsertItem(
			hwndtab,	
			0, 	
			&tcitem	
		);	

			tcitem.pszText="Template Script";
			tcitem.iImage=1;
			TabCtrl_InsertItem(
			hwndtab,	
			0, 	
			&tcitem	
		);	

			tcitem.pszText="C Output";
			tcitem.iImage=2;
			TabCtrl_InsertItem(
			hwndtab,	
			0, 	
			&tcitem	
		);	

		}

			SendDlgItemMessage(hdlg,IDTEXT,EM_SETLIMITTEXT,65000,0);
			SendDlgItemMessage(hdlg,IDTEXTOUT,EM_SETLIMITTEXT,65000,0);
			SendDlgItemMessage(hdlg,IDTEXTNEW,EM_SETLIMITTEXT,65000,0);
			char b[512];
			strcpy(b,"Cwizard: a template tool.  -----   ");
			strcat(b,pszPathOfTextFile);
			SetWindowText(hdlg,b);
			filltree();

			return TRUE;

		}

	case WM_COMMAND:
		{
			switch LOWORD(wParam)
			{
			case IDSETFOCUS:
				SetFocus((HWND)lParam);
				break;
			case IDSETCURSEL:
				TabCtrl_SetCurSel((HWND)lParam,1);
				break;
			case IDTESTFUNCTION:
				DialogBox(hinst, MAKEINTRESOURCE(DLG_TESTFUNCTION), 0, (DLGPROC)TestFunctionDlgProc);
				break;
			case IDASCII:
				filltree();
				DialogBox(hinst, MAKEINTRESOURCE(DLG_ASCII), 0, (DLGPROC)AsciiDlgProc);
				break;
			case IDCONVERT:
				DialogBox(hinst, MAKEINTRESOURCE(DLG_CONVERT), hMainDlg, (DLGPROC)ConvertDlgProc);
				break;
			case IDHELPPATH:
				{
					char helppath[MAX_PATH];
					getregstring("helpfiles","win32hlp",helppath);
					if(GetFileName(helppath)){
						writeregstring("helpfiles","win32hlp",helppath);
					}
					break;
				}
			case IDWINHELP:
				{
					char helppath[MAX_PATH];
					getregstring("helpfiles","win32hlp",helppath);

					WinHelp(
						hMainDlg,        // handle of window requesting Help
						helppath,  // address of directory-path string
						HELP_KEY,        // type of Help
						(DWORD)globalhelpkwd
						    );

					break;
				}
			case IDSAVE:
				{
					int mb=MessageBox(hMainDlg,"Do  you really want to override the old file?","cwizzard question:",   MB_YESNO | MB_ICONQUESTION | MB_APPLMODAL );
					if(mb==IDNO)break;

					FILE* pFile=NULL;
					pFile=fopen(pszPathOfTextFile,"wb");
					if(pFile==NULL){
						char szb[512];
						sprintf(szb,"error with fopen(%s,\"rb+\")",pszPathOfTextFile);
						MessageBox(hMainDlg,szb,"cwiz",0);
						break;
					}
					char* pszbuf=buffer;
					int len=strlen(buffer);
					if(len>globalbuffersize-1){
						MessageBox(hMainDlg,"cwiz saving error with strlen(buffer)","cwiz",0);
						fclose(pFile);
						break;
					}
					char* bufend=buffer+len;
					while(pszbuf<=bufend && EOF!=fputc(*pszbuf++,pFile));
					if(pszbuf<bufend)MessageBox(hMainDlg,"cwiz saving error with fputc","cwiz",0);
					{
						char szb[512];
						sprintf(szb,"saved %d characters to file: %s.",pszbuf-buffer,pszPathOfTextFile);
						MessageBox(hMainDlg,szb,"c template wizzard success:",0);
					}
					fclose(pFile);
					globalmadechanges=0;
					break;
				}
			case IDSTORE:
				DialogBox(hinst, MAKEINTRESOURCE(DLG_INSERT), hMainDlg, (DLGPROC)InsertDlgProc);
				break;
			case IDDELETE:
				deleteitem();
				break;
			case IDLIST:
				switch (HIWORD(wParam))
				{
				case LBN_SELCHANGE:
					{
						HWND hListBox =GetDlgItem(hMainDlg,IDLIST);
						HWND hEdit=GetDlgItem(hMainDlg,IDTEXTNEW);
						_name pszkwd;
						int lenkwd=ListBox_GetText(hListBox,ListBox_GetCurSel(hListBox),pszkwd);
						DWORD sel;
						SendMessage(hEdit,EM_GETSEL,(WPARAM)&sel,0);
						Edit_SetSel(hEdit,sel,sel);
						Edit_ReplaceSel(hEdit,pszkwd);		
						SetFocus(hEdit);
					}						
				}
				break;
			case IDCOPY:
				{
					int selected=TabCtrl_GetCurSel(GetDlgItem(hdlg,IDTABCTRL));
					int idItem=0;
					if(selected==0)idItem=IDTEXTOUT;
					if(selected==1)idItem=IDTEXT;
					if(selected==2)idItem=IDTEXTNEW;
					Edit_GetText(GetDlgItem(hdlg,idItem),buffer3,BUFMAX);
					int size=strlen(buffer3)+1;
					if (OpenClipboard(hdlg))
					{
						HGLOBAL hCopy = GlobalAlloc(GMEM_SHARE, size);
						if (hCopy != INVALID_HANDLE_VALUE){
							LPVOID lpCopy = GlobalLock(hCopy);
							EmptyClipboard();
							memcpy((LPBYTE)lpCopy,(LPBYTE)buffer3,size);
							SetClipboardData(CF_TEXT,hCopy);
							GlobalUnlock(hCopy);
						}
						else MessageBox(0,"Error: invalid handle value at globalalloc","",0);
						CloseClipboard();
					}
					else MessageBox(0,"cannot open clipboard.","",0);

				}
				return TRUE;
			case IDRUN:
				run();
				return TRUE;
			case IDOK:
				return TRUE;
			case IDCANCEL:
				{
					if(globalmadechanges){
						int mb=MessageBox(hMainDlg,"Save the changes?","cwizzard question:",   MB_YESNOCANCEL | MB_ICONSTOP | MB_SYSTEMMODAL );
						switch(mb){
						case IDYES:
							SendMessage(hMainDlg,WM_COMMAND,IDSAVE,0);
							break;
						case IDNO:
							break;
						case IDCANCEL:
							return TRUE;
							break;
						}
					}
					EndDialog(hMainDlg, TRUE);
					PostQuitMessage(0);
					return TRUE;
				}
			}
			return FALSE;
		}
	}
	return FALSE;
}
void gettemplate(int dSelect){
	ITEM* pItem=&items[dSelect];
	int size=pItem->pChar2-pItem->pChar1+1;
	char* pszB2=buffer2;
	char* pszB1=pItem->pChar1;
	int errorpos;
	BOOL bRun=(BST_CHECKED==Button_GetCheck(GetDlgItem(hMainDlg,IDRUNSELECTION)));
	gettemplatestring(&pszB2,&pszB1,pItem->pChar2,FALSE);
	SetDlgItemText(hMainDlg,IDTEXT,buffer2);
	pszB1=pItem->pChar1;
	if(0<(errorpos=checkscript(pszB1,size))){

		int errorposend=errorpos;
		while(isalpha(pszB1[++errorposend]));
		PostMessage(hMainDlg,WM_COMMAND,IDSETFOCUS,(LPARAM)GetDlgItem(hMainDlg,IDTEXT));

	//	SetFocus(GetDlgItem(hMainDlg,IDTEXT));
		SendDlgItemMessage(hMainDlg,IDTEXT,EM_SETSEL,(WPARAM)errorpos,(LPARAM)errorposend);
		return;
	}

	if(bRun)SendMessage(hMainDlg,WM_COMMAND,(WPARAM)IDRUN,0);
	findhelpkwd();
}
void run(void){
	char pszb[BUFMAX+2];
	int selected=TabCtrl_GetCurSel(GetDlgItem(hMainDlg,IDTABCTRL));
	int IDsource=0;
	if(selected==1)IDsource=IDTEXT;
	if(selected==2)IDsource=IDTEXTNEW;
	int size=GetDlgItemText(hMainDlg,IDsource,pszb,BUFMAX);
	char* pszB2=buffer2;
	char* pszB1=pszb;
	int errorpos;
	if(0<(errorpos=checkscript(pszB1,strlen(pszB1)))){

		int errorposend=errorpos;
		while(0!=isalpha(pszb[++errorposend]));
		SetFocus(GetDlgItem(hMainDlg,IDsource));
		SendDlgItemMessage(hMainDlg,IDsource,EM_SETSEL,(WPARAM)errorpos,(LPARAM)errorposend);
		return;
	}
	gettemplatestring(&pszB2,&pszB1,strchr(pszb,0),TRUE);
	SetDlgItemText(hMainDlg,IDTEXTOUT,buffer2);
	TabCtrl_SetCurSel(GetDlgItem(hMainDlg,IDTABCTRL),0);
	tabctrlselect(0);	
}
keyword getKeyword(char* pszBufa){
	char* pszBuf=pszBufa+1;
	if(0==strncmp("item",pszBuf,4))return item;
	if(0==strncmp("loop",pszBuf,4))return loop;
	if(0==strncmp("endloop",pszBuf,7))return endloop;
	if(0==strncmp("inlist",pszBuf,6))return inlist;
	if(0==strncmp("listloop",pszBuf,8))return listloop;
	if(0==strncmp("list",pszBuf,4))return list;
	if(0==strncmp("endlistloop",pszBuf,11))return endlistloop;
	if(0==strncmp("endlist",pszBuf,7))return endlist;
	if(0==strncmp("getstring",pszBuf,9))return getstring;
	if(0==strncmp("instring",pszBuf,8))return instring;
	if(0==strncmp("delete",pszBuf,6))return delete;
	if(0==strncmp("helpkwd",pszBuf,7))return helpkwd;
	if(0==strncmp("\"",pszBuf,1))return string;
	if(0==strncmp("at",pszBuf,2))return at;
	//shorter word, that are beginning parts of longer words, must!!! come after, or longer words get unreachable
	return unknown;
}
void newline(char** ppszBuf){
	while(**ppszBuf!=0&&*(*ppszBuf)++!='\n');
}
void execKeyword(char** ppszB2,char** ppszB1){

	keyword kwrd=getKeyword(*ppszB1);
	static char bufString[NAMELENMAX+1];
	switch(kwrd){
	case at:
		*ppszB1+=3; //passing @at
		*(*ppszB2)++='@';
		break;
	case helpkwd:
		{
			char* pszb=name;
			pszb[0]=0;
			*ppszB1+=8; //passing @helpkwd
			while(**ppszB1!=0&&*(*ppszB1)++!='\r'&&pszb<psznameend)*pszb++=**ppszB1;
			if(pszb>name)*--pszb=0;
			newline(ppszB1);
			strncpy(globalhelpkwd,name,NAMELENMAX);
			SetDlgItemText(hMainDlg,IDHELPTEXT,name);
			break;
		}
	case delete:
		{
			*ppszB1+=7; //passing @delete
			int iBS=atoi(*ppszB1);
			*ppszB2-=iBS;
			*(*ppszB2+1)=0;
			if(iBS>0)(*ppszB1)++;
			if(iBS>9)(*ppszB1)++;
		}
		break;
	case loop:
		{
			char* pszb=name;
			pszb[0]=0;
			*ppszB1+=5;//pass @loop
			while(**ppszB1!=0&&*(*ppszB1)++!='\r'&&pszb<psznameend)*pszb++=**ppszB1;
			if(pszb>name)*--pszb=0;

			newline(ppszB1);
			char* pszEnd=*ppszB1;
			while(endloop!=getKeyword(pszEnd)&&*pszEnd!=0){
				while(*++pszEnd!=0&&*pszEnd!='@');
			}
			if(*pszEnd==0){
				MessageBox(hMainDlg,"missing endloop","",0);
				pszEnd=*ppszB1;
			}
			int c=getInt();
			for(int i=0;i<c;i++){
				for(char* pszB=*ppszB1;pszB<pszEnd;pszB++){
					if(*pszB=='@'){
						execKeyword(ppszB2,&pszB);
					}
					if(*ppszB2<buffer2end)*(*ppszB2)++=*pszB;
				}
			}
			*ppszB1=pszEnd;
			newline(ppszB1);
		}
		break;
	case list:
		{
			char text[1024];
			char* psztextend=&text[1024];
			char* pszb=text;
			pszb[0]=0;
			*ppszB1+=5;//pass @list
			while(**ppszB1!=0&&*(*ppszB1)++!='\r'&&pszb<psztextend)*pszb++=**ppszB1;
			if(pszb>text)*--pszb=0;
			newline(ppszB1);
			ppszB1global=ppszB1;//the dialog function gets the pointer from ppszB1
			getList(text);
		}
		break;
	case listloop:
		{
			//*ppszB1+=9;//pass @listloop
			newline(ppszB1);
			char* pszEnd=*ppszB1;
			while(endlistloop!=getKeyword(pszEnd)&&*pszEnd!=0){
				while(*++pszEnd!=0&&*pszEnd!='@');
			}
			if(*pszEnd==0){
				MessageBox(hMainDlg,"missing endlistloop","cwiz",0);
				pszEnd=*ppszB1;
			}
			char* pszP;
			for(int i=0;*(pszP=listbuffer[i])!=0;i++){
				for(char* pszB=*ppszB1;(pszB<pszEnd)&&(*ppszB2<buffer2end); ){
					if(*pszB=='@'){
						if(getKeyword(pszB)==inlist){
							pszB+=7;//7 pass @inlist
							while(*pszP!=0 && *ppszB2<buffer2end)*(*ppszB2)++=*pszP++;
							//		if(*ppszB2<buffer2end-NAMELENMAX-1)strcat((*ppszB2),pszP);
							//		*ppszB2+=strlen(pszP);
							pszP=listbuffer[i];
						}
						else execKeyword(ppszB2,&pszB);
					}
					else if(*ppszB2<buffer2end)*(*ppszB2)++=*pszB++;
				}
			}
			*ppszB1=pszEnd;
			newline(ppszB1);
		}
		break;
	case getstring:
		*ppszB1+=10;//pass @getstring
		ppszB1global=ppszB1;//the dialog function gets the pointer from ppszB1
		getString();
		strncpy(bufString,name,NAMELENMAX);
		break;
	case instring:
		{
			*ppszB1+=9;//pass @instring
			strncpy(*ppszB2,bufString,strlen(bufString));
			*ppszB2+=strlen(bufString);
			//char* pszname=name;
			//while(0!=(*(*ppszB2)++=*pszname++));
			//*ppszB2-=3;
		}
		break;
	case string:
		{
			*ppszB1+=2;//pass @"
			char buf[256];
			char* pbuf=buf;
			char c=0;
			while(c!='"')c=*pbuf++=*(*ppszB1)++;
			*--pbuf=0;
			pbuf=buf;
			ppszB1global=&pbuf;
			getString();
			strncpy(*ppszB2,name,strlen(name));
			*ppszB2+=strlen(name);
		}
		break;
	default:
		break;
	}
}

static LRESULT CALLBACK InsertDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDLIST:
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
				{
					int index=SendDlgItemMessage(hdlg,IDLIST,LB_GETCURSEL, 0, 0);
					int select=ListBox_GetItemData(GetDlgItem(hdlg,IDLIST),index);
					if(*items[select].szName=='-'){
						ListBox_ResetContent(GetDlgItem(hdlg,IDLIST));
						for(int i=0,index=0;*items[i].szName!=0 && i<ITEMMAX;i++){
							SendDlgItemMessage(hdlg,IDLIST,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)items[i].szName);
							ListBox_SetItemData(GetDlgItem(hdlg,IDLIST),index,i);
							index++;
						}
						ListBox_SetCurSel(GetDlgItem(hdlg,IDLIST),select);
						ListBox_SetTopIndex(GetDlgItem(hdlg,IDLIST),select);
					}
					return FALSE;
				}
			}
			return TRUE;
		case IDCAT:
			ListBox_ResetContent(GetDlgItem(hdlg,IDLIST));
			for(int i=0,index=0;*items[i].szName!=0 && i<ITEMMAX;i++){
				if(*items[i].szName=='-'){
					SendDlgItemMessage(hdlg,IDLIST,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)items[i].szName);
					ListBox_SetItemData(GetDlgItem(hdlg,IDLIST),index,i);
					index++;
				}
			}
			return TRUE;
		case IDOK:
			{
				int select=SendDlgItemMessage(hdlg,IDLIST,LB_GETCURSEL, 0, 0);
				if(select<0){
					MessageBox(hdlg,"You must select a line in the listbox","cwizzard info:", MB_ICONINFORMATION);
					return TRUE;
				}
				_name pszb;
				GetDlgItemText(hdlg,IDITEMTITLE,pszb,NAMELENMAX);
				if(strlen(pszb)==0){
					MessageBox(hdlg,"You must type the title of the new item.","cwizzard info:",   MB_ICONINFORMATION);
					return TRUE;
				}
				int bufferTsize=globalbuffersize+128000;


				char* bufferT=(char*)malloc(bufferTsize);//the 'T' means Temporary buffer
				if (bufferT==NULL){
					MessageBox(hdlg,"malloc failed","cwiz",0);
					return TRUE;
				}

				ITEM* pItem=&items[select];

				int insertpoint=(pItem->pChar2-buffer)+1;

				char* pszB1=buffer+insertpoint;
				char* pszBT=bufferT+insertpoint;

				memcpy(bufferT,buffer,globalbuffersize);
				strcpy(pszBT,"@item");
				pszBT+=5;

				int len=GetDlgItemText(hdlg,IDITEMTITLE,pszBT,bufferTsize-(pszBT-bufferT)-10);
				pszBT+=len;
				strcpy(pszBT,"\r\n");
				pszBT+=2;

				len=GetDlgItemText(hMainDlg,IDTEXTNEW,pszBT,bufferTsize-(pszBT-bufferT)-10);
				pszBT+=len;
				strcpy(pszBT,"\r\n");
				pszBT+=2;
				memcpy(      pszBT,pszB1,    globalbuffersize-insertpoint);
				int newsize=(pszBT-bufferT)+(globalbuffersize-insertpoint);


				char* bufferre=(char*)realloc(buffer,newsize);
				if (bufferre==NULL){
					MessageBox(hdlg,"realloc failed","cwiz",0);
					free(bufferT);

					return TRUE;
				}
				buffer=bufferre;
				globalbuffersize=newsize;

				memcpy(buffer,bufferT,globalbuffersize);
				globalmadechanges=1;
				EndDialog(hdlg,0);
				free(bufferT);
				filltree();
				return TRUE;
			}
		case IDCANCEL:
			{
				EndDialog(hdlg,0);
				return TRUE;
			}
		}
		return FALSE;
	case WM_INITDIALOG:
		{
			SetFocus(GetDlgItem(hdlg,IDITEMTITLE));
			char text[]={
				"The text of the \"New Template\" .\r\n"
				    "will be insertet \r\n"
				    "as a new item.\r\n"
				    "Klick on the right list,\r\n"
				    "where the new item is to be placed under.\r\n"
				    "Later you can save with clicking on Save.\r\n"
				    "   Good luck!\r\n"
						"\r\n"
						"(a '-' before the title will create a categorie.)"

			};
			SetDlgItemText(hdlg,IDTEXTINSERT,text);
			filllist(hdlg,IDLIST);
		}
		return FALSE;
	case WM_CLOSE:
		{
			EndDialog(hdlg,0);
		}
		return FALSE;
	}
	return FALSE;

}
static LRESULT CALLBACK GetIntDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_SHOWWINDOW:
		SetFocus(GetDlgItem(hdlg,IDGETINT));
		return TRUE;
	case WM_INITDIALOG:
		{
			char buf[NAMELENMAX+1024];
			sprintf(buf,"How many:\r\n\r\n%s",name);
			SetDlgItemText(hdlg,IDINTTEXT,buf);
		}
		return TRUE;
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDTERMINATERUN:
			EndDialog(hdlg,-3);
			return 0;
			break;
		case IDOK:
		case IDCANCEL:
			{
				int i=GetDlgItemInt(hdlg,IDGETINT,NULL,FALSE);
				EndDialog(hdlg,i);
				return TRUE;
			}
			break;
		}
	}
	return FALSE;
}
static LRESULT CALLBACK GetStringDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_SHOWWINDOW:
		SetFocus(GetDlgItem(hdlg,IDGETSTRING));
		SendDlgItemMessage(hdlg,IDGETSTRING,EM_SETSEL,0,-1);
		return TRUE;
	case WM_INITDIALOG:
		{
			char buf[NAMELENMAX+1];
			int count=0;
			do{
				buf[count]=*(*ppszB1global)++;
			}
			while(buf[count]!=0 && buf[count]!='\r' && count<NAMELENMAX && ++count);
			buf[count]=0;
			newline(ppszB1global);
			SetDlgItemText(hdlg,IDGETSTRING,buf);
		}
		return TRUE;
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDTERMINATERUN:
			EndDialog(hdlg,3);
			return 0;
			break;

		case IDOK:
		case IDCANCEL:
			{
				GetDlgItemText(hdlg,IDGETSTRING,name,NAMELENMAX);
				EndDialog(hdlg,TRUE);
				return TRUE;
			}
			break;
		}
	}
	return FALSE;
}

static LRESULT CALLBACK ListSelectDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{

	case WM_INITDIALOG:
		{
			char* name=(char*)lParam;
			char buf[NAMELENMAX+1];
			char* pszbufend=&buf[NAMELENMAX];
			SetDlgItemText(hdlg,IDTEXT,name);
			while(**ppszB1global!='@'){
				char* pszbuf=buf;
				while(pszbuf<pszbufend&&**ppszB1global!='\r'&&**ppszB1global!='@'){
					*pszbuf++=*(*ppszB1global)++;
				}
				if(**ppszB1global=='\r')*ppszB1global+=2;
				*pszbuf=0;
				SendDlgItemMessage(hdlg,IDLIST1,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)buf);
			}
			keyword kwrd=getKeyword(*ppszB1global);
			if(kwrd!=endlist)MessageBox(hdlg,"want have @endlist after @list","cwiz",0);
			else newline(ppszB1global);
		}
		return TRUE;
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDTERMINATERUN:
			EndDialog(hdlg,3);
			return 0;
			break;

		case IDOK:
			{
				int count=SendDlgItemMessage(hdlg,IDLIST2,LB_GETCOUNT,0,0);
				if(count==0){
					strcpy(listbuffer[0],"\"not selected\"");
					listbuffer[1][0]=0;
					EndDialog(hdlg,TRUE);
					return TRUE;
				}
				int i=0;
				for(i=0;i<count&&i<LISTLENMAX;i++){
					int len=SendDlgItemMessage(hdlg,IDLIST2,LB_GETTEXTLEN,i,0);
					if(len<NAMELENMAX){
						SendDlgItemMessage(hdlg,IDLIST2,LB_GETTEXT,i,(LPARAM)(LPCTSTR)listbuffer[i]);
					}
				}
				listbuffer[i][0]=0;
				EndDialog(hdlg,TRUE);
				return TRUE;
			}
			break;
		case IDCANCEL:
			strcpy(listbuffer[0],"\"not selected\"");
			listbuffer[1][0]=0;
			EndDialog(hdlg,TRUE);
			return TRUE;
			break;
		case IDLIST1:
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
				{
					int select=SendDlgItemMessage(hdlg,IDLIST1,LB_GETCURSEL, 0, 0);
					SendDlgItemMessage(hdlg,IDLIST1,LB_GETTEXT,(WPARAM)select,(LPARAM)(LPCTSTR)pszname);
					SendDlgItemMessage(hdlg,IDLIST2,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)pszname);
				}
				return TRUE;
			}
			return TRUE;

			break;
		case IDLIST2:
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
				{
					int select=SendDlgItemMessage(hdlg,IDLIST2,LB_GETCURSEL, 0, 0);
					SendDlgItemMessage(hdlg,IDLIST2,LB_DELETESTRING,(WPARAM)select,0);
				}
				return TRUE;
			}
			return TRUE;

			break;
		case IDSELECTALL:
			{
				int i=SendDlgItemMessage(hdlg,IDLIST1,LB_GETCOUNT,0,0);
				for(int select=0;select<i;select++){
					SendDlgItemMessage(hdlg,IDLIST1,LB_GETTEXT,(WPARAM)select,(LPARAM)(LPCTSTR)pszname);
					SendDlgItemMessage(hdlg,IDLIST2,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)pszname);
				}
			}
			break;
		case IDSELECTNONE:
			{
				int i=SendDlgItemMessage(hdlg,IDLIST2,LB_GETCOUNT,0,0);
				for(int select=0;select<i;select++){
					SendDlgItemMessage(hdlg,IDLIST2,LB_DELETESTRING,0,0);
				}
			}
			break;

		}
	}
	return FALSE;
}
int getString(void){
	int ret=DialogBox(hinst, MAKEINTRESOURCE(DLG_GETSTRING), hMainDlg, (DLGPROC)GetStringDlgProc);
	if(ret==3)longjmp(label1,1);
	return ret;
}
int getList(char* text){
	int ret= DialogBoxParam(hinst, MAKEINTRESOURCE(DLG_LISTSELECT), hMainDlg, (DLGPROC)ListSelectDlgProc,(LPARAM)text);
	if(ret==3)longjmp(label1,1);
	return ret;
}
int getInt(void){
	int ret= DialogBox(hinst, MAKEINTRESOURCE(DLG_GETINT), hMainDlg, (DLGPROC)GetIntDlgProc);
	if(ret==-3)longjmp(label1,1);
	return ret;
}
void filllist(HWND hdlg,int idlist){

	int dLine=0;
	int dItem=0;
	char* pszB=buffer;
	memset(items,0,sizeof(items));
	while(*pszB!=0){
		if(*pszB=='\n')dLine++;
		if(*pszB=='@' && dItem<ITEMMAX){
			if (getKeyword(pszB)==item){

				if(dItem>0)items[dItem-1].pChar2=pszB-1;
				int count=0;
				pszB+=5;
				while(count<NAMELENMAX && *pszB!='\r' && *pszB!=0){
					*(items[dItem].szName+count++)=*pszB++;
				}
				newline(&pszB);
				dLine++;
				items[dItem].dLine=dLine;
				*(items[dItem].szName+count)=0;
				items[dItem].pChar1=pszB;
				dItem++;
				continue;
			}
			if (getKeyword(pszB)==unknown){
				sprintf(buffer2,"unknown keyword %.20s ...\r\n\r\n"
					    "in line  %d \r\n\r\n"
					    "in file %s",pszB,dLine,pszPathOfTextFile);
				MessageBox(hdlg,buffer2,"cwizard",0);
				newline(&pszB);
				dLine++;
				continue;
			}
		}
		pszB++;
	}
	if(dItem>0)items[dItem-1].pChar2=--pszB;
	for(int i=0,index=0;*items[i].szName!=0 && i<ITEMMAX;i++){
		if(*items[i].szName=='-'){
			SendDlgItemMessage(hdlg,idlist,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)items[i].szName);
			ListBox_SetItemData(GetDlgItem(hdlg,idlist),index,i);
			index++;
		}
	}
}

void filltree(void){
	TV_INSERTSTRUCT tvins;
	static HTREEITEM hRoot=0,hItem=0;
	int dLine=0;
	int dItem=0;
	char* pszB=buffer;
	memset(items,0,sizeof(items));
	while(*pszB!=0){
		if(*pszB=='\n')dLine++;
		if(*pszB=='@' && dItem<ITEMMAX){
			if (getKeyword(pszB)==item){

				if(dItem>0)items[dItem-1].pChar2=pszB-1;
				int count=0;
				pszB+=5;
				while(count<NAMELENMAX && *pszB!='\r' && *pszB!=0){
					*(items[dItem].szName+count++)=*pszB++;
				}
				newline(&pszB);
				dLine++;
				items[dItem].dLine=dLine;
				*(items[dItem].szName+count)=0;
				items[dItem].pChar1=pszB;
				dItem++;
				continue;
			}
			if (getKeyword(pszB)==unknown){
				sprintf(buffer2,"unknown keyword %.20s ...\r\n\r\n"
					    "in line  %d \r\n\r\n"
					    "in file %s",pszB,dLine,pszPathOfTextFile);
				MessageBox(hMainDlg,buffer2,"cwizard",0);
				newline(&pszB);
				dLine++;
				continue;
			}
		}
		pszB++;
	}
	if(dItem>0)items[dItem-1].pChar2=--pszB;
	TreeView_SelectItem(GetDlgItem(hMainDlg,IDTREEVIEW),0);
  TreeView_DeleteAllItems(GetDlgItem(hMainDlg,IDTREEVIEW));
	for(int i=0,index=0;*items[i].szName!=0 && i<ITEMMAX;i++){
	
			ZeroMemory(&tvins, sizeof(tvins));
			tvins.item.mask = TVIF_TEXT|TVIF_PARAM |TVIF_IMAGE|TVIF_SELECTEDIMAGE;
			tvins.item.lParam=i;
			tvins.item.cchTextMax =NAMELENMAX ;
			tvins.item.iImage=2;
			tvins.item.iSelectedImage=3;
			if(*items[i].szName=='-'){
				hRoot=0;
				tvins.item.iImage=0;
				tvins.item.iSelectedImage=1;
			}
			char* pszname=items[i].szName;
			int count=0;
			while(*(pszname+count)=='-')pszname++;
			tvins.item.pszText = pszname;
			if(0==strncmp(pszname,"HELP",4)){
				hRoot=0;
				tvins.item.iImage=4;
				tvins.item.iSelectedImage=5;
			}
			tvins.hParent=hRoot;
			hItem = TreeView_InsertItem(GetDlgItem(hMainDlg,IDTREEVIEW), &tvins);
			if(*items[i].szName=='-')hRoot=hItem;
			index++;
	}
}

void deleteitem(void){
	char pszb[NAMELENMAX+1];
	char pszb2[NAMELENMAX+256];
	int select=0;
		HWND hWndTV=GetDlgItem(hMainDlg,IDTREEVIEW);
		HTREEITEM hitem=TreeView_GetSelection(hWndTV);
		TV_ITEM tvitem;
		memset(&tvitem,0,sizeof(TV_ITEM));
		tvitem.hItem=hitem;
		tvitem.mask=TVIF_PARAM;
		TreeView_GetItem(hWndTV,&tvitem);
 		select=(int)tvitem.lParam;
		strncpy(pszb,items[select].szName,NAMELENMAX);

	sprintf(pszb2,"Delete this item?\r\n\r\n%s",pszb);
	int mb=MessageBox(hMainDlg,pszb2,"cwizard template tool question",   MB_YESNO | MB_ICONQUESTION | MB_SYSTEMMODAL );
	if(mb==IDNO)return;
	char* bufferT=(char*)malloc(globalbuffersize);
	if (bufferT==NULL){
		MessageBox(hMainDlg,"malloc failed","cwizzard template tool",0);
		return;
	}
	ITEM* pItem=&items[select];
	char* dBegin=(pItem->pChar1-strlen(pszb)-5-2);//-5 is @item
	char* dEnd=(pItem->pChar2);
	char* pszbuffer=buffer;
	char* pszbufferT=bufferT;
	while (pszbuffer<dBegin)*pszbufferT++=*pszbuffer++;
	pszbuffer=dEnd+1;
	while ((pszbufferT<bufferT+globalbuffersize)&&(*pszbufferT++=*pszbuffer++));
	int newsize=pszbufferT-bufferT+2;
	bufferT[newsize-1]=0;
	char* bufferre=realloc(buffer,newsize);
	if (bufferre==NULL){
		MessageBox(hMainDlg,"realloc failed","cwiz tt",0);
		return;
	}
	globalbuffersize=newsize;
	buffer=bufferre;
	memcpy(buffer,bufferT,globalbuffersize);

	free(bufferT);
	globalmadechanges=1;
	filltree();
	return;
}
int checkscript(char* psztext,int size){
	int line=1;
	int errorline=0;
	char message[256]={
		0																																	};
	char pszb[256];
	int error=0;
	int islist=0;
	int isloop=0;
	int islistloop=0;
	int isstring=0;
	int isinlist=1;
	int islistloaded=0;
	char* pszB1=psztext;
	char* pszB1end=psztext+size-1;
	while(pszB1<=pszB1end){
		if(*pszB1=='\r')line++;
		if(*pszB1=='@'){
			keyword kwd=getKeyword(pszB1);
			if( kwd==unknown){
				sprintf(message,"unknown keyword");
				error=1;
				errorline=line;
				break;
			}

			if( kwd==inlist && isinlist){
				sprintf(message,"inlist must be after listloop");
				error=1;
				errorline=line;
				break;
			}
			if( kwd==list && islist){
				sprintf(message,"list after list");
				error=1;
				errorline=line;
				break;
			}
			if( kwd==listloop && islistloop){
				sprintf(message,"listloop after listloop");
				error=1;
				errorline=line;
				break;
			}
			if( kwd==listloop && !islistloaded){
				sprintf(message,"listloop without (list - endlist) before");
				error=1;
				errorline=line;
				break;
			}

			if( kwd==loop && isloop){
				sprintf(message,"loop after loop");
				error=1;
				errorline=line;
				break;
			}


			if( kwd==endlist && !islist){
				sprintf(message,"endlist without list");
				error=1;
				errorline=line;
				break;
			}
			if( kwd==endlistloop && !islistloop){
				sprintf(message,"endlistloop without listloop");
				error=1;
				errorline=line;
				islistloop=0;
				break;
			}
			if(kwd==endlistloop && isinlist){
				sprintf(message,"no inlist between (listloop - endlistloop)");
				error=1;
				errorline=line;
				break;
			}
			if( kwd==endloop && !isloop){
				sprintf(message,"endloop without loop");
				error=1;
				errorline=line;
				isloop=0;
				break;
			}
			if(kwd==instring && isstring==0){
				sprintf(message,"instring without getstring");
				error=1;
				errorline=line;
				break;
			}

			if(kwd==list)islist=1;
			if(kwd==loop)isloop=1;
			if(kwd==listloop){
				islistloop=1;
				isinlist=0;
			}
			if(kwd==getstring)isstring=1;

			if(kwd==endlist){
				islist=0;
				islistloaded=1;
			}
			if(kwd==endloop)isloop=0;
			if(kwd==endlistloop)islistloop=0;
			if(kwd==endlistloop && isinlist){
				isinlist=1;
			}
		}
		pszB1++;
	}
	if(error==0&&islist==1){
		sprintf(message,"list without endlist");
		error=1;
		errorline=line;
	}
	if(error==0&&isloop==1){
		sprintf(message,"loop without endloop");
		error=1;
		errorline=line;
	}
	if(error==0&&islistloop==1){
		sprintf(message,"listloop without endlistloop");
		error=1;
		errorline=line;
	}
	if(error){
		sprintf(pszb,"in line %d: \r\n\r\n%s",errorline,message);
		MessageBox(hMainDlg,pszb,"cwizard interpreter error found:",   MB_OK | MB_ICONERROR | MB_APPLMODAL );
	}
	if(error>0)error=pszB1-psztext+1;
	return error;
}
void writeregstring(char* pszKey,char* lpValuename,char* pszValue){

	HKEY  hKey=0;
	DWORD cbValue;
	DWORD dwType;
	char  szCurrentKey[128];

	lstrcpy(szCurrentKey,key);
	lstrcat(szCurrentKey, pszKey);


	dwType = REG_OPENED_EXISTING_KEY;

	if (RegCreateKeyEx(HKEY_CURRENT_USER, szCurrentKey, 0, 0,
		REG_OPTION_NON_VOLATILE, KEY_WRITE,
		0, &hKey, &dwType) > ERROR_SUCCESS){
		dwType = REG_CREATED_NEW_KEY;
		RegCreateKeyEx(HKEY_CURRENT_USER, szCurrentKey, 0, 0,
			REG_OPTION_NON_VOLATILE, KEY_WRITE,
			0,&hKey, &dwType);
	}

	if(hKey){
		cbValue = strlen(pszValue)+1;
		RegSetValueEx(hKey, lpValuename, 0, REG_SZ,(const unsigned char*) pszValue, cbValue);
		RegCloseKey(hKey);
	}
}
int getregstring(char* pszKey,char* lpValuename,char* pszReturnBuffer){

	HKEY hKey=0;
	char  szCurrentKey[128];
	unsigned long cbReturnBuffer=REGBUFLEN;

	lstrcpy(szCurrentKey,key);
	lstrcat(szCurrentKey, pszKey);

	if (RegOpenKeyEx(HKEY_CURRENT_USER, szCurrentKey, 0, KEY_QUERY_VALUE,
		&hKey) == ERROR_SUCCESS){


		if(RegQueryValueEx(hKey, lpValuename, 0,0,(unsigned char*) pszReturnBuffer,
			&cbReturnBuffer)==ERROR_SUCCESS){
			RegCloseKey(hKey);
			return 1;
		}
	}
	return 0;
}
int GetFileName(char *buffer)
{
	char szinitial [MAX_PATH];
	strncpy(szinitial,buffer,MAX_PATH);
	char tmpfilter[40];
	static char customfilter[128]="";

	int i = 0;

	strcpy(tmpfilter,"Help Files,*.hlp");
	while(tmpfilter[i]) {
		if (tmpfilter[i] == ',')
			tmpfilter[i] = 0;
		i++;
	}
	tmpfilter[i++] = 0;
	tmpfilter[i++] = 0;

	OPENFILENAME ofn;

	memset(&ofn,0,sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = GetActiveWindow();
	ofn.hInstance = GetModuleHandle(NULL);
	ofn.lpstrFilter = tmpfilter;
	ofn.lpstrCustomFilter= customfilter;
	ofn.nMaxCustFilter = 128;
	ofn.nFilterIndex = 1;
	ofn.lpstrFile = buffer;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrFileTitle=0;
	ofn.nMaxFileTitle=256;
	ofn.lpstrInitialDir=szinitial;
	ofn.lpstrTitle = "*** cwiz Help File Path ***, will be saved in registry.";
	ofn.Flags = 0;
	ofn.lpstrDefExt = "hlp";

	buffer[0]=0;
	int n;
	n= GetSaveFileName(&ofn);
	int f=CommDlgExtendedError();
	if(f==FNERR_BUFFERTOOSMALL)MessageBox(0,"FNERR_BUFFERTOOSMALL","",MB_SYSTEMMODAL);
	if(f==FNERR_INVALIDFILENAME)MessageBox(0,"FNERR_INVALIDFILENAME","",MB_SYSTEMMODAL);
	if(f==FNERR_SUBCLASSFAILURE	)MessageBox(0,"FNERR_SUBCLASSFAILURE","",MB_SYSTEMMODAL);

	return n;
}
void findhelpkwd(void){
	char bufT[BUFMAX];
	char* buf=bufT;
	GetDlgItemText(hMainDlg,IDTEXT,buf,BUFMAX);
	while(*buf!=0){
		if(*buf=='@'){
			keyword kw=getKeyword(buf);
			if(kw==helpkwd){
				char* pszb=name;
				pszb[0]=0;
				buf+=8; //passing @helpkwd
				while(*buf!=0&&*buf++!='\r'&&pszb<psznameend)*pszb++=*buf;
				if(pszb>name)*--pszb=0;
				strncpy(globalhelpkwd,name,NAMELENMAX);
				SetDlgItemText(hMainDlg,IDHELPTEXT,name);
			}
		}
		buf++;
	}
}
static LRESULT CALLBACK ConvertDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	SendDlgItemMessage(hdlg,IDTEXT,EM_SETLIMITTEXT,65000,0);
	switch (uMsg)
	{
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDSHOWCLIP:
			{
				char* string=NULL;
				paste(&string);
				SetDlgItemText(hdlg,IDTEXT,string);
				free(string);
			}
			break;
		case IDLIST:
			{
				switch (HIWORD(wParam))
				{
				case LBN_SELCHANGE:
					{
						int select=SendDlgItemMessage(hdlg,IDLIST,LB_GETCURSEL, 0, 0);
						SetDlgItemText(hdlg,IDTEXT,converts[select].description);
					}
					return TRUE;
				}
			}
			break;
		case IDOK:
			{
				int select=SendDlgItemMessage(hdlg,IDLIST,LB_GETCURSEL, 0, 0);
				if(select==-1){
					MessageBox(hdlg,"You must select a conversion before.","cwizTT:",MB_ICONEXCLAMATION);
					return 0;
				}
				char* string=NULL;
				//paste
				int error=paste(&string);//this allocates for string

				if(error==1)return 0;

				//convert
				char* stringDest=(char*)malloc(BUFMAX);
				if(stringDest==NULL){
					MessageBox(hdlg,"debug1 malloc failed","",0);
					return 0;
				}
				memset(stringDest,0,BUFMAX);
				if(0==converts[select].pfunc(stringDest,string)){
					//copy
					int size=strlen(stringDest)+1;
					if (OpenClipboard(NULL))
					{
						HGLOBAL hCopy = GlobalAlloc(GMEM_SHARE, size);
						if (hCopy != INVALID_HANDLE_VALUE){
							LPVOID lpCopy = GlobalLock(hCopy);
							EmptyClipboard();
							memcpy((LPBYTE)lpCopy,(LPBYTE)stringDest,size);
							SetClipboardData(CF_TEXT,hCopy);
							GlobalUnlock(hCopy);
						}
						else MessageBox(hdlg,"Error: invalid handle value at globalalloc","",0);
						CloseClipboard();
					}
					else{
						MessageBox(hdlg,"cannot open clipboard.","",0);
						error=1;
					}
					if(error==0){
						MessageBox(hdlg,"Converted clipboard successfully."
							    "\r\n\r\nNow you can paste it to whereever you want.",
							"convclip:",0);
					}
				}
				free(string);
				free(stringDest);
				return TRUE;
			}
		case IDCANCEL:
			{
				EndDialog(hdlg,0);
				return TRUE;
			}
		}
		return FALSE;
	case WM_INITDIALOG:
		{
			for(int n=0;n<NCONVERT;n++){
				ListBox_AddString(GetDlgItem(hdlg,IDLIST),converts[n].title);
			}
		}
		return FALSE;
	}
	return FALSE;
}
void gettemplatestring(char** ppszB2,char** ppszB1,char* pszb1end,BOOL exec){
	if(setjmp(label1)>0){
		char pszm[]="\r\n\"run terminated\"";
		if((*ppszB2+strlen(pszm)+1)<buffer2end){
			strcpy(*ppszB2,pszm);
			*ppszB2+=strlen(pszm);
		}
	}
	else
	    while(*ppszB1<=pszb1end){
		if(**ppszB1=='@'&&exec){
			execKeyword(ppszB2,ppszB1);
			continue;
		}
		if(*ppszB2<buffer2end)*(*ppszB2)++=*(*ppszB1)++;
		else break;
	}
	**ppszB2=0;
}
int convFLtoS(char* lpszdestination,char* lpszsource){
	lpszdestination[0]=0;
	char* lpszdest=lpszdestination;
	char* lpszsrc=lpszsource;
	char* lpszEnd=lpszsource+strlen(lpszsource);
	if(lpszEnd==lpszsource)return 0;
	strcpy(lpszdest,"@list\r\n\0");
	lpszdest=lpszdestination+strlen(lpszdestination);
	int words=0;
	while(lpszsrc<lpszEnd){
		if(isalnum(*lpszsrc))words++;
		while((isalnum(*lpszsrc)||*lpszsrc=='_')&&lpszsrc<lpszEnd){
			if(words==1)*lpszdest++=*lpszsrc++;
			else lpszsrc++;
		}
		if(*lpszsrc=='\r'){
			*lpszdest++='\r';
		}
		else if(*lpszsrc=='\n'){
			*lpszdest++='\n';
			words=0;
		}
		lpszsrc++;
	}
	strcpy(lpszdest,"@endlist\r\n@listloop\r\n@inlist | @endlistloop\r\n@delete2,\r\n\0");
	lpszdest=lpszdestination+strlen(lpszdestination);
	*lpszdest=0;
	return 0;
}

int convStrtoInitStr(char* lpszdestination,char* lpszsource){
	lpszdestination[0]=0;
	char* lpszdest=lpszdestination;
	char* lpszdestEnd=lpszdestination+BUFMAX-20;
	char* lpszsrc=lpszsource;
	char* lpszEnd=lpszsource+strlen(lpszsource);
	if(lpszEnd==lpszsource)return 0;
	int newline=1;
	while(lpszsrc<=lpszEnd && lpszdest<lpszdestEnd){
		if(newline){
			strcpy(lpszdest++,"\"");
			newline=0;
		}
		if(*lpszsrc=='"'){
			strcpy(lpszdest,"\\\"");
			lpszsrc+=1;
			lpszdest+=2;
			continue;
		}
		if(*lpszsrc=='\r' || *lpszsrc==0){
			strcpy(lpszdest,"\\r\\n\"\r\n");
			lpszsrc+=2;
			lpszdest+=7;
			newline=1;
			continue;
		}
		if(*lpszsrc=='\t'){
			strcpy(lpszdest,"\\t");
			lpszsrc+=1;
			lpszdest+=2;
			continue;
		}
		if(*lpszsrc=='\\'){
			strcpy(lpszdest,"\\\\");
			lpszsrc+=1;
			lpszdest+=2;
			continue;
		}

		*lpszdest++=*lpszsrc++;
	}
	*lpszdest=0;
	return 0;
}

int	convFunctoS(char* lpszdestination,char* lpszsource){
	lpszdestination[0]=0;
	char* lpszEnd=lpszsource+strlen(lpszsource);
	if(lpszEnd==lpszsource)return 0;
	char* lpszdest=lpszdestination;
	char* lpszsrc=lpszsource;
	int words=0;
	int open=0;
	while(lpszsrc<lpszEnd){
		if(isalnum(*lpszsrc)||*lpszsrc=='_'){
			words++;
			if(words==2&&open==2){
				*lpszdest++='@';
				*lpszdest++='"';
			}
		}
		while((isalnum(*lpszsrc)||*lpszsrc=='_')&&lpszsrc<lpszEnd){
			if(words==2)*lpszdest++=*lpszsrc++;
			else lpszsrc++;
		}
		if(*lpszsrc=='\r'){
			if(open==2&&words>=2)*lpszdest++='\"';
			*lpszdest++='\r';
		}
		if(*lpszsrc=='\n'){
			*lpszdest++='\n';
			words=0;
			if(open==1)open=2;
		}
		if(*lpszsrc=='('){
			*lpszdest++='(';
			open=1;
		}
		if(*lpszsrc==')'){
			*lpszdest++=')';
		}
		lpszsrc++;
	}
	*lpszdest=0;
	return 0;
}
int	convStructtoC(char* lpszdestination,char* lpszsource){
	strcpy(name,"Name of Struct");
	char structname[NAMELENMAX+1];
	if(DialogBox(hinst,MAKEINTRESOURCE(DLG_INSTRING), hMainDlg, (DLGPROC)InStringDlgProc)){
		MessageBox(hMainDlg,"Clipboard content not chanched","cWizzard info:",0);
		return 1;
	}
	strncpy(structname,name,NAMELENMAX);
	lpszdestination[0]=0;
	char* lpszEnd=lpszsource+strlen(lpszsource);
	if(lpszEnd==lpszsource)return 0;
	char* lpszdest=lpszdestination;
	char* lpszsrc=lpszsource;
	int words=0;
	while(lpszsrc<lpszEnd){
		if(isalnum(*lpszsrc)||*lpszsrc=='_'){
			words++;
			if(words==2){
				strcat(lpszdest,structname);
				lpszdest+=strlen(structname);
				*lpszdest++='.';
			}
		}
		while((isalnum(*lpszsrc)||*lpszsrc=='_')&&lpszsrc<lpszEnd){
			if(words==2)*lpszdest++=*lpszsrc++;
			else lpszsrc++;
		}
		if(*lpszsrc=='\r'){
			if(words>=2){
				char szS[]="=   ;";
				strcat(lpszdest,szS);
				lpszdest+=strlen(szS);
			}
			*lpszdest++='\r';
		}
		if(*lpszsrc=='\n'){
			*lpszdest++='\n';
			words=0;
		}
		lpszsrc++;
	}
	*lpszdest=0;
	return 0;
}
int	convDelOneWord(char* lpszdestination,char* lpszsource){
	lpszdestination[0]=0;
	char* lpszEnd=lpszsource+strlen(lpszsource);
	if(lpszEnd==lpszsource)return 0;
	char* lpszdest=lpszdestination;
	char* lpszsrc=lpszsource;
	int words=0;
	strncpy(name,"Which word of each line delete? (first, second..)",NAMELENMAX)	;
	int delword= DialogBox(hinst, MAKEINTRESOURCE(DLG_GETINT), hMainDlg, (DLGPROC)GetIntDlgProc);
	while(lpszsrc<lpszEnd){
		if(isalnum(*lpszsrc)||ispunct(*lpszsrc)){
			words++;
		}
		while((isalnum(*lpszsrc)||ispunct(*lpszsrc))&&lpszsrc<lpszEnd){
			if(words!=delword)*lpszdest++=*lpszsrc++;
			else lpszsrc++;
		}
		if((*lpszdest++=*lpszsrc++)=='\n')words=0;
	}
	*lpszdest=0;
	return 0;
}
int paste(char** ppszstring){
	// this function reallocates for string, but does not free
	int error=0;
	if(OpenClipboard(0))
	{
		HANDLE hCopy = GetClipboardData(CF_TEXT);

		if (hCopy > (HANDLE)NULL)
		{
			LPVOID lpCopy = GlobalLock(hCopy);
			size_t size = (size_t)GlobalSize(hCopy);
			*ppszstring=(char*)realloc(*ppszstring,size);
			if(*ppszstring!=NULL){
				memcpy(*ppszstring,lpCopy,size);
			}
			else{
				MessageBox(hMainDlg,"realloc failed","paste:",MB_SYSTEMMODAL);
				error=1;
			}
			GlobalUnlock(hCopy);
		}
		else{
			MessageBox(0,"data cannot be copied.","paste:",MB_SYSTEMMODAL);
			error=1;
		}
		CloseClipboard();
	}
	else{
		MessageBox(0,"clipboard cannot be opened.","paste:",MB_SYSTEMMODAL);
		error=1;
	}
	return error;
}
static LRESULT CALLBACK InStringDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDOK:
			{
				GetDlgItemText(hdlg,IDTEXT,name,NAMELENMAX);
				EndDialog(hdlg,0);
				return TRUE;
			}
		case IDCANCEL:
			{
				EndDialog(hdlg,1);
				return TRUE;
			}
		}
		return FALSE;
	case WM_SHOWWINDOW:
		SetFocus(GetDlgItem(hdlg,IDTEXT));
		Edit_SetSel(GetDlgItem(hdlg,IDTEXT),0,-1);
		return FALSE;
	case WM_INITDIALOG:
		{
			SetDlgItemText(hdlg,IDTEXT,name);
		}
		return FALSE;
	}
	return FALSE;
}
static LRESULT CALLBACK AsciiDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDOK:
			{
				return TRUE;
			}
		case IDCANCEL:
			{
				EndDialog(hdlg,0);
				return TRUE;
			}
		}
		return FALSE;
	case WM_SIZE:
		MoveWindow(GetDlgItem(hdlg,IDTEXT),0,0,LOWORD(lParam),HIWORD(lParam),TRUE);
		return TRUE;

	case WM_INITDIALOG:
		{
			SetDlgItemText(hdlg,IDTEXT,
				"000   (nul)   016  (dle)   032 sp   048 0   064 @   080 P   096 `   112 p\r\n"
				    "001  (soh)   017  (dc1)   033 !    049 1   065 A   081 Q   097 a   113 q\r\n"
				    "002  (stx)   018  (dc2)   034 \"    050 2   066 B   082 R   098 b   114 r\r\n"
				    "003  (etx)   019  (dc3)   035 #    051 3   067 C   083 S   099 c   115 s\r\n"
				    "004  (eot)   020 ¶ (dc4)   036 $    052 4   068 D   084 T   100 d   116 t\r\n"
				    "005  (enq)   021 § (nak)   037 %    053 5   069 E   085 U   101 e   117 u\r\n"
				    "006  (ack)   022  (syn)   038 &    054 6   070 F   086 V   102 f   118 v\r\n"
				    "007  (bel)   023  (etb)   039 '    055 7   071 G   087 W   103 g   119 w\r\n"
				    "008  (bs)    024  (can)   040 (    056 8   072 H   088 X   104 h   120 x\r\n"
				    "009   (tab)   025  (em)    041 )    057 9   073 I   089 Y   105 i   121 y\r\n"
				    "010   (lf)    026   (eof)   042 *    058 :   074 J   090 Z   106 j   122 z\r\n"
				    "011  (vt)    027   (esc)   043 +    059 ;   075 K   091 [   107 k   123 {\r\n"
				    "012  (np)    028  (fs)    044 ,    060 <   076 L   092 \\   108 l   124 |\r\n"
				    "013   (cr)    029  (gs)    045 -    061 =   077 M   093 ]   109 m   125 }\r\n"
				    "014  (so)    030  (rs)    046 .    062 >   078 N   094 ^   110 n   126 ~\r\n"
				    "015 ¤ (si)    031  (us)    047 /    063 ?   079 O   095 _   111 o   127 \r\n"
				    "\r\n"
				    "143 Å   158 ×   172 ¼   186 ¦   200 +   214 Í   228 õ   242 _\r\n"
				    "144 É   159 ƒ   173 ¡   187 +   201 +   215 Î   229 Õ   243 ¾\r\n"
				    "145 æ   160 á   174 «   188 +   202 -   216 Ï   230 µ   244 ¶\r\n"
				    "146 Æ   161 í   175 »   189 ¢   203 -   217 +   231 þ   245 §\r\n"
				    "147 ô   162 ó   176 _   190 ¥   204 ¦   218 +   232 Þ   246 ÷\r\n"
				    "148 ö   163 ú   177 _   191 +   205 -   219 _   233 Ú   247 ¸\r\n"
				    "149 ò   164 ñ   178 _   192 +   206 +   220 _   234 Û   248 °\r\n"
				    "150 û   165 Ñ   179 ¦   193 -   207 ¤   221 ¦   235 Ù   249 ¨\r\n"
				    "151 ù   166 ª   180 ¦   194 -   208 ð   222 Ì   236 ý   250 ·\r\n"
				    "152 ÿ   167 º   181 Á   195 +   209 Ð   223 _   237 Ý   251 ¹\r\n"
				    "153 Ö   168 ¿   182 Â   196 -   210 Ê   224 Ó   238 ¯   252 ³\r\n"
				    "154 Ü   169 ®   183 À   197 +   211 Ë   225 ß   239 ´   253 ²\r\n"
				    "155 ø   170 ¬   184 ©   198 ã   212 È   226 Ô   240 ­   254 _\r\n"
				    "156 £   171 ½   185 ¦   199 Ã   213 i   227 Ò   241 ±   255\r\n"
				    "157 Ø\r\n"
				    "\r\n");
		}
		return FALSE;
	}
	return FALSE;
}
static LRESULT CALLBACK TestFunctionDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static HWND hwndex;
	switch (uMsg)
	{
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDSENDMESSAGE:
			{

				LPARAM lparam=(LPARAM)hwndex;
				if(hwndex==0){
					lparam=(LPARAM)GetDlgItemInt(hdlg,IDWNDPARENT,NULL,FALSE);
				}
				DialogBoxParam(hinst, MAKEINTRESOURCE(DLG_SENDMESSAGE), 0, (DLGPROC)SendMessageDlgProc,lparam);
				break;
			}
		case IDSTYLELIST:
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
				{
					int select=SendDlgItemMessage(hdlg,IDSTYLELIST,LB_GETCURSEL, 0, 0);
					SendDlgItemMessage(hdlg,IDSTYLELIST,LB_GETTEXT,(WPARAM)select,(LPARAM)(LPCTSTR)pszname);
					SendDlgItemMessage(hdlg,IDSTYLESELECTED,LB_ADDSTRING,0,(LPARAM)(LPCTSTR)pszname);

					int count=SendDlgItemMessage(hdlg,IDSTYLESELECTED,LB_GETCOUNT,0,0);
					int data=SendDlgItemMessage(hdlg,IDSTYLELIST,LB_GETITEMDATA,(WPARAM)select,0);
					SendDlgItemMessage(hdlg,IDSTYLESELECTED,LB_SETITEMDATA,count-1,(LPARAM)(LPCTSTR)data);

				}
				return TRUE;
			}
			return TRUE;

			break;
		case IDSTYLESELECTED:
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
				{
					int select=SendDlgItemMessage(hdlg,IDSTYLESELECTED,LB_GETCURSEL, 0, 0);
					SendDlgItemMessage(hdlg,IDSTYLESELECTED,LB_DELETESTRING,(WPARAM)select,0);
				}
				return TRUE;
			}
			return TRUE;

			break;
		case IDTESTWINDOW:
			{
				WNDCLASS wc;

				wc.lpszClassName = _T("winClass");
				wc.lpfnWndProc = TestWndProc;
				wc.style = CS_OWNDC|CS_VREDRAW|CS_HREDRAW;
				wc.hInstance = hinst;
				wc.hIcon =NULL,
				wc.hCursor = NULL;
				wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
				wc.lpszMenuName =NULL;
				wc.cbClsExtra = 0;
				wc.cbWndExtra = 0;

				RegisterClass(&wc);

				hwndtest = CreateWindow(_T("winClass"),
					_T("win Program"),
					WS_OVERLAPPEDWINDOW|WS_HSCROLL|WS_VSCROLL,
					0,
					0,
					CW_USEDEFAULT,
					CW_USEDEFAULT,
					NULL,
					NULL,
					hinst,
					NULL
					    );
				if (!hwndtest) return 1;
				char text[1024];
				sprintf(text,"%d is the HWND of this window. For use as Parent Window for CreateWindowEx. cWiz.",hwndtest);
				SetWindowText(hwndtest,text);
				ShowWindow(hwndtest, SW_SHOW);
				UpdateWindow(hwndtest);

				SetDlgItemInt(hdlg,IDWNDPARENT,(UINT)hwndtest,FALSE);
				break;
			}
		case IDOK:
			{
				DWORD dwcursel=ComboBox_GetCurSel(GetDlgItem(hdlg,IDEXSTYLE));
				DWORD dwexstyle=ComboBox_GetItemData(GetDlgItem(hdlg,IDEXSTYLE),dwcursel);
				char pszclassname[NAMELENMAX+1]={
					0																																};
				ComboBox_GetText(GetDlgItem(hdlg,IDCLASSNAME),pszclassname,NAMELENMAX);
				int nstyles=ListBox_GetCount(GetDlgItem(hdlg,IDSTYLESELECTED));
				DWORD dwstyle=0;
				for(int n=0;n<nstyles;n++){
					dwstyle|=ListBox_GetItemData(GetDlgItem(hdlg,IDSTYLESELECTED),n);
				}

				hwndex=CreateWindowEx(
					dwexstyle,
					pszclassname,
					"cWizTestWindow",
					dwstyle,
					GetDlgItemInt(hdlg,IDX,NULL,FALSE),
					GetDlgItemInt(hdlg,IDY,NULL,FALSE),
					GetDlgItemInt(hdlg,IDNWIDTH,NULL,FALSE),
					GetDlgItemInt(hdlg,IDNHEIGHT,NULL,FALSE),
					(HWND)GetDlgItemInt(hdlg,IDWNDPARENT,NULL,FALSE),
					0,
					hinst,
					NULL  // pointer to window-creation data
					);
				ShowWindow(hwndex,SW_SHOWNORMAL);
				char c[256];
				sprintf(c,"%d (HWND), %s (classname)",(long)hwndex,pszclassname);
				SetWindowText(hwndex,c);
				/*
				HWND	hwndex=CreateWindowEx(
				0,
				"BUTTON",
				"okbutton",
				BS_PUSHBUTTON | WS_CHILD ,
				0, //x
				0, //y
				200, //nWidth
				50, //nHeight
				hMainDlg,
				NULL,
				hinst,
				NULL  // pointer to window-creation data
				);
				ShowWindow(hwndex,SW_SHOWNORMAL);
				SetWindowText(hwndex,"Vorschau beenden");*/



				char text[1024];
				sprintf(text,"HWND of last created Window: %d: ",hwndex);
				SetDlgItemText(hdlg,IDHWND,text);
				return TRUE;
			}
		case IDCANCEL:
			{
				EndDialog(hdlg,0);
				return TRUE;
			}
		}
		return FALSE;
	case WM_INITDIALOG:
		{
			hwndex=0;
			{
				int nflags=22;
				struct flag{
					char* name;
					DWORD flag;
				};
				struct flag flags[]=
				    {
					"no style selected",0,

					"WS_EX_ACCEPTFILES" 		,WS_EX_ACCEPTFILES,
					"WS_EX_APPWINDOW" 		,WS_EX_APPWINDOW,
					"WS_EX_CLIENTEDGE" 		,WS_EX_CLIENTEDGE,
					"WS_EX_CONTEXTHELP" 		,WS_EX_CONTEXTHELP,
					"WS_EX_CONTROLPARENT" 		,WS_EX_CONTROLPARENT,

					"WS_EX_DLGMODALFRAME" 		,WS_EX_DLGMODALFRAME,
					"WS_EX_LEFT" 		,WS_EX_LEFT,
					"WS_EX_LEFTSCROLLBAR" 		,WS_EX_LEFTSCROLLBAR,
					"WS_EX_LTRREADING" 		,WS_EX_LTRREADING,
					"WS_EX_MDICHILD" 		,WS_EX_MDICHILD,

					"WS_EX_NOPARENTNOTIFY" 		,WS_EX_NOPARENTNOTIFY,
					"WS_EX_OVERLAPPEDWINDOW" 		,WS_EX_OVERLAPPEDWINDOW,
					"WS_EX_PALETTEWINDOW" 		,WS_EX_PALETTEWINDOW,
					"WS_EX_RIGHT" 		,WS_EX_RIGHT,
					"WS_EX_RIGHTSCROLLBAR" 		,WS_EX_RIGHTSCROLLBAR,

					"WS_EX_RTLREADING" 		,WS_EX_RTLREADING,
					"WS_EX_STATICEDGE" 		,WS_EX_STATICEDGE,
					"WS_EX_TOOLWINDOW" 		,WS_EX_TOOLWINDOW,
					"WS_EX_TOPMOST" 			,WS_EX_TOPMOST,
					"WS_EX_TRANSPARENT" 		,WS_EX_TRANSPARENT,

					"WS_EX_WINDOWEDGE" 		,WS_EX_WINDOWEDGE
				};
				HWND hListBox=GetDlgItem(hdlg,IDEXSTYLE);
				for(int n=0;n<nflags;n++){
					ComboBox_InsertString(hListBox,n,flags[n].name);
					ComboBox_SetItemData(hListBox,n,flags[n].flag);
				}
			}
			{
				int nflags=30;
				char* flags[]=
				    {
					"BUTTON" ,
					"COMBOBOX" ,
					"EDIT" ,
					"LISTBOX" ,
					"MDICLIENT" ,

					"SCROLLBAR" ,
					"STATIC",
					WC_HEADER,
					WC_LISTVIEW,
					WC_TREEVIEW,

					WC_COMBOBOXEX,
					WC_TABCONTROL,
					WC_IPADDRESS,
					WC_PAGESCROLLER,
					WC_NATIVEFONTCTL,

					WC_BUTTON,
					WC_STATIC,
					WC_EDIT,
					WC_LISTBOX,
					WC_COMBOBOX,

					WC_SCROLLBAR,
					"SysLink",
					TRACKBAR_CLASS,
					TOOLTIPS_CLASS,
					UPDOWN_CLASS,

					PROGRESS_CLASS,
					HOTKEY_CLASS,
					ANIMATE_CLASS,
					MONTHCAL_CLASS,
					DATETIMEPICK_CLASS,

				};
				HWND hListBox=GetDlgItem(hdlg,IDCLASSNAME);
				for(int n=0;n<nflags;n++){
					ComboBox_InsertString(hListBox,n,flags[n]);
				}
			}
			{
				int nflags=209-3;//3 undeclared identifiers
				struct flag{
					char* name;
					DWORD flag;
				};
				struct flag flags[]=
				    {
					"WS_BORDER ",WS_BORDER ,
					"WS_CAPTION ",WS_CAPTION ,
					"WS_CHILD ",WS_CHILD ,
					"WS_CHILDWINDOW ",WS_CHILDWINDOW ,
					"WS_CLIPCHILDREN ",WS_CLIPCHILDREN ,
					"WS_CLIPSIBLINGS ",WS_CLIPSIBLINGS ,
					"WS_DISABLED ",WS_DISABLED ,
					"WS_DLGFRAME ",WS_DLGFRAME ,
					"WS_GROUP ",WS_GROUP ,
					"WS_HSCROLL ",WS_HSCROLL ,
					"WS_ICONIC ",WS_ICONIC ,
					"WS_MAXIMIZE ",WS_MAXIMIZE ,
					"WS_MAXIMIZEBOX ",WS_MAXIMIZEBOX ,
					"WS_MINIMIZE ",WS_MINIMIZE ,
					"WS_MINIMIZEBOX ",WS_MINIMIZEBOX ,
					"WS_OVERLAPPED ",WS_OVERLAPPED ,
					"WS_OVERLAPPEDWINDOW ",WS_OVERLAPPEDWINDOW ,
					"WS_POPUP ",WS_POPUP ,
					"WS_POPUPWINDOW ",WS_POPUPWINDOW ,
					"WS_SIZEBOX ",WS_SIZEBOX ,
					"WS_SYSMENU ",WS_SYSMENU ,
					"WS_TABSTOP ",WS_TABSTOP ,
					"WS_THICKFRAME ",WS_THICKFRAME ,
					"WS_TILED ",WS_TILED ,
					"WS_TILEDWINDOW ",WS_TILEDWINDOW ,
					"WS_VISIBLE ",WS_VISIBLE ,
					"WS_VSCROLL ",WS_VSCROLL ,
					"------------only select for BUTTON class-- ",0,
					"BS_3STATE ",BS_3STATE ,
					"BS_AUTO3STATE ",BS_AUTO3STATE ,
					"BS_AUTOCHECKBOX ",BS_AUTOCHECKBOX ,
					"BS_AUTORADIOBUTTON ",BS_AUTORADIOBUTTON ,
					"BS_CHECKBOX ",BS_CHECKBOX ,
					"BS_DEFPUSHBUTTON ",BS_DEFPUSHBUTTON ,
					"BS_GROUPBOX ",BS_GROUPBOX ,
					"BS_LEFTTEXT ",BS_LEFTTEXT ,
					"BS_OWNERDRAW ",BS_OWNERDRAW ,
					"BS_PUSHBUTTON ",BS_PUSHBUTTON ,
					"BS_RADIOBUTTON ",BS_RADIOBUTTON ,
					"BS_USERBUTTON ",BS_USERBUTTON ,
					"BS_BITMAP ",BS_BITMAP ,
					"BS_BOTTOM ",BS_BOTTOM ,
					"BS_CENTER ",BS_CENTER ,
					"BS_ICON ",BS_ICON ,
					"BS_LEFT ",BS_LEFT ,
					"BS_MULTILINE ",BS_MULTILINE ,
					"BS_NOTIFY ",BS_NOTIFY ,
					"BS_PUSHLIKE ",BS_PUSHLIKE ,
					"BS_RIGHT ",BS_RIGHT ,
					"BS_RIGHTBUTTON ",BS_RIGHTBUTTON ,
					"BS_TEXT ",BS_TEXT ,
					"BS_TOP ",BS_TOP ,
					"BS_VCENTER ",BS_VCENTER ,
					"-----------only select for COMBOBOX class----- ",0,
					"CBS_AUTOHSCROLL ",CBS_AUTOHSCROLL ,
					"CBS_DISABLENOSCROLL ",CBS_DISABLENOSCROLL ,
					"CBS_DROPDOWN ",CBS_DROPDOWN ,
					"CBS_DROPDOWNLIST ",CBS_DROPDOWNLIST ,
					"CBS_HASSTRINGS ",CBS_HASSTRINGS ,
					"CBS_LOWERCASE ",CBS_LOWERCASE ,
					"CBS_NOINTEGRALHEIGHT ",CBS_NOINTEGRALHEIGHT ,
					"CBS_OEMCONVERT ",CBS_OEMCONVERT ,
					"CBS_OWNERDRAWFIXED ",CBS_OWNERDRAWFIXED ,
					"CBS_OWNERDRAWVARIABLE ",CBS_OWNERDRAWVARIABLE ,
					"CBS_SIMPLE ",CBS_SIMPLE ,
					"CBS_SORT ",CBS_SORT ,
					"CBS_UPPERCASE ",CBS_UPPERCASE ,
					"---------onlx select for EDIT class----- ",0,
					"ES_AUTOHSCROLL ",ES_AUTOHSCROLL ,
					"ES_AUTOVSCROLL ",ES_AUTOVSCROLL ,
					"ES_CENTER ",ES_CENTER ,
					"ES_LEFT ",ES_LEFT ,
					"ES_LOWERCASE ",ES_LOWERCASE ,
					"ES_MULTILINE ",ES_MULTILINE ,
					"ES_NOHIDESEL ",ES_NOHIDESEL ,
					"ES_NUMBER ",ES_NUMBER ,
					"ES_OEMCONVERT ",ES_OEMCONVERT ,
					"ES_PASSWORD ",ES_PASSWORD ,
					"ES_READONLY ",ES_READONLY ,
					"ES_RIGHT ",ES_RIGHT ,
					"ES_UPPERCASE ",ES_UPPERCASE ,
					"ES_WANTRETURN ",ES_WANTRETURN ,
					"------------only select for LISTBOX class---- ",0,
					"LBS_DISABLENOSCROLL ",LBS_DISABLENOSCROLL ,
					"LBS_EXTENDEDSEL ",LBS_EXTENDEDSEL ,
					"LBS_HASSTRINGS ",LBS_HASSTRINGS ,
					"LBS_MULTICOLUMN ",LBS_MULTICOLUMN ,
					"LBS_MULTIPLESEL ",LBS_MULTIPLESEL ,
					"LBS_NODATA ",LBS_NODATA ,
					"LBS_NOINTEGRALHEIGHT ",LBS_NOINTEGRALHEIGHT ,
					"LBS_NOREDRAW ",LBS_NOREDRAW ,
					"LBS_NOSEL ",LBS_NOSEL ,
					"LBS_NOTIFY ",LBS_NOTIFY ,
					"LBS_OWNERDRAWFIXED ",LBS_OWNERDRAWFIXED ,
					"LBS_OWNERDRAWVARIABLE ",LBS_OWNERDRAWVARIABLE ,
					"LBS_SORT ",LBS_SORT ,
					"LBS_STANDARD ",LBS_STANDARD ,
					"LBS_USETABSTOPS ",LBS_USETABSTOPS ,
					"LBS_WANTKEYBOARDINPUT ",LBS_WANTKEYBOARDINPUT ,
					"------------only select for SCROLLBAR class----- ",0,
					"SBS_BOTTOMALIGN ",SBS_BOTTOMALIGN ,
					"SBS_HORZ ",SBS_HORZ ,
					"SBS_LEFTALIGN ",SBS_LEFTALIGN ,
					"SBS_RIGHTALIGN ",SBS_RIGHTALIGN ,
					"SBS_SIZEBOX ",SBS_SIZEBOX ,
					"SBS_SIZEBOXBOTTOMRIGHTALIGN ",SBS_SIZEBOXBOTTOMRIGHTALIGN ,
					"SBS_SIZEBOXTOPLEFTALIGN ",SBS_SIZEBOXTOPLEFTALIGN ,
					"SBS_SIZEGRIP ",SBS_SIZEGRIP ,
					"SBS_TOPALIGN ",SBS_TOPALIGN ,
					"SBS_VERT ",SBS_VERT ,
					"-------------only select with STATIC class------ ",0,
					"SS_BITMAP ",SS_BITMAP ,
					"SS_BLACKFRAME ",SS_BLACKFRAME ,
					"SS_BLACKRECT ",SS_BLACKRECT ,
					"SS_CENTER ",SS_CENTER ,
					"SS_CENTERIMAGE ",SS_CENTERIMAGE ,
					"SS_GRAYFRAME ",SS_GRAYFRAME ,
					"SS_GRAYRECT ",SS_GRAYRECT ,
					"SS_ICON ",SS_ICON ,
					"SS_LEFT ",SS_LEFT ,
					"SS_LEFTNOWORDWRAP ",SS_LEFTNOWORDWRAP ,
					//					"SS_METAPICT ",SS_METAPICT ,
					"SS_NOPREFIX ",SS_NOPREFIX ,
					"SS_NOTIFY ",SS_NOTIFY ,
					"SS_RIGHT ",SS_RIGHT ,
					//					"SS_RIGHTIMAGE ",SS_RIGHTIMAGE ,
					"SS_SIMPLE ",SS_SIMPLE ,
					"SS_WHITEFRAME ",SS_WHITEFRAME ,
					"SS_WHITERECT ",SS_WHITERECT ,
					"--------------dialog box styles----- ",0,
					"DS_3DLOOK ",DS_3DLOOK ,
					"DS_ABSALIGN ",DS_ABSALIGN ,
					"DS_CENTER ",DS_CENTER ,
					"DS_CENTERMOUSE ",DS_CENTERMOUSE ,
					"DS_CONTEXTHELP ",DS_CONTEXTHELP ,
					"DS_CONTROL ",DS_CONTROL ,
					"DS_FIXEDSYS ",DS_FIXEDSYS ,
					"DS_LOCALEDIT ",DS_LOCALEDIT ,
					"DS_MODALFRAME ",DS_MODALFRAME ,
					"DS_NOFAILCREATE ",DS_NOFAILCREATE ,
					"DS_NOIDLEMSG ",DS_NOIDLEMSG ,
					//					"DS_RECURSE ",DS_RECURSE ,
					"DS_SETFONT ",DS_SETFONT ,
					"DS_SETFOREGROUND ",DS_SETFOREGROUND ,
					"DS_SYSMODAL ",DS_SYSMODAL ,
					"-------------ListView Styles------------",0,
					" LVS_ICON  "	, LVS_ICON  ,
					" LVS_REPORT  "	, LVS_REPORT  ,
					" LVS_SMALLICON  "	, LVS_SMALLICON  ,
					" LVS_LIST  "	, LVS_LIST  ,
					" LVS_TYPEMASK  "	, LVS_TYPEMASK  ,
					" LVS_SINGLESEL  "	, LVS_SINGLESEL  ,
					" LVS_SHOWSELALWAYS  "	, LVS_SHOWSELALWAYS  ,
					" LVS_SORTASCENDING  "	, LVS_SORTASCENDING  ,
					" LVS_SORTDESCENDING  "	, LVS_SORTDESCENDING  ,
					" LVS_SHAREIMAGELISTS  "	, LVS_SHAREIMAGELISTS  ,
					" LVS_NOLABELWRAP  "	, LVS_NOLABELWRAP  ,
					" LVS_AUTOARRANGE  "	, LVS_AUTOARRANGE  ,
					" LVS_EDITLABELS  "	, LVS_EDITLABELS  ,
					" LVS_OWNERDATA  "	, LVS_OWNERDATA  ,
					" LVS_NOSCROLL  "	, LVS_NOSCROLL  ,
					" LVS_TYPESTYLEMASK  "	, LVS_TYPESTYLEMASK  ,
					" LVS_ALIGNTOP  "	, LVS_ALIGNTOP  ,
					" LVS_ALIGNLEFT  "	, LVS_ALIGNLEFT  ,
					" LVS_ALIGNMASK  "	, LVS_ALIGNMASK  ,
					" LVS_OWNERDRAWFIXED  "	, LVS_OWNERDRAWFIXED  ,
					" LVS_NOCOLUMNHEADER  "	, LVS_NOCOLUMNHEADER  ,
					" LVS_NOSORTHEADER  "	, LVS_NOSORTHEADER  ,
					"-------------TreeView Styles------------",0,
					"TVS_HASBUTTONS  ",TVS_HASBUTTONS  ,
					" TVS_HASLINES  ", TVS_HASLINES  ,
					" TVS_LINESATROOT  ", TVS_LINESATROOT  ,
					" TVS_EDITLABELS  ", TVS_EDITLABELS  ,
					" TVS_DISABLEDRAGDROP  ", TVS_DISABLEDRAGDROP  ,
					" TVS_SHOWSELALWAYS  ", TVS_SHOWSELALWAYS  ,
					" TVS_RTLREADING  ", TVS_RTLREADING  ,
					" TVS_NOTOOLTIPS  ", TVS_NOTOOLTIPS  ,
					" TVS_CHECKBOXES  ", TVS_CHECKBOXES  ,
					" TVS_TRACKSELECT  ", TVS_TRACKSELECT  ,
					" TVS_SINGLEEXPAND  ", TVS_SINGLEEXPAND  ,
					" TVS_INFOTIP  ", TVS_INFOTIP  ,
					" TVS_FULLROWSELECT  ", TVS_FULLROWSELECT  ,
					" TVS_NOSCROLL  ", TVS_NOSCROLL  ,
					" TVS_NONEVENHEIGHT  ", TVS_NONEVENHEIGHT  ,
					" TVS_NOHSCROLL  ", TVS_NOHSCROLL,
					"-------------TrackBar Styles------------",0,
					" TBS_AUTOTICKS  ", TBS_AUTOTICKS  ,
					" TBS_VERT  ", TBS_VERT  ,
					" TBS_HORZ  ", TBS_HORZ  ,
					" TBS_TOP  ", TBS_TOP  ,
					" TBS_BOTTOM  ", TBS_BOTTOM  ,
					" TBS_LEFT  ", TBS_LEFT  ,
					" TBS_RIGHT  ", TBS_RIGHT  ,
					" TBS_BOTH  ", TBS_BOTH  ,
					" TBS_NOTICKS  ", TBS_NOTICKS  ,
					" TBS_ENABLESELRANGE  ", TBS_ENABLESELRANGE  ,
					" TBS_FIXEDLENGTH  ", TBS_FIXEDLENGTH  ,
					" TBS_NOTHUMB  ", TBS_NOTHUMB  ,
					" TBS_TOOLTIPS  ", TBS_TOOLTIPS  ,
					"-------------Updown Control Styles------------",0,
					" UDS_WRAP  ", UDS_WRAP  ,
					" UDS_SETBUDDYINT  ", UDS_SETBUDDYINT  ,
					" UDS_ALIGNRIGHT  ", UDS_ALIGNRIGHT  ,
					" UDS_ALIGNLEFT  ", UDS_ALIGNLEFT  ,
					" UDS_AUTOBUDDY  ", UDS_AUTOBUDDY  ,
					" UDS_ARROWKEYS  ", UDS_ARROWKEYS  ,
					" UDS_HORZ  ", UDS_HORZ  ,
					" UDS_NOTHOUSANDS  ", UDS_NOTHOUSANDS  ,
					" UDS_HOTTRACK  ", UDS_HOTTRACK  ,

				};
				HWND hListBox=GetDlgItem(hdlg,IDSTYLELIST);
				for(int n=0;n<nflags;n++){
					ListBox_InsertString(hListBox,n,flags[n].name);
					ListBox_SetItemData(hListBox,n,flags[n].flag);
				}
			}
		}
		return FALSE;
	}
	return FALSE;
}
static LRESULT CALLBACK TestWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProc(hwnd, msg, wParam, lParam);
}
void error(void){
	LPVOID lpMsgBuf;
	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
		NULL,
		0,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR) &lpMsgBuf,
		0,
		NULL
		    );

	MessageBox( NULL, lpMsgBuf, "cwiz GetLastError", MB_OK|MB_ICONINFORMATION );

	LocalFree( lpMsgBuf );
}
static LRESULT CALLBACK SendMessageDlgProc(HWND hdlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static char* lpsztext=NULL;
	switch (uMsg)
	{
	case WM_COMMAND:
		switch LOWORD(wParam)
		{
		case IDWINHELP:
			GetDlgItemText(hdlg,IDMESSAGE,globalhelpkwd,NAMELENMAX);
			SendMessage(hMainDlg,WM_COMMAND,IDWINHELP,0);
			break;
		case IDLPSZ:
			{
				LPARAM lparam=(LPARAM)(LPCTSTR)lpsztext;
				SetDlgItemInt(hdlg,IDLPARAM,(UINT)lparam,FALSE);
				break;
			}
		case IDOK:
			{
				GetDlgItemText(hdlg,IDEDIT,lpsztext,BUFMAX);

				HWND hwnd=(HWND)(GetDlgItemInt(hdlg,IDHWND,NULL,FALSE));
				int index=SendDlgItemMessage(hdlg,IDMESSAGE,CB_GETCURSEL, 0, 0);
				UINT message=(UINT)SendDlgItemMessage(hdlg,IDMESSAGE,CB_GETITEMDATA,index,0);
				WPARAM wparam=(WPARAM)GetDlgItemInt(hdlg,IDWPARAM,NULL,FALSE);
				LPARAM lparam=(LPARAM)GetDlgItemInt(hdlg,IDLPARAM,NULL,FALSE);
				LRESULT lresult=SendMessage(hwnd,message,wparam,lparam);
				SetDlgItemInt(hdlg,IDRETURN,(UINT)lresult,FALSE);

				SetDlgItemText(hdlg,IDEDIT,lpsztext);
				return TRUE;
			}
		case IDCANCEL:
			{
				free(lpsztext);
				EndDialog(hdlg,0);
				return TRUE;
			}
		}
		return FALSE;
	case WM_INITDIALOG:
		{
			lpsztext=(char*)malloc(BUFMAX+1);
			SetDlgItemInt(hdlg,IDHWND,(UINT)lParam,FALSE);

			int nflags=296;
			struct flag{
				char* name;
				DWORD flag;
			};
			struct flag flags[]=
			    {
				"WM_ACTIVATE     ",WM_ACTIVATE     ,
				" WM_ACTIVATEAPP     ", WM_ACTIVATEAPP     ,
				" WM_AFXFIRST     ", WM_AFXFIRST     ,
				" WM_AFXLAST     ", WM_AFXLAST     ,
				" WM_APP     ", WM_APP     ,
				" WM_ASKCBFORMATNAME     ", WM_ASKCBFORMATNAME     ,
				" WM_CANCELJOURNAL     ", WM_CANCELJOURNAL     ,
				" WM_CANCELMODE     ", WM_CANCELMODE     ,
				" WM_CAPTURECHANGED     ", WM_CAPTURECHANGED     ,
				" WM_CHANGECBCHAIN     ", WM_CHANGECBCHAIN     ,
				" WM_CHAR     ", WM_CHAR     ,
				" WM_CHARTOITEM     ", WM_CHARTOITEM     ,
				" WM_CHILDACTIVATE     ", WM_CHILDACTIVATE     ,
				" WM_CLEAR     ", WM_CLEAR     ,
				" WM_CLOSE     ", WM_CLOSE     ,
				" WM_COMMAND     ", WM_COMMAND     ,
				" WM_COMMNOTIFY     ", WM_COMMNOTIFY     ,
				" WM_COMPACTING     ", WM_COMPACTING     ,
				" WM_COMPAREITEM     ", WM_COMPAREITEM     ,
				" WM_CONTEXTMENU     ", WM_CONTEXTMENU     ,
				" WM_COPY     ", WM_COPY     ,
				" WM_COPYDATA     ", WM_COPYDATA     ,
				" WM_CREATE     ", WM_CREATE     ,
				" WM_CTLCOLORBTN     ", WM_CTLCOLORBTN     ,
				" WM_CTLCOLORDLG     ", WM_CTLCOLORDLG     ,
				" WM_CTLCOLOREDIT     ", WM_CTLCOLOREDIT     ,
				" WM_CTLCOLORLISTBOX     ", WM_CTLCOLORLISTBOX     ,
				" WM_CTLCOLORMSGBOX     ", WM_CTLCOLORMSGBOX     ,
				" WM_CTLCOLORSCROLLBAR     ", WM_CTLCOLORSCROLLBAR     ,
				" WM_CTLCOLORSTATIC     ", WM_CTLCOLORSTATIC     ,
				" WM_CUT     ", WM_CUT     ,
				" WM_DEADCHAR     ", WM_DEADCHAR     ,
				" WM_DELETEITEM     ", WM_DELETEITEM     ,
				" WM_DESTROY     ", WM_DESTROY     ,
				" WM_DESTROYCLIPBOARD     ", WM_DESTROYCLIPBOARD     ,
				" WM_DEVICECHANGE     ", WM_DEVICECHANGE     ,
				" WM_DEVMODECHANGE     ", WM_DEVMODECHANGE     ,
				" WM_DISPLAYCHANGE     ", WM_DISPLAYCHANGE     ,
				" WM_DRAWCLIPBOARD     ", WM_DRAWCLIPBOARD     ,
				" WM_DRAWITEM     ", WM_DRAWITEM     ,
				" WM_DROPFILES     ", WM_DROPFILES     ,
				" WM_ENABLE     ", WM_ENABLE     ,
				" WM_ENDSESSION     ", WM_ENDSESSION     ,
				" WM_ENTERIDLE     ", WM_ENTERIDLE     ,
				" WM_ENTERMENULOOP     ", WM_ENTERMENULOOP     ,
				" WM_ENTERSIZEMOVE     ", WM_ENTERSIZEMOVE     ,
				" WM_ERASEBKGND     ", WM_ERASEBKGND     ,
				" WM_EXITMENULOOP     ", WM_EXITMENULOOP     ,
				" WM_EXITSIZEMOVE     ", WM_EXITSIZEMOVE     ,
				" WM_FONTCHANGE     ", WM_FONTCHANGE     ,
				" WM_GETDLGCODE     ", WM_GETDLGCODE     ,
				" WM_GETFONT     ", WM_GETFONT     ,
				" WM_GETHOTKEY     ", WM_GETHOTKEY     ,
				" WM_GETICON     ", WM_GETICON     ,
				" WM_GETMINMAXINFO     ", WM_GETMINMAXINFO     ,
				" WM_GETOBJECT     ", WM_GETOBJECT     ,
				" WM_GETTEXT     ", WM_GETTEXT     ,
				" WM_GETTEXTLENGTH     ", WM_GETTEXTLENGTH     ,
				" WM_HANDHELDFIRST     ", WM_HANDHELDFIRST     ,
				" WM_HANDHELDLAST     ", WM_HANDHELDLAST     ,
				" WM_HELP     ", WM_HELP     ,
				" WM_HOTKEY     ", WM_HOTKEY     ,
				" WM_HSCROLL     ", WM_HSCROLL     ,
				" WM_HSCROLLCLIPBOARD     ", WM_HSCROLLCLIPBOARD     ,
				" WM_ICONERASEBKGND     ", WM_ICONERASEBKGND     ,
				" WM_IME_CHAR     ", WM_IME_CHAR     ,
				" WM_IME_COMPOSITION     ", WM_IME_COMPOSITION     ,
				" WM_IME_COMPOSITIONFULL     ", WM_IME_COMPOSITIONFULL     ,
				" WM_IME_CONTROL     ", WM_IME_CONTROL     ,
				" WM_IME_ENDCOMPOSITION     ", WM_IME_ENDCOMPOSITION     ,
				" WM_IME_KEYDOWN     ", WM_IME_KEYDOWN     ,
				" WM_IME_KEYLAST     ", WM_IME_KEYLAST     ,
				" WM_IME_KEYUP     ", WM_IME_KEYUP     ,
				" WM_IME_NOTIFY     ", WM_IME_NOTIFY     ,
				" WM_IME_REQUEST     ", WM_IME_REQUEST     ,
				" WM_IME_SELECT     ", WM_IME_SELECT     ,
				" WM_IME_SETCONTEXT     ", WM_IME_SETCONTEXT     ,
				" WM_IME_STARTCOMPOSITION     ", WM_IME_STARTCOMPOSITION     ,
				" WM_INITDIALOG     ", WM_INITDIALOG     ,
				" WM_INITMENU     ", WM_INITMENU     ,
				" WM_INITMENUPOPUP     ", WM_INITMENUPOPUP     ,
				" WM_INPUTLANGCHANGE     ", WM_INPUTLANGCHANGE     ,
				" WM_INPUTLANGCHANGEREQUEST     ", WM_INPUTLANGCHANGEREQUEST     ,
				" WM_KEYDOWN     ", WM_KEYDOWN     ,
				" WM_KEYFIRST     ", WM_KEYFIRST     ,
				" WM_KEYLAST     ", WM_KEYLAST     ,
				" WM_KEYUP     ", WM_KEYUP     ,
				" WM_KILLFOCUS     ", WM_KILLFOCUS     ,
				" WM_LBUTTONDBLCLK     ", WM_LBUTTONDBLCLK     ,
				" WM_LBUTTONDOWN     ", WM_LBUTTONDOWN     ,
				" WM_LBUTTONUP     ", WM_LBUTTONUP     ,
				" WM_MBUTTONDBLCLK     ", WM_MBUTTONDBLCLK     ,
				" WM_MBUTTONDOWN     ", WM_MBUTTONDOWN     ,
				" WM_MBUTTONUP     ", WM_MBUTTONUP     ,
				" WM_MDIACTIVATE     ", WM_MDIACTIVATE     ,
				" WM_MDICASCADE     ", WM_MDICASCADE     ,
				" WM_MDICREATE     ", WM_MDICREATE     ,
				" WM_MDIDESTROY     ", WM_MDIDESTROY     ,
				" WM_MDIGETACTIVE     ", WM_MDIGETACTIVE     ,
				" WM_MDIICONARRANGE     ", WM_MDIICONARRANGE     ,
				" WM_MDIMAXIMIZE     ", WM_MDIMAXIMIZE     ,
				" WM_MDINEXT     ", WM_MDINEXT     ,
				" WM_MDIREFRESHMENU     ", WM_MDIREFRESHMENU     ,
				" WM_MDIRESTORE     ", WM_MDIRESTORE     ,
				" WM_MDISETMENU     ", WM_MDISETMENU     ,
				" WM_MDITILE     ", WM_MDITILE     ,
				" WM_MEASUREITEM     ", WM_MEASUREITEM     ,
				" WM_MENUCHAR     ", WM_MENUCHAR     ,
				" WM_MENUCOMMAND     ", WM_MENUCOMMAND     ,
				" WM_MENUDRAG     ", WM_MENUDRAG     ,
				" WM_MENUGETOBJECT     ", WM_MENUGETOBJECT     ,
				" WM_MENURBUTTONUP     ", WM_MENURBUTTONUP     ,
				" WM_MENUSELECT     ", WM_MENUSELECT     ,
				" WM_MOUSEACTIVATE     ", WM_MOUSEACTIVATE     ,
				" WM_MOUSEFIRST     ", WM_MOUSEFIRST     ,
				" WM_MOUSEHOVER     ", WM_MOUSEHOVER     ,
				" WM_MOUSELEAVE     ", WM_MOUSELEAVE     ,
				" WM_MOUSEMOVE     ", WM_MOUSEMOVE     ,
				" WM_MOVE     ", WM_MOVE     ,
				" WM_MOVING     ", WM_MOVING     ,
				" WM_NCACTIVATE     ", WM_NCACTIVATE     ,
				" WM_NCCALCSIZE     ", WM_NCCALCSIZE     ,
				" WM_NCCREATE     ", WM_NCCREATE     ,
				" WM_NCDESTROY     ", WM_NCDESTROY     ,
				" WM_NCHITTEST     ", WM_NCHITTEST     ,
				" WM_NCLBUTTONDBLCLK     ", WM_NCLBUTTONDBLCLK     ,
				" WM_NCLBUTTONDOWN     ", WM_NCLBUTTONDOWN     ,
				" WM_NCLBUTTONUP     ", WM_NCLBUTTONUP     ,
				" WM_NCMBUTTONDBLCLK     ", WM_NCMBUTTONDBLCLK     ,
				" WM_NCMBUTTONDOWN     ", WM_NCMBUTTONDOWN     ,
				" WM_NCMBUTTONUP     ", WM_NCMBUTTONUP     ,
				" WM_NCMOUSEHOVER     ", WM_NCMOUSEHOVER     ,
				" WM_NCMOUSELEAVE     ", WM_NCMOUSELEAVE     ,
				" WM_NCMOUSEMOVE     ", WM_NCMOUSEMOVE     ,
				" WM_NCPAINT     ", WM_NCPAINT     ,
				" WM_NCRBUTTONDBLCLK     ", WM_NCRBUTTONDBLCLK     ,
				" WM_NCRBUTTONDOWN     ", WM_NCRBUTTONDOWN     ,
				" WM_NCRBUTTONUP     ", WM_NCRBUTTONUP     ,
				" WM_NEXTDLGCTL     ", WM_NEXTDLGCTL     ,
				" WM_NEXTMENU     ", WM_NEXTMENU     ,
				" WM_NOTIFY     ", WM_NOTIFY     ,
				" WM_NOTIFYFORMAT     ", WM_NOTIFYFORMAT     ,
				" WM_NULL     ", WM_NULL     ,
				" WM_PAINT     ", WM_PAINT     ,
				" WM_PAINTCLIPBOARD     ", WM_PAINTCLIPBOARD     ,
				" WM_PAINTICON     ", WM_PAINTICON     ,
				" WM_PALETTECHANGED     ", WM_PALETTECHANGED     ,
				" WM_PALETTEISCHANGING     ", WM_PALETTEISCHANGING     ,
				" WM_PARENTNOTIFY     ", WM_PARENTNOTIFY     ,
				" WM_PASTE     ", WM_PASTE     ,
				" WM_PENWINFIRST     ", WM_PENWINFIRST     ,
				" WM_PENWINLAST     ", WM_PENWINLAST     ,
				" WM_POWER     ", WM_POWER     ,
				" WM_POWERBROADCAST     ", WM_POWERBROADCAST     ,
				" WM_PRINT     ", WM_PRINT     ,
				" WM_PRINTCLIENT     ", WM_PRINTCLIENT     ,
				" WM_QUERYDRAGICON     ", WM_QUERYDRAGICON     ,
				" WM_QUERYENDSESSION     ", WM_QUERYENDSESSION     ,
				" WM_QUERYNEWPALETTE     ", WM_QUERYNEWPALETTE     ,
				" WM_QUERYOPEN     ", WM_QUERYOPEN     ,
				" WM_QUEUESYNC     ", WM_QUEUESYNC     ,
				" WM_QUIT     ", WM_QUIT     ,
				" WM_RBUTTONDOWN     ", WM_RBUTTONDOWN     ,
				" WM_RBUTTONUP     ", WM_RBUTTONUP     ,
				" WM_RENDERALLFORMATS     ", WM_RENDERALLFORMATS     ,
				" WM_RENDERFORMAT     ", WM_RENDERFORMAT     ,
				" WM_SETCURSOR     ", WM_SETCURSOR     ,
				" WM_SETFOCUS     ", WM_SETFOCUS     ,
				" WM_SETFONT     ", WM_SETFONT     ,
				" WM_SETHOTKEY     ", WM_SETHOTKEY     ,
				" WM_SETICON     ", WM_SETICON     ,
				" WM_SETREDRAW     ", WM_SETREDRAW     ,
				" WM_SETTEXT     ", WM_SETTEXT     ,
				" WM_SETTINGCHANGE     ", WM_SETTINGCHANGE     ,
				" WM_SHOWWINDOW     ", WM_SHOWWINDOW     ,
				" WM_SIZE     ", WM_SIZE     ,
				" WM_SIZECLIPBOARD     ", WM_SIZECLIPBOARD     ,
				" WM_SIZING     ", WM_SIZING     ,
				" WM_SPOOLERSTATUS     ", WM_SPOOLERSTATUS     ,
				" WM_STYLECHANGED     ", WM_STYLECHANGED     ,
				" WM_STYLECHANGING     ", WM_STYLECHANGING     ,
				" WM_SYNCPAINT     ", WM_SYNCPAINT     ,
				" WM_SYSCHAR     ", WM_SYSCHAR     ,
				" WM_SYSCOLORCHANGE     ", WM_SYSCOLORCHANGE     ,
				" WM_SYSCOMMAND     ", WM_SYSCOMMAND     ,
				" WM_SYSDEADCHAR     ", WM_SYSDEADCHAR     ,
				" WM_SYSKEYDOWN     ", WM_SYSKEYDOWN     ,
				" WM_SYSKEYUP     ", WM_SYSKEYUP     ,
				" WM_TCARD     ", WM_TCARD     ,
				" WM_TIMECHANGE     ", WM_TIMECHANGE     ,
				" WM_TIMER     ", WM_TIMER     ,
				" WM_UNDO     ", WM_UNDO     ,
				" WM_UNINITMENUPOPUP     ", WM_UNINITMENUPOPUP     ,
				" WM_USERCHANGED     ", WM_USERCHANGED     ,
				" WM_VKEYTOITEM     ", WM_VKEYTOITEM     ,
				" WM_VSCROLL     ", WM_VSCROLL     ,
				" WM_VSCROLLCLIPBOARD     ", WM_VSCROLLCLIPBOARD     ,
				" WM_WINDOWPOSCHANGED     ", WM_WINDOWPOSCHANGED     ,
				" WM_WINDOWPOSCHANGING     ", WM_WINDOWPOSCHANGING     ,
				" WM_WININICHANGE   ", WM_WININICHANGE   ,
				" TVM_INSERTITEMA  ", TVM_INSERTITEMA  ,
				" TVM_INSERTITEMW  ", TVM_INSERTITEMW  ,
				" TVM_DELETEITEM  ", TVM_DELETEITEM  ,
				" TVM_EXPAND  ", TVM_EXPAND  ,
				" TVM_GETITEMRECT  ", TVM_GETITEMRECT  ,
				" TVM_GETCOUNT  ", TVM_GETCOUNT  ,
				" TVM_GETINDENT  ", TVM_GETINDENT  ,
				" TVM_SETINDENT  ", TVM_SETINDENT  ,
				" TVM_GETIMAGELIST  ", TVM_GETIMAGELIST  ,
				" TVM_SETIMAGELIST  ", TVM_SETIMAGELIST  ,
				" TVM_GETNEXTITEM  ", TVM_GETNEXTITEM  ,
				" TVM_SELECTITEM  ", TVM_SELECTITEM  ,
				" TVM_GETITEMA  ", TVM_GETITEMA  ,
				" TVM_GETITEMW  ", TVM_GETITEMW  ,
				" TVM_SETITEMA  ", TVM_SETITEMA  ,
				" TVM_SETITEMW  ", TVM_SETITEMW  ,
				" TVM_EDITLABELA  ", TVM_EDITLABELA  ,
				" TVM_EDITLABELW  ", TVM_EDITLABELW  ,
				" TVM_GETEDITCONTROL  ", TVM_GETEDITCONTROL  ,
				" TVM_GETVISIBLECOUNT  ", TVM_GETVISIBLECOUNT  ,
				" TVM_HITTEST  ", TVM_HITTEST  ,
				" TVM_CREATEDRAGIMAGE  ", TVM_CREATEDRAGIMAGE  ,
				" TVM_SORTCHILDREN  ", TVM_SORTCHILDREN  ,
				" TVM_ENSUREVISIBLE  ", TVM_ENSUREVISIBLE  ,
				" TVM_SORTCHILDRENCB  ", TVM_SORTCHILDRENCB  ,
				" TVM_ENDEDITLABELNOW  ", TVM_ENDEDITLABELNOW  ,
				" TVM_GETISEARCHSTRINGA  ", TVM_GETISEARCHSTRINGA  ,
				" TVM_GETISEARCHSTRINGW  ", TVM_GETISEARCHSTRINGW  ,
				" TVM_SETTOOLTIPS  ", TVM_SETTOOLTIPS  ,
				" TVM_GETTOOLTIPS  ", TVM_GETTOOLTIPS  ,
				" LVM_APPROXIMATEVIEWRECT ", LVM_APPROXIMATEVIEWRECT ,
				" LVM_ARRANGE  ", LVM_ARRANGE  ,
				" LVM_CREATEDRAGIMAGE  ", LVM_CREATEDRAGIMAGE  ,
				" LVM_DELETEALLITEMS  ", LVM_DELETEALLITEMS  ,
				" LVM_DELETECOLUMN  ", LVM_DELETECOLUMN  ,
				" LVM_DELETEITEM  ", LVM_DELETEITEM  ,
				" LVM_EDITLABELA  ", LVM_EDITLABELA  ,
				" LVM_EDITLABELW  ", LVM_EDITLABELW  ,
				" LVM_ENSUREVISIBLE  ", LVM_ENSUREVISIBLE  ,
				" LVM_FINDITEMA  ", LVM_FINDITEMA  ,
				" LVM_FINDITEMW  ", LVM_FINDITEMW  ,
				" LVM_GETBKCOLOR  ", LVM_GETBKCOLOR  ,
				" LVM_GETCALLBACKMASK  ", LVM_GETCALLBACKMASK  ,
				" LVM_GETCOLUMNA  ", LVM_GETCOLUMNA  ,
				" LVM_GETCOLUMNORDERARRAY ", LVM_GETCOLUMNORDERARRAY ,
				" LVM_GETCOLUMNW  ", LVM_GETCOLUMNW  ,
				" LVM_GETCOLUMNWIDTH  ", LVM_GETCOLUMNWIDTH  ,
				" LVM_GETCOUNTPERPAGE  ", LVM_GETCOUNTPERPAGE  ,
				" LVM_GETEDITCONTROL  ", LVM_GETEDITCONTROL  ,
				" LVM_GETEXTENDEDLISTVIEWSTYLE ", LVM_GETEXTENDEDLISTVIEWSTYLE ,
				" LVM_GETHEADER  ", LVM_GETHEADER  ,
				" LVM_GETHOTCURSOR  ", LVM_GETHOTCURSOR  ,
				" LVM_GETHOTITEM  ", LVM_GETHOTITEM  ,
				" LVM_GETIMAGELIST  ", LVM_GETIMAGELIST  ,
				" LVM_GETISEARCHSTRINGA  ", LVM_GETISEARCHSTRINGA  ,
				" LVM_GETISEARCHSTRINGW  ", LVM_GETISEARCHSTRINGW  ,
				" LVM_GETITEMA  ", LVM_GETITEMA  ,
				" LVM_GETITEMCOUNT  ", LVM_GETITEMCOUNT  ,
				" LVM_GETITEMPOSITION  ", LVM_GETITEMPOSITION  ,
				" LVM_GETITEMRECT  ", LVM_GETITEMRECT  ,
				" LVM_GETITEMSPACING  ", LVM_GETITEMSPACING  ,
				" LVM_GETITEMSTATE  ", LVM_GETITEMSTATE  ,
				" LVM_GETITEMTEXTA  ", LVM_GETITEMTEXTA  ,
				" LVM_GETITEMTEXTW  ", LVM_GETITEMTEXTW  ,
				" LVM_GETITEMW  ", LVM_GETITEMW  ,
				" LVM_GETNEXTITEM  ", LVM_GETNEXTITEM  ,
				" LVM_GETORIGIN  ", LVM_GETORIGIN  ,
				" LVM_GETSELECTEDCOUNT  ", LVM_GETSELECTEDCOUNT  ,
				" LVM_GETSTRINGWIDTHA  ", LVM_GETSTRINGWIDTHA  ,
				" LVM_GETSTRINGWIDTHW  ", LVM_GETSTRINGWIDTHW  ,
				" LVM_GETSUBITEMRECT  ", LVM_GETSUBITEMRECT  ,
				" LVM_GETTEXTBKCOLOR  ", LVM_GETTEXTBKCOLOR  ,
				" LVM_GETTEXTCOLOR  ", LVM_GETTEXTCOLOR  ,
				" LVM_GETTOPINDEX  ", LVM_GETTOPINDEX  ,
				" LVM_GETVIEWRECT  ", LVM_GETVIEWRECT  ,
				" LVM_HITTEST  ", LVM_HITTEST  ,
				" LVM_INSERTCOLUMNA  ", LVM_INSERTCOLUMNA  ,
				" LVM_INSERTCOLUMNW  ", LVM_INSERTCOLUMNW  ,
				" LVM_INSERTITEMA  ", LVM_INSERTITEMA  ,
				" LVM_INSERTITEMW  ", LVM_INSERTITEMW  ,
				" LVM_REDRAWITEMS  ", LVM_REDRAWITEMS  ,
				" LVM_SCROLL  ", LVM_SCROLL  ,
				" LVM_SETBKCOLOR  ", LVM_SETBKCOLOR  ,
				" LVM_SETCALLBACKMASK  ", LVM_SETCALLBACKMASK  ,
				" LVM_SETCOLUMNA  ", LVM_SETCOLUMNA  ,
				" LVM_SETCOLUMNORDERARRAY ", LVM_SETCOLUMNORDERARRAY ,
				" LVM_SETCOLUMNW  ", LVM_SETCOLUMNW  ,
				" LVM_SETCOLUMNWIDTH  ", LVM_SETCOLUMNWIDTH  ,
				" LVM_SETEXTENDEDLISTVIEWSTYLE ", LVM_SETEXTENDEDLISTVIEWSTYLE ,
				" LVM_SETHOTCURSOR  ", LVM_SETHOTCURSOR  ,
				" LVM_SETHOTITEM  ", LVM_SETHOTITEM  ,
				" LVM_SETICONSPACING  ", LVM_SETICONSPACING  ,
				" LVM_SETIMAGELIST  ", LVM_SETIMAGELIST  ,
				" LVM_SETITEMA  ", LVM_SETITEMA  ,
				" LVM_SETITEMCOUNT  ", LVM_SETITEMCOUNT  ,
				" LVM_SETITEMPOSITION  ", LVM_SETITEMPOSITION  ,
				" LVM_SETITEMPOSITION32  ", LVM_SETITEMPOSITION32  ,
				" LVM_SETITEMSTATE  ", LVM_SETITEMSTATE  ,
				" LVM_SETITEMTEXTA  ", LVM_SETITEMTEXTA  ,
				" LVM_SETITEMTEXTW  ", LVM_SETITEMTEXTW  ,
				" LVM_SETITEMW  ", LVM_SETITEMW  ,
				" LVM_SETTEXTBKCOLOR  ", LVM_SETTEXTBKCOLOR  ,
				" LVM_SETTEXTCOLOR  ", LVM_SETTEXTCOLOR  ,
				" LVM_SORTITEMS  ", LVM_SORTITEMS  ,
				" LVM_SUBITEMHITTEST  ", LVM_SUBITEMHITTEST  ,
				" LVM_UPDATE  ", LVM_UPDATE  ,
			};
			HWND hListBox=GetDlgItem(hdlg,IDMESSAGE);
			for(int n=0;n<nflags;n++){
				ComboBox_InsertString(hListBox,n,flags[n].name);
				ComboBox_SetItemData(hListBox,n,flags[n].flag);
			}
		}
		return FALSE;
	}
	return FALSE;
}
void tabctrlselect(int selected){
	switch(selected)
			{
			case 0:
				ShowWindow(GetDlgItem(hMainDlg,IDTEXTOUT),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDTEXT   ),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDTEXTNEW),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDRUN),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDSTORE),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDTREEVIEW),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDLIST),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDDELETE),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDHELPALWAYS),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDRUNSELECTION),SW_SHOW);

				SetFocus(GetDlgItem(hMainDlg,IDTEXTOUT));
			break;					
			case 1:
				ShowWindow(GetDlgItem(hMainDlg,IDTEXTOUT),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDTEXT   ),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDTEXTNEW),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDRUN),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDSTORE),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDTREEVIEW),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDLIST),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDDELETE),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDHELPALWAYS),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDRUNSELECTION),SW_SHOW);
				SetFocus(GetDlgItem(hMainDlg,IDTEXT));

			break;					
			case 2:
				ShowWindow(GetDlgItem(hMainDlg,IDTEXTOUT),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDTEXT   ),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDTEXTNEW),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDRUN),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDSTORE),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDTREEVIEW),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDLIST),SW_SHOW);
				ShowWindow(GetDlgItem(hMainDlg,IDDELETE),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDHELPALWAYS),SW_HIDE);
				ShowWindow(GetDlgItem(hMainDlg,IDRUNSELECTION),SW_HIDE);
				SetFocus(GetDlgItem(hMainDlg,IDTEXTNEW));

			break;					

			}
}
	
