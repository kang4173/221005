#pragma once
#include <string>
#include "Charater.h"
using namespace std;

class M_Hog : public FCharater
{
public:
	M_Hog(); // ������
	~M_Hog(); // �Ҹ���

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