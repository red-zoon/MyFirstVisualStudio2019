#include "Component.h"
#include "../GameObject/GameObject.h"
#include <iostream>

// デストラクタ
Component::~Component() {
}

void Component::update() {
	std::cout << "Component" << "update" << std::endl;
}

void Component::draw() {
	std::cout << "Component" << "draw" << std::endl;
}