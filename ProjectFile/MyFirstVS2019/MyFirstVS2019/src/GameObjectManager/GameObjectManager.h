#pragma once
#include <list>

class GameObject;

class GameObjectManager {
public:
	// �R���X�g���N�^
	GameObjectManager() = default;
	// �f�X�g���N�^
	~GameObjectManager();
	// �Q�[���I�u�W�F�N�g�̒ǉ�
	void add(GameObject* gameObject);
	// �Q�[���I�u�W�F�N�g�̍X�V
	void update();
	// �Q�[���I�u�W�F�N�g�̕`��
	void draw();
private:
	// �Q�[���I�u�W�F�N�g���X�g
	std::list<GameObject*> _gameObjects;
};