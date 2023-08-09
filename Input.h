#pragma once
#include "DxLib.h"
class Input
{
private:

	XINPUT_STATE getkey;
	static char keyflg;
	static char nowkey;
	static char oldkey;

public:
	//関数プロトタイプ宣言
	Input();
	~Input();

	void InputUpdate();
	int CheckKey(int key);
};

