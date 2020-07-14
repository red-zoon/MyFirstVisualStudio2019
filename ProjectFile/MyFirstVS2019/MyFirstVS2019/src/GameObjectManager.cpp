#include "GameObjectManager.h"

// デストラクタ
GameObjectManager::~GameObjectManager() {
	for (auto gameObject : gameObjects_) {
		delete gameObject;
	}
}