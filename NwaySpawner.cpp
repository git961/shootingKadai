#include "NwaySpawner.h"
#include "Enemy.h"

NwaySpawner::NwaySpawner() {
	numBullets=0;
	baseAngle = 0;
	angleDiff = 0;
}

NwaySpawner::~NwaySpawner() {

}

int NwaySpawner::Shoot(GameMainScene* gMain) {
	acceleration = speed * 5;
	for (int i = 0; i < 3; i++) {
		baseAngle += angleDiff;
		//angulVelocity[i] = baseAngle;
	}
	//printfDx("%f", angle[2]);
	//pl.getplx() + acceleration‚ð‚·‚é

	for (int i = 0; i < 3; i++) {
		if (gMain->bulletE[i] != nullptr) {
			gMain->bulletE[i]->speed = speed;
			//gMain->bullet[i]->angle[i] = angle[i];
			gMain->bulletE[i]->acceleration = acceleration;
			for (int j = 0; j < 3; j++) {
				gMain->bulletE[j]->angulVelocity[j] = 0;
			}
			gMain->bulletE[i]->getx = gMain->enemy[i]->getEx()-50;
			gMain->bulletE[i]->gety = gMain->enemy[i]->getEy();

		}
	}
	return 0;
}