#include "ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"
#include "../Component/TestOutput/TestOutput.h"
#include "../Component/CloneObject/CloneObject.h"
#include "../Component/DestroyObject/DestroyObject.h"

// デストラクタ
ComponentManager::~ComponentManager() {
}

void ComponentManager::addTestOutput(const std::shared_ptr<GameObject> gameObject, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager) {
	std::shared_ptr<TestOutput> testOutput = std::make_shared<TestOutput>(gameObject, gameObjectManager, componentManager);
	_components.push_back(testOutput);
}

void ComponentManager::addCloneObject(const std::shared_ptr<GameObject> gameObject, int& num, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager) {
	_cloneNum = num;
	std::shared_ptr<CloneObject> cloneObject = std::make_shared<CloneObject>(gameObject, gameObjectManager, componentManager);
	_components.push_back(cloneObject);
}

void ComponentManager::addDestroyObject(const std::shared_ptr<GameObject> gameObject, const std::string& target, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager) {
	_target = target;
	std::shared_ptr<DestroyObject> destroyObject = std::make_shared<DestroyObject>(gameObject, gameObjectManager, componentManager);
	_components.push_back(destroyObject);
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

std::string& ComponentManager::getTarget() {
	return _target;
}