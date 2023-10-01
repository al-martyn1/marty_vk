/*! \file
    \brief Squirrel bindings for marty_draw_context types and interfaces (using al-martyn1/simplesquirrel)
*/

#pragma once


#include <simplesquirrel/simplesquirrel.hpp>

#include <cstdint>
#include <string>
#include <exception>
#include <stdexcept>
#include <functional>
#include <utility>
#include <algorithm>

// 
//
#include "marty_simplesquirrel/simplesquirrel.h"

#include "../VkCode.h"

//----------------------------------------------------------------------------



//----------------------------------------------------------------------------
/*! \def MARTY_DC_BIND_SQUIRREL_ASSERT(expr)
    Проверка условия и аварийный выход (или сообщение с последующим продолжением работы).

    При компиляции под Qt или Win32 будут вызваны соответствующие функции Qt/Windows, отображающие диалог с сообщением об ошибке.

    При компиляции для железа и работе под отладчиком последний должен показать место, где произошел assert.
    \note Не факт что это всегда работает.
*/

#if defined(Q_ASSERT)

    #define MARTY_VK_BIND_SQUIRREL_ASSERT( statement )         Q_ASSERT(statement)

#elif defined(WIN32) || defined(_WIN32)

    #include <winsock2.h>
    #include <windows.h>
    #include <crtdbg.h>

    #define MARTY_VK_BIND_SQUIRREL_ASSERT( statement )         _ASSERTE(statement)

#else

    #include <cassert>

    #define MARTY_VK_BIND_SQUIRREL_ASSERT( statement )         assert(condition) 

#endif


//------------------------------
//! MARTY_VK_BIND_SQUIRREL_ASSERT_FAIL срабатывает всегда, и ставится туда, куда, по идее, никогда попадать не должны
#define MARTY_VK_BIND_SQUIRREL_ASSERT_FAIL()                        MARTY_VK_BIND_SQUIRREL_ASSERT( 0 )

//----------------------------------------------------------------------------



//----------------------------------------------------------------------------
// #if !defined(_SC)
//  
// #endif
//  
// #define _SC(a) L##a
// #define _SC(a) a




//----------------------------------------------------------------------------

