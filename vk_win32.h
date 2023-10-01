#pragma once

#include <marty_cpp/marty_enum.h>
#include <marty_cpp/marty_flags.h>
#include <map>
#include <vector>
#include <string>
#include <exception>
#include <stdexcept>


namespace virtual_keys{

enum class VkCode : std::uint32_t
{
    Unknown             = 0 /* VK_UNKNOWN */,
    None                = 255,
    Lbutton             = 1 /* VK_LBUTTON */,
    Rbutton             = 2 /* VK_RBUTTON */,
    Mbutton             = 4 /* VK_MBUTTON */,
    Cancel              = 3 /* VK_CANCEL */,
    Xbutton1            = 5 /* VK_XBUTTON1 */,
    Xbutton2            = 6 /* VK_XBUTTON2 */,
    Back                = 8 /* VK_BACK */,
    Tab                 = 9 /* VK_TAB */,
    Clear               = 12 /* VK_CLEAR */,
    Enter               = 13 /* VK_ENTER */,
    Return              = 13 /* VK_RETURN */,
    Shift               = 16 /* VK_SHIFT */,
    Ctrl                = 17 /* VK_CTRL */,
    Control             = 17 /* VK_CONTROL */,
    Alt                 = 18 /* VK_ALT */,
    Menu                = 18 /* VK_MENU */,
    Pause               = 19 /* VK_PAUSE */,
    Capital             = 20 /* VK_CAPITAL */,
    Kana                = 21 /* VK_KANA */,
    Hangeul             = 21 /* VK_HANGEUL */,
    Hangul              = 21 /* VK_HANGUL */,
    ImeOn               = 22 /* VK_IME_ON */,
    Junja               = 23 /* VK_JUNJA */,
    Final               = 24 /* VK_FINAL */,
    Hanja               = 25 /* VK_HANJA */,
    Kanji               = 25 /* VK_KANJI */,
    ImeOff              = 26 /* VK_IME_OFF */,
    Esc                 = 27 /* VK_ESC */,
    Escape              = 27 /* VK_ESCAPE */,
    Convert             = 28 /* VK_CONVERT */,
    Nonconvert          = 29 /* VK_NONCONVERT */,
    Accept              = 30 /* VK_ACCEPT */,
    Modechange          = 31 /* VK_MODECHANGE */,
    Space               = 32 /* VK_SPACE */,
    Prior               = 33 /* VK_PRIOR */,
    Next                = 34 /* VK_NEXT */,
    End                 = 35 /* VK_END */,
    Home                = 36 /* VK_HOME */,
    Left                = 37 /* VK_LEFT */,
    CursorLeft          = 37 /* VK_CURSOR_LEFT */,
    Up                  = 38 /* VK_UP */,
    CursorUp            = 38 /* VK_CURSOR_UP */,
    Right               = 39 /* VK_RIGHT */,
    CursorRight         = 39 /* VK_CURSOR_RIGHT */,
    Down                = 40 /* VK_DOWN */,
    CursorDown          = 40 /* VK_CURSOR_DOWN */,
    Select              = 41 /* VK_SELECT */,
    Print               = 42 /* VK_PRINT */,
    Execute             = 43 /* VK_EXECUTE */,
    Snapshot            = 44 /* VK_SNAPSHOT */,
    Insert              = 45 /* VK_INSERT */,
    Delete              = 46 /* VK_DELETE */,
    Help                = 47 /* VK_HELP */,
    _0                  = 48 /* VK_0 */,
    Key0                = 48 /* VK_KEY0 */,
    _1                  = 49 /* VK_1 */,
    Key1                = 49 /* VK_KEY1 */,
    _2                  = 50 /* VK_2 */,
    Key2                = 50 /* VK_KEY2 */,
    _3                  = 51 /* VK_3 */,
    Key3                = 51 /* VK_KEY3 */,
    _4                  = 52 /* VK_4 */,
    Key4                = 52 /* VK_KEY4 */,
    _5                  = 53 /* VK_5 */,
    Key5                = 53 /* VK_KEY5 */,
    _6                  = 54 /* VK_6 */,
    Key6                = 54 /* VK_KEY6 */,
    _7                  = 55 /* VK_7 */,
    Key7                = 55 /* VK_KEY7 */,
    _8                  = 56 /* VK_8 */,
    Key8                = 56 /* VK_KEY8 */,
    _9                  = 57 /* VK_9 */,
    Key9                = 57 /* VK_KEY9 */,
    A                   = 65 /* VK_A */,
    B                   = 66 /* VK_B */,
    C                   = 67 /* VK_C */,
    D                   = 68 /* VK_D */,
    E                   = 69 /* VK_E */,
    F                   = 70 /* VK_F */,
    G                   = 71 /* VK_G */,
    H                   = 72 /* VK_H */,
    I                   = 73 /* VK_I */,
    J                   = 74 /* VK_J */,
    K                   = 75 /* VK_K */,
    L                   = 76 /* VK_L */,
    M                   = 77 /* VK_M */,
    N                   = 78 /* VK_N */,
    O                   = 79 /* VK_O */,
    P                   = 80 /* VK_P */,
    Q                   = 81 /* VK_Q */,
    R                   = 82 /* VK_R */,
    S                   = 83 /* VK_S */,
    T                   = 84 /* VK_T */,
    U                   = 85 /* VK_U */,
    V                   = 86 /* VK_V */,
    W                   = 87 /* VK_W */,
    X                   = 88 /* VK_X */,
    Y                   = 89 /* VK_Y */,
    Z                   = 90 /* VK_Z */,
    Lwin                = 91 /* VK_LWIN */,
    Rwin                = 92 /* VK_RWIN */,
    Apps                = 93 /* VK_APPS */,
    Sleep               = 95 /* VK_SLEEP */,
    Np0                 = 96 /* VK_NP0 */,
    Numpad0             = 96 /* VK_NUMPAD0 */,
    Np1                 = 97 /* VK_NP1 */,
    Numpad1             = 97 /* VK_NUMPAD1 */,
    Np2                 = 98 /* VK_NP2 */,
    Numpad2             = 98 /* VK_NUMPAD2 */,
    Np3                 = 99 /* VK_NP3 */,
    Numpad3             = 99 /* VK_NUMPAD3 */,
    Np4                 = 100 /* VK_NP4 */,
    Numpad4             = 100 /* VK_NUMPAD4 */,
    Np5                 = 101 /* VK_NP5 */,
    Numpad5             = 101 /* VK_NUMPAD5 */,
    Np6                 = 102 /* VK_NP6 */,
    Numpad6             = 102 /* VK_NUMPAD6 */,
    Np7                 = 103 /* VK_NP7 */,
    Numpad7             = 103 /* VK_NUMPAD7 */,
    Np8                 = 104 /* VK_NP8 */,
    Numpad8             = 104 /* VK_NUMPAD8 */,
    Np9                 = 105 /* VK_NP9 */,
    Numpad9             = 105 /* VK_NUMPAD9 */,
    Mult                = 106 /* VK_MULT */,
    Multiply            = 106 /* VK_MULTIPLY */,
    Add                 = 107 /* VK_ADD */,
    Sep                 = 108 /* VK_SEP */,
    Separator           = 108 /* VK_SEPARATOR */,
    Sub                 = 109 /* VK_SUB */,
    Subtract            = 109 /* VK_SUBTRACT */,
    Dec                 = 110 /* VK_DEC */,
    Decimal             = 110 /* VK_DECIMAL */,
    Div                 = 111 /* VK_DIV */,
    Divide              = 111 /* VK_DIVIDE */,
    F1                  = 112 /* VK_F1 */,
    F2                  = 113 /* VK_F2 */,
    F3                  = 114 /* VK_F3 */,
    F4                  = 115 /* VK_F4 */,
    F5                  = 116 /* VK_F5 */,
    F6                  = 117 /* VK_F6 */,
    F7                  = 118 /* VK_F7 */,
    F8                  = 119 /* VK_F8 */,
    F9                  = 120 /* VK_F9 */,
    F10                 = 121 /* VK_F10 */,
    F11                 = 122 /* VK_F11 */,
    F12                 = 123 /* VK_F12 */,
    F13                 = 124 /* VK_F13 */,
    F14                 = 125 /* VK_F14 */,
    F15                 = 126 /* VK_F15 */,
    F16                 = 127 /* VK_F16 */,
    F17                 = 128 /* VK_F17 */,
    F18                 = 129 /* VK_F18 */,
    F19                 = 130 /* VK_F19 */,
    F20                 = 131 /* VK_F20 */,
    F21                 = 132 /* VK_F21 */,
    F22                 = 133 /* VK_F22 */,
    F23                 = 134 /* VK_F23 */,
    F24                 = 135 /* VK_F24 */,
    Nlock               = 144 /* VK_NLOCK */,
    Numlock             = 144 /* VK_NUMLOCK */,
    Scroll              = 145 /* VK_SCROLL */,
    OemNecEqual         = 146 /* VK_OEM_NEC_EQUAL */,
    OemFjJisho          = 146 /* VK_OEM_FJ_JISHO */,
    OemFjMasshou        = 147 /* VK_OEM_FJ_MASSHOU */,
    OemFjTouroku        = 148 /* VK_OEM_FJ_TOUROKU */,
    OemFjLoya           = 149 /* VK_OEM_FJ_LOYA */,
    OemFjRoya           = 150 /* VK_OEM_FJ_ROYA */,
    Lshift              = 160 /* VK_LSHIFT */,
    Rshift              = 161 /* VK_RSHIFT */,
    Lctrl               = 162 /* VK_LCTRL */,
    Lcontrol            = 162 /* VK_LCONTROL */,
    Rctrl               = 163 /* VK_RCTRL */,
    Rcontrol            = 163 /* VK_RCONTROL */,
    Lalt                = 164 /* VK_LALT */,
    Lmenu               = 164 /* VK_LMENU */,
    Ralt                = 165 /* VK_RALT */,
    Rmenu               = 165 /* VK_RMENU */,
    BrowserBack         = 166 /* VK_BROWSER_BACK */,
    BrowserForward      = 167 /* VK_BROWSER_FORWARD */,
    BrowserRefresh      = 168 /* VK_BROWSER_REFRESH */,
    BrowserStop         = 169 /* VK_BROWSER_STOP */,
    BrowserSearch       = 170 /* VK_BROWSER_SEARCH */,
    BrowserFavorites    = 171 /* VK_BROWSER_FAVORITES */,
    BrowserHome         = 172 /* VK_BROWSER_HOME */,
    VolumeMute          = 173 /* VK_VOLUME_MUTE */,
    VolumeDown          = 174 /* VK_VOLUME_DOWN */,
    VolumeUp            = 175 /* VK_VOLUME_UP */,
    MediaNextTrack      = 176 /* VK_MEDIA_NEXT_TRACK */,
    MediaPrevTrack      = 177 /* VK_MEDIA_PREV_TRACK */,
    MediaStop           = 178 /* VK_MEDIA_STOP */,
    MediaPlayPause      = 179 /* VK_MEDIA_PLAY_PAUSE */,
    LaunchMail          = 180 /* VK_LAUNCH_MAIL */,
    LaunchMediaSelect   = 181 /* VK_LAUNCH_MEDIA_SELECT */,
    LaunchApp1          = 182 /* VK_LAUNCH_APP1 */,
    LaunchApp2          = 183 /* VK_LAUNCH_APP2 */,
    Colon               = 186 /* VK_COLON */,
    OemColon            = 186 /* VK_OEM_COLON */,
    Oem1                = 186 /* VK_OEM_1 */,
    Plus                = 187 /* VK_PLUS */,
    OemPlus             = 187 /* VK_OEM_PLUS */,
    Comma               = 188 /* VK_COMMA */,
    OemComma            = 188 /* VK_OEM_COMMA */,
    Minus               = 189 /* VK_MINUS */,
    OemMinus            = 189 /* VK_OEM_MINUS */,
    Period              = 190 /* VK_PERIOD */,
    OemPeriod           = 190 /* VK_OEM_PERIOD */,
    Slash               = 191 /* VK_SLASH */,
    OemSlash            = 191 /* VK_OEM_SLASH */,
    Oem2                = 191 /* VK_OEM_2 */,
    Tilde               = 192 /* VK_TILDE */,
    Oem3                = 192 /* VK_OEM_3 */,
    Lbrace              = 219 /* VK_LBRACE */,
    OemLbrace           = 219 /* VK_OEM_LBRACE */,
    Oem4                = 219 /* VK_OEM_4 */,
    Bkslash             = 220 /* VK_BKSLASH */,
    OemBkslash          = 220 /* VK_OEM_BKSLASH */,
    Oem5                = 220 /* VK_OEM_5 */,
    Rbrace              = 221 /* VK_RBRACE */,
    OemRbrace           = 221 /* VK_OEM_RBRACE */,
    Oem6                = 221 /* VK_OEM_6 */,
    Apos                = 222 /* VK_APOS */,
    OemApos             = 222 /* VK_OEM_APOS */,
    Oem7                = 222 /* VK_OEM_7 */,
    Oem8                = 223 /* VK_OEM_8 */,
    OemAx               = 225 /* VK_OEM_AX */,
    Oem102              = 226 /* VK_OEM_102 */,
    IcoHelp             = 227 /* VK_ICO_HELP */,
    Ico00               = 228 /* VK_ICO_00 */,
    Processkey          = 229 /* VK_PROCESSKEY */,
    IcoClear            = 230 /* VK_ICO_CLEAR */,
    Packet              = 231 /* VK_PACKET */,
    OemReset            = 233 /* VK_OEM_RESET */,
    OemJump             = 234 /* VK_OEM_JUMP */,
    OemPa1              = 235 /* VK_OEM_PA1 */,
    OemPa2              = 236 /* VK_OEM_PA2 */,
    OemPa3              = 237 /* VK_OEM_PA3 */,
    OemWsctrl           = 238 /* VK_OEM_WSCTRL */,
    OemCusel            = 239 /* VK_OEM_CUSEL */,
    OemAttn             = 240 /* VK_OEM_ATTN */,
    OemFinish           = 241 /* VK_OEM_FINISH */,
    OemCopy             = 242 /* VK_OEM_COPY */,
    OemAuto             = 243 /* VK_OEM_AUTO */,
    OemEnlw             = 244 /* VK_OEM_ENLW */,
    OemBacktab          = 245 /* VK_OEM_BACKTAB */,
    Attn                = 246 /* VK_ATTN */,
    Crsel               = 247 /* VK_CRSEL */,
    Exsel               = 248 /* VK_EXSEL */,
    Ereof               = 249 /* VK_EREOF */,
    Play                = 250 /* VK_PLAY */,
    Zoom                = 251 /* VK_ZOOM */,
    Noname              = 252 /* VK_NONAME */,
    Pa1                 = 253 /* VK_PA1 */,
    OemClear            = 254 /* VK_OEM_CLEAR */,
    AbntC1              = 193,
    AbntC2              = 194,
    Numpad0Dummy        = 134217824,
    NumpadaddDummy      = 134217835,
    ReturnDummy         = 134217741,
    NumpadReturnDummy   = 671088653,
    Fn                  = 268435711,
    NpRet               = 536870925,
    NumpadEnter         = 536870925,
    NumpadReturn        = 536870925

}; // enum class VkCode : std::uint32_t

MARTY_CPP_ENUM_CLASS_SERIALIZE_BEGIN( VkCode, std::map, 1 )
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Rbutton            , "Rbutton"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F                  , "F"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Unknown            , "Unknown"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_7                 , "7"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Junja              , "Junja"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::None               , "None"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Cancel             , "Cancel"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F20                , "F20"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Lbutton            , "Lbutton"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Mbutton            , "Mbutton"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::A                  , "A"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Tab                , "Tab"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::C                  , "C"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Xbutton1           , "Xbutton1"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemFjLoya          , "OemFjLoya"         );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Xbutton2           , "Xbutton2"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Back               , "Back"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_8                 , "8"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Clear              , "Clear"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_1                 , "1"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Snapshot           , "Snapshot"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Enter              , "Enter"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_3                 , "3"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Shift              , "Shift"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Kana               , "Kana"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Ctrl               , "Ctrl"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Alt                , "Alt"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Select             , "Select"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Pause              , "Pause"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::L                  , "L"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Nonconvert         , "Nonconvert"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Capital            , "Capital"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::ImeOn              , "ImeOn"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Final              , "Final"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemFjRoya          , "OemFjRoya"         );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Hanja              , "Hanja"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::ImeOff             , "ImeOff"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::O                  , "O"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Esc                , "Esc"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Convert            , "Convert"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Accept             , "Accept"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Modechange         , "Modechange"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::B                  , "B"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Space              , "Space"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Prior              , "Prior"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::H                  , "H"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Next               , "Next"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Insert             , "Insert"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Print              , "Print"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Delete             , "Delete"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::End                , "End"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Home               , "Home"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_4                 , "4"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Left               , "Left"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::E                  , "E"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Up                 , "Up"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Right              , "Right"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_9                 , "9"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::R                  , "R"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Down               , "Down"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Crsel              , "Crsel"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F10                , "F10"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Execute            , "Execute"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_0                 , "0"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Help               , "Help"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_2                 , "2"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::IcoHelp            , "IcoHelp"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_5                 , "5"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::_6                 , "6"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::D                  , "D"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Lalt               , "Lalt"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::G                  , "G"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::I                  , "I"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::J                  , "J"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::K                  , "K"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Comma              , "Comma"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::M                  , "M"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::N                  , "N"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Bkslash            , "Bkslash"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::P                  , "P"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Q                  , "Q"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::S                  , "S"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::T                  , "T"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::U                  , "U"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::V                  , "V"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::W                  , "W"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::X                  , "X"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Add                , "Add"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Y                  , "Y"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Z                  , "Z"                 );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Lwin               , "Lwin"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Rwin               , "Rwin"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Apps               , "Apps"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Sleep              , "Sleep"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np0                , "Np0"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np1                , "Np1"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np2                , "Np2"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np3                , "Np3"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np4                , "Np4"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np5                , "Np5"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np6                , "Np6"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np7                , "Np7"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np8                , "Np8"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Np9                , "Np9"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemPa2             , "OemPa2"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Minus              , "Minus"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Mult               , "Mult"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Sep                , "Sep"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Sub                , "Sub"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Dec                , "Dec"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Div                , "Div"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F1                 , "F1"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F2                 , "F2"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F3                 , "F3"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F4                 , "F4"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemFjMasshou       , "OemFjMasshou"      );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F5                 , "F5"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F6                 , "F6"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F7                 , "F7"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F8                 , "F8"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F9                 , "F9"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F11                , "F11"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F12                , "F12"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F13                , "F13"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F14                , "F14"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F15                , "F15"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F16                , "F16"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F17                , "F17"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F18                , "F18"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F19                , "F19"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F21                , "F21"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Lshift             , "Lshift"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F22                , "F22"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F23                , "F23"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::F24                , "F24"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Nlock              , "Nlock"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Scroll             , "Scroll"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemNecEqual        , "OemNecEqual"       );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemFjTouroku       , "OemFjTouroku"      );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Rshift             , "Rshift"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Lctrl              , "Lctrl"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Rctrl              , "Rctrl"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Ralt               , "Ralt"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserBack        , "BrowserBack"       );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserForward     , "BrowserForward"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserRefresh     , "BrowserRefresh"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserStop        , "BrowserStop"       );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserSearch      , "BrowserSearch"     );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::LaunchApp1         , "LaunchApp1"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserFavorites   , "BrowserFavorites"  );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::BrowserHome        , "BrowserHome"       );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::VolumeMute         , "VolumeMute"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::VolumeDown         , "VolumeDown"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::VolumeUp           , "VolumeUp"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemCopy            , "OemCopy"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::MediaNextTrack     , "MediaNextTrack"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::MediaPrevTrack     , "MediaPrevTrack"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::MediaStop          , "MediaStop"         );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::MediaPlayPause     , "MediaPlayPause"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::LaunchMail         , "LaunchMail"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Attn               , "Attn"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::LaunchMediaSelect  , "LaunchMediaSelect" );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::LaunchApp2         , "LaunchApp2"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Ereof              , "Ereof"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Colon              , "Colon"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Plus               , "Plus"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Period             , "Period"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Slash              , "Slash"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Tilde              , "Tilde"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Lbrace             , "Lbrace"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Rbrace             , "Rbrace"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Apos               , "Apos"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Oem8               , "Oem8"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemAx              , "OemAx"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Oem102             , "Oem102"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Ico00              , "Ico00"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Processkey         , "Processkey"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::IcoClear           , "IcoClear"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Packet             , "Packet"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemReset           , "OemReset"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemJump            , "OemJump"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemPa1             , "OemPa1"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemPa3             , "OemPa3"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemWsctrl          , "OemWsctrl"         );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemCusel           , "OemCusel"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemAttn            , "OemAttn"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemFinish          , "OemFinish"         );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemAuto            , "OemAuto"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemEnlw            , "OemEnlw"           );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemBacktab         , "OemBacktab"        );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Exsel              , "Exsel"             );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Play               , "Play"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Zoom               , "Zoom"              );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Noname             , "Noname"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Pa1                , "Pa1"               );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::OemClear           , "OemClear"          );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::AbntC1             , "AbntC1"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::AbntC2             , "AbntC2"            );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Numpad0Dummy       , "Numpad0Dummy"      );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::NumpadaddDummy     , "NumpadaddDummy"    );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::ReturnDummy        , "ReturnDummy"       );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::NumpadReturnDummy  , "NumpadReturnDummy" );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::Fn                 , "Fn"                );
    MARTY_CPP_ENUM_CLASS_SERIALIZE_ITEM( VkCode::NpRet              , "NpRet"             );
