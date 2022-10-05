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

// 슬라임, 멧돼지, 고블린 = 재화, HP, 이미지, 이름