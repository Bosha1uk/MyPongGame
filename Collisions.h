#ifndef _C_COLLISIONS
#define _C_COLLISIONS

#include "lib/Vector2D.h"

class cCollisions
{
public:
	cCollisions();
	~cCollisions();
	bool Detection(cVector2D &obj1, cVector2D &obj2);
	void Responsex(cVector2D &obj1, cVector2D &obj2, cVector2D &obj2vol);
	void Responsey(cVector2D &obj1, cVector2D &obj2, cVector2D &obj2vol);
	float dx;
	float dy;
	float dist;
};

#endif