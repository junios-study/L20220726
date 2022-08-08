#include "Monster.h"
#include "Engine.h"
#include "World.h"

//#define UP			0
//#define LEFT			1
//#define Down			2
//#define Right			3

enum class EDirection : int
{
	UP = 0,
	LEFT = 1,
	Down = 2,
	Right = 3,
};

void Monster::Tick()
{
	ElapsedTime += GEngine->MyWorld->DeltaSeconds;

	if (ElapsedTime >= ProcessTime)
	{
		ElapsedTime = 0;

		EDirection Direction = static_cast<EDirection>(rand() % 4);

		if (Direction == EDirection::UP)
		{
			if (Predict(Location.X, Location.Y - 1))
			{
				Location.Y--;
			}
		}
		if (Direction == EDirection::LEFT)
		{
			if (Predict(Location.X - 1, Location.Y))
			{
				Location.X--;
			}

		}
		if (Direction == EDirection::Down)
		{
			if (Predict(Location.X, Location.Y + 1))
			{
				Location.Y++;
			}
		}
		if (Direction == EDirection::Right)
		{
			if (Predict(Location.X + 1, Location.Y))
			{
				Location.X++;
			}
		}
	}
}
