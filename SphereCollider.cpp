#include "SphereCollider.h"

SphereCollider::SphereCollider()
{
	locationX = 0;
	locationY = 0;
}

SphereCollider::~SphereCollider()
{

}

//引数でSphereColliderを受け取るSphereCollider同士の当たり判定を行い当たったかどうかを返す
//int SphereCollider::CheckCollision(SphereCollider* collision)
//{
//
//}