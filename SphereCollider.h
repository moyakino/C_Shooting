#pragma once

//(�����蔻��p�̃N���X)
class SphereCollider
{
protected:
	float	locationX;		//X���W
	float	locationY;		//Y���W
	int		radius;			//���a

public:

	SphereCollider();
	~SphereCollider();

	//������SphereCollider���󂯎��SphereCollider���m�̓����蔻����s�������������ǂ�����Ԃ�
	//int CheckCollision(SphereCollider* collision);

	bool CollisionHit(float px, float py, float pr, float ex, float ey, float er);

	float GetLocationX() { return locationX; }
	float GetLocationY() { return locationY; }
	int	  GetRadius()	 { return radius; }
};
