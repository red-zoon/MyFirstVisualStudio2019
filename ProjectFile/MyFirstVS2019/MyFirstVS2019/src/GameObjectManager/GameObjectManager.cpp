#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"

// �f�X�g���N�^
GameObjectManager::~GameObjectManager() {
	for (auto gameObject : _gameObjects) {
		delete gameObject;
	}
}

void GameObjectManager::add(GameObject* gameObject) {
	_gameObjects.push_back(gameObject);
}

void GameObjectManager::update() {
	for (auto gameObject : _gameObjects) {
		gameObject->update();
	}
}

void GameObjectManager::draw() {
	for (auto gameObject : _gameObjects) {
		gameObject->draw();
	}
}