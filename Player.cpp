#include "DxLib.h"
#include "Input.h"
#include "Player.h"

bool PLAYER::ShootON;
float PLAYER::PlayerX;
float PLAYER::PlayerY;

PLAYER::PLAYER()
{
    PlayerX = 0.0f, PlayerY = 0.0f;
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
    PlayerX = locationX;
    PlayerY = locationY;

	StickX = PAD_INPUT::GetLStickX();
	StickY = PAD_INPUT::GetLStickY();
	A_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_A);
	B_Btn = PAD_INPUT::OnButton(XINPUT_BUTTON_B);

    if (A_Btn == TRUE) {
        ShootON = true;
    }
    
    if (B_Btn == TRUE) {
        ShootON = false;
    }

    PlayerMove();
}

void PLAYER::Draw()const
{
	//プレイヤーを表示
	DrawCircle(locationX, locationY, radius, 0xff0000, TRUE);

    DrawFormatString(0, 300, GetColor(255, 255, 255), "Aボタン ShootON %d", ShootON);
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