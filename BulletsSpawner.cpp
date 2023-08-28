#include "BulletsSpawner.h"
#include "Player.h"

BulletsSpawner::BulletsSpawner() {
	speed = 1;
	acceleration =0;//speed/ŠÔH‰Á‘¬“x X‚É‘ã“ü
	angulVelocity =0;//Y‚É‹‚ê‚é

	for (int i = 0; i < 3; i++) {
		angle[i] = deg[i] * (M_PI / 180);
	}
}

BulletsSpawner::~BulletsSpawner() {

}

int BulletsSpawner::Shoot(GameMainScene* gMain) {

	acceleration = speed * 3;
	for (int i = 0; i < 3; i++) {
		angulVelocity = angle[i] / (angle[i] / speed);
	}
	//pl.getplx() + acceleration‚ğ‚·‚é

	for (int i = 0; i < 3; i++) {
		if (gMain->bullet[i] != nullptr) {
			gMain->bullet[i]->speed=speed;
			gMain->bullet[i]->angle[i] = angle[i];
			gMain->bullet[i]->acceleration=acceleration;
			gMain->bullet[i]->angulVelocity=angulVelocity;
			gMain->bullet[i]->getx = gMain->player->getplx();
			gMain->bullet[i]->gety = gMain->player->getply();

		}
	}

	return 0;
}