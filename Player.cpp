#include "DxLib.h"
#include "Input.h"
#include "Player.h"

PLAYER::PLAYER()
{
	locationX = 320;
	locationY = 240;
	radius = 150;
	FPSCnt = 0;
	Stick = 0;
}

PLAYER::~PLAYER()
{

}

void PLAYER::Update(GameMainScene* GameMain)
{
	//フレーム取得
	FPSCnt++;

	//左スティック
	Stick = PAD_INPUT::GetLStickX();

	if (FPSCnt > 59) {
		FPSCnt = 0;
	}
}

void PLAYER::Draw()const
{
	DrawCircle(locationX, locationY, radius, 0xff0000, TRUE);
}

void PLAYER::Hit(int damage)
{

}