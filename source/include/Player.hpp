#pragma once
#include "common/PCH.hpp"

class Player
{
    private:
        uint16_t x;
        uint16_t y;
        uint8_t speed;

    public:
        void Draw();
        void Update();
};