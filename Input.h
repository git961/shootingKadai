#pragma once
#include "DxLib.h"
class Input
{
private:

	XINPUT_STATE getkey;
	static int Btnflg[];
	static int nowBtn[];
	static int oldBtn[];
	static int Btnnum;

public:
	//�֐��v���g�^�C�v�錾
	Input();
	~Input();

	void InputUpdate();
	int CheckBtn(int getBtn);
};

