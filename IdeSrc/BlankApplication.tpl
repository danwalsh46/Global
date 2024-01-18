//AB/ Project Template
//AB/ Object prj is an Application_Project
//AB/     Set Size to 150 220

//AB-StoreTopStart

//  Set date attributes as needed
Set_Date_Attribute SysDate4_State to True
Set_Date_Attribute Date4_State    to True
Set_Date_Attribute Epoch_Value    to 30

Use Help_Ids.inc // Developer should provide this file of help context links.
Use Std_Help.pkg

// use an application object to make your program workspace aware.

//AB-StoreEnd

Object oApplication is a <IDE-ClassApplication>
    //AB/ Set Location to 4 5

    //AB-StoreStart
    Procedure OnCreate
        Send DoOpenWorkspace CURRENT$WORKSPACE
    End_Procedure
    //AB-StoreEnd

End_Object  // oApplication

//AB-StoreStart
Send Info_Box "Hello World" "VDF Basic Application"
//AB-StoreEnd

//AB/ End_Object    // prj