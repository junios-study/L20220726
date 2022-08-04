#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "World.h"
#include <list>
#include <vector>
#include <stack>

int main()
{
	World* MyWorld = new World();

	MyWorld->SpawnActor(new Player());
	MyWorld->SpawnActor(new Monster());

	//range for
	for (Actor* MyActor : MyWorld->ActorList)
	{
		MyActor->Render();
	}


	delete MyWorld;

	return 0;
}