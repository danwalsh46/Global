// cWinGDIEx.h
// By Sergey V. Natarov (senatc@postman.ru)
// Windows GDI interface
//

// *************************************************
// CONSTANTS 
// *************************************************

// Ternary raster operations 
Define SRCCOPY             For |CI$00CC0020 //* dest = source                   */
Define SRCPAINT            For |CI$00EE0086 //* dest = source Or dest           */
Define SRCAND              For |CI$008800C6 //* dest = source And dest          */
Define SRCINVERT           For |CI$00660046 //* dest = source XOR dest          */
Define SRCERASE            For |CI$00440328 //* dest = source And (Not dest )   */
Define NOTSRCCOPY          For |CI$00330008 //* dest = (Not source)             */
Define NOTSRCERASE         For |CI$001100A6 //* dest = (Not src) And (Not dest) */
Define MERGECOPY           For |CI$00C000CA //* dest = (source And pattern)     */
Define MERGEPAINT          For |CI$00BB0226 //* dest = (Not source) Or dest     */
Define PATCOPY             For |CI$00F00021 //* dest = pattern                  */
Define PATPAINT            For |CI$00FB0A09 //* dest = DPSnoo                   */
Define PATINVERT           For |CI$005A0049 //* dest = pattern XOR dest         */
Define DSTINVERT           For |CI$00550009 //* dest = (Not dest)               */
Define BLACKNESS           For |CI$00000042 //* dest = BLACK                    */
Define WHITENESS           For |CI$00FF0062 //* dest = WHITE                    */    

// (WINVER >= 0x0400)
Define DEFAULT_GUI_FONT    For 17

// Brush Styles
Define BS_SOLID            For 0
Define BS_NULL             For 1
Define BS_HOLLOW           For BS_NULL
Define BS_HATCHED          For 2
Define BS_PATTERN          For 3
Define BS_INDEXED          For 4
Define BS_DIBPATTERN       For 5
Define BS_DIBPATTERNPT     For 6
Define BS_PATTERN8X8       For 7
Define BS_DIBPATTERN8X8    For 8
Define BS_MONOPATTERN      For 9

// Hatch Styles 
Define HS_HORIZONTAL       For 0       //* ----- *//
Define HS_VERTICAL         For 1       //* ||||| *//
Define HS_FDIAGONAL        For 2       //* \\\\\ *//
Define HS_BDIAGONAL        For 3       //* ///// *//
Define HS_CROSS            For 4       //* +++++ *//
Define HS_DIAGCROSS        For 5       //* xxxxx *//

// Pen Styles 
Define PS_SOLID            For 0
Define PS_DASH             For 1       //* -------  *//
Define PS_DOT              For 2       //* .......  *//
Define PS_DASHDOT          For 3       //* _._._._  *//
Define PS_DASHDOTDOT       For 4       //* _.._.._  *//
Define PS_NULL             For 5
Define PS_INSIDEFRAME      For 6
Define PS_USERSTYLE        For 7
Define PS_ALTERNATE        For 8
Define PS_STYLE_MASK       For |CI$0000000F

Define PS_ENDCAP_ROUND     For |CI$00000000
Define PS_ENDCAP_SQUARE    For |CI$00000100
Define PS_ENDCAP_FLAT      For |CI$00000200
Define PS_ENDCAP_MASK      For |CI$00000F00

Define PS_JOIN_ROUND       For |CI$00000000
Define PS_JOIN_BEVEL       For |CI$00001000
Define PS_JOIN_MITER       For |CI$00002000
Define PS_JOIN_MASK        For |CI$0000F000

Define PS_COSMETIC         For |CI$00000000
Define PS_GEOMETRIC        For |CI$00010000
Define PS_TYPE_MASK        For |CI$000F0000

Define AD_COUNTERCLOCKWISE For 1
Define AD_CLOCKWISE        For 2


// (_WIN32_WINNT >= 0x0500)
Define DC_BRUSH            For 18
Define DC_PEN              For 19
                                  
// Background Modes 
Define TRANSPARENT         For 1
Define OPAQUE              For 2
Define BKMODE_LAST         For 2

