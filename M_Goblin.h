#pragma once
#include <string>
#include "Charater.h"
using namespace std;

class M_Goblin : public FCharater
{
public: 
	M_Goblin(); // ������
	~M_Goblin(); // �Ҹ���

	int Gold;
	int HP;
	int Direction;
	string Type;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();

};

// ������, �����, ��� = ��ȭ, HP, �̹���, �̸