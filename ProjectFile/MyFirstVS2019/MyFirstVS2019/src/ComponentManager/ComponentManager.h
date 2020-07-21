#pragma once
#include "../Component/Component.h"
#include <list>

class ComponentManager {
public:
	// �R���X�g���N�^
	ComponentManager() = default;
	// �f�X�g���N�^
	~ComponentManager();
	// �R���|�[�l���g�̒ǉ�
	void add(Component* component);
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
private:
	std::list<Component*> _components;
};