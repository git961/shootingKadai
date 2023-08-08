#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
private:
	int score;
	int weapon;

	int Update() override;
	void Draw()const override;
	int Hit() override;
};

