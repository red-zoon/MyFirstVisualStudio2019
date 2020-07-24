#include "GameObject.h"
#include <iostream>

// �R���X�g���N�^
GameObject::GameObject(const std::string& name) {
	_name = name;
}

// �f�X�g���N�^
GameObject::~GameObject() {
}

void GameObject::update() {
	_componentManager.update();
}

void GameObject::draw() {
	_componentManager.draw();
}

const std::string& GameObject::getName() {
	return _name;
}