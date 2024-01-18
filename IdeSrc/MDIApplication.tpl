//AB/ Project Template
//AB/ Object prj is an MdiFrame_Project
//AB/     Set Size to 200 283

//AB-StoreTopStart

//  Set date attributes as needed
Set_Date_Attribute SysDate4_State to True
Set_Date_Attribute Date4_State    to True
Set_Date_Attribute Epoch_Value    to 30

Use Help_Ids.inc // Developer should provide this file of help context links.
Use Std_Help.pkg
//AB-StoreTopEnd

Object oApplication is a <IDE-ClassApplication>
    //AB/ Set Location to 4 5

    //AB-StoreStart
    Procedure OnCreate
        Send DoOpenWorkspace CURRENT$WORKSPACE
    End_Procedure
    //AB-StoreEnd

End_Object  // oApplication

Object oMain is a <IDE-ClassPanel>
    Set Label To "My Application"
    Set Location to 4 30
    Set Size to 142 189

    //AB-MenuAutogen
    //AB-IgnoreStart

    DFCreate_Menu Main_Menu
        #INCLUDE File_pm.inc

        DFCreate_Menu "&View" ViewPopupMenu is a ViewPopupMenu
        End_Pull_Down

        Set Status_Help To "Available Views"

        DFCreate_Menu "&Report" ReportPopupMenu is a ViewPopupMenu
        End_Pull_Down

        Set Status_Help To "Available Reports"

        #INCLUDE Navi_pm.inc
        #INCLUDE Win_pm.inc
        #INCLUDE Helpa_pm.inc
    End_Menu  // Main_Menu

    //AB-IgnoreEnd

    //AB-ToolbarPackage
    Use DefaultToolbar.pkg //  Tool-Bar object.
    //AB-End

    Object oClientArea is a <IDE-ClassClientArea>
        //AB-ViewStart
        //AB-ViewEnd
    End_Object  // Client_Area

    //AB-StatusBarPackage
    Use DefaultStatusbar.pkg //  Status-Bar object.
    //AB-End

    //AB-StoreStart

    // How to implement an About Dialog:
    // - Create an about dialog and using the AboutDialog template.
    // - Insert a Use statement for your about dialog here
    // - Send a message to popup the dialog in the Activate_About
    //   method below.

    // Use MyAboutDialog.dg

    Procedure Activate_About
        // Send Popup_Modal of oMyAboutDialog
    End_Procedure

    //AB-StoreEnd

End_Object  // Main

//AB-StoreStart
Start_UI
//AB-StoreEnd

//AB/ End_Object    // prj
