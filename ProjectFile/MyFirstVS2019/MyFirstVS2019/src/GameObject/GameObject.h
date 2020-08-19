#pragma once
#include <string>
#include <memory>
#include <list>

class Component;

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
	const std::string& getName() const;
	// �����R���|�[�l���g���X�g��Ԃ�
	const std::list<std::weak_ptr<Component>>& getHaveComponentList() const;
	// �R���|�[�l���g���������X�g�ɒǉ�
	void pushHaveComponentList(const std::shared_ptr<Component>& component);
	// �������Ă���R���|�[�l���g��S�ď���
	void removeHaveComponentAll();
private:
	// ���O
	std::string _name;
	// �������Ă���R���|�[�l���g�̎�|�C���^
	std::list<std::weak_ptr<Component>> _haveComponents;
};