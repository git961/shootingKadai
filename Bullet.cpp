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
	//�����angle�𖈉�S������Ă��܂���1��1�̃I�u�W�F�N�g��
	//�O��angle�������Ă��ԂɂȂ��ĈӖ����Ȃ�
		DrawCircle(getx,gety, 5, 0xffff00, TRUE);
	

//	DrawFormatString(0, 0, 0xffffff, "bx%f", bx);
//	DrawFormatString(0, 30, 0xffffff, "by%f", by);
}

void Bullet::GetDamage() {

}