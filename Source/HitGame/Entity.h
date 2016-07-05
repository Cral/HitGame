#pragma once

#include <SFML/Graphics.hpp>

class Entity
{
public:
	Entity(const std::string& textureFile);
	~Entity();

	virtual void Tick(float DeltaSeconds);

	sf::Sprite& GetSprite() { return sprite; }

protected:
	sf::Texture texture;
	sf::Sprite sprite;
};