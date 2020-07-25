#include "GameManager.h"
#include <iostream>
#include <vector>
#include <memory>
#include "../GameObject/GameObject.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"

// デストラクタ
GameManager::~GameManager() {
}

void GameManager::run() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	ComponentManager componentManager;

	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("Object" + objectName[objectCount]);
	gameObjectManager.add(objA);
	componentManager.addTestOutput(objA);
	objectCount++;

	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("Object" + objectName[objectCount]);
	gameObjectManager.add(objB);
	componentManager.addTestOutput(objB);
	objectCount++;

	while (true)
	{
		componentManager.update();
		std::cout << std::endl;

		componentManager.draw();
		std::cout << std::endl;

		std::cin >> command;
		std::wcout << std::endl;

		if (command == "add") {
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + objectName[objectCount]);
			gameObjectManager.add(obj);
			componentManager.addTestOutput(obj);
			if (objectCount < 25) {
				objectCount++;
			}
			continue;
		}
		else if (command == "end") {
			break;
		}
	}

	std::cout << "プログラム終了" << std::endl;
}