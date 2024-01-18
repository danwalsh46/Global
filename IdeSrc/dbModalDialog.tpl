//AB/ Project New Dialog 1
//AB/ Object prj is a Dialog_Project
//AB/     Set Size to 140 235

//AB-StoreTopStart

//AB-StoreTopEnd

Object oDialog is a <IDE-ClassdbModalPanel>
    Set Label to "Change this 'Label' property..."
    Set Size to 108 217
    Set piMinSize To 104 217
    Set Location to 2 2
    Set Border_Style To Border_Thick

    Object oOK_btn is a <IDE-ClassButton>
        Set Label    to "&OK"
        Set Location to 71 98
        Set peAnchors To anBottomRight
        //AB-StoreStart
        Procedure OnClick
           Send Close_Panel
        End_Procedure // OnClick
        //AB-StoreEnd
    End_Object

    Object oCancel_btn is a <IDE-ClassButton>
        Set Label    to "&Cancel"
        Set Location to 71 157
        Set peAnchors To anBottomRight
        //AB-StoreStart
        Procedure OnClick
           Send Close_Panel
        End_Procedure // OnClick
        //AB-StoreEnd
    End_Object
End_Object

//AB/ End_Object    // prj