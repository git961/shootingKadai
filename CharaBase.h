#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"

class CharaBase : public SphereCollider
{
protected:
	float speed;
	int image;
	int Movex;
	int Movey;

public:
	
	virtual int Update(GameMainScene* gMain);//引数にゲームメインシーンのポインタを受け取る
	virtual void Draw() const=0;
	virtual int Hit()=0;//引数でダメージを受け取るダメージを受けたときの処理
};

