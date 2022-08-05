#pragma once
#include "Actor.h"

class Floor : public Actor
{
public:
	Floor() 
	{
		Shape = ' ';
		SortOrder = 1;
		bCollisionEnabled = false;
		MyColor = { 128, 128, 128, 255 };
	}
	Floor(int NewX, int NewY)
	{
		Shape = ' ';
		SortOrder = 1;
		bCollisionEnabled = false;
		MyColor = { 128, 128, 128, 255 };

		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Floor() {}
};

