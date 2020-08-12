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
	Component(const std::shared_ptr<GameObject>& ownerGameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager, const std::shared_ptr<ComponentManager>& componentManager);

	// ���z�f�X�g���N�^
	virtual ~Component() {};
	// �X�V
	virtual void update() {};
	// �`��
	virtual void draw() {};
	// �`��
	virtual void lateUpdate() {};
	// �폊���I�u�W�F�N�g�̖��O��Ԃ�
	const std::string& getName() const;
protected:
	// �K�v�ȃ|�C���^�Q
	const std::weak_ptr<GameObject> _ownerObjectPtr;
	const std::weak_ptr<GameObjectManager> _gameObjectManager;
	const std::weak_ptr<ComponentManager> _componentManager;
};