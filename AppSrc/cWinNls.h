// cWinNls.h

Define LOCALE_ILANGUAGE              For |CI$00000001   // language id
Define LOCALE_SLANGUAGE              For |CI$00000002   // localized name of language
Define LOCALE_SENGLANGUAGE           For |CI$00001001   // English name of language
Define LOCALE_SABBREVLANGNAME        For |CI$00000003   // abbreviated language name
Define LOCALE_SNATIVELANGNAME        For |CI$00000004   // native name of language

Define LOCALE_ICOUNTRY               For |CI$00000005   // country code
Define LOCALE_SCOUNTRY               For |CI$00000006   // localized name of country
Define LOCALE_SENGCOUNTRY            For |CI$00001002   // English name of country
Define LOCALE_SABBREVCTRYNAME        For |CI$00000007   // abbreviated country name
Define LOCALE_SNATIVECTRYNAME        For |CI$00000008   // native name of country

Define LOCALE_IDEFAULTLANGUAGE       For |CI$00000009   // default language id
Define LOCALE_IDEFAULTCOUNTRY        For |CI$0000000A   // default country code
Define LOCALE_IDEFAULTCODEPAGE       For |CI$0000000B   // default oem code page
Define LOCALE_IDEFAULTANSICODEPAGE   For |CI$00001004   // default ansi code page
Define LOCALE_IDEFAULTMACCODEPAGE    For |CI$00001011   // default mac code page

Define LOCALE_SLIST                  For |CI$0000000C   // list item separator
Define LOCALE_IMEASURE               For |CI$0000000D   // 0 = metric, 1 = US

Define LOCALE_SDECIMAL               For |CI$0000000E   // decimal separator
Define LOCALE_STHOUSAND              For |CI$0000000F   // thousand separator
Define LOCALE_SGROUPING              For |CI$00000010   // digit grouping
Define LOCALE_IDIGITS                For |CI$00000011   // number of fractional digits
Define LOCALE_ILZERO                 For |CI$00000012   // leading zeros for decimal
Define LOCALE_INEGNUMBER             For |CI$00001010   // negative number mode
Define LOCALE_SNATIVEDIGITS          For |CI$00000013   // native ascii 0-9

Define LOCALE_SCURRENCY              For |CI$00000014   // local monetary symbol
Define LOCALE_SINTLSYMBOL            For |CI$00000015   // intl monetary symbol
Define LOCALE_SMONDECIMALSEP         For |CI$00000016   // monetary decimal separator
Define LOCALE_SMONTHOUSANDSEP        For |CI$00000017   // monetary thousand separator
Define LOCALE_SMONGROUPING           For |CI$00000018   // monetary grouping
Define LOCALE_ICURRDIGITS            For |CI$00000019   // # local monetary digits
Define LOCALE_IINTLCURRDIGITS        For |CI$0000001A   // # intl monetary digits
Define LOCALE_ICURRENCY              For |CI$0000001B   // positive currency mode
Define LOCALE_INEGCURR               For |CI$0000001C   // negative currency mode

Define LOCALE_SDATE                  For |CI$0000001D   // date separator
Define LOCALE_STIME                  For |CI$0000001E   // time separator
Define LOCALE_SSHORTDATE             For |CI$0000001F   // short date format string
Define LOCALE_SLONGDATE              For |CI$00000020   // long date format string
Define LOCALE_STIMEFORMAT            For |CI$00001003   // time format string
Define LOCALE_IDATE                  For |CI$00000021   // short date format ordering
Define LOCALE_ILDATE                 For |CI$00000022   // long date format ordering
Define LOCALE_ITIME                  For |CI$00000023   // time format specifier
Define LOCALE_ITIMEMARKPOSN          For |CI$00001005   // time marker position
Define LOCALE_ICENTURY               For |CI$00000024   // century format specifier (short date)
Define LOCALE_ITLZERO                For |CI$00000025   // leading zeros in time field
Define LOCALE_IDAYLZERO              For |CI$00000026   // leading zeros in day field (short date)
Define LOCALE_IMONLZERO              For |CI$00000027   // leading zeros in month field (short date)
Define LOCALE_S1159                  For |CI$00000028   // AM designator
Define LOCALE_S2359                  For |CI$00000029   // PM designator

