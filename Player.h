#pragma once
#include "CharaBase.h"

class Player : public CharaBase
{
private:
	int score;
	//int* weapon (BulletsSpawnerƒ|ƒCƒ“ƒ^Œ^)

public:
	Player();
	~Player();

	void Update(GameMainScene* GameMain) override;

	void Draw()const override;

	void Hit(int damage) override;

};
