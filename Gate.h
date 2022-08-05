#pragma once
#include "Actor.h"

class Gate : public Actor
{
public:
	Gate()
	{
		Shape = 'G';
		SortOrder = 2;
		bCollisionEnabled = false;
		MyColor = { 141, 87, 58, 255 };
	}

	Gate(int NewX, int NewY)
	{
		Shape = 'G';
		SortOrder = 2;
		bCollisionEnabled = false;
		MyColor = { 141, 87, 58, 255 };


		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Gate() {}
};

