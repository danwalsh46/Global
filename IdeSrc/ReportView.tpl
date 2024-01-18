//AB/ Project Listing (Basic Report)
//AB/ Object prj is a Report_Project
//AB/     Set Size to 140 215

Object oReportView1 is a <IDE-ClassReportView>
    Set Size to 100 185
    Set Location to 6 6

    //AB-DDOStart


    //AB-DDOEnd

    Object oDestination is a RadioGroup
        Set Size to 50 80
        Set Location to 5 5
        Set Label to "Output Device:"
        Object oScreen is a Radio
            Set Label to "Screen"
            Set Size to 10 39
            Set Location to 15 10
            Set Status_Help to "Preview the report to screen"
        End_Object    // oScreen

        Object oPrinter is a Radio
            Set Label to "Printer"
            Set Size to 10 37
            Set Location to 30 10
            Set Status_Help to "Send the report to the default printer"
        End_Object    // oPrinter

        //AB-StoreStart
        // set the Output_Device_Mode each time the radio button changes
        Procedure Notify_Select_State Integer iNewItem Integer iOldItem
            Forward Send Notify_Select_State iNewItem iOldItem

            If (iNewItem=0) Set Output_Device_Mode To PRINT_TO_WINDOW
            Else            Set Output_Device_Mode To PRINT_TO_PRINTER
        End_Procedure
        //AB-StoreEnd
    End_Object    // oDestination

    Object oOkButton is a Button
        Set Label to "OK"
        Set Size to 14 51
        Set Location to 63 27
        Set Default_State to TRUE

        //AB-StoreStart
        Procedure OnClick
            Send StartReport
        End_Procedure
        //AB-StoreEnd

    End_Object    // oOkButton

    Object oCancelButton is a Button
        Set Label to "Cancel"
        Set Location to 63 104

        //AB-StoreStart
        Procedure OnClick
            Send Request_Cancel
        End_Procedure
        //AB-StoreEnd
    End_Object    // oCancelButton


    //AB-StoreStart
    Procedure StartReport
        Integer iOutputDevice
        String sFileName

        Get Output_Device_Mode To iOutputDevice

        If (iOutputDevice=PRINT_TO_WINDOW) Begin
           Make_Temp_File "TXT" sFileName
           Move (".\" - sFileName) To sFileName
           Set Output_Device_Name To sFileName
        End
        Else ;
           Set Output_Device_Name To "WinLST:"

        Send Run_Report

        If (iOutputDevice=PRINT_TO_WINDOW) Begin
           RunProgram background "NotePad" sFileName
           EraseFile sFileName
        End
    End_Procedure   // StartReport


    Object oBasicReport is a BasicReport

        Function Starting_Main_Report Returns Integer
        End_Function

        Procedure_Section Page_Top as HeaderSection
        End_Procedure

        Procedure_Section Body as BodySection
        End_Procedure

        Procedure_Section Page_Bottom as FooterSection
        End_Procedure

    End_Object
    //AB-StoreEnd

CD_End_Object    // oCustRpt1


//AB-StoreStart

//AB-StoreEnd

//AB/ End_Object    // prj