#include "Component.h"
#include "../GameObject/GameObject.h"

Component::Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager)
	: _ownerObjectPtr(ownerGameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
	_ownerName = _ownerObjectPtr.lock()->getName();
}

const std::string& Component::getName() {
	return _ownerName;
}