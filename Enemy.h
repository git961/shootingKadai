#pragma once
#include "CharaBase.h"
class Enemy : public CharaBase
{
private:
	//�����o�ϐ�
	int hp;
	int point;//�X�R�A�̉��Z��

public:
	Enemy();
	~Enemy();

	int getEx();
	int getEy();

	int Update(GameMainScene* gMain) override;
	void Draw()const override;
	int Hit(int hit) override;
};

