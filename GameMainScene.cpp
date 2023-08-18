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

//弾/プレイヤー/敵の当たり判定のチェックを行う
void GameMainScene::HitCheck()
{

}

//弾の配列に新しくデータを作成する
void GameMainScene::SpawnBullet()
{
	
}