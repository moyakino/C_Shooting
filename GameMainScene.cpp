#include "DxLib.h"
#include "GameMainScene.h"
#include "Input.h"

GameMainScene::GameMainScene()
{
	player = 0;
	life = 0;
	Hit = 0;

	Player = new PLAYER();
	Spawner = new BulletsSpawner();
	bullet = new Bullet();
	ENEMY = new Enemy();
	Clear = new GameClear();
	Over = new GameOver();

	for (int i = 0; i < BULLETMAX; i++) {
		enemy[i] = nullptr;
		bullets[i] = nullptr;
	}
}

GameMainScene::~GameMainScene()
{
	delete Player;
	delete bullet;
	delete ENEMY;
	delete Spawner;
	delete Clear;
	delete Over;
	
	for (int i = 0; i < BULLETMAX; i++) {
		delete bullets[i];
		delete enemy[i];
	}
}

SceneBase* GameMainScene::Update()
{
	if (ENEMY->CollisionHit(bullet->GetBulletX(), bullet->GetBulletY(), bullet->GetBulletRadius(), ENEMY->GetLocationX(), ENEMY->GetLocationY(), ENEMY->GetRadius()) == true)
	{
		ENEMY->Hit(bullet->GetBulletDamage());
		bullet->SetDrawFlg(FALSE);
		return new GameClear();
	}
	

	Player->Update(this);
	ENEMY->Update(this);

	bullet->Update(Player->GetLocationX(), Player->GetLocationY(), Spawner->GetBulletSpeed());

	if (Player->GetShootON() == true) {
		bullet->SetDrawFlg(TRUE);
	}

	

	return this;								//ここのthisはGameMainをSceneとして返したい
}

void GameMainScene::Draw()const
{
	Player->Draw();
	bullet->Draw();
	ENEMY->Draw();
}


void GameMainScene::SpawnBullet()					//弾の配列に新しくデータを作成する
{
	
}

//弾/プレイヤー/敵の当たり判定のチェックを行う
void GameMainScene::HitCheck()
{

}