/* Mapping Modes */
Define MM_TEXT For         1
Define MM_LOMETRIC For     2
Define MM_HIMETRIC For     3
Define MM_LOENGLISH For    4
Define MM_HIENGLISH For    5
Define MM_TWIPS For        6
Define MM_ISOTROPIC For    7
Define MM_ANISOTROPIC For  8

Define DCB_RESET      For |CI0001
Define DCB_ACCUMULATE For |CI0002
Define DCB_ENABLE     For |CI0004
Define DCB_DISABLE    For |CI0008

// **WvA: 02-11-2004
// Commented out on behalf Of JarekP And
// Franco Spinella. 
//
//Type DEVMODE
//    Field dmDeviceName as Char 32
//    Field dmSpecVersion as WORD
//    Field dmDriverVersion as WORD
//    Field dmSize as WORD
//    Field dmDriverExtra as WORD
//    Field dmFields as DWORD
//    Field dmOrientation as Short
//    Field dmPaperSize as Short
//    Field dmPaperLength as Short
//    Field dmPaperWidth as Short
//    Field dmScale as Short
//    Field dmCopies as Short
//    Field dmDefaultSource as Short
//    Field dmPrintQuality as Short
//    Field dmColor as Short
//    Field dmDuplex as Short
//    Field dmYResolution as Short
//    Field dmTTOption as Short
//    Field dmCollate as Short
//    Field dmFormName as Char 32
//    Field dmUnusedPadding as WORD
//    Field dmBitsPerPel as Short
//    Field dmPelsWidth as DWORD
//    Field dmPelsHeight as DWORD
//    Field dmDisplayFlags as DWORD
//    Field dmDisplayFrequency as DWORD
//End_Type

Type METAHEADER 
    Field mtType as WORD
    Field mtHeaderSize as WORD
    Field mtVersion as WORD
    Field mtSize as DWORD
    Field mtNoObjects as WORD
    Field mtMaxRecord as DWORD
    Field mtNoParameters as WORD
End_Type 

Type METAFILEHEADER
    Field ConstantNum 	As DWORD
    Field hMetaFile 	As WORD
    Field fleft     	as WORD
    Field ftop      	as WORD
    Field fright    	as WORD
    Field fbottom   	as WORD
    Field inch 			As WORD
    Field mfhReserved 	As DWORD
    Field checksum 		As WORD
End_Type

Type METARECORD 
    Field rdSize as DWORD
    Field rdFunction as WORD
    Field rdParm as WORD
End_Type 

    // Information of a Bitmap
Type BITMAPt
    Field BITMAPt.bmType               as Integer   //TYPE: LONG
    Field BITMAPt.bmWidth              as Integer   //TYPE: LONG
    Field BITMAPt.bmHeight             as Integer   //TYPE: LONG
    Field BITMAPt.bmWidthBytes         as Integer   //TYPE: LONG
    Field BITMAPt.bmPlanes             as WORD      //TYPE: WORD
    Field BITMAPt.bmBitsPixel          as WORD      //TYPE: WORD
    Field BITMAPt.bmBits               as Pointer   //TYPE: LPVOID
End_Type


// *************************************************
// FUNCTIONS
// *************************************************


External_function BeginPathEf           "BeginPath"         GDI32.DLL   Handle hdc Returns Integer
External_function EndPathEf             "EndPath"           GDI32.DLL   Handle hdc Returns Integer
External_function FillPathEf            "EndPath"           GDI32.DLL   Handle hdc Returns Integer
External_function FillRgnEf             "FillRgn"           GDI32.DLL   Handle hDc Handle hRgn Handle hBrush Returns Integer
//
External_function CreateCompatibleDCEf "CreateCompatibleDC" GDI32.DLL   Handle hDc Returns Handle
External_function CreateCompatibleBitmapEf "CreateCompatibleBitmap"     GDI32.DLL Handle hDc Integer iWidth Integer iHeight Returns Handle
External_function DeleteDCEf            "DeleteDC"          GDI32.DLL   Handle hDc Returns Integer
//
External_function SetDCPenColor         "SetDCPenColor"     GDI32.DLL   Handle hdc Integer iColor Returns Integer
External_function SetBkColor            "SetBkColor"        GDI32.DLL   Handle hDC DWORD crColor Returns DWord
External_function SetBkColorEf          "SetBkColor"        GDI32.DLL   Handle hDC DWORD crColor Returns DWord
External_function MoveToExEf            "MoveToEx"          GDI32.DLL   Handle hDc dword iX dword iY Pointer pPoint Returns Integer
External_function CreatePenEf           "CreatePen"         GDI32.DLL   Integer fnPenStyle Integer nWidth Integer crColor Returns Handle
External_function CreateFontEf          "CreateFontA"       GDI32.DLL   Integer nHeight Integer nWidth Integer nEscapement Integer nOrientation Integer fnWeight ;
   DWORD fdwItalic DWORD fdwUnderline DWORD fdwStrikeOut DWORD fdwCharSet DWORD fdwOutputPrecision DWORD fdwClipPrecision DWORD fdwQuality DWORD fdwPitchAndFamily ;
   Pointer lpszFace Returns Handle
