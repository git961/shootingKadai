#include "BulletsSpawner.h"
#include "Player.h"

BulletsSpawner::BulletsSpawner() {
	once = false;
	speed = 1;
	acceleration =0;//speed/時間？加速度 Xに代入
	//angulVelocity =0;//Yに居れる

	for (int i = 0; i < 3; i++) {
		angle[i] = deg[i] * (M_PI / 180);
	}
}

BulletsSpawner::~BulletsSpawner() {

}

int BulletsSpawner::Shoot(GameMainScene* gMain) {
		acceleration = speed * 3;
		for (int i = 0; i < 3; i++) {
			angulVelocity[i] = angle[i];
		}
		//printfDx("%f", angle[2]);
		//pl.getplx() + accelerationをする

		for (int i = 0; i < 3; i++) {
			if (gMain->bullet[i] != nullptr) {
				gMain->bullet[i]->speed = speed;
				//gMain->bullet[i]->angle[i] = angle[i];
				gMain->bullet[i]->acceleration = acceleration;
				for (int j = 0; j < 3; j++) {
					gMain->bullet[j]->angulVelocity[j] = angulVelocity[j];
				}
				gMain->bullet[i]->getx = gMain->player->getplx();
				gMain->bullet[i]->gety = gMain->player->getply();

			}
		}

	return 0;
}