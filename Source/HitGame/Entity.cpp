#include <SFML/Window.hpp>

#include "Entity.h"

Entity::Entity(const std::string& textureFile)
{
	texture.loadFromFile(textureFile);
	sprite.setTexture(texture);
}

Entity::~Entity()
{

}

void Entity::Tick(float DeltaSeconds)
{
}