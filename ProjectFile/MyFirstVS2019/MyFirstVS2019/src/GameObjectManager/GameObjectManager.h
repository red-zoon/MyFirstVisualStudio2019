#pragma once

#include "GameObject.h"
#include <list>

class GameObjectManager {
public:
	// コンストラクタ
	GameObjectManager() = default;
	// デストラクタ
	~GameObjectManager();
	// ゲームオブジェクトの追加
	void add(GameObject* gameObject);
	// ゲームオブジェクトの更新
	void update();
	// ゲームオブジェクトの描画
	void draw();
private:
	std::list<GameObject*> gameObjects_;
};