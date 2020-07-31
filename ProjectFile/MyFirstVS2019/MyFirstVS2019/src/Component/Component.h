#pragma once
#include <string>
#include <memory>

class GameObject;
class GameObjectManager;
class ComponentManager;

class Component
{
public:
	// コンポーネント
	explicit Component(const std::shared_ptr<GameObject> gameObject, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager);
	// 仮想デストラクタ
	virtual ~Component() {};
	// 更新
	virtual void update() {};
	// 描画
	virtual void draw() {};
protected:
	// GameObjectの名前
	const std::string& _name;
	const GameObjectManager& _gameObjectManager;
	const ComponentManager& _componentManager;
};