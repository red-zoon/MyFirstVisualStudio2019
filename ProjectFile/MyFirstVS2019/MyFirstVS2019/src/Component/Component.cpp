#include "Component.h"
#include <iostream>

Component::Component(GameObject* gameobject) {
	_name = gameobject->getName();
}

// �f�X�g���N�^
Component::~Component() {
}

void Component::update() {
	std::cout << _name << " " << "update" << std::endl;
}

void Component::draw() {
	std::cout << _name << " " << "draw" << std::endl;
}