#pragma once
#include "GameMainScene.h"
class BulletsSpawner
{
private:
	float speed;//���x
	float angle;//�p�x
	float acceleration;//���x�̕ω���
	float angulVelocity;//�p�x�̕ω���

public:
	BulletsSpawner();
	~BulletsSpawner();

	//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	//SpawnBullet�Œe�𐶐�����
	virtual int Shoot(GameMainScene* gMain);
};

