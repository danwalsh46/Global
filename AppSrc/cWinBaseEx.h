// cWinBase.pkg
// Compiled by Sergey V. Natarov (senatc@postman.ru)
//

// File system

#IFNDEF MAX_PATH
#REPLACE MAX_PATH 260 // This is what MAX_PATH is defined as in STDLIB.H
#ENDIF

Define GENERIC_READ             for |CI$80000000
Define GENERIC_WRITE            for |CI$40000000
Define GENERIC_RANDOM           for (GENERIC_READ + GENERIC_WRITE)
Define CREATE_NEW               for |CI$00000001
Define CREATE_ALWAYS            for |CI$00000002
Define OPEN_EXISTING            for |CI$00000003
Define OPEN_ALWAYS              for |CI$00000004
Define TRUNCATE_EXISTING        for |CI$00000005

define FILE_SHARE_READ                     For |CI$00000001  
define FILE_SHARE_WRITE                    For |CI$00000002  
define FILE_SHARE_DELETE                   For |CI$00000004  
define FILE_ATTRIBUTE_READONLY             For |CI$00000001  
define FILE_ATTRIBUTE_HIDDEN               For |CI$00000002  
define FILE_ATTRIBUTE_SYSTEM               For |CI$00000004  
define FILE_ATTRIBUTE_DIRECTORY            For |CI$00000010  
define FILE_ATTRIBUTE_ARCHIVE              For |CI$00000020  
define FILE_ATTRIBUTE_DEVICE               For |CI$00000040  
define FILE_ATTRIBUTE_NORMAL               For |CI$00000080  
define FILE_ATTRIBUTE_TEMPORARY            For |CI$00000100  
define FILE_ATTRIBUTE_SPARSE_FILE          For |CI$00000200  
define FILE_ATTRIBUTE_REPARSE_POINT        For |CI$00000400  
define FILE_ATTRIBUTE_COMPRESSED           For |CI$00000800  
define FILE_ATTRIBUTE_OFFLINE              For |CI$00001000  
define FILE_ATTRIBUTE_NOT_CONTENT_INDEXED  For |CI$00002000  
define FILE_ATTRIBUTE_ENCRYPTED            For |CI$00004000  
define FILE_NOTIFY_CHANGE_FILE_NAME        For |CI$00000001   
define FILE_NOTIFY_CHANGE_DIR_NAME         For |CI$00000002   
define FILE_NOTIFY_CHANGE_ATTRIBUTES       For |CI$00000004   
define FILE_NOTIFY_CHANGE_SIZE             For |CI$00000008   
define FILE_NOTIFY_CHANGE_LAST_WRITE       For |CI$00000010   
define FILE_NOTIFY_CHANGE_LAST_ACCESS      For |CI$00000020   
define FILE_NOTIFY_CHANGE_CREATION         For |CI$00000040   
define FILE_NOTIFY_CHANGE_SECURITY         For |CI$00000100   
define FILE_ACTION_ADDED                   For |CI$00000001   
define FILE_ACTION_REMOVED                 For |CI$00000002   
define FILE_ACTION_MODIFIED                For |CI$00000003   
define FILE_ACTION_RENAMED_OLD_NAME        For |CI$00000004   
define FILE_ACTION_RENAMED_NEW_NAME        For |CI$00000005   
define FILE_CASE_SENSITIVE_SEARCH          For |CI$00000001  
define FILE_CASE_PRESERVED_NAMES           For |CI$00000002  
define FILE_UNICODE_ON_DISK                For |CI$00000004  
define FILE_PERSISTENT_ACLS                For |CI$00000008  
define FILE_FILE_COMPRESSION               For |CI$00000010  
define FILE_VOLUME_QUOTAS                  For |CI$00000020  
define FILE_SUPPORTS_SPARSE_FILES          For |CI$00000040  
define FILE_SUPPORTS_REPARSE_POINTS        For |CI$00000080  
define FILE_SUPPORTS_REMOTE_STORAGE        For |CI$00000100  
define FILE_VOLUME_IS_COMPRESSED           For |CI$00008000  
define FILE_SUPPORTS_OBJECT_IDS            For |CI$00010000  
define FILE_SUPPORTS_ENCRYPTION            For |CI$00020000  
define FILE_NAMED_STREAMS                  For |CI$00040000  
define FILE_READ_ONLY_VOLUME               For |CI$00080000  
                                           
Define FNULL                    for |CI$0

