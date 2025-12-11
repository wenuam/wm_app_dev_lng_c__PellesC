#include <windows.h> 
#include <windowsx.h>
#include <stdio.h>

#include "mainres.h"  
#include "text.h" 

enum{
	idPage1,
	idPage2,
	idPage3,
	end}
selectedpage;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nCmdShow);
HWND CreateTestWndClassWnd(void);
void MainWndProc_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
LRESULT CALLBACK MainWndProc(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
static BOOL InitApplication(void);

void selectpage(int mustSendMessage);
void procedeLButton(void);
void fontinit(void);
void fontdelete(void);
void framemake(HDC hdc,RECT* lprcupdate,int whipe);
void scroll(int dx,int dy);
void setwindowscrolls(void);
void outputPage1(char* buffer);
void outputPage2(char* buffer);
void outputPage3(char* buffer);
void CALLBACK outputnowtimer(HWND hwnd,UINT uMsg,UINT idEvent,DWORD dwTime);
void output(int erase);
void textmake(char*buffer);


#define bufmax 50000
char textbuffer[bufmax+2];
char string[1024];
LOGFONT lff[nfonts];

int lineprotect=2;
int pageborder=80;
HCURSOR hcursorarrow;
HFONT hfont[nfonts];
HPEN redpen2,greypen2,whitepen2,blackpen3,whitepen3;
HWND hwndMain,hwndNDlg;
int xprint,yprint,
xprintmax,yprintmax,
xpos=70,ypos=70,
offset,maxoffset;

HINSTANCE hInst;


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nCmdShow)
{
	
	MSG msg;
	HACCEL hAccelTable;
	
	hInst = hInstance;
	if (!InitApplication()) 
		return 0;
	
	hAccelTable = LoadAccelerators(hInst,MAKEINTRESOURCE(IDACCEL));
	
	if ((hwndMain = CreateTestWndClassWnd()) == (HWND)0)
		return 0;
	
	ShowWindow(hwndMain,SW_MAXIMIZE);
	
	selectedpage=idPage1;
	selectpage(TRUE);
	
	while (GetMessage(&msg,NULL,0,0)>0) {
		if (!TranslateAccelerator(msg.hwnd,hAccelTable,&msg)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
	
	fontdelete();
	DeleteObject(redpen2);
	DeleteObject(whitepen2);
	DeleteObject(whitepen2);
	DeleteObject(blackpen3);
	DeleteObject(whitepen2);
	
	return msg.wParam;
}
HWND CreateTestWndClassWnd(void)
{
	return CreateWindow("TestWndClass","Test",
		WS_MINIMIZEBOX|WS_VISIBLE|WS_CLIPSIBLINGS|WS_CLIPCHILDREN|WS_MAXIMIZEBOX|WS_CAPTION|WS_BORDER|WS_SYSMENU|WS_THICKFRAME|WS_VSCROLL|WS_HSCROLL,
		CW_USEDEFAULT,0,CW_USEDEFAULT,0,
		NULL,
		NULL,
		hInst,
		NULL);
}

static BOOL InitApplication(void)
{
	
	WNDCLASS wc;
	
	memset(&wc,0,sizeof(WNDCLASS));
	wc.style = CS_HREDRAW|CS_VREDRAW |CS_DBLCLKS ;
	wc.lpfnWndProc = (WNDPROC)MainWndProc;
	wc.hInstance = hInst;
	wc.hbrBackground =(HBRUSH) GetStockObject(LTGRAY_BRUSH);//(HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "TestWndClass";
	wc.lpszMenuName = MAKEINTRESOURCE(IDR_MNU_MAIN);
	wc.hCursor = LoadCursor(hInst,MAKEINTRESOURCE(IDCURSORMOVE));
	wc.hIcon = LoadIcon(hInst, MAKEINTRESOURCE(IDR_ICO_MAIN));
	
	hcursorarrow=LoadCursor(NULL,IDC_ARROW);
	
	if (!RegisterClass(&wc))
		return 0;
	
	fontinit();
	
	redpen2=CreatePen(PS_SOLID,1,RGB(255,0,0));
	whitepen2=CreatePen(PS_SOLID,1,RGB(255,255,255));
	greypen2=CreatePen(PS_SOLID,1,RGB(192,192,192));
	blackpen3=CreatePen(PS_SOLID,3,RGB(0,0,0));
	whitepen3=CreatePen(PS_SOLID,3,RGB(255,255,255));
	
	hBmp[0] = LoadBitmap(hInst, MAKEINTRESOURCE(IDBITMAP1));
	
	return 1;
}

void MainWndProc_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
	switch(id) {
	case IDM_PAGE1:
		SetWindowText(hwndMain,"EXAMPLE  -  PAGE1");
		selectedpage=idPage1;
		selectpage(FALSE);
		output(TRUE);
		break;
	case IDM_PAGE2:
		SetWindowText(hwndMain,"EXAMPLE  -  PAGE2");
		selectedpage=idPage2;
		selectpage(FALSE);
		output(TRUE);
		break;
	case IDM_PAGE3:
		SetWindowText(hwndMain,"EXAMPLE  -  PAGE3");
		selectedpage=idPage3;
		selectpage(FALSE);
		output(TRUE);
		break;
	}
}

LRESULT CALLBACK MainWndProc(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam){
	hwndMain=hwnd;
	switch (msg) {
	case WM_COMMAND:
		HANDLE_WM_COMMAND(hwnd,wParam,lParam,MainWndProc_OnCommand);
		return 0;
	case WM_CLOSE:
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	case WM_KEYDOWN:
		switch(wParam){
		case VK_HOME:
			SendMessage(hwndMain,WM_VSCROLL,SB_TOP,0);
			break;
		case VK_END:
			SendMessage(hwndMain,WM_VSCROLL,SB_BOTTOM,0);
			break;
		case VK_UP:
			SendMessage(hwndMain,WM_VSCROLL,SB_LINEUP,0);
			break;
		case VK_DOWN:
			SendMessage(hwndMain,WM_VSCROLL,SB_LINEDOWN,0);
			break;
		case VK_PRIOR:
			SendMessage(hwndMain,WM_VSCROLL,SB_PAGEUP,0);
			break;
		case VK_NEXT:
			SendMessage(hwndMain,WM_VSCROLL,SB_PAGEDOWN,0);
			break;
			
		case VK_LEFT:
			SendMessage(hwndMain,WM_HSCROLL,SB_LINELEFT,0);
			break;
		case VK_RIGHT:
			SendMessage(hwndMain,WM_HSCROLL,SB_LINERIGHT,0);
			break;
		case VK_BACK:
			break;
		case VK_TAB:
			break;
		case VK_SPACE:
			break;
		case VK_F1:
			break;
		case VK_ESCAPE:
			break;
		}
		break;
	case WM_PAINT:
		{
			RECT rc;
			GetClientRect(hwnd,&rc);
			rc.top=0;
			rc.bottom=lineprotect;
			ValidateRect(hwnd,&rc);
			
			HDC hdc=GetDC(hwndMain);
			SelectPen(hdc,blackpen3);
			rc.bottom=lineprotect;
			DrawEdge(hdc,&rc,EDGE_RAISED,BF_ADJUST|BF_BOTTOM);
			ReleaseDC(hwndMain,hdc);
			
			RECT rcupdate;
			GetUpdateRect(hwndMain,&rcupdate,FALSE);
			PAINTSTRUCT ps;
			HDC hdc3=BeginPaint(hwnd,&ps);
			textout(hdc3,textbuffer,TRUE,0);
			framemake(hdc3,&rcupdate,0);
			EndPaint(hwnd,&ps);
		}
		return 0;
	case WM_HSCROLL:
		{
			
			int nScrollCode = (WORD) LOWORD(wParam);  // scroll bar value
			int nPos = (short) HIWORD(wParam);   // scroll box position
			HWND hwndScrollBar = (HWND) lParam;
			
			static SCROLLINFO si;
			si.cbSize=sizeof(SCROLLINFO);
			si.fMask=SIF_RANGE;
			GetScrollInfo(hwndMain,SB_HORZ,&si);
			
			int xposold=xpos;
			
			RECT rc;
			GetClientRect(hwndMain,&rc);
			int page=(int)((double)(rc.right-rc.left)*0.9);
			
			switch (nScrollCode){
			case SB_BOTTOM:
				xpos=si.nMin;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-xpos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_TOP:
				xpos=si.nMax;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-xpos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_LINELEFT:
				xpos+=20;
				if(xpos>si.nMax)xpos=si.nMax;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-xpos;
				SetScrollInfo(hwndMain,SB_HORZ,&si,TRUE);
				break;
			case SB_LINERIGHT:
				xpos-=20;
				if(xpos<si.nMin)xpos=si.nMin;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-xpos;
				SetScrollInfo(hwndMain,SB_HORZ,&si,TRUE);
				break;
			case SB_PAGELEFT:
				xpos+=page;
				if(xpos>si.nMax)xpos=si.nMax;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-xpos;
				SetScrollInfo(hwndMain,SB_HORZ,&si,TRUE);
				break;
			case SB_PAGERIGHT:
				xpos-=page;
				if(xpos<si.nMin)xpos=si.nMin;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-xpos;
				SetScrollInfo(hwndMain,SB_HORZ,&si,TRUE);
				break;
			case SB_THUMBPOSITION:
				si.fMask=SIF_POS;
				si.nPos=nPos;
				SetScrollInfo(hwndMain,SB_HORZ,&si,TRUE);
				break;
			case SB_THUMBTRACK:
				{
					xpos=si.nMin+si.nMax-nPos;
				}
				break;
			case SB_ENDSCROLL:
				
				break;
				
				
			}
			scroll(xpos-xposold,0);
		}
		return 0;
	case WM_VSCROLL:
		{
			
			int nScrollCode = (int) LOWORD(wParam);  // scroll bar value
			int nPos = (short) HIWORD(wParam);   // scroll box position
			HWND hwndScrollBar = (HWND) lParam;
			static SCROLLINFO si;
			si.cbSize=sizeof(SCROLLINFO);
			
			si.fMask=SIF_RANGE;
			GetScrollInfo(hwndMain,SIF_RANGE,&si);
			
			RECT rc;
			GetClientRect(hwndMain,&rc);
			int page=(int)((double)(rc.bottom-rc.top)*0.9);
			
			int yposold=ypos;
			switch (nScrollCode){
			case SB_BOTTOM:
				ypos=si.nMin;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-ypos;//rc.bottom-yprintmax-ypos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_TOP:
				ypos=si.nMax;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-ypos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_LINEDOWN:
				ypos-=10;
				if(ypos<si.nMin)ypos=si.nMin;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-ypos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_LINEUP:
				ypos+=10;
				if(ypos>si.nMax)ypos=si.nMax;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-ypos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_PAGEDOWN:
				ypos-=page;
				if(ypos<si.nMin)ypos=si.nMin;
				si.nPos=si.nMax+si.nMin-ypos;
				si.fMask=SIF_POS;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_PAGEUP:
				ypos+=page;
				if(ypos>si.nMax)ypos=si.nMax;
				si.fMask=SIF_POS;
				si.nPos=si.nMax+si.nMin-ypos;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_THUMBPOSITION:
				si.nPos=nPos;
				si.fMask=SIF_POS;
				SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
				break;
			case SB_THUMBTRACK:
				ypos=si.nMin+si.nMax-nPos;
				break;
			case SB_ENDSCROLL:
				
				break;
			}
			scroll(0,ypos-yposold);
		}
		return 0;
	case WM_MOUSEMOVE:
		{
			static int xold=0,yold=0;
			int fwKeys = wParam;        // key flags
			int dx,dy;
			int xPos = LOWORD(lParam);  // horizontal position of cursor
			int yPos = HIWORD(lParam);  // vertical position of cursor
			int xposold,yposold;
			if(fwKeys!=MK_LBUTTON)  {
				xold=0;
				yold=0;
			}
			if(fwKeys==MK_LBUTTON)  {
				if (xold==0)xold=xPos;
				if (yold==0)yold=yPos;
				xpos+=dx=(xPos-xold);
				ypos+=dy=(yPos-yold);
				
				RECT rc;
				GetClientRect(hwndMain,&rc);
				if(xpos>=rc.right-pageborder){
					xpos-=dx;
					dx=0;
				}
				if(ypos>=rc.bottom-pageborder){
					ypos-=dy;
					dy=0;
				}
				if(xpos<=-xprintmax+pageborder){
					xpos-=dx;
					dx=0;
				}
				if(ypos<=-yprintmax+pageborder){
					ypos-=dy;
					dy=0;
				}
				
				scroll(dx,dy);
				
				xposold=xpos;
				yposold=ypos;
				
				xold=xPos;
				yold=yPos;
				setwindowscrolls();
				
			}
			if(fwKeys!=MK_LBUTTON){
				HDC hdc=GetDC(hwndMain);
				textswitch(hdc,'s',-2,NULL,0,xPos,yPos);
				ReleaseDC(hwndMain,hdc);
			}
		}
		
		break;
		
	case WM_LBUTTONDOWN:
		{
			procedeLButton();
			break;
			
		default:
			return DefWindowProc(hwnd,msg,wParam,lParam);
		}
		return 0;
	}
}
void procedeLButton(void){
	int iSel=textswitch(NULL,'s',-3,NULL,0,0,0);
	if(iSel<0)return;
	switch(selectedpage){
	case idPage1:
		SendMessage(hwndMain,WM_COMMAND,(1<<16)|iSel,0);
		break;
		
	case idPage2:
		SendMessage(hwndMain,WM_COMMAND,(1<<16)|iSel,0);
		break;
		
	case idPage3:
		SendMessage(hwndMain,WM_COMMAND,(1<<16)|iSel,0);
		break;
		
	}
}


void selectpage(int mustSendMessage){
	static int oldsel=-1;
	static struct{
		int x;
		int y;
		int used;
	}
	pagesel[1024] ;
	if(oldsel==-1){
		memset(pagesel,0,sizeof(pagesel));
		oldsel=0;
	}
	
	if(selectedpage!=oldsel&&selectedpage<1024){
		pagesel[oldsel].x=xpos;
		pagesel[oldsel].y=ypos;
		xpos=pagesel[selectedpage].x;
		ypos=pagesel[selectedpage].y;
		if(pagesel[selectedpage].used==0){
			ypos=70;
			xpos=70;
			pagesel[selectedpage].used=1;
		}
		oldsel=selectedpage;
	}
	if(mustSendMessage){
		if(selectedpage==idPage1){
			SendMessage(hwndMain,WM_COMMAND,IDM_PAGE1,0);
		}
		if(selectedpage==idPage2){
			SendMessage(hwndMain,WM_COMMAND,IDM_PAGE2,0);
		}
		if(selectedpage==idPage3){
			SendMessage(hwndMain,WM_COMMAND,IDM_PAGE3,0);
		}
		
	}
}
void fontinit(void){
	LOGFONT lf;
	//----> #you must define nfonts new, if you add fonts
	memset(&lf,0,sizeof(lf));
	lf. lfHeight         =18;
	lf. lfWidth          =0;
	lf. lfEscapement     =0;
	lf. lfOrientation    =0;
	lf. lfWeight         =FW_NORMAL;
	lf. lfItalic         =FALSE;
	lf. lfUnderline      =FALSE;
	lf. lfStrikeOut      =FALSE;
	lf. lfCharSet        =ANSI_CHARSET;
	lf. lfOutPrecision   =0;//OUT_TT_ONLY_PRECIS;
	lf. lfClipPrecision  =0;
	lf. lfQuality        =PROOF_QUALITY;
	lf. lfPitchAndFamily =FF_ROMAN;
	strcpy(lf.lfFaceName,"MS Serif");
	;
	for(int n=0;n<nfonts ;n++){
		lff[n]=lf;
	}
	
	hfont[0]=CreateFontIndirect(&lff[0]);
	
	lff[1].lfHeight=20;
	hfont[1]=CreateFontIndirect(&lff[1]);
	
	lff[2].lfHeight=18;
	lff[2].lfItalic=TRUE;
	hfont[2]=CreateFontIndirect(&lff[2]);
	
	lff[3].lfHeight=18;
	lff[3].lfPitchAndFamily =FF_MODERN;
	strcpy(lff[3].lfFaceName,"Courier New");//Fehler bei Laborrechner mit Schriftgrössenanpassung
	hfont[3]=CreateFontIndirect(&lff[3]);
	
	lff[4].lfHeight=14;
	lff[4].lfPitchAndFamily =FF_MODERN;
	strcpy(lff[4].lfFaceName,"Courier New");//
	hfont[4]=CreateFontIndirect(&lff[4]);
	
	lff[5].lfHeight=18;
	lff[5].lfPitchAndFamily =FF_MODERN;
	strcpy(lff[5].lfFaceName,"Courier New");//
	lff[5].lfWeight=FW_HEAVY;
	hfont[5]=CreateFontIndirect(&lff[5]);
	
	lff[6].lfHeight=28;
	lff[6].lfWeight=FW_LIGHT;
	lff[6].lfUnderline=TRUE;
	hfont[6]=CreateFontIndirect(&lff[6]);
	
	lff[7].lfHeight=20;
	lff[7].lfWeight=FW_LIGHT;
	hfont[7]=CreateFontIndirect(&lff[7]);
	
	lff[8].lfHeight=18;
	lff[8].lfWeight=FW_BOLD;
	lff[8].lfUnderline=TRUE;
	hfont[8]=CreateFontIndirect(&lff[8]);
	
	lff[9].lfHeight=18;
	lff[9].lfWeight=FW_BOLD;
	hfont[9]=CreateFontIndirect(&lff[9]);
	
	lff[10].lfHeight=22;
	lff[10].lfWeight=FW_BOLD;
	lff[10].lfUnderline=TRUE;
	hfont[10]=CreateFontIndirect(&lff[10]);
	
	lff[11].lfHeight=20;
	lff[11].lfUnderline=TRUE;
	hfont[11]=CreateFontIndirect(&lff[11]);
	
	lff[12].lfHeight=18;
	lff[12].lfWeight=FW_SEMIBOLD;
	lff[12].lfUnderline=TRUE;
	hfont[12]=CreateFontIndirect(&lff[12]);
	
	lff[13].lfHeight=22;
	lff[13].lfWeight=FW_BOLD;
	hfont[13]=CreateFontIndirect(&lff[13]);
	
	lff[14].lfHeight=20;
	lff[14].lfWeight=FW_BOLD;
	hfont[14]=CreateFontIndirect(&lff[14]);
}
void fontdelete(void){
	for (int n=0;n<nfonts;n++)DeleteObject(hfont[n]);
}
void framemake(HDC hdc,RECT* lprcupdate,int whipe){
	int border = 30;
	RECT rcin,rcout;
	SelectBrush(hdc,GetStockObject(LTGRAY_BRUSH));
	SelectPen(hdc,GetStockObject(NULL_PEN));
	
	rcin.right=xpos+xprintmax+border;
	rcin.left=xpos-border;
	rcin.top=ypos-border;
	rcin.bottom=ypos+yprintmax+border;
	
	border+=30;
	rcout.right=xpos+xprintmax+border;
	rcout.left=xpos-border;
	rcout.top=ypos-border;
	rcout.bottom=ypos+yprintmax+border;
	
	if(whipe==1){
		RECT rcintersect;
		IntersectRect(&rcintersect,lprcupdate,&rcin);
		FillRect(hdc,&rcintersect,(HBRUSH)GetStockObject(WHITE_BRUSH));
	}
	
	
	DrawEdge(hdc,&rcin,EDGE_SUNKEN,BF_ADJUST|BF_RECT);
	DrawEdge(hdc,&rcout,EDGE_RAISED,BF_ADJUST|BF_RECT);
}
void scroll(int dx,int dy){
	RECT rc,rcscroll,rcclip,rcupdate;
	GetClientRect(hwndMain,&rc);
	rcupdate=rcscroll=rc;
	rcscroll.top+=lineprotect;
	rcclip=rcscroll;
	
	ScrollWindowEx(
		hwndMain,       // handle of window to scroll
		dx,     // amount of horizontal scrolling
		dy,     // amount of vertical scrolling
		&rcscroll,      // address of structure with scroll rectangle
		&rcclip,        // address of structure with clip rectangle
		NULL,   // handle of update region
		NULL,   // address of structure for update rectangle
		SW_INVALIDATE | SW_ERASE        // scrolling flags
	);
	
	UpdateWindow(hwndMain);
}
void setwindowscrolls(void){
	
	RECT rc;
	
	GetClientRect(hwndMain,&rc);
	SCROLLINFO si;
	memset(&si,0,sizeof(SCROLLINFO));
	si.cbSize=sizeof(SCROLLINFO);
	si.fMask=SIF_POS|SIF_RANGE;
	
	si.nMin=-xprintmax+pageborder;
	si.nMax=rc.right-pageborder;
	si.nPos=si.nMin+si.nMax-xpos;
	SetScrollInfo(hwndMain,SB_HORZ,&si,TRUE);
	
	si.nMin=-yprintmax+pageborder;
	si.nMax=rc.bottom-pageborder;
	si.nPos=si.nMin+si.nMax-ypos;
	SetScrollInfo(hwndMain,SB_VERT,&si,TRUE);
}
void outputPage1(char* buffer){
	strcat(buffer,"\r\n\r\n");
	sprintf(string,"#12f#-5s#12h#0r  goto page 2  #r#%ds\r\n#f#h#c\r\n",
		IDM_PAGE2);
	strcat(buffer,string);
	sprintf(string,"#12f#-5s#12h#0r  goto page 3  #r#%ds\r\n#f#h#c\r\n",
		IDM_PAGE3);
	strcat(buffer,string);
	for(int i=0;i<nfonts;i++){
		sprintf(string,"#5r#%df #0g This is font number %d.\r\n#r\r\n#f",i,i);
		strcat(buffer,string);	        	
	}
	
}
void outputPage2(char* buffer){
	sprintf(string,"#12f#-5s#12h#0r  goto page 1  #r#%ds\r\n#f#h#c\r\n",
		IDM_PAGE1);
	strcat(buffer,string);
	sprintf(string,"#12f#-5s#12h#0r  goto page 3  #r#%ds\r\n#f#h#c\r\n",
		IDM_PAGE3);
	strcat(buffer,string);
	for(int i=0;i<colormax;i++){
		sprintf(string,"#13f #%dc this is #0hcolor#h number %d #c  #%dh_______#h \r\n#f",i,i,i);
		strcat(buffer,string);		
	}
}
void outputPage3(char* buffer){
	sprintf(string,"#12f#-5s#12h#0r  goto page 1  #r#%ds\r\n#f#h#c\r\n",
		IDM_PAGE1);
	strcat(buffer,string);
	sprintf(string,"#12f#-5s#12h#0r  goto page 2  #r#%ds\r\n#f#h#c\r\n",
		IDM_PAGE2);
	strcat(buffer,string);

	strcat(buffer,_LeftParagraph);
	for(int i=0;i<3;i++){
		sprintf(string,"#5r This is the left"
				"paragraph,line number %d \r\n#r \r\n",i);
		
		strcat(buffer,string);
	}

	for(int j=0;j<4;j++){
		strcat(buffer,_RightParagraph);
		strcat(buffer,"#15r #0g");
		for(int i=0;i<3+j;i++){   
			char* num[]={"first","second","third","fourth"};
			sprintf(string,"This is the %s right"
					"paragraph, line number %d \r\n",num[j],i);
			strcat(buffer,string);
		}
		strcat(buffer,"#r");
	}
	
	for(int k=0;k<4;k++){	
		strcat(buffer,_NextLeftParagraph);
		for(int i=0;i<3;i++){
			sprintf(string,"This is the next left"
					"paragraph,line number %d \r\n",i);
			
			strcat(buffer,string);
		}
		for(int j=0;j<4;j++){
			strcat(buffer,_RightParagraph);
			strcat(buffer,"#15r #0g");
			for(int i=0;i<3+j;i++){   
				char* num[]={"first","second","third","fourth"};
				sprintf(string,"This is the %s right"
						"paragraph, line number %d \r\n",num[j],i);
				strcat(buffer,string);
			}
			strcat(buffer,"#r");
		}	
	}
}	

void output(int erase){
	SetTimer(hwndMain,6,10,outputnowtimer);
	// useful if there is a seria of output() in a short time.(no flicker).
}
void CALLBACK outputnowtimer(HWND hwnd,UINT uMsg,UINT idEvent,DWORD dwTime){
	
	textmake(textbuffer);
	InvalidateRect(hwndMain,NULL,TRUE);
	UpdateWindow(hwndMain);
	setwindowscrolls();
	KillTimer(hwndMain,6);
}
void textmake(char*buffer)
{
	buffer[0]=0;
	strcat(buffer,"#14h#0c#0f");
	switch(selectedpage){
	case idPage1:
		outputPage1(buffer);
		break;
	case idPage2:
		outputPage2(buffer);
		break;
	case idPage3:
		outputPage3(buffer);
		break;
	}
}
