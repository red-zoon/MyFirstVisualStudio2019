#pragma once
#include <list>
#include <memory>

class GameObject;

class GameObjectManager {
public:
	// �R���X�g���N�^
	GameObjectManager() = default;
	// �f�X�g���N�^
	~GameObjectManager();
	// �Q�[���I�u�W�F�N�g�̒ǉ�
	void add(std::shared_ptr<GameObject> gameObject);
	// �Q�[���I�u�W�F�N�g�̍X�V
	void update();
	// �Q�[���I�u�W�F�N�g�̕`��
	void draw();
private:
	// �Q�[���I�u�W�F�N�g���X�g
	std::list<std::shared_ptr<GameObject>> _gameObjects;
};