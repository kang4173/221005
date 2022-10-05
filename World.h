#pragma once

class World
{
public:
	World();
	World(int inPlayer, int inMonster, int inXY);

	int Player;
	int Monster;
	int XY[10][10];
};
