#include "DxLib.h"
#include "GameMainScene.h"

GameMainScene::GameMainScene()
{

}

GameMainScene::~GameMainScene()
{

}

SceneBase* GameMainScene::Update()
{
	return this;
}

void GameMainScene::Draw()const
{
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