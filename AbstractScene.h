#pragma once

class AbstractScene
{
public:
	//後から中身を上書きしたい関数の前にvirtualと記入

	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual AbstractScene* Change();
};