Define LOCALE_ICALENDARTYPE          For |CI$00001009   // type of calendar specifier
Define LOCALE_IOPTIONALCALENDAR      For |CI$0000100B   // additional calendar types specifier
Define LOCALE_IFIRSTDAYOFWEEK        For |CI$0000100C   // first day of week specifier
Define LOCALE_IFIRSTWEEKOFYEAR       For |CI$0000100D   // first week of year specifier

Define LOCALE_SDAYNAME1              For |CI$0000002A   // long name for Monday
Define LOCALE_SDAYNAME2              For |CI$0000002B   // long name for Tuesday
Define LOCALE_SDAYNAME3              For |CI$0000002C   // long name for Wednesday
Define LOCALE_SDAYNAME4              For |CI$0000002D   // long name for Thursday
Define LOCALE_SDAYNAME5              For |CI$0000002E   // long name for Friday
Define LOCALE_SDAYNAME6              For |CI$0000002F   // long name for Saturday
Define LOCALE_SDAYNAME7              For |CI$00000030   // long name for Sunday
Define LOCALE_SABBREVDAYNAME1        For |CI$00000031   // abbreviated name for Monday
Define LOCALE_SABBREVDAYNAME2        For |CI$00000032   // abbreviated name for Tuesday
Define LOCALE_SABBREVDAYNAME3        For |CI$00000033   // abbreviated name for Wednesday
Define LOCALE_SABBREVDAYNAME4        For |CI$00000034   // abbreviated name for Thursday
Define LOCALE_SABBREVDAYNAME5        For |CI$00000035   // abbreviated name for Friday
Define LOCALE_SABBREVDAYNAME6        For |CI$00000036   // abbreviated name for Saturday
Define LOCALE_SABBREVDAYNAME7        For |CI$00000037   // abbreviated name for Sunday
Define LOCALE_SMONTHNAME1            For |CI$00000038   // long name for January
Define LOCALE_SMONTHNAME2            For |CI$00000039   // long name for February
Define LOCALE_SMONTHNAME3            For |CI$0000003A   // long name for March
Define LOCALE_SMONTHNAME4            For |CI$0000003B   // long name for April
Define LOCALE_SMONTHNAME5            For |CI$0000003C   // long name for May
Define LOCALE_SMONTHNAME6            For |CI$0000003D   // long name for June
Define LOCALE_SMONTHNAME7            For |CI$0000003E   // long name for July
Define LOCALE_SMONTHNAME8            For |CI$0000003F   // long name for August
Define LOCALE_SMONTHNAME9            For |CI$00000040   // long name for September
Define LOCALE_SMONTHNAME10           For |CI$00000041   // long name for October
Define LOCALE_SMONTHNAME11           For |CI$00000042   // long name for November
Define LOCALE_SMONTHNAME12           For |CI$00000043   // long name for December
Define LOCALE_SMONTHNAME13           For |CI$0000100E   // long name for 13th month (if exists)
Define LOCALE_SABBREVMONTHNAME1      For |CI$00000044   // abbreviated name for January
Define LOCALE_SABBREVMONTHNAME2      For |CI$00000045   // abbreviated name for February
Define LOCALE_SABBREVMONTHNAME3      For |CI$00000046   // abbreviated name for March
Define LOCALE_SABBREVMONTHNAME4      For |CI$00000047   // abbreviated name for April
Define LOCALE_SABBREVMONTHNAME5      For |CI$00000048   // abbreviated name for May
Define LOCALE_SABBREVMONTHNAME6      For |CI$00000049   // abbreviated name for June
Define LOCALE_SABBREVMONTHNAME7      For |CI$0000004A   // abbreviated name for July
Define LOCALE_SABBREVMONTHNAME8      For |CI$0000004B   // abbreviated name for August
Define LOCALE_SABBREVMONTHNAME9      For |CI$0000004C   // abbreviated name for September
Define LOCALE_SABBREVMONTHNAME10     For |CI$0000004D   // abbreviated name for October
Define LOCALE_SABBREVMONTHNAME11     For |CI$0000004E   // abbreviated name for November
Define LOCALE_SABBREVMONTHNAME12     For |CI$0000004F   // abbreviated name for December
Define LOCALE_SABBREVMONTHNAME13     For |CI$0000100F   // abbreviated name for 13th month (if exists)

