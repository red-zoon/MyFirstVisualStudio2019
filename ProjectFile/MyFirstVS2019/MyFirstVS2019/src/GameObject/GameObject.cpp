#include "GameObject.h"
#include "../Component/Component.h"

// コンストラクタ
GameObject::GameObject(const std::string& name) {
	_name = name;
}

void GameObject::update() {
}

void GameObject::draw() {
}

const std::string& GameObject::getName() const {
	return _name;
}

const std::list<std::weak_ptr<Component>>& GameObject::getHaveComponentList() const {
	return _haveComponents;
}

void GameObject::pushHaveComponentList(const std::shared_ptr<Component>& component) {
	_haveComponents.push_back(component);
}

void GameObject::removeHaveComponentAll() {
	for (const auto& component : _haveComponents) {
		component.lock()->isDeadOn();
	}
}
