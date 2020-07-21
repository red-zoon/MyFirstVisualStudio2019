#pragma once
#include "../Component/Component.h"
#include <list>

class ComponentManager {
public:
	// コンストラクタ
	ComponentManager() = default;
	// デストラクタ
	~ComponentManager();
	// コンポーネントの追加
	void add(Component* component);
	// コンポーネントの更新
	void update();
	// コンポーネントの描画
	void draw();
private:
	std::list<Component*> _components;
};