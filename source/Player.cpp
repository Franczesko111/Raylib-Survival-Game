#include "include/Player.hpp"


// PUBLIC
Player::Player()
{
    texture = LoadTexture("assets/images/Player.png");
    timer = 0.0f;
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

    Animation();
}

// PRIVATE
void Player::Texture(uint8_t id)
{
    uint8_t local_frame = 0;
    if(id == 2) local_frame = frame;
    else local_frame = 0;

    spritesheet.source = Rectangle{ (float)(PLAYER_WIDTH * (id + local_frame)), (float)PLAYER_HEIGHT * id, PLAYER_WIDTH, PLAYER_HEIGHT };
    spritesheet.dest = Rectangle{ (float)x, (float)y + ((id * 5) - 2) * Global::GAME_SIZE, spritesheet.source.width * Global::GAME_SIZE, spritesheet.source.height * Global::GAME_SIZE };
}

void Player::Animation()
{
    if(IsKeyDown(KeyboardKey::KEY_A) || IsKeyDown(KeyboardKey::KEY_D) || IsKeyDown(KeyboardKey::KEY_S) || IsKeyDown(KeyboardKey::KEY_W))
        state = AnimationState::MOVING_STATE;
    else
        state = AnimationState::IDLE_STATE;

    switch(state)
    {
        case AnimationState::MOVING_STATE:  TriggerAnimation(0.3f, 1, 3); break;
        default:                            timer = 0.0f; frame = 0; break;
    }
}

void Player::TriggerAnimation(float duration, uint8_t start_frame, uint8_t end_frame)
{
    if(timer == 0.0f) {
        timer = duration;
        frame = start_frame;
    }
    timer -= GetFrameTime();
    if(timer < 0.0f) {
        timer = duration;
        frame++;
        if(frame == end_frame) frame = start_frame;
    }
}