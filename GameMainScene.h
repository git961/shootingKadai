#pragma once

#include "AbstractScene.h"
class GameMainScene:public AbstractScene
{
public:
	//メンバ変数
	int player;
	int life;	//残機
	int* enemy[2];	//
	int* bullets[2];

	int Color;

	//プロトタイプ宣言
	GameMainScene();						//コンストラクタ
	~GameMainScene();//デストラクタ

	void HitCheck();	//弾・プレイヤー・敵の当たり判定のチェックを行う
	void SpawnBullet();	//弾の配列に新しくデータを作成する

	void Update() override;				//更新処理
	void Draw() const override;			//描画処理
	AbstractScene* Change() override;	//遷移先の指定

};