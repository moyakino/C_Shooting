#pragma once
#include "SphereCollider.h"

//Bullet ‚Í GameMain‚Ìƒ|ƒCƒ“ƒ^”z—ñ‚©‚çBulletSpawner‚©‚ç“n‚³‚ê‚½î•ñ‚ðˆø‚«Œp‚¢‚Å‚±‚±‚Å“®‚©‚·ˆ—‚ð‘‚­

class Bullet : public SphereCollider
{
private:
	float	BulletX;
	float	BulletY;
	float	speed;				//‘¬“x
	float	angle;				//Šp“x
	float	acceleration;		//‘¬“x‚Ì•Ï‰»—Ê
	float	angulVelocity;		//Šp“x‚Ì•Ï‰»—Ê

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