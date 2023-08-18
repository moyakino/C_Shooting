#include "DxLib.h"
#include "GameMainScene.h"

GameMainScene::GameMainScene()
{
	Player = new PLAYER();
}

GameMainScene::~GameMainScene()
{
	delete Player;
}

SceneBase* GameMainScene::Update()
{
	//������this��GameMain������Ԃ�����
	Player->Update(this);

	//������this��GameMain��Scene�Ƃ��ĕԂ�����
	return this;
}

void GameMainScene::Draw()const
{
	Player->Draw();

	DrawFormatString(0, 40, GetColor(255, 0, 0), "GameMain");
}

//�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��
void GameMainScene::HitCheck()
{

}

//�e�̔z��ɐV�����f�[�^���쐬����
void GameMainScene::SpawnBullet()
{
	
}