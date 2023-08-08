#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	float speed;//‘¬“x
	float angle;//Šp“x
	float acceleration;//‘¬“x‚Ì•Ï‰»—Ê
	float angulVelocity;//Šp“x‚Ì•Ï‰»—Ê

public:
	int Shoot() override;
};

