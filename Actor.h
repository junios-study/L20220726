#pragma once
#include "Vector2D.h"

//abstract class 
class Actor
{
public:
	Actor() : Shape(' ')
	{
	}
	virtual ~Actor() {}

	//has a 
	Vector2D Location;

	char Shape;

	//interface °­Á¦
	//pure virtual function
	//virtual void Render() = 0;
	virtual void Render();

};

