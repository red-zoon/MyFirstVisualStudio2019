#pragma once
#include "../GameObject/GameObject.h"
#include "../Component/Component.h"
#include <list>

class ComponentManager {
public:
	// �R���X�g���N�^
	ComponentManager() = default;
	// �f�X�g���N�^
	~ComponentManager();
	// �R���|�[�l���g�̒ǉ�
	void add(GameObject* gameObject);
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
private:
	// �R���|�[�l���g���X�g
	std::list<Component*> _components;
};