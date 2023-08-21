#include "Enemy.h"
#include "DxLib.h"

Enemy::Enemy() {

}

Enemy::~Enemy() {

}

int Enemy::Update(GameMainScene* gMain) {
	return 0;
}

void Enemy::Draw()const {
	DrawBox(0, 0, 30, 30, 0x00ffff, TRUE);
}

int Enemy::Hit() {
	return 0;
}