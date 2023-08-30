#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	int numBullets;//���˂���e�̐�
	float baseAngle;//���˂���ŏ��̒e�̌���
	//45�x��135�x�̈Ⴂ�H
	float angleDiff;//�e���m�̊p�x��
	//45�J�n�ł��̌�+45+45����H

public:
	NwaySpawner();
	~NwaySpawner();

	int Shoot(GameMainScene* gMain) override;
};

