#include <iostream>
#include <memory>

#include "GameObject/GameObject.h"
#include "GameObjectManager/GameObjectManager.h"

int main() {
	std::cout << "�v���O�����J�n" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	
	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("ObjectA");
	gameObjectManager.add(objA);
	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("ObjectB");
	gameObjectManager.add(objB);

	gameObjectManager.update();
	std::cout << std::endl;

	gameObjectManager.draw();
	std::cout << std::endl;

	std::cout << "�v���O�����I��" << std::endl;
}