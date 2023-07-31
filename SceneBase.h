#pragma once

class SceneBase
{
private:

public:
	SceneBase() {};
	~SceneBase() {};
	
	/*ƒˆ‰¼‘zŠÖ” Update
	  virtual ‚ª ‰¼‘zŠÖ” ‚Å‚ ‚é = 0 ‚ªƒˆ‚Å‚ ‚é‚±‚Æ‚ğˆÓ–¡‚µ‚Ü‚·*/
	virtual void Update() = 0;

	virtual void Draw()const = 0;
};

