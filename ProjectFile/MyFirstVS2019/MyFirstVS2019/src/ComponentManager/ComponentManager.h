#pragma once
#include <string>
#include <list>
#include <memory>
#include "../Component/TestOutput/TestOutput.h"
#include "../Component/CloneObject/CloneObject.h"
#include "../Component/DestroyObject/DestroyObject.h"

class GameObject;
class Component;
class GameObjectManager;
class ComponentManager;

class ComponentManager : public std::enable_shared_from_this<ComponentManager> {
public:
	// コンストラクタ
	ComponentManager() = default;
	// デストラクタ
	~ComponentManager();

	// コンポーネントの生成
	template<class T>
	std::shared_ptr<T>& createComponent(const std::shared_ptr<GameObject>& gameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager) {
		std::shared_ptr<T> component = std::make_shared<T>(gameObject, gameObjectManager, componentManager);
		return component;
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
	// カウンタを返す
	int countReset();
	// こいつがクローンか？
	bool checkClone();
	// 名前を返す
	std::string& getTarget();
private:
	// コンポーネントリスト
	std::list<std::shared_ptr<Component>> _components;
	// クローン用カウンタ
	int _cloneNum{ 0 };
	// クローン管理用bool
	bool _isClone{ false };
	// デストロイコマンド
	std::string _target{ "" };
};