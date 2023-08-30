#pragma once
#include "GameMainScene.h"
#define _USE_MATH_DEFINES
#include <math.h>

class BulletsSpawner
{
protected:
	float speed;//速度
	float angle[3];//角度
	float acceleration;//速度の変化量
	float angulVelocity[3];//角度の変化量
	
	bool once;

	double deg[3] = {-90,30,130};
	double rad;

public:
	BulletsSpawner();
	~BulletsSpawner();

	//引数にゲームメインシーンのポインタを受け取る
	//SpawnBulletで弾を生成する
	virtual int Shoot(GameMainScene* gMain);
};

