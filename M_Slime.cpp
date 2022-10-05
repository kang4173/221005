#include "M_Slime.h"
#include <iostream>
using namespace std;

M_Slime::M_Slime()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "M_Slime";

	cout << "M_Slime 생성자" << endl;
}

M_Slime::~M_Slime()
{
	cout << "M_Slime 소멸자" << endl;
}

void M_Slime::Move()
{
	cout << Type << " 이동" << endl;
}

void M_Slime::Attack()
{
	cout << Type << " 공격" << endl;
}

void M_Slime::Dead()
{
	cout << Type << " 죽음" << endl;
}

void M_Slime::DecreaseHP()
{
	cout << Type << " 줄음" << endl;
}
