#include "M_Goblin.h"
#include <iostream>

using namespace std;



M_Goblin::M_Goblin()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "M_Goblin";


	cout << "M_Goblin ������" << endl;
}

M_Goblin::~M_Goblin()
{
	cout << "M_Goblin �Ҹ���" << endl;
}

void M_Goblin::Move()
{
	cout << Type << " �̵�" << endl;
}

void M_Goblin::Attack()
{
	cout << Type << " ����" << endl;
}

void M_Goblin::Dead()
{
	cout << Type << " ����" << endl;
}

void M_Goblin::DecreaseHP()
{
	cout << Type << " ����" << endl;
}
