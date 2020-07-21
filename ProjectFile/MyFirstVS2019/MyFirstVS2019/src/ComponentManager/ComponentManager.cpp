#include "ComponentManager.h"

// �f�X�g���N�^
ComponentManager::~ComponentManager() {
	for (auto component : _components) {
		delete component;
	}
}

void ComponentManager::add(Component* component) {
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