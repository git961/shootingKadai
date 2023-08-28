#pragma once
#include "GameMainScene.h"
#define _USE_MATH_DEFINES
#include <math.h>

class BulletsSpawner
{
private:
	float speed;//���x
	float angle[3];//�p�x
	float acceleration;//���x�̕ω���
	float angulVelocity;//�p�x�̕ω���
	
	double deg[3] = {45,90,135};
	double rad;

public:
	BulletsSpawner();
	~BulletsSpawner();

	//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	//SpawnBullet�Œe�𐶐�����
	virtual int Shoot(GameMainScene* gMain);
};

