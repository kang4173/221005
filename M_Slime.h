#pragma once
#include <string>
#include "Charater.h"
using namespace std;

class M_Slime : public FCharater
{
public:
	M_Slime();
	~M_Slime();

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();

};

// ������, �����, ��� = ��ȭ, HP, �̹���, �̸