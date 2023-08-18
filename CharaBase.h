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

	//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��
	virtual void Update(GameMainScene* GameMain);

	virtual void Draw()const;

	//�����Ń_���[�W���󂯎��_���[�W���󂯂��Ƃ��̏���
	virtual void Hit(int damage);
};
