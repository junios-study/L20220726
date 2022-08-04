#pragma once
#include "Actor.h"

class Gate : public Actor
{
public:
	Gate()
	{
		Shape = 'G';
	}

	Gate(int NewX, int NewY)
	{
		Shape = 'G';

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Gate() {}
};

