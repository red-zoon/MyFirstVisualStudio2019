#include "GameObject.h"

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

const std::string GameObject::getName() {
	return _name;
}