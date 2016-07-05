#pragma once

#include <SFML/Graphics.hpp>

class Entity;

class GameState
{
public:
	GameState();
	~GameState();

	void Tick(float DeltaSeconds);
	void Draw(sf::RenderWindow& window);

private:
	Entity* PlayerEntity;
};