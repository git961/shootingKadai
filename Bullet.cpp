#include "Bullet.h"
#include "Player.h"
#include "DxLib.h"


Bullet::Bullet() {
	
	once = false;
}

Bullet::~Bullet() {

}

void Bullet::Update() {

	if (once == false) {
		for (int i = 0; i < 3; i++) {
			by[i] = gety;
		}
		once = true;
	}
	acceleration = speed * 3;
		getx = getx + acceleration;
		for (int i = 0; i < 3; i++) {

		by[i] = by[i] + angulVelocity[i];
		}
	
}

void Bullet::Draw()const {
	//�����angle�𖈉�S������Ă��܂���1��1�̃I�u�W�F�N�g��
	//�O��angle�������Ă��ԂɂȂ��ĈӖ����Ȃ�
	//�R�ɉ��������Ă邩���Č���
//		DrawCircle(getx,gety, 5, 0xffff00, TRUE);

	for (int i = 0; i < 3; i++) {
		DrawCircle(getx, by[i], 5, 0xffff00, TRUE);
	}
		

//	DrawFormatString(0, 0, 0xffffff, "bx%f", bx);
	DrawFormatString(0, 50, 0xffffff, "by%f", by);
}

void Bullet::GetDamage() {

}