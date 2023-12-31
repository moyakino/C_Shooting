#pragma once
#include "GameMainScene.h"

//弾を発射するベースクラス
class BulletsSpawner
{
private:
	float speed;			//速度
	float angle;			//角度
	float acceleration;		//速度の変化量
	float angulVelocity;	//角度の変化量

public:
	BulletsSpawner();
	~BulletsSpawner();

	//引数にゲームメインシーンのポインタを受け取るSpawnBulletで弾を生成する
	virtual void Shoot(GameMainScene* GameMain);
};