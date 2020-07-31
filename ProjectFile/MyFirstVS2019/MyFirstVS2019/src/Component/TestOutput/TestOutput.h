#pragma once
#include "../Component.h"

class TestOutput : public Component
{
public:
	// コンストラクタ
	using Component::Component;
	// デストラクタ
	virtual ~TestOutput() {};
	// 更新
	virtual void update() override;
	// 描画
	virtual void draw() override;
};