#include "M_Slime.h"
#include <iostream>
using namespace std;

M_Slime::M_Slime()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "M_Slime";

	cout << "M_Slime ������" << endl;
}

M_Slime::~M_Slime()
{
	cout << "M_Slime �Ҹ���" << endl;
}

void M_Slime::Move()
{
	cout << Type << " �̵�" << endl;
}

void M_Slime::Attack()
{
	cout << Type << " ����" << endl;
}

void M_Slime::Dead()
{
	cout << Type << " ����" << endl;
}

void M_Slime::DecreaseHP()
{
	cout << Type << " ����" << endl;
}
