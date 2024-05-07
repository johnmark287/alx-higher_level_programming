#ifndef _DEMO_H_
#define _DEMO_H_

#include "SDL2/SDL.h"
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

typedef struct SDL_Instance {
  SDL_Window *window;
  SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *);
void draw_stuff(SDL_Instance instance);
int poll_events();

#endif
