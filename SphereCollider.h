#pragma once

//(当たり判定用のクラス)
class SphereCollider
{
protected:
	float	locationX;		//X座標
	float	locationY;		//Y座標
	int		radius;			//半径

public:
	SphereCollider();
	~SphereCollider();

	//引数でSphereColliderを受け取るSphereCollider同士の当たり判定を行い当たったかどうかを返す
	int CheckCollision(SphereCollider* collision);
};
