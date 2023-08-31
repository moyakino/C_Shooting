#include "DxLib.h"
#include "Input.h"
#include "GameClear.h"
#include "Title.h"

GameClear::GameClear()
{

}

GameClear::~GameClear()
{

}

//���͑�������
SceneBase* GameClear::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_START) == 1)
	{
		return new Title();
	}


	return this;
}


void GameClear::Draw()const
{
	SetFontSize(120);
	DrawString(400, 260, "GameClear", GetColor(255, 0, 0), TRUE);


	SetFontSize(30);
	DrawString(430, 660, "START�{�^���������Ă�������", GetColor(255, 0, 0), TRUE);
}