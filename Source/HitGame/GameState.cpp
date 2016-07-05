#include <SFML/Window.hpp>

#include "GameState.h"
#include "Player.h"

GameState::GameState()
{
	PlayerEntity = new Player();
}

GameState::~GameState()
{
	delete PlayerEntity;
}

void GameState::Tick(float DeltaSeconds)
{
	PlayerEntity->Tick(DeltaSeconds);
}

void GameState::Draw(sf::RenderWindow& window)
{
	window.draw(PlayerEntity->GetSprite());
}