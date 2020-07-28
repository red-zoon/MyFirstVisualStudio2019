#pragma once
#include <string>
#include <memory>

class GameObject;

class Component
{
public:
	// �R���|�[�l���g
	explicit Component(std::shared_ptr<GameObject> gameObject);
	// ���z�f�X�g���N�^
	virtual ~Component() {};
	// �X�V
	virtual void update() {};
	// �`��
	virtual void draw() {};
protected:
	// GameObject�̖��O
	std::string& _name;
};