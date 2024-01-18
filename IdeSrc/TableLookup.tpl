//AB/ Project Table Lookup
//AB/ Object prj is a Lookup_Project
//AB/     Set Size to 184 325

Object oLookUp_pnl is a <IDE-ClassdbModalPanel>
    Set Size     To 151 297
    Set Location To 4 5
    Set Border_Style To Border_Thick

    Object oSelList is a dbList
        Set peAnchors To anAll
        Set Size     To 105 280
        Set Location To 6 6
    End_Object    // oSelList

    Object oOK_bn is a <IDE-ClassButton>
        Set Label     To "&OK"
        Set Location  To 115 128
        Set peAnchors To anBottomRight
        //AB-StoreStart
        Procedure OnClick
            Send Ok of oSelList
        End_Procedure
        //AB-StoreEnd
    End_Object  // oOK_bn

    Object oCancel_bn is a <IDE-ClassButton>
        Set Label     To "&Cancel"
        Set Location  To 115 182
        Set peAnchors To anBottomRight
        //AB-StoreStart
        Procedure OnClick
            Send Cancel of oSelList
        End_Procedure
        //AB-StoreEnd
    End_Object  // oCancel_bn

    Object oSearch_bn is a <IDE-ClassButton>
        Set Label     To "&Search..."
        Set Location  To 115 236
        Set peAnchors To anBottomRight
        //AB-StoreStart
        Procedure OnClick
            Send Search of oSelList
        End_Procedure
        //AB-StoreEnd
    End_Object  // oSearch_bn

    //AB-StoreStart
    On_Key Key_Alt+Key_O Send KeyAction To oOk_bn
    On_Key Key_Alt+Key_C Send KeyAction To oCancel_bn
    On_Key Key_Alt+Key_S Send KeyAction To oSearch_bn
    //AB-StoreEnd
End_Object  // oLookUp

//AB/ End_Object    // prj
