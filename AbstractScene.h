#pragma once
#ifndef SUB_H
#define SUB_H

class AbstractScene
{
public:
	//後から中身を上書きしたい関数の前にvirtualと記入

	//プロトタイプ宣言
	//=0でメンバ関数の定義を省略
	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual AbstractScene* Change()=0;
};

#endif // !