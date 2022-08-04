#include "Player.h"
#include "Engine.h"

void Player::Tick()
{
	if (GEngine->KeyCode == 'Q' || GEngine->KeyCode == 'q')
	{
		GEngine->Stop();
	}

	if (GEngine->KeyCode == 'W' || GEngine->KeyCode == 'w')
	{

	}
}
