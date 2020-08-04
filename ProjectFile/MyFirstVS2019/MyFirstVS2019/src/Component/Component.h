#pragma once
#include <memory>

class GameObject;
class GameObjectManager;
class ComponentManager;

class Component
{
public:
	// �R���|�[�l���g
	Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager);

	// ���z�f�X�g���N�^
	virtual ~Component() {};
	// �X�V
	virtual void update() {};
	// �`��
	virtual void draw() {};
protected:
	// �K�v�ȃ|�C���^�Q
	const std::weak_ptr<GameObject> _OwnerObjectPtr;
	const std::weak_ptr<GameObjectManager> _GameObjectManager;
	const std::weak_ptr<ComponentManager> _ComponentManager;
};