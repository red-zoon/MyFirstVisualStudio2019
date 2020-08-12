#pragma once
#include "../Component.h"
#include <string>

class GameObject;

class DestroyObject : public Component
{
public:
	// コンストラクタ
	using Component::Component;
	// デストラクタ
	virtual ~DestroyObject() {};
	// 更新
	virtual void lateUpdate() override;
private:
	// 生成時か確認
	bool onFirstTime{ true };
};