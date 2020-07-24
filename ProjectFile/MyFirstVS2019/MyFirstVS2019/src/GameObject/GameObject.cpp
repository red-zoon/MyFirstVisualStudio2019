#include "GameObject.h"
#include <iostream>

// コンストラクタ
GameObject::GameObject(const std::string& name) {
	_name = name;
}

// デストラクタ
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