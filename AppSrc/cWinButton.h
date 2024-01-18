// cWinButton.h 
// By Sergey V. Natarov (senatc@postman.ru)
//

/////////////////////////////// WINDOWS API CONSTANTS //////////////////////////////////

// Packages
Use cBaseWinControl.pkg

/////////////////////////////// CWINBUTTON CONSTANTS //////////////////////////////////
    
// Bitmap alignment
Define BBA_CENTER   For 0
Define BBA_VCENTER  For 1
Define BBA_HCENTER  For 2
Define BBA_TOP      For BBA_HCENTER
Define BBA_LEFT     For BBA_VCENTER
Define BBA_RIGHT    For 3
Define BBA_BOTTOM   For 4

// Text alignment
Define BTA_CENTER   For 0
Define BTA_VCENTER  For 1
Define BTA_HCENTER  For 2
Define BTA_TOP      For BTA_HCENTER
Define BTA_LEFT     For BTA_VCENTER
Define BTA_RIGHT    For 3
Define BTA_BOTTOM   For 4

Register_Function piColor        Returns Integer


