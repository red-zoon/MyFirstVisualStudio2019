#include "Component.h"
#include "../GameObject/GameObject.h"

Component::Component(std::shared_ptr<GameObject> gameObject) : _name(gameObject->getName()){
}
