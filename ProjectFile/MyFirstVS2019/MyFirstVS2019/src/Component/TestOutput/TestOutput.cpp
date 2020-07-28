#include "TestOutput.h"
#include "../../GameObject/GameObject.h"
#include <iostream>

void TestOutput::update() {
	std::cout << _name << " " << "update" << std::endl;
}

void TestOutput::draw() {
	std::cout << _name << " " << "draw" << std::endl;
}