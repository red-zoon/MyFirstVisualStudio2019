#pragma once
#include "../Component.h"
#include <memory>

class GameObject;
class GameObjectManager;

class CloneObject : public Component
{
public:
	// コンストラクタ
	using Component::Component;
	// デストラクタ
	virtual ~CloneObject() {};
	// 更新
	virtual void update() override;
	// 描画
	virtual void draw() override;
private:
	bool awake{ false };
	int cloneNum{ 0 };
};