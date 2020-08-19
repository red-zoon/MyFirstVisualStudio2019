#pragma once
#include "../Component.h"

class TestOutput : public Component
{
public:
	// �R���X�g���N�^
	using Component::Component;
	// �f�X�g���N�^
	virtual ~TestOutput() = default;
	// �X�V
	virtual void update() override;
	// �`��
	virtual void draw() override;
	// ���g�̃N���[�����쐬
	virtual void createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) override;
};