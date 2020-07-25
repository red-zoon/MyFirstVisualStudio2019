#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"
#include "../Component/TestOutput/TestOutput.h"

// デストラクタ
ComponentManager::~ComponentManager() {
}

void ComponentManager::addTestOutput(std::shared_ptr<GameObject> gameObject) {
	std::shared_ptr<TestOutput> testOutput = std::make_shared<TestOutput>(gameObject);
	_components.push_back(testOutput);
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