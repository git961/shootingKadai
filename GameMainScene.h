#pragma once

#include "AbstractScene.h"
#include "fps.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Input.h"

class GameMainScene:public AbstractScene
{
public:
	//�����o�ϐ�

	Player* player;
	Enemy* enemy[6];
	Bullet* bullet[20];
	XINPUT_STATE inpu;
	Input input;

	int life;	//�c�@

	int Color;

	//�v���g�^�C�v�錾
	GameMainScene();						//�R���X�g���N�^
	~GameMainScene();//�f�X�g���N�^

	void HitCheck();	//�e�E�v���C���[�E�G�̓����蔻��̃`�F�b�N���s��
	void SpawnBullet();	//�e�̔z��ɐV�����f�[�^���쐬����

	void Update() override;				//�X�V����
	void Draw() const override;			//�`�揈��
	AbstractScene* Change() override;	//�J�ڐ�̎w��

};