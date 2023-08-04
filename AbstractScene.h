#pragma once

class AbstractScene
{
public:
	//Œã‚©‚ç’†g‚ğã‘‚«‚µ‚½‚¢ŠÖ”‚Ì‘O‚Évirtual‚Æ‹L“ü

	virtual void Update() = 0;
	virtual void Draw() const = 0;
	virtual AbstractScene* Change();
};