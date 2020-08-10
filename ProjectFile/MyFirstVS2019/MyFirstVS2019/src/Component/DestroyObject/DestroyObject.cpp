#include "DestroyObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"
#include <iostream>

void DestroyObject::update() {
	if (onFirstTime) {
		std::cin >> targetName;

		onFirstTime = false;
	}
}

void DestroyObject::lateUpdate() {
	if (onFirstTimeLate) {
		_gameObjectManager.lock()->searchAndDestroy(targetName);
		_componentManager.lock()->searchAndDestroy(targetName);

		onFirstTimeLate = false;
	}
}