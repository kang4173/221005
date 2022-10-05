#pragma once
#include <string>
#include "Charater.h"
using namespace std;

class M_Hog : public FCharater
{
public:
	M_Hog(); // 생성자
	~M_Hog(); // 소멸자

	int Gold;
	int HP;
	int Direction;
	string Type;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();

};

// 슬라임, 멧돼지, 고블린 = 재화, HP, 이미지, 이름