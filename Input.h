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

	static int crossflg;
	static int nowcross;
	static int oldcross;

public:
	//�֐��v���g�^�C�v�錾
	Input();
	~Input();
	
	void InputUpdate();
	int CheckBtn(int getBtn);
	int CheckMovekey(int getmkey);
};

