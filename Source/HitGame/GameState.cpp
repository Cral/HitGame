#include <SFML/Window.hpp>

#include "GameState.h"
#include "Player.h"
#include "SpriteComponent.h"

GameState::GameState()
{
	PlayerEntity = new Player();
	TestEntity = new Entity("../../Content/grey_box.png");
}

GameState::~GameState()
{
	delete PlayerEntity;
	delete TestEntity;
}

void GameState::Tick(float DeltaSeconds)
{
	PlayerEntity->Tick(DeltaSeconds);
	TestEntity->Tick(DeltaSeconds);
}

void GameState::Draw(sf::RenderWindow& window)
{
	window.draw(PlayerEntity->GetSpriteComponent()->GetSprite());
	window.draw(TestEntity->GetSpriteComponent()->GetSprite());
}