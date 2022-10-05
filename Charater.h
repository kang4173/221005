#pragma once
#include <string>

using namespace std;

class FCharater
{
public:
	FCharater();
	~FCharater();

	int Gold;
	int HP;
	int Direction;
	string Type;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();
};

