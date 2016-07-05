#pragma once

#include <windows.h>

class SpriteComponent;

class Entity
{
public:
	Entity(const std::string& textureFile);
	~Entity();

	virtual void Tick(float DeltaSeconds);

	SpriteComponent* GetSpriteComponent() { return Sprite; }

protected:
	SpriteComponent* Sprite;
};