// marty_vk::simplesquirrel::
namespace marty_vk {

namespace simplesquirrel {

//----------------------------------------------------------------------------

inline
ssq::sqstring enumsExposeMakeScript(const std::string &prefix = "Vk")
{
    //itemSep = enumSep;
    char itemSep = ';';
    char enumSep = ';';


    ssq::sqstring scriptText = marty_simplesquirrel::to_sqstring(prefix + " <- {}");

    scriptText += marty_simplesquirrel::makeEnumClassScriptString( prefix+".", "Code", ""   , itemSep, enumSep
                                          , KeyEventFlags::NoFlags, KeyEventFlags::Extended, KeyEventFlags::AltDown, KeyEventFlags::Repeat, KeyEventFlags::Up
                                          );


    scriptText += marty_simplesquirrel::makeEnumClassScriptString( prefix+".", "Code", ""   , itemSep, enumSep
                                          , VkCode::Lbutton          , VkCode::Rbutton          , VkCode::Mbutton          , VkCode::Cancel           
                                          , VkCode::Xbutton1         , VkCode::Xbutton2         , VkCode::Back             , VkCode::Tab              
                                          , VkCode::Clear            , VkCode::Enter            , VkCode::Shift            , VkCode::Ctrl             
                                          , VkCode::Alt              , VkCode::Pause            , VkCode::Capital          , VkCode::Kana             
                                          , VkCode::ImeOn            , VkCode::Junja            , VkCode::Final            , VkCode::Kanji            
                                          , VkCode::ImeOff           , VkCode::Esc              , VkCode::Convert          , VkCode::Nonconvert       
                                          , VkCode::Accept           , VkCode::Modechange       , VkCode::Space            , VkCode::Prior            
                                          , VkCode::Next             , VkCode::End              , VkCode::Home             , VkCode::Left             
                                          , VkCode::Up               , VkCode::Right            , VkCode::Down             , VkCode::Select           
                                          , VkCode::Print            , VkCode::Execute          , VkCode::Snapshot         , VkCode::Insert           
                                          , VkCode::Delete           , VkCode::Help             , VkCode::_0               , VkCode::_1               
                                          , VkCode::_2               , VkCode::_3               , VkCode::_4               , VkCode::_5               
                                          , VkCode::_6               , VkCode::_7               , VkCode::_8               , VkCode::_9               
                                          , VkCode::A                , VkCode::B                , VkCode::C                , VkCode::D                
                                          , VkCode::E                , VkCode::F                , VkCode::G                , VkCode::H                
                                          , VkCode::I                , VkCode::J                , VkCode::K                , VkCode::L                
                                          , VkCode::M                , VkCode::N                , VkCode::O                , VkCode::P                
                                          , VkCode::Q                , VkCode::R                , VkCode::S                , VkCode::T                
                                          , VkCode::U                , VkCode::V                , VkCode::W                , VkCode::X                
                                          , VkCode::Y                , VkCode::Z                , VkCode::Lwin             , VkCode::Rwin             
                                          , VkCode::Apps             , VkCode::Sleep            , VkCode::Numpad0          , VkCode::Numpad1          
                                          , VkCode::Numpad2          , VkCode::Numpad3          , VkCode::Numpad4          , VkCode::Numpad5          
                                          , VkCode::Numpad6          , VkCode::Numpad7          , VkCode::Numpad8          , VkCode::Numpad9          
                                          , VkCode::Mult             , VkCode::Add              , VkCode::Sep              , VkCode::Sub              
                                          , VkCode::Dec              , VkCode::Div              , VkCode::F1               , VkCode::F2               
                                          , VkCode::F3               , VkCode::F4               , VkCode::F5               , VkCode::F6               
                                          , VkCode::F7               , VkCode::F8               , VkCode::F9               , VkCode::F10              
                                          , VkCode::F11              , VkCode::F12              , VkCode::F13              , VkCode::F14              
                                          , VkCode::F15              , VkCode::F16              , VkCode::F17              , VkCode::F18              
                                          , VkCode::F19              , VkCode::F20              , VkCode::F21              , VkCode::F22              
                                          , VkCode::F23              , VkCode::F24              , VkCode::Numlock          , VkCode::Scroll           
                                          , VkCode::OemNecEqual      , VkCode::OemFjMasshou     , VkCode::OemFjTouroku     , VkCode::OemFjLoya        
                                          , VkCode::OemFjRoya        , VkCode::Lshift           , VkCode::Rshift           , VkCode::Lctrl            
                                          , VkCode::Rctrl            , VkCode::Lalt             , VkCode::Ralt             , VkCode::BrowserBack      
                                          , VkCode::BrowserForward   , VkCode::BrowserRefresh   , VkCode::BrowserStop      , VkCode::BrowserSearch    
                                          , VkCode::BrowserFavorites , VkCode::BrowserHome      , VkCode::VolumeMute       , VkCode::VolumeDown       
                                          , VkCode::VolumeUp         , VkCode::MediaNextTrack   , VkCode::MediaPrevTrack   , VkCode::MediaStop        
                                          , VkCode::MediaPlayPause   , VkCode::LaunchMail       , VkCode::LaunchMediaSelect, VkCode::LaunchApp1       
                                          , VkCode::LaunchApp2       , VkCode::Colon            , VkCode::Plus             , VkCode::Comma            
                                          , VkCode::Minus            , VkCode::Period           , VkCode::Slash            , VkCode::Tilde            
                                          , VkCode::Lbrace           , VkCode::Bkslash          , VkCode::Rbrace           , VkCode::Apos             
                                          , VkCode::Oem8             , VkCode::OemAx            , VkCode::Oem102           , VkCode::IcoHelp          
                                          , VkCode::Ico00            , VkCode::Processkey       , VkCode::IcoClear         , VkCode::Packet           
                                          , VkCode::OemReset         , VkCode::OemJump          , VkCode::OemPa1           , VkCode::OemPa2           
                                          , VkCode::OemPa3           , VkCode::OemWsctrl        , VkCode::OemCusel         , VkCode::OemAttn          
                                          , VkCode::OemFinish        , VkCode::OemCopy          , VkCode::OemAuto          , VkCode::OemEnlw          
                                          , VkCode::OemBacktab       , VkCode::Attn             , VkCode::Crsel            , VkCode::Exsel            
                                          , VkCode::Ereof            , VkCode::Play             , VkCode::Zoom             , VkCode::Noname           
                                          , VkCode::Pa1              , VkCode::OemClear         , VkCode::AbntC1           , VkCode::AbntC2           
                                          );

    return scriptText;

}

//----------------------------------------------------------------------------

} // namespace simplesquirrel {

} // namespace marty_vk {





