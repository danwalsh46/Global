// cBaseWinControl.h

#Replace BUTTON_IDC_HAND        32649
#Replace BUTTON_IDC_HELP        32651
Define NoCursor For 0

// Image List
Define ILD_NORMAL               For |CI$00000000
Define ILD_TRANSPARENT          For |CI$00000001
Define ILD_MASK                 For |CI$00000010
Define ILD_IMAGE                For |CI$00000020
Define ILD_ROP                  For |CI$00000040
Define ILD_BLEND25              For |CI$00000002
Define ILD_BLEND50              For |CI$00000004
Define ILD_OVERLAYMASK          For |CI$00000F00
Define ILD_PRESERVEALPHA        For |CI$00001000  
Define ILD_SCALE                For |CI$00002000  
Define ILD_DPISCALE             For |CI$00004000

define CLR_NONE                 For |CI$FFFFFFFF

External_function ImageList_DrawEf               "ImageList_Draw"    comctl32.dll Handle hImageList Integer iIndex Handle hDC Integer iXPos Integer iYPos Integer iStyle Returns Integer
External_Function ImageList_ExtractIconEf        "ImageList_ExtractIcon" Comctl32.dll Handle hi Handle himl Integer iIndex returns handle
External_Function ImageList_CreateEf             "ImageList_Create" Comctl32.dll Integer cx Integer cy Integer iFlags returns handle
External_Function ImageList_BeginDragEf          "ImageList_BeginDrag" Comctl32.Dll Handle himlTrack Integer iTrack Integer dxHotspot Integer dyHotspot Returns Integer
External_Function ImageList_DragMoveEf           "ImageList_DragMove" Comctl32.Dll Integer xPos Integer yPos Returns Integer
External_Function ImageList_DragEnterEf          "ImageList_DragEnter" Comctl32.Dll Handle hWndLock Integer xPos Integer yPos Returns Integer
External_Function ImageList_DragShowNoLockEf     "ImageList_DragShowNolock" Comctl32.dll Integer bShow returns integer
External_Function ImageList_EnddragEf            "ImageList_EndDrag" Comctl32.Dll Returns Integer
External_Function ImageList_DragLeaveEf          "ImageList_DragLeave" Comctl32.dll  Handle hWndLock returns Integer
External_Function ImageList_AddMaskedEf          "ImageList_AddMasked" comctl32.Dll Handle himl Handle hbmImage Integer iColor Returns Integer
External_Function ImageList_AddIconEf            "ImageList_AddIcon" comctl32.dll Handle himl Handle hIcon returns integer
External_Function ImageList_SetBkColorEf         "ImageList_SetBkColor" comctl32.dll Handle himl integer iColor returns integer
External_Function ImageList_RemoveEf             "ImageList_Remove" comctl32.dll Handle himl Integer iIndex returns integer
External_function ImageList_ReplaceIconEf        "ImageList_ReplaceIcon" comctl32.dll Handle himl integer iIndex handle hIcon returns integer
External_function ImageList_MergeEf              "ImageList_Merge" comctl32.dll Handle himl1 Integer i1 Handle himl2 integer i2 Integer xOffs Integer yOffs Returns integer
External_function ImageList_SetDragCursorImageEf "ImageList_SetDragCursorImage" comctl32.dll Handle hIml Integer iDrag Integer ixHot Integer iyHot returns integer
External_function ImageList_GetIconEf            "ImageList_GetIcon" comctl32.dll Handle himl Integer iIndex Handle iStyle returns handle
External_function ImageList_DestroyEf            "ImageList_Destroy" comctl32.dll Handle himl returns integer
External_function ImageList_LoadImageEf          "ImageList_LoadImage" comctl32.dll Handle Hi String lpbmp Integer cx Integer cGrow Integer crMask Integer uType Integer uFlags Returns Integer

