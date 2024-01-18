// cWinPathEx.h
// Compiled by Sergey V. Natarov (senatc@postman.ru)
//

External_Function PathFindExtensionEf    "PathFindExtensionA"    SHLWAPI.DLL Pointer lpszPath Returns Pointer
External_Function PathIsDirectoryEf      "PathIsDirectoryA"      SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathFileExistsEf       "PathFileExistsA"       SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathFindFileNameEf     "PathFindFileNameA"     SHLWAPI.DLL Pointer lpPath   Returns Pointer
External_Function PathIsDirectoryEmptyEf "PathIsDirectoryEmptyA" SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsFileSpecEf       "PathIsFileSpecA"       SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsHTMLFileEf       "PathIsHTMLFileA"       SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsLFNFileSpecEf    "PathIsLFNFileSpecA"    SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsNetworkPathEf    "PathIsNetworkPathA"    SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsRelativeEf       "PathIsRelativeA"       SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsRootEf           "PathIsRootA"           SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsSameRootEf       "PathIsSameRootA"       SHLWAPI.DLL Pointer lpszPath1 Pointer lpszPath2 Returns Integer
External_Function PathIsSystemFolderEf   "PathIsSystemFolderA"   SHLWAPI.DLL Pointer lpszPath Integer dwAttrb Returns Integer
External_Function PathIsUNCEf            "PathIsUNCA"            SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsUNCServerEf      "PathIsUNCServerA"      SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsUNCServerShareEf "PathIsUNCServerShareA" SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathIsURLEf            "PathIsURLEf"           SHLWAPI.DLL Pointer lpszPath Returns Integer
External_Function PathRemoveArgsEf       "PathRemoveArgsA"       SHLWAPI.DLL Pointer lpszPath Returns Pointer 
External_Function PathRemoveExtensionEf  "PathRemoveExtensionA"  SHLWAPI.DLL Pointer lpszPath Returns Pointer
External_Function PathRemoveFileSpecEf   "PathRemoveFileSpecA"   SHLWAPI.DLL Pointer lpszPath Returns Pointer
External_Function PathRenameExtensionEf  "PathRenameExtensionA"  SHLWAPI.DLL Pointer lpszPath Pointer lpszExt Returns Pointer
External_Function PathSkipRootEf         "PathSkipRootA"         SHLWAPI.DLL Pointer lpszPath Returns Pointer
External_Function PathStripPathEf        "PathStripPathA"        SHLWAPI.DLL Pointer lpszPath Returns Pointer
External_Function PathStripToRootEf      "PathStripToRootA"      SHLWAPI.DLL Pointer lpszPath Returns Pointer
External_Function PathUndecorateEf       "PathUndecorateA"       SHLWAPI.DLL Pointer lpszPath Returns Pointer


