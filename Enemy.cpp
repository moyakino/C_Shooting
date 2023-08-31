#include "DxLib.h"
#include "Enemy.h"

Enemy::Enemy()
{
	locationX = 800.0f, locationY = 400.0f, radius = 60;
	hp = 100;
	EnemyDrawFlg = false;
}

Enemy::~Enemy()
{
	
}

void Enemy::Update(GameMainScene* GameMain)
{
	if (hp > 0) {
		EnemyDrawFlg = true;
	}
	else {
		EnemyDrawFlg = false;
	}
}

void Enemy::Draw()const
{
	//“G‚ð•\Ž¦
	if (EnemyDrawFlg == true) {
		DrawCircle(locationX, locationY, radius, 0xffffff, TRUE);
		DrawFormatString(locationX - 35, locationY - 20, GetColor(255, 0, 0), "%d", hp);
	}
}

void Enemy::Hit(int damage)
{
	hp = hp - damage;
}