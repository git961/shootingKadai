#include "Bullet.h"
#include "DxLib.h"

Bullet::Bullet() {
	location.x=100;
	location.y=100;
}

Bullet::~Bullet() {

}

void Bullet::Update() {
	location.x = speed*angulVelocity;
	location.y = speed*angulVelocity;
}

void Bullet::Draw()const {

	DrawCircle(location.x+speed, location.y, 25, 0xffffff, TRUE);
}

void Bullet::GetDamage() {

}