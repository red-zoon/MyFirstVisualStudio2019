#include "Component.h"

Component::Component(const std::shared_ptr<GameObject>& gameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager)
	: _gameObject(gameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
}