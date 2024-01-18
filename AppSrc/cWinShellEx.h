// cWinShellEx.h
// By Sergey V. Natarov (senatc@postman.ru)
// Windows Shell interface
//

// *************************************************
// CONSTANTS 
// *************************************************

define CSIDL_DESKTOP                   For |CI$0000        // <desktop>
define CSIDL_INTERNET                  For |CI$0001        // Internet Explorer (icon on desktop)
define CSIDL_PROGRAMS                  For |CI$0002        // Start Menu\Programs
define CSIDL_CONTROLS                  For |CI$0003        // My Computer\Control Panel
define CSIDL_PRINTERS                  For |CI$0004        // My Computer\Printers
define CSIDL_PERSONAL                  For |CI$0005        // My Documents
define CSIDL_FAVORITES                 For |CI$0006        // <user name>\Favorites
define CSIDL_STARTUP                   For |CI$0007        // Start Menu\Programs\Startup
define CSIDL_RECENT                    For |CI$0008        // <user name>\Recent
define CSIDL_SENDTO                    For |CI$0009        // <user name>\SendTo
define CSIDL_BITBUCKET                 For |CI$000A        // <desktop>\Recycle Bin
define CSIDL_STARTMENU                 For |CI$000B        // <user name>\Start Menu
define CSIDL_MYDOCUMENTS               For |CI$000C        // logical "My Documents" desktop icon
define CSIDL_MYMUSIC                   For |CI$000D        // "My Music" folder
define CSIDL_MYVIDEO                   For |CI$000E        // "My Videos" folder
define CSIDL_DESKTOPDIRECTORY          For |CI$0010        // <user name>\Desktop
define CSIDL_DRIVES                    For |CI$0011        // My Computer
define CSIDL_NETWORK                   For |CI$0012        // Network Neighborhood (My Network Places)
define CSIDL_NETHOOD                   For |CI$0013        // <user name>\nethood
define CSIDL_FONTS                     For |CI$0014        // windows\fonts
define CSIDL_TEMPLATES                 For |CI$0015
define CSIDL_COMMON_STARTMENU          For |CI$0016        // All Users\Start Menu
define CSIDL_COMMON_PROGRAMS           For |CI$0017        // All Users\Start Menu\Programs
define CSIDL_COMMON_STARTUP            For |CI$0018        // All Users\Startup
define CSIDL_COMMON_DESKTOPDIRECTORY   For |CI$0019        // All Users\Desktop
define CSIDL_APPDATA                   For |CI$001A        // <user name>\Application Data
define CSIDL_PRINTHOOD                 For |CI$001B        // <user name>\PrintHood

define CSIDL_LOCAL_APPDATA             For |CI$001C        // <user name>\Local Settings\Applicaiton Data (non roaming)

define CSIDL_ALTSTARTUP                For |CI$001D        // non localized startup
define CSIDL_COMMON_ALTSTARTUP         For |CI$001E        // non localized common startup
define CSIDL_COMMON_FAVORITES          For |CI$001F

define CSIDL_INTERNET_CACHE            For |CI$0020
define CSIDL_COOKIES                   For |CI$0021
define CSIDL_HISTORY                   For |CI$0022
define CSIDL_COMMON_APPDATA            For |CI$0023        // All Users\Application Data
define CSIDL_WINDOWS                   For |CI$0024        // GetWindowsDirectory()
define CSIDL_SYSTEM                    For |CI$0025        // GetSystemDirectory()
define CSIDL_PROGRAM_FILES             For |CI$0026        // C:\Program Files
define CSIDL_MYPICTURES                For |CI$0027        // C:\Program Files\My Pictures

define CSIDL_PROFILE                   For |CI$0028        // USERPROFILE
define CSIDL_SYSTEMX86                 For |CI$0029        // x86 system directory on RISC
define CSIDL_PROGRAM_FILESX86          For |CI$002A        // x86 C:\Program Files on RISC

define CSIDL_PROGRAM_FILES_COMMON      For |CI$002B        // C:\Program Files\Common

define CSIDL_PROGRAM_FILES_COMMONX86   For |CI$002C        // x86 Program Files\Common on RISC
define CSIDL_COMMON_TEMPLATES          For |CI$002D        // All Users\Templates

define CSIDL_COMMON_DOCUMENTS          For |CI$002E        // All Users\Documents
define CSIDL_COMMON_ADMINTOOLS         For |CI$002F        // All Users\Start Menu\Programs\Administrative Tools
define CSIDL_ADMINTOOLS                For |CI$0030        // <user name>\Start Menu\Programs\Administrative Tools

define CSIDL_CONNECTIONS               For |CI$0031        // Network and Dial-up Connections
define CSIDL_COMMON_MUSIC              For |CI$0035        // All Users\My Music
define CSIDL_COMMON_PICTURES           For |CI$0036        // All Users\My Pictures
define CSIDL_COMMON_VIDEO              For |CI$0037        // All Users\My Video
define CSIDL_RESOURCES                 For |CI$0038        // Resource Direcotry

define CSIDL_RESOURCES_LOCALIZED       For |CI$0039        // Localized Resource Direcotry

define CSIDL_COMMON_OEM_LINKS          For |CI$003A        // Links to All Users OEM specific apps
define CSIDL_CDBURN_AREA               For |CI$003B        // USERPROFILE\Local Settings\Application Data\Microsoft\CD Burning
define CSIDL_COMPUTERSNEARME           For |CI$003D        // Computers Near Me (computered from Workgroup membership)

