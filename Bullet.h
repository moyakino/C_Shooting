#pragma once
#include "SphereCollider.h"

//Bullet は GameMainのポインタ配列からBulletSpawnerから渡された情報を引き継いでここで動かす処理を書く

class Bullet : public SphereCollider
{
private:
	float	BulletX;
	float	BulletY;
	float	Radius;
	int		Damage;
	float	speed;				//速度
	float	angle;				//角度
	float	acceleration;		//速度の変化量
	float	angulVelocity;		//角度の変化量
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