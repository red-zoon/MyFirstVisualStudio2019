#include "TestOutput.h"
#include <iostream>

#include "../../GameObject/GameObject.h"

void TestOutput::update() {
	std::shared_ptr<GameObject> gameObject = _nameObject.lock();
	std::cout << gameObject->getName() << " " << "update" << std::endl;
}

void TestOutput::draw() {
	std::shared_ptr<GameObject> gameObject = _nameObject.lock();
	std::cout << gameObject->getName() << " " << "draw" << std::endl;
}