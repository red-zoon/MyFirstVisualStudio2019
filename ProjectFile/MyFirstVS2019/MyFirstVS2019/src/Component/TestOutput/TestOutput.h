#pragma once
#include "../Component.h"

class TestOutput : public Component
{
public:
	// コンストラクタ
	using Component::Component;
	// デストラクタ
	virtual ~TestOutput() = default;
	// 更新
	virtual void update() override;
	// 描画
	virtual void draw() override;
	// 自身のクローンを作成
	virtual void createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) override;
};