#include "SceneManager.h"
#include "DxLib.h"

//�R���X�g���N�^
SceneManager::SceneManager() {
	now_scene = nullptr;
	next_scene = now_scene;
}

//�����t���R���X�g���N�^
SceneManager::SceneManager(AbstractScene* scene)
{
	//�󂯎������������
	now_scene = scene;
	next_scene = now_scene;
}

SceneManager::~SceneManager()
{
}

void SceneManager::Update()
{

	if (now_scene != nullptr) {
		now_scene->Update();
	}

}

void SceneManager::Draw() const
{
	//��ʂ̏�����
	ClearDrawScreen();

	//�V�[���̕`��
	if (now_scene != nullptr) {
		now_scene->Draw();
	}

	// ����ʂ̓��e��\��ʂɔ��f
	ScreenFlip();

}

//�J�ڐ�̎w��
AbstractScene* SceneManager::Change()
{
	next_scene = now_scene->Change();

	//�J�ڐ悪���݂̃V�[���ƈ���Ă�����
	if (next_scene != now_scene)
	{
		delete now_scene;
		now_scene = next_scene;
	}

	//�J�ڐ��ԋp����
	return next_scene;
}

