#include "include/Game.hpp"

Game::Game()
{
    player = new Player;

    for(uint8_t x = 0; x < 10; x++) {
        for(uint8_t y = 0; y < 10; y++) {
            tiles.push_back(Tile(x*40, y*40));
        }
    }
}

Game::~Game()
{
    delete player;
}

void Game::Draw()
{
    for(Tile &tile: tiles) tile.Draw();
    player->Draw();
}

void Game::Update()
{
    for(Tile &tile: tiles) tile.Update();
    player->Update();
}