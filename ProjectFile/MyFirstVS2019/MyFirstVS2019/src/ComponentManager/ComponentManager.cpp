#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"

// デストラクタ
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