#include "GameMainScene.h"
#include "DxLib.h"

GameMainScene::GameMainScene() {

}

GameMainScene::~GameMainScene() {

}

void GameMainScene::Update() {

}

void GameMainScene::Draw() const{
	DrawFormatString(0, 0, 0xffffff, "GameMain");

}

//遷移先の指定
AbstractScene* GameMainScene::Change()
{
	//遷移先を返却する
	return this;

}