#pragma once
#include "SphereCollider.h"

//Bullet �� GameMain�̃|�C���^�z�񂩂�BulletSpawner����n���ꂽ���������p���ł����œ���������������

class Bullet : public SphereCollider
{
private:
	float	BulletX;
	float	BulletY;
	float	Radius;
	int		Damage;
	float	speed;				//���x
	float	angle;				//�p�x
	float	acceleration;		//���x�̕ω���
	float	angulVelocity;		//�p�x�̕ω���
	bool	BulletShootFlg;
	bool	BulletHitFlg;
	bool	BulletDrawFlg;

public:

	Bullet();
	~Bullet();

	void Update(float x, float y, float Speed);

	void Draw()const;

	int SetDrawFlg(int Flg);

	float GetBulletX()		{ return BulletX; }
	float GetBulletY()		{ return BulletY; }
	float GetBulletRadius() { return Radius; }
	int	GetBulletDamage()	{ return Damage; }
};