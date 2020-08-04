#pragma once
#include <string>
#include <list>
#include <memory>

class GameObject;
class Component;
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
	std::shared_ptr<T> createComponent(const std::shared_ptr<GameObject>& gameObject) {
		return std::make_shared<T>(gameObject, _gameObjectManager, shared_from_this()); // shared_from_this()を使用する際はどこかで親クラスのshared_ptrを作っている必要がある。
	}
	// コンポーネントの追加
	template <class T>
	void addComponent(const std::shared_ptr<T>& component) {
		_components.push_back(component);
	}
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
private:
	const std::shared_ptr<GameObjectManager> _gameObjectManager;
	// コンポーネントリスト
	std::list<std::shared_ptr<Component>> _components;
};