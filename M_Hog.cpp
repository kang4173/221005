#include "M_Hog.h"
#include <iostream>

using namespace std;



M_Hog::M_Hog()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "M_Hog";


	cout << "M_Hog ������" << endl;
}

M_Hog::~M_Hog()
{
	cout << "M_Hog �Ҹ���" << endl;
}

void M_Hog::Move()
{
	cout << Type << " �̵�" << endl;
}

void M_Hog::Attack()
{
	cout << Type << " ����" << endl;
}

void M_Hog::Dead()
{
	cout << Type << " ����" << endl;
}

void M_Hog::DecreaseHP()
{
	cout << Type << " ����" << endl;

}