External_function CreatePolygonRgnEf    "CreatePolygonRgn"  GDI32.DLL   Pointer lppt Integer cPoints Integer fnFillMode Returns Integer
External_function BitBltEf              "BitBlt"            GDI32.DLL   Handle hDcDest Integer nXDest Integer nYDest Integer nWidth Integer nHeight Handle hDcSrc Integer nXSrc Integer nYSrc Integer dwRop Returns Integer
External_function GetTextExtentPoint32Ef "GetTextExtentPoint32A"        GDI32.DLL Handle hDc Pointer pString Integer cbSize Pointer lpSize Returns Integer
External_function LPToDpEf              "LPtoDP"            GDI32.DLL   Handle hDc Pointer pPoints Integer nCount Returns Integer
External_function PtInRegionEf          "PtInRegion"        GDI32.DLL   Handle hRegion Integer iX Integer iY Returns Integer
External_function GetRgnBoxEf           "GetRgnBox"         GDI32.DLL   Handle hRegion Pointer pRect Returns Integer
External_function PolylineToEf          "PolylineTo"        GDI32.DLL   Handle hDc Pointer lppt Integer cCount Returns Integer
External_function CreateHatchBrushEf    "CreateHatchBrush"  GDI32.DLL   Integer fnStyle Integer clrref Returns Handle
External_function OffsetRgnEf           "OffsetRgn"         GDI32.DLL   Handle hRgn Integer iX Integer iY Returns Integer

External_function CreateBitmapEf         "CreateBitmap"         GDI32.DLL Integer nW Integer nH Integer nPlanes Integer nBits Pointer pBits Returns Handle
External_function CreateBitmapIndirectEf "CreateBitmapIndirect" GDI32.DLL Pointer pBitmap Returns Handle
External_function CreatePatternBrushEf   "CreatePatternBrush"   GDI32.DLL Handle  hBitmap Returns Handle
External_function PatBltEf               "PatBlt"               GDI32.DLL Handle  hDC     Integer iX Integer iY Integer iW Integer iH DWord dwRop Returns Integer

External_function DrawEscapeEf           "DrawEscape"       gdi32.dll   Handle hdc Integer nEscape ;
                                                    Integer cbInput String lpszInData ;
                                                    Returns Integer

External_function CreateDCEf "CreateDCA" gdi32.dll String lpDriverName String lpDeviceName ;
                                                String lpOutput Pointer lpInitData ;
                                                Returns Handle
External_function CreateDCByNumEf "CreateDCA" gdi32.dll String lpDriverName ;
                                                String lpDeviceName String lpOutput ;
                                                Integer lpInitData Returns Handle
External_function CreateICEf "CreateICA" gdi32.dll String lpDriverName String lpDeviceName ;
                                                 String lpOutput Pointer lpInitData ;
                                                 Returns Handle
External_function CreateICByNumEf "CreateICA" gdi32.dll String lpDriverName ;
                                                 String lpDeviceName String lpOutput ;
                                                 Pointer lpInitData Returns Handle                                                                                                 
External_function CreateRectRgnEf "CreateRectRgn" gdi32.dll Integer x1 Integer y1 Integer x2 ;
                                                          Integer y2 Returns Handle
External_function GetDCOrgExEf "GetDCOrgEx" gdi32.dll Handle hdc Pointer lpPoint Returns Integer
External_function GetDeviceCapsEf "GetDeviceCaps" gdi32.dll Handle hdc Integer nIndex ;
                                                          Returns Integer
