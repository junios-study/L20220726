#pragma once
#include "Vector2D.h"
#include "Color.h"

class Actor
{
public:
	Actor() : Shape(' ')
	{
	}

	Actor(int NewX, int NewY) : Shape(' ')
	{
		Location.X = NewX;
		Location.Y = NewY;
	}
	virtual ~Actor() {}

	Vector2D Location;

	char Shape;

	virtual void Tick();
	virtual void Render();

	int SortOrder = 0;

	bool bCollisionEnabled = true;

	Color MyColor;
	
	int Width = 60;
	int Height = 60;

};

