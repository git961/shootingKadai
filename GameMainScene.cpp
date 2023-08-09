#include "GameMainScene.h"
#include "DxLib.h"
#include "fps.h"
#include "Input.h"
Input input;

GameMainScene::GameMainScene() {

}

GameMainScene::~GameMainScene() {

}

void GameMainScene::Update() {
	input.InputUpdate();
}

void GameMainScene::Draw() const{

	if (input.CheckKey(XINPUT_BUTTON_B) == TRUE) {
		DrawFormatString(0, 0, 0xffffff, "GameMain");
	}

	if (input.CheckKey(XINPUT_BUTTON_A) == TRUE) {
		DrawFormatString(0, 0, 0xffffff, "aaaaa");
	}
}

//遷移先の指定
AbstractScene* GameMainScene::Change()
{
	//遷移先を返却する
	return this;

}