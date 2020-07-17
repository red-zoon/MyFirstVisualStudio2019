#include <iostream>

#include "GameObject.h"
#include "GameObjectManager.h"

int main() {
	std::cout << "プログラム開始" << std::endl;
	std::cout << std::endl;

	GameObjectManager gameObjectManager;

	gameObjectManager.add(new GameObject("ObjectA"));
	gameObjectManager.add(new GameObject("ObjectB"));

	gameObjectManager.update();
	std::cout << std::endl;

	gameObjectManager.draw();
	std::cout << std::endl;

	std::cout << "プログラム終了" << std::endl;
}