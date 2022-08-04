#pragma once
#include "Actor.h"

class Gate : public Actor
{
public:
	Gate()
	{
		Shape = 'G';
		SortOrder = 2;
	}

	Gate(int NewX, int NewY)
	{
		Shape = 'G';
		SortOrder = 2;

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Gate() {}
};

