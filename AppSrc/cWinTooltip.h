// Defines and Structures needed for Tooltip
Define TTF_IDISHWND            For |CI$0001
Define TTF_CENTERTIP           For |CI$0002
Define TTF_RTLREADING          For |CI$0004
Define TTF_SUBCLASS            For |CI$0010
Define TTF_TRACK               For |CI$0020
Define TTF_ABSOLUTE            For |CI$0080
Define TTF_TRANSPARENT         For |CI$0100
Define TTF_DI_SETITEM          For |CI$8000       // valid only on the TTN_NEEDTEXT callback

// 2004-05-17 ------------------------------------ Start Nils G. Svedmyr
Define TTM_ACTIVATE            for (WM_USER +  1)
Define TTM_SETDELAYTIME        for (WM_USER +  3)
Define TTM_ADDTOOL             for (WM_USER +  4)
Define TTM_DELTOOL             for (WM_USER +  5)
Define TTM_NEWTOOLRECT         for (WM_USER +  6)
Define TTM_RELAYEVENT          for (WM_USER +  7)
Define TTM_GETTOOLINFO         for (WM_USER +  8)
Define TTM_SETTOOLINFO         for (WM_USER +  9)
Define TTM_HITTEST             for (WM_USER + 10)
Define TTM_GETTEXT             for (WM_USER + 11)
Define TTM_UPDATETIPTEXT       for (WM_USER + 12)
Define TTM_GETTOOLCOUNT        for (WM_USER + 13)
Define TTM_ENUMTOOLS           for (WM_USER + 14)
Define TTM_GETCURRENTTOOL      for (WM_USER + 15)
Define TTM_WINDOWFROMPOINT     for (WM_USER + 16)
Define TTM_TRACKACTIVATE       for (WM_USER + 17)
Define TTM_TRACKPOSITION       for (WM_USER + 18)
Define TTM_SETTIPBKCOLOR       for (WM_USER + 19)
Define TTM_SETTIPTEXTCOLOR     for (WM_USER + 20)
Define TTM_GETDELAYTIME        for (WM_USER + 21)
Define TTM_GETTIPBKCOLOR       for (WM_USER + 22)
Define TTM_GETTIPTEXTCOLOR     for (WM_USER + 23)
Define TTM_SETMAXTIPWIDTH      for (WM_USER + 24)
Define TTM_GETMAXTIPWIDTH      for (WM_USER + 25)
Define TTM_SETMARGIN           for (WM_USER + 26)
Define TTM_GETMARGIN           for (WM_USER + 27)
Define TTM_POP                 for (WM_USER + 28)
Define TTM_UPDATE              for (WM_USER + 29)
Define TTM_SETTITLEA           for (WM_USER + 32)  // wParam = TTI_*, lParam = char* szTitle
Define TTM_ADDTOOLW            for (WM_USER + 50)
// 2004-05-17 ------------------------------------ Stop Nils G. Svedmyr

// ToolTip Icons (Set with TTM_SETTITLE)
Define TTI_NONE                For 0
Define TTI_INFO                For 1
Define TTI_WARNING             For 2
Define TTI_ERROR               For 3

Define TTN_FIRST               For (-520)       // tooltips
Define TTN_LAST                For (-549)
Define TTN_GETDISPINFO         For (TTN_FIRST - 0)
Define TTN_SHOW                For (TTN_FIRST - 1)
Define TTN_POP                 For (TTN_FIRST - 2)

Define TTS_ALWAYSTIP           For |CI$01
Define TTS_NOPREFIX            For |CI$02
Define TTS_NOANIMATE           For |CI$10
Define TTS_NOFADE              For |CI$20
Define TTS_BALLOON             For |CI$40
Define TTS_CLOSE               For |CI$80

Type tTOOLINFO
    Field tTOOLINFO.cbSize   as Integer
    Field tTOOLINFO.uFlags   as Integer
    Field tTOOLINFO.hwnd     as Handle
    Field tTOOLINFO.uID      as Integer
    Field tTOOLINFO.rect     as Char tRect_size
    Field tTOOLINFO.hInst    as Handle
    Field tTOOLINFO.lpszText as Pointer
    Field tTOOLINFO.lParam   as Integer
End_Type

Type tNmTTDispInfo
    Field tNmTTDispInfo.hdr.hwndFrom as Handle
    Field tNmTTDispInfo.hdr.idFrom   as Integer
    Field tNmTTDispInfo.hdr.code     as Integer
    Field tNmTTDispInfo.lpszText     as Pointer
    Field tNmTTDispInfo.szText       as Char 80
    Field tNmTTDispInfo.hinst        as Handle
    Field tNmTTDispInfo.uFlags       as Integer
    //Field tNmTTDispInfo.lParam                 as Integer
End_Type