MARTY_CPP_ENUM_CLASS_SERIALIZE_END( VkCode, std::map, 1 )

MARTY_CPP_ENUM_CLASS_DESERIALIZE_BEGIN( VkCode, std::map, 1 )
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbutton            , "rbutton"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F                  , "f"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Unknown            , "unknown"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_7                 , "7"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_7                 , "key7"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Junja              , "junja"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::None               , "none"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Cancel             , "cancel"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F20                , "f20"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbutton            , "lbutton"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Mbutton            , "mbutton"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::A                  , "a"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Tab                , "tab"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::C                  , "c"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Xbutton1           , "xbutton1"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjLoya          , "oem-fj-loya"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjLoya          , "oem_fj_loya"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjLoya          , "oemfjloya"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Xbutton2           , "xbutton2"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Back               , "back"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_8                 , "8"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_8                 , "key8"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Clear              , "clear"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_1                 , "1"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_1                 , "key1"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Snapshot           , "snapshot"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Enter              , "enter"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Enter              , "return"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_3                 , "3"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_3                 , "key3"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Shift              , "shift"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Kana               , "kana"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Kana               , "hangeul"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Kana               , "hangul"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ctrl               , "ctrl"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ctrl               , "control"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Alt                , "alt"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Alt                , "menu"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Select             , "select"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Pause              , "pause"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::L                  , "l"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Nonconvert         , "nonconvert"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Capital            , "capital"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ImeOn              , "ime-on"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ImeOn              , "ime_on"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ImeOn              , "imeon"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Final              , "final"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjRoya          , "oem-fj-roya"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjRoya          , "oem_fj_roya"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjRoya          , "oemfjroya"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Hanja              , "hanja"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Hanja              , "kanji"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ImeOff             , "ime-off"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ImeOff             , "ime_off"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ImeOff             , "imeoff"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::O                  , "o"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Esc                , "escape"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Esc                , "esc"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Convert            , "convert"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Accept             , "accept"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Modechange         , "modechange"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::B                  , "b"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Space              , "space"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Prior              , "prior"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::H                  , "h"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Next               , "next"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Insert             , "insert"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Print              , "print"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Delete             , "delete"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::End                , "end"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Home               , "home"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_4                 , "4"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_4                 , "key4"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Left               , "left"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Left               , "cursor-left"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Left               , "cursor_left"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Left               , "cursorleft"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::E                  , "e"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Up                 , "up"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Up                 , "cursor-up"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Up                 , "cursor_up"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Up                 , "cursorup"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Right              , "right"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Right              , "cursor-right"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Right              , "cursor_right"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Right              , "cursorright"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_9                 , "9"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_9                 , "key9"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::R                  , "r"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Down               , "down"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Down               , "cursor-down"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Down               , "cursor_down"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Down               , "cursordown"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Crsel              , "crsel"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F10                , "f10"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Execute            , "execute"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_0                 , "0"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_0                 , "key0"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Help               , "help"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_2                 , "2"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_2                 , "key2"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::IcoHelp            , "ico-help"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::IcoHelp            , "ico_help"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::IcoHelp            , "icohelp"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_5                 , "5"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_5                 , "key5"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_6                 , "6"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::_6                 , "key6"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::D                  , "d"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lalt               , "lalt"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lalt               , "lmenu"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::G                  , "g"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::I                  , "i"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::J                  , "j"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::K                  , "k"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Comma              , "comma"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Comma              , "oem-comma"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Comma              , "oem_comma"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Comma              , "oemcomma"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::M                  , "m"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::N                  , "n"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "bkslash"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "oem-bkslash"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "oem5"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "oem_bkslash"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "oem_5"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "oembkslash"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Bkslash            , "oem-5"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::P                  , "p"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Q                  , "q"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::S                  , "s"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::T                  , "t"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::U                  , "u"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::V                  , "v"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::W                  , "w"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::X                  , "x"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Add                , "add"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Y                  , "y"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Z                  , "z"                   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lwin               , "lwin"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rwin               , "rwin"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apps               , "apps"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Sleep              , "sleep"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np0                , "np0"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np0                , "numpad0"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np1                , "np1"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np1                , "numpad1"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np2                , "np2"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np2                , "numpad2"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np3                , "np3"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np3                , "numpad3"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np4                , "np4"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np4                , "numpad4"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np5                , "np5"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np5                , "numpad5"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np6                , "np6"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np6                , "numpad6"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np7                , "np7"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np7                , "numpad7"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np8                , "np8"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np8                , "numpad8"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np9                , "np9"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Np9                , "numpad9"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa2             , "oem-pa2"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa2             , "oem_pa2"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa2             , "oempa2"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Minus              , "minus"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Minus              , "oem-minus"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Minus              , "oem_minus"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Minus              , "oemminus"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Mult               , "mult"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Mult               , "multiply"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Sep                , "sep"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Sep                , "separator"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Sub                , "sub"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Sub                , "subtract"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Dec                , "dec"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Dec                , "decimal"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Div                , "divide"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Div                , "div"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F1                 , "f1"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F2                 , "f2"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F3                 , "f3"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F4                 , "f4"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjMasshou       , "oem-fj-masshou"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjMasshou       , "oem_fj_masshou"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjMasshou       , "oemfjmasshou"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F5                 , "f5"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F6                 , "f6"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F7                 , "f7"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F8                 , "f8"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F9                 , "f9"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F11                , "f11"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F12                , "f12"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F13                , "f13"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F14                , "f14"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F15                , "f15"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F16                , "f16"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F17                , "f17"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F18                , "f18"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F19                , "f19"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F21                , "f21"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lshift             , "lshift"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F22                , "f22"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F23                , "f23"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::F24                , "f24"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Nlock              , "nlock"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Nlock              , "numlock"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Scroll             , "scroll"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemNecEqual        , "oem-nec-equal"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemNecEqual        , "oemnecequal"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemNecEqual        , "oem_nec_equal"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemNecEqual        , "oem-fj-jisho"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemNecEqual        , "oem_fj_jisho"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemNecEqual        , "oemfjjisho"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjTouroku       , "oem-fj-touroku"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjTouroku       , "oem_fj_touroku"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFjTouroku       , "oemfjtouroku"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rshift             , "rshift"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lctrl              , "lctrl"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lctrl              , "lcontrol"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rctrl              , "rctrl"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rctrl              , "rcontrol"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ralt               , "ralt"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ralt               , "rmenu"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserBack        , "browser-back"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserBack        , "browser_back"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserBack        , "browserback"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserForward     , "browser-forward"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserForward     , "browser_forward"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserForward     , "browserforward"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserRefresh     , "browser-refresh"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserRefresh     , "browser_refresh"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserRefresh     , "browserrefresh"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserStop        , "browser-stop"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserStop        , "browser_stop"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserStop        , "browserstop"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserSearch      , "browser-search"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserSearch      , "browser_search"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserSearch      , "browsersearch"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchApp1         , "launch-app1"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchApp1         , "launch_app1"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchApp1         , "launchapp1"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserFavorites   , "browser-favorites"   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserFavorites   , "browser_favorites"   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserFavorites   , "browserfavorites"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserHome        , "browser-home"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserHome        , "browser_home"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::BrowserHome        , "browserhome"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeMute         , "volume-mute"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeMute         , "volume_mute"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeMute         , "volumemute"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeDown         , "volume-down"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeDown         , "volume_down"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeDown         , "volumedown"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeUp           , "volume-up"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeUp           , "volume_up"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::VolumeUp           , "volumeup"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemCopy            , "oem-copy"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemCopy            , "oem_copy"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemCopy            , "oemcopy"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaNextTrack     , "media-next-track"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaNextTrack     , "media_next_track"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaNextTrack     , "medianexttrack"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaPrevTrack     , "media-prev-track"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaPrevTrack     , "mediaprevtrack"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaPrevTrack     , "media_prev_track"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaStop          , "media-stop"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaStop          , "media_stop"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaStop          , "mediastop"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaPlayPause     , "media-play-pause"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaPlayPause     , "media_play_pause"    );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::MediaPlayPause     , "mediaplaypause"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchMail         , "launch-mail"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchMail         , "launch_mail"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchMail         , "launchmail"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Attn               , "attn"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchMediaSelect  , "launch-media-select" );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchMediaSelect  , "launch_media_select" );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchMediaSelect  , "launchmediaselect"   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchApp2         , "launch-app2"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchApp2         , "launch_app2"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::LaunchApp2         , "launchapp2"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ereof              , "ereof"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "colon"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "oem-1"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "oem-colon"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "oem_1"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "oem_colon"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "oem1"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Colon              , "oemcolon"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Plus               , "plus"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Plus               , "oem-plus"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Plus               , "oem_plus"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Plus               , "oemplus"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Period             , "period"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Period             , "oem-period"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Period             , "oem_period"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Period             , "oemperiod"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "oem2"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "slash"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "oem-slash"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "oem_slash"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "oemslash"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "oem-2"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Slash              , "oem_2"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Tilde              , "tilde"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Tilde              , "oem-3"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Tilde              , "oem_3"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Tilde              , "oem3"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "lbrace"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "oem4"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "oem-lbrace"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "oem_lbrace"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "oemlbrace"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "oem-4"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Lbrace             , "oem_4"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "rbrace"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "oem6"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "oem-rbrace"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "oem_rbrace"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "oem_6"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "oemrbrace"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Rbrace             , "oem-6"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "apos"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "oem-7"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "oem-apos"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "oem_7"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "oem_apos"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "oemapos"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Apos               , "oem7"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Oem8               , "oem-8"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Oem8               , "oem_8"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Oem8               , "oem8"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAx              , "oem-ax"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAx              , "oem_ax"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAx              , "oemax"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Oem102             , "oem-102"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Oem102             , "oem_102"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Oem102             , "oem102"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ico00              , "ico-00"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ico00              , "ico_00"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Ico00              , "ico00"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Processkey         , "processkey"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::IcoClear           , "ico-clear"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::IcoClear           , "ico_clear"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::IcoClear           , "icoclear"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Packet             , "packet"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemReset           , "oem-reset"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemReset           , "oem_reset"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemReset           , "oemreset"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemJump            , "oem-jump"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemJump            , "oem_jump"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemJump            , "oemjump"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa1             , "oem-pa1"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa1             , "oem_pa1"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa1             , "oempa1"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa3             , "oem-pa3"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa3             , "oem_pa3"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemPa3             , "oempa3"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemWsctrl          , "oem-wsctrl"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemWsctrl          , "oem_wsctrl"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemWsctrl          , "oemwsctrl"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemCusel           , "oem-cusel"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemCusel           , "oem_cusel"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemCusel           , "oemcusel"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAttn            , "oem-attn"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAttn            , "oem_attn"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAttn            , "oemattn"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFinish          , "oem-finish"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFinish          , "oem_finish"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemFinish          , "oemfinish"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAuto            , "oem-auto"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAuto            , "oem_auto"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemAuto            , "oemauto"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemEnlw            , "oem-enlw"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemEnlw            , "oem_enlw"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemEnlw            , "oemenlw"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemBacktab         , "oem-backtab"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemBacktab         , "oem_backtab"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemBacktab         , "oembacktab"          );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Exsel              , "exsel"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Play               , "play"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Zoom               , "zoom"                );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Noname             , "noname"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Pa1                , "pa1"                 );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemClear           , "oem-clear"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemClear           , "oem_clear"           );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::OemClear           , "oemclear"            );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::AbntC1             , "abnt-c1"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::AbntC1             , "abnt_c1"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::AbntC1             , "abntc1"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::AbntC2             , "abnt-c2"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::AbntC2             , "abnt_c2"             );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::AbntC2             , "abntc2"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Numpad0Dummy       , "numpad0-dummy"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Numpad0Dummy       , "numpad0_dummy"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Numpad0Dummy       , "numpad0dummy"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NumpadaddDummy     , "numpadadd-dummy"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NumpadaddDummy     , "numpadadd_dummy"     );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NumpadaddDummy     , "numpadadddummy"      );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ReturnDummy        , "return-dummy"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ReturnDummy        , "return_dummy"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::ReturnDummy        , "returndummy"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NumpadReturnDummy  , "numpad-return-dummy" );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NumpadReturnDummy  , "numpad_return_dummy" );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NumpadReturnDummy  , "numpadreturndummy"   );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::Fn                 , "fn"                  );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "numpad-return"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "numpad_enter"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "np-ret"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "numpad_return"       );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "np_ret"              );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "numpadenter"         );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "npret"               );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "numpad-enter"        );
    MARTY_CPP_ENUM_CLASS_DESERIALIZE_ITEM( VkCode::NpRet              , "numpadreturn"        );
MARTY_CPP_ENUM_CLASS_DESERIALIZE_END( VkCode, std::map, 1 )

MARTY_CPP_ENUM_CLASS_SERIALIZE_SET(VkCode, std::set)

MARTY_CPP_ENUM_CLASS_DESERIALIZE_SET(VkCode, std::set)

} // virtual_keys
