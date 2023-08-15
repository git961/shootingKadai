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
	//���͏�Ԃ��擾
	GetJoypadXInputState(DX_INPUT_PAD1, &getkey);

	//�{�^������
	for (int i = 0; i < 16; i++) {
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

int Input::CheckBtn(int getBtn) {
	//�����ꂽ�u�Ԃ�keynum�Ԗڂ̒l���P��������
	if (Btnflg[Btnnum] == 1) {
		//�����ꂽ�{�^���̔ԍ�==�󂯎�����l��������
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

