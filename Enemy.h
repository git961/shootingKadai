#pragma once
#include "CharaBase.h"
class Enemy : public CharaBase
{
private:
	//メンバ変数
	int hp;
	int point;//スコアの加算量

public:
	Enemy();
	~Enemy();

	int getEx();
	int getEy();

	int Update(GameMainScene* gMain) override;
	void Draw()const override;
	int Hit(int hit) override;
};

