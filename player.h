#ifndef _PLAYER
#define _PLAYER

#include "Vector2D.h"
#include "graphics.h"


class cBall
{
public:
	cBall();
	~cBall();
	cVector2D position; //The 2D position of the ball (x and y)
	cVector2D size;
	cVector2D velocity; //The speed of the ball (x and y)
	
	void Draw();
	void Move();
};

class cBoard
{
public:
	cBoard();
	~cBoard();
	
	cVector2D position; //The 2D position of the object (x and y)
	cVector2D velocity; //The speed of the object (x and y)
	cVector2D size; //The size of the object (x and y)

	void Draw(float r, float g, float b); //Draws the character
};

class cEnemy : public cBoard
{
public:
	void Move();
};

#endif
