#include "DxLib.h"
#include "Bullet.h"

//コンストラクタの引数をコンストラクタ内でBulletの変数に入れ替えてBulletのcpp内で使用する
Bullet::Bullet()
{
	BulletX = 0;
	BulletY = 0;
	Radius = 10;
	Damage = 100;
	speed = 0;				//速度
	angle = 0;				//角度
	acceleration = 0;		//速度の変化量
	angulVelocity = 0;		//角度の変化量
	BulletShootFlg = false;
	BulletDrawFlg = false;
	BulletHitFlg = false;
}

Bullet::~Bullet()
{

}

void Bullet::Update(float x, float y, float Speed)
{
		if (BulletX > 1280) {
			BulletDrawFlg = false;
			BulletShootFlg = false;
			acceleration = 0;
			BulletX = 0;
			BulletY = 0;
		}


		if (BulletDrawFlg == true) {

			if (BulletShootFlg != true) {
				BulletX = x;
				BulletY = y;
				BulletShootFlg = true;
			}

			speed = Speed;
			acceleration = acceleration + speed;
			BulletX = BulletX + acceleration;
		}
	
}

void Bullet::Draw() const
{
	if (BulletDrawFlg == true) {
		DrawCircle(BulletX + 30, BulletY, Radius, GetColor(0, 255, 0), 1);
	}
}

int Bullet::SetDrawFlg(int Flg)
{
	BulletDrawFlg = Flg;

	return BulletDrawFlg;
}