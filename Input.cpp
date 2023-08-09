#include "Input.h"

char Input::keyflg;
char Input::oldkey;
char Input::nowkey;

Input::Input() {
}

Input::~Input() {
}

void Input::InputUpdate() {

	oldkey = nowkey;

	//“ü—ÍƒL[æ“¾
	GetJoypadXInputState(DX_INPUT_PAD1, &getkey);
	

	//keyflg = nowkey & ~oldkey;

}

int Input::CheckKey(int key) {

	nowkey = getkey.Buttons[key];
	keyflg = nowkey & ~oldkey;

	if (keyflg & key) {
		return TRUE;
	}
	return FALSE;
}