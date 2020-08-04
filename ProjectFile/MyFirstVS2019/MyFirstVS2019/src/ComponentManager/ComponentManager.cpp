#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"

// コンストラクタ
ComponentManager::ComponentManager(const std::shared_ptr<GameObjectManager>& gameObjectManager) : _gameObjectManager(gameObjectManager) {
}

void ComponentManager::update() {
	for (const auto& component : _components) {
		component->update();
	}
}

void ComponentManager::draw() {
	for (const auto& component : _components) {
		component->draw();
	}
}