#pragma once
#include <list>
#include <memory>

class GameObject;
class Component;

class ComponentManager {
public:
	// コンストラクタ
	ComponentManager() = default;
	// デストラクタ
	~ComponentManager();
	// コンポーネントの追加
	void addTestOutput(const std::shared_ptr<GameObject> gameObject);
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
private:
	// コンポーネントリスト
	std::list<std::shared_ptr<Component>> _components;
};