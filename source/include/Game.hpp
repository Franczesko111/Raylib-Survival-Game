#pragma once
#include "Player.hpp"

class Game
{
    private:
        Player *player;

    public:
        Game();
        ~Game();
        void Draw();
        void Update();
};