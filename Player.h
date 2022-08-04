#pragma once
#include "Actor.h"
#include "Wall.h"

class Player : public Actor
{
public:
	Player()
	{
		Shape = 'P';
		SortOrder = 3;
		Location.X = 1;
		Location.Y = 1;
	}

	Player(int NewX, int NewY)
	{
		Shape = 'P';
		SortOrder = 3;

		Location.X = NewX;
		Location.Y = NewY;
	}

	virtual ~Player() {}

	//virtual void Render() override {} 
};

