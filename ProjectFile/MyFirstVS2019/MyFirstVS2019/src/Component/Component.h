#pragma once
#include <string>
#include <memory>

class GameObject;

class Component
{
public:
	// コンポーネント
	explicit Component(std::shared_ptr<GameObject> gameObject);
	// 仮想デストラクタ
	virtual ~Component() {};
	// 更新
	virtual void update() {};
	// 描画
	virtual void draw() {};
protected:
	// GameObjectの名前
	std::string& _name;
};