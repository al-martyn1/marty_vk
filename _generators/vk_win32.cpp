/*! \file
    \brief Генерация enum и сериализации для Win32 виртуальных кодов клавиш
*/

#pragma once

#include <winsock2.h>
#include <Windows.h>
#include <Ime.h>
#include <WinUser.h>

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <unordered_map>
#include <unordered_set>

#include "../../marty_cpp/marty_cpp.h"
#include "../../marty_cpp/marty_enum.h"
#include "../../marty_cpp/marty_ns.h"

/*
    https://otvet.mail.ru/question/186103138
    Клавиша FN - мета-клавиша, не факт, что имеет скан-код/константу VK_*

    Пишут, что код есть - https://otvet.mail.ru/question/186103138
    Тут тоже - https://www.cyberforum.ru/csharp-beginners/thread1374607.html

    Virtual Key = 0xFF
    Scan Code = 174 (0xAE)

    Но у меня все кнопки должны иметь ИД, который должен уметь сериализоваться в VK_*

 */

/*
    https://stackoverflow.com/questions/67916923/what-physical-key-maps-to-keycode-108-vk-separator
 */


/* Свежий список VK
   https://learn.microsoft.com/ru-ru/windows/win32/inputdev/virtual-key-codes
 */

/*
    Про ремапинг кнопок - https://habr.com/ru/post/75290/


    keyboard test
    https://www.passmark.com/products/keytest/

    SharpKeys

    HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Keyboard Layout
    Scancode Map

    Keyboard Maniac 4.28


    Map Any Key to Any Key on Windows 11, 10, 8, 7, or Vista
    https://www.howtogeek.com/howto/windows-vista/map-any-key-to-any-key-on-windows-xp-vista/

    AutoHotkey
    https://www.autohotkey.com/


 */


/*

Ime.h
  VK_DBE_*

WinUser.h



Шаг 48 - Коды виртуальных клавиш - https://firststeps.ru/mfc/msdn/r.php?48

Код виртуальной клавиши         Клавиатурный эквивалент
от VK_0 до VK_9                 Клавиши от 1 до 0 вдоль верхней части клавиатуры
от VK_A до VK_Z                 Клавиши от A до Z
VK_ADD                          Клавиша "+" на цифровой клавиатуре
VK_BACK                         Клавиша возврата (backspace)
VK_CANCEL                       Сочетание клавиш Ctrl+Break
VK_CAPITAL                      Клавиша Caps Lock
VK_CLEAR                        Клавиша очистки (Clear): клавиша 5 на цифровой клавиатуре, без NumLock
VK_CONTROL                      Клавиша Ctrl
VK_DECIMAL                      Клавиша "." на цифровой клавиатуре
VK_DELETE                       Клавиша Delete
VK_DIVIDE                       Клавиша "/" на цифровой клавиатуре
VK_DOWN                         Стрелка вниз
VK_END                          Клавиша End
VK_ESCAPE                       Клавиша Esc
от VK_F1 до VK_F12              Функциональные клавиши от F1 до F12
VK_HOME                         Клавиша Home
VK_INSERT                       Клавиша Insert
VK_LEFT                         Стрелка влево
VK_MENU                         Клавиша Alt
VK_MULTIPLAY                    Клавиша "*" на цифровой клавиатуре
VK_NEXT                         Клавиши Page Down и PgDn
VK_NUMLOCK                      Клавиша NumLock
от VK_NUMPAD0 до VK_NUMPAD9     Клавиши от 0 до 9 на цифровой клавиатуре
VK_PAUSE                        Клавиша Pause
VK_PRIOR                        Клавиши Page Up и PgUp
VK_RETURN                       Клавиша Enter
VK_RIGHT                        Стрелка вправо
VK_SCROLL                       Клавиша ScrollLock
VK_SHIFT                        Клавиша Shift
VK_SNAPSHOT                     Клавиша Print Screen
VK_SPACE                        Пробел
VK_SUBTRACT                     Клавиша "-" на цифровой клавиатуре
VK_TAB                          Клавиша Tab
VK_UP                           Стрелка вверх

http://www.kbdedit.com/manual/low_level_vk_list.html

*/

//0123456789
#ifndef VK_KEY0
    #define VK_KEY0   '0'
#endif

#ifndef VK_KEY1
    #define VK_KEY1   '1'
#endif

#ifndef VK_KEY2
    #define VK_KEY2   '2'
#endif

#ifndef VK_KEY3
    #define VK_KEY3   '3'
#endif

#ifndef VK_KEY4
    #define VK_KEY4   '4'
#endif

#ifndef VK_KEY5
    #define VK_KEY5   '5'
#endif

