#include "Player.h"
#include "Engine.h"
#include "World.h"


void Player::Tick()
{
	if (GEngine->MyEvent.type != SDL_KEYDOWN)
	{
		return;
	}

	SDL_Keysym KeyCode = GEngine->MyEvent.key.keysym;
	if (KeyCode.sym == SDLK_q ||
		KeyCode.sym == SDLK_ESCAPE)
	{
		GEngine->Stop();
	}

	if (KeyCode.sym == SDLK_w)
	{
		if (Predict(Location.X, Location.Y - 1))
		{
			Location.Y--;
		}
	}
	if (KeyCode.sym == SDLK_a)
	{
		if (Predict(Location.X - 1, Location.Y))
		{
			Location.X--;
		}

	}
	if (KeyCode.sym == SDLK_s)
	{
		if (Predict(Location.X, Location.Y + 1))
		{
			Location.Y++;
		}
	}
	if (KeyCode.sym == SDLK_d)
	{
		if (Predict(Location.X + 1, Location.Y))
		{
			Location.X++;
		}
	}
}

bool Player::Predict(int NewX, int NewY)
{
	for (auto CurrentActor : GEngine->MyWorld->ActorList)
	{
		if (CurrentActor->bCollisionEnabled &&
			CurrentActor->Location.X == NewX &&
			CurrentActor->Location.Y == NewY)
		{
			return false;
		}
	}

	return true;
}
