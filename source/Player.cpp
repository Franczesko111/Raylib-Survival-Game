#include "include/Player.hpp"

void Player::Draw()
{
    DrawRectangle(x, y, 64, 64, RED);
}

void Player::Update()
{
    x += (IsKeyDown(KeyboardKey::KEY_D) - IsKeyDown(KeyboardKey::KEY_A)) * 5;
    y += (IsKeyDown(KeyboardKey::KEY_S) - IsKeyDown(KeyboardKey::KEY_W)) * 5;
}