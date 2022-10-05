#include <iostream>
#include <string>
#include "Player.h"
#include "M_Goblin.h"
#include "M_Hog.h"
#include "M_Slime.h"
#include "Charater.h"



using namespace std;

#define SAFE_DELETE(A) if(A) {delete A; A = nullptr;}
// if(A)에 A에 값이 있으면 true 없으면 flase
// 값이 있으면 삭제

int main()
{
	// 명사(변수), 동사(함수) 뽑아내기
	// 월드 = 2차원, 플레이어, 몬스터
	// 몬스터 =  슬라임, 멧돼지, 고블린,								//함수 =플레이어공격, 4방위이동
	// 슬라임, 멧돼지, 고블린 = 재화, HP, 이미지, 이름
	// 플레이어 //변수 = 4방위이동, 몬스터 공격, 이미지, HP, 이름, 재화  //함수 = 이동한다.Moveto(); 공격한다.Attack(); 죽는다.Dead(); 모은다.Collect(); 줄어든다.DecreaseHP();

	// class 생성 후, 생성자 (Player();) 소멸자(~Player();) 작성
	

	//Player* Plater = new Player();   //이렇게 생성하면
	//delete Plater;
	//Plater = nullptr;				//이렇게 추가해줘야됨

	
	M_Goblin* MyGoblin = new M_Goblin();
	M_Slime* MySlime = new M_Slime();
	M_Hog* MyHog = new M_Hog();
	Player* MyPlayer = new Player();

	MyPlayer->Move();
	MyGoblin->Move();
	MySlime->Move();
	MyHog->Move();

	SAFE_DELETE(MyPlayer);
	SAFE_DELETE(MyGoblin);
	SAFE_DELETE(MySlime);
	SAFE_DELETE(MyHog);



	/*Player* MyPlayer = new Player();
	Goblin* MyGoblin = new Goblin();
	Slime* MySlime = new Slime();
	Pig* MyPig = new Pig();

	MyPlayer->Move();
	MyGoblin->Move();
	MySlime->Move();
	MyPig->Move();

	SAFE_DELETE(MyPlayer);
	SAFE_DELETE(MyGoblin);
	SAFE_DELETE(MySlime);
	SAFE_DELETE(MyPig);*/

	

	return 0;
}