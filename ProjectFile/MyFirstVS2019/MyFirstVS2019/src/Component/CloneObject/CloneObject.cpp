#include "CloneObject.h"
#include "../../GameObject/GameObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"
#include <iostream>

void CloneObject::update() {
	if (!awake) {
		cloneNum = _componentManager.lock()->countReset();
		awake = true;
	}

	if (cloneNum > 0) {
		std::shared_ptr<GameObject>& obj = std::make_shared<GameObject>&(_nameObject.lock()->getName());
		_gameObjectManager.lock()->add(obj);
		_componentManager.lock()->addTestOutput(obj, _gameObjectManager.lock(), _componentManager.lock());
		_componentManager.lock()->addCloneObject(obj, cloneNum, _gameObjectManager.lock(), _componentManager.lock());
	}

	--cloneNum;
}

void CloneObject::draw() {
}