External_function GetMapModeEf "GetMapMode" gdi32.dll Handle hdc Returns Integer
External_function GetViewportExtExEf "GetViewportExtEx" gdi32.dll Handle hdc Pointer lpSize ;
                                                                Returns Integer
External_function GetViewportOrgExEf "GetViewportOrgEx" gdi32.dll Handle hdc Pointer lpSize ;
                                                                Returns Integer
External_function GetWindowExtExEf "GetWindowExtExt" gdi32.dll Handle hdc Pointer lpSize ;
                                                             Returns Integer
External_function GetWindowOrgExEf "GetWindowOrgEx" gdi32.dll Handle hdc Pointer lpSize ;
                                                            Returns Integer
External_function RestoreDCEf "RestoreDC" gdi32.dll Handle hdc Integer nSavedDC Returns Integer
External_function SaveDCEf "SaveDC" gdi32.dll Handle hdc Returns Integer
External_function SelectClipRgnEf "SelectClipRgn" gdi32.dll Handle hdc Handle hRgn ;
                                                          Returns Integer                                                                                                     
External_function SetBoundsRectEf "SetBoundsRect" gdi32.dll Handle hdc Pointer lprcBounds ;
                                                          Integer flags Returns Integer
External_function SetMapModeEf "SetMapMode" gdi32.dll Handle hdc Integer nMapMode ;
                                                     Returns Integer
External_function SetViewportExtExEf "SetViewportExtEx" gdi32.dll Handle hdc Integer nX ;
                                                                Integer nY Pointer lpSize ;
                                                                Returns Integer
External_function SetViewportOrgExEf "SetViewportOrgEx" gdi32.dll Handle hdc Integer nX ;
                                                                Integer nY Pointer lpSize ;
                                                                Returns Integer
External_function SetWindowExtExEf "SetWindowExtEx" gdi32.dll Handle hdc Integer nX Integer nY ;
                                                            Pointer lpSize Returns Integer
External_function SetWindowOrgExEf "SetWindowOrgEx" gdi32.dll Handle hdc Integer nX Integer nY ;
                                                            Pointer lpPoint Returns Integer
External_function AbortPathEf "AbortPath" gdi32.dll Handle hDC Returns Integer
External_function AngleArcEf "AngleArc" gdi32.dll Handle hDC Integer iX Integer iY ;
                                                Integer dwRadius Integer eStartAngle ;
                                                Integer eSweepAngle Returns Integer
                                                
External_function ArcEf "Arc" gdi32.dll Handle hDC Integer iX1 Integer iY1 Integer iX2 ;
                                      Integer iY2 Integer iX3 Integer iY3 Integer iX4 ;
                                      Integer iY4 Returns Integer
External_function ArcToEf "ArcTo" gdi32.dll Handle hDC Integer iX1 Integer iY1 Integer iX2 ;
                                          Integer iY2 Integer iX3 Integer iY3 Integer iX4 ;
                                          Integer iY4 Returns Integer
External_function CancelDCEf "CancelDC" gdi32.dll Handle hDC Returns Integer
External_function ChordEf "Chord" gdi32.dll Handle hDC Integer iX1 Integer iY1 Integer iX2 ;
                                          Integer iY2 Integer iX3 Integer iY3 Integer iX4 ;
                                          Integer iY4 Returns Integer
External_function CloseEnhMetaFileEf "CloseEnhMetaFile" gdi32.dll Handle hDC Returns Handle
External_function CloseFigureEf "CloseFigure" gdi32.dll Handle hDC Returns Integer
External_function CloseMetaFileEf "CloseMetaFile" gdi32.dll Handle hMF Returns Handle
External_function CopyEnhMetaFileEf "CopyEnhMetaFile" gdi32.dll Handle hemfSrc String lpszFile ;
                                                              Returns Handle
External_function CopyMetaFileEf "CopyMetaFile" gdi32.dll Handle hMF String lpFileName ;
                                                        Returns Handle
External_function CreateBrushIndirectEf "CreateBrushIndirect" gdi32.dll Pointer pLogBrush ;
                                                                      Returns Handle
