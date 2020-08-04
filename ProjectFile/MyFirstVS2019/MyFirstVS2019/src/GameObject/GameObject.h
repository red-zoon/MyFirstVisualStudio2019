#pragma once
#include <string>

class GameObject {
public:
	// �R���X�g���N�^
	explicit GameObject(const std::string& name);
	// �f�X�g���N�^
	~GameObject() = default;
	// �X�V
	void update();
	// �`��
	void draw();
	// ���O��Ԃ�
	const std::string& getName();
private:
	// ���O
	std::string _name;
};