Define FORMAT_MESSAGE_ALLOCATE_BUFFER     for |CI$0100
Define FORMAT_MESSAGE_IGNORE_INSERTS      for |CI$0200
Define FORMAT_MESSAGE_FROM_STRING         for |CI$0400
Define FORMAT_MESSAGE_FROM_HMODULE        for |CI$0800
Define FORMAT_MESSAGE_FROM_SYSTEM         for |CI$1000
Define FORMAT_MESSAGE_ARGUMENT_ARRAY      for |CI$2000
Define FORMAT_MESSAGE_MAX_WIDTH_MASK      for |CI$00FF

//SetFilePosition
Define FILE_BEGIN     for 0
Define FILE_CURRENT   for 1
Define FILE_END       for 2

// FindFile
Define INVALID_HANDLE_VALUE         For |CI-1
Define INVALID_FILE_SIZE            For |CI$FFFFFFFF


//
// dwCreationFlag values
//                                 
                                       
define DEBUG_PROCESS                   for |CI$00000001
define DEBUG_ONLY_THIS_PROCESS         for |CI$00000002
                                       
define CREATE_SUSPENDED                for |CI$00000004
                                       
define DETACHED_PROCESS                for |CI$00000008
                                       
define CREATE_NEW_CONSOLE              for |CI$00000010

define NORMAL_PRIORITY_CLASS           for |CI$00000020
define IDLE_PRIORITY_CLASS             for |CI$00000040
define HIGH_PRIORITY_CLASS             for |CI$00000080
define REALTIME_PRIORITY_CLASS         for |CI$00000100
                                       
define CREATE_NEW_PROCESS_GROUP        for |CI$00000200
define CREATE_UNICODE_ENVIRONMENT      for |CI$00000400
                                       
define CREATE_SEPARATE_WOW_VDM         for |CI$00000800
define CREATE_SHARED_WOW_VDM           for |CI$00001000
define CREATE_FORCEDOS                 for |CI$00002000
                                       
define CREATE_DEFAULT_ERROR_MODE       for |CI$04000000
define CREATE_NO_WINDOW                for |CI$08000000
                                       
define PROFILE_USER                    for |CI$10000000
define PROFILE_KERNEL                  for |CI$20000000
define PROFILE_SERVER                  for |CI$40000000


define FILE_ATTRIBUTE_READONLY         for |CI$00000001  
define FILE_ATTRIBUTE_HIDDEN           for |CI$00000002  
define FILE_ATTRIBUTE_SYSTEM           for |CI$00000004  
define FILE_ATTRIBUTE_DIRECTORY        for |CI$00000010  
define FILE_ATTRIBUTE_ARCHIVE          for |CI$00000020  
define FILE_ATTRIBUTE_ENCRYPTED        for |CI$00000040  
define FILE_ATTRIBUTE_NORMAL           for |CI$00000080  
define FILE_ATTRIBUTE_TEMPORARY        for |CI$00000100  
define FILE_ATTRIBUTE_COMPRESSED       for |CI$00000800
                                     
define FILE_CASE_SENSITIVE_SEARCH      For |CI$00000001  
define FILE_CASE_PRESERVED_NAMES       For |CI$00000002  
define FILE_UNICODE_ON_DISK            For |CI$00000004  
define FILE_PERSISTENT_ACLS            For |CI$00000008  
define FILE_FILE_COMPRESSION           For |CI$00000010  
define FILE_VOLUME_QUOTAS              For |CI$00000020  
define FILE_SUPPORTS_SPARSE_FILES      For |CI$00000040  
define FILE_SUPPORTS_REPARSE_POINTS    For |CI$00000080  
define FILE_SUPPORTS_REMOTE_STORAGE    For |CI$00000100  
define FILE_VOLUME_IS_COMPRESSED       For |CI$00008000  
define FILE_SUPPORTS_OBJECT_IDS        For |CI$00010000  
define FILE_SUPPORTS_ENCRYPTION        For |CI$00020000  
define FILE_NAMED_STREAMS              For |CI$00040000  
define FILE_READ_ONLY_VOLUME           For |CI$00080000  

define FS_CASE_IS_PRESERVED            For FILE_CASE_PRESERVED_NAMES
define FS_CASE_SENSITIVE               For FILE_CASE_SENSITIVE_SEARCH
define FS_UNICODE_STORED_ON_DISK       For FILE_UNICODE_ON_DISK
define FS_PERSISTENT_ACLS              For FILE_PERSISTENT_ACLS
define FS_VOL_IS_COMPRESSED            For FILE_VOLUME_IS_COMPRESSED
define FS_FILE_COMPRESSION             For FILE_FILE_COMPRESSION
define FS_FILE_ENCRYPTION              For FILE_SUPPORTS_ENCRYPTION


