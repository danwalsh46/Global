// cWinSpoolEx.h
//

define PRINTER_ENUM_DEFAULT     For |CI$00000001
define PRINTER_ENUM_LOCAL       For |CI$00000002
define PRINTER_ENUM_CONNECTIONS For |CI$00000004
define PRINTER_ENUM_FAVORITE    For |CI$00000004
define PRINTER_ENUM_NAME        For |CI$00000008
define PRINTER_ENUM_REMOTE      For |CI$00000010
define PRINTER_ENUM_SHARED      For |CI$00000020
define PRINTER_ENUM_NETWORK     For |CI$00000040


define PRINTER_ATTRIBUTE_QUEUED         For |CI$00000001
define PRINTER_ATTRIBUTE_DIRECT         For |CI$00000002
define PRINTER_ATTRIBUTE_DEFAULT        For |CI$00000004
define PRINTER_ATTRIBUTE_SHARED         For |CI$00000008
define PRINTER_ATTRIBUTE_NETWORK        For |CI$00000010
define PRINTER_ATTRIBUTE_HIDDEN         For |CI$00000020
define PRINTER_ATTRIBUTE_LOCAL          For |CI$00000040

define PRINTER_ATTRIBUTE_ENABLE_DEVQ       For |CI$00000080
define PRINTER_ATTRIBUTE_KEEPPRINTEDJOBS   For |CI$00000100
define PRINTER_ATTRIBUTE_DO_COMPLETE_FIRST For |CI$00000200

define PRINTER_ATTRIBUTE_WORK_OFFLINE   For |CI$00000400
define PRINTER_ATTRIBUTE_ENABLE_BIDI    For |CI$00000800
define PRINTER_ATTRIBUTE_RAW_ONLY       For |CI$00001000
define PRINTER_ATTRIBUTE_PUBLISHED      For |CI$00002000
define PRINTER_ATTRIBUTE_FAX            For |CI$00004000

Type PRINTER_INFO_2
   Field Printer_Info_2.pServerName         As Pointer
   Field Printer_Info_2.pPrinterName        As Pointer
   Field Printer_Info_2.pShareName          As Pointer
   Field Printer_Info_2.pPortName           As Pointer
   Field Printer_Info_2.pDriverName         As Pointer
   Field Printer_Info_2.pComment            As Pointer
   Field Printer_Info_2.pLocation           As Pointer
   Field Printer_Info_2.pDevMode            As Pointer
   Field Printer_Info_2.pSepFile            As Pointer
   Field Printer_Info_2.pPrintProcessor     As Pointer
   Field Printer_Info_2.pDatatype           As Pointer
   Field Printer_Info_2.pParameters         As Pointer
   Field Printer_Info_2.pSecurityDescriptor As Pointer
   Field Printer_Info_2.Attributes          As Dword
   Field Printer_Info_2.Priority            As Dword
   Field Printer_Info_2.DefaultPriority     As Dword
   Field Printer_Info_2.StartTime           As Dword
   Field Printer_Info_2.UntilTime           As Dword
   Field Printer_Info_2.Status              As Dword
   Field Printer_Info_2.cJobs               As Dword
   Field Printer_Info_2.AveragePPM          As Dword
End_Type

Type PRINTER_INFO_5 
    Field PRINTER_INFO_5.pPrinterName             as Integer
    Field PRINTER_INFO_5.pPortName                as Integer
    Field PRINTER_INFO_5.Attributes               as Integer
    Field PRINTER_INFO_5.DeviceNotSelectedTimeout as Integer
    Field PRINTER_INFO_5.TransmissionRetryTimeout as Integer 
End_Type

External_Function OpenPrinterEf       "OpenPrinterA"       WINSPOOL.DRV Pointer pPrinterName Pointer phPrinter Pointer pDefault Returns Integer
External_Function ClosePrinterEf      "ClosePrinter"       WINSPOOL.DRV Handle hPrinter Returns Integer
External_Function GetPrinterDriverEf  "GetPrinterDriverA"  WINSPOOL.DRV Handle hPrinter Pointer pEnvironment dWord dLevel Pointer pDriverInfo dWord cbBuf Pointer pcbNeeded Returns Integer
External_Function EnumPrintersEf      "EnumPrintersA"      WINSPOOL.DRV Integer dwFlags Pointer sName Integer iLevel Pointer pPrinterEnum Integer cbBuf Pointer pcbNeeded Pointer pcReturned returns integer
External_Function GetDefaultPrinterEf "GetDefaultPrinterA" WINSPOOL.DRV  Pointer pszBuffer Pointer pcchBuffer  Returns integer

