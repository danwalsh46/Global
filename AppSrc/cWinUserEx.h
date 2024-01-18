// cWinUserEx.h
// Compiled by Sergey V. Natarov (senatc@postman.ru)
// Windows User Interface
//

// *************************************************
// CONSTANTS 
// *************************************************

Define SM_MOUSEWHEELPRESENT For 75
Define SM_CXVIRTUALSCREEN   For 78
Define SM_CYVIRTUALSCREEN   For 79
Define SM_CMONITORS         For 80
Define SM_REMOTESESSION     For |CI$1000

// DrawText() Format Flags
Define DT_TOP                   For |CI$00000000
Define DT_LEFT                  For |CI$00000000
Define DT_CENTER                For |CI$00000001
Define DT_RIGHT                 For |CI$00000002
Define DT_VCENTER               For |CI$00000004
Define DT_BOTTOM                For |CI$00000008
Define DT_WORDBREAK             For |CI$00000010
Define DT_SINGLELINE            For |CI$00000020
Define DT_EXPANDTABS            For |CI$00000040
Define DT_TABSTOP               For |CI$00000080
Define DT_NOCLIP                For |CI$00000100
Define DT_EXTERNALLEADING       For |CI$00000200
Define DT_CALCRECT              For |CI$00000400
Define DT_NOPREFIX              For |CI$00000800
Define DT_INTERNAL              For |CI$00001000

Define DT_EDITCONTROL           For |CI$00002000
Define DT_PATH_ELLIPSIS         For |CI$00004000
Define DT_END_ELLIPSIS          For |CI$00008000
Define DT_MODIFYSTRING          For |CI$00010000
Define DT_RTLREADING            For |CI$00020000
Define DT_WORD_ELLIPSIS         For |CI$00040000

// RedrawWindow() flags
Define RDW_INVALIDATE           For |CI$0001
Define RDW_INTERNALPAINT        For |CI$0002
Define RDW_ERASE                For |CI$0004

Define RDW_VALIDATE             For |CI$0008
Define RDW_NOINTERNALPAINT      For |CI$0010
Define RDW_NOERASE              For |CI$0020

Define RDW_NOCHILDREN           For |CI$0040
Define RDW_ALLCHILDREN          For |CI$0080

Define RDW_UPDATENOW            For |CI$0100
Define RDW_ERASENOW             For |CI$0200

Define RDW_FRAME                For |CI$0400
Define RDW_NOFRAME              For |CI$0800

// Monolithic state-drawing routine 
// Image Type 
Define DST_COMPLEX              For |CI$0000
Define DST_TEXT                 For |CI$0001
Define DST_PREFIXTEXT           For |CI$0002
Define DST_ICON                 For |CI$0003
Define DST_BITMAP               For |CI$0004

// State Type 
Define DSS_NORMAL               For |CI$0000
Define DSS_UNION                For |CI$0010  
Define DSS_DISABLED             For |CI$0020
Define DSS_MONO                 For |CI$0080
Define DSS_HIDEPREFIX           For |CI$0200
Define DSS_PREFIXONLY           For |CI$0400
Define DSS_RIGHT                For |CI$8000

// flags For DrawFrameControl */
Define DFC_CAPTION              For 1
Define DFC_MENU                 For 2
Define DFC_SCROLL               For 3
Define DFC_BUTTON               For 4
// (WINVER >= 0x0500)
Define DFC_POPUPMENU            For 5

Define DFCS_CAPTIONCLOSE        For |CI$0000
Define DFCS_CAPTIONMIN          For |CI$0001
Define DFCS_CAPTIONMAX          For |CI$0002
Define DFCS_CAPTIONRESTORE      For |CI$0003
Define DFCS_CAPTIONHELP         For |CI$0004

Define DFCS_MENUARROW           For |CI$0000
Define DFCS_MENUCHECK           For |CI$0001
Define DFCS_MENUBULLET          For |CI$0002
Define DFCS_MENUARROWRIGHT      For |CI$0004
Define DFCS_SCROLLUP            For |CI$0000
Define DFCS_SCROLLDOWN          For |CI$0001
Define DFCS_SCROLLLEFT          For |CI$0002
Define DFCS_SCROLLRIGHT         For |CI$0003
Define DFCS_SCROLLCOMBOBOX      For |CI$0005
Define DFCS_SCROLLSIZEGRIP      For |CI$0008
Define DFCS_SCROLLSIZEGRIPRIGHT For |CI$0010

