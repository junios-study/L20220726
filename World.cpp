#include "World.h"
#include "Actor.h"

World::World()
{
}

World::~World()
{
	for (auto Current : ActorList)
	{
		DestoryActor(Current);
	}
}

void World::SpawnActor(Actor* NewActor)
{
	ActorList.push_back(NewActor);
}


std::vector<Actor*>::iterator World::DestoryActor(Actor* DeletedActor)
{
	return ActorList.erase(find(ActorList.begin(),
		ActorList.end(), DeletedActor));
}

void World::Tick()
{
	for (Actor* MyActor : ActorList)
	{
		MyActor->Tick();
	}
}

void World::Render()
{
	for (Actor* MyActor : ActorList)
	{
		MyActor->Render();
	}
}
//[][][][]
//[]    []         []      []

//[]
//[]
//[]