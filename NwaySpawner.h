#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	float speed;//���x
	float angle;//�p�x
	float acceleration;//���x�̕ω���
	float angulVelocity;//�p�x�̕ω���

public:
	int Shoot() override;
};

