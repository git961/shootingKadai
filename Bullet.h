#pragma once
#include "SphereCollider.h"
class Bullet : public SphereCollider
{
private:
	int damage;
	float speed; //(速度)
	float angle; //角度
	float acceleration; //速度の変化量
	float angulVelocity; //角度の変化量

//メンバ関数
	void Update();
	void Draw()const;
	int GetDamalge();
};

