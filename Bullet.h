#pragma once
#include "SphereCollider.h"

//Bullet は GameMainのポインタ配列からBulletSpawnerから渡された情報を引き継いでここで動かす処理を書く

class Bullet : public SphereCollider
{
private:
	float	BulletX;
	float	BulletY;
	float	speed;				//速度
	float	angle;				//角度
	float	acceleration;		//速度の変化量
	float	angulVelocity;		//角度の変化量

public:

	Bullet(float x, float y);
	~Bullet();

	void Update();

	void Draw()const;

	void GetSpeed(const float speed) { this->speed = speed; }
	void GetAngle(const float angle) { this->angle = angle; }
	void GetAcceleration(const float acceleration) { this->acceleration = acceleration; }
	void GetAngulVelocity(const float angulVelocity) { this->angulVelocity = angulVelocity; }
};