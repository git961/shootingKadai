#include "DxLib.h"
#include "SceneManager.h"
#include "AbstractScene.h"
#include "GameMainScene.h"

/*********
* �v���O�����̊J�n
**********/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int
	nCmdShow)
{
	// �^�C�g���� test �ɕύX
	SetMainWindowText("test");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	SetGraphMode(1280, 720,32);

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager SceneManager(dynamic_cast<AbstractScene*>(new GameMainScene));

	// �Q�[�����[�v
	while (ProcessMessage() != -1) {

		SceneManager.Update();
		SceneManager.Draw();

		//nullptr���A���Ă�����A�Q�[�����I��������
		if (SceneManager.Change() == nullptr) {
			break;
		}
	}

	DxLib_End(); // DX���C�u�����g�p�̏I������
	return 0; // �\�t�g�̏I��
}