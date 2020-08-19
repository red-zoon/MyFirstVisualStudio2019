#include "DestroyObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"

// コンストラクタ
DestroyObject::DestroyObject(const std::shared_ptr<GameObject>& ownerGameObject,
	const std::shared_ptr<GameObjectManager>& gameObjectManager,
	const std::shared_ptr<ComponentManager>& componentManager,
	const std::string& targetName
) : Component(ownerGameObject, gameObjectManager, componentManager), _targetName(targetName) {
};

void DestroyObject::lateUpdate() {
	_gameObjectManager.lock()->searchAndDestroy(_targetName);
}

void DestroyObject::createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) const {
	_componentManager.lock()->createAndPushComponent<DestroyObject>(ownerGameObject, _targetName);
}