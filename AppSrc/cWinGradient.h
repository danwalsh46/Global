// cWinGradient.pkg
// By Sergey V. Natarov (senatc@postman.ru)
//
// This package includes WinApi stuff to draw gradient fill
//

// TRIVERTEX [2] structure 
Type tTRIVERTEX
    Field tTRIVERTEX.X0         as Integer
    Field tTRIVERTEX.Y0         as Integer
    Field tTRIVERTEX.R0         as WORD 
    Field tTRIVERTEX.G0         as WORD 
    Field tTRIVERTEX.B0         as WORD
    Field tTRIVERTEX.A0         as WORD
    Field tTRIVERTEX.X1         as Integer
    Field tTRIVERTEX.Y1         as Integer
    Field tTRIVERTEX.R1         as WORD 
    Field tTRIVERTEX.G1         as WORD 
    Field tTRIVERTEX.B1         as WORD
    Field tTRIVERTEX.A1         as WORD
End_Type

Type tGRADTRIANGLE
    Field tGRADTRIANGLE.Vertex1 as Integer  // (ULONG)
    Field tGRADTRIANGLE.Vertex2 as Integer  // (ULONG)
    Field tGRADTRIANGLE.Vertex3 as Integer  // (ULONG)
End_Type

//
// gradient drawing modes
//

Define GRADIENT_FILL_RECT_H    For |CI$00000000
Define GRADIENT_FILL_RECT_V    For |CI$00000001
Define GRADIENT_FILL_TRIANGLE  For |CI$00000002
Define GRADIENT_FILL_OP_FLAG   For |CI$000000ff

External_function GradientFillEf "GradientFill" Msimg32.dll Handle hDC Pointer pVertex Integer dwNumVertex Pointer pMesh Integer dwNumMesh Integer dwMode Returns Integer

// Custom Gradient Modes
Define GRADIENT_NONE        For 0
Define GRADIENT_VERTICAL    For 1
Define GRADIENT_HORIZONTAL  For 2
Define GRADIENT_TOPBOTTOM   For 3
Define GRADIENT_LEFTRIGHT   For 4

Function DrawGradient Global Handle hDC Integer iGMode Integer iFColor Integer iTColor Integer iT Integer iL Integer iR Integer iB Returns Integer
    Integer iRet iMode 
    String sVert sTr
    Pointer pVert pTr
    Integer iCR iCG iCB 
    
    If (Not(iGMode))  Procedure_Return
    If (Not(iFColor)) Move clWhite To iFColor
    If (Not(iTColor)) Move clNavy To iTColor
    If ((iGMode=GRADIENT_VERTICAL)Or(iGMode=GRADIENT_TOPBOTTOM))   Move GRADIENT_FILL_RECT_V To iMode
    If ((iGMode=GRADIENT_HORIZONTAL)Or(iGMode=GRADIENT_LEFTRIGHT)) Move GRADIENT_FILL_RECT_H To iMode

    ZeroType tGRADTRIANGLE To sTr
    Put 0 To sTr At tGRADTRIANGLE.Vertex1
    Put 1 To sTr At tGRADTRIANGLE.Vertex2
    Put 2 To sTr At tGRADTRIANGLE.Vertex3
    GetAddress Of sTr To pTr

    ZeroType tTRIVERTEX To sVert
    // From Color
    Put iL          To sVert At tTRIVERTEX.X0
    Put iT          To sVert At tTRIVERTEX.Y0
    Put (R_FROM_RGB(iFColor)*256) To sVert At tTRIVERTEX.R0  
    Put (G_FROM_RGB(iFColor)*256) To sVert At tTRIVERTEX.G0  
    Put (B_FROM_RGB(iFColor)*256) To sVert At tTRIVERTEX.B0  
    Put 0           To sVert At tTRIVERTEX.A0  
    // To color        
    If (iGMode=GRADIENT_LEFTRIGHT) ;
        Put iR+4/2       To sVert At tTRIVERTEX.X1
    Else ;
        Put iR           To sVert At tTRIVERTEX.X1
    If (iGMode=GRADIENT_TOPBOTTOM) ;
        Put iB+4/2       To sVert At tTRIVERTEX.Y1
    Else ;
        Put iB           To sVert At tTRIVERTEX.Y1
    Put (R_FROM_RGB(iTColor)*256) To sVert At tTRIVERTEX.R1  
    Put (G_FROM_RGB(iTColor)*256) To sVert At tTRIVERTEX.G1  
    Put (B_FROM_RGB(iTColor)*256) To sVert At tTRIVERTEX.B1  
    Put 0           To sVert At tTRIVERTEX.A1 
    GetAddress Of sVert To pVert

    Move (GradientFillEf(hDC, pVert, 2, pTr, 1, iMode)) To iRet 
    //
    If (iGMode<3) Function_Return iRet
    Move "" To sVert
    ZeroType tTRIVERTEX To sVert
    If (iGMode=GRADIENT_TOPBOTTOM) Begin
        Put iL          To sVert At tTRIVERTEX.X0
        Put iB+4/2      To sVert At tTRIVERTEX.Y0
    End        
    If (iGMode=GRADIENT_LEFTRIGHT) Begin
        Put iR+4/2      To sVert At tTRIVERTEX.X0
        Put iT          To sVert At tTRIVERTEX.Y0
    End        
    Put (R_FROM_RGB(iTColor)*256) To sVert At tTRIVERTEX.R0  
    Put (G_FROM_RGB(iTColor)*256) To sVert At tTRIVERTEX.G0  
    Put (B_FROM_RGB(iTColor)*256) To sVert At tTRIVERTEX.B0  
    Put 0                         To sVert At tTRIVERTEX.A0  

    Put iR                        To sVert At tTRIVERTEX.X1
    Put iB                        To sVert At tTRIVERTEX.Y1
    Put (R_FROM_RGB(iFColor)*256) To sVert At tTRIVERTEX.R1  
    Put (G_FROM_RGB(iFColor)*256) To sVert At tTRIVERTEX.G1  
    Put (B_FROM_RGB(iFColor)*256) To sVert At tTRIVERTEX.B1  
    Put 0                         To sVert At tTRIVERTEX.A1 
    
    GetAddress Of sVert To pVert
    Move (GradientFillEf(hDC, pVert, 2, pTr, 1, iMode)) To iRet 
    Function_Return iRet
End_Function
//
