#include "game.h"
#include <stdlib.h>
#include "lib/graphics.h"
#include "lib/input.h"
#include "lib/Player.h"


cBoard player;
cEnemy enemy;

float RandomFloat()
{
	return rand() / (float)RAND_MAX;
}

void Game_Init()
{
	player.velocity.y = 5.0f;
}

void Game_Update()
{
	// test edit,

	Game_Init();

	Graphics_ClearScreen();
	
	if(Input_Up())		
	{
		player.position.y += player.velocity.y;
	}

	if(Input_Down())
	{
		player.position.y -= player.velocity.y;
	}

	if(Input_Left())
	{

	}

	if(Input_Right())
	{

	}
	
	if(Input_PageUp())
	{

	}

	if(Input_PageDown())
	{
		
	}

	if(Input_Enter())	
	{
				
	}

	if(Input_Space())	
	{

	}

	player.Draw(1.0f, 0.0f, 0.0f);
	enemy.Draw(0.0f, 1.0f, 0.0f);
	enemy.balls.Draw(1.0f, 1.0f, 1.0f);

	enemy.Move();
	enemy.balls.Move();
	enemy.boardcoll.Detection(player.position, enemy.balls.position);
	enemy.boardcoll.Responsex(player.position, enemy.balls.position, enemy.balls.velocity);
	enemy.boardcoll.Detection(enemy.position, enemy.balls.position);
	enemy.boardcoll.Responsex(enemy.position, enemy.balls.position, enemy.balls.velocity);

}