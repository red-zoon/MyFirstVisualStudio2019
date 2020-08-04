#include "CloneObject.h"
#include "../../GameObject/GameObject.h"
#include "../../GameObjectManager/GameObjectManager.h"
#include "../../ComponentManager/ComponentManager.h"
#include <iostream>

void CloneObject::update() {
	if (!awake) {
		awake = true;
	}

	if (cloneNum > 0 && isClone == false) {
		std::shared_ptr<GameObject> obj = std::make_shared<GameObject>(_gameObject.lock()->getName());
		_GameObjectManager.lock()->add(obj);
		std::shared_ptr<TestOutput> testOutPut = _ComponentManager.lock()->createComponent<TestOutput>(obj, _GameObjectManager.lock());
		_ComponentManager.lock()->addComponent(testOutPut);

		--cloneNum;
		return;
	}

	isClone = true;
}

void CloneObject::draw() {
}