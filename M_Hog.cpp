#include "M_Hog.h"
#include <iostream>

using namespace std;



M_Hog::M_Hog()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "M_Hog";


	cout << "M_Hog 생성자" << endl;
}

M_Hog::~M_Hog()
{
	cout << "M_Hog 소멸자" << endl;
}

void M_Hog::Move()
{
	cout << Type << " 이동" << endl;
}

void M_Hog::Attack()
{
	cout << Type << " 공격" << endl;
}

void M_Hog::Dead()
{
	cout << Type << " 죽음" << endl;
}

void M_Hog::DecreaseHP()
{
	cout << Type << " 줄음" << endl;

}
