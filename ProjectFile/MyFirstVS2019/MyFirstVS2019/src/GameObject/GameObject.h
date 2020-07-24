#pragma once
#include "../ComponentManager/ComponentManager.h"
#include <string>

class GameObject {
public:
	// �R���X�g���N�^
	GameObject(const std::string& name);
	// �f�X�g���N�^
	~GameObject();
	// �X�V
	void update();
	// �`��
	void draw();
	// ���O��Ԃ�
	const std::string& getName();
private:
	// ���O
	std::string _name;
	// �R���|�[�l���g�}�l�[�W���[
	ComponentManager _componentManager;
};