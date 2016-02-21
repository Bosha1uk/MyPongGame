#ifndef _PLAYER
#define _PLAYER

#include "Vector2D.h"
#include "graphics.h"
#include "Collisions.h"

class cBoard
{
public:
	cBoard();
	~cBoard();
	
	cCollisions boardcoll;
	cVector2D position; //The 2D position of the object (x and y)
	cVector2D velocity; //The speed of the object (x and y)
	int score;

	void Draw(float r, float g, float b); //Draws the character
};

class cBall : public cBoard
{
public:
	cBall();
	~cBall();
	void Move();
};

class cEnemy : public cBoard
{
public:
	cEnemy();
	~cEnemy();

	cBall balls;
	void Move();
};

#endif