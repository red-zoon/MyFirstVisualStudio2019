#pragma once
#include "../Component.h"

class GameObject;
class GameObjectManager;

class CloneObject : public Component
{
public:
	// �R���X�g���N�^
	CloneObject(const std::shared_ptr<GameObject>& ownerGameObject,
		const std::shared_ptr<GameObjectManager>& gameObjectManager,
		const std::shared_ptr<ComponentManager>& componentManager,
		const int& cloneNum
	);
	// �f�X�g���N�^
	virtual ~CloneObject() {};
	// �X�V
	virtual void update() override;
	// �X�V
	virtual void lateUpdate() override;
	// ���g�̃N���[�����쐬
	virtual void createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) override;
private:
	// �����̉񐔂��J�E���g
	int _cloneCount;
	// ��������?
	bool _onFirstTime{ true };
};