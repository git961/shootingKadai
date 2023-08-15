#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
private:
	int score;
	int weapon;


public:
	//プロトタイプ宣言
	Player();
	~Player();

	int Update(GameMainScene* gMain) override;
	void Draw()const override;
	int Hit() override;
};

