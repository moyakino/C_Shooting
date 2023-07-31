#pragma once
#include "SceneBase.h"

class GameMainScene : public SceneBase
{
private:
	int player;
	int life;

	//(��) �|�C���^�z��
	int* enemy[1];
	int* bullets[1];

public:
	GameMainScene() {};
	~GameMainScene() {};

	//�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��
	void HitCheck();

	void Update() override;

	void Draw()const override;

	//�e�̔z��ɐV�����f�[�^���쐬����
	void SpawnBullet();
};