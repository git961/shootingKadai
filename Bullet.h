#pragma once
#include "SphereCollider.h"
class Bullet : public SphereCollider
{
private:
	int damage;
	float speed; //(���x)
	float angle; //�p�x
	float acceleration; //���x�̕ω���
	float angulVelocity; //�p�x�̕ω���

//�����o�֐�
	void Update();
	void Draw()const;
	int GetDamalge();
};

