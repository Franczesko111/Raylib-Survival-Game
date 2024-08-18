#pragma once
#include "common/PCH.hpp"

namespace Global
{
    struct Spritesheet
    {
        Rectangle source;
        Rectangle dest;
        Vector2 origin;
    };

    constexpr uint8_t GAME_SIZE{5};
};