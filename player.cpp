#include "player.h"
#include <windows.h>
#include <gl/gl.h>
#include<gl/glu.h>
#include<stdio.h>
#include<stdlib.h>

GLUquadricObj *Ball;

cBall::cBall()
{
	Ball = gluNewQuadric();
	position.x = 320.0f;
	position.y = 240.0f;

	velocity.x = 1.0f;
	velocity.y = 1.0f;

	size.x = 25.0f;
	size.y = 75.0f;
}

cBall::~cBall()
{
}

void cBall::Draw()
{
	glColor3f(1.0f, 1.0f, 1.0f);
	gluSphere(Ball, 30, 15, 5);
}

void cBall::Move()
{
	position.x += velocity.x;
	position.y += velocity.y;

	if((position.y >= 400.0f) || (position.y <= 80.0f))
	{
		velocity.y *= -1.0f; 
	}

	if((position.x >= 600.0f) || (position.x <= 40.0f))
	{
		velocity.x *= -2.0f;
		velocity.y *= 2.0f;
	}
}
cBoard::cBoard()
{
	position.x = 50.0f;
	position.y = 240.0f;

	velocity.y = 2.0f;
}

cBoard::~cBoard()
{
}

void cBoard::Draw(float r, float g, float b)
{
	Graphics_DrawQuad(position.x,position.y,size.x, size.y, r,g,b,1);
}

void cEnemy::Move()
{
	position.y += velocity.y;

	if((position.y >= 400.0f) || (position.y <= 80.0f))
	{
		velocity.y *= -1.0f; 
	}
}





