#pragma once
#include "CharaBase.h"

//スティックの傾き具合からプレイヤーの状態を取得
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000

class PLAYER : public CharaBase
{
private:
	int FPSCnt;
	int Stick;
	int score;
	//int* weapon (BulletsSpawnerポインタ型)

public:
	PLAYER();
	~PLAYER();

	void Update(GameMainScene* GameMain) override;

	void Draw()const override;

	void Hit(int damage) override;

};
