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

    cout << "FCharacter 생성자" << endl;
}

FCharater::~FCharater()
{
    cout << "FCharacter 소멸자" << endl;
}

void FCharater::Move()
{
    cout << Type << " 이동" << endl;
}

void FCharater::Attack()
{
    cout << Type << " 공격" << endl;
}

void FCharater::Dead()
{
    cout << Type << " 죽음" << endl;
}

void FCharater::DecreaseHP()
{
    cout << Type << " 줄음" << endl;
}
