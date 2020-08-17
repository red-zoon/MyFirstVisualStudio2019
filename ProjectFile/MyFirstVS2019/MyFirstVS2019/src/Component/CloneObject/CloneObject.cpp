#include "CloneObject.h"
#include "../../GameObject/GameObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../TestOutput/TestOutput.h"
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
		std::shared_ptr<GameObject> obj = std::make_shared<GameObject>(_ownerObjectPtr.lock()->getName());
		_gameObjectManager.lock()->add(obj);
		_componentManager.lock()->createAndPushComponent<TestOutput>(obj);
		_componentManager.lock()->createAndPushComponent<CloneObject>(obj, _cloneCount);
	}
}