#pragma once
#ifndef FPS_H_
#define FPS_H_
#include"DxLib.h"
#include<math.h>

class fps
{
private:
	int count;
	//FPS�̌v���ƕ\�����s�����[�J���ϐ��̐錾
	LONGLONG nowTime;
	LONGLONG oldTime;
	LONGLONG fpsCheckTime;
	double deltaTime;
	int fpsCounter;
	int Fps;
public:

	fps();
	~fps();

	//�֐��̃v���g�^�C�v�錾
	void wait_fanc();//FPS�Œ菈���̊֐�
	void Reset_fps();//���[�v�O��FPS�v��������������֐�
	void Keisoku_fps();//FPS�̌v������֐�
	void display_fps()const;//�v������FPS��\������֐�

	void fpsUpdate();
};

#endif

