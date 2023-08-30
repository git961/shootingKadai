#include "GameMainScene.h"
#include "DxLib.h"


GameMainScene::GameMainScene() {
	Color = 0;
	
	for (int i = 0; i < 5; i++) {
		enemy[i] = new Enemy();
	}
	player = new Player();

	for (int i = 0; i < 20; i++) {
		bulletE[i] = new Bullet();
	}
}

GameMainScene::~GameMainScene() {
	for (int i = 0; i < 5; i++) {
		delete enemy[i];
	}
	delete player;
}

void GameMainScene::Update() {

	GetJoypadXInputState(DX_INPUT_PAD1, &inpu);
	Color = GetColor(255, 255, 255);

	if (input.CheckBtn(XINPUT_BUTTON_A) == TRUE) {
		SpawnBullet();
	}
	for (int i = 0; i < 5; i++) {
		enemy[i]->Update(this);
	}

	player->Update(this);
	for (int i = 0; i < 20; i++) {
		if (bullet[i] != nullptr) {
			bullet[i]->Update();
		}
	}

	for (int i = 0; i < 20; i++) {
		if (bulletE[i] != nullptr) {
			bulletE[i]->Update();
		}
	}

	HitCheck();
}

void GameMainScene::Draw() const{

	
	for (int i = 0; i < 3; i++) {
		enemy[i]->Draw();

		//if (player->CheckCollision(enemy[i]) == TRUE) {
		//	DrawFormatString(100, 100, 0xffffff, "HIT!!!");
		//}

		if (bullet[i] != nullptr) {
			bullet[i]->Draw();
			DrawFormatString(100*i, 100, 0xffffff, "HIT!!!");

		}

	}
	player->Draw();

	for(int i = 0; i < 20; i++) {
		if (bulletE[i] != nullptr) {
			bulletE[i]->Draw();
		}
	}

}

void GameMainScene::HitCheck() {

	for (int i = 0; i < 5; i++) {
		player->CheckCollision(enemy[i]);
		enemy[i]->CheckCollision(player);
		
		if (player->CheckCollision(bulletE[i]) == TRUE) {
			player->Hit(TRUE);
		}

		


	}
};

void GameMainScene::SpawnBullet() {
	//’e‚ğnew‚·‚é
	
		for (int j = 0; j < 20; j++) {
			bullet[j] = new Bullet();
			//bullet[j]->by += 100*j;
		}
	

}

//‘JˆÚæ‚Ìw’è
AbstractScene* GameMainScene::Change()
{
	//‘JˆÚæ‚ğ•Ô‹p‚·‚é
	return this;

}