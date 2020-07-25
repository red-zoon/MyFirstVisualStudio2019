#pragma once
#include <string>
#include <vector>

class GameManager {
public:
	// �R���X�g���N�^
	GameManager() = default;
	// �f�X�g���N�^
	~GameManager();
	// �Q�[�����[�v
	void run();
private:
	// ���O�̊i�[�ƃJ�E���g�p�ϐ�
	std::vector<std::string> objectName{ "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
	int objectCount{ 0 };
	// �w�ߎ󂯎��p�ϐ�
	std::string command;
};