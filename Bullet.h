#pragma once
#include "SphereCollider.h"
class Bullet : public SphereCollider
{

public:
	int damage;
	float speed; //(速度)
	float angle[4]; //角度
	float acceleration; //速度の変化量
	float angulVelocity[3]; //角度の変化量
	float getx;
	float gety;
	float bx;
	float by[3];
	bool once;
	
//メンバ関数
	Bullet();
	~Bullet();
	void Update();
	void Draw()const;
	void GetDamage();
};

