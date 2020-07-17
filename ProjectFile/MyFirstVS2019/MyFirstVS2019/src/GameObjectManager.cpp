#include "GameObjectManager.h"

// デストラクタ
GameObjectManager::~GameObjectManager() {
	for (auto gameObject : gameObjects_) {
		delete gameObject;
	}
}

void GameObjectManager::add(GameObject* gameObject) {
	gameObjects_.push_back(gameObject);
}

void GameObjectManager::update() {
	for (auto gameObject : gameObjects_) {
		gameObject->update();
	}
}

void GameObjectManager::draw() {
	for (auto gameObject : gameObjects_) {
		gameObject->draw();
	}
}