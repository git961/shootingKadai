#pragma once
#include "SphereCllider.h"
class CharaBase : public SphereCllider
{
private:
	float speed;
	int image;

public:
	
	virtual int Update();//引数にゲームメインシーンのポインタを受け取る
	virtual void Draw() const=0;
	virtual int Hit()=0;//引数でダメージを受け取るダメージを受けたときの処理
};