Define DFCS_BUTTONCHECK         For |CI$0000
Define DFCS_BUTTONRADIOIMAGE    For |CI$0001
Define DFCS_BUTTONRADIOMASK     For |CI$0002
Define DFCS_BUTTONRADIO         For |CI$0004
Define DFCS_BUTTON3STATE        For |CI$0008
Define DFCS_BUTTONPUSH          For |CI$0010

Define DFCS_INACTIVE            For |CI$0100
Define DFCS_PUSHED              For |CI$0200
Define DFCS_CHECKED             For |CI$0400

// (WINVER >= 0x0500)
Define DFCS_TRANSPARENT         For |CI$0800
Define DFCS_HOT                 For |CI$1000

Define DFCS_ADJUSTRECT          For |CI$2000
Define DFCS_FLAT                For |CI$4000
Define DFCS_MONO                For |CI$8000

// Owner draw control types
Define ODT_MENU                 For 1
Define ODT_LISTBOX              For 2
Define ODT_COMBOBOX             For 3
Define ODT_BUTTON               For 4
// (WINVER >= 0x0400)
Define ODT_STATIC               For 5

// Owner draw actions
Define ODA_DRAWENTIRE           For |CI$0001
Define ODA_SELECT               For |CI$0002
Define ODA_FOCUS                For |CI$0004

// Owner draw state
Define ODS_SELECTED             For |CI$0001
Define ODS_GRAYED               For |CI$0002
Define ODS_DISABLED             For |CI$0004
Define ODS_CHECKED              For |CI$0008
Define ODS_FOCUS                For |CI$0010
// (WINVER >= 0x0400)
Define ODS_DEFAULT              For |CI$0020
Define ODS_COMBOBOXEDIT         For |CI$1000
// (WINVER >= 0x0500)
Define ODS_HOTLIGHT             For |CI$0040
Define ODS_INACTIVE             For |CI$0080
// (_WIN32_WINNT >= 0x0500)
Define ODS_NOACCEL              For |CI$0100
Define ODS_NOFOCUSRECT          For |CI$0200

Define COLOR_HOTLIGHT           For 26

define DCX_WINDOW           for |CI00000001
define DCX_CACHE            for |CI00000002
define DCX_NORESETATTRS     for |CI00000004
define DCX_CLIPCHILDREN     for |CI00000008
define DCX_CLIPSIBLINGS     for |CI00000010
define DCX_PARENTCLIP       for |CI00000020

define DCX_EXCLUDERGN       for |CI00000040
define DCX_INTERSECTRGN     for |CI00000080

define DCX_EXCLUDEUPDATE    for |CI00000100
define DCX_INTERSECTUPDATE  for |CI00000200

define DCX_LOCKWINDOWUPDATE for |CI00000400

define DCX_VALIDATE         for |CI00200000

define SW_SCROLLCHILDREN for 1
define SW_INVALIDATE     for 2
define SW_ERASE          for 4

define SPI_GETWORKAREA              for 48

define WM_SETICON      for |CI$0080

define IMAGE_BITMAP        For 0
define IMAGE_ICON          For 1
define IMAGE_CURSOR        For 2
define IMAGE_ENHMETAFILE   For 3

define LR_DEFAULTCOLOR     for |CI$0000
define LR_MONOCHROME       for |CI$0001
define LR_COLOR            for |CI$0002
define LR_COPYRETURNORG    for |CI$0004
define LR_COPYDELETEORG    for |CI$0008
define LR_LOADFROMFILE     for |CI$0010
define LR_LOADTRANSPARENT  for |CI$0020
define LR_DEFAULTSIZE      for |CI$0040
define LR_VGACOLOR         for |CI$0080
define LR_LOADMAP3DCOLORS  for |CI$1000
define LR_CREATEDIBSECTION for |CI$2000
define LR_COPYFROMRESOURCE for |CI$4000
define LR_SHARED           for |CI$8000

