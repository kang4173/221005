#include <iostream>
#include <string>
#include "Player.h"
#include "M_Goblin.h"
#include "M_Hog.h"
#include "M_Slime.h"
#include "Charater.h"



using namespace std;

#define SAFE_DELETE(A) if(A) {delete A; A = nullptr;}
// if(A)�� A�� ���� ������ true ������ flase
// ���� ������ ����

int main()
{
	// ���(����), ����(�Լ�) �̾Ƴ���
	// ���� = 2����, �÷��̾�, ����
	// ���� =  ������, �����, ���,								//�Լ� =�÷��̾����, 4�����̵�
	// ������, �����, ��� = ��ȭ, HP, �̹���, �̸�
	// �÷��̾� //���� = 4�����̵�, ���� ����, �̹���, HP, �̸�, ��ȭ  //�Լ� = �̵��Ѵ�.Moveto(); �����Ѵ�.Attack(); �״´�.Dead(); ������.Collect(); �پ���.DecreaseHP();

	// class ���� ��, ������ (Player();) �Ҹ���(~Player();) �ۼ�
	

	//Player* Plater = new Player();   //�̷��� �����ϸ�
	//delete Plater;
	//Plater = nullptr;				//�̷��� �߰�����ߵ�

	
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