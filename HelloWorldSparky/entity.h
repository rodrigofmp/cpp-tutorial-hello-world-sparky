#pragma once

//#ifndef CLASS_ENTITY
//#define CLASS_ENTITY

class Entity
{
public:
	static int a;
protected:
	int x, y;
public:
	Entity();
	Entity(int x, int y);

	virtual int getX() const;
	virtual int getY() const;
};

//#endif