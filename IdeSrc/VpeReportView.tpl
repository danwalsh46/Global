//AB/ Project szVPE Report View
//AB/ Object prj is a Report_Project
//AB/     Set Size to 300 500

//AB-StoreTopStart
Use szVpeAll.pkg

//AB-StoreTopEnd

//AB-IgnoreStart


//AB-IgnoreEnd

ACTIVATE_VIEW Activate_oVPEView FOR oVPEView

Object oVPEView is a cszVpeReportView

    //AB-StoreTopStart

    //AB-StoreTopEnd

    Set Border_Style to Border_Thick
    Set Maximize_Icon to TRUE
    Set Label to "VPE Report View Template"
    Set Size to 150 300
    Set Location to 8 14

    //AB-DDOStart


    //AB-DDOEnd

    Object oPrintTo is a RadioGroup
        Set Label to "Print to"
        Set Size to 38 105
        Set Location to 91 11
        Object oRadio1 is a Radio
            Set Label to "Preview"
            Set Size to 10 42
            Set Location to 12 6
            Set Status_Help to "Prints the report to screen"
        End_Object    // oRadio1

        Object oRadio2 is a Radio
            Set Label to "Printer"
            Set Size to 10 42
            Set Location to 24 6
            Set Status_Help to "Prints the report to printer"
        End_Object    // oRadio2

    end_object    // oPrintTo

    object oVpeReport is a cszVpeReport
        Set Size to 20 20
        Set Location to 99 81

        //AB-StoreStart
        //set pbRegisterDocumentWithParent to FALSE

        set Main_File         to mainfile.File_number
        set Visible_State     to FALSE
        set Server            to (mainfile_DD(self))
        set Ordering          to 2
        set pbMailButton      to FALSE
        set pbUserCloseButton to FALSE
        set pbInfoButton      to FALSE
        set piOpenDocFlags    to VPE_EMBEDDED

        // left TRUE during development only
        //set pbRulers          to FALSE
        //set pbGridButton      to FALSE

        // Use sentinel
        set pbUseSentinel        to TRUE
        set psStatusPanelCaption to "Printing Report"
        set psStatusPanelTitle   to "Please Wait"
        set psUserCancelQuestion to "Do you want to stop this report?"

        // start preview at end
        //set pbDoAutoPreview TO VPE_PREVIEW_AT_END

        // use manual selection
        //Function Selection Returns Integer
        //    Send DoUpdateStatusPanel ("Processing record#: "+String(mainfile.recnum))

        //    Function_Return RPT_OK
        //End_Function

        //SZBREAK_BEGIN
        //    SZBREAK mainfile.field
        //SZBREAK_END

        Procedure OnInitializeDoc
            send DoVpeSetPageFormat VPAPER_LETTER
        End_Procedure

        //SZDEFINE_SECTION SZREPORTHEADER "ReportHeader" 50 FORCE_PAGEBREAK_NONE FALSE
        //    Procedure DoOutputSection
        //        Send szWrite "[B I]REPORT HEADER"
        //        Send szWriteln "[BO IO]"
        //    End_Procedure
        //SZEND_SECTION

        //SZDEFINE_SECTION SZPAGEHEADER "PageHeader" 50 FORCE_PAGEBREAK_NONE FALSE
        //    Set pbDrawSectionBox TO TRUE
        //    Procedure DoOutputSection
        //    End_Procedure
        //SZEND_SECTION

        //SZDEFINE_SECTION SZSUBHEADER 1 "SUBHEADER1" 100 FORCE_PAGEBREAK_NONE FALSE
        //    Procedure DoOutputSection
        //        Send szWrite "SUBHEADER1"
        //        Send szWrite (Trim(CUSTOMER.NAME))
        //    End_Procedure
        //SZEND_SECTION

        SZDEFINE_SECTION SZBODY "Body" 100 FORCE_PAGEBREAK_NONE FALSE
            Procedure DoOutputSection
            End_Procedure
        SZEND_SECTION

        //SZDEFINE_SECTION SZSUBTOTAL 1 "Subtotal1" 100 FORCE_PAGEBREAK_NONE FALSE
        //    Procedure DoOutputSection
        //        Send szWrite "SUBTOTAL 1"
        //    End_Procedure
        //SZEND_SECTION

        //SZDEFINE_SECTION SZPAGEFOOTER "PageFooter" 200 FORCE_PAGEBREAK_NONE FALSE
        //    Procedure DoOutputSection
        //        Send szWriteln "[B I]PAGE FOOTER"
        //        Send szWriteln "[BO IO] "
        //    End_Procedure
        //SZEND_SECTION

        //SZDEFINE_SECTION SZREPORTFOOTER "ReportFooter" 200 FORCE_PAGEBREAK_NONE FALSE
        //    Procedure DoOutputSection
        //        Send szWriteln "[B I]REPORT FOOTER"
        //        Send szWriteln "[BO IO]"
        //    End_Procedure
        //SZEND_SECTION

        //AB-StoreEnd

    End_Object    // oVpeReport

    Object oBtnPrint is a Button
        Set Label to "Print"
        Set Default_State to TRUE
        Set Location to 98 237
        Set Status_Help to "Print the Selected report"

        //AB-StoreStart
        Procedure OnClick
            Send RunReport
        End_Procedure
        //AB-StoreEnd

    End_Object    // oBtnPrint

    Object oBtnCancel is a Button
        Set Label to "Cancel"
        Set Location to 115 238
        Set Status_Help to "Close this Panel"

        //AB-StoreStart
        Procedure OnClick
            Send Close_Panel
        End_Procedure
        //AB-StoreEnd

    End_Object    // oBtnCancel


    //AB-StoreStart

    procedure RunReport
        send StartReport of oVpeReport
    end_procedure
    //AB-StoreEnd

End_Object    // oVPEView


//AB-StoreStart

//AB-StoreEnd

