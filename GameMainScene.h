#pragma once

#include "AbstractScene.h"
class GameMainScene:public AbstractScene
{
public:
	//�����o�ϐ�
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