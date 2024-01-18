//AB/ Project Glbl DB Wizard
//AB/ Object prj is a Dialog_Project
    //AB/ Set Size to 268 544
    //AB/ Set ProjectName to "Glbl DB Wizard"
    //AB/ Set ProjectFileName to "GlblDbWizard.dg"
    //AB/ Set GenerateFileName to "NONAME"

// Project Object Structure
//   oGlblDbWizardPanel is a cGlblDbWizardPanel
//     oBitmapBox is a cGlblWizardBitmapBox
//     oWizardPage1 is a cGlblDbWizardPage
//       oTextBox1 is a cVpTextbox
//     oWizardPage2 is a cGlblDbWizardPage
//       oTextBox2 is a cVpTextbox
//     oWizardPage3 is a cGlblDbWizardPage
//       oTextBox3 is a cVpTextbox
//     oLineControl is a cVpLineControl
//     oBackButton is a cGlblWizardBackButton
//     oNextButton is a cGlblWizardNextButton
//     oCancelButton is a cGlblWizardCloseButton

// Register all objects
Register_Object oBackButton
Register_Object oBitmapBox
Register_Object oCancelButton
Register_Object oGlblDbWizardPanel
Register_Object oLineControl
Register_Object oNextButton
Register_Object oTextBox3
Register_Object oWizardPage3
Register_Object oTextBox2
Register_Object oWizardPage2
Register_Object oTextBox1
Register_Object oWizardPage1


//AB-StoreTopStart

//AB-StoreTopEnd

//AB-IgnoreStart
Use cGlblDbWizard.pkg
Use cVpTextbox.pkg
Use cVpLineControl.pkg
//AB-IgnoreEnd



Object oGlblDbWizardPanel is a cGlblDbWizardPanel
    Set Label to "Glbl DB Wizard Template"
    Set Locate_Mode to Center_On_Panel
    Set Location to 10 101
    Set Size to 202 318
    Set piMinSize to 202 318

    //AB-DDOStart


    //AB-DDOEnd

    Object oBitmapBox is a cGlblWizardBitmapBox
        Set Size to 144 83
        Set Bitmap to "GlblWizard.bmp"
        Set peAnchors to anTopLeft
        Set Border_Style to Border_None
    End_Object    // oBitmapBox

    Object oWizardPage1 is a cGlblDbWizardPage
        Set Size to 148 225
        Set Location to 0 84
        Set peAnchors to anAll
        Object oTextBox1 is a cVpTextbox
            Set Label to "1-Delete this textbox && change the border style of all Pages to Border_None"
            Set Auto_Size_State to FALSE
            Set Location to 20 40
            Set Size to 38 126
            Set Justification_Mode to jMode_Center
            Set TypeFace to "MS Sans Serif"
        End_Object    // oTextBox1

    End_Object    // oWizardPage1

    Object oWizardPage2 is a cGlblDbWizardPage
        Set Size to 148 225
        Set Location to 0 84
        Set peAnchors to anAll
        Object oTextBox2 is a cVpTextbox
            Set Label to "2-Delete this textbox && change the border style of all Pages to Border_None"
            Set Auto_Size_State to FALSE
            Set Location to 20 40
            Set Size to 38 126
            Set Justification_Mode to jMode_Center
            Set TypeFace to "MS Sans Serif"
        End_Object    // oTextBox2

    End_Object    // oWizardPage2

    Object oWizardPage3 is a cGlblDbWizardPage
        Set Size to 148 225
        Set Location to 0 84
        Set peAnchors to anAll
        Object oTextBox3 is a cVpTextbox
            Set Label to "3-Delete this textbox && change the border style of all Pages to Border_None"
            Set Auto_Size_State to FALSE
            Set Location to 20 40
            Set Size to 38 126
            Set Justification_Mode to jMode_Center
            Set TypeFace to "MS Sans Serif"
        End_Object    // oTextBox3

    End_Object    // oWizardPage3

    Object oLineControl is a cVpLineControl
        Set Size to 2 304
        Set Location to 155 5
        Set peAnchors to anBottomLeftRight
    End_Object    // oLineControl

    Object oBackButton is a cGlblWizardBackButton
        Set Label to "&Back"
        Set Location to 165 139
        Set peAnchors to anBottomRight

        //AB-StoreStart

        //AB-StoreEnd

    End_Object    // oBackButton

    Object oNextButton is a cGlblWizardNextButton
        Set Label to "&Next"
        Set Location to 165 190
        Set peAnchors to anBottomRight

        //AB-StoreStart

        //AB-StoreEnd

    End_Object    // oNextButton

    Object oCancelButton is a cGlblWizardCloseButton
        Set Label to "&Cancel"
        Set Location to 165 255
        Set peAnchors to anBottomRight

        //AB-StoreStart

        //AB-StoreEnd

    End_Object    // oCancelButton

End_Object    // oGlblDbWizardPanel

//AB/ End_Object    // prj