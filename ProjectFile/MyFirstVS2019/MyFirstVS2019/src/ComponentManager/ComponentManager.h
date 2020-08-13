#pragma once
#include <string>
#include <list>
#include <memory>
#include "../GameObject/GameObject.h"

class GameObject;
class Component;
class DestroyObject;
class GameObjectManager;
class ComponentManager;

class ComponentManager : public std::enable_shared_from_this<ComponentManager> {
public:
	// コンストラクタ
	ComponentManager(const std::shared_ptr<GameObjectManager>& gameObjectManager);
	// デストラクタ
	~ComponentManager() = default;
	// コンポーネントの生成
	template<class T, class... Args>
	std::shared_ptr<T> createAndPushComponent(const std::shared_ptr<GameObject>& ownerGameObject,const Args&... args) {
		std::shared_ptr<T> component = std::make_shared<T>(ownerGameObject, _gameObjectManager, shared_from_this(), args...);
		_components.push_back(component);
		ownerGameObject->pushHaveComponentList(component);
		return component;
	}
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
	// コンポーネントの遅延更新
	void lateUpdate();
	// 死亡フラグの立ったコンポーネントを除去
	void removeDeadComponent();
	// コンポーネントの削除
	void searchAndDestroy(const std::string& targetName);
private:
	// ゲームオブジェクトマネージャーのポインタ
	const std::shared_ptr<GameObjectManager> _gameObjectManager;
	// コンポーネントリスト
	std::list<std::shared_ptr<Component>> _components;
};