// cWinKernEx.h
// By Sergey V. Natarov (senatc@postman.ru)
// Windows Kernel Interface
//

Define MAX_COMPUTERNAME_LENGTH For 15

#IF (FMAC_VERSION < 8)
Define SYNCHRONIZE              For |CI$00100000
Define NOTSYNCHRONIZE           For |CI$FFEFFFFF
Define STANDARD_RIGHTS_REQUIRED For |CI$000F0000
#ENDIF

// Drive types
Define DRIVE_UNKNOWN     For 0
Define DRIVE_NO_ROOT_DIR For 1
Define DRIVE_REMOVABLE   For 2
Define DRIVE_FIXED       For 3
Define DRIVE_REMOTE      For 4
Define DRIVE_CDROM       For 5
Define DRIVE_RAMDISK     For 6

Define PROCESS_TERMINATE         For |CI$0001
Define PROCESS_CREATE_THREAD     For |CI$0002
Define PROCESS_SET_SESSIONID     For |CI$0004
Define PROCESS_VM_OPERATION      For |CI$0008
Define PROCESS_VM_READ           For |CI$0010
Define PROCESS_VM_WRITE          For |CI$0020
Define PROCESS_DUP_HANDLE        For |CI$0040
Define PROCESS_CREATE_PROCESS    For |CI$0080
Define PROCESS_SET_QUOTA         For |CI$0100
Define PROCESS_SET_INFORMATION   For |CI$0200
Define PROCESS_QUERY_INFORMATION For |CI$0400
Define PROCESS_ALL_ACCESS        For (STANDARD_RIGHTS_REQUIRED Ior SYNCHRONIZE Ior |CI$FFFF)

Define FORMAT_MESSAGE_ALLOCATE_BUFFER   For |CI$00000100
Define FORMAT_MESSAGE_IGNORE_INSERTS    For |CI$00000200
Define FORMAT_MESSAGE_FROM_STRING       For |CI$00000400
Define FORMAT_MESSAGE_FROM_HMODULE      For |CI$00000800
Define FORMAT_MESSAGE_FROM_SYSTEM       For |CI$00001000
Define FORMAT_MESSAGE_ARGUMENT_ARRAY    For |CI$00002000
Define FORMAT_MESSAGE_MAX_WIDTH_MASK    For |CI$000000FF

Type _OSVERSIONINFO
  Field _OSVERSIONINFO.dwOSVersionInfoSize As dWord
  Field _OSVERSIONINFO.dwMajorVersion As dWord
  Field _OSVERSIONINFO.dwMinorVersion As dWord
  Field _OSVERSIONINFO.dwBuildNumber As dWord
  Field _OSVERSIONINFO.dwPlatformId As dWord
  Field _OSVERSIONINFO.szCSDVersion As Char 128
End_Type // _OSVERSIONINFO

// GetVersionEx constants
Define CP_VER_PLATFORM_WIN32s        // Win32s on Windows 3.1.
Define CP_VER_PLATFORM_WIN32_WINDOWS // Win32 on Windows 95.
Define CP_VER_PLATFORM_WIN32_NT      // Win32 on Windows NT.

Define Ver_MajorVersion_Windows_95              For 4
Define Ver_MajorVersion_Windows_98              For 4
Define Ver_MajorVersion_Windows_Me              For 4
Define Ver_MajorVersion_Windows_NT_351          For 3
Define Ver_MajorVersion_Windows_NT_40           For 4
Define Ver_MajorVersion_Windows_2000            For 5
Define Ver_MajorVersion_Windows_XP              For 5
Define Ver_MajorVersion_Windows_NET_Server      For 5

Define Ver_MinorVersion_Windows_95              For 0
Define Ver_MinorVersion_Windows_98              For 10
Define Ver_MinorVersion_Windows_Me              For 90
Define Ver_MinorVersion_Windows_NT_351          For 51
Define Ver_MinorVersion_Windows_NT_40           For 0
Define Ver_MinorVersion_Windows_2000            For 0
Define Ver_MinorVersion_Windows_XP              For 1
Define Ver_MinorVersion_Windows_NET_Server      For 1

Define Ver_Suite_SmalLBusiness                  For  |CI$0001
Define Ver_Suite_Enterprise                     For  |CI$0002
Define Ver_Suite_BackOffice                     For  |CI$0004
Define Ver_Suite_Communications                 For  |CI$0008
Define Ver_Suite_Terminal                       For  |CI$0010
Define Ver_Suite_SmallBusiness_Restricted       For  |CI$0020
Define Ver_Suite_EmbeddedNT                     For  |CI$0040
Define Ver_Suite_DataCenter                     For  |CI$0080
Define Ver_Suite_SingleUserTS                   For  |CI$0100
Define Ver_Suite_Personal                       For  |CI$0200
Define Ver_Suite_Blade                          For  |CI$0400

