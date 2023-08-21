#include "DxLib.h"
#include "Player.h"
#include "Input.h"

Input input;

Player::Player() {
	score = 0;
	speed = 10;
	Playerx = 100;
	Playery = 100;
}

Player::~Player() {
}

int Player::Update(GameMainScene* gMain) {
	

	input.InputUpdate();
	//PlayerˆÚ“®ˆ—
	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_UP) == TRUE) {
		location.y -= speed;
	}
	
	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_DOWN) == TRUE) {
		location.y += speed;
	}

	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_RIGHT) == TRUE) {
		location.x += speed;
	}

	if (input.CheckMovekey(XINPUT_BUTTON_DPAD_LEFT) == TRUE) {
		location.x -= speed;
	}

	//ˆÚ“®§ŒÀ
	if (location.x > 1280) {
		location.x = 1270;
	}

	if (location.x < 0) {
		location.x = 20;
	}

	if (location.y > 720) {
		location.y = 710;
	}

	if (location.y < 0) {
		location.y = 20;
	}

	//SphereCollider::CheckCollision();
	//ƒGƒlƒ~[‘¤‚ÌŒp³‚µ‚½ŠÖ”‚ð‚Ç‚¤‚â‚Á‚Ä–é[
	return 0;
}

void Player::Draw()const {
	
	DrawCircle(location.x, location.y, radius, 0xffffff, TRUE);
	//DrawFormatString(0, 0, 0xffffff, "Movex%d", 100 + Movex);
	//DrawFormatString(0, 20, 0xffffff, "Movey%d", 100 + Movey);

	//	DrawBox(0+Movex, 0 + Movey, 20+Movex, 20+Movey, 0xffffff, TRUE);
}

int Player::Hit() {
	
	return 0;
}