#ifndef UI_H
#define UI_H

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Img {
	public:
		Img(SDL_Renderer* rend, char* file);
		SDL_Surface *surf; // keep surf just in case
		SDL_Texture *tex;
		void render(SDL_Renderer* rend, int x, int y, int w, int h);
};

#endif
