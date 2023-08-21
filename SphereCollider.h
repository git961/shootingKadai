#pragma once
class SphereCollider
{
protected:
	//メンバ変数

	//float location;//中心座標
	float radius;//半径

	struct	//中心座標
	{
		float x=0;
		float y=0;
	}location;

public:
	//メンバ関数
	SphereCollider();
	~SphereCollider();
	int CheckCollision(SphereCollider* collision);
};

