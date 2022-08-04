#pragma once
#include "Actor.h"

class Floor : public Actor
{
public:
	Floor() 
	{
		Shape = ' ';
	}
	Floor(int NewX, int NewY)
	{
		Shape = ' ';

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Floor() {}
};

