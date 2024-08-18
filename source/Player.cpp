#include "include/Player.hpp"


// PUBLIC
Player::Player()
{
    texture = LoadTexture("assets/images/Player.png");
}

void Player::Draw()
{
    for(uint8_t i = 0; i < 3; i++) {
        Texture(i);
        DrawTexturePro(texture, spritesheet.source, spritesheet.dest, spritesheet.origin, 0.0f, WHITE);
    }
}

void Player::Update()
{
    x += (IsKeyDown(KeyboardKey::KEY_D) - IsKeyDown(KeyboardKey::KEY_A)) * 5;
    y += (IsKeyDown(KeyboardKey::KEY_S) - IsKeyDown(KeyboardKey::KEY_W)) * 5;
}

// PRIVATE
void Player::Texture(uint8_t id)
{
    spritesheet.source = Rectangle{ (float)PLAYER_WIDTH * id, (float)PLAYER_HEIGHT * id, PLAYER_WIDTH, PLAYER_HEIGHT };
    spritesheet.dest = Rectangle{ (float)x, (float)y + ((id * 5) - 2) * Global::GAME_SIZE, spritesheet.source.width * Global::GAME_SIZE, spritesheet.source.height * Global::GAME_SIZE };
}