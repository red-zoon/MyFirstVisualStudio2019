#pragma once
#include <string>

class GameObject;

#include "../GameObject/GameObject.h"
#include <string>

class Component
{
public:
	// �R���X�g���N�^
	Component(GameObject* gameObject);
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