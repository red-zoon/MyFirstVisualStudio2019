#pragma once
#include "../Component.h"
#include <memory>

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
	// �`��
	virtual void draw() override;
};