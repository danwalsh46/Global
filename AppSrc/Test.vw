Use Windows.pkg
Use DFClient.pkg
Use cDbCJGrid.pkg
Use Customer.DD
Use cDbCJGridSelectColumn.pkg

Deferred_View Activate_oTest for ;
Object oTest is a dbView
    
    Object oCustomer_DD is a Customer_DataDictionary
    End_Object

    Set Main_DD to oCustomer_DD
    Set Server to oCustomer_DD

    Set Border_Style to Border_Thick
    Set Size to 162 300
    Set Location to 2 2

    Object oDbCJGrid1 is a cDbCJGrid
        Set Size to 125 280
        Set Location to 7 7

        Object oCustomer_Name is a cDbCJGridColumn
            Entry_Item Customer.Name
            Set piWidth to 296
            Set psCaption to "Customer Name"
            Set pbEditable to False
        End_Object

        Object oCustomer_Balance is a cDbCJGridColumn
            Entry_Item Customer.Balance
            Set piWidth to 79
            Set psCaption to "Balance"
            Set pbEditable to False
        End_Object
        
        Object oSelectedCol is a cDbCJGridSelectColumn
            Set piWidth to 45
            Set psCaption to "Select"
        End_Object
        
    End_Object

    Object oSelectedRows_bn is a Button
        Set Location to 138 237
        Set Label to "Selected"
    
        // fires when the button is clicked
        Procedure OnClick
            RowID[] rwSelected
            Integer iSize
            Get SelectedRecords of oSelectedCol to rwSelected
            Move (SizeOfArray(rwSelected)) to iSize
            Send Info_Box ("Selected records: " + String(iSize))
        End_Procedure
    
    End_Object

Cd_End_Object
