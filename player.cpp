#include "player.h"
#include <windows.h>
#include <gl/gl.h>
#include<gl/glu.h>
#include<stdio.h>
#include<stdlib.h>

cBoard::cBoard()
{
	position.x = 50.0f;
	position.y = 240.0f;

	velocity.y = 2.0f;
	velocity.x = 2.0f;

	position.width = 25.0f;
	position.height = 75.0f;
}

cBoard::~cBoard()
{
}

void cBoard::Draw(float r, float g, float b)
{
	Graphics_DrawQuad(position.x,position.y,position.width, position.height, r,g,b,1);
}

cEnemy::cEnemy()
{
	position.x = 590.0f;
	position.y = 240.0f;

	velocity.y = 2.0f;

	position.width = 25.0f;
	position.height = 75.0f;
}

cEnemy::~cEnemy()
{
}

void cEnemy::Move()
{

	position.y += velocity.y;

	if(position.y >= balls.position.y)
	{
		velocity.y = -3.0f; 
	}
	if(position.y < balls.position.y)
	{
		velocity.y = 3.0f; 
	}
}

cBall::cBall()
{
	position.x = 320.0f;
	position.y = 240.0f;

	velocity.x = 4.0f;
	velocity.y = 2.0f;

	position.width = 10.0f;
	position.height = 10.0f;
}

cBall::~cBall()
{
}

void cBall::Move()
{
	position.x += velocity.x;
	position.y += velocity.y;

	/*if((position.x >= 600.0f) || (position.x <= 40.0f))
	{
		velocity.x *= -1.02f; 
	}
	*/
	if((position.y >= 440.0f) || (position.y <= 40.0f))
	{
		velocity.y *= -1.05f; 
	}

	if(position.x >= 600.0f)
	{
		score += 1;
		position.x = 65.0f;
		position.y = 240.0;
		velocity.x = 0.0f;
		velocity.y = 0.0f;
	}
}





