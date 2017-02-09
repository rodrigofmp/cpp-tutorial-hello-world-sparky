#include "player.h"

Player::Player()
	: Entity(50, 60)
{

}

int Player::getX() const
{
	return Entity::getX();
}