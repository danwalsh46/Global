// ******************************************************************************* //
// ******************************************************************************* //
// ***********************                                 *********************** //
// ***********************          SysMonthCal32          *********************** //
// ***********************                                 *********************** //
// ******************************************************************************* //
// ******************************************************************************* //

Define MCN_FIRST               For (0-750)       // monthcal
Define MCN_LAST                For (0-759)

// Internal Days of the week
Define MCD_MONDAY       For 0
Define MCD_TUESDAY      For 1
Define MCD_WEDNESDAY    For 2
Define MCD_THURSDAY     For 3
Define MCD_FRIDAY       For 4
Define MCD_SATURDAY     For 5
Define MCD_SUNDAY       For 6

Define MONTHCAL_CLASS               For "SysMonthCal32"

Define MCM_FIRST                    For |CI$1000
Define MCM_GETCURSEL                For (MCM_FIRST + 1)
Define MCM_SETCURSEL                For (MCM_FIRST + 2)
Define MCM_GETMAXSELCOUNT           For (MCM_FIRST + 3)  // *
Define MCM_SETMAXSELCOUNT           For (MCM_FIRST + 4)  // *
Define MCM_GETSELRANGE              For (MCM_FIRST + 5)
Define MCM_SETSELRANGE              For (MCM_FIRST + 6)
Define MCM_GETMONTHRANGE            For (MCM_FIRST + 7)
Define MCM_SETDAYSTATE              For (MCM_FIRST + 8)
Define MCM_GETMINREQRECT            For (MCM_FIRST + 9)  // ToDo - Auto size control -
Define MCM_SETCOLOR                 For (MCM_FIRST + 10) // *
Define MCM_GETCOLOR                 For (MCM_FIRST + 11) // *

    Define MCSC_BACKGROUND          For 0   // the background color (between months)
    Define MCSC_TEXT                For 1   // the dates
    Define MCSC_TITLEBK             For 2   // background of the title
    Define MCSC_TITLETEXT           For 3
    Define MCSC_MONTHBK             For 4   // background within the month cal
    Define MCSC_TRAILINGTEXT        For 5   // the text color of header & trailing days

Define MCM_SETTODAY                 For (MCM_FIRST + 12) // *
Define MCM_GETTODAY                 For (MCM_FIRST + 13) // *
Define MCM_HITTEST                  For (MCM_FIRST + 14) // ----

Type MCHITTESTINFO
    Field MCHITTESTINFO.cbSize   as Integer       // (UINT)
    Field MCHITTESTINFO.pt       as Pointer       // (POINT)
    Field MCHITTESTINFO.uHit     as Integer       // out param (UINT)
    Field MCHITTESTINFO.st       as DateTime      // (SYSTEMTIME)
End_Type

Define MCHT_TITLE                   For |CI$00010000
Define MCHT_CALENDAR                For |CI$00020000
Define MCHT_TODAYLINK               For |CI$00030000
Define MCHT_NEXT                    For |CI$01000000   // these indicate that hitting
Define MCHT_PREV                    For |CI$02000000  // here will go to the next/prev month
Define MCHT_NOWHERE                 For |CI$00000000
Define MCHT_TITLEBK                 For (MCHT_TITLE)
Define MCHT_TITLEMONTH              For (MCHT_TITLE Ior |CI$0001)
Define MCHT_TITLEYEAR               For (MCHT_TITLE Ior |CI$0002)
Define MCHT_TITLEBTNNEXT            For (MCHT_TITLE Ior MCHT_NEXT Ior |CI$0003)
Define MCHT_TITLEBTNPREV            For (MCHT_TITLE Ior MCHT_PREV Ior |CI$0003)

Define MCHT_CALENDARBK              For (MCHT_CALENDAR)
Define MCHT_CALENDARDATE            For (MCHT_CALENDAR Ior |CI$0001)
Define MCHT_CALENDARDATENEXT        For (MCHT_CALENDARDATE Ior MCHT_NEXT)
Define MCHT_CALENDARDATEPREV        For (MCHT_CALENDARDATE Ior MCHT_PREV)
Define MCHT_CALENDARDAY             For (MCHT_CALENDAR Ior |CI$0002)
Define MCHT_CALENDARWEEKNUM         For (MCHT_CALENDAR Ior |CI$0003)

Define MCM_SETFIRSTDAYOFWEEK        For (MCM_FIRST + 15)  // *
Define MCM_GETFIRSTDAYOFWEEK        For (MCM_FIRST + 16)  // *
Define MCM_GETRANGE                 For (MCM_FIRST + 17)  // *
Define MCM_SETRANGE                 For (MCM_FIRST + 18)  // *
Define MCM_GETMONTHDELTA            For (MCM_FIRST + 19)  // *
Define MCM_SETMONTHDELTA            For (MCM_FIRST + 20)  // *
Define MCM_GETMAXTODAYWIDTH         For (MCM_FIRST + 21)  // -----

