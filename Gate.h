#pragma once
#include "Actor.h"

class Gate : public Actor
{
public:
	Gate()
	{
		Shape = 'G';
	}
	virtual ~Gate() {}
};

