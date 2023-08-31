#pragma once
#define BULLETMAX 99

#include "SceneBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "BulletsSpawner.h"
#include "GameClear.h"
#include "GameOver.h"

struct SHOT
{
	int flg = 0;
};

class GameMainScene : public SceneBase
{
private:
	int player;
	int life;
	int Hit;

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
	Bullet* bullet;
	Enemy* ENEMY;
	BulletsSpawner* Spawner;
	GameClear* Clear;
	GameOver* Over;
	//(仮) ポインタ配列
	Enemy* enemy[100];
	Bullet* bullets[100];
};