#include <iostream>

#include "GameObject/GameObject.h"
#include "GameObjectManager/GameObjectManager.h"

int main() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;

	std::string obj = "ObjectB";

	gameObjectManager.add(new GameObject(obj));
	gameObjectManager.add(new GameObject("ObjectB"));

	gameObjectManager.update();
	std::cout << std::endl;

	gameObjectManager.draw();
	std::cout << std::endl;

	std::cout << "プログラム終了" << std::endl;
}