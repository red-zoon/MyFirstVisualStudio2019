#include "ComponentManager.h"
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

void ComponentManager::lateUpdate() {
	for (const auto& component : _components) {
		component->lateUpdate();
	}
}

void ComponentManager::searchAndDestroy(const std::string& targetName) {
	int counter = 0;
	for (const auto& component : _components) {
		std::string name = component->getName();

		if (name == targetName) {
			_components.erase(std::next(_components.begin(), counter));
			return;
		}
		counter++;
	}
}