define CSIDL_FLAG_CREATE               For |CI$8000        // combine with CSIDL_ value to force folder creation in SHGetFolderPath()

define CSIDL_FLAG_DONT_VERIFY          For |CI$4000        // combine with CSIDL_ value to return an unverified folder path
define CSIDL_FLAG_NO_ALIAS             For |CI$1000        // combine with CSIDL_ value to insure non-alias versions of the pidl
define CSIDL_FLAG_PER_USER_INIT        For |CI$0800        // combine with CSIDL_ value to indicate per-user init (eg. upgrade)
define CSIDL_FLAG_MASK                 For |CI$FF00        // mask for all possible flag values


define SHGFI_ICON              For 256    // get icon
define SHGFI_DISPLAYNAME       For 512    // get display name
define SHGFI_TYPENAME          For 1024   // get type name
define SHGFI_ATTRIBUTES        For 2048   // get attributes
define SHGFI_ICONLOCATION      For 4096   // get icon location
define SHGFI_EXETYPE           For 8192   // return exe type
define SHGFI_SYSICONINDEX      For 16384  // get system icon index
define SHGFI_LINKOVERLAY       For 32768  // put a link overlay on icon
define SHGFI_SELECTED          For 65536  // show icon in selected state
define SHGFI_ATTR_SPECIFIED    For 131072 // get only specified attributes
define SHGFI_LARGEICON         For 0      // get large icon
define SHGFI_SMALLICON         For 1      // get small icon
define SHGFI_OPENICON          For 2      // get open icon
define SHGFI_SHELLICONSIZE     For 4      // get shell size icon
define SHGFI_PIDL              For 8      // pszPath is a pidl
define SHGFI_USEFILEATTRIBUTES For 16     // use passed dwFileAttribute


#IFDEF FO_MOVE
#ELSE
define FO_MOVE           for |CI$0001
define FO_COPY           for |CI$0002
define FO_DELETE         for |CI$0003
define FO_RENAME         for |CI$0004

define FOF_MULTIDESTFILES     for |CI$0001
define FOF_CONFIRMMOUSE       for |CI$0002
define FOF_SILENT             for |CI$0004  // don't create progress/report
define FOF_RENAMEONCOLLISION  for |CI$0008
define FOF_NOCONFIRMATION     for |CI$0010  // Don't prompt the user.
define FOF_WANTMAPPINGHANDLE  for |CI$0020  // Fill in SHFILEOPSTRUCT.hNameMappings
                                          // Must be freed using SHFreeNameMappings
define FOF_ALLOWUNDO          for |CI$0040
define FOF_FILESONLY          for |CI$0080  // on *.*, do only files
define FOF_SIMPLEPROGRESS     for |CI$0100  // means don't show names of files
define FOF_NOCONFIRMMKDIR     for |CI$0200  // don't confirm making any needed dirs
define ERROR_BAD_ASSOCIATION for 31

Type SHFILEOPSTRUCT
        Field fo_hWnd                   as Handle
        Field fo_wFunc                  as Integer
        Field fo_pFrom                  as Pointer
        Field fo_pTo                    as Pointer
        Field fo_fFlags                 as Short
        Field fo_fAnyOperationsAborted  as Short
        Field fo_hNameMappings          as Pointer
        Field fo_lpszProgressTitle      as Pointer // only used if FOF_SIMPLEPROGRESS
End_Type
#ENDIF

Type tBrowseInfo
    Field tBrowseInfo.hWndOwner as handle
    Field tBrowseInfo.pIDLRoot as Pointer
    Field tBrowseInfo.pszDisplayName as Pointer
    Field tBrowseInfo.lpszTitle as Pointer
    Field tBrowseInfo.ulFlags as dWord
    Field tBrowseInfo.lpfnCallback as Pointer
    Field tBrowseInfo.lParam as dWord
    Field tBrowseInfo.iImage as dWord
End_Type  // tBrowseInfo

Type SHFILEINFO
    Field SHFILEINFO.hIcon as Handle
    Field SHFILEINFO.iIcon as Integer
    Field SHFILEINFO.dwAttributes as DWORD
    Field SHFILEINFO.szDisplayName as Char MAX_PATH
    FIeld SHFILEINFO.szTypeName as Char 80
End_Type


// *************************************************
// FUNCTIONS
// *************************************************

External_Function32 ShellExecuteEf "ShellExecuteA" SHELL32.DLL Handle hwnd String lpszOp String lpszFile String lpszParams String lpszDir Integer FsShowCmd Returns Integer
External_Function SHFileOperationEf "SHFileOperationA" Shell32.dll pointer lpFileOp returns integer
External_Function SHBrowseForFolderEf "SHBrowseForFolder" shell32.dll pointer lpBI returns dWord
External_Function SHGetPathFromIDListEf "SHGetPathFromIDList" shell32.dll pointer pidList pointer lpBuffer returns dWord
External_Function ExtractIconEf "ExtractIconA" shell32.dll Handle hi String sExecutable Integer nIndex Returns Handle
External_Function SHGetFileInfoEf "SHGetFileInfoA" shell32.dll String sPath DWORD dwFileAttrib Pointer pSHFILEINFO Integer cbFileInfo Integer uFlags Returns Integer
External_function IsNetDriveEf "IsNetDrive" shell32.dll Integer iDrive returns integer
External_Function SHGetSpecialFolderPathEf "SHGetSpecialFolderPathA" shell32.dll Handle hwndOwner Pointer lpszPath Integer nFolder Boolean bCreate returns integer


