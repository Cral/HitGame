#include "Player.h"

Player::Player() 
	: Entity("../../Content/box.png")
{

}

Player::~Player()
{

}

void Player::Tick(float DeltaSeconds)
{
	Entity::Tick(DeltaSeconds);

	sf::Vector2f Move = sf::Vector2f(0.0f, 0.0f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		Move.x -= 1.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		Move.x += 1.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		Move.y -= 1.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		Move.y += 1.0f;
	}

	float Length = sqrt((Move.x * Move.x) + (Move.y * Move.y));

	if (Length > 0.0f)
	{
		Move.x = Move.x / Length;
		Move.y = Move.y / Length;

		sprite.move(Move * 100.0f * DeltaSeconds);
	}
}