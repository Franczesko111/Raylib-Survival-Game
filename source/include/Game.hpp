#pragma once
#include "Player.hpp"
#include "Tiles.hpp"

class Game
{
    private:
        Player *player;
        std::vector<Tile> tiles;

    public:
        Game();
        ~Game();
        void Draw();
        void Update();
};