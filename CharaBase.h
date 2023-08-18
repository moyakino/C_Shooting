#pragma once
class GameMainScene;
#include "SphereCollider.h"


class CharaBase : public SphereCollider
{
private:
	float	speed;
	int		image;

public:
	CharaBase();
	~CharaBase();

	//引数にゲームメインシーンのポインタを受け取る
	virtual void Update(GameMainScene* GameMain);

	virtual void Draw()const;

	//引数でダメージを受け取るダメージを受けたときの処理
	virtual void Hit(int damage);
};
