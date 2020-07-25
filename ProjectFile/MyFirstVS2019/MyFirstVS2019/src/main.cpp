#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "GameObject/GameObject.h"
#include "GameObjectManager/GameObjectManager.h"
#include "ComponentManager/ComponentManager.h"

int main() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	ComponentManager componentManager;

	std::vector<std::string> objectName { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
	int objectCount = 2;

	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("ObjectA");
	gameObjectManager.add(objA);
	componentManager.add(objA);

	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("ObjectB");
	gameObjectManager.add(objB);
	componentManager.add(objB);

	std::string command;

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
			componentManager.add(obj);
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