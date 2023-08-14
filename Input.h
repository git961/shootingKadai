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
	//関数プロトタイプ宣言
	Input();
	~Input();

	void InputUpdate();
	int CheckBtn(int getBtn);
};

