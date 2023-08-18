#include "DxLib.h"
#include "FPS.h"
#include "Input.h"
#include "SceneManager.h"
#include "Title.h"

#define SCREEN_BIT_32 32	//解像度
#define SCREEN_HEIGHT 720	//画面の高さ
#define SCREEN_WIDHT 1280	//画面の幅

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// ウィンドウモードで起動
	if (ChangeWindowMode(TRUE) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// 画面サイズを変更
	if (SetGraphMode(SCREEN_WIDHT, SCREEN_HEIGHT, SCREEN_BIT_32) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	//SetWindowSize(SCREEN_WIDHT, SCREEN_HEIGHT);

	// DXライブラリの初期化
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

	SceneManager sceneMng(dynamic_cast<SceneBase*>(new Title()));
	Fps fps;

	//ゲームループ
	while (ProcessMessage() != -1 && sceneMng.Update() != nullptr)
	{
		ClearDrawScreen();

		PAD_INPUT::UpdateKey();

		sceneMng.Draw();

		//強制終了
		if (PAD_INPUT::OnButton(XINPUT_BUTTON_BACK))
		{
			break;
		}

		// ESCでも終了
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}

		fps.Update();	//FPS計測

		fps.Draw();		//FPS描画

		fps.Wait();		//FPS同期

		ScreenFlip();
	}

	// DXライブラリの終了処理
	DxLib_End();

	return 0;
}