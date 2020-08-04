#pragma once
#include <memory>

class GameObject;
class GameObjectManager;
class ComponentManager;

class Component
{
public:
	// コンポーネント
	Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager);

	// 仮想デストラクタ
	virtual ~Component() {};
	// 更新
	virtual void update() {};
	// 描画
	virtual void draw() {};
protected:
	// 必要なポインタ群
	const std::weak_ptr<GameObject> _OwnerObjectPtr;
	const std::weak_ptr<GameObjectManager> _GameObjectManager;
	const std::weak_ptr<ComponentManager> _ComponentManager;
};