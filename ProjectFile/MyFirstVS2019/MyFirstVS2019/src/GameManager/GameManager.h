#pragma once
#include <vector>
#include <memory>

class GameObject;
class GameObjectManager;

class GameManager {
public:
	// �R���X�g���N�^
	GameManager() = default;
	// �Q�[�����[�v
	void run();
private:
	// ���O�̊i�[�ƃJ�E���g�p�ϐ�
	std::vector<char> _objectName{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int objectCount{ 0 };
	// �Q�[���I�u�W�F�N�g�̍쐬�A�ǉ�
	std::shared_ptr<GameObject> createAndAddGameObject(const std::shared_ptr<GameObjectManager>& ownerManager);
};