#pragma once
#include "SceneBase.h"

class Title : public SceneBase
{
private:
	

public:

	//�R���X�g���N�^
	Title();

	//�f�X�g���N�^
	~Title();

	//�`��ȊO�̍X�V����������
	SceneBase* Update();

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const;
};