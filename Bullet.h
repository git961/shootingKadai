#pragma once
#include "SphereCollider.h"
class Bullet : public SphereCollider
{

public:
	int damage;
	float speed; //(���x)
	float angle; //�p�x
	float acceleration; //���x�̕ω���
	float angulVelocity; //�p�x�̕ω���
	float bx;
	float by;
//�����o�֐�
	Bullet();
	~Bullet();
	void Update();
	void Draw()const;
	void GetDamage();
};

