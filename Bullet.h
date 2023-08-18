#pragma once
#include "SphereCollider.h"

class Bullet : public SphereCollider
{
private:
	int damage;				//�_���[�W
	float speed;			//���x
	float angle;			//�p�x
	float acceleration;		//���x�̕ω���
	float angulVelocity;	//�p�x�̕ω���

public:
	Bullet();
	~Bullet();

	void Update();

	void Draw()const;

	int GetDamage();
};