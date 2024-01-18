//AB/ Project New Password Dialog
//AB/ Object prj is a Dialog_Project
    //AB/ Set ProjectName to "New Password Dialog"
    //AB/ Set Size to 140 235

// Project Object Structure
//   oPasswordDialog is a ModalPanel
//     oUserIDForm is a Form
//     oPwdForm is a Form
//     oOK_btn is a Button
//     oCancel_btn is a Button

// Register all objects
Register_Object oCancel_btn
Register_Object oOK_btn
Register_Object oPasswordDialog
Register_Object oPwdForm
Register_Object oUserIDForm


//AB-StoreTopStart

//AB-StoreTopEnd

//AB-IgnoreStart
Use Windows.pkg
//AB-IgnoreEnd



Object oPasswordDialog is a ModalPanel
    Set Border_Style to Border_Thick
    Set Label to "New Password Dialog"
    Set Location to 2 2
    Set Size to 108 217
    Set piMinSize to 104 217

    //AB-DDOStart


    //AB-DDOEnd

    Object oUserIDForm is a Form
        Set Label to "Enter your User ID"
        Set Size to 13 85
        Set Location to 15 79
        Set Label_Col_Offset to 64

        //AB-StoreStart
        //OnChange will be called on every changed character
        //Procedure OnChange
        //    String sValue
        //
        //    Get Value To sValue
        //End_Procedure // OnChange
        //AB-StoreEnd

    End_Object    // oUserIDForm

    Object oPwdForm is a Form
        Set Label to "Enter your Password"
        Set Size to 13 85
        Set Location to 35 79
        Set Label_Col_Offset to 70
        Set Password_State to TRUE

        //AB-StoreStart
        //OnChange will be called on every changed character
        //Procedure OnChange
        //    String sValue
        //
        //    Get Value To sValue
        //End_Procedure // OnChange
        //AB-StoreEnd

    End_Object    // oPwdForm

    Object oOK_btn is a Button
        Set Label to "&OK"
        Set Location to 71 98
        Set peAnchors to anBottomRight

        //AB-StoreStart
        Procedure OnClick
           boolean bOK

           // Validate_UserInformation is a method you should define
           // using the criteria you need to validate user_ids and passwords
           // in your program
           get Validate_UserInformation to bOK
           if (bOK) begin
                // add your code here
           end
           else begin
                // add your code here
           end

        End_Procedure // OnClick
        //AB-StoreEnd

    End_Object    // oOK_btn

    Object oCancel_btn is a Button
        Set Label to "&Cancel"
        Set Location to 71 157
        Set peAnchors to anBottomRight

        //AB-StoreStart
        Procedure OnClick
           Send Close_Panel
        End_Procedure // OnClick
        //AB-StoreEnd

    End_Object    // oCancel_btn


    //AB-StoreStart

    // Change this method in order to validate
    // the user and password typed in the forms of this dialog
    Function Validate_UserInformation returns boolean
        boolean bValid
        // string sUserID sPwd

        // Get and Validate user id
        // get value of oUserIDForm to sUserID

        // Get and Validate password
        // get value of oPasswordDialog to sPwd


        Function_return bValid
    End_Function

    //AB-StoreEnd

End_Object    // oPasswordDialog

//AB/ End_Object    // prj
