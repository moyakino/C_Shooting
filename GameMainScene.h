#pragma once
#define BULLETMAX 99

#include "SceneBase.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

struct SHOT
{
	int flg = 0;
};

class GameMainScene : public SceneBase
{
private:
	int player;
	int life;
	int BulletNow;
	int FPSCnt;
	int Rnd;
	//void* Test = bullets[100];
	bool SpawnFlg;

	//(��) �|�C���^�z��
	Enemy* enemy[100];
	Bullet* bullets[100];

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
	//Bullet* bullet;
	Enemy* ENEMY;
	BulletsSpawner* Spawner;
};