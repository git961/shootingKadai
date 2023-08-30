#pragma once
#include "SphereCollider.h"

class GameMainScene;

class CharaBase : public SphereCollider
{
protected:
	float speed;
	int image;

public:
	
	virtual int Update(GameMainScene* gMain);//引数にゲームメインシーンのポインタを受け取る
	virtual void Draw() const=0;
	virtual int Hit(int hit)=0;//引数でダメージを受け取るダメージを受けたときの処理
};

