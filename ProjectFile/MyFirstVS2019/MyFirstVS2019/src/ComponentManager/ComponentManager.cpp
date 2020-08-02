#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"

// �f�X�g���N�^
ComponentManager::~ComponentManager() {
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

int ComponentManager::countReset() {
	return _cloneNum;
}

bool ComponentManager::checkClone() {
	return _isClone;
}

std::string& ComponentManager::getTarget() {
	return _target;
}