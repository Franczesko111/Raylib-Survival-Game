#pragma once
#include "Global.hpp"

constexpr uint8_t TILE_SIZE = 8;

class Tile
{
    private:
        Global::Spritesheet spritesheet;

        Texture2D texture;

        uint16_t x;
        uint16_t y;


        void Texture();

    public:
        Tile(uint16_t x, uint16_t y);
        void Draw();
        void Update();
};