#include "Input.h"

int Input::Btnflg[16];
int Input::oldBtn[16];
int Input::nowBtn[16];
int Input::Btnnum;

int Input::crossflg;
int Input::nowcross;
int Input::oldcross;

Input::Input() {
	Btnnum = 0;
}

Input::~Input() {
}

void Input::InputUpdate() {
	//入力状態を取得
	GetJoypadXInputState(DX_INPUT_PAD1, &getkey);

	//ボタン入力
	for (int i = 0; i < 16; i++) {
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

int Input::CheckBtn(int getBtn) {
	//押された瞬間のkeynum番目の値が１だったら
	if (Btnflg[Btnnum] == 1) {
		//押されたボタンの番号==受け取った値だったら
		if (Btnnum == getBtn) {
			return TRUE;
		}
	}
	return FALSE;
}

int Input::CheckMovekey(int getmkey) {

	if (getkey.Buttons[getmkey] ==1) {
			return TRUE;
	}

	return FALSE;
}