Define VER_NT_WORKSTATION                       For 1           // The system is running Windows NT 4.0 Workstation,
                                                                // Windows 2000 Professional, Windows XP Home Edition, or
                                                                // Windows XP Professional.
Define VER_NT_DOMAIN_CONTROLLER                 For 2           // The system is a domain controller.
Define VER_NT_SERVER                            For 3           // The system is a server.


Type _OSVERSIONINFOEX
  Field _OSVERSIONINFOEX.dwOSVersionInfoSize      As dWord
  Field _OSVERSIONINFOEX.dwMajorVersion           As dWord
  Field _OSVERSIONINFOEX.dwMinorVersion           As dWord
  Field _OSVERSIONINFOEX.dwBuildNumber            As dWord
  Field _OSVERSIONINFOEX.dwPlatformId             As dWord
  Field _OSVERSIONINFOEX.szCSDVersion             As Char 128
  Field _OSVERSIONINFOEX.wServicePackMajor        As Word
  Field _OSVERSIONINFOEX.wServicePackMinor        As Word
  Field _OSVERSIONINFOEX.wSuiteMask               As Word
  Field _OSVERSIONINFOEX.wProductType             As Byte
  Field _OSVERSIONINFOEX.wReserved                As Byte
End_Type // _OSVERSIONINFOEX


// 2004-05-24 ------------------------------------ Start Nils G. Svedmyr
//#IFDEF MEMORYSTATUS_SIZE
//  #ELSE
//    DEFINE$VARIABLE$HELP INTEGER MEMORYSTATUS_SIZE
//#ENDIF

//#IF (MEMORYSTATUS_SIZE = |CI0)
  Type MEMORYSTATUS
    Field MEMORYSTATUS.dwLength         As Dword // sizeof(MEMORYSTATUS)
    Field MEMORYSTATUS.dwMemoryLoad     As Dword // percent of memory in use
    Field MEMORYSTATUS.dwTotalPhys      As Dword // bytes of physical memory
    Field MEMORYSTATUS.dwAvailPhys      As Dword // free physical memory bytes
    Field MEMORYSTATUS.dwTotalPageFile  As Dword // bytes of paging file
    Field MEMORYSTATUS.dwAvailPageFile  As Dword // free bytes of paging file
    Field MEMORYSTATUS.dwTotalVirtual   As Dword // user bytes of address space
    Field MEMORYSTATUS.dwAvailVirtual   As Dword // free user bytes
  End_Type // MEMORYSTATUS
//#ENDIF
// 2004-05-24 ------------------------------------ Stop Nils G. Svedmyr

External_function GetTempPathEf   "GetTempPathA"  Kernel32.Dll Integer nBufferLength Pointer lpBuffer Returns Integer
External_function GetSystemTimeEf "GetSystemTime" Kernel32.dll Pointer lpSystemTime Returns Integer
External_function CreateProcessEf "CreateProcessA"  Kernel32.dll ;
    Pointer  ApplicationName ;
    Pointer  CmdLine ;
    Pointer  ProcessAttr ;       //Struct
    Pointer  ThreadAttr ;        //Struct
    Integer  InheritHandles ;
    Integer  CreationFlags ;
    Integer  EnvironmentBlock ;
    Pointer  CurrentDirectory ;
    Pointer  StartupInfo ;       //Struct
    Pointer  ProcessInformation ;//Struct
    Returns Integer

External_function GetEnvironmentStringsEf "GetEnvironmentStringsA" Kernel32.dll Returns Pointer
External_function FreeEnvironmentStringsEf "FreeEnvironmentStringsA" Kernel32.dll Pointer lpEnvBlock Returns Integer
External_function MyCreateProcessEf "CreateProcessA" Kernel32.dll ;
    Pointer  A ;
    Pointer  C ;
    Pointer  P ;
    Pointer  T ;
    Integer  I ;
    Integer  Cr ;
    Integer  E ;
    Pointer  Cu ;
    Pointer  S ;
    Pointer  Pr ;
    Returns Integer

External_function SleepMilliEf         "Sleep" Kernel32.dll UInteger dwMillisecond Returns Integer
External_function WaitForSingleObjectEf "WaitForSingleObject" Kernel32.dll Handle hHandle Integer  msec Returns Integer
External_function CloseHandleEf        "CloseHandle" Kernel32.dll Handle hHandle Returns Integer

External_function GetExitCodeProcessEf "GetExitCodeProcess" Kernel32.dll Handle hProcess Pointer lpLong Returns Integer
External_function ExitProcessEf        "ExitProcess" Kernel32.dll Integer iExitCode Returns Integer
External_function FindExecutableEf     "FindExecutableA" Shell32.dll String sFileName String sDefaultDir Pointer lpBuffer Returns Integer

