#include "sdl/sdl.h"
#include "lib/system.h"
#include "lib/graphics.h"
#include "game.h"

int main(int argc, char *argv[]) 
{
	int windowWidth = 640;
	int windowHeight = 480;

	Sys_Init(windowWidth, windowHeight);
	
	Graphics_Init(windowWidth, windowHeight);

	// game update
	bool finished = false;
	while(!finished)
	{
		// pump SDL events
		SDL_Event event;
		while(SDL_PollEvent(&event)) 
		{
			if(event.type == SDL_QUIT)
				finished = true;
		}

		// Game display
		{
			Game_Update();
			SDL_GL_SwapBuffers();
		}
	}

	SDL_Quit();
	return 0;
}