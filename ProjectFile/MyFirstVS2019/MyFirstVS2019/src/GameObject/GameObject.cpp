#include "GameObject.h"

// �R���X�g���N�^
GameObject::GameObject(const std::string& name) {
	_name = name;
}

// �f�X�g���N�^
GameObject::~GameObject() {
}

void GameObject::update() {
}

void GameObject::draw() {
}

const std::string GameObject::getName() {
	return _name;
}