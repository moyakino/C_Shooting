#pragma once
#include "CharaBase.h"
#include "Bullet.h"

//�X�e�B�b�N�̌X�������v���C���[�̏�Ԃ��擾
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000
#define UP_MOVE 2000
#define DOWN_MOVE -2000

class PLAYER : public CharaBase
{
private:
	
	int StickX, StickY;
	int A_Btn, B_Btn;
	int Xspeed, Yspeed;

public:
	static bool ShootON;

	PLAYER();
	~PLAYER();

	void Update(GameMainScene* GameMain) override;

	void Draw()const override;

	void Hit(int damage) override;

	void PlayerMove();

	static bool GetShootON() { return ShootON; }	//A�{�^���������ꂽ���H
};
