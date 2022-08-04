#include <iostream>
#include <fstream>
#include "Engine.h"
#include "World.h"
#include "Player.h"
#include "Monster.h"
#include "Gate.h"
#include "Floor.h"

Engine::Engine()
{
	MyWorld = nullptr;
}

Engine::~Engine()
{
	delete MyWorld;
}

void Engine::LoadMap()
{
	MyWorld = new World();

	std::ifstream ReadFileStream;
	ReadFileStream.open("level1.txt");
	if (ReadFileStream.is_open())
	{
		int Y = 0;
		while (!ReadFileStream.eof())
		{
			char Temp[256];
			ReadFileStream.getline(Temp, 256);
			
			int X = 0;
			while (X < strlen(Temp))
			{
				if (Temp[X] == '*')
				{
					MyWorld->SpawnActor(new Wall(X, Y));
				}
				else if (Temp[X] == 'P')
				{
					MyWorld->SpawnActor(new Player(X, Y));
				}
				else if (Temp[X] == 'M')
				{
					MyWorld->SpawnActor(new Monster(X, Y));
				}
				else if (Temp[X] == 'G')
				{
					MyWorld->SpawnActor(new Gate(X, Y));
				}
				MyWorld->SpawnActor(new Floor(X, Y));
				X++;
			}
			Y++;
		}
	}
	ReadFileStream.close();
}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		MyWorld->Tick();
		MyWorld->Render();
	}
}

void Engine::Stop()
{
	bIsRunning = false;
}

void Engine::Input()
{
}
