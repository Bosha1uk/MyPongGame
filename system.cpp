#include "system.h"
#include "SDL\SDL.h"

bool Sys_Init(int w, int h)
{
	// inititialise SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0) 
	{
		SDL_Quit();
		return false;
	}

	// Initialise window
	SDL_WM_SetCaption("GrubbyHands Template", NULL);
	SDL_EnableUNICODE(1);

	// initialise video mode
	if(SDL_SetVideoMode(w, h, 0, SDL_OPENGL | SDL_DOUBLEBUF | SDL_HWSURFACE) == NULL) 
	{
		SDL_Quit();
		return false;
	}

	return true;
}