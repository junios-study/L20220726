#pragma once
#include "Actor.h"
#include "Wall.h"

class Player : public Actor
{
public:
	Player()
	{
		Shape = 'P';
		Location.X = 1;
		Location.Y = 1;
	}

	virtual ~Player() {}

	//virtual void Render() override {} 
};

