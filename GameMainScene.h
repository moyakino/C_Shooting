#pragma once
#define BULLETMAX 99

#include "SceneBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include "BulletsSpawner.h"
#include "GameClear.h"
#include "GameOver.h"

struct SHOT
{
	int flg = 0;
};

class GameMainScene : public SceneBase
{
private:
	int player;
	int life;
	int Hit;

	//Bullet* BULLET = new Bullet[BULLETMAX];

public:
	GameMainScene();
	~GameMainScene();

	//�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��
	void HitCheck();

	SceneBase* Update() override;

	void Draw()const override;

	//�e�̔z��ɐV�����f�[�^���쐬����
	void SpawnBullet();

	PLAYER* Player;
	Bullet* bullet;
	Enemy* ENEMY;
	BulletsSpawner* Spawner;
	GameClear* Clear;
	GameOver* Over;
	//(��) �|�C���^�z��
	Enemy* enemy[100];
	Bullet* bullets[100];
};