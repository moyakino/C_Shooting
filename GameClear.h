#pragma once
#include "SceneBase.h"

class GameClear : public SceneBase
{
private:


public:

	//�R���X�g���N�^
	GameClear();

	//�f�X�g���N�^
	~GameClear();

	//�`��ȊO�̍X�V����������
	SceneBase* Update();

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const;
};