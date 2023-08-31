#include "DxLib.h"
#include "Title.h"
#include "Input.h"
#include "GameMainScene.h"

Title::Title()
{
	g_MenuNumber = 0;
	g_MenuY = 0;
}

Title::~Title()
{
	
}

//入力側を書く
SceneBase* Title::Update()
{
	//メニューカーソル（三角形）
	g_MenuY = g_MenuNumber * 80;

	if (PAD_INPUT::GetLStickY() < -2000)
	{
		g_MenuNumber = 1;
	}

	if (PAD_INPUT::GetLStickY() > 2000)
	{
		g_MenuNumber = 0;
	}

	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A) == 1)
	{
		if (g_MenuNumber == 0) {
			return new GameMainScene();
		}
		else if (g_MenuNumber == 1) {
			return nullptr;
		}
	}


	return this;
}


void Title::Draw()const
{
	//DrawTriangle(240, 255 + g_MenuY, 260, 270 + g_MenuY, 240, 285 + g_MenuY, GetColor(255, 0, 0), TRUE);

	DrawBox(560, 440 + g_MenuY, 710, 510 + g_MenuY, GetColor(255, 255, 255), FALSE);

	SetFontSize(100);
	DrawFormatString(270, 200, GetColor(255, 0, 0), "Shoothing Game");

	SetFontSize(50);
	DrawString(570, 450, "START",  GetColor(0, 255, 0));
	DrawString(595, 530, "END",		GetColor(0, 255, 0));
}