// MCN_SELCHANGE is sent whenever the currently displayed date changes
// via month change, year change, keyboard navigation, prev/next button
//
Type NMSELCHANGE
//    Field NMSELCHANGE.nmhdr       as NMHDR      // this must be first, so we don't break WM_NOTIFY (NMHDR)
    Field NMSELCHANGE.hWndFrom              as Handle
    Field NMSELCHANGE.idFrom                as DWORD
    Field NMSELCHANGE.code                  as DWORD
//    Field NMSELCHANGE.stSelStart  as SYSTEMTIME // (SYSTEMTIME)
    Field NMSELCHANGE.From_wYear            as WORD
    Field NMSELCHANGE.From_wMonth           as WORD
    Field NMSELCHANGE.From_wDayOfWeek       as WORD
    Field NMSELCHANGE.From_wDay             as WORD
    Field NMSELCHANGE.From_wHour            as WORD
    Field NMSELCHANGE.From_wMinute          as WORD
    Field NMSELCHANGE.From_wSecond          as WORD
    Field NMSELCHANGE.From_wMilliseconds    as WORD
//    Field NMSELCHANGE.stSelEnd    as SYSTEMTIME // (SYSTEMTIME)
    Field NMSELCHANGE.To_wYear              as WORD
    Field NMSELCHANGE.To_wMonth             as WORD
    Field NMSELCHANGE.To_wDayOfWeek         as WORD
    Field NMSELCHANGE.To_wDay               as WORD
    Field NMSELCHANGE.To_wHour              as WORD
    Field NMSELCHANGE.To_wMinute            as WORD
    Field NMSELCHANGE.To_wSecond            as WORD
    Field NMSELCHANGE.To_wMilliseconds      as WORD
End_Type

Type MCRANGE
    Field MCRANGE.From_wYear            as WORD
    Field MCRANGE.From_wMonth           as WORD
    Field MCRANGE.From_wDayOfWeek       as WORD
    Field MCRANGE.From_wDay             as WORD
    Field MCRANGE.From_wHour            as WORD
    Field MCRANGE.From_wMinute          as WORD
    Field MCRANGE.From_wSecond          as WORD
    Field MCRANGE.From_wMilliseconds    as WORD
    Field MCRANGE.To_wYear              as WORD
    Field MCRANGE.To_wMonth             as WORD
    Field MCRANGE.To_wDayOfWeek         as WORD
    Field MCRANGE.To_wDay               as WORD
    Field MCRANGE.To_wHour              as WORD
    Field MCRANGE.To_wMinute            as WORD
    Field MCRANGE.To_wSecond            as WORD
    Field MCRANGE.To_wMilliseconds      as WORD
End_Type

Type MCSYSTEMTIME
    Field MCSYSTEMTIME.wYear              as WORD
    Field MCSYSTEMTIME.wMonth             as WORD
    Field MCSYSTEMTIME.wDayOfWeek         as WORD
    Field MCSYSTEMTIME.wDay               as WORD
    Field MCSYSTEMTIME.wHour              as WORD
    Field MCSYSTEMTIME.wMinute            as WORD
    Field MCSYSTEMTIME.wSecond            as WORD
    Field MCSYSTEMTIME.wMilliseconds      as WORD
End_Type

Define MCN_SELCHANGE                For (MCN_FIRST + 1)

// MCN_GETDAYSTATE is sent for MCS_DAYSTATE controls whenever new daystate
// information is needed (month or year scroll) to draw bolding information.
// The app must fill in cDayState months worth of information starting from
// stStart date. The app may fill in the array at prgDayState or change
// prgDayState to point to a different array out of which the information
// will be copied. (similar to tooltips)
//
//TYPE NMDAYSTATE
//    Field NMDAYSTATE.nmhdr       as NMHDR           // this must be first, so we don't break WM_NOTIFY (NMHDR)
//    Field NMDAYSTATE.stStart     as SYSTEMTIME      // (SYSTEMTIME)
//    Field NMDAYSTATE.cDayState   as int             // (int)
//    Field NMDAYSTATE.prgDayState as LPMONTHDAYSTATE // points to cDayState MONTHDAYSTATEs (LPMONTHDAYSTATE)
//End_Type

Define MCN_GETDAYSTATE              For (MCN_FIRST + 3)
Define MCN_SELECT                   For (MCN_FIRST + 4)

Define MCS_DAYSTATE                 For |CI$0001
Define MCS_MULTISELECT              For |CI$0002
Define MCS_WEEKNUMBERS              For |CI$0004
Define MCS_NOTODAYCIRCLE            For |CI$0008
Define MCS_NOTODAY                  For |CI$0010

Define GMR_VISIBLE                  For 0   // visible portion of display
Define GMR_DAYSTATE                 For 1   // above plus the grayed out parts of partially displayed months


