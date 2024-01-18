//AB/ Project New View5
//AB/ Object prj is a View_Project
//AB/     Set Size to 159 277

ACTIVATE_VIEW Activate_oTest2_vw FOR oTest2_vw

Object oTest2_vw is a <IDE-ClassdbView>
    Set Label to "New View"
    Set Size to 127 253
    Set Location to 5 7

    //AB-DDOStart
    //AB-DDOEnd

    Object oNewTabDialog is a dbTabDialogView
        Set Size to 100 240
        Set Location to 5 5
        Set Rotate_Mode to RM_Rotate

        Object oNewTabPage1 is a dbTabView
            Set Label to "Page 1"

            //AB-DDOStart
            //AB-DDOEnd

            Object oTextBox2 is a Textbox
                Set Label to "Create a DDO structure for each tab page."
                Set Location to 8 4
                Set Size to 10 135
                Set TypeFace to "MS Sans Serif"
            End_Object    // oTextBox2

            Object oTextBox3 is a Textbox
                Set Label to "Then create entry forms for each page."
                Set Location to 22 5
                Set Size to 10 124
                Set TypeFace to "MS Sans Serif"
            End_Object    // oTextBox3

            Object oTextBox4 is a Textbox
                Set Label to "Each tab page will behave as if it was a separate data entry view."
                Set Location to 36 6
                Set Size to 10 207
                Set TypeFace to "MS Sans Serif"
            End_Object    // oTextBox4

        End_Object    // oNewTabPage1

        Object oNewTabPage2 is a dbTabView
            Set Label to "Page 2"

            //AB-DDOStart
            //AB-DDOEnd

        End_Object    // oNewTabPage2

    End_Object    // oNewTabDialog

End_Object    // oTest2_vw

//AB/ End_Object    // prj