External_function InitAtomTableEf      "InitAtomTable" kernel32.dll Integer nSize Returns Integer
External_function GlobalAddAtomEf      "GlobalAddAtomA" kernel32.dll Pointer lpsString Returns Integer
External_function GlobalDeleteAtomEf   "GlobalDeleteAtom"  kernel32.dll Integer nAtom  Returns Integer
External_function GlobalFindAtomEf     "GlobalFindAtomA" kernel32.dll Pointer lpsString Returns Integer
External_function GlobalGetAtomNameEf  "GlobalGetAtomNameA" kernel32.dll Integer nAtom Pointer lpBuffer Integer nSize Returns Integer
External_function CompareFileTimeEf    "CompareFileTime" kernel32.dll Pointer lpFileTime1 Pointer lpFileTime2 Returns Integer

External_function lcloseEf "_lclose" kernel32.dll Handle hFile Returns Integer
External_function lCreatEf "_lcreat" kernel32.dll String lpPathName Integer iAttribute Returns Handle
External_function llseekEf "_llseek" kernel32.dll Handle hFile Integer lOffset Integer iOrigin Returns Integer
External_function lopenEf "_lopen" kernel32.dll String lpPathName Integer iReadWrite Returns Handle
External_function lreadEf "_lread" kernel32.dll Handle hFile Pointer lpBuffer Integer wBytes Returns Integer
External_function lwriteEf "_lwrite" kernel32.dll Handle hFile Pointer lpBuffer Integer wBytes Returns Integer
External_function lstrcpyEf "lstrcpyA" kernel32.dll Pointer lpString1 Pointer lpString2 Returns Integer

External_function GetTempFileNameEf "GetTempFileNameA" kernel32.dll String sPath String sPrefix Integer sUnique Pointer sLoad Returns Integer
External_function GetTmpPathEf "GetTempPathA" kernel32.dll Integer iBufferSize Pointer sBuffer Returns Integer

External_function FindFirstFileEf "FindFirstFileA" kernel32.dll Pointer lpFileName Pointer pWin32 Returns Handle
External_function FindNextFileEf "FindNextFileA" kernel32.dll Handle hSearch Pointer pWin32 Returns Integer
External_function FindCloseEf "FindClose" kernel32.dll Handle hSearch Returns Integer
External_function xtCopyFileEf "CopyFileA" kernel32.dll String sFileName String sNewFileName Integer bFailIfExists Returns Integer
External_function MoveFileEf "MoveFileA" kernel32.dll String szExistingFilename String szNewFilename Returns Integer

External_function GlobalAllocEf "GlobalAlloc" kernel32.dll Integer wFlags Integer dwBytes Returns Handle
External_function GlobalFreeEf "GlobalFree" kernel32.dll Handle hMem Returns Integer
External_function GlobalLockEf "GlobalLock" kernel32.dll Handle hMem Returns Integer
External_function GlobalUnlockEf "GlobalUnlock" kernel32.dll Handle hMem Returns Integer

External_function SetLastErrorEf "SetLastError" kernel32.dll Integer dwErrorCode Returns Integer
External_function GetCurrentProcessIDEf "GetCurrentProcessId" kernel32.dll Returns Address  // should be dword or uinteger
External_function OpenProcessEf "OpenProcess" Kernel32.Dll Integer dwDesiredAccess Boolean bInheritHandle Integer dwProcessId Returns Handle
External_function GetModuleFileNameEf "GetModuleFileNameA" Kernel32.dll Handle hModule Address sFilename UInteger nSize Returns Integer

External_function GetLocaleInfoEf "GetLocaleInfoA" Kernel32.dll Integer LCID Integer LCTYPE Pointer lpLCDATA Integer cchData Returns Integer
External_function GetCalendarInfoEf "GetCalendarInfoA" Kernel32.Dll Integer iLocale Integer iCalendar Integer iCaltype Pointer lpCalData Integer cchData Pointer lpValue Returns Integer

External_function GlobalMemoryStatusEf "GlobalMemoryStatus" Kernel32.Dll Pointer lpsMemoryStatus Returns Integer
External_function GetLogicalDriveStringsEf "GetLogicalDriveStringsA" Kernel32.Dll Integer nBufferLength Pointer lpBuffer Returns Integer
External_function GetDriveTypeEf "GetDriveTypeA" Kernel32.Dll Pointer lpRootPathName Returns Integer

