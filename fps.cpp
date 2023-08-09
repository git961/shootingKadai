#include "fps.h"


fps::fps() {
	count=0;
	nowTime = GetNowHiPerformanceCount();
	oldTime = nowTime;
	fpsCheckTime=GetNowHiPerformanceCount();
	deltaTime = 0;
	fpsCounter = 0;
	Fps = 0;
}
fps::~fps() {

}

void fps::fpsUpdate() {
	Keisoku_fps();
	wait_fanc();
}

void fps::wait_fanc() {
	int term;
	static int t = 0;

	//���݂̎��� - 1��O�Ɏ�������Ԃ�16�b�܂ĂĂ邩���ׂ� 
	term = GetNowCount() - t;

	if (16 - term > 0)
		Sleep(16 - term);

	t = GetNowCount();
	return;
}

void fps::Reset_fps() {
	fpsCheckTime = GetNowHiPerformanceCount();
	Fps = 0;
	fpsCounter = 0;
}

void fps::Keisoku_fps() {
	///1���[�v���_�̃V�X�e�����Ԃ��擾
	oldTime = nowTime;
	nowTime = GetNowHiPerformanceCount();

	//1���[�v�̎��Ԍo�߂����߂�
	deltaTime = (nowTime - oldTime) / 6000000.0F;

	count += deltaTime;

	//1�b�Ԃ�FPS���v������A1�b���Ƃɏ���������
	fpsCounter++;
	if (nowTime - fpsCheckTime > 1000000) {
		Fps = fpsCounter;
		fpsCounter = 0;
		fpsCheckTime = nowTime;
	}

}

void fps::display_fps()const{
	//FPS�̕\��
	SetFontSize(16);
	DrawFormatString(390, 5, 0xffffff, "FPS:%3d DELTA: %8.6fsec", Fps, deltaTime);

}

