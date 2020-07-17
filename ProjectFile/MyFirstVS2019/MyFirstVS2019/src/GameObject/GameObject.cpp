#include "GameObject.h"
#include <iostream>
#include <string>

// コンストラクタ
GameObject::GameObject(const std::string& name) {
	_name = name;
}

// デストラクタ
GameObject::~GameObject() {
}

void GameObject::update() {
	std::cout << _name << " " << "update" << std::endl;
}

void GameObject::draw() {
	std::cout << _name << " " << "draw" << std::endl;
}