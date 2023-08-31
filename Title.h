#pragma once
#include "SceneBase.h"

class Title : public SceneBase
{
private:
	int g_MenuNumber;	//メニューフラグ
	int g_MenuY;		//メニューカーソル用

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