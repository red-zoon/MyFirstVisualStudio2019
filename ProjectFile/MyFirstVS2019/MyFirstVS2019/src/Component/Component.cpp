#include "Component.h"

#include <iostream>

Component::~Component() {
}

void Component::update() {
	std::cout << "update" << std::endl;
}

void Component::draw() {
	std::cout << "draw" << std::endl;
}