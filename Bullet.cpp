#include "DxLib.h"
#include "Bullet.h"

//コンストラクタの引数をコンストラクタ内でBulletの変数に入れ替えてBulletのcpp内で使用する
Bullet::Bullet(float x, float y)
{
	BulletX = x;
	BulletY = y;
	speed = 0;			//速度
	angle = 0;			//角度
	acceleration = 0;	//速度の変化量
	angulVelocity = 0;	//角度の変化量
}

Bullet::~Bullet()
{

}

void Bullet::Update()
{	
	
}

void Bullet::Draw() const
{

}