#include "Component.h"
#include "../GameObject/GameObject.h"

Component::Component(const std::shared_ptr<GameObject> gameObject, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager)
	: _nameObject(gameObject), _gameObjectManager(gameObjectManager), _componentManager(componentManager) {
}