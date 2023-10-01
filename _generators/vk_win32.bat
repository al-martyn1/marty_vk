call cxx17 /external:W0 /Wall /I:..\.. /external:anglebrackets vk_win32.cpp        > vk_win32.log
@rem /WX
vk_win32.exe > ..\vk_win32.h

if exist vk_win32.exe del vk_win32.exe
if exist vk_win32.obj del vk_win32.obj

