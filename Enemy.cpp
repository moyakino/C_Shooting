#include "DxLib.h"
#include "Enemy.h"

Enemy::Enemy()
{
	EnemyX = 800.0f, EnemyY =400.0f, EnemyRadius = 20;
}

Enemy::~Enemy()
{
	
}

void Enemy::Update(GameMainScene* GameMain)
{

}

void Enemy::Draw()const
{
	//“G‚ð•\Ž¦
	DrawCircle(EnemyX, EnemyY, 20, 0xffffff, TRUE);
}

void Enemy::Hit(int damage)
{

}