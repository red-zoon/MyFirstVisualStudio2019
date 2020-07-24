#include <iostream>

#include "GameObject/GameObject.h"
#include "GameObjectManager/GameObjectManager.h"
#include "ComponentManager/ComponentManager.h"

int main() {
	std::cout << "�v���O�����J�n" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	ComponentManager componentManager;

	std::string obj = "ObjectA";

	gameObjectManager.add(new GameObject(obj));
	gameObjectManager.add(new GameObject("ObjectB"));

	componentManager.update();
	std::cout << std::endl;

	componentManager.draw();
	std::cout << std::endl;

	std::cout << "�v���O�����I��" << std::endl;
}