#pragma once
#include "CharaBase.h"
class Enemy : public CharaBase
{
private:
	//メンバ変数
	int hp;
	int point;//スコアの加算量
	int weapon;

	int Update() override;
	void Draw()const override;
	int Hit() override;
};

