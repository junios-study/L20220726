#pragma once
#include "SDL.h"
#include <string>

class Texture
{
public:
	Texture(std::string Filename);
	virtual ~Texture();

	SDL_Surface* MySurface;
	SDL_Texture* MyTexture;
};

