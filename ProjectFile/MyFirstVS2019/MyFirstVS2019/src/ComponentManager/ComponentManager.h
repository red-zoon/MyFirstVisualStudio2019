#pragma once
#include <string>
#include <list>
#include <memory>

class GameObject;
class Component;
class GameObjectManager;
class ComponentManager;

class ComponentManager {
public:
	// コンストラクタ
	ComponentManager() = default;
	// デストラクタ
	~ComponentManager();
	// コンポーネントの追加
	void addTestOutput(const std::shared_ptr<GameObject> gameObject, const std::shared_ptr<GameObjectManager> gameObjectManager, const std::shared_ptr<ComponentManager> componentManager);
	void addCloneObject(const std::shared_ptr<GameObject> gameObject, int& num, const std::shared_ptr<GameObjectManager> gameObjectManager, const std::shared_ptr<ComponentManager> componentManager);
	void addDestroyObject(const std::shared_ptr<GameObject> gameObject, const std::string& target, const std::shared_ptr<GameObjectManager> gameObjectManager, const std::shared_ptr<ComponentManager> componentManager);
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
	// カウンタを返す
	int countReset();
	// 名前を返す
	std::string& getTarget();
private:
	// コンポーネントリスト
	std::list<std::shared_ptr<Component>> _components;
	// クローン用カウンタ
	int _cloneNum{ 0 };
	// デストロイコマンド
	std::string _target{ "" };
};