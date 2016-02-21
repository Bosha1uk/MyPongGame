#include "Collisions.h"
#include <windows.h>
#include <gl/gl.h>
#include <math.h>

cCollisions::cCollisions()
{
	
}

cCollisions::~cCollisions()
{
}

bool cCollisions::Detection(cVector2D &obj1, cVector2D &obj2)
{
	float halfwidth1 = obj1.width / 2;
	float halfheight1 = obj1.height / 2;

	float halfwidth2 = obj2.width / 2;
	float halfheight2 = obj2.height / 2;

	// AABB 1
    float x1Min = obj1.x - halfwidth1;
    float x1Max = obj1.x + halfwidth1;
    float y1Max = obj1.y + halfheight1;
    float y1Min = obj1.y - halfheight1;
	float p1blx = x1Min;
	float p1bly = y1Min;
	float p1brx = x1Max;
	float p1bry = y1Min;
	float p1trx = x1Max;
	float p1try = y1Max;
	float p1tlx = x1Min;
	float p1tly = y1Max;

    // AABB 2
    float x2Min = obj2.x - halfwidth2;
    float x2Max = obj2.x + halfwidth2;
    float y2Max = obj2.y + halfheight2;
    float y2Min = obj2.y - halfheight2;
	float p2blx = x2Min;
	float p2bly = y2Min;
	float p2brx = x2Max;
	float p2bry = y2Min;
	float p2trx = x2Max;
	float p2try = y2Max;
	float p2tlx = x2Min;
	float p2tly = y2Max;

	dx = obj2.x - obj1.x;
	dy = obj2.y - obj1.y;
		
	dist = sqrt((dx * dx) + (dy * dy));

	// Collision tests
    if( x1Max < x2Min || x1Min > x2Max ) return false;
    if( y1Max < y2Min || y1Min > y2Max ) return false;

	return true;
}

void cCollisions::Responsex(cVector2D &obj1, cVector2D &obj2, cVector2D &obj2vol)
{
	if(Detection(obj1, obj2) == true)
	{
		obj2vol.x *=-1;
		/*
		if(((obj1.x - (obj1.width / 2)) <= (obj2.x + obj2.width)) && ((obj1.x - (obj1.width / 2)) >= obj2.x))
		{
			obj1.x = obj2.x + obj2.width + (obj1.width / 2);
		}

		if(((obj1.x + (obj1.width / 2)) >= (obj2.x - obj2.width)) && ((obj1.x + (obj1.width / 2)) <= obj2.x))
		{
			obj1.x = obj2.x - obj2.width - (obj1.width / 2);
		}*/
	}
}

/*void cCollisions::Responsey(cVector2D &obj1, cVector2D &obj2, cVector2D &obj2vol))
{
	if(Detection(obj1, obj2) == true)
	{
		if(((obj1.y - (obj1.height / 2)) <= (obj2.y + obj2.height)) && ((obj1.y - (obj1.height / 2)) >= obj2.y))
		{
			obj1.y = obj2.y + obj2.height + (obj1.height / 2);
		}

		if(((obj1.y + (obj1.height / 2)) >= (obj2.y - obj2.height)) && ((obj1.y + (obj1.height / 2)) <= obj2.y))
		{
			obj1.y = obj2.y - obj2.height - (obj1.height / 2);
		}
	}
}*/

