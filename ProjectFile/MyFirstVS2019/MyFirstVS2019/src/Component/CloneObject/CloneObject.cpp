#include "CloneObject.h"
#include "../../GameObject/GameObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"
#include <iostream>

void CloneObject::update() {
	ComponentManager componentManager = _componentManager;
	GameObjectManager gameObjectManager = _gameObjectManager;
	if (!awake) {
		cloneNum = componentManager.countReset();
		awake = true;
	}

	if (cloneNum > 0) {
		std::shared_ptr<GameObject> obj = std::make_shared<GameObject>(_nameObject.lock()->getName());
		gameObjectManager.add(obj);
		componentManager.addTestOutput(obj, gameObjectManager, componentManager);
	}

	--cloneNum;
}

void CloneObject::draw() {
}