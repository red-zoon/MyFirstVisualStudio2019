#pragma once
#include <string>
#include <memory>

class GameObject;

class Component
{
public:
	// �R���X�g���N�^
	Component(std::shared_ptr<GameObject> gameObject);
	// �f�X�g���N�^
	~Component();
	// �X�V
	void update();
	// �`��
	void draw();
private:
	// GameObject�̖��O
	std::string _name;
};