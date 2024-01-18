// ******************************************************************************* //
// ******************************************************************************* //
// ***********************                                 *********************** //
// ***********************         SysLink Control         *********************** //
// ***********************                                 *********************** //
// ******************************************************************************* //
// ******************************************************************************* //
//
// Purposes.. This Windows control allows to the user select date or time using
//            simple built into Windows calendar. 
//
// Author.... Sergey V. Natarov (senatc@postman.ru)
// Version... 0.0.1 
// Date...... 05/05-2003
// Support... Not available
//
// Revision History:
//    05/05-2003 v0.0.1 -- Basic functionality implemented
//

Use cWinControls.pkg // External Windows controls base class

Define INVALID_LINK_INDEX   For (-1)
Define MAX_LINKID_TEXT      For 48
Define L_MAX_URL_LENGTH     For (2048 + 32 + 3)

Define WC_LINK              For "SysLink"

Define LWS_TRANSPARENT      For |CI$0001
Define LWS_IGNORERETURN     For |CI$0002

Define LIF_ITEMINDEX        For |CI$00000001
Define LIF_STATE            For |CI$00000002
Define LIF_ITEMID           For |CI$00000004
Define LIF_URL              For |CI$00000008

Define LIS_FOCUSED          For |CI$00000001
Define LIS_ENABLED          For |CI$00000002
Define LIS_VISITED          For |CI$00000004

Type LITEM
    Field LITEM.mask        as Integer                  // (UINT)
    Field LITEM.iLink       as Integer                  // (int)
    Field LITEM.state       as Integer                  // (UINT)
    Field LITEM.stateMask   as Integer                  // (UINT)
    Field LITEM.szID        as Char MAX_LINKID_TEXT     // (WCHAR)
    Field LITEM.szUrl       as Char L_MAX_URL_LENGTH    // (WCHAR)
End_Type

//typedef struct tagLHITTESTINFO
//{
//    POINT       pt ;
//    LITEM     Item ;
//} LHITTESTINFO, *PLHITTESTINFO ;
//
//typedef struct tagNMLINK
//{
//    NMHDR       hdr;
//    LITEM     Item ;
//} NMLINK,  *PNMLINK;

//  SysLink notifications
//  NM_CLICK   // wParam: control ID, lParam: PNMLINK, ret: ignored.   

//  LinkWindow messages
Define LM_HITTEST           For (WM_USER+|CI$300)  // wParam: n/a, lparam: PLHITTESTINFO, ret: BOOL
Define LM_GETIDEALHEIGHT    For (WM_USER+|CI$301)  // wParam: n/a, lparam: n/a, ret: cy
Define LM_SETITEM           For (WM_USER+|CI$302)  // wParam: n/a, lparam: LITEM*, ret: BOOL
Define LM_GETITEM           For (WM_USER+|CI$303)  // wParam: n/a, lparam: LITEM*, ret: BOOL

//====== End SysLink control =========================================
