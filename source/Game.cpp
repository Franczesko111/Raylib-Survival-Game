#include "include/Game.hpp"

Game::Game()
{
    player = new Player;
}

Game::~Game()
{
    delete player;
}

void Game::Draw()
{
    player->Draw();
}

void Game::Update()
{
    player->Update();
}