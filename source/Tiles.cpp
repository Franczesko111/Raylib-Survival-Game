#include "include/Tiles.hpp"


// PUBLIC
Tile::Tile(uint16_t x, uint16_t y) : x(x), y(y)
{
    texture = LoadTexture("assets/images/Tiles.png");
}

void Tile::Draw()
{
    Texture();
    DrawTexturePro(texture, spritesheet.source, spritesheet.dest, spritesheet.origin, 0.0f, WHITE);
}

void Tile::Update()
{

}

// PRIVATE
void Tile::Texture()
{
    spritesheet.source = Rectangle{ 0, 0, TILE_SIZE, TILE_SIZE };
    spritesheet.dest = Rectangle{ (float)x, (float)y, spritesheet.source.width * Global::GAME_SIZE, spritesheet.source.height * Global::GAME_SIZE };
}