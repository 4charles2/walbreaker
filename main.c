#include <stdio.h>
#include <stdlib.h>
#include "constante.h"

int main(void)
{
    surface screen;
    ft_sdl_init(screen);
    
    SDL_Quit();
    return EXIT_SUCCESS;
}

int ft_sdl_init(surface* screen)
{
	SDL_Init(SDL_INIT_VIDEO);
	screen->screen = SDL_CreateWindow("Walbreker", 0, 0, 640, 760, NULL)
}