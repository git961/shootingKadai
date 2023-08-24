#pragma once

#include "AbstractScene.h"
#include "fps.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Input.h"

class GameMainScene:public AbstractScene
{
public:
	//メンバ変数

	Player* player;
	Enemy* enemy[6];
	Bullet* bullet[20];
	XINPUT_STATE inpu;
	Input input;

	int life;	//残機

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