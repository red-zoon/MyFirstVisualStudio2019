#include "GameManager.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "../GameObject/GameObject.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"

void GameManager::run() {
	std::cout << "�v���O�����J�n" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	ComponentManager componentManager;

	// ���O�̊i�[�ƃJ�E���g�p�ϐ�
	std::vector<char> objectName{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int objectCount{ 0 };
	
	std::string defName1{ objectName[objectCount] };
	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("Object" + defName1);
	gameObjectManager.add(objA);
	componentManager.addTestOutput(objA);
	objectCount++;

	std::string defName2{ objectName[objectCount] };
	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("Object" + defName2);
	gameObjectManager.add(objB);
	componentManager.addTestOutput(objB);
	objectCount++;

	while (true)
	{
		componentManager.update();
		std::cout << std::endl;

		componentManager.draw();
		std::cout << std::endl;

		std::string command;
		std::cin >> command;
		std::wcout << std::endl;

		if (command == "add") {
			std::string name{ objectName[objectCount] };
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + name);
			gameObjectManager.add(obj);
			componentManager.addTestOutput(obj);
			if (objectCount < 25) {
				++objectCount;
			}
			continue;
		}
		else if (command == "end") {
			break;
		}
	}

	std::cout << "�v���O�����I��" << std::endl;
}