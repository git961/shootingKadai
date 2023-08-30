#include "Enemy.h"
#include "DxLib.h"
#include "NwaySpawner.h"

NwaySpawner* Weapon;

Enemy::Enemy() {
	Weapon = new NwaySpawner;
	location.x = 1000;
	location.y = 200;
}

Enemy::~Enemy() {

}

int Enemy::Update(GameMainScene* gMain) {
	Weapon->Shoot(gMain);
	location.x -= 1;
	return 0;
}

void Enemy::Draw()const {
	DrawCircle(location.x, location.y, radius,0x00ffff,TRUE);
	DrawCircle(location.x, location.y, 2,0x0000ff,TRUE);
}

int Enemy::Hit(int hit) {
	return 0;
}

int Enemy::getEx() {
	return location.x;
}

int Enemy::getEy() {
	return location.y;
}