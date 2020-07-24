#pragma once
#include <string>
#include <memory>

class GameObject;

class Component
{
public:
	// コンストラクタ
	Component(std::shared_ptr<GameObject> gameObject);
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