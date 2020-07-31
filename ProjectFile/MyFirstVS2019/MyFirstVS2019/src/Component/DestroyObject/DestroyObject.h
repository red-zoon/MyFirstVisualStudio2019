#pragma once
#include "../Component.h"
#include <memory>

class GameObject;

class DestroyObject : public Component
{
public:
	// コンストラクタ
	using Component::Component;
	// デストラクタ
	virtual ~DestroyObject() {};
	// 更新
	virtual void update() override;
	// 描画
	virtual void draw() override;
};