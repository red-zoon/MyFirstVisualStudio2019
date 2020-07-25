#include "TestOutput.h"
#include "../../GameObject/GameObject.h"
#include <iostream>

TestOutput::TestOutput(std::shared_ptr<GameObject> gameObject) {
	_name = gameObject->getName();
}

void TestOutput::update() {
	std::cout << _name << " " << "update" << std::endl;
}

void TestOutput::draw() {
	std::cout << _name << " " << "draw" << std::endl;
}