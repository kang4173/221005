#include "Charater.h"
#include <string>
#include<iostream>

using namespace std;

FCharater::FCharater()
{
    Gold = 0;
    HP = 0;
    Direction = 0;
    Type = "Character";

    cout << "FCharacter ������" << endl;
}

FCharater::~FCharater()
{
    cout << "FCharacter �Ҹ���" << endl;
}

void FCharater::Move()
{
    cout << Type << " �̵�" << endl;
}

void FCharater::Attack()
{
    cout << Type << " ����" << endl;
}

void FCharater::Dead()
{
    cout << Type << " ����" << endl;
}

void FCharater::DecreaseHP()
{
    cout << Type << " ����" << endl;
}
