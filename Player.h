#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
private:
	int score;
	int life;
public:
	//�v���g�^�C�v�錾
	Player();
	~Player();

	int Update(GameMainScene* gMain) override;
	void Draw()const override;
	int Hit(int hit) override;

	int getplx();
	int getply();
};

