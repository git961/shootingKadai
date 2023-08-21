#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"

class CharaBase : public SphereCollider
{
protected:
	float speed;
	int image;

public:
	
	virtual int Update(GameMainScene* gMain);//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	virtual void Draw() const=0;
	virtual int Hit()=0;//�����Ń_���[�W���󂯎��_���[�W���󂯂��Ƃ��̏���
};

