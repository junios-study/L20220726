#pragma once
class World;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	World* MyWorld;

	void LoadMap();
	void Run();

	void Stop();

	void Input();

	bool bIsRunning = true;
};

