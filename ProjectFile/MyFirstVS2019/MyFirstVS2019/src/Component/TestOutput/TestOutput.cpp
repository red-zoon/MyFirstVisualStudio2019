#include "TestOutput.h"
#include <iostream>

#include "../../GameObject/GameObject.h"

void TestOutput::update() {
	std::cout << _nameObject.lock()->getName() << " " << "update" << std::endl;
}

void TestOutput::draw() {
	std::cout << _nameObject.lock()->getName() << " " << "draw" << std::endl;
}