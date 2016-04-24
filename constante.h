/*
 * constante.h
 *
 * pour le jeu walbreaker
 * tognol charles
 * fourni toutes les structs et complement des fichiers
 * */
#ifndef
    typedef struct surface surface;
    struct surface
    {
        SDL_Window* screen;
        pos pos;
        surface* =  next;
    };
    typedef surface* display;
    typedef struct position first;
    struct position
    {
    	SDL_Rect position
    	position* next;
    };
    typedef position *pos;
#endif