define ICON_SMALL      for 0
define ICON_LARGE      for 1
        
// *************************************************
// STRUCTURES
// *************************************************

Type tMSG
    Field tMSG.hwnd    as Handle   // (HWND)
    Field tMSG.message as Integer  // (UINT)
    Field tMSG.wParam  as Integer  // (WPARAM)
    Field tMSG.lParam  as Integer  // (LPARAM)
    Field tMSG.Time    as Integer  // (DWORD)
    Field tMSG.pt      as Integer  // (POINT)
End_Type

Type DRAWITEMSTRUCT
    Field DRAWITEMSTRUCT.CtlType        as Integer   // (UINT)
    Field DRAWITEMSTRUCT.CtlID          as Integer   // (UINT)
    Field DRAWITEMSTRUCT.itemID         as Integer   // (UINT)
    Field DRAWITEMSTRUCT.itemAction     as Integer   // (UINT)
    Field DRAWITEMSTRUCT.itemState      as Integer   // (UINT)
    Field DRAWITEMSTRUCT.hwndItem       as Handle    // (HWND)
    Field DRAWITEMSTRUCT.hDC            as Handle    // (HDC)
    Field DRAWITEMSTRUCT.rcItemTop      as Integer   // (RECT)
    Field DRAWITEMSTRUCT.rcItemLeft     as Integer   // (RECT)
    Field DRAWITEMSTRUCT.rcItemBottom   as Integer   // (RECT)
    Field DRAWITEMSTRUCT.rcItemRight    as Integer   // (RECT)
    Field DRAWITEMSTRUCT.itemData       as Pointer   // (ULONG_PTR)
End_Type

// *************************************************
// FUNCTIONS
// *************************************************

External_function CreateWindowExEf      "CreateWindowExA"   USER32.DLL  Integer dwSt Pointer lpClass Pointer lpName Integer dwStyle Integer iX Integer iY Integer iW Integer iH Handle hParent Handle hMenu Handle hInst Pointer lpParam Returns Handle
External_function DestroyWindowEf       "DestroyWindow"     USER32.DLL  Handle hWnd Returns Integer
External_function GrayStringEf          "GrayStringA"       USER32.DLL  Handle hDC Handle hBrush Pointer lpOutputFunc Integer lpData Integer nCount Integer iX Integer iY Integer nWidth Integer nHeight Returns Integer
External_function DrawStateEf           "DrawStateA"        USER32.DLL  Handle hdc Handle hbr    Pointer lpOutputFunc Integer lData  Integer wData  Integer iX Integer iY Integer cx Integer cy Integer fuFlags Returns Integer
External_function TrackMouseEventEf     "TrackMouseEvent"   USER32.DLL  Pointer pMouse Returns Integer
External_function DrawFocusRectEf       "DrawFocusRect"     USER32.DLL  Handle hDC Pointer lpRect Returns Integer
External_function RedrawWindowEf        "RedrawWindow"      USER32.DLL  Handle hwnd Pointer pRect Handle hUpdReg Integer iFlags Returns Integer
External_function DrawFrameControlEf    "DrawFrameControl"  USER32.DLL  Handle hDC Pointer lpRect Integer uType Integer uState Returns Integer
External_function FindWindowExEf        "FindWindowExA"     USER32.DLL  Handle hParent Handle hChild Pointer pClass Pointer pName Returns Handle
External_function GetCaptureEf          "GetCapture"        USER32.DLL  Returns Handle
External_function LoadImageEf           "LoadImageA"        USER32.DLL  Handle hInst Pointer pPic Integer iTyp Integer iX Integer iY Integer iFlag Returns Integer
External_function GetSysColorBrushEf    "GetSysColorBrush"  USER32.DLL  Integer nIndex Returns Handle

