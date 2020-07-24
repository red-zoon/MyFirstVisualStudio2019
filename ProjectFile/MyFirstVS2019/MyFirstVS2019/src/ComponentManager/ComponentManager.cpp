#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"

// デストラクタ
ComponentManager::~ComponentManager() {
}

void ComponentManager::add(std::shared_ptr<GameObject> gameObject) {
	std::shared_ptr<Component> component = std::make_shared<Component>(gameObject);
	_components.push_back(component);
}

void ComponentManager::update() {
	for (auto component : _components) {
		component->update();
	}
}

void ComponentManager::draw() {
	for (auto component : _components) {
		component->draw();
	}
}