#include "DestroyObject.h"
#include "../../GameObject/GameObject.h"
#include <iostream>

void DestroyObject::update() {
	std::string command;
	std::cin >> command;
	std::cout << std::endl;

	std::cout << _ownerObjectPtr.lock()->getName() << " " << "destroy" << std::endl;
}

void DestroyObject::draw() {
}