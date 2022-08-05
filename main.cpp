#include "Engine.h"

using namespace std;

int SDL_main(int argc, char* argv[])	
{
	Engine* MyEngine = GEngine->GetInstance();

	MyEngine->LoadMap("level1.txt");
	MyEngine->Run();
	//SDL_SetRenderDrawColor(MyRenderer, 0, 0, 255, 255);
	//SDL_Rect MyRect = { 100, 100, 100, 100 };
	//SDL_RenderFillRect(MyRenderer, &MyRect);

	delete MyEngine;

	return 0;
}