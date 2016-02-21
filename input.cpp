#include "SDL\SDL.h"
#include "input.h"

bool Input_Up()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_UP] || keystate[SDLK_w];
}

bool Input_Down()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_DOWN] || keystate[SDLK_s];
}

bool Input_Left()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_LEFT] || keystate[SDLK_a];
}

bool Input_Right()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_RIGHT] || keystate[SDLK_d];
}

bool Input_Space()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_SPACE] == 1;
}

bool Input_Enter()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_RETURN] == 1;
}

bool Input_PageUp()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_PAGEUP] == 1;
}

bool Input_PageDown()
{
	Uint8* keystate = SDL_GetKeyState(NULL);
	return keystate[SDLK_PAGEDOWN] == 1;
}