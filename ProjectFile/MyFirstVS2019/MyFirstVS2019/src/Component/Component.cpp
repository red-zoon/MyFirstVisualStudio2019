#include "Component.h"
#include <iostream>

// �f�X�g���N�^
Component::~Component() {
}

void Component::update() {
	std::cout << "Component" << "update" << std::endl;
}

void Component::draw() {
	std::cout << "Component" << "draw" << std::endl;
}