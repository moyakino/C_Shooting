#include "SphereCollider.h"

SphereCollider::SphereCollider()
{
	locationX = 0.0f;
	locationY = 0.0f;
	radius = 0;
}

SphereCollider::~SphereCollider()
{

}

//引数でSphereColliderを受け取るSphereCollider同士の当たり判定を行い当たったかどうかを返す
//int SphereCollider::CheckCollision(SphereCollider* collision)
//{
//
//}