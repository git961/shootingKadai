#pragma once
#include "SphereCllider.h"
class CharaBase : public SphereCllider
{
private:
	float speed;
	int image;

public:
	
	virtual int Update();//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	virtual void Draw() const=0;
	virtual int Hit()=0;//�����Ń_���[�W���󂯎��_���[�W���󂯂��Ƃ��̏���
};

