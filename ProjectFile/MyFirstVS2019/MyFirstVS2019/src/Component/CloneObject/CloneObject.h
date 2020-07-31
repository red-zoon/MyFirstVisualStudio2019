#pragma once
#include "../Component.h"
#include <memory>

class GameObject;
class GameObjectManager;

class CloneObject : public Component
{
public:
	// �R���X�g���N�^
	using Component::Component;
	// �f�X�g���N�^
	virtual ~CloneObject() {};
	// �X�V
	virtual void update() override;
	// �`��
	virtual void draw() override;
private:
	bool awake{ false };
	int cloneNum{ 0 };
};