#ifndef VK_KEY6
    #define VK_KEY6   '6'
#endif

#ifndef VK_KEY7
    #define VK_KEY7   '7'
#endif

#ifndef VK_KEY8
    #define VK_KEY8   '8'
#endif

#ifndef VK_KEY9
    #define VK_KEY9   '9'
#endif


#ifndef VK_0
    #define VK_0   '0'
#endif

#ifndef VK_1
    #define VK_1   '1'
#endif

#ifndef VK_2
    #define VK_2   '2'
#endif

#ifndef VK_3
    #define VK_3   '3'
#endif

#ifndef VK_4
    #define VK_4   '4'
#endif

#ifndef VK_5
    #define VK_5   '5'
#endif

#ifndef VK_6
    #define VK_6   '6'
#endif

#ifndef VK_7
    #define VK_7   '7'
#endif

#ifndef VK_8
    #define VK_8   '8'
#endif

#ifndef VK_9
    #define VK_9   '9'
#endif



// MNOPQRSTUVWXYZ
#ifndef VK_A
    #define VK_A   'A'
#endif

#ifndef VK_B
    #define VK_B   'B'
#endif

#ifndef VK_C
    #define VK_C   'C'
#endif

#ifndef VK_D
    #define VK_D   'D'
#endif

#ifndef VK_E
    #define VK_E   'E'
#endif

#ifndef VK_F
    #define VK_F   'F'
#endif

#ifndef VK_G
    #define VK_G   'G'
#endif

#ifndef VK_H
    #define VK_H   'H'
#endif

#ifndef VK_I
    #define VK_I   'I'
#endif

#ifndef VK_J
    #define VK_J   'J'
#endif

#ifndef VK_K
    #define VK_K   'K'
#endif

#ifndef VK_L
    #define VK_L   'L'
#endif

// MNOPQRSTUVW
#ifndef VK_M
    #define VK_M   'M'
#endif

#ifndef VK_N
    #define VK_N   'N'
#endif

#ifndef VK_O
    #define VK_O   'O'
#endif

#ifndef VK_P
    #define VK_P   'P'
#endif

#ifndef VK_Q
    #define VK_Q   'Q'
#endif

#ifndef VK_R
    #define VK_R   'R'
#endif

#ifndef VK_S
    #define VK_S   'S'
#endif

#ifndef VK_T
    #define VK_T   'T'
#endif

#ifndef VK_U
    #define VK_U   'U'
#endif

#ifndef VK_V
    #define VK_V   'V'
#endif

#ifndef VK_W
    #define VK_W   'W'
#endif

// XYZ
#ifndef VK_X
    #define VK_X   'X'
#endif

#ifndef VK_Y
    #define VK_Y   'Y'
#endif

#ifndef VK_Z
    #define VK_Z   'Z'
#endif




#ifndef VK_OEM_COLON
    #define VK_OEM_COLON VK_OEM_1
#endif

#ifndef VK_OEM_SLASH
    #define VK_OEM_SLASH VK_OEM_2
#endif

#ifndef VK_OEM_TILDE
    #define VK_OEM_TILDE VK_OEM_3
#endif

#ifndef VK_OEM_LBRACE
    #define VK_OEM_LBRACE VK_OEM_4
#endif

#ifndef VK_OEM_BKSLASH
    #define VK_OEM_BKSLASH VK_OEM_5
#endif

#ifndef VK_OEM_RBRACE
    #define VK_OEM_RBRACE VK_OEM_6
#endif

#ifndef VK_OEM_APOS
    #define VK_OEM_APOS VK_OEM_7
#endif


#ifndef VK_COLON
    #define VK_COLON VK_OEM_1
#endif

#ifndef VK_SLASH
    #define VK_SLASH VK_OEM_2
#endif

#ifndef VK_TILDE
    #define VK_TILDE VK_OEM_3
#endif

#ifndef VK_LBRACE
    #define VK_LBRACE VK_OEM_4
#endif

#ifndef VK_OEM_LBRACE
    #define VK_LBRACE VK_OEM_4
#endif

#ifndef VK_BKSLASH
    #define VK_BKSLASH VK_OEM_5
#endif

#ifndef VK_OEM_BKSLASH
    #define VK_OEM_BKSLASH VK_OEM_5
#endif

#ifndef VK_RBRACE
    #define VK_RBRACE VK_OEM_6
#endif

#ifndef VK_OEM_RBRACE
    #define VK_OEM_RBRACE VK_OEM_6
#endif

#ifndef VK_APOS
    #define VK_APOS VK_OEM_7
#endif



#ifndef VK_PLUS
    #define VK_PLUS VK_OEM_PLUS
