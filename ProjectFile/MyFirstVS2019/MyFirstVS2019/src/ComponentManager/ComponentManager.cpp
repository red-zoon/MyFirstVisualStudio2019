#include "ComponentManager.h"
#include "../GameObject/GameObject.h"

// デストラクタ
ComponentManager::~ComponentManager() {
	for (auto component : _components) {
		delete component;
	}
}

void ComponentManager::add(GameObject* gameObject) {
	_components.push_back(new Component(gameObject));
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