#pragma once

class SceneBase
{
private:

public:
	SceneBase() {};
	~SceneBase() {};
	
	/*純粋仮想関数 Update
	  virtual が 仮想関数 である = 0 が純粋であることを意味します*/
	virtual void Update() = 0;

	virtual void Draw()const = 0;
};

