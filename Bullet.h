#pragma once
#include "SphereCollider.h"

class Bullet : public SphereCollider
{
private:
	int damage;				//ダメージ
	float speed;			//速度
	float angle;			//角度
	float acceleration;		//速度の変化量
	float angulVelocity;	//角度の変化量

public:
	Bullet();
	~Bullet();

	void Update();

	void Draw()const;

	int GetDamage();
};