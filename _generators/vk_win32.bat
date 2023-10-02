@set UINT8=--underlaying-type=std::uint8_t
@set UINT16=--underlaying-type=std::uint16_t
@set UINT32=--underlaying-type=std::uint32_t
@set INT=--underlaying-type=int

@set HEX2=--hex-width=2
@set HEX4=--hex-width=4
@set HEX6=--hex-width=6
@set HEX8=--hex-width=8

@rem set EXTRA=--enum-flags=extra
@rem same but more detailed
@set FLAGENUM_EXTRA=--enum-flags=serialize-set,deserialize-set

@set FLAGS=--enum-flags=flags
@set DECL=--enum-flags=type-decl
@set CLS=--enum-flags=enum-class
@set DECLCLS=--enum-flags=type-decl,enum-class
@set FMTHEX=--enum-flags=fmt-hex
@set SERIALIZE=--enum-flags=serialize,deserialize,lowercase

@set VALUES_CAMEL=--enum-values-style=CamelStyle
@set VALUES_PASCAL=--enum-values-style=PascalStyle 
@set SERIALIZE_PASCAL=--serialize-style=PascalStyle 

@set KEYEVENTFLAGS_DEF=invalid,unknown=-1;NoFlags=0;Extended=0x0100;AltDown=0x2000;Repeat=0x4000;Up=0x8000

@rem KF_DLGMODE
@rem 0x0800	Manipulates the dialog mode flag, which indicates whether a dialog box is active.
@rem KF_MENUMODE
@rem 0x1000	Manipulates the menu mode flag, which indicates whether a menu is active.

umba-enum-gen --overwrite %DECLCLS% %FMTHEX% %SERIALIZE% %FLAGENUM_EXTRA% %HEX4% %FLAGS% %UINT32% -E=KeyEventFlags -F=%KEYEVENTFLAGS_DEF% ..\vk_win32_key_event_flags.h





call cxx17 /external:W0 /Wall /I:..\.. /external:anglebrackets vk_win32.cpp        > vk_win32.log
@rem /WX
vk_win32.exe > ..\vk_win32.h

if exist vk_win32.exe del vk_win32.exe
if exist vk_win32.obj del vk_win32.obj
