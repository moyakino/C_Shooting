#include "SphereCollider.h"
#include <math.h>

SphereCollider::SphereCollider()
{
	locationX = 0.0f;
	locationY = 0.0f;
	radius = 0;
}

SphereCollider::~SphereCollider()
{

}

//������SphereCollider���󂯎��SphereCollider���m�̓����蔻����s�������������ǂ�����Ԃ�
//int SphereCollider::CheckCollision(SphereCollider* collision)
//{
//	
//}

bool SphereCollider::CollisionHit(float px, float py, float pr, float ex, float ey, float er)
{
	if ((ex - px) * (ex - px) + (ey - py) * (ey - py) <= (pr + er) * (pr + er))
	{
		return true;
	}
	else {
		return false;
	}
}