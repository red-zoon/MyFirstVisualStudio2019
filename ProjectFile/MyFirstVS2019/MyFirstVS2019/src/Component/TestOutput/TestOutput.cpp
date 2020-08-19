#include "TestOutput.h"
#include <iostream>
#include "../../GameObject/GameObject.h"
#include "../../ComponentManager/ComponentManager.h"

void TestOutput::update() {
	std::cout << _ownerObjectPtr.lock()->getName() << " " << "update" << std::endl;
}

void TestOutput::draw() {
	std::cout << _ownerObjectPtr.lock()->getName() << " " << "draw" << std::endl;
}

void TestOutput::createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) const {
	_componentManager.lock()->createAndPushComponent<TestOutput>(ownerGameObject);
}