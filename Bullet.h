#pragma once
#include "SphereCollider.h"

//Bullet �� GameMain�̃|�C���^�z�񂩂�BulletSpawner����n���ꂽ���������p���ł����œ���������������

class Bullet : public SphereCollider
{
private:
	float	BulletX;
	float	BulletY;
	float	speed;				//���x
	float	angle;				//�p�x
	float	acceleration;		//���x�̕ω���
	float	angulVelocity;		//�p�x�̕ω���

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