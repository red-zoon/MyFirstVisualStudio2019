#include <iostream>
#include <memory>

#include "GameObject/GameObject.h"
#include "GameObjectManager/GameObjectManager.h"
#include "ComponentManager/ComponentManager.h"

int main() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;
	ComponentManager componentManager;
	
	std::shared_ptr<GameObject> objA = std::make_shared<GameObject>("ObjectA");
	gameObjectManager.add(objA);
	componentManager.add(objA);
	std::shared_ptr<GameObject> objB = std::make_shared<GameObject>("ObjectB");
	gameObjectManager.add(objB);
	componentManager.add(objB);

	componentManager.update();
	std::cout << std::endl;

	componentManager.draw();
	std::cout << std::endl;

	std::cout << "プログラム終了" << std::endl;
}