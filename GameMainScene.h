#pragma once
#define BULLETMAX 99

#include "SceneBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

struct SHOT
{
	int flg = 0;
};

class GameMainScene : public SceneBase
{
private:
	int player;
	int life;
	int BulletNow;
	int FPSCnt;
	int Rnd;
	//void* Test = bullets[100];
	bool SpawnFlg;

	//(仮) ポインタ配列
	Enemy* enemy[100];
	Bullet* bullets[100];

	//Bullet* BULLET = new Bullet[BULLETMAX];

public:
	GameMainScene();
	~GameMainScene();

	//弾/プレイヤー/敵の当たり判定のチェックを行う
	void HitCheck();

	SceneBase* Update() override;

	void Draw()const override;

	//弾の配列に新しくデータを作成する
	void SpawnBullet();

	PLAYER* Player;
	//Bullet* bullet;
	Enemy* ENEMY;
	BulletsSpawner* Spawner;
};