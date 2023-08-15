#include "GameMainScene.h"
#include "DxLib.h"
#include "fps.h"
#include "Player.h"
Player p;
XINPUT_STATE inpu;

GameMainScene::GameMainScene() {
	Color = 0;
}

GameMainScene::~GameMainScene() {

}

void GameMainScene::Update() {

	GetJoypadXInputState(DX_INPUT_PAD1, &inpu);
	Color = GetColor(255, 255, 255);
	p.Update(0);
}

void GameMainScene::Draw() const{

	


	p.Draw();
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

};

//遷移先の指定
AbstractScene* GameMainScene::Change()
{
	//遷移先を返却する
	return this;

}