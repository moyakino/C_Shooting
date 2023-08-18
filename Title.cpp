#include "DxLib.h"
#include "Title.h"
#include "Input.h"
#include "GameMainScene.h"

Title::Title()
{

}

Title::~Title()
{
	
}

//“ü—Í‘¤‚ğ‘‚­
SceneBase* Title::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_START) == 1)
	{
		return new GameMainScene();
	}


	return this;
}


void Title::Draw()const
{
	DrawFormatString(0, 40, GetColor(255, 0, 0), "Title");
}