External_function PeekMessageEf         "PeekMessageA"      USER32.DLL  Pointer lpMsg Handle hWnd Integer wMsgFilterMin Integer wMsgFilterMax Integer wRemoveMsg returns integer
External_function GetMessageEf          "GetMessageA"       USER32.DLL  Pointer lpMsg Handle hWnd Integer wMsgFilterMin Integer wMsgFilterMax Returns Integer
External_function TranslateMessageEf    "TranslateMessage"  USER32.DLL  Pointer lpMsg Returns Integer
External_function DispatchMessageEf     "DispatchMessageA"  USER32.DLL  Pointer lpMsg Returns Integer


External_Function SetRectEf             "SetRect"           USER32.DLL  Pointer lprc Integer xLeft Integer yTop Integer xRight Integer yBottom Returns integer
External_Function SetRectEmptyEf        "SetRectEmpty"      USER32.DLL  Pointer lprc Returns integer
External_Function CopyRectEf            "CopyRect"          USER32.DLL  Pointer lprcDest Pointer lprcSrc Returns integer
External_function InflateRectEf         "InflateRect"       USER32.DLL  Pointer pRect Integer dx Integer dY Returns Integer
External_function PtInRectEf            "PtInRect"          USER32.DLL  Pointer pRect Pointer pPoint Returns Integer
External_function OffsetRectEf          "OffsetRect"        USER32.DLL  Pointer pRect Integer iX Integer iY Returns Integer
External_Function ValidateRectEf        "ValidateRect"      USER32.DLL  Handle hWnd Pointer lpRect returns integer
External_Function InValidateRectEf      "InvalidateRect"    USER32.DLL  Handle hWnd Pointer lpRect Boolean bErase returns integer


// external_function FindWindowEx "FindWindowExA" user32.dll Handle hWndParent Handle hWndChildAfter String lpClassName String lpWindowName Returns Integer

external_function FlashWindowEf         "FlashWindow"       user32.dll  handle hWindow integer iInvert returns integer  
external_function BringWindowToTopEf    "BringWindowToTop"  user32.dll  handle hWnd returns integer    
external_function GetWindowTextLengthEf "GetWindowTextLengthA" user32.dll Handle hWnd Returns Integer                              

external_function OpenClipboardEf       "OpenClipboard" user32.dll Handle hWnd returns integer
external_function CloseClipboardEf      "CloseClipboard" user32.dll returns integer
external_function IsClipBoardFormatAvailableEf "IsClipboardFormatAvailable" user32.dll Integer wFormat returns integer
external_function EmptyClipboardEf      "EmptyClipboard" user32.dll returns integer
external_function GetClipboardDataEf    "GetClipboardData" user32.dll Integer uFormat returns handle
external_function SetClipboardDataEf    "SetClipboardData" user32.dll integer uFormat Handle hMem returns handle
external_function RegisterClipboardFormatEf "RegisterClipboardFormat" user32.dll String sFormat returns integer

external_function DrawEdgeEf            "DrawEdge" user32.dll handle hdc string sRECT Integer edge Integer grfFlags returns integer
external_function ScrollDCEf            "ScrollDC" user32.dll handle hdc Integer dx integer dy ;
                                                 pointer lprcScroll pointer lprcClip ;
                                                 Handle hrgnUpdate pointer lprcUpdate ;
                                                 returns integer
external_function ScrollWindowExEf      "ScrollWindowEx" user32.dll handle hwnd Integer x ;
                                                            integer y ;
                                                            Pointer lprcScroll ;
                                                            Pointer lprcClip ;
                                                            handle hrgnUpdate ;
                                                            Pointer lprcUpdate ;
                                                            Integer fuScroll ;
                                                            returns integer        
external_function GetWindowDCEf "GetWindowDC" user32.dll handle hwnd returns handle
external_function ReleaseDCEf "ReleaseDC" user32.dll handle hwnd handle hdc returns integer
external_function GetDCExEf "GetDCEx" user32.dll handle hwnd handle hrgnclip ;
                                               integer fdwOptions returns handle
