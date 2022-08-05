#include "Texture.h"
#include "Engine.h"

Texture::Texture(std::string Filename)
{
	//for cpu
	MySurface = SDL_LoadBMP(Filename.c_str());
	//for gpu
	MyTexture = SDL_CreateTextureFromSurface(GEngine->MyRenderer,
		MySurface);
}

Texture::~Texture()
{
	SDL_DestroyTexture(MyTexture);
	SDL_FreeSurface(MySurface);
}
