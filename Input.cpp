#include "Input.h"

int Input::Btnflg[16];
int Input::oldBtn[16];
int Input::nowBtn[16];
int Input::Btnnum;

Input::Input() {
	Btnnum = 0;
}

Input::~Input() {
}

void Input::InputUpdate() {

	//ボタン
	for (int i = 0; i < 16; i++) {
		//入力状態を取得
		GetJoypadXInputState(DX_INPUT_PAD1, &getkey);
		//前の入力を受け取る
		oldBtn[i] = nowBtn[i];
		//今入力されているボタンを受け取る
		nowBtn[i] = getkey.Buttons[i];
		//0か１を受け取る
		Btnflg[i] = nowBtn[i] & ~oldBtn[i];
		//１を受け取ったら今の番号、iを受け取る
		if (Btnflg[i] == 1) {
			Btnnum = i;
		}
	}



}

int Input::CheckBtn(int key) {
	//押された瞬間のkeynum番目の値が１だったら
	if (Btnflg[Btnnum] == 1) {
		//押されたボタンの番号==受け取った値だったら
		if (Btnnum == key) {
			return TRUE;
		}
	}
	return FALSE;
}