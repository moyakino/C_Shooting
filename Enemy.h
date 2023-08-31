#pragma once

#pragma once
#include "CharaBase.h"

class Enemy : public CharaBase
{
private:
	int hp;			//敵の体力
	int point;		//(スコアの加算量)

	bool EnemyDrawFlg;
	//int* weapon (BulletsSpawnerポインタ型)

public:
	Enemy();
	~Enemy();

	void Update(GameMainScene* GameMain) override;

	void Draw()const override;

	void Hit(int damage) override;

};

