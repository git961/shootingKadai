#include "DxLib.h"
#include "SceneManager.h"
#include "AbstractScene.h"
#include "GameMainScene.h"

/*********
* プログラムの開始
**********/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int
	nCmdShow)
{
	// タイトルを test に変更
	SetMainWindowText("test");

	ChangeWindowMode(TRUE);		// ウィンドウモードで起動

	SetGraphMode(1280, 720,32);

	if (DxLib_Init() == -1) return -1;	// DXライブラリの初期化処理

	SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

	SceneManager SceneManager(dynamic_cast<AbstractScene*>(new GameMainScene));

	// ゲームループ
	while (ProcessMessage() != -1) {

		SceneManager.Update();
		SceneManager.Draw();

		//nullptrが帰ってきたら、ゲームを終了させる
		if (SceneManager.Change() == nullptr) {
			break;
		}
	}

	DxLib_End(); // DXライブラリ使用の終了処理
	return 0; // ソフトの終了
}