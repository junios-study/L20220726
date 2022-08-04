#include "Engine.h"


//Simple is best.
int main()
{
	Engine* MyEngine = new Engine();

	MyEngine->LoadMap();
	MyEngine->Run();

	delete MyEngine;

	return 0;
}