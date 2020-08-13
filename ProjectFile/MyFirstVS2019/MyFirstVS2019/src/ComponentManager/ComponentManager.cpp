#include "ComponentManager.h"
#include "../Component/Component.h"

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

void ComponentManager::removeDeadComponent() {
	_components.remove_if([](const auto& component) {return component->isDead(); });
}

void ComponentManager::searchAndDestroy(const std::string& targetName) {
	_components.remove_if([targetName](const auto& component) {return component->getName() == targetName; });
}