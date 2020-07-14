#pragma once

#include "GameObject.h"
#include <vector>

class GameObjectManager {
public:
	// �R���X�g���N�^
	GameObjectManager() = default;
	// �f�X�g���N�^
	~GameObjectManager();
private:
	std::vector<GameObject*> gameObjects_;
};