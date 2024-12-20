#ifndef SCENE_H
#define SCENE_H

#include <SDL2/SDL.h>
#include <functional>

extern std::function<void(SDL_Renderer*, std::vector<SDL_Event>, int, int)> scene;

void testScene1(SDL_Renderer *rend, std::vector<SDL_Event> events, int mouse_x, int mouse_y);
void testScene2(SDL_Renderer *rend, std::vector<SDL_Event> events, int mouse_x, int mouse_y);

#endif
