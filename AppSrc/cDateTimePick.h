// ******************************************************************************* //
// ******************************************************************************* //
// ***********************                                 *********************** //
// ***********************     SysDateTimePick32 Header    *********************** //
// ***********************                                 *********************** //
// ******************************************************************************* //
// ******************************************************************************* //
//
// Author.... Sergey V. Natarov (senatc@postman.ru)
// Version... 0.0.1 
// Date...... 03/05-2003
//

Define DTN_FIRST                    For (0-760)       // datetimepick
Define DTN_LAST                     For (0-799)

Define DATETIMEPICK_CLASS           For "SysDateTimePick32"
Define DTM_FIRST                    For |CI$1000

// Messages
Define DTM_GETSYSTEMTIME            For (DTM_FIRST + 1)  // Implemented
Define DTM_SETSYSTEMTIME            For (DTM_FIRST + 2)  // Implemented
Define DTM_GETRANGE                 For (DTM_FIRST + 3)
Define DTM_SETRANGE                 For (DTM_FIRST + 4)  
Define DTM_SETFORMAT                For (DTM_FIRST + 5)  // Implemented
Define DTM_SETMCCOLOR               For (DTM_FIRST + 6)
Define DTM_GETMCCOLOR               For (DTM_FIRST + 7)
Define DTM_GETMONTHCAL              For (DTM_FIRST + 8)
Define DTM_SETMCFONT                For (DTM_FIRST + 9)
Define DTM_GETMCFONT                For (DTM_FIRST + 10)

//Styles
Define DTS_UPDOWN                   For |CI$0001 // use UPDOWN instead of MONTHCAL
Define DTS_SHOWNONE                 For |CI$0002 // allow a NONE selection
Define DTS_SHORTDATEFORMAT          For |CI$0000 // use the short date format (app must forward WM_WININICHANGE messages)
Define DTS_LONGDATEFORMAT           For |CI$0004 // use the long date format (app must forward WM_WININICHANGE messages)
Define DTS_SHORTDATECENTURYFORMAT   For |CI$000C // short date format with century (app must forward WM_WININICHANGE messages)
Define DTS_TIMEFORMAT               For |CI$0009 // use the time format (app must forward WM_WININICHANGE messages)
Define DTS_APPCANPARSE              For |CI$0010 // allow user entered strings (app MUST respond to DTN_USERSTRING)
Define DTS_RIGHTALIGN               For |CI$0020 // right-align popup instead of left-align it

// Notifications
Define DTN_DATETIMECHANGE           For (DTN_FIRST + 1) // the systemtime has changed
Type tNMDATETIMECHANGE
    // Header
    // Field NMDATETIMECHANGE.nmhdr            as NMHDR      // (NMHDR)
    Field tNMDATETIMECHANGE.hWndFrom        as Handle
    Field tNMDATETIMECHANGE.idFrom          as DWORD
    Field tNMDATETIMECHANGE.code            as DWORD
    Field tNMDATETIMECHANGE.dwFlags         as DWORD      // GDT_VALID or GDT_NONE (DWORD)
    // SYSTEMTIME structure
    // Field NMDATETIMECHANGE.st               as SYSTEMTIME // valid iff dwFlags==GDT_VALID (SYSTEMTIME)
    Field tNMDATETIMECHANGE.wYear           as WORD
    Field tNMDATETIMECHANGE.wMonth          as WORD
    Field tNMDATETIMECHANGE.wDayOfWeek      as WORD
    Field tNMDATETIMECHANGE.wDay            as WORD
    Field tNMDATETIMECHANGE.wHour           as WORD
    Field tNMDATETIMECHANGE.wMinute         as WORD
    Field tNMDATETIMECHANGE.wSecond         as WORD
    Field tNMDATETIMECHANGE.wMilliseconds   as WORD
End_Type
Type tDATETIMESYSTEMTIME
    Field tDATETIMESYSTEMTIME.wYear           as WORD
    Field tDATETIMESYSTEMTIME.wMonth          as WORD
    Field tDATETIMESYSTEMTIME.wDayOfWeek      as WORD
    Field tDATETIMESYSTEMTIME.wDay            as WORD
    Field tDATETIMESYSTEMTIME.wHour           as WORD
    Field tDATETIMESYSTEMTIME.wMinute         as WORD
    Field tDATETIMESYSTEMTIME.wSecond         as WORD
    Field tDATETIMESYSTEMTIME.wMilliseconds   as WORD
End_Type

Define DTN_USERSTRING               For (DTN_FIRST + 2) // the user has entered a string
//typedef struct tagNMDATETIMESTRING
//{
//    NMHDR      nmhdr;
//    LPCSTR     pszUserString;  // string user entered
//    SYSTEMTIME st;             // app fills this in
//    DWORD      dwFlags;        // GDT_VALID or GDT_NONE
//} NMDATETIMESTRING;

Define DTN_WMKEYDOWN                For (DTN_FIRST + 3) // modify keydown on app format field (X)
//typedef struct tagNMDATETIMEWMKEYDOWN
//{
//    NMHDR      nmhdr;
//    int        nVirtKey;  // virtual key code of WM_KEYDOWN which MODIFIES an X field
//    LPCSTR     pszFormat; // format substring
//    SYSTEMTIME st;        // current systemtime, app should modify based on key
//} NMDATETIMEWMKEYDOWN;

Define DTN_FORMAT                   For (DTN_FIRST + 4) // query display for app format field (X)
//typedef struct tagNMDATETIMEFORMAT
//{
//    NMHDR nmhdr;
//    LPCSTR  pszFormat;   // format substring
//    SYSTEMTIME st;       // current systemtime
//    LPCSTR pszDisplay;   // string to display
//    Char szDisplay[64];  // buffer pszDisplay originally points at
//} NMDATETIMEFORMAT;

Define DTN_FORMATQUERY              For (DTN_FIRST + 5) // query formatting info for app format field (X)
//typedef struct tagNMDATETIMEFORMATQUERY
//{
//    NMHDR nmhdr;
//    LPCSTR pszFormat;  // format substring
//    SIZE szMax;        // max bounding rectangle app will use for this format string
//} NMDATETIMEFORMATQUERY;

Define DTN_DROPDOWN                 For (DTN_FIRST + 6) // MonthCal has dropped down
Define DTN_CLOSEUP                  For (DTN_FIRST + 7) // MonthCal is popping up


