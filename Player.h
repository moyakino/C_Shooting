#pragma once
#include "CharaBase.h"

//�X�e�B�b�N�̌X�������v���C���[�̏�Ԃ��擾
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000

class PLAYER : public CharaBase
{
private:
	int FPSCnt;
	int Stick;
	int score;
	//int* weapon (BulletsSpawner�|�C���^�^)

public:
	PLAYER();
	~PLAYER();

	void Update(GameMainScene* GameMain) override;

	void Draw()const override;

	void Hit(int damage) override;

};
