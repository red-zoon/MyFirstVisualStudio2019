#include "GameObject.h"

// コンストラクタ
GameObject::GameObject(const std::string& name) {
	_name = name;
}

void GameObject::update() {
}

void GameObject::draw() {
}

const std::string& GameObject::getName() const {
	return _name;
}