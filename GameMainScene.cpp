#include "GameMainScene.h"
#include "DxLib.h"
#include "fps.h"
#include "Player.h"
#include "Enemy.h"
Player *player;
Enemy* enemy[6];
XINPUT_STATE inpu;

GameMainScene::GameMainScene() {
	Color = 0;
	
	for (int i = 0; i < 5; i++) {
		enemy[i] = new Enemy();
	}
	player = new Player();
}

GameMainScene::~GameMainScene() {
	delete enemy;
	delete player;
}

void GameMainScene::Update() {

	GetJoypadXInputState(DX_INPUT_PAD1, &inpu);
	Color = GetColor(255, 255, 255);
	player->Update(0);
}

void GameMainScene::Draw() const{

	
	for (int i = 0; i < 5; i++) {
		enemy[i]->Draw();
	}
	if (player->CheckCollision(enemy[0]) == TRUE) {
		DrawFormatString(100, 100, 0xffffff, "HIT!!!");
	}
	player->Draw();
	//えねみーはエネミーのCPPでストラクトで増やして
	// ポインタ型で呼ぶ
	// 画面に XINPUT_STATE の中身を描画
	//DrawFormatString(0, 0, Color, "LeftTrigger:%d RightTrigger:%d",
	//	inpu.LeftTrigger, inpu.RightTrigger);
	//DrawFormatString(0, 16, Color, "ThumbLX:%d ThumbLY:%d",
	//	inpu.ThumbLX, inpu.ThumbLY);
	//DrawFormatString(0, 32, Color, "ThumbRX:%d ThumbRY:%d",
	//	inpu.ThumbRX, inpu.ThumbRY);
	//DrawString(0, 64, "Button", Color);
	//for (int i = 0; i < 16; i++)
	//{
	//	DrawFormatString(64 + i % 8 * 64, 64 + i / 8 * 16, Color,
	//		"%2d:%d", i, inpu.Buttons[i]);
	//}
}

void GameMainScene::HitCheck() {
	player->CheckCollision(enemy[0]);
	enemy[0]->CheckCollision(player);

	if (player->CheckCollision(enemy[0]) == TRUE) {

	}
};

//遷移先の指定
AbstractScene* GameMainScene::Change()
{
	//遷移先を返却する
	return this;

}