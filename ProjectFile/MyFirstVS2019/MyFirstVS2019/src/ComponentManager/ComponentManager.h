#pragma once
#include <string>
#include <list>
#include <memory>

class GameObject;
class Component;
class GameObjectManager;
class ComponentManager;

class ComponentManager {
public:
	// �R���X�g���N�^
	ComponentManager() = default;
	// �f�X�g���N�^
	~ComponentManager();
	// �R���|�[�l���g�̒ǉ�
	void addTestOutput(const std::shared_ptr<GameObject> gameObject, const std::shared_ptr<GameObjectManager> gameObjectManager, const std::shared_ptr<ComponentManager> componentManager);
	void addCloneObject(const std::shared_ptr<GameObject> gameObject, int& num, const std::shared_ptr<GameObjectManager> gameObjectManager, const std::shared_ptr<ComponentManager> componentManager);
	void addDestroyObject(const std::shared_ptr<GameObject> gameObject, const std::string& target, const std::shared_ptr<GameObjectManager> gameObjectManager, const std::shared_ptr<ComponentManager> componentManager);
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
	// �J�E���^��Ԃ�
	int countReset();
	// ���O��Ԃ�
	std::string& getTarget();
private:
	// �R���|�[�l���g���X�g
	std::list<std::shared_ptr<Component>> _components;
	// �N���[���p�J�E���^
	int _cloneNum{ 0 };
	// �f�X�g���C�R�}���h
	std::string _target{ "" };
};