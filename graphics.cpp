#include "graphics.h"
#include "SDL/SDL_Opengl.h"

void Graphics_Init(int w, int h)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, w, 0.0, h);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 
    glEnable(GL_BLEND); 
}

void Graphics_ClearScreen()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void Graphics_DrawQuad(float x, float y, float w, float h, float r, float g, float b, float a)
{
	glDisable(GL_TEXTURE_2D);
	glColor4f(r, g, b, a);
	glPolygonMode(GL_FRONT, GL_FILL);
    glBegin(GL_QUADS);
        glVertex2f(x-w/2, y-h/2);
        glVertex2f(x+w/2, y-h/2);
        glVertex2f(x+w/2, y+h/2);
        glVertex2f(x-w/2, y+h/2);
    glEnd();
}