#endif

#ifndef VK_COMMA
    #define VK_COMMA VK_OEM_COMMA
#endif

#ifndef VK_MINUS
    #define VK_MINUS VK_OEM_MINUS
#endif

#ifndef VK_PERIOD
    #define VK_PERIOD VK_OEM_PERIOD
#endif


#ifndef VK_LALT
    #define VK_LALT VK_LMENU
#endif

#ifndef VK_RALT
    #define VK_RALT VK_RMENU
#endif

#ifndef VK_ALT
    #define VK_ALT VK_MENU
#endif


#ifndef VK_LCTRL
    #define VK_LCTRL VK_LCONTROL
#endif

#ifndef VK_RCTRL
    #define VK_RCTRL VK_RCONTROL
#endif

#ifndef VK_CTRL
    #define VK_CTRL  VK_CONTROL
#endif


#ifndef VK_ENTER
    #define VK_ENTER VK_RETURN
#endif

#ifndef VK_ESC
    #define VK_ESC VK_ESCAPE
#endif


#ifndef VK_CURSOR_LEFT
    #define VK_CURSOR_LEFT VK_LEFT
#endif

#ifndef VK_CURSOR_UP
    #define VK_CURSOR_UP VK_UP
#endif

#ifndef VK_CURSOR_RIGHT
    #define VK_CURSOR_RIGHT VK_RIGHT
#endif

#ifndef VK_CURSOR_DOWN
    #define VK_CURSOR_DOWN VK_DOWN
#endif


#ifndef VK_UNKNOWN
    #define VK_UNKNOWN 0
#endif


#ifndef VK_IME_ON
    #define VK_IME_ON 0x16
#endif

#ifndef VK_IME_OFF
    #define VK_IME_OFF 0x1A
#endif

#ifndef VK_PROCESSKEY
    #define VK_PROCESSKEY         0xE5
#endif

#ifndef VK_PACKET
    #define VK_PACKET             0xE7
#endif

#ifndef VK_BROWSER_BACK
    #define VK_BROWSER_BACK       0xA6
#endif

#ifndef VK_BROWSER_FORWARD
    #define VK_BROWSER_FORWARD    0xA7
#endif

#ifndef VK_BROWSER_REFRESH
    #define VK_BROWSER_REFRESH    0xA8
#endif

#ifndef VK_BROWSER_STOP
    #define VK_BROWSER_STOP       0xA9
#endif

#ifndef VK_BROWSER_SEARCH
    #define VK_BROWSER_SEARCH     0xAA
#endif

#ifndef VK_BROWSER_FAVORITES
    #define VK_BROWSER_FAVORITES  0xAB
#endif

#ifndef VK_BROWSER_HOME
    #define VK_BROWSER_HOME       0xAC
#endif

#ifndef VK_VOLUME_MUTE
    #define VK_VOLUME_MUTE        0xAD
#endif

#ifndef VK_VOLUME_DOWN
    #define VK_VOLUME_DOWN        0xAE
#endif

#ifndef VK_VOLUME_UP
    #define VK_VOLUME_UP          0xAF
#endif

#ifndef VK_MEDIA_NEXT_TRACK
    #define VK_MEDIA_NEXT_TRACK   0xB0
#endif

#ifndef VK_MEDIA_PREV_TRACK
    #define VK_MEDIA_PREV_TRACK   0xB1
#endif

#ifndef VK_MEDIA_STOP
    #define VK_MEDIA_STOP         0xB2
#endif

#ifndef VK_MEDIA_PLAY_PAUSE
    #define VK_MEDIA_PLAY_PAUSE   0xB3
#endif

#ifndef VK_LAUNCH_MAIL
    #define VK_LAUNCH_MAIL        0xB4
#endif

#ifndef VK_LAUNCH_MEDIA_SELECT
    #define VK_LAUNCH_MEDIA_SELECT  0xB5
#endif

#ifndef VK_LAUNCH_APP1
    #define VK_LAUNCH_APP1        0xB6
#endif

#ifndef VK_LAUNCH_APP2
    #define VK_LAUNCH_APP2        0xB7
#endif


#ifndef VK_XBUTTON1
    #define VK_XBUTTON1           0x05
#endif

#ifndef VK_XBUTTON2
    #define VK_XBUTTON2           0x06
#endif


#ifndef VK_NP0
    #define VK_NP0                VK_NUMPAD0
#endif

#ifndef VK_NP1
    #define VK_NP1                VK_NUMPAD1
#endif

#ifndef VK_NP2
    #define VK_NP2                VK_NUMPAD2
#endif

#ifndef VK_NP3
    #define VK_NP3                VK_NUMPAD3
