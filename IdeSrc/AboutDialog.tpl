//AB/ Project About Dialog 2
//AB/ Object prj is a Dialog_Project
    //AB/ Set ProjectName to "About Dialog 2"
    //AB/ Set ProjectFileName to "AboutDialog.dg"
    //AB/ Set GenerateFileName to "NONAME"

// Project Object Structure
//   oAboutPanel is a ModalPanel
//     oOK_btn is a Button
//     oSysInfo_btn is a Button
//     oAboutBitmap is a BitmapContainer
//     oCopyright_text is a Textbox
//     oVersion_text is a Textbox
//     oProgram_text is a Textbox

// Register all objects
Register_Object oAboutBitmap
Register_Object oAboutPanel
Register_Object oCopyright_text
Register_Object oOK_btn
Register_Object oProgram_text
Register_Object oSysInfo_btn
Register_Object oVersion_text


//AB-StoreTopStart
Use DFAbout.pkg

Object oSysInfo_pnl is a SysInfoDialog
End_Object

//AB-StoreTopEnd

//AB-IgnoreStart
Use Windows.pkg
Use dfbitmap.pkg
//AB-IgnoreEnd



Object oAboutPanel is a ModalPanel

    //AB-StoreTopStart
    
    //AB-StoreTopEnd

    Set Sysmenu_Icon to FALSE
    Set Minimize_Icon to FALSE
    Set Label to "About My Application"
    Set Locate_Mode to Center_On_Parent
    Set Location to 5 5
    Set Size to 117 262
    Set piMinSize to 104 217
    Set TextColor to clBlue

    //AB-DDOStart


    //AB-DDOEnd

    Object oOK_btn is a Button
        Set Label to "&OK"
        Set Location to 82 203
        Set peAnchors to anBottomRight
        Set Default_State to TRUE

        //AB-StoreStart
        Procedure OnClick
           Send Close_Panel
        End_Procedure // OnClick
        //AB-StoreEnd

    End_Object    // oOK_btn

    Object oSysInfo_btn is a Button
        Set Label to "System Info..."
        Set Location to 82 147
        Set peAnchors to anBottomRight

        //AB-StoreStart
        Procedure OnClick
           Send Popup_Modal of oSysInfo_pnl
        End_Procedure // OnClick
        //AB-StoreEnd

    End_Object    // oSysInfo_btn

    Object oAboutBitmap is a BitmapContainer
        Set Size to 43 47
        Set Location to 4 5
        Set Bitmap to "DacAbout.bmp"
        Set Border_Style to Border_StaticEdge
    End_Object    // oAboutBitmap

    Object oProgram_text is a Textbox
        Set Label to "Application Name"
        Set TextColor to clBlue
        Set Location to 4 79
        Set Size to 10 60
        Set TypeFace to "MS Sans Serif"

        //AB-StoreStart
        
        set FontUnderline to True
        set Value to (psProgram(ghoApplication))
        //AB-StoreEnd
    End_Object    // oProgram_text

    Object oCopyright_text is a Textbox
        Set Label to "(c) Copyright"
        Set TextColor to clBlue
        Set Location to 63 79
        Set Size to 10 41
        Set TypeFace to "MS Sans Serif"

        //AB-StoreStart
        
        set Value to ("(c) Copyright 20## " + psCompany(ghoApplication))
        //AB-StoreEnd

    End_Object    // oCopyright_text

    Object oVersion_text is a Textbox
        Set Label to "Version:"
        Set TextColor to clBlue
        Set Location to 48 79
        Set Size to 10 27
        Set TypeFace to "MS Sans Serif"

        //AB-StoreStart
        
        Procedure SetVersionInfo
            // Set the Version Info (build number) text box.
            // This information is configured in your application properties dialog and
            // linked into your application.
            Handle hoVersionInfo
            String sMajor sMinor sRelease sBuild
        
            Get phoVersionInfo   of ghoApplication To hoVersionInfo
            Get piVersionMajor   of hoVersionInfo  To sMajor
            Get piVersionMinor   of hoVersionInfo  To sMinor
            Get piVersionRelease of hoVersionInfo  To sRelease
            Get piVersionBuild   of hoVersionInfo  To sBuild
        
            Set Label of oVersion_text To ("Version: " + sMajor + "." + sMinor + "." + sRelease + "." + sBuild)
        End_Procedure
        
        Send SetVersionInfo
        
        //AB-StoreEnd

    End_Object    // oVersion_text


    //AB-StoreStart
    
    
    //AB-StoreEnd

End_Object    // oAboutPanel


//AB-StoreStart

//AB-StoreEnd

//AB/ End_Object    // prj