External_function CreateDIBPatternBrushEf "CreateDIBPatternBrush" gdi32.dll ;
                                                                Handle hPackedDIB ;
                                                                Integer lpPackedDIB ;
                                                                Integer wUsage;
                                                                Returns Handle
External_function CreateDIBPatternBrushPtEf "CreateDIBPatternBrushPt" gdi32.dll ;
                                                                    Handle hPackedDIB ;
                                                                    Integer lpPackedDIB ;
                                                                    Integer wUsage;
                                                                    Returns Handle
External_function CreateEnhMetaFileEf "CreateEnhMetaFile" gdi32.dll Handle hdcRef ;
                                                                  String lpFileName ;
                                                                  Pointer lpRECT ;
                                                                  String lpDescription ;
                                                                  Returns Integer
External_function CreateMetaFileEf "CreateMetaFile" gdi32.dll String lpszFile Returns Handle
External_function CreatePenIndirectEf "CreatePenIndirect" gdi32.dll Pointer lpLogPen ;
                                                                  Returns Handle
External_function CreateSolidBrushEf "CreateSolidBrush" gdi32.dll Integer crColor ;
                                                                Returns Handle
External_function DeleteEnhMetaFileEf "DeleteEnhMetaFile" gdi32.dll Handle hemf ;
                                                                  Returns Integer
External_function DeleteMetaFileEf "DeleteMetaFile" gdi32.dll Handle hMF Returns Integer
External_function DeleteObjectEf "DelteObject" gdi32.dll Handle hObject Returns Integer
External_function EllipseEf "Ellipse" gdi32.dll Handle hdc Integer X1 Integer Y1 Integer X2 ;
                                              Integer Y2 Returns Integer
External_function EnumEnhMetaFileEf "EnumEnhMetaFile" gdi32.dll Handle hdc Handle hemf ;
                                                              Pointer lpEnhMetaFunc ;
                                                              Pointer lpData Integer lpRect ;
                                                              Returns Integer
External_function EnumMetaFileEf "EnumMetaFile" gdi32.dll Handle hDC Handle hMF ;
                                                        Pointer lpMFEnumProc Integer lParam ;
                                                        Returns Integer
External_function EnumObjectsEf "EnumObjects" gdi32.dll Handle hDC Integer n ;
                                                      Pointer lpGOBJEnumProc Integer lpVoid ;
                                                      Returns Integer
External_function ExtCreatePenEf "ExtCreatePen" gdi32.dll Integer dwPenStyle Integer dwWidth ;
                                                        Pointer lplb Integer dwStyleCount ;
                                                        Pointer lpStyle Returns Integer
External_function ExtFloodFillEf "ExtFloodFill" gdi32.dll Handle hdc Integer x Integer y ;
                                                        Integer crColor Integer wFillType ;
                                                        Returns Integer
External_function FlattenPathEf "FlattenPath" gdi32.dll Handle hdc Returns Integer
External_function FloodFillEf "FloodFill" gdi32.dll Handle hdc Integer x Integer y ;
                                                  Integer crColor Returns Integer
External_function GdiCommentEf "GdiComment" gdi32.dll Handle hdc Integer cbSize Pointer lpData ;
                                                    Returns Integer
External_function GdiFlushEf "GdiFlush" gdi32.dll Returns Integer
External_function GdiGetBatchLimitEf "GdiGetBatchLimit" gdi32.dll Returns Integer
External_function GdiSetBatchLimitEf "GdiSetBatchLimit" gdi32.dll Integer dwLimit ;
                                                                Returns Integer
External_function GetArcDirectionEf "GetArcDirection" gdi32.dll Handle hdc Returns Integer
External_function GetBkColorEf "GetBkColor" gdi32.dll Handle hdc Returns Integer
External_function GetBkModeEf "GetBkMode" gdi32.dll Handle hdc Returns Integer
External_function GetBrushOrgExEf "GetBrushOrgEx" gdi32.dll Handle hDC Pointer lpPoint ;
                                                          Returns Integer
External_function GetCurrentObjectEf "GetCurrentObject" gdi32.dll Handle hdc ;
                                                                Integer uObjectType ;
                                                                Returns Integer
External_function GetCurrentPositionExEf "GetCurrentPositionEx" gdi32.dll Handle hdc ;
                                                                        Pointer lpPoint ;
                                                                        Returns Integer