External_function GetVolumeInformationEf "GetVolumeInformationA" Kernel32.DLL ;
    Pointer lpRootPathName Pointer lpVolumeNameBuffer Integer nVolumeNameSize Pointer lpVolumeSerialNumber Pointer lpMaximumComponentLength ;
    Pointer lpFileSystemFlags Pointer lpFileSystemNameBuffer Integer nFileSystemNameSize Returns Integer

External_function SetVolumeLabelEf "SetVolumeLabelA" Kernel32.dll Pointer lpRootPathName Pointer lpVolumeName Returns Integer

External_function GetDiskFreeSpaceExEf "GetDiskFreeSpaceExA" Kernel32.dll Pointer lpDirectoryName Pointer lpFreeBytesAvailable Pointer lpTotalNumberOfBytes Pointer lpTotalNumberOfFreeBytes Returns Integer

External_function GetOSVersionExEf "GetVersionExA" KERNEL32.DLL Pointer lpVersionInformation Returns Integer

External_function GetShortPathNameEf "GetShortPathNameA" Kernel32.Dll Pointer lpszLongPath Pointer lpszShortPath Dword cchBuffer Returns Dword
External_function GetLongPathNameEf "GetLongPathNameA" Kernel32.Dll Pointer lpszShortPath Pointer lpszLongPath Dword cchBuffer Returns Integer

External_function GetComputerNameEf "GetComputerNameA" Kernel32.Dll Pointer lpComputerName Dword nNameSize Returns Integer

External_function GetWindowsDirectoryEf "GetWindowsDirectoryA" kernel32.dll Pointer lpBuffer Integer nSize Returns Integer
External_function GetSystemDirectoryEf "GetSystemDirectoryA" Kernel32.Dll Pointer lpBuffer UInteger uSize Returns Integer
External_function GetCurrentDirectoryEf "GetCurrentDirectoryA" kernel32.dll Integer nSize Pointer lpBuffer Returns Integer


External_function CreatefileEf "CreateFileA" kernel32.dll Pointer lpFile dword dwDesAccess dword dwShare Pointer lpSecAtt dword dwCrDisp Dword dwFlags Handle hTempFile Returns Integer
External_function FormatMessageEf "FormatMessageA" kernel32.dll Integer dwFlags Pointer lpSrc Integer dwMsgId Integer dwLngId Pointer lpBuf Integer nSize  Pointer Arg Returns Integer
External_function ReadFileEf "ReadFile" kernel32.dll Handle hFile Pointer lpBuffer DWORD nBytesToRead Pointer lpBytesRead Pointer lpOverlapped Returns Integer
External_function WriteFileEf "WriteFile" kernel32.dll Handle hFile Pointer lpBuf DWORD nNumBytesWrt Pointer lpNumBytesWritten Pointer lpOverlapped Returns Integer
External_function GetFileSizeEf "GetFileSize" kernel32.dll Handle hFile Pointer lpFileSizeHigh Returns Integer
External_function SetFilePointerEf "SetFilePointer" kernel32.dll Handle hFile Integer lDistToMove Pointer lpDistToMoveHigh DWORD dwMoveMethod Returns Integer
External_function DeleteFileEf "DeleteFileA" Kernel32.Dll Pointer lpFileName Returns Integer
External_function CopyFileEf "CopyFileA" Kernel32.Dll Pointer lpExistingFileName Pointer lpNewFileName Boolean bFailIfExists Returns Integer
External_function FileTimeToSystemTimeEf "FileTimeToSystemTime" Kernel32.dll Pointer lpFiletime Pointer lpSystemtime Returns Integer
External_function FileTimeToLocalFileTimeEf "FileTimeToLocalFileTime" Kernel32.dll Pointer lpFileTime Pointer lpLocalFileTime Returns Integer
External_function GetDateFormatEf "GetDateFormatA" Kernel32.dll Integer iLocale Dword dwFlags Pointer lpDate Pointer lpFormat Pointer lpDateStr Integer icchDate Returns Integer
External_function GetTimeFormatEf "GetTimeFormatA" Kernel32.dll Integer iLocale Dword dwFlags Pointer lpTime Pointer lpFormat Pointer lpTimeSt Integer icchTime Returns Integer

External_function GetLastErrorEf "GetLastError" Kernel32.Dll Returns Integer

External_function LockFileEf "LockFile" Kernel32.dll Handle hFile DWORD dwFileOffsetLow DWORD dwFileOffsetHigh DWORD nNumberOfBytesToLockLow DWORD nNumberOfBytesToLockHigh Returns Integer
External_function UnLockFileEf "UnLockFile" Kernel32.dll Handle hFile DWORD dwFileOffsetLow DWORD dwFileOffsetHigh DWORD nNumberOfBytesToUnLockLow DWORD nNumberOfBytesToUnLockHigh Returns Integer


