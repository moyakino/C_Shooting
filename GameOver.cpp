#include "DxLib.h"
#include "Input.h"
#include "GameOver.h"
#include "Title.h"

GameOver::GameOver()
{

}

GameOver::~GameOver()
{

}

//“ü—Í‘¤‚ğ‘‚­
SceneBase* GameOver::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_START) == 1)
	{
		return new Title();
	}


	return this;
}


void GameOver::Draw()const
{
	SetFontSize(120);
	DrawString(400, 260, "GameOver", GetColor(255, 0, 0), TRUE);


	SetFontSize(30);
	DrawString(430, 660, "STARTƒ{ƒ^ƒ“‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢", GetColor(255, 0, 0), TRUE);
}