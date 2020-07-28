#pragma once
#include <list>
#include <memory>

class GameObject;
class Component;

class ComponentManager {
public:
	// �R���X�g���N�^
	ComponentManager() = default;
	// �f�X�g���N�^
	~ComponentManager();
	// �R���|�[�l���g�̒ǉ�
	void addTestOutput(const std::shared_ptr<GameObject> gameObject);
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
private:
	// �R���|�[�l���g���X�g
	std::list<std::shared_ptr<Component>> _components;
};