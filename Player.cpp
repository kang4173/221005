#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    Gold = 0;
    HP = 0;
    Direction = 0;
    Type = "Player";
}

Player::~Player() // �Ҹ���
{

}

void Player::Collect()
{
	cout << "Player ������." << endl;
}