Define LOCALE_SPOSITIVESIGN          For |CI$00000050   // positive sign
Define LOCALE_SNEGATIVESIGN          For |CI$00000051   // negative sign
Define LOCALE_IPOSSIGNPOSN           For |CI$00000052   // positive sign position
Define LOCALE_INEGSIGNPOSN           For |CI$00000053   // negative sign position
Define LOCALE_IPOSSYMPRECEDES        For |CI$00000054   // mon sym precedes pos amt
Define LOCALE_IPOSSEPBYSPACE         For |CI$00000055   // mon sym sep by space from pos amt
Define LOCALE_INEGSYMPRECEDES        For |CI$00000056   // mon sym precedes neg amt
Define LOCALE_INEGSEPBYSPACE         For |CI$00000057   // mon sym sep by space from neg amt

// Only available if(WINVER >= 0x0400)
Define LOCALE_FONTSIGNATURE          For |CI$00000058   // font signature
Define LOCALE_SISO639LANGNAME        For |CI$00000059   // ISO abbreviated language name
Define LOCALE_SISO3166CTRYNAME       For |CI$0000005A   // ISO abbreviated country name

// Only available if(WINVER >= 0x0500)
Define LOCALE_IDEFAULTEBCDICCODEPAGE For |CI$00001012   // default ebcdic code page
Define LOCALE_IPAPERSIZE             For |CI$0000100A   // 0 = letter, 1 = a4, 2 = legal, 3 = a3
Define LOCALE_SENGCURRNAME           For |CI$00001007   // english name of currency
Define LOCALE_SNATIVECURRNAME        For |CI$00001008   // native name of currency
Define LOCALE_SYEARMONTH             For |CI$00001006   // year month format string
Define LOCALE_SSORTNAME              For |CI$00001013   // sort name
Define LOCALE_IDIGITSUBSTITUTION     For |CI$00001014   // 0 = none, 1 = context, 2 = native digit

Define CAL_GREGORIAN              For 1  // Gregorian (localized) calendar
Define CAL_GREGORIAN_US           For 2  // Gregorian (U.S.) calendar
Define CAL_JAPAN                  For 3  // Japanese Emperor Era calendar
Define CAL_TAIWAN                 For 4  // Taiwan Region Era calendar
Define CAL_KOREA                  For 5  // Korean Tangun Era calendar
Define CAL_HIJRI                  For 6  // Hijri (Arabic Lunar) calendar
Define CAL_THAI                   For 7  // Thai calendar
Define CAL_HEBREW                 For 8  // Hebrew (Lunar) calendar
Define CAL_GREGORIAN_ME_FRENCH    For 9  // Gregorian Middle East French calendar
Define CAL_GREGORIAN_ARABIC       For 10 // Gregorian Arabic calendar
Define CAL_GREGORIAN_XLIT_ENGLISH For 11 // Gregorian Transliterated English calendar
Define CAL_GREGORIAN_XLIT_FRENCH  For 12 // Gregorian Transliterated French calendar

Define CAL_ITWODIGITYEARMAX For |CI$00000030  // two digit year max
