#pragma once
#include "SphereCollider.h"
class Bullet : public SphereCollider
{

public:
	int damage;
	float speed; //(���x)
	float angle[4]; //�p�x
	float acceleration; //���x�̕ω���
	float angulVelocity[3]; //�p�x�̕ω���
	float getx;
	float gety;
	float bx;
	float by[3];
	bool once;
	
//�����o�֐�
	Bullet();
	~Bullet();
	void Update();
	void Draw()const;
	void GetDamage();
};

