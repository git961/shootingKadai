#include "Bullet.h"
#include "Player.h"
#include "DxLib.h"


Bullet::Bullet() {

}

Bullet::~Bullet() {

}

void Bullet::Update() {

	acceleration = speed * 3;
	for (int i = 0; i < 3; i++) {
		angulVelocity = angle[i] / (angle[i] / speed);
	}
	
		getx = getx + acceleration;
		gety = gety + angulVelocity;
	
}

void Bullet::Draw()const {
	//入れるangleを毎回全部入れてしまうと1つ1つのオブジェクトが
	//三つのangleを持ってる状態になって意味がない
		DrawCircle(getx,gety, 5, 0xffff00, TRUE);
	

//	DrawFormatString(0, 0, 0xffffff, "bx%f", bx);
//	DrawFormatString(0, 30, 0xffffff, "by%f", by);
}

void Bullet::GetDamage() {

}