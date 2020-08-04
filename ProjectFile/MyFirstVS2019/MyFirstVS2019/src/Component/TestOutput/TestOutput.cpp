#include "TestOutput.h"
#include <iostream>

#include "../../GameObject/GameObject.h"

void TestOutput::update() {
	std::cout << _gameObject.lock()->getName() << " " << "update" << std::endl;
}

void TestOutput::draw() {
	std::cout << _gameObject.lock()->getName() << " " << "draw" << std::endl;
}