#pragma once
#include "Actor.h"


class Wall : public Actor
{
public:
	Wall() 
	{
		Shape = '*';
		SortOrder = 2;
		bCollisionEnabled = true;
		MyColor = { 0, 255, 0, 255 };

	}

	Wall(int NewX, int NewY)
	{
		Shape = '*';
		SortOrder = 2;
		bCollisionEnabled = true;
		MyColor = { 0, 255, 0, 255 };


		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Wall() {}
};

