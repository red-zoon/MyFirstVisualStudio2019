#include "DestroyObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"
#include <iostream>

void DestroyObject::lateUpdate() {
	_gameObjectManager.lock()->searchAndDestroy(_targetName);
	_componentManager.lock()->searchAndDestroy(_targetName);
}