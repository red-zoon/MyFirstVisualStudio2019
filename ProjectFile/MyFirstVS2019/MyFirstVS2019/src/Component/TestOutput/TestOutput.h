#pragma once
#include "../Component.h"
#include <memory>

class GameObject;

class TestOutput : public Component
{
public:
	// �R���X�g���N�^
	using Component::Component;
	// �f�X�g���N�^
	virtual ~TestOutput() {};
	// �X�V
	virtual void update() override;
	// �`��
	virtual void draw() override;
};