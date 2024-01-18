// cWinTrackMouse.h
// By Sergey V. Natarov
// Mouse tracking facility
//

// Defines and Structures needed for TrackMouseEvent    
Define WM_MOUSELEAVE            For |CI$02A3
Define WM_MOUSEHOVER            For |CI$02A1
Define WM_MOUSEWHEEL            For |CI$020A

Define TME_HOVER       For |CI$00000001
Define TME_LEAVE       For |CI$00000002
// WINVER >= 0x0500
Define TME_NONCLIENT   For |CI$00000010
// WINVER >= 0x0500 
Define TME_QUERY       For |CI$40000000
Define TME_CANCEL      For |CI$80000000

Define HOVER_DEFAULT   For |CI$FFFFFFFF

Type cfTRACKMOUSEEVENT
    Field cfTRACKMOUSEEVENT.cbSize      as DWORD     // (DWORD)
    Field cfTRACKMOUSEEVENT.dwFlags     as DWORD     // (DWORD)
    Field cfTRACKMOUSEEVENT.hwndTrack   as Handle    // (HWND)
    Field cfTRACKMOUSEEVENT.dwHoverTime as DWORD     // (DWORD)
End_Type
    
