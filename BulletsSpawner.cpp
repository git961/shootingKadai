#include "BulletsSpawner.h"

BulletsSpawner::BulletsSpawner() {
	speed = 5;
	angle = 45.0;
	acceleration = 0;//speed/時間？加速度
	angulVelocity = 0;
}

BulletsSpawner::~BulletsSpawner() {

}

int BulletsSpawner::Shoot(GameMainScene* gMain) {
	gMain->SpawnBullet();


	return 0;
}