#pragma once

class Component
{
public:
	// 仮想デストラクタ
	virtual ~Component() {};
	// 更新
	virtual void update() {};
	// 描画
	virtual void draw() {};
};