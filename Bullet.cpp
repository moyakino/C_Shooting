#include "DxLib.h"
#include "Bullet.h"

//�R���X�g���N�^�̈������R���X�g���N�^����Bullet�̕ϐ��ɓ���ւ���Bullet��cpp���Ŏg�p����
Bullet::Bullet(float x, float y)
{
	BulletX = x;
	BulletY = y;
	speed = 0;			//���x
	angle = 0;			//�p�x
	acceleration = 0;	//���x�̕ω���
	angulVelocity = 0;	//�p�x�̕ω���
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