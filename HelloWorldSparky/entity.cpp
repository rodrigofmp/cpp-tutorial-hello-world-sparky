#include "entity.h"

int Entity::a = 888;

Entity::Entity()
{
	this->x = 0;
	this->y = 0;
}

Entity::Entity(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Entity::getX() const
{
	return x;
}

int Entity::getY() const
{
	return y;
}