External_function GetEnhMetaFileEf "GetEnhMetaFile" gdi32.dll String lpszMetaFile ;
                                                            Returns Handle
External_function GetEnhMetaFileBitsEf "GetEnhMetaFileBits" gdi32.dll Handle hemf ;
                                                                    Integer cbBuffer ;
                                                                    Pointer lpbBuffer ;
                                                                    Returns Integer
External_function GetEnhMetaFileDescriptionEf "GetEnhMetaFileDescription" gdi32.dll ;
                  Handle hEmf Integer cchBuffer String lpszDescription Returns Integer
External_function GetEnhMetaFileHeaderEf "GetEnhMetaFileHeader" gdi32.dll Handle hemf ;
                                                                        Integer cbBuffer ;
                                                                        Pointer lpemh ;
                                                                        Returns Integer
External_function GetEnhMetaFilePaletteEntriesEf "GetEnhMetaFilePaletteEntries" gdi32.dll ;
                  Handle hemf Integer cEntries Pointer lppe Returns Integer
External_function GetMetaFileEf "GetMetaFile" gdi32.dll String lpFileName Returns Handle
External_function GetMetaFileBitsExEf "GetMetaFileBitsEx" gdi32.dll Handle hMF Integer nSize ;
                                                                  Pointer lpvData ;
                                                                  Returns Integer
External_function GetMiterLimitEf "GetMiterLimit" gdi32.dll Handle hdc Integer peLimit ;
                                                          Returns Integer
External_function GetNearestColorEf "GetNearestColor" gdi32.dll Handle hdc Integer crColor ;
                                                              Returns Integer
External_function GetObjectAPIEf "GetObjectA" gdi32.dll Handle hObject Integer nCount ;
                                                      Pointer lpObject Returns Integer
External_function GetObjectTypeEf "GetObjectType" gdi32.dll Handle hgdiobj Returns Integer
External_function GetPathEf "GetPath" gdi32.dll Handle hdc Pointer lpPoint Pointer lpTypes ;
                                              Integer nSize Returns Integer
External_function GetPixelEf "GetPixel" gdi32.dll Handle hdc Integer x Integer y Returns Integer
External_function GetPolyFillModeEf "GetPolyFillMode" gdi32.dll Handle hdc Returns Integer
External_function GetROP2Ef "GetROP2" gdi32.dll Handle hdc Returns Integer
External_function GetStockObjectEf "GetStockObject" gdi32.dll Integer nIndex Returns Integer
External_function GetWinMetaFileBitsEf "GetWinMetaFileBits" gdi32.dll Handle hemf ;
                                                                    Integer cbBuffer ;
                                                                    Pointer lpbBuffer ;
                                                                    Integer fnMapMode ;
                                                                    Handle hdcRef ;
                                                                    Returns Integer
External_function LineDDAEf "LineDDA" gdi32.dll Integer n1 Integer n2 Integer n3 Integer n4 ;
                                              Pointer lpLineDDAProc Integer lParam ;
                                              Returns Integer
External_function LineToEf "LineTo" gdi32.dll Handle hdc Integer x Integer y Returns Integer
External_function PathToRegionEf "PathToRegion" gdi32.dll Handle hdc Returns Handle
External_function PieEf "Pie" gdi32.dll Handle hdc Integer x1 Integer y1 Integer x2 Integer y2 ;
                                      Integer x3 Integer y3 Integer x4 Integer y4 ;
                                      Returns Integer
External_function PlayEnhMetaFileEf "PlayEnhMetaFile" gdi32.dll Handle hdc Handle hemf ;
                                                              Pointer lpRect Returns Integer
External_function PlayEnhMetaFileRecordEf "PlayEnhMetaFileRecord" gdi32.dll Handle hdc ;
                                                                Pointer lpHandleTable ;
                                                                Pointer lpEnhMetaRecord ;
                                                                Integer nHandles ;
                                                                Returns Integer
External_function PlayMetaFileEf "PlayMetaFile" gdi32.dll Handle hdc Handle hMF Returns Integer
External_function PlayMetaFileRecordEf "PlayMetaFileRecord" gdi32.dll Handle hDC ;
                                                                    Pointer lpHandleTable ;
                                                                    Pointer lpMetaRecord ;
                                                                    Integer nCount ;
                                                                    Returns Integer                                                                