type tSYSTEMTIME
    Field tSYSTEMTIME.wYear as Word
    Field tSYSTEMTIME.wMonth as Word
    Field tSYSTEMTIME.wDayOfWeek as Word
    Field tSYSTEMTIME.wDay as Word
    Field tSYSTEMTIME.wHour as Word
    Field tSYSTEMTIME.wMinute as Word
    Field tSYSTEMTIME.wSecond as Word
    Field tSYSTEMTIME.wMilliseconds as Word
End_Type

Type WIN32_FIND_DATA
    Field WIN32_FIND_DATA.dwFileAttributes as DWORD
    Field WIN32_FIND_DATA.dwCRLowDateTime as DWORD
    Field WIN32_FIND_DATA.dwCRHighDateTime as DWORD
    Field WIN32_FIND_DATA.dwLALowDateTime as DWORD
    Field WIN32_FIND_DATA.dwLAHighDateTime as DWORD
    Field WIN32_FIND_DATA.dwLWLowDateTime as DWORD
    Field WIN32_FIND_DATA.dwLWHighDateTime as DWORD
    Field WIN32_FIND_DATA.dwFileSizeHigh as DWORD
    Field WIN32_FIND_DATA.dwFileSizeLow as DWORD
    Field WIN32_FIND_DATA.dwReserved0 as DWORD
    Field WIN32_FIND_DATA.dwReserved1 as DWORD
    Field WIN32_FIND_DATA.cFileName as Char MAX_PATH
    Field WIN32_FIND_DATA.cAltFileName as Char 14
End_Type  // WIN32_FIND_DATA

Type FILETIME
    Field FILETIME.dwLowDateTime as DWORD
    Field FILETIME.dwHighDateTime as DWORD
End_Type  // FILETIME

Type PULARGE_INTEGER
    Field PULARGE_INTEGER.LLowPart      as DWORD
    Field PULARGE_INTEGER.LHighPart     as DWORD
    Field PULARGE_INTEGER.HLowPart      as DWORD
    Field PULARGE_INTEGER.HHighPart     as DWORD
End_Type  // PULARGE INTEGER

type STARTUPINFO
    field STARTUPINFO.cb                    as DWORD
    field STARTUPINFO.lpReserved            as Pointer
    field STARTUPINFO.lpDesktop             as Pointer
    field STARTUPINFO.lpTitle               as Pointer
    field STARTUPINFO.dwX                   as DWORD
    field STARTUPINFO.dwY                   as DWORD
    field STARTUPINFO.dwXSize               as DWORD
    field STARTUPINFO.dwYSize               as DWORD
    field STARTUPINFO.dwXCountchars         as DWORD
    field STARTUPINFO.dwYCountchars         as DWORD
    field STARTUPINFO.dwFillAttribute       as DWORD
    field STARTUPINFO.dwFlags               as DWORD
    field STARTUPINFO.wShowWindow           as WORD
    field STARTUPINFO.cbReserved2           as WORD
    field STARTUPINFO.lpReserved2           as pointer
    field STARTUPINFO.hStdInput             as Handle
    field STARTUPINFO.hStdOutput            as Handle
    field STARTUPINFO.hStdError             as Handle
end_type

type SECURITY_ATTRIBUTES
    field SECURITY_ATTRIBUTES.nLength               as DWORD
    field SECURITY_ATTRIBUTES.lpSecurityDescriptor  as integer
    field SECURITY_ATTRIBUTES.bInherithandle        as integer
end_type

type PROCESS_INFORMATION
    field PROCESS_INFORMATION.hProcess      as Handle
    field PROCESS_INFORMATION.hThread       as Handle
    field PROCESS_INFORMATION.dwProcessId   as UInteger
    field PROCESS_INFORMATION.dwThreadId    as UInteger
end_type

Type tdwVarEx
    Field tdwVarEx.dwVar as Integer
End_Type

External_Function GetProfilesDirectoryEf "GetProfilesDirectoryA" Userenv.Dll Pointer lpProfilesDir Pointer lpcchSize Returns Integer
External_Function GetAllUsersProfileDirectoryEf "GetAllUsersProfileDirectoryA" Userenv.Dll Pointer lpProfilesDir Pointer lpcchSize Returns Integer
External_Function GetDefaultUserProfileDirectoryEf "GetDefaultUserProfileDirectoryA" Userenv.Dll Pointer lpProfilesDir Pointer lpcchSize Returns Integer
External_Function GetUserNameEf "GetUserNameA" AdvApi32.DLL Pointer lpBuffer Pointer lpnSize Returns Integer


 