#endif

#ifndef VK_NP4
    #define VK_NP4                VK_NUMPAD4
#endif

#ifndef VK_NP5
    #define VK_NP5                VK_NUMPAD5
#endif

#ifndef VK_NP6
    #define VK_NP6                VK_NUMPAD6
#endif

#ifndef VK_NP7
    #define VK_NP7                VK_NUMPAD7
#endif

#ifndef VK_NP8
    #define VK_NP8                VK_NUMPAD8
#endif

#ifndef VK_NP9
    #define VK_NP9                VK_NUMPAD9
#endif


#ifndef VK_MULT
    #define VK_MULT               VK_MULTIPLY
#endif

#ifndef VK_SEP
    #define VK_SEP                VK_SEPARATOR
#endif

#ifndef VK_SUB
    #define VK_SUB                VK_SUBTRACT
#endif

#ifndef VK_DEC
    #define VK_DEC                VK_DECIMAL
#endif

#ifndef VK_DIV
    #define VK_DIV                VK_DIVIDE
#endif

#ifndef VK_NLOCK
    #define VK_NLOCK              VK_NUMLOCK
#endif






#if 0
#ifndef VK_0
    #define VK_0
#endif
#endif




inline
std::string getVkName( const std::string &vkName )
{
    //auto splittedName = underwood::splitString(vkName, '_');
    auto splittedName = marty_cpp::simple_string_split(vkName, std::string("_"));
    switch(splittedName.size())
    {
        case  0: return std::string();
        case  1: return splittedName[0];
        default:
                 {
                     std::string res;
                     for(auto i=0u; i!=splittedName.size(); ++i)
                     {
                         if (!i) continue;
                         if (i>1) res.append(1,'_');
                         res.append(splittedName[i]);
                     }
                     return res;
                 }
    }
}

#define VK_ENUM_ENTRY( vk ) { getVkName(#vk), vk, #vk }


// http://www.kbdedit.com/manual/low_level_vk_list.html

