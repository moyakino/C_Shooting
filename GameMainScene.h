#pragma once
#include "SceneBase.h"

class GameMainScene : public SceneBase
{
private:
	int player;
	int life;

	//(仮) ポインタ配列
	int* enemy[1];
	int* bullets[1];

public:
	GameMainScene() {};
	~GameMainScene() {};

	//弾/プレイヤー/敵の当たり判定のチェックを行う
	void HitCheck();

	void Update() override;

	void Draw()const override;

	//弾の配列に新しくデータを作成する
	void SpawnBullet();
};