#include "GameObjectManager.h"

// �f�X�g���N�^
GameObjectManager::~GameObjectManager() {
	for (auto gameObject : gameObjects_) {
		delete gameObject;
	}
}