#pragma once
#ifndef SUB_H
#define SUB_H

class AbstractScene
{
public:
	//�ォ�璆�g���㏑���������֐��̑O��virtual�ƋL��

	//�v���g�^�C�v�錾
	//=0�Ń����o�֐��̒�`���ȗ�
	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual AbstractScene* Change()=0;
};

#endif // !