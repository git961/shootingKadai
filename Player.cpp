#include "Player.h"
#include "DxLib.h"

Player::Player() {
}

Player::~Player() {
}

int Player::Update(GameMainScene* gMain) {
	return 0;
}

void Player::Draw()const {
	DrawBox(0, 0, 20, 20, 0xffffff, TRUE);
}

int Player::Hit() {
	return 0;
}