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

	return this;								//ここのthisはGameMainをSceneとして返したい
}

void GameMainScene::Draw()const
{
	Player->Draw();

	if (Player->GetShootON() == true && BulletNow < BULLETMAX) {
		DrawCircle(300, 400, 20, GetColor(255, 255, 0), 1);
	}

	//デバック用
	DrawFormatString(0, 320, GetColor(255, 255, 255), "弾生成 SpawnFlg  %d", SpawnFlg);
	DrawFormatString(0, 340, GetColor(255, 255, 255), "弾表示 BulletNow %d", BulletNow);
}


void GameMainScene::SpawnBullet()			//弾の配列に新しくデータを作成する
{
	for (int i = 0; i < BULLETMAX; i++) {	//弾を100発生成したい for文は 1フレームで全て処理される
		
		bullets[i] = new Bullet(Player->GetPlayerX(), Player->GetPlayerY());			//弾の配列に Bulletのコンストラクタ(Bulletの変数全てを格納している)
	}

	SpawnFlg = true;
}

//弾/プレイヤー/敵の当たり判定のチェックを行う
void GameMainScene::HitCheck()
{

}

