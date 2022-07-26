#include "World.h"

void World::SpawnActor(Actor* NewActor)
{
	ActorList.push_back(NewActor);
}
