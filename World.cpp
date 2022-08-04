#include "World.h"
#include <list>
#include <array>
#include <algorithm>
#include <map>
#include <string>

void World::SpawnActor(Actor* NewActor)
{
	ActorList.push_back(NewActor);
}


std::vector<Actor*>::iterator World::DestoryActor(Actor* DeletedActor)
{
	//std::list<int> IntList;
	//std::list<int> IntList;
	//std::array<int, 10> IntArray;
	//std::map<std::string, int> FloatMap;
	//find(IntList.begin(), IntList.end(), 1);
	//find(IntArray.begin(), IntArray.end(), 1);
	//find(FloatMap.begin(), FloatMap.end(), 1);

	return ActorList.erase(find(ActorList.begin(),
		ActorList.end(), DeletedActor));
}
//[][][][]
//[]    []         []      []

//[]
//[]
//[]