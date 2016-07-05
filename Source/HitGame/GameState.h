#pragma once

#include <SFML/Graphics.hpp>

class GameState
{
public:
	GameState();
	~GameState();

	void Tick(float DeltaSeconds);
	void Draw(sf::RenderWindow& window);

private:
	sf::Texture texture;
	sf::Sprite sprite;
};