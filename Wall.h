#pragma once
#include "Actor.h"


class Wall : public Actor
{
public:
	Wall() 
	{
		Shape = '*';
		SortOrder = 2;
	}

	Wall(int NewX, int NewY)
	{
		Shape = '*';
		SortOrder = 2;

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Wall() {}
};

