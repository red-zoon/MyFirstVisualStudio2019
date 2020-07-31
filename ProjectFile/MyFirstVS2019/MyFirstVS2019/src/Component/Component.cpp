#include "Component.h"
#include "../GameObject/GameObject.h"

Component::Component(const std::shared_ptr<GameObject> gameObject, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager)
	: _name(gameObject->getName()), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
}