#pragma once

#pragma once
#include "CharaBase.h"

class Enemy : public CharaBase
{
private:
	int hp;			//�G�̗̑�
	int point;		//(�X�R�A�̉��Z��)

	bool EnemyDrawFlg;
	//int* weapon (BulletsSpawner�|�C���^�^)

public:
	Enemy();
	~Enemy();

	void Update(GameMainScene* GameMain) override;

	void Draw()const override;

	void Hit(int damage) override;

};

