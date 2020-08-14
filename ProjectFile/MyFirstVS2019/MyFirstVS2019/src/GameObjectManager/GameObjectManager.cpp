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

// ゲームオブジェクトの削除
void GameObjectManager::searchAndDestroy(const std::string& targetName) {
	for (const auto& gameobject : _gameObjects) {
		if (gameobject->getName() == targetName) {
			gameobject->removeHaveComponentAll();
		}
	}

	_gameObjects.remove_if([targetName](const auto& gameObject) {return gameObject->getName() == targetName; }); // ラムダ式(時間がある時に調べる)
}