#include "2-file.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <time.h>

int init_instance(SDL_Instance *instance)
{
    // Initialize SDL
  
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
    fprintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
    return (1);
    }

    //   Create  a new window instance
    instance->window = SDL_CreateWindow("SDL2 \\o/", SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED, 1260, 720, 0);

    if (instance->window == NULL)
    {
        fprintf(stderr,"SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return (1);
    }

    instance->renderer = SDL_CreateRenderer(instance->window, -1,
    SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (instance->renderer == NULL)
    {
        SDL_DestroyWindow(instance->window);
        fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        return (1);
    }
    return (0);
}
