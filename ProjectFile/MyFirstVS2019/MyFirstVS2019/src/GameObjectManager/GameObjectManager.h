#pragma once
#include <string>
#include <list>
#include <memory>

class GameObject;

class GameObjectManager : public std::enable_shared_from_this<GameObjectManager> {
public:
	// �R���X�g���N�^
	GameObjectManager() = default;
	// �f�X�g���N�^
	~GameObjectManager() = default;
	// �Q�[���I�u�W�F�N�g�̒ǉ�
	void add(const std::shared_ptr<GameObject>& gameObject);
	// �O�̃t���[���ɒǉ����ꂽ�R���|�[�l���g�����X�g�ɔ��f
	void moveAddedComponents();
	// �Q�[���I�u�W�F�N�g�̍X�V
	void update();
	// �Q�[���I�u�W�F�N�g�̕`��
	void draw();
	// �Q�[���I�u�W�F�N�g�̕���
	std::shared_ptr<GameObject> cloneGameObject(const std::shared_ptr<GameObject>& baseObject);
	// �Q�[���I�u�W�F�N�g�̍폜
	void searchAndDestroy(const std::string& targetName);
private:
	// �Q�[���I�u�W�F�N�g���X�g
	std::list<std::shared_ptr<GameObject>> _gameObjects;
	// �N�b�V�����p�Q�[���I�u�W�F�N�g���X�g
	std::list<std::shared_ptr<GameObject>> _subGameObjects;
};