#include "GameManager.h"
#include <iostream>
#include <string>
#include "../Component/Component.h"
#include "../Component/TestOutput/TestOutput.h"
#include "../Component/CloneObject/CloneObject.h"
#include "../Component/DestroyObject/DestroyObject.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "../GameObjectManager/GameObjectManager.h"

void GameManager::run() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	std::shared_ptr<GameObjectManager> gameObjectManager = std::make_shared<GameObjectManager>();
	std::shared_ptr<ComponentManager> componentManager = std::make_shared<ComponentManager>(gameObjectManager);


	std::shared_ptr<GameObject> objA = createAndAddGameObject(gameObjectManager);
	componentManager->createAndPushComponent<TestOutput>(objA);

	std::shared_ptr<GameObject> objB = createAndAddGameObject(gameObjectManager);
	componentManager->createAndPushComponent<TestOutput>(objB);

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
			std::shared_ptr<GameObject> obj = createAndAddGameObject(gameObjectManager);
			componentManager->createAndPushComponent<TestOutput>(obj);
			continue;
		}
		else if (command == "clone") {
			std::shared_ptr<GameObject> obj = createAndAddGameObject(gameObjectManager);
			componentManager->createAndPushComponent<TestOutput>(obj);
			componentManager->createAndPushComponent<CloneObject>(obj);
			continue;
		}
		else if (command == "destroy") {
			std::shared_ptr<GameObject> obj = createAndAddGameObject(gameObjectManager);
			componentManager->createAndPushComponent<TestOutput>(obj);
			componentManager->createAndPushComponent<DestroyObject>(obj);
			continue;
		}
		else if (command == "end") {
			break;
		}
	}

	std::cout << "プログラム終了" << std::endl;
}

std::shared_ptr<GameObject> GameManager::createAndAddGameObject(const std::shared_ptr<GameObjectManager>& ownerManager){
	std::shared_ptr<GameObject> obj = std::make_shared<GameObject>("Object" + std::string{ _objectName[_objectCount] });
	ownerManager->add(obj);
	if (_objectCount < (int)_objectName.size()) {
		_objectCount++;
	}
	return obj;
}