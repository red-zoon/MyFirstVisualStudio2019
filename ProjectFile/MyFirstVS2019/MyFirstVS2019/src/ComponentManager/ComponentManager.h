#pragma once
#include <string>
#include <list>
#include <memory>

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
	template<class T>
	std::shared_ptr<T> createAndPushComponent(const std::shared_ptr<GameObject>& ownerGameObject) {
		std::shared_ptr<T> component = std::make_shared<T>(ownerGameObject, _gameObjectManager, shared_from_this());
		_components.push_back(component);
		return component;
	}
	template<class T>
	std::shared_ptr<DestroyObject> createAndPushComponent(const std::shared_ptr<GameObject>& ownerGameObject, const std::string& targetName) {
		std::shared_ptr<DestroyObject> component = std::make_shared<DestroyObject>(ownerGameObject, _gameObjectManager, shared_from_this(), targetName);
		_components.push_back(component);
		return component;
	}
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
	// コンポーネントの遅延更新
	void lateUpdate();
	// コンポーネントの削除
	void searchAndDestroy(const std::string& targetName);
private:
	// ゲームオブジェクトマネージャーのポインタ
	const std::shared_ptr<GameObjectManager> _gameObjectManager;
	// コンポーネントリスト
	std::list<std::shared_ptr<Component>> _components;
};