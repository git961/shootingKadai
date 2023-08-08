#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	float speed;//速度
	float angle;//角度
	float acceleration;//速度の変化量
	float angulVelocity;//角度の変化量

public:
	int Shoot() override;
};

