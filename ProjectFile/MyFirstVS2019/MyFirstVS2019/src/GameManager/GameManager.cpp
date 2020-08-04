#include "GameManager.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"
#include "../Component/TestOutput/TestOutput.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"

void GameManager::run() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	std::shared_ptr<GameObjectManager> gameObjectManager = std::make_shared<GameObjectManager>();
	std::shared_ptr<ComponentManager> componentManager = std::make_shared<ComponentManager>();

	// 名前の格納とカウント用変数
	std::vector<char> objectName{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int objectCount{ 0 };

	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("Object" + std::string{ objectName[objectCount] });
	gameObjectManager->add(objA);
	std::shared_ptr<TestOutput> testOutPut1 = componentManager->createComponent<TestOutput>(objA, gameObjectManager);
	componentManager->addComponent(testOutPut1);
	objectCount++;

	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("Object" + std::string{ objectName[objectCount] });
	gameObjectManager->add(objB);
	std::shared_ptr<TestOutput> testOutPut2 = componentManager->createComponent<TestOutput>(objB, gameObjectManager);
	componentManager->addComponent(testOutPut2);
	objectCount++;

	while (true)
	{
		componentManager->update();
		std::cout << std::endl;

		componentManager->draw();
		std::cout << std::endl;

		std::string command;
		std::cin >> command;
		std::cout << std::endl;

		if (command == "add") {
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + std::string{ objectName[objectCount] });
			gameObjectManager->add(obj);
			std::shared_ptr<TestOutput> testOutPut = componentManager->createComponent<TestOutput>(obj, gameObjectManager);
			componentManager->addComponent(testOutPut);
			if (objectCount < (int)objectName.size()) {
				++objectCount;
			}
			continue;
		}
		else if (command == "clone") {
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + std::string{ objectName[objectCount] });
			gameObjectManager->add(obj);
			std::shared_ptr<TestOutput> testOutPut = componentManager->createComponent<TestOutput>(obj, gameObjectManager);
			componentManager->addComponent(testOutPut);

			std::shared_ptr<CloneObject> cloneObject = componentManager->createComponent<CloneObject>(obj, gameObjectManager);
			componentManager->addComponent(cloneObject);

			if (objectCount < (int)objectName.size()) {
				++objectCount;
			}
			continue;
		}
		else if (command == "destroy") {
			std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + std::string{ objectName[objectCount] });
			gameObjectManager->add(obj);
			std::shared_ptr<TestOutput> testOutPut = componentManager->createComponent<TestOutput>(obj, gameObjectManager);
			componentManager->addComponent(testOutPut);

			std::shared_ptr<DestroyObject> destroyObject = componentManager->createComponent<DestroyObject>(obj, gameObjectManager);
			componentManager->addComponent(destroyObject);

			if (objectCount < (int)objectName.size()) {
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