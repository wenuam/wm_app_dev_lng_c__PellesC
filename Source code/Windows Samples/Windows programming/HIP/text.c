#include <windows.h>
#include <windowsx.h>
#include <stdio.h>

#include "mainres.h"
#include "text.h"

#define linespace 1

extern HCURSOR hcursorarrow;
extern HFONT hfont[];
extern HPEN redpen2,greypen2;
extern HWND hwndMain,hwndNDlg;
extern int xprint,yprint,
xprintmax,yprintmax,
xpos,ypos,
offset,maxoffset;

int printrectsinstead;
int ymaxlocal;
int isprinting;
int printbackcolor;
int isrightalign,rightalign;
int lineheight,lineright,lineright2;
int iDown;

COLORREF color[colormax+1]={
	RGB(0  ,  0,  0),//0
	RGB(255,  0,  0),
	RGB(0  ,255,  0),
	RGB(0  ,  0,255),
	RGB(128,  0,  0),
	RGB(0  ,128,  0),//5
	RGB(0  ,  0,128),
	RGB(255,255,  0),
	RGB(255,  0,255),
	RGB(0  ,255,255),
	RGB(255,192,192),//10
	RGB(192,255,192),
	RGB(192,192,255),
	RGB(255,255,255),
	RGB(192,192,192),
	RGB(228,228,228), //15
	RGB(223,223,  0),
	RGB(223,  0,223),
	RGB(0,  223,223),
	RGB(128 , 64, 0),
	RGB(128,128,128) //20
	
};

void textout(HDC hdc,char* textbuffer,int calclen,int printing){
	//////////////////make text from buffer a to screen with formatting
	printrectsinstead=printing;
	if(printing){
		printbackcolor=0;
		isprinting=1;
	}
	else{
		printbackcolor=1;
		isprinting=0;
	}
	
	textswitch(0,'s',-6,NULL,0,0,0);//ncountmax=0
	textswitch(0,'o',-1,NULL,0,0,0);//ncountmax=0
	textswitch(0,'m',1,NULL,0,0,0);//ncountmax=0
	
	
	char line[linemax+2];
	char* lptextbuffer;
	char* lpline;
	lptextbuffer=textbuffer;
	lpline=line;
	
	yprint=0;
	
	xprintmax=0;
	yprintmax=0;
	
	while(*lptextbuffer!=0){
		
		while( (*lptextbuffer!=0) && !((*lptextbuffer==13) && (*(lptextbuffer+1)==10)) ){
			if(lpline<(line+linemax)){
				*lpline=*lptextbuffer;
			}
			lptextbuffer++;
			lpline++;
		}
		
		if(*lptextbuffer==0){
			*lpline=*lptextbuffer;
		}
		
		if(*lptextbuffer==13){
			*lpline=0;
			lpline=line;
			lptextbuffer+=2;
		}
		line[linemax]=0;
		
		//yprint+=linespace+textline(hdc,line,0,yprint+ypos,NULL,calclen);
		int y1=linespace+textline(hdc,line,offset,yprint+ypos,NULL,calclen);
		yprint+=y1;
	}
	
	
}

int textline(HDC hdc,char* line,int x,int y,int* lplen,int calclen){
	int num;
	char mode;
	char* lpline;
	char* lpchara=line;
	char* lpcharb;
	char* lpchardigit;
	xprint=x;
	lineheight=0;
	int height=0;
	int ismove=0;
	
	if(lplen!=NULL)*lplen=0;
	
	for (lpline=line;*lpline!=0;lpline++){
		
		if (*lpline=='#'){
			lpcharb=lpline;
			lpline++;
			lpchardigit=lpline;
			while(isdigit(*lpline)||('-'==*lpline) )lpline++;
			if(isalpha(*lpline)){
				
				mode=*lpline;
				
				num=atoi(lpchardigit);
				if(isalpha(*lpchardigit))num=-1;
				//                      ismove=((mode=='m')||ismove);
				int len =lpcharb-lpchara;
				if(len>0){
					if(!ismove){
						height=textlinepart(hdc,lpchara,len,xprint+xpos,y+iDown,lplen,calclen);
					}
				}
				if(height>lineheight)lineheight=height;
				
				lpchara=lpline+1;
				textswitch(hdc,mode,num,lpline+1,len,xprint+xpos,y);
			}
		}
	}
	
	
	if(!ismove){
		height=textlinepart(hdc,lpchara,lpline-lpchara,xprint+xpos,y,lplen,calclen);
		if(height>lineheight)lineheight=height;
	}
	return lineheight;
}

