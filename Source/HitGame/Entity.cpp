#include <SFML/Window.hpp>

#include "Entity.h"
#include "SpriteComponent.h"

Entity::Entity(const std::string& textureFile)
{
	Sprite = new SpriteComponent(textureFile);
}

Entity::~Entity()
{

}

void Entity::Tick(float DeltaSeconds)
{
}