External_Function ShowCursorEf "ShowCursor" User32.Dll Integer bState Returns Integer
External_Function CopyIconEf "CopyIcon" User32.dll Handle hIcon returns Handle
external_function DestroyIconEf "DestroyIcon" user32.dll Handle hIcon Returns Integer
External_function LoadCursorEf "LoadCursorA" user32.dll Handle hInstance Integer iCursor Returns handle
external_function GetCursorPosEf "GetCursorPos" user32.dll pointer lppt returns integer
External_Function ClientToScreenEf "ClientToScreen" user32.dll Handle hwnd Pointer lpPoint returns Integer
External_Function ScreenToClientEf "ScreenToClient" user32.dll Handle hWnd Pointer lpPoint returns integer
External_Function ReleaseCaptureEf "ReleaseCapture" user32.dll returns integer
External_Function SetMenuItemBitmapsEf "SetMenuItemBitmaps" user32.dll Handle hMenu Integer uPosition Integer uFlags Handle hBitmapUnChecked Handle hBitmapChecked returns integer
external_function RegisterWindowMessageEf "RegisterWindowMessageA" user32.dll String lpString returns integer
external_function GetWindowRectEf "GetWindowRect" user32.dll handle hWnd Pointer pRect returns integer
external_function InvalidateRgnEf "InvalidateRgn" user32.dll handle hWnd handle hRgn boolean bErase returns integer
external_function ShowWindowEf "ShowWindow" user32.dll handle hWnd integer iCmdShow returns integer
external_function GetWindowEf "GetWindow" user32.dll handle hwnd integer wCmd returns integer
external_function SetParentEf "SetParent" user32.dll handle hWndChild handle hWndNewParent returns integer
external_function ShowWindowAsyncEf "ShowWindowAsync" user32.dll handle hWindow integer iCmdShow returns integer
external_function GetClassNameEf "GetClassNameA" user32.dll handle hWnd Pointer lpClassName Integer nMaxCount Returns integer
external_function GetParentEf "GetParent" user32.dll handle hWnd Returns Integer
external_function GetFocusEf "GetFocus" user32.dll returns integer
external_function GetWindowThreadProcessIDEf "GetWindowThreadProcessID" user32.dll handle hWnd integer iVar returns integer
external_function AttachThreadInputEf "AttachThreadInput" user32.dll Integer idAttach integer idAttachTo integer bAttach returns integer
external_function GetCurrentThreadIDEf "GetCurrentThreadID" user32.dll returns integer
external_function GetForegroundWindowEf "GetForegroundWindow" user32.dll returns integer
external_function SetForegroundWindowEf "SetForegroundWindow" user32.dll handle hWnd returns integer
External_Function EnumChildWindowsEf "EnumChildWindows" user32.dll handle hWndParent integer ipoEnumFunc integer iParam returns integer
External_Function SendMessageEf "SendMessageA" user32.dll handle hwnd Integer iMsg Integer wParam Integer lParam returns integer
External_Function GetWindowWordEf "GetWindowWord" user32.dll handle hwnd integer iOffset returns handle
External_Function GetDesktopWindowEf "GetDesktopWindow" user32.dll returns handle
External_Function SetWindowPosEf "SetWindowPos" user32.dll handle hwnd handle hwndParent integer x integer y integer cx integer cy integer uFlags returns integer
External_Function SystemParametersInfoEf "SystemParametersInfoA" user32.dll Integer uAction Integer uParam Integer lpvParam Integer fuWinIni returns integer

external_function WindowFromDCEf "WindowFromDC" user32.dll handle hdc returns handle
external_function FillRectEf "FillRect" user32.dll handle hdc Pointer lpRect handle hBrush returns integer
external_function FrameRectEf "FrameRect" user32.dll handle hdc Pointer lpRect Handle hBrush returns integer
external_function InvertRectEf "InvertRect" user32.dll handle hdc Pointer lpRect returns integer
external_function PaintDesktopEf "PaintDesktop" user32.dll handle hdc returns integer

external_function GetDCEf "GetDC" user32.dll handle hwnd returns handle

External_Function GetKeyboardTypeEf "GetKeyboardType" User32.Dll Integer iTypeFlag Returns Integer
External_Function GetKeyboardLayoutNameEf "GetKeyboardLayoutNameA" User32.Dll Pointer pwszKLID Returns Integer

External_Function GetDoubleClickTimeEf "GetDoubleClickTime" User32.Dll Returns Integer

