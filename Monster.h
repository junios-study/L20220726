#pragma once
#include "Actor.h"

class Monster : public Actor
{
public:
	Monster()
	{
		Shape = 'M';
		SortOrder = 4;

		Location.X = 6;
		Location.Y = 6;
	}


	Monster(int NewX, int NewY)
	{
		Shape = 'M';
		SortOrder = 4;

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Monster() {}
};

