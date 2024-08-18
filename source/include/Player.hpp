#pragma once
#include "Global.hpp"
#include <stdio.h>

constexpr uint8_t PLAYER_WIDTH = 9;
constexpr uint8_t PLAYER_HEIGHT = 6;

class Player
{
    private:
        Global::Spritesheet spritesheet;

        Texture2D texture;

        uint16_t x;
        uint16_t y;

        uint8_t speed;


        void Texture(uint8_t id);

    public:
        Player();
        void Draw();
        void Update();
};