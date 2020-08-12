#include "Component.h"
#include "../GameObject/GameObject.h"

Component::Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager)
	: _ownerObjectPtr(ownerGameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
	_ownerName = _ownerObjectPtr.lock()->getName();
}

Component::Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager, const std::string& targetName)
	: _ownerObjectPtr(ownerGameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
	_ownerName = _ownerObjectPtr.lock()->getName();
	_targetName = targetName;
}

const std::string& Component::getName() {
	return _ownerName;
}