#include "Component.h"

Component::Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager)
	: _ownerObjectPtr(ownerGameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
}