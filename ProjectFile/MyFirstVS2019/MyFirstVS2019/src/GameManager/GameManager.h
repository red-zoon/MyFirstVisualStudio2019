#pragma once
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
	// �Q�[���I�u�W�F�N�g�̍쐬�A�ǉ�
	std::shared_ptr<GameObject> createAndAddGameObject(const std::shared_ptr<GameObjectManager>& ownerManager);
private:
	// ���O�̊i�[�ƃJ�E���g�p�ϐ�
	const char _startChar{ 'A' };
	const char _endChar{ 'Z' };
	int _objectCount{ 0 };
};