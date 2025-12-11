; ####################################################
;       William F. Cravener 6/10/2003
; ####################################################
    
        .486
        .model flat,stdcall
        option casemap:none   ; case sensitive
    
; ####################################################
    
        include \masm32\include\windows.inc
        include \masm32\include\user32.inc
        include \masm32\include\kernel32.inc
        include \masm32\include\comctl32.inc

        includelib \masm32\lib\user32.lib
        includelib \masm32\lib\kernel32.lib
        includelib \masm32\lib\comctl32.lib

; ####################################################

        ID_SLIDER1 equ 1001

        MIXER_ERROR equ 0FFFFFFFFh
        
        MT_VUGAUGE equ 2;	Gauge Style VU
        MT_GDGAUGE equ 4;	Gauge Style Grid like
        
        WM_UPDATEMETER	equ WM_USER+1500	
		WM_SETFGCOLOR	equ WM_USER+1501
		WM_SETBGCOLOR	equ WM_USER+1502
		WM_SETGDCOLOR	equ WM_USER+1503
		WM_SETBDCOLOR	equ WM_USER+1504
		WM_SETGDSPACING	equ WM_USER+1505
		WM_FILLED		equ WM_USER+1506
		WM_PEAK			equ WM_USER+1507

; --------------------------------------------------------
    
        ChangeVolume PROTO :DWORD,:DWORD,:DWORD,:DWORD

; --------------------------------------------------------
    
.data
        DllName       db "meter.dll",0

        FuncNameGet   db "initMeter",0
        
        DllNotFound   db "Cannot load meter.dll",0
        MixerError    db "Error occured accessing Mixer",0
        Dlgname       db "VOLCONTROL",0
        className	  db "MeterCtrl32",0
        hLibHandle    dd ?

        initMeter     dd ?
        SetVolAddr    dd ?
        CloseVolAddr  dd ?
        hwndMeter     DWORD       ?
        hwndMeter2    DWORD       ?
        value		  DWORD		  ?

.data?

        hInstance HINSTANCE ?
        icex INITCOMMONCONTROLSEX <?>

; ###############################################################
    
.code
    
start:
    
        invoke GetModuleHandle,0
        mov hInstance,eax

; -----------------------------
;   Init common control classes
; -----------------------------
        mov icex.dwSize,sizeof INITCOMMONCONTROLSEX
        mov icex.dwICC,0FFFFh
        invoke InitCommonControlsEx,ADDR icex

; ------------------------------------------------
;   Load Volume Control DLL and get proc addresses
; ------------------------------------------------
        invoke LoadLibrary,ADDR DllName
        .if eax == 0
            invoke MessageBox,0,ADDR DllNotFound,0,MB_OK
        .else
            ;mov hLibHandle,eax
            ;invoke GetProcAddress,hLibHandle,ADDR FuncNameGet
            ;mov initMeter,eax
        .endif

; ---------------------------------------------
;   Call the dialog box stored in resource file
; ---------------------------------------------
        invoke DialogBoxParam,hInstance,ADDR Dlgname,0,ADDR ChangeVolume,0
        invoke FreeLibrary,hLibHandle
        invoke ExitProcess,eax
    
; ###############################################################
    
ChangeVolume proc hWin:DWORD,uMsg:DWORD,aParam:DWORD,bParam:DWORD
    
    LOCAL Ps:PAINTSTRUCT
    
        .if uMsg == WM_INITDIALOG
                    invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_SETRANGEMIN,FALSE,0
                    invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_SETRANGEMAX,FALSE,100
                    invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_SETLINESIZE,FALSE,10
                    ;-------------------------------------------------------- 
                    ; Open the mixer control and get the current volume value
                    ;--------------------------------------------------------
                    ;call [GetVolAddr]
                    ;.if eax == MIXER_ERROR
                    ;    invoke MessageBox,0,ADDR MixerError,0,MB_OK
                    ;    invoke SendMessage,hWin,WM_CLOSE,0,0
                    ;.else
                    ;    invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_SETPOS,TRUE,eax
                    ;.endif
                    
                    invoke CreateWindowEx, WS_EX_CLIENTEDGE, ADDR className,NULL, WS_VISIBLE or WS_CHILD or MT_VUGAUGE,10,10,75,220,hWin,101,0,0
                    mov hwndMeter,eax
                    invoke CreateWindowEx, WS_EX_CLIENTEDGE, ADDR className,NULL, WS_VISIBLE or WS_CHILD or MT_GDGAUGE,90,10,260,180,hWin,101,0,0
                    mov hwndMeter2,eax
                    
                    invoke SendMessage,hwndMeter,WM_SETBGCOLOR,0000000h,0
                    invoke SendMessage,hwndMeter,WM_SETGDCOLOR,0000080h,0
                    invoke SendMessage,hwndMeter,WM_SETFGCOLOR,00000FFh,000FFFFh
                    invoke SendMessage,hwndMeter,WM_PEAK,TRUE,0
                    ;invoke SendMessage,hwndMeter2,WM_FILLED,TRUE,0
                    invoke SendMessage,hwndMeter2,WM_SETGDCOLOR,0008000h,0
                    invoke SendMessage,hwndMeter2,WM_SETFGCOLOR,000FF00h,0
                    
        .elseif uMsg == WM_PAINT
                        invoke BeginPaint,hWin,ADDR Ps
                        invoke EndPaint,hWin,ADDR Ps

        .elseif uMsg == WM_CLOSE
                        ;------------------------------------------
                        ; Be sure to close the mixer volume control
                        ; -----------------------------------------  
                        ;call [CloseVolAddr]
                        invoke EndDialog,hWin,0
		.elseif uMsg == WM_HSCROLL
                        mov eax,aParam
                        and eax,0FFFFh  
                        .if eax == TB_THUMBTRACK or TB_THUMBPOSITION
                            mov eax,aParam
                            shr eax,16
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            ;push eax
                            ;call [SetVolAddr]
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0
                 
                    .elseif eax == TB_LINEUP      
                            invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_GETPOS,0,0
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0
                 
                    .elseif eax == TB_LINEDOWN
                            invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_GETPOS,0,0
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0
                 
                    .elseif eax == TB_PAGEUP
                            invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_GETPOS,0,0
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0
                 
                    .elseif eax == TB_PAGEDOWN
                            invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_GETPOS,0,0
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0

                    .elseif eax == TB_TOP
                            invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_GETPOS,0,0
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0

                    .elseif eax == TB_BOTTOM
                            invoke SendDlgItemMessage,hWin,ID_SLIDER1,TBM_GETPOS,0,0
                            ;-------------------------------- 
                            ;Set the new volume control value
                            ;-------------------------------- 
                            mov value,eax
                            invoke SendMessage,hwndMeter,WM_UPDATEMETER,value,0
                            invoke SendMessage,hwndMeter2,WM_UPDATEMETER,value,0
                    .endif
        .endif
        xor eax,eax
        ret 
    
ChangeVolume endp
    
; ###############################################################

end start
