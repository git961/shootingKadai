#pragma once

class AbstractScene
{
public:
	//�ォ�璆�g���㏑���������֐��̑O��virtual�ƋL��

	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual AbstractScene* Change();
};