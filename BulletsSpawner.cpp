#include "BulletsSpawner.h"

BulletsSpawner::BulletsSpawner() {
	speed = 1;
	angle = 0.625f;
	acceleration = 5/60;//speed/éûä‘ÅHâ¡ë¨ìx
	angulVelocity = 0.625f;
}

BulletsSpawner::~BulletsSpawner() {

}

int BulletsSpawner::Shoot(GameMainScene* gMain) {

	for (int i = 0; i < 5; i++) {
		if (gMain->bullet[i] != nullptr) {
			gMain->bullet[i]->speed=speed;
			gMain->bullet[i]->angle=angle;
			gMain->bullet[i]->acceleration=acceleration;
			gMain->bullet[i]->angulVelocity=angulVelocity;


		}
	}

	return 0;
}