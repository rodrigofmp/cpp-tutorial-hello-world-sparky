#pragma once

#include "entity.h"

class Player : public Entity
{
public:
	Player();
	int getX() const;
};
