#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"

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