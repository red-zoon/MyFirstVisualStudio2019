#include "GameManager.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "../GameObject/GameObject.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"

void GameManager::run() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	ComponentManager componentManager;

	// 名前の格納とカウント用変数
	std::vector<char> objectName{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int objectCount{ 0 };
	
	std::string defName1{ objectName[objectCount] };
	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("Object" + defName1);
	gameObjectManager.add(objA);
	componentManager.addTestOutput(objA, gameObjectManager, componentManager);
	objectCount++;

	std::string defName2{ objectName[objectCount] };
	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("Object" + defName2);
	gameObjectManager.add(objB);
	componentManager.addTestOutput(objB, gameObjectManager, componentManager);
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
			componentManager.addTestOutput(obj, gameObjectManager, componentManager);
			if (objectCount < 25) {
				++objectCount;
			}
			continue;
		}
		else if (command == "clone") {
			std::string name{ objectName[objectCount] };
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + name);
			gameObjectManager.add(obj);
			componentManager.addTestOutput(obj, gameObjectManager, componentManager);

			int cloneNum;
			std::cin >> cloneNum;
			std::cout << std::endl;

			componentManager.addCloneObject(obj, cloneNum, gameObjectManager, componentManager);
			if (objectCount < 25) {
				++objectCount;
			}
			continue;
		}
		else if (command == "destroy") {
			std::string name{ objectName[objectCount] };
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + name);
			gameObjectManager.add(obj);
			componentManager.addTestOutput(obj, gameObjectManager, componentManager);

			std::cin >> command;
			std::cout << std::endl;
			componentManager.addDestroyObject(obj, command, gameObjectManager, componentManager);

			if (objectCount < 25) {
				++objectCount;
			}
			continue;
		}
		else if (command == "end") {
			break;
		}
	}

	std::cout << "プログラム終了" << std::endl;
}