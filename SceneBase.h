#pragma once

class SceneBase
{
private:

public:
	SceneBase() {};
	~SceneBase() {};
	
	/*�������z�֐� Update
	  virtual �� ���z�֐� �ł��� = 0 �������ł��邱�Ƃ��Ӗ����܂�*/
	virtual void Update() = 0;

	virtual void Draw()const = 0;
};

