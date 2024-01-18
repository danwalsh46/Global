// cWinCTab.pkg (Cool Tab dialog)
// By Sergey V. Natarov (senatc@postman.ru)
//

// Constants to access CTab image repository and 
// current button mode
Define CTAB_DEFAULT   For 0 // Face for plain button
Define CTAB_OVER      For 1 // Face when Mouse over the button
Define CTAB_DOWN      For 2 // Face when mouse left button pressed down
Define CTAB_SELECTED  For 3 // Face when current button selected

Register_Object oCTabImagesArray

Class cCTabImages Is A cImageList
    Procedure Construct_Object
        Forward Send Construct_Object
        Property Integer piImageListType Public ILC_COLORDDB
        Set piMaxImages   To 4
    End_Procedure // Construct_Object
    Procedure onCreate
        String  sFileName
        Integer iIndex iColor iImage
        Get piTransparentColor To iColor
        For iImage From 0 To 3
            Get CTab_Image iImage To sFileName
            If (sFileName <> "") Get AddTransparentImage sFileName iColor To iIndex
        Loop
    End_Procedure // onCreate
    Procedure doCreate
        Integer cx cy iGrowBy dwFlags iColor
        Move (piBitmapHeight(parent(Self))) To cy
        Move (piBitmapWidth(parent(Self)))  To cx
        Set piImageHeight To cy
        Set piImageWidth  To cx
        Get piImageListType To iColor
        Move (iColor+ILC_MASK) To dwFlags
        Set phImageList To (ImageList_Create(cx, cy, dwFlags, 0, 4))
    End_Procedure // doCreate
End_Class // cCTabImages

