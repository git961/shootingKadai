#pragma once
class BulletsSpawner
{
private:
	float speed;//���x
	float angle;//�p�x
	float acceleration;//���x�̕ω���
	float angulVelocity;//�p�x�̕ω���

public:
	//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	//SpawnBullet�Œe�𐶐�����
	virtual int Shoot();
};

