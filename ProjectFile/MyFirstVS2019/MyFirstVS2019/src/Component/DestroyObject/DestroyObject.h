#pragma once
#include "../Component.h"
#include <string>

class GameObject;

class DestroyObject : public Component
{
public:
	// �R���X�g���N�^
	using Component::Component;
	// �f�X�g���N�^
	virtual ~DestroyObject() {};
	// �X�V
	virtual void update() override;
	// �X�V
	virtual void lateUpdate() override;
private:
	// ���������m�F
	bool onFirstTime{ true };
	bool onFirstTimeLate{ true };
	// �^�[�Q�b�g�̖��O���i�[
	std::string targetName{ "" };
};