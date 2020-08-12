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
	Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager);
	Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager, const std::string& targetName);

	// 仮想デストラクタ
	virtual ~Component() {};
	// 更新
	virtual void update() {};
	// 描画
	virtual void draw() {};
	// 描画
	virtual void lateUpdate() {};
	// 被所持オブジェクトの名前を返す
	const std::string& getName();
protected:
	// 被所持オブジェクトの名前
	std::string _ownerName;
	// 必要なポインタ群
	const std::weak_ptr<GameObject> _ownerObjectPtr;
	const std::weak_ptr<GameObjectManager> _gameObjectManager;
	const std::weak_ptr<ComponentManager> _componentManager;
	// ターゲットの名前を格納
	std::string _targetName{ "" };
};