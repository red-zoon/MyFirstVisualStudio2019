#pragma once
#include "../Component.h"
#include <string>
#include <memory>

class GameObject;

class TestOutput : public Component
{
public:
	// �R���X�g���N�^
	TestOutput(std::shared_ptr<GameObject> gameObject);
	// �f�X�g���N�^
	virtual ~TestOutput() {};
	// �X�V
	virtual void update() override;
	// �`��
	virtual void draw() override;
private:
	// GameObject�̖��O
	std::string _name;
};