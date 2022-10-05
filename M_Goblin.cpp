#include "M_Goblin.h"
#include <iostream>

using namespace std;



M_Goblin::M_Goblin()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "M_Goblin";


	cout << "M_Goblin 생성자" << endl;
}

M_Goblin::~M_Goblin()
{
	cout << "M_Goblin 소멸자" << endl;
}

void M_Goblin::Move()
{
	cout << Type << " 이동" << endl;
}

void M_Goblin::Attack()
{
	cout << Type << " 공격" << endl;
}

void M_Goblin::Dead()
{
	cout << Type << " 죽음" << endl;
}

void M_Goblin::DecreaseHP()
{
	cout << Type << " 줄음" << endl;
}
