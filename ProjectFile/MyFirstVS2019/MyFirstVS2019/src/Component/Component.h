#pragma once
#include <string>
#include <memory>

class GameObject;
class GameObjectManager;
class ComponentManager;

class Component
{
public:
	// �R���|�[�l���g
	Component(const std::shared_ptr<GameObject> gameObject, const GameObjectManager& gameObjectManager, const ComponentManager& componentManager);
	// ���z�f�X�g���N�^
	virtual ~Component() {};
	// �X�V
	virtual void update() {};
	// �`��
	virtual void draw() {};
protected:
	// GameObject�̖��O
	const std::weak_ptr<GameObject> _nameObject;
	const GameObjectManager& _gameObjectManager;
	const ComponentManager& _componentManager;
};