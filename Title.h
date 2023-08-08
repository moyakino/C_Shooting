#pragma once
#include "SceneBase.h"

class Title : public SceneBase
{
private:
	

public:

	//コンストラクタ
	Title();

	//デストラクタ
	~Title();

	//描画以外の更新を実装する
	SceneBase* Update();

	//描画に関することを実装する
	void Draw() const;
};