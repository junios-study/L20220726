#include "SDL.h"

#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "SDL2main.lib")

using namespace std;

int SDL_main(int argc, char* argv[])	
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* MyWindow = SDL_CreateWindow("Game", 100, 100, 800, 600, SDL_WINDOW_OPENGL);
	SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, -1, SDL_RENDERER_ACCELERATED |
		SDL_RENDERER_PRESENTVSYNC |
		SDL_RENDERER_TARGETTEXTURE);

	//GPU 명령 리스트 넣기만 
	SDL_SetRenderDrawColor(MyRenderer, 255, 0, 0, 255);
	SDL_RenderClear(MyRenderer);

	SDL_RenderPresent(MyRenderer);
	while (1);

	SDL_DestroyRenderer(MyRenderer);
	SDL_DestroyWindow(MyWindow);
	SDL_Quit();

	return 0;
}