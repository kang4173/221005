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

Player::~Player() // 소멸자
{

}

void Player::Collect()
{
	cout << "Player 모은다." << endl;
}

