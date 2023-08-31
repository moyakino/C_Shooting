#include "DxLib.h"
#include "Input.h"
#include "Player.h"

bool PLAYER::ShootON;

PLAYER::PLAYER()
{
	locationX = 300.0f, locationY = 400.0f, radius = 20;
	StickX = 0, StickY = 0;
	A_Btn = 0, B_Btn = 0;
	Xspeed = 0, Yspeed = 0;
    ShootON = false;
}

PLAYER::~PLAYER()
{

}

void PLAYER::Update(GameMainScene* GameMain)
{
	StickX = PAD_INPUT::GetLStickX();
	StickY = PAD_INPUT::GetLStickY();
	A_Btn = PAD_INPUT::OnButton(XINPUT_BUTTON_A);

    if (A_Btn == TRUE) {
        ShootON = true;
    }
    else {
        ShootON = false;
    }

    PlayerMove();
}

void PLAYER::Draw()const
{
	//プレイヤーを表示
	DrawCircle(locationX, locationY, radius, 0xff0000, TRUE);
}

void PLAYER::Hit(int damage)
{

}

void PLAYER::PlayerMove()
{
    //右移動
    if (StickX > RIGHT_MOVE) {
        Xspeed = 5;
        locationX = locationX + Xspeed;
    }

    //左移動
    if (StickX < LEFT_MOVE) {
        Xspeed = -5;
        locationX = locationX + Xspeed;
    }

    if (StickY < UP_MOVE) {
        Yspeed = 5;
        locationY = locationY + Yspeed;
    }

    if (StickY > DOWN_MOVE) {
        Yspeed = -5;
        locationY = locationY + Yspeed;
    }

}