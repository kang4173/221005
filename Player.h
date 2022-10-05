#pragma once
#include <string>
#include "Charater.h"

using namespace std;

class Player : public FCharater
{
public:
	Player(); //생성자
	~Player(); //소멸자


	void Collect();
	

};

// 플레이어 = 4방위이동, 몬스터 공격, 이미지, HP, 이름,,,,,,,,,,,,재화