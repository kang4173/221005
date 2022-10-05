#include "World.h"


World::World()
{
}

World::World(int inPlayer, int inMonster, int inXY)
{
	Player = inPlayer;
	Monster = inMonster;
	XY[10][10] = inXY;
}
