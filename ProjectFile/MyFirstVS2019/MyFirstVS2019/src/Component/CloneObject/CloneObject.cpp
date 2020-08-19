#include "CloneObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"

CloneObject::CloneObject(const std::shared_ptr<GameObject>& ownerGameObject,
	const std::shared_ptr<GameObjectManager>& gameObjectManager,
	const std::shared_ptr<ComponentManager>& componentManager,
	const int& cloneNum
) : Component(ownerGameObject, gameObjectManager, componentManager), _cloneCount(cloneNum) {
};

void CloneObject::update() {
	if (_onFirstTime) {
		_onFirstTime = false;
	}
}

void CloneObject::lateUpdate() {
	if (_onFirstTime) return;

	if (_cloneCount > 0) {
		_cloneCount--;
		std::shared_ptr<GameObject> cloneObj = _gameObjectManager.lock()->cloneGameObject(_ownerObjectPtr.lock());
		_componentManager.lock()->componentCopy(_ownerObjectPtr.lock(), cloneObj);
	}
}

void CloneObject::createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) {
	_componentManager.lock()->createAndPushComponent<CloneObject>(ownerGameObject, _cloneCount);
}