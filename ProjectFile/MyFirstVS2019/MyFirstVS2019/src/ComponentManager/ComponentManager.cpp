#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"

// デストラクタ
ComponentManager::~ComponentManager() {
}

void ComponentManager::update() {
	for (const auto& component : _components) {
		component->update();
	}
}

void ComponentManager::draw() {
	for (const auto& component : _components) {
		component->draw();
	}
}