#pragma once
#include "GameMainScene.h"
#define _USE_MATH_DEFINES
#include <math.h>

class BulletsSpawner
{
protected:
	float speed;//���x
	float angle[3];//�p�x
	float acceleration;//���x�̕ω���
	float angulVelocity[3];//�p�x�̕ω���
	
	bool once;

	double deg[3] = {-90,30,130};
	double rad;

public:
	BulletsSpawner();
	~BulletsSpawner();

	//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	//SpawnBullet�Œe�𐶐�����
	virtual int Shoot(GameMainScene* gMain);
};

