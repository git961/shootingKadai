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

	//�{�^��
	for (int i = 0; i < 16; i++) {
		//���͏�Ԃ��擾
		GetJoypadXInputState(DX_INPUT_PAD1, &getkey);
		//�O�̓��͂��󂯎��
		oldBtn[i] = nowBtn[i];
		//�����͂���Ă���{�^�����󂯎��
		nowBtn[i] = getkey.Buttons[i];
		//0���P���󂯎��
		Btnflg[i] = nowBtn[i] & ~oldBtn[i];
		//�P���󂯎�����獡�̔ԍ��Ai���󂯎��
		if (Btnflg[i] == 1) {
			Btnnum = i;
		}
	}



}

int Input::CheckBtn(int key) {
	//�����ꂽ�u�Ԃ�keynum�Ԗڂ̒l���P��������
	if (Btnflg[Btnnum] == 1) {
		//�����ꂽ�{�^���̔ԍ�==�󂯎�����l��������
		if (Btnnum == key) {
			return TRUE;
		}
	}
	return FALSE;
}