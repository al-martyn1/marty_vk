#pragma once

#include "marty_cpp/marty_enum.h"
#include "marty_cpp/marty_flag_ops.h"
#include "marty_cpp/marty_flags.h"

#include <exception>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>



namespace marty_vk{

enum class KeyEventFlags : std::uint32_t
{
    Invalid    = (std::uint32_t)(-1),
    Unknown    = (std::uint32_t)(-1),
    NoFlags    = 0x0000,
    Extended   = 0x0100,
    AltDown    = 0x2000,
    Repeat     = 0x4000,
    Up         = 0x8000

}; // enum class KeyEventFlags : std::uint32_t

MARTY_CPP_MAKE_ENUM_FLAGS(KeyEventFlags)

MARTY_CPP_ENUM_FLAGS_SERIALIZE_BEGIN( KeyEventFlags, std::map, 1 )
    MARTY_CPP_ENUM_FLAGS_SERIALIZE_ITEM( KeyEventFlags::Up         , "Up"       );
    MARTY_CPP_ENUM_FLAGS_SERIALIZE_ITEM( KeyEventFlags::AltDown    , "AltDown"  );
    MARTY_CPP_ENUM_FLAGS_SERIALIZE_ITEM( KeyEventFlags::Extended   , "Extended" );
    MARTY_CPP_ENUM_FLAGS_SERIALIZE_ITEM( KeyEventFlags::Invalid    , "Invalid"  );
    MARTY_CPP_ENUM_FLAGS_SERIALIZE_ITEM( KeyEventFlags::NoFlags    , "NoFlags"  );
    MARTY_CPP_ENUM_FLAGS_SERIALIZE_ITEM( KeyEventFlags::Repeat     , "Repeat"   );
MARTY_CPP_ENUM_FLAGS_SERIALIZE_END( KeyEventFlags, std::map, 1 )

MARTY_CPP_ENUM_FLAGS_DESERIALIZE_BEGIN( KeyEventFlags, std::map, 1 )
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::Up         , "up"       );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::AltDown    , "alt-down" );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::AltDown    , "alt_down" );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::AltDown    , "altdown"  );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::Extended   , "extended" );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::Invalid    , "invalid"  );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::Invalid    , "unknown"  );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::NoFlags    , "no-flags" );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::NoFlags    , "no_flags" );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::NoFlags    , "noflags"  );
    MARTY_CPP_ENUM_FLAGS_DESERIALIZE_ITEM( KeyEventFlags::Repeat     , "repeat"   );
MARTY_CPP_ENUM_FLAGS_DESERIALIZE_END( KeyEventFlags, std::map, 1 )

MARTY_CPP_ENUM_FLAGS_SERIALIZE_SET(KeyEventFlags, std::set)

MARTY_CPP_ENUM_FLAGS_DESERIALIZE_SET(KeyEventFlags, std::set)

} // namespace marty_vk

