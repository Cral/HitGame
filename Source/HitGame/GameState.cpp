#include <SFML/Window.hpp>

#include "GameState.h"

GameState::GameState()
{
	texture.loadFromFile("../../Content/box.png");
	sprite.setTexture(texture);
}

GameState::~GameState()
{

}

void GameState::Tick(float DeltaSeconds)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		sprite.move(-100.0f * DeltaSeconds, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		sprite.move(100.0f * DeltaSeconds, 0.0f);
	}
}

void GameState::Draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}