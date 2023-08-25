#pragma once
class GameMainScene;

//弾を発射するベースクラス こちらはBulletに値を渡すのみ スポーン
class BulletsSpawner
{
private:
	float	speed;				//速度
	float	angle;				//角度
	float	acceleration;		//速度の変化量
	float	angulVelocity;		//角度の変化量

public:

	BulletsSpawner();
	~BulletsSpawner();

	//引数にゲームメインシーンのポインタを受け取るSpawnBulletで弾にSpeed等の要素を受け渡す
	virtual void Shoot(GameMainScene* GameMain);
};