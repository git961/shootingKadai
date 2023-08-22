#include "Enemy.h"
#include "DxLib.h"

Enemy::Enemy() {
	location.x = 200;
	location.y = 200;
}

Enemy::~Enemy() {

}

int Enemy::Update(GameMainScene* gMain) {
	return 0;
}

void Enemy::Draw()const {
	DrawCircle(location.x, location.y, radius,0x00ffff,TRUE);
	DrawCircle(location.x, location.y, 2,0x0000ff,TRUE);
}

int Enemy::Hit() {
	return 0;
}