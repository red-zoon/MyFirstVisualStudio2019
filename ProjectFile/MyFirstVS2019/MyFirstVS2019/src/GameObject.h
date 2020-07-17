#pragma once

#include "Component.h"
#include <string>

class GameObject {
public:
	// �R���X�g���N�^
	GameObject(std::string name);
	// �f�X�g���N�^
	~GameObject();
	// �X�V
	void update();
	// �`��
	void draw();
private:
	std::string _name;
};