#pragma once

//(�����蔻��p�̃N���X)
class SphereCollider
{
private:
	float	location;		//(���S���W)
	int		radius;			//���a

public:
	SphereCollider() {};
	~SphereCollider() {};

	//������SphereCollider���󂯎��SphereCollider���m�̓����蔻����s�������������ǂ�����Ԃ�
	int CheckCollision(SphereCollider* collision);
};
