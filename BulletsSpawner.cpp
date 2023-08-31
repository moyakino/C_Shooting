#include "BulletsSpawner.h"
#include "GameMainScene.h"


BulletsSpawner::BulletsSpawner()
{
	Enemyspeed = 1;
	speed = 1;
	angle = 0;
	acceleration = 0;
	angulVelocity = 0;
}

BulletsSpawner::~BulletsSpawner()
{

}

//引数にゲームメインシーンのポインタを受け取るSpawnBulletで弾を生成する
void BulletsSpawner::Shoot(GameMainScene* GameMain)
{
	
}