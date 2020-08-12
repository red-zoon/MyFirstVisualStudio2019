#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"
#include <iostream>

void GameObjectManager::add(const std::shared_ptr<GameObject>& gameObject) {
	_gameObjects.push_back(gameObject);
}

void GameObjectManager::update() {
	for (const auto& gameObject : _gameObjects) {
		gameObject->update();
	}
}

void GameObjectManager::draw() {
	for (const auto& gameObject : _gameObjects) {
		gameObject->draw();
	}
}

// �Q�[���I�u�W�F�N�g�̍폜
void GameObjectManager::searchAndDestroy(const std::string& targetName) {
	_gameObjects.remove_if([targetName](const auto& gameObject) {return gameObject->getName() == targetName; }); // �����_��(���Ԃ����鎞�ɒ��ׂ�)

	//int counter = 0;
	//for (const auto& gameObject : _gameObjects) {
	//	std::string name = gameObject->getName();

	//	if (name == targetName) {
	//		_gameObjects.erase(std::next(_gameObjects.begin(), counter));
	//		return;
	//	}

	//	counter++;
	//}
}