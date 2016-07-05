#include "SpriteComponent.h"

SpriteComponent::SpriteComponent(const std::string& filename)
{
	texture.loadFromFile(filename);
	sprite.setTexture(texture);
}