int textlinepart(HDC hdc,char* lpline,int slen,int x,int y,int* lplen,int calclen){
	long nHeight;
	RECT r;
	
	r.left=x;
	r.top=y;
	r.right=0;
	r.bottom=0;
	
	nHeight=DrawText(hdc,"x",1,&r,DT_CALCRECT | DT_EXPANDTABS);
	TEXTMETRIC tm;
	GetTextMetrics(hdc,&tm);
	nHeight+=tm.tmExternalLeading;
	
	if(slen==0)return nHeight;
	r.left=x;
	r.top=y;
	r.right=0;
	r.bottom=0;
	
	DrawText(hdc,lpline,slen,&r,DT_CALCRECT | DT_EXPANDTABS);
	
	int len=r.right-r.left;
	if(lplen!=NULL){
		*lplen+=len;
	}
	if (r.right>lineright)lineright=r.right;
	if (r.right>lineright2)lineright2=r.right;
	xprint=x=r.right-xpos;
	
	if(x>xprintmax && calclen)xprintmax=x;
	if(x>maxoffset && calclen)maxoffset=x;
	int y1=r.bottom-ypos+tm.tmExternalLeading;//+nHeight;
	if(y1>yprintmax)yprintmax=y1;
	if(y1>ymaxlocal)ymaxlocal=y1;
	
	
	if(!isrightalign){
		DrawText(hdc,lpline,slen,&r,DT_EXPANDTABS);
	}
	else{
		r.right=rightalign;
		DrawText(hdc,lpline,slen,&r,DT_EXPANDTABS | DT_RIGHT);
		isrightalign=0;
	}
	
	return nHeight;
}
int textswitch(HDC hdc,char mode,int num,char* line,int slen,int x,int y){
	switch (mode){
		
	case 'k':
		{
			if(isprinting)break;
			HWND hwnd=(HWND)num;
			static int oldpos;
			HFONT hfont=(HFONT)SendMessage(hwndMain,WM_GETFONT,0,0);
			TEXTMETRIC tm;
			GetTextMetrics(hdc,&tm);
			RECT rc;
			int position=x<<16|(y&0x00ff);
			
			if(GetWindowLong(hwnd,GWL_USERDATA)!=position){
				SendMessage(hwnd,WM_SETFONT,(WPARAM)hfont,MAKELPARAM(TRUE, 0));
				oldpos=position;
				GetWindowRect(hwnd,&rc);
				SetWindowLong(hwnd,GWL_USERDATA,position);
				SetWindowPos(hwnd,hwndMain,
					x,y,rc.right-rc.left,rc.bottom-rc.top,
					SWP_NOZORDER|SWP_NOOWNERZORDER  |SWP_SHOWWINDOW
				);
				
			}
		}
		break;
	case 'a':
		//right align
		{
			if(num==1){
				//store right position
				rightalign=xprint+xpos;
			}
			if(num==-1){
				//start right align
				isrightalign=1;
			}
		}
		break;
		
	case 'q':
		//offset forward
		{
			offset+=num;
		}
		break;
		
	case 'o':
		{
			//makes an offset for a paragraph
			if(num==1){
				//begin of next paragraph
				offset=maxoffset;
				maxoffset=0;
			}
			if(num==-1){
				// set offset to zero
				offset=0;
				maxoffset=0;
			}
		}
		break;
	case 'm':
		//remembers yMaximal position
		if(num==1){
			ymaxlocal=0;
		}
		if(num==-1){
			yprint=ymaxlocal;
		}
		break;
	case 'x':
		{
			//remember x printing position
			static int x=0;
			if(num==1){
				x=xprint;
			}
			if(num==-1){
				xprint=x;
			}
		}
		break;
	case 'y':
		{
			//remember y printing position
			static int y=0;
			if(num==1){
				y=yprint;
			}
			if(num==-1){
				yprint=y;
			}
		}
		break;
	case 'p':
		//pixels forward
		xprint+=num;
		break;
	case 'h':
		//change back color
		{
			COLORREF static bc=0;
			if (num>=0){
				bc=SetBkColor(hdc,color[num]);
			}
			if (num==-1){
				SetBkColor(hdc,bc);
			}
			if (printbackcolor==0){
				SetBkColor(hdc,color[13]);
			}
			break;
		}
	case 'u':
		{
			TEXTMETRIC tm;
			GetTextMetrics(hdc,&tm);
			if(iDown==0){
				iDown=(int)tm.tmDescent-1;
			}
			else{
				iDown=0;
			}
		}
		break;
	case 'd':
		{
			TEXTMETRIC tm;
			GetTextMetrics(hdc,&tm);
			//half line more
			if(num==-1){
				yprint+=num*(int)(0.5*(double)(tm.tmHeight+tm.tmExternalLeading));
			}
			//half line less
			if(num=-2){
				yprint-=num*(int)(0.5*(double)(tm.tmHeight+tm.tmExternalLeading));
			}
		}
		break;
		
	case 'b':
		//goback one line
		{
			TEXTMETRIC tm;
			GetTextMetrics(hdc,&tm);
			yprint-=num*(tm.tmHeight+tm.tmExternalLeading);
		}
		break;
	case 'c':
		//change text color
		{
			static COLORREF old=0;
			if (num>=0 && num <=colormax)
				old=SetTextColor(hdc,color[num]);
			if(num==-1)
				SetTextColor(hdc,old);
		}
		break;
		
	case 'f':
		//change font
		{
			static int old=0,veryold=0;
			if (num>=0 && num < nfonts){
				veryold=old;
				old=num;
				SelectFont(hdc,hfont[num]);
			}
			if(num==-1){
				SelectFont(hdc,hfont[veryold]);
				old=veryold;
			}
		}
		break;
	case 'g':
		//graphic
		{
			if(num<nhbmp){
				HDC shdc;
				HINSTANCE hinst;
				BITMAP bmp;
				HBITMAP hbmp;
				
				hbmp=hBmp[num];
				GetObject(hbmp, sizeof(BITMAP), &bmp);
				int bmx =bmp.bmWidth;
				int bmy =bmp.bmHeight;
				
				hinst=GetModuleHandle(NULL);
				
				shdc = CreateCompatibleDC(hdc);
				SelectObject(shdc, hbmp);
				
				TEXTMETRIC tm;
				GetTextMetrics(hdc,&tm);
				int height=1.3*tm.tmHeight;
				int width=(int)((double)bmx/(double)bmy*(double)height);
				
				StretchBlt(hdc,x,y,width,height,shdc,0,0,bmx,bmy,SRCCOPY);
				DeleteDC(shdc);
				xprint+=width;
				
			}
		}
		break;
	case 'r':
		//make a frame
		{
			static RECT rc;
			static int dist=0;
			if(num>=0) dist=num;
			if (num>=0){
				rc.left=x-dist;
				rc.top=y-dist;
				lineright=0;
			}
			//moves down with frame distance (useful between frames)
			if(num==-2){
				yprint+=dist*3;
			}
			//moves right with frame distance (useful between frames)
			if(num==-3){
				offset+=dist*3;
			}
			if(num==-1){
				rc.right=lineright+dist;
				rc.bottom=y+lineheight+dist+linespace;
				if(rc.right>dist&&rc.bottom>dist){
					if(printrectsinstead){
						SelectBrush(hdc,GetStockObject(HOLLOW_BRUSH));
						SelectPen  (hdc,GetStockObject(BLACK_PEN));
						Rectangle(hdc,rc.left,rc.top,rc.right,rc.bottom);
					}
					else{
						DrawEdge(hdc,&rc,EDGE_RAISED,BF_ADJUST|BF_RECT);
					}
				}
			}
		}
		break;
		
	case 's':
		//for mouse marking
		{
			if(isprinting)break;
			#define itemmax 2048
			static int count=0,countint=0,countmax=0;
			static int selected=0;
			typedef struct {
				RECT rc;
				int ndue;
			}
			it,* lpit;
			static it item[itemmax+1];
			lpit   lpitem;
			LPRECT lprect;
			
			lpitem=&item[count];
			lprect=&lpitem->rc;
			
			
			if(num==-6){
				countint=0;//value relatet item
				count=0;//item
				countmax=0;
			}
			//store beginning of item on page
			if(num==-5&&count<itemmax){
				
				lprect->left=x-3;
				lprect->top =y;
				lineright2=0;
			}
			//store end of item on page
			if(num==-1&&count<itemmax){//double code !!!
				
				TEXTMETRIC tm;
				GetTextMetrics(hdc,&tm);
				//                              lprect->right=x+3;
				lprect->right=lineright2+3;
				lprect->bottom=y+tm.tmHeight+1;
				lpitem->ndue=countint;
				count++;
				countint++;
			}
			//store end of item on page with specail num
			if(num>=0&&count<itemmax){//double code !!!
				
				TEXTMETRIC tm;
				GetTextMetrics(hdc,&tm);
				//                              lprect->right=x+3;
				lprect->right=lineright2+3;
				lprect->bottom=y+tm.tmHeight+1;
				lpitem->ndue=num;
				count++;
			}
			//item relatet number must not be markable
			if(num==-4){
				countint++;
			}
			// if mouse moves on the item
			if(num==-2){
				
				POINT pt;
				pt.x=x;
				pt.y=y;
				selected=-1;
				for(int n=0;n<countmax;n++){
					lpitem=&item[n];
					lprect=&lpitem->rc;
					if(PtInRect(lprect,pt)/*&&// ????????
						(item[n].rc.top>moveprotect+helpprotect+lineprotect||
						item[n].ndue==-3)*/){
						SetCursor(hcursorarrow);
						selected=n;
						HBRUSH hbrush=(HBRUSH)GetStockObject(NULL_BRUSH);
						SelectBrush(hdc,hbrush);
						SelectPen(hdc,redpen2);
						Rectangle(hdc,lprect->left,lprect->top,lprect->right,lprect->bottom);
					}
				}
				HBRUSH hbrush=(HBRUSH)GetStockObject(NULL_BRUSH);
				SelectBrush(hdc,hbrush);
				SelectPen(hdc,greypen2);
				for(int n=0;n<countmax;n++){
					if(n!=selected){
						LPRECT lpoldrc=&item[n].rc;
						Rectangle(hdc,lpoldrc->left,lpoldrc->top,lpoldrc->right,lpoldrc->bottom);
					}
				}
				
				# undef itemmax
			}
			// if leftbutton is pressed
			if(num==-3){
				
				int test=item[selected].ndue;//????
				
				if(selected==-1)return -1;//????
				return item[selected].ndue;
				
				
			}
			if(count>countmax)countmax=count;
			
		}
		break;
	}
	return 0;
}

