#pragma once

#include <SFML/Graphics.hpp>

class SpriteComponent
{
public:
	SpriteComponent(const std::string& filename);

	sf::Sprite& GetSprite() { return sprite; }

	sf::Texture texture;
	sf::Sprite sprite;
};