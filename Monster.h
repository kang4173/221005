#pragma once
class Monster
{
public:
	Monster();
	Monster(int inM_Slime, int inM_Hog, int inM_Goblin, int inM_Attack, int inM_Move);

	int M_Slime;
	int M_Hog;
	int M_Goblin;
	int M_Attack;
	int M_Move;

};

// 몬스터 =  슬라임, 멧돼지, 고블린, 플레이어공격, 4방위이동