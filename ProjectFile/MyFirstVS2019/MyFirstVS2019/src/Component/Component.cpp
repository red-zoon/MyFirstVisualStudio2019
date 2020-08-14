#include "Component.h"
#include "../GameObject/GameObject.h"

Component::Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager)
	: _ownerObjectPtr(ownerGameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
}

const std::string& Component::getName() const {
	return _ownerObjectPtr.lock()->getName();
}

bool Component::isDead() const {
	return _isDead;
}

void Component::isDeadOn() {
	_isDead = true;
}