// cWinVer.h

///////////////////////  CONSTANTS ////////////////////////////

/* ----- VS_VERSION.dwFileFlags ----- */
Define VS_FF_DEBUG         for |CI$00000001
Define VS_FF_PRERELEASE    for |CI$00000002
Define VS_FF_PATCHED       for |CI$00000004
Define VS_FF_PRIVATEBUILD  for |CI$00000008
Define VS_FF_INFOINFERRED  for |CI$00000010
Define VS_FF_SPECIALBUILD  for |CI$00000020

/////////////////////  STRUCTURES  //////////////////////////

Type VS_FIXEDFILEINFO
    Field VS_FIXEDFILEINFO.dwSignature        as Integer
    Field VS_FIXEDFILEINFO.dwStrucVersion     as Integer
    Field VS_FIXEDFILEINFO.dwFileVersionMS    as Integer
    Field VS_FIXEDFILEINFO.dwFileVersionLS    as Integer
    Field VS_FIXEDFILEINFO.dwProductVersionMS as Integer
    Field VS_FIXEDFILEINFO.dwProductVersionLS as Integer
    Field VS_FIXEDFILEINFO.dwFileFlagsMask    as Integer
    Field VS_FIXEDFILEINFO.dwFileFlags        as Integer
    Field VS_FIXEDFILEINFO.dwFileOS           as Integer
    Field VS_FIXEDFILEINFO.dwFileType         as Integer
    Field VS_FIXEDFILEINFO.dwFileSubtype      as Integer
    Field VS_FIXEDFILEINFO.dwFileDateMS       as Integer
    Field VS_FIXEDFILEINFO.dwFileDateLS       as Integer
End_Type

//////////////////////  FUNCTIONS ///////////////////////////

External_Function GetFileVersionInfoSizeEf "GetFileVersionInfoSizeA" version.dll Pointer aFilename Pointer lpdwHandle Returns Integer
External_Function GetFileVersionInfoEf     "GetFileVersionInfoA"     version.dll Pointer sFilename Integer dwHandle Integer dwLen Integer aData Returns Integer
External_Function VerQueryValueEf          "VerQueryValueA"          version.dll Integer aBlock Integer aSubBlock Integer aaBuffer Integer puLen Returns Integer

