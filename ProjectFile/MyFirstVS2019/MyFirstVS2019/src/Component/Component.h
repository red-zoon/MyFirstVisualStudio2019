#pragma once
#include <string>

class GameObject;

#include "../GameObject/GameObject.h"
#include <string>

class Component
{
public:
	// コンストラクタ
	Component(GameObject* gameObject);
	// デストラクタ
	~Component();
	// 更新
	void update();
	// 描画
	void draw();
private:
	// GameObjectの名前
	std::string _name;
};