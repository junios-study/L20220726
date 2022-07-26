#pragma once
#include "Actor.h"

class Monster : public Actor
{
public:
	Monster()
	{
		Shape = 'M';
		Location.X = 6;
		Location.Y = 6;
	}
	virtual ~Monster() {}
};

