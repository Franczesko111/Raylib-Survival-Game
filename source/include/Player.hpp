#pragma once
#include "Global.hpp"

constexpr uint8_t PLAYER_WIDTH = 9;
constexpr uint8_t PLAYER_HEIGHT = 6;

class Player
{
    private:
        enum class AnimationState
        {
            IDLE_STATE,
            MOVING_STATE
        };

        Global::Spritesheet spritesheet;

        Texture2D texture;

        AnimationState state;
        float timer;

        uint16_t x;
        uint16_t y;

        uint8_t frame;
        uint8_t speed;


        void Texture(uint8_t id);
        void Animation();
        void TriggerAnimation(float duration, uint8_t start_frame, uint8_t end_frame);

    public:
        Player();
        void Draw();
        void Update();
};