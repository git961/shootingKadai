#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
private:
	int numBullets;//発射する弾の数
	float baseAngle;//発射する最初の弾の向き
	//45度と135度の違い？
	float angleDiff;//弾同士の角度差
	//45開始でその後+45+45する？

public:
	NwaySpawner();
	~NwaySpawner();

	int Shoot(GameMainScene* gMain) override;
};

