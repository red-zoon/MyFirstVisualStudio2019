#include "DestroyObject.h"
#include "../../GameObject/GameObject.h"
#include <iostream>

void DestroyObject::update() {
	std::cout << _name << " " << "destroy" << std::endl;
}

void DestroyObject::draw() {
}