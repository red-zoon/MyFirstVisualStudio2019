#pragma once
#include <list>

class GameObject;
class Component;

class ComponentManager {
public:
	// コンストラクタ
	ComponentManager() = default;
	// デストラクタ
	~ComponentManager();
	// コンポーネントの追加
	void add(GameObject* gameObject);
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
private:
	// コンポーネントリスト
	std::list<Component*> _components;
};