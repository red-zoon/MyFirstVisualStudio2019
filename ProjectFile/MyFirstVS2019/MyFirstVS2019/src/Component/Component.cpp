#include "Component.h"
#include "../GameObject/GameObject.h"
#include <iostream>

Component::Component(std::shared_ptr<GameObject> gameObject) {
	_name = gameObject->getName();
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