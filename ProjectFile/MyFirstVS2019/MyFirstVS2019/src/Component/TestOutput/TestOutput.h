#pragma once
#include "../Component.h"
#include <string>
#include <memory>

class GameObject;

class TestOutput : public Component
{
public:
	// コンストラクタ
	TestOutput(std::shared_ptr<GameObject> gameObject);
	// デストラクタ
	virtual ~TestOutput() {};
	// 更新
	virtual void update() override;
	// 描画
	virtual void draw() override;
private:
	// GameObjectの名前
	std::string _name;
};