// From WinUser.h
std::vector< std::tuple< std::string,marty_cpp::enum_internal_uint_t,std::string > >
vks = { VK_ENUM_ENTRY(VK_UNKNOWN)

      , { "NONE", 0xFF, "" }

      , VK_ENUM_ENTRY(VK_LBUTTON) // Mouse base
      , VK_ENUM_ENTRY(VK_RBUTTON)
      , VK_ENUM_ENTRY(VK_MBUTTON)
      , VK_ENUM_ENTRY(VK_CANCEL )

      , VK_ENUM_ENTRY(VK_XBUTTON1) // Mouse extra
      , VK_ENUM_ENTRY(VK_XBUTTON2)

      , VK_ENUM_ENTRY(VK_BACK)
      , VK_ENUM_ENTRY(VK_TAB )

      , VK_ENUM_ENTRY(VK_CLEAR )
      , VK_ENUM_ENTRY(VK_ENTER )  // alias
      , VK_ENUM_ENTRY(VK_RETURN)

      , VK_ENUM_ENTRY(VK_SHIFT  )
      , VK_ENUM_ENTRY(VK_CTRL   )
      , VK_ENUM_ENTRY(VK_CONTROL)
      , VK_ENUM_ENTRY(VK_ALT    )
      , VK_ENUM_ENTRY(VK_MENU   )
      , VK_ENUM_ENTRY(VK_PAUSE  )
      , VK_ENUM_ENTRY(VK_CAPITAL)

      , VK_ENUM_ENTRY(VK_KANA   )
      , VK_ENUM_ENTRY(VK_HANGEUL)
      , VK_ENUM_ENTRY(VK_HANGUL )
      , VK_ENUM_ENTRY(VK_IME_ON )
      , VK_ENUM_ENTRY(VK_JUNJA  )
      , VK_ENUM_ENTRY(VK_FINAL  )
      , VK_ENUM_ENTRY(VK_HANJA  )
      , VK_ENUM_ENTRY(VK_KANJI  )
      , VK_ENUM_ENTRY(VK_IME_OFF)

      , VK_ENUM_ENTRY(VK_ESC)
      , VK_ENUM_ENTRY(VK_ESCAPE)

      , VK_ENUM_ENTRY(VK_CONVERT   )
      , VK_ENUM_ENTRY(VK_NONCONVERT)
      , VK_ENUM_ENTRY(VK_ACCEPT    )
      , VK_ENUM_ENTRY(VK_MODECHANGE)

      , VK_ENUM_ENTRY(VK_SPACE     )
      , VK_ENUM_ENTRY(VK_PRIOR     )
      , VK_ENUM_ENTRY(VK_NEXT      )
      , VK_ENUM_ENTRY(VK_END       )
      , VK_ENUM_ENTRY(VK_HOME      )
      , VK_ENUM_ENTRY(VK_LEFT         )
      , VK_ENUM_ENTRY(VK_CURSOR_LEFT  )
      , VK_ENUM_ENTRY(VK_UP           )
      , VK_ENUM_ENTRY(VK_CURSOR_UP    )
      , VK_ENUM_ENTRY(VK_RIGHT        )
      , VK_ENUM_ENTRY(VK_CURSOR_RIGHT )
      , VK_ENUM_ENTRY(VK_DOWN         )
      , VK_ENUM_ENTRY(VK_CURSOR_DOWN  )
      , VK_ENUM_ENTRY(VK_SELECT   )
      , VK_ENUM_ENTRY(VK_PRINT    )
      , VK_ENUM_ENTRY(VK_EXECUTE  )
      , VK_ENUM_ENTRY(VK_SNAPSHOT )
      , VK_ENUM_ENTRY(VK_INSERT   )
      , VK_ENUM_ENTRY(VK_DELETE   )
      , VK_ENUM_ENTRY(VK_HELP     )
      , VK_ENUM_ENTRY(VK_0)
      , VK_ENUM_ENTRY(VK_KEY0)
      , VK_ENUM_ENTRY(VK_1)
      , VK_ENUM_ENTRY(VK_KEY1)
      , VK_ENUM_ENTRY(VK_2)
      , VK_ENUM_ENTRY(VK_KEY2)
      , VK_ENUM_ENTRY(VK_3)
      , VK_ENUM_ENTRY(VK_KEY3)
      , VK_ENUM_ENTRY(VK_4)
      , VK_ENUM_ENTRY(VK_KEY4)
      , VK_ENUM_ENTRY(VK_5)
      , VK_ENUM_ENTRY(VK_KEY5)
      , VK_ENUM_ENTRY(VK_6)
      , VK_ENUM_ENTRY(VK_KEY6)
      , VK_ENUM_ENTRY(VK_7)
      , VK_ENUM_ENTRY(VK_KEY7)
      , VK_ENUM_ENTRY(VK_8)
      , VK_ENUM_ENTRY(VK_KEY8)
      , VK_ENUM_ENTRY(VK_9)
      , VK_ENUM_ENTRY(VK_KEY9)
      , VK_ENUM_ENTRY(VK_A)
      , VK_ENUM_ENTRY(VK_B)
      , VK_ENUM_ENTRY(VK_C)
      , VK_ENUM_ENTRY(VK_D)
      , VK_ENUM_ENTRY(VK_E)
      , VK_ENUM_ENTRY(VK_F)
      , VK_ENUM_ENTRY(VK_G)
      , VK_ENUM_ENTRY(VK_H)
      , VK_ENUM_ENTRY(VK_I)
      , VK_ENUM_ENTRY(VK_J)
      , VK_ENUM_ENTRY(VK_K)
      , VK_ENUM_ENTRY(VK_L)
      , VK_ENUM_ENTRY(VK_M)
      , VK_ENUM_ENTRY(VK_N)
      , VK_ENUM_ENTRY(VK_O)
      , VK_ENUM_ENTRY(VK_P)
      , VK_ENUM_ENTRY(VK_Q)
      , VK_ENUM_ENTRY(VK_R)
      , VK_ENUM_ENTRY(VK_S)
      , VK_ENUM_ENTRY(VK_T)
      , VK_ENUM_ENTRY(VK_U)
      , VK_ENUM_ENTRY(VK_V)
      , VK_ENUM_ENTRY(VK_W)
      , VK_ENUM_ENTRY(VK_X)
      , VK_ENUM_ENTRY(VK_Y)
      , VK_ENUM_ENTRY(VK_Z)

      , VK_ENUM_ENTRY(VK_LWIN)
      , VK_ENUM_ENTRY(VK_RWIN)
      , VK_ENUM_ENTRY(VK_APPS)

      , VK_ENUM_ENTRY(VK_SLEEP)

      , VK_ENUM_ENTRY(VK_NP0  )
      , VK_ENUM_ENTRY(VK_NUMPAD0  )
      , VK_ENUM_ENTRY(VK_NP1  )
      , VK_ENUM_ENTRY(VK_NUMPAD1  )
      , VK_ENUM_ENTRY(VK_NP2  )
      , VK_ENUM_ENTRY(VK_NUMPAD2  )
      , VK_ENUM_ENTRY(VK_NP3  )
      , VK_ENUM_ENTRY(VK_NUMPAD3  )
      , VK_ENUM_ENTRY(VK_NP4  )
      , VK_ENUM_ENTRY(VK_NUMPAD4  )
      , VK_ENUM_ENTRY(VK_NP5  )
      , VK_ENUM_ENTRY(VK_NUMPAD5  )
      , VK_ENUM_ENTRY(VK_NP6  )
      , VK_ENUM_ENTRY(VK_NUMPAD6  )
      , VK_ENUM_ENTRY(VK_NP7  )
      , VK_ENUM_ENTRY(VK_NUMPAD7  )
      , VK_ENUM_ENTRY(VK_NP8  )
      , VK_ENUM_ENTRY(VK_NUMPAD8  )
      , VK_ENUM_ENTRY(VK_NP9  )
      , VK_ENUM_ENTRY(VK_NUMPAD9  )
      , VK_ENUM_ENTRY(VK_MULT )
      , VK_ENUM_ENTRY(VK_MULTIPLY )
      , VK_ENUM_ENTRY(VK_ADD      )
      , VK_ENUM_ENTRY(VK_SEP  )
      , VK_ENUM_ENTRY(VK_SEPARATOR)
      , VK_ENUM_ENTRY(VK_SUB  )
      , VK_ENUM_ENTRY(VK_SUBTRACT )
      , VK_ENUM_ENTRY(VK_DEC  )
      , VK_ENUM_ENTRY(VK_DECIMAL  )
      , VK_ENUM_ENTRY(VK_DIV  )
      , VK_ENUM_ENTRY(VK_DIVIDE   )

      , VK_ENUM_ENTRY(VK_F1       )
      , VK_ENUM_ENTRY(VK_F2       )
      , VK_ENUM_ENTRY(VK_F3       )
      , VK_ENUM_ENTRY(VK_F4       )
      , VK_ENUM_ENTRY(VK_F5       )
      , VK_ENUM_ENTRY(VK_F6       )
      , VK_ENUM_ENTRY(VK_F7       )
      , VK_ENUM_ENTRY(VK_F8       )
      , VK_ENUM_ENTRY(VK_F9       )
      , VK_ENUM_ENTRY(VK_F10      )
      , VK_ENUM_ENTRY(VK_F11      )
      , VK_ENUM_ENTRY(VK_F12      )
      , VK_ENUM_ENTRY(VK_F13      )
      , VK_ENUM_ENTRY(VK_F14      )
      , VK_ENUM_ENTRY(VK_F15      )
      , VK_ENUM_ENTRY(VK_F16      )
      , VK_ENUM_ENTRY(VK_F17      )
      , VK_ENUM_ENTRY(VK_F18      )
      , VK_ENUM_ENTRY(VK_F19      )
      , VK_ENUM_ENTRY(VK_F20      )
      , VK_ENUM_ENTRY(VK_F21      )
      , VK_ENUM_ENTRY(VK_F22      )
      , VK_ENUM_ENTRY(VK_F23      )
      , VK_ENUM_ENTRY(VK_F24      )

      , VK_ENUM_ENTRY(VK_NLOCK)
      , VK_ENUM_ENTRY(VK_NUMLOCK)
      , VK_ENUM_ENTRY(VK_SCROLL )

      , VK_ENUM_ENTRY(VK_OEM_NEC_EQUAL)

      , VK_ENUM_ENTRY(VK_OEM_FJ_JISHO  )
      , VK_ENUM_ENTRY(VK_OEM_FJ_MASSHOU)
      , VK_ENUM_ENTRY(VK_OEM_FJ_TOUROKU)
      , VK_ENUM_ENTRY(VK_OEM_FJ_LOYA   )
      , VK_ENUM_ENTRY(VK_OEM_FJ_ROYA   )

      , VK_ENUM_ENTRY(VK_LSHIFT  )
      , VK_ENUM_ENTRY(VK_RSHIFT  )
      , VK_ENUM_ENTRY(VK_LCTRL   )
      , VK_ENUM_ENTRY(VK_LCONTROL)
      , VK_ENUM_ENTRY(VK_RCTRL   )
      , VK_ENUM_ENTRY(VK_RCONTROL)
      , VK_ENUM_ENTRY(VK_LALT    )
      , VK_ENUM_ENTRY(VK_LMENU   )
      , VK_ENUM_ENTRY(VK_RALT    )
      , VK_ENUM_ENTRY(VK_RMENU   )

      , VK_ENUM_ENTRY(VK_BROWSER_BACK     )
      , VK_ENUM_ENTRY(VK_BROWSER_FORWARD  )
      , VK_ENUM_ENTRY(VK_BROWSER_REFRESH  )
      , VK_ENUM_ENTRY(VK_BROWSER_STOP     )
      , VK_ENUM_ENTRY(VK_BROWSER_SEARCH   )
      , VK_ENUM_ENTRY(VK_BROWSER_FAVORITES)
      , VK_ENUM_ENTRY(VK_BROWSER_HOME     )

      , VK_ENUM_ENTRY(VK_VOLUME_MUTE        )
      , VK_ENUM_ENTRY(VK_VOLUME_DOWN        )
      , VK_ENUM_ENTRY(VK_VOLUME_UP          )
      , VK_ENUM_ENTRY(VK_MEDIA_NEXT_TRACK   )
      , VK_ENUM_ENTRY(VK_MEDIA_PREV_TRACK   )
      , VK_ENUM_ENTRY(VK_MEDIA_STOP         )
      , VK_ENUM_ENTRY(VK_MEDIA_PLAY_PAUSE   )
      , VK_ENUM_ENTRY(VK_LAUNCH_MAIL        )
      , VK_ENUM_ENTRY(VK_LAUNCH_MEDIA_SELECT)
      , VK_ENUM_ENTRY(VK_LAUNCH_APP1        )
      , VK_ENUM_ENTRY(VK_LAUNCH_APP2        )

      , VK_ENUM_ENTRY( VK_COLON      ) // VK_OEM_1
      , VK_ENUM_ENTRY( VK_OEM_COLON  ) // VK_OEM_1
      , VK_ENUM_ENTRY( VK_OEM_1      ) // ';:' for US
      , VK_ENUM_ENTRY( VK_PLUS       ) // VK_OEM_PLUS
      , VK_ENUM_ENTRY( VK_OEM_PLUS   ) // '+' any country
      , VK_ENUM_ENTRY( VK_COMMA      ) // VK_OEM_COMMA
      , VK_ENUM_ENTRY( VK_OEM_COMMA  ) // ',' any country
      , VK_ENUM_ENTRY( VK_MINUS      ) // VK_OEM_MINUS
      , VK_ENUM_ENTRY( VK_OEM_MINUS  ) // '-' any country
      , VK_ENUM_ENTRY( VK_PERIOD     ) // VK_OEM_PERIOD
      , VK_ENUM_ENTRY( VK_OEM_PERIOD ) // '.' any country

      , VK_ENUM_ENTRY( VK_SLASH      ) // VK_OEM_2
      , VK_ENUM_ENTRY( VK_OEM_SLASH  ) // VK_OEM_2
      , VK_ENUM_ENTRY( VK_OEM_2      ) // '/?' for US
      , VK_ENUM_ENTRY( VK_TILDE      ) // VK_OEM_3
      , VK_ENUM_ENTRY( VK_OEM_3      ) // '`~' for US
      , VK_ENUM_ENTRY( VK_LBRACE     ) // VK_OEM_4
      , VK_ENUM_ENTRY( VK_OEM_LBRACE ) // VK_OEM_4
      , VK_ENUM_ENTRY( VK_OEM_4      ) //  '[{' for US
      , VK_ENUM_ENTRY( VK_BKSLASH    ) // VK_OEM_5
      , VK_ENUM_ENTRY( VK_OEM_BKSLASH) // VK_OEM_5
      , VK_ENUM_ENTRY( VK_OEM_5      ) //  '\|' for US
      , VK_ENUM_ENTRY( VK_RBRACE     ) // VK_OEM_6
      , VK_ENUM_ENTRY( VK_OEM_RBRACE ) // VK_OEM_6
      , VK_ENUM_ENTRY( VK_OEM_6      ) //  ']}' for US
      , VK_ENUM_ENTRY( VK_APOS       ) // VK_OEM_7
      , VK_ENUM_ENTRY( VK_OEM_APOS   ) // VK_OEM_7
      , VK_ENUM_ENTRY( VK_OEM_7      ) //  ''"' for US
      , VK_ENUM_ENTRY( VK_OEM_8      )

      , VK_ENUM_ENTRY( VK_OEM_AX   )
      , VK_ENUM_ENTRY( VK_OEM_102  )
      , VK_ENUM_ENTRY( VK_ICO_HELP )
      , VK_ENUM_ENTRY( VK_ICO_00   )

      , VK_ENUM_ENTRY(VK_PROCESSKEY)

      , VK_ENUM_ENTRY(VK_ICO_CLEAR)

      , VK_ENUM_ENTRY(VK_PACKET)

      , VK_ENUM_ENTRY( VK_OEM_RESET  )
      , VK_ENUM_ENTRY( VK_OEM_JUMP   )
      , VK_ENUM_ENTRY( VK_OEM_PA1    )
      , VK_ENUM_ENTRY( VK_OEM_PA2    )
      , VK_ENUM_ENTRY( VK_OEM_PA3    )
      , VK_ENUM_ENTRY( VK_OEM_WSCTRL )
      , VK_ENUM_ENTRY( VK_OEM_CUSEL  )
      , VK_ENUM_ENTRY( VK_OEM_ATTN   )
      , VK_ENUM_ENTRY( VK_OEM_FINISH )
      , VK_ENUM_ENTRY( VK_OEM_COPY   )
      , VK_ENUM_ENTRY( VK_OEM_AUTO   )
      , VK_ENUM_ENTRY( VK_OEM_ENLW   )
      , VK_ENUM_ENTRY( VK_OEM_BACKTAB)

      , VK_ENUM_ENTRY(VK_ATTN     )
      , VK_ENUM_ENTRY(VK_CRSEL    )
      , VK_ENUM_ENTRY(VK_EXSEL    )
      , VK_ENUM_ENTRY(VK_EREOF    )
      , VK_ENUM_ENTRY(VK_PLAY     )
      , VK_ENUM_ENTRY(VK_ZOOM     )
      , VK_ENUM_ENTRY(VK_NONAME   )
      , VK_ENUM_ENTRY(VK_PA1      )
      , VK_ENUM_ENTRY(VK_OEM_CLEAR)

      // https://bugzilla.mozilla.org/show_bug.cgi?id=896362
      // https://chromium.googlesource.com/external/mozc/+/master/src/win32/base/keyevent_handler.cc
      // http://kbdlayout.info/KBDBR/shiftstates

      , { "ABNT_C1", 0xC1, "" }
      , { "ABNT_C2", 0xC2, "" }


#if 0
      , VK_ENUM_ENTRY()
      , VK_ENUM_ENTRY()
      , VK_ENUM_ENTRY()
      , VK_ENUM_ENTRY()
      , VK_ENUM_ENTRY()
#endif

#define VK_FDUMMY             0x08000000
#define VK_FSCANCODE          0x10000000
#define VK_FEXTENDEDKEY       0x20000000

      , { "NUMPAD0_DUMMY", VK_FDUMMY | VK_NUMPAD0, "" }

      , { "NUMPADADD_DUMMY", VK_FDUMMY | VK_ADD, "" }

      , { "RETURN_DUMMY", VK_FDUMMY | VK_ENTER, "" } // 0x08000000 - Dummy flag

      , { "NUMPAD_RETURN_DUMMY", VK_FDUMMY | VK_FEXTENDEDKEY | VK_ENTER, "" } // 0x08000000 - Dummy flag

      , { "FN", VK_FSCANCODE | 0xFF, "" } // Нестандартная клавиша FN, признак в старшем разряде и скан-код в младшем.
                             // Не факт, что так оно и есть, не используется для идентификации нажатой клавиши,
                             // только в описании раскладки клавиатуры

      , { "NP_RET"       , VK_FEXTENDEDKEY | VK_ENTER, "" }
      , { "NUMPAD_ENTER" , VK_FEXTENDEDKEY | VK_ENTER, "" }
      , { "NUMPAD_RETURN", VK_FEXTENDEDKEY | VK_ENTER, "" } // Handle WM_KEYDOWN. The nFlags parameter has bit 8 to indicate "Extended
                             // key, such as a function key or a key on the numeric keypad (1 if it is an
                             // extended key)."
                             //



};


