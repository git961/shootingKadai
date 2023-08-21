#pragma once
#include "CharaBase.h"
class Enemy : public CharaBase
{
private:
	//�����o�ϐ�
	int hp;
	int point;//�X�R�A�̉��Z��
	int weapon;

public:
	Enemy();
	~Enemy();

	int Update(GameMainScene* gMain) override;
	void Draw()const override;
	int Hit() override;
};

