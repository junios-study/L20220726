#pragma once
#include "Actor.h"


class Wall : public Actor
{
public:
	Wall() 
	{
		Shape = '*';
	}

	Wall(int NewX, int NewY)
	{
		Shape = '*';

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Wall() {}
};