// VK list - https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
// 0x3A-0x40 - Undefined - надо разобраться, какие VK_* генеряться при нажатии  []\;'
// - - 45/0x2D
// = - 61/0x3D

#include "generator_commons.h"


int main()
{

    std::cout << commonH << "\n";


    using namespace marty_cpp;


    auto ns = makeNamespaceOutputWriteGuard( std::cout, std::string("virtual_keys") );

    auto genCfg = EnumGeneratorTemplate<std::string>::defaultCpp();
    genCfg.enumNameFormat = "$(ENAMNAME)";

    enum_generate_serialize( std::cout
                           , vks
                           , std::string(), std::string("    ")
                           , std::string("VkCode"), std::string("std::uint32_t") // underlayedTypeName
                           , NameStyle::pascalStyle // defaultStyle
                           , NameStyle::all
                           , std::string() // std::string("vk")
                           , EnumGeneratorOptionFlags::generateDefAll
                           | EnumGeneratorOptionFlags::generateDefSerializeExtra
                           | EnumGeneratorOptionFlags::lowercaseDeserialize
                           | EnumGeneratorOptionFlags::enumClass
                           //| EnumGeneratorOptionFlags::integerDeserelialize
                           //| EnumGeneratorOptionFlags::singleDef
                           , genCfg
                           );


}

