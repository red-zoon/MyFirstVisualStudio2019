#pragma once

//#include "Component.h"
#include <string>

class GameObject {
public:
	// コンストラクタ
	GameObject(const std::string& name);
	// デストラクタ
	~GameObject();
	// 更新
	void update();
	// 描画
	void draw();
private:
	std::string _name;
};