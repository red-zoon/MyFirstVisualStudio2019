#pragma once
#include "../Component.h"
#include <string>

class GameObject;

class DestroyObject : public Component
{
public:
	// �R���X�g���N�^
	DestroyObject(const std::shared_ptr<GameObject>& ownerGameObject,
		const std::shared_ptr<GameObjectManager>& gameObjectManager,
		const std::shared_ptr<ComponentManager>& componentManager,
		const std::string& targetName
	);
	// �f�X�g���N�^
	virtual ~DestroyObject() {};
	// �X�V
	virtual void lateUpdate() override;
	// ���g�̃N���[�����쐬
	virtual void createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) override;
private:
	// �^�[�Q�b�g�̖��O���i�[
	std::string _targetName;
};