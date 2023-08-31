#include "DxLib.h"
#include "Bullet.h"

//�R���X�g���N�^�̈������R���X�g���N�^����Bullet�̕ϐ��ɓ���ւ���Bullet��cpp���Ŏg�p����
Bullet::Bullet()
{
	BulletX = 0;
	BulletY = 0;
	Radius = 10;
	Damage = 100;
	speed = 0;				//���x
	angle = 0;				//�p�x
	acceleration = 0;		//���x�̕ω���
	angulVelocity = 0;		//�p�x�̕ω���
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