#include <iostream>

#include "GameObject.h"
#include "GameObjectManager.h"

int main() {
	std::cout << "�v���O�����J�n" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;

	gameObjectManager.add(new GameObject("ObjectA"));
	gameObjectManager.add(new GameObject("ObjectB"));

	gameObjectManager.update();
	std::cout << std::endl;

	gameObjectManager.draw();
	std::cout << std::endl;

	std::cout << "�v���O�����I��" << std::endl;
}