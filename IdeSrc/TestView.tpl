Use <IDE-UsePackage>
Use cApplication.pkg

// Set date attributes as needed
Set_Date_Attribute sysdate4_State to (TRUE)
Set_Date_Attribute Date4_State to (TRUE)
Set_Date_Attribute epoch_value to 30

Object oApplication is a cApplication
    Set psCompany to "My Company"
    Set psProduct to "My Product"
    Set psVersion to "1.0"

    Set pbPreserveEnvironment To False  // This will stop the program reading/writing its settings to the registry

    Procedure OnCreate
        Send DoOpenWorkspace <IDE-CurrentWorkspace>
    End_Procedure

End_Object // oApplication

Use Help_Ids.inc // Developer should provide this file of help context links.
Use Std_Help.pkg

Object Main is a Panel
    Set Label To ("Testing View: " + <IDE-ViewName>)

    DFCreate_Menu Main_Menu
        #include File_PM.inc

        DFCreate_Menu "&View" ViewPopupMenu is a ViewPopupMenu
            On_Item ("&" + <IDE-ViewName> + " \aCtrl+1") Send <IDE-ViewAccess>
        End_Pull_down

        Set Status_Help To "Available Views"

        #include Navi_pm.inc
        #include win_PM.inc
        #include Help_PM.inc
    End_Menu

    Use DefaultToolbar.pkg

    Object Client_Area IS A AppClientArea
        
        // Comment out this line to remove the DataDictionary Inspector
        Use dd_debug.dg

        Use <IDE-ViewPackage>

    End_Object

    On_Key Key_Ctrl+Key_1 Send <IDE-ViewAccess> To Client_Area

    Use DefaultStatusbar.pkg

End_Object

Send <IDE-ViewAccess> To (Client_Area(main(desktop)))

Start_UI
