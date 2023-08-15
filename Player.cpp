#include "DxLib.h"
#include "Player.h"
#include "Input.h"

Input input;

Player::Player() {
	score = 0;
	speed = 10;
}

Player::~Player() {
}

int Player::Update(GameMainScene* gMain) {
	
	input.InputUpdate();

	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_UP) == TRUE) {
		Movey -= speed;
	}
	
	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_DOWN) == TRUE) {
		Movey += speed;
	}

	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_RIGHT) == TRUE) {
		Movex += speed;
	}

	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_LEFT) == TRUE) {
		Movex -= speed;
	}

	if (Movex > 1640) {
		Movex = 1640;
	}

	if (Movex < 0) {
		Movex = 20;
	}

	if (Movey > 720) {
		Movey = 720;
	}
	if (Movey < 0) {
		Movey = 20;
	}

	return 0;
}

void Player::Draw()const {
	
		DrawBox(0+Movex, 0 + Movey, 20+Movex, 20+Movey, 0xffffff, TRUE);
}

int Player::Hit() {
	return 0;
}