#include "DxLib.h"
#include "FPS.h"
#include "Input.h"
#include "SceneManager.h"
#include "Title.h"

#define SCREEN_BIT_32 32	//�𑜓x
#define SCREEN_HEIGHT 720	//��ʂ̍���
#define SCREEN_WIDHT 1280	//��ʂ̕�

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// �E�B���h�E���[�h�ŋN��
	if (ChangeWindowMode(TRUE) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// ��ʃT�C�Y��ύX
	if (SetGraphMode(SCREEN_WIDHT, SCREEN_HEIGHT, SCREEN_BIT_32) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	//SetWindowSize(SCREEN_WIDHT, SCREEN_HEIGHT);

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager sceneMng(dynamic_cast<SceneBase*>(new Title()));
	Fps fps;

	//�Q�[�����[�v
	while (ProcessMessage() != -1 && sceneMng.Update() != nullptr)
	{
		ClearDrawScreen();

		PAD_INPUT::UpdateKey();

		sceneMng.Draw();

		//�����I��
		if (PAD_INPUT::OnButton(XINPUT_BUTTON_BACK))
		{
			break;
		}

		// ESC�ł��I��
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}

		fps.Update();	//FPS�v��

		fps.Draw();		//FPS�`��

		fps.Wait();		//FPS����

		ScreenFlip();
	}

	// DX���C�u�����̏I������
	DxLib_End();

	return 0;
}