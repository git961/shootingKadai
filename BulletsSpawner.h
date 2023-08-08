#pragma once
class BulletsSpawner
{
private:
	float speed;//速度
	float angle;//角度
	float acceleration;//速度の変化量
	float angulVelocity;//角度の変化量

public:
	//引数にゲームメインシーンのポインタを受け取る
	//SpawnBulletで弾を生成する
	virtual int Shoot();
};

