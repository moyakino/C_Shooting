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
	//ここのthisはGameMainだけを返したい
	Player->Update(this);

	//ここのthisはGameMainをSceneとして返したい
	return this;
}

void GameMainScene::Draw()const
{
	Player->Draw();

	DrawFormatString(0, 40, GetColor(255, 0, 0), "GameMain");
}

//弾/プレイヤー/敵の当たり判定のチェックを行う
void GameMainScene::HitCheck()
{

}

//弾の配列に新しくデータを作成する
void GameMainScene::SpawnBullet()
{
	
}