External_function PolyBezierEf "PolyBezier" gdi32.dll Handle hdc Pointer lppt Integer cPoints ;
                                                    Returns Integer                                                                
External_function PolyBezierToEf "PolyBezierTo" gdi32.dll Handle hdc Pointer lppt Integer cPoints ;
                                                        Returns Integer
External_function PolyDrawEf "PolyDraw" gdi32.dll Handle hdc Pointer lppt Pointer lpbTypes ;
                                                Integer cCount Returns Integer
External_function PolygonEf "Polygon" gdi32.dll Handle hdc Pointer lpPoint Integer nCount ;
                                              Returns Integer
External_function PolylineEf "Polyline" gdi32.dll Handle hdc Pointer lpPoint Integer nCount ;
                                                Returns Integer
External_function PolyPolygonEf "PolyPolygon" gdi32.dll Handle hdc Pointer lpPoint ;
                                                      Pointer lpPolyCounts Integer nCount ;
                                                      Returns Integer
External_function PolyPolylineEf "PolyPolyline" gdi32.dll Handle hdc Pointer lppt ;
                                                        Pointer lpdwPolyPoints Integer nCount ;
                                                        Returns Integer
External_function RectangleEf "Rectangle" gdi32.dll Handle hdc Integer x1 Integer y1 Integer x2 ;
                                                  Integer y2 Returns Integer
External_function RoundRectEf "RoundRect" gdi32.dll Handle hdc Integer x1 Integer y1 Integer x2 ;
                                                  Integer y2 Integer x3 Integer y3 ;
                                                  Returns Integer
External_function SelectClipPathEf "SelectClipPath" gdi32.dll Handle hdc Integer iMode ;
                                                            Returns Integer
External_function SelectObjectEf "SelectObject" gdi32.dll Handle hdc Handle hObject ;
                                                        Returns Handle
External_function SetArcDirectionEf "SetArcDirection" gdi32.dll Handle hdc Integer ArcDirection ;
                                                              Returns Integer
External_function SetBkModeEf "SetBkMode" gdi32.dll Handle hdc Integer nBkMode Returns Integer
External_function SetBrushOrgExEf "SetBrushOrgEx" gdi32.dll Handle hdc Integer nXOrg ;
                                                          Integer nYOrg Pointer lppt ;
                                                          Returns Integer
External_function SetEnhMetaFileBitsEf "SetEnhMetaFileBits" gdi32.dll Integer cbBuffer ;
                                                                    Pointer lpData ;
                                                                    Returns Handle
External_function SetMetaFileBitsExEf "SetMetaFileBitsEx" gdi32.dll Integer nSize ;
                                                                  Integer lpData ;
                                                                  Returns Handle
External_function SetMiterLimitEf "SetMiterLimit" gdi32.dll Handle hdc Integer eNewLimit ;
                                                          Integer peOldLimit Returns Integer
External_function SetPixelEf "SetPixel" gdi32.dll Handle hdc Integer x Integer y ;
                                                Integer crColor Returns Integer
External_function SetPixelVEf "SetPixelV" gdi32.dll Handle hdc Integer x Integer y ;
                                                  Integer crColor Returns Integer
External_function SetPolyFillModeEf "SetPolyFillMode" gdi32.dll Handle hdc ;
                                                              Integer nPolyFillMode ;
                                                              Returns Integer
External_function SetROP2Ef "SetROP2" gdi32.dll Handle hdc Integer nDrawMode Returns Integer
External_function SetWinMetaFileBitsEf "SetWinMetaFileBits" gdi32.dll Integer cbBuffer ;
                                                                    Pointer lpbBuffer ;
                                                                    Handle hdcRef ;
                                                                    Pointer lpmfp ;
                                                                    Returns Handle
External_function StrokeAndFillpathEf "StrokeAndFillPath" gdi32.dll Handle hdc Returns Integer
External_function StrokePathEf "StrokePath" gdi32.dll Handle hdc Returns Integer
External_function UnrealizeObjectEf "UnrealizeObject" gdi32.dll Handle hObject Returns Integer
External_function WidenPathEf "WidenPath" gdi32.dll Handle hdc Returns Integer

