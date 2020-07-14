#pragma once

#include "GameObject.h"
#include <vector>

class GameObjectManager {
public:
	// コンストラクタ
	GameObjectManager() = default;
	// デストラクタ
	~GameObjectManager();
private:
	std::vector<GameObject*> gameObjects_;
};