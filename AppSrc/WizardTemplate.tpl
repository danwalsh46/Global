// wizard template

Object oWizard is a cGlblDbWizardPanel
    Set Label to "Wizard"
    Set Size to 242 559
    Set piMinSize to 242 559
    Set Location to -2 -1
    Set Locate_Mode to Center_On_Panel
    Set pbAutoClearWizardState to False

    Object oPageTreeView is a cLsdTreeView

        Property Handle phRoot

        Set Size to 200 120
        Set Location to 5 5

        Object oImageList is a cImageList
            Set piMaxImages to 3

            Procedure OnCreate // add the images
                Integer iImage
                //
                Get AddTransparentImage "Select16.bmp"          clFuchsia to iImage
                Get AddTransparentImage "Prospect.bmp"          clFuchsia to iImage
            End_Procedure
        End_Object
        // Now assign the ImageList to the TreeView
        Set ImageListObject to (oImageList(Self))

        Procedure OnCreateTree
            Send DoAddRoot
        End_Procedure  // OnCreateTree

        Procedure DoAddRoot
            Handle hRoot
            //
            Get AddTreeItem "Intake Wizard" 0 0 1 0 to hRoot
            Set phRoot                              to hRoot
        End_Procedure

        Procedure DoAddPageItem String sTitle Integer iData
            Handle hRoot hPage
            //
            Get phRoot to hRoot
            Get AddTreeItem sTitle hRoot iData 1 0 to hPage
            Send DoExpandItem hRoot
        End_Procedure

        Procedure OnItemClick Handle hItem Boolean ByRef bCancel
            Integer iData iPage
            String  sApplied
            //
            Get ItemData hItem     to iData
            Get IsPageNumber iData to iPage
            Send ShowPage             iPage
            Set Current_Page       to iPage
            //
            If (iPage = 1) Begin
                Get psApplied to sApplied
                If (sApplied = "NO") Begin
                    Set piNextIncrement to 2
                End
                Else Begin
                    Set piNextIncrement to 1
                End
            End
            Else Begin
                Set piNextIncrement to 1
            End
        End_Procedure
    End_Object

    Object oWizardPageContainer is a cGlblDbWizardPageContainer
        Set Size to 203 428
        Set Location to 0 128

        Object oWizardPage0 is a cGlblDbWizardPage

            Property Boolean pbAddedToTree

            Set Size to 203 428
            Set Verify_Data_Loss_Msg to get_No_Confirmation
            Set Auto_Clear_DEO_State to False
            Set Title to "Introduction"
		End_Object
		
	End_Object

    Object oLineControl is a LineControl
        Set Size to 2 548
        Set Location to 210 5
        Set peAnchors to anBottomLeftRight
    End_Object

    Object oBackButton is a cGlblWizardBackButton
        Set Label to "&Back"
        Set Location to 220 375
        Set peAnchors to anBottomRight
    End_Object

    Object oNextButton is a cGlblWizardNextButton
        Set Label to "&Next"
        Set Location to 220 430
        Set peAnchors to anBottomRight
    End_Object

    Object oCancelButton is a cGlblWizardCloseButton
        Set Label to "&Cancel"
        Set Location to 220 495
        Set peAnchors to anBottomRight
    End_Object

End_Object
