#include "DxLib.h"
#include "GameMainScene.h"
#include "Input.h"

GameMainScene::GameMainScene()
{
	player = 0;
	life = 0;
	BulletNow = 0;
	FPSCnt = 0;
	Rnd = 0;
	SpawnFlg = false;

	Player = new PLAYER();
	Spawner = new BulletsSpawner();
	//bullet = new Bullet();
	ENEMY = new Enemy();

	for (int i = 0; i < BULLETMAX; i++) {
		enemy[i] = nullptr;
		bullets[i] = nullptr;
	}
}

GameMainScene::~GameMainScene()
{
	delete Player;
	//delete bullet;
	delete ENEMY;
	delete Spawner;
	
	for (int i = 0; i < BULLETMAX; i++) {
		delete bullets[i];
	}
}

SceneBase* GameMainScene::Update()
{
	FPSCnt++;

	Player->Update(this);
	if (Player->GetShootON() == true && SpawnFlg == false) {
		SpawnBullet();
	}

	if (Player->GetShootON() == true && BulletNow < BULLETMAX) {
		if (FPSCnt % 10 == 0) {
			BulletNow++;
			//bullets[BulletNow];
		}
	}

	if (FPSCnt > 59) {
		FPSCnt = 0;
	}

	return this;								//������this��GameMain��Scene�Ƃ��ĕԂ�����
}

void GameMainScene::Draw()const
{
	Player->Draw();

	if (Player->GetShootON() == true && BulletNow < BULLETMAX) {
		DrawCircle(300, 400, 20, GetColor(255, 255, 0), 1);
	}

	//�f�o�b�N�p
	DrawFormatString(0, 320, GetColor(255, 255, 255), "�e���� SpawnFlg  %d", SpawnFlg);
	DrawFormatString(0, 340, GetColor(255, 255, 255), "�e�\�� BulletNow %d", BulletNow);
}


void GameMainScene::SpawnBullet()			//�e�̔z��ɐV�����f�[�^���쐬����
{
	for (int i = 0; i < BULLETMAX; i++) {	//�e��100������������ for���� 1�t���[���őS�ď��������
		
		bullets[i] = new Bullet(Player->GetPlayerX(), Player->GetPlayerY());			//�e�̔z��� Bullet�̃R���X�g���N�^(Bullet�̕ϐ��S�Ă��i�[���Ă���)
	}

	SpawnFlg = true;
}

//�e/�v���C���[/�G�̓����蔻��̃`�F�b�N���s��
void GameMainScene::HitCheck()
{

}

