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
}

void GameObject::draw() {
}

std::string& GameObject::getName() {
	return _name;
}