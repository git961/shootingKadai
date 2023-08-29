#include "GameMainScene.h"
#include "DxLib.h"


GameMainScene::GameMainScene() {
	Color = 0;
	
	for (int i = 0; i < 5; i++) {
		enemy[i] = new Enemy();
	}
	player = new Player();
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


	player->Update(this);
	for (int i = 0; i < 20; i++) {
		if (bullet[i] != nullptr) {
			bullet[i]->Update();
		}
	}


}

void GameMainScene::Draw() const{

	
	for (int i = 0; i < 3; i++) {
		//enemy[i]->Draw();

		if (player->CheckCollision(enemy[i]) == TRUE) {
			DrawFormatString(100, 100, 0xffffff, "HIT!!!");
		}

		if (bullet[i] != nullptr) {
			bullet[i]->Draw();
			DrawFormatString(100*i, 100, 0xffffff, "HIT!!!");

		}

	}
	player->Draw();

	

}

void GameMainScene::HitCheck() {

	for (int i = 0; i < 5; i++) {
		player->CheckCollision(enemy[i]);
		enemy[i]->CheckCollision(player);

		if (player->CheckCollision(enemy[i]) == TRUE) {

		}

	}
};

void GameMainScene::SpawnBullet() {
	//弾をnewする
	
		for (int j = 0; j < 20; j++) {
			bullet[j] = new Bullet();
			//bullet[j]->by += 100*j;
		}
	

}

//遷移先の指定
AbstractScene* GameMainScene::Change()
{
	//遷移先を返却する
	return this;

}