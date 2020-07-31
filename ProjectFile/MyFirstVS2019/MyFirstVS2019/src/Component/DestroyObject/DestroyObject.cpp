#include "DestroyObject.h"
#include "../../GameObject/GameObject.h"
#include <iostream>

void DestroyObject::update() {
	std::shared_ptr<GameObject> gameObject = _nameObject.lock();
	std::cout << gameObject->getName() << " " << "destroy" << std::endl;
}

void DestroyObject::draw() {
}