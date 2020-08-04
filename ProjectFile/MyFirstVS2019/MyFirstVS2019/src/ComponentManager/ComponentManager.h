#pragma once
#include <string>
#include <list>
#include <memory>
#include "../Component/TestOutput/TestOutput.h"
#include "../Component/CloneObject/CloneObject.h"
#include "../Component/DestroyObject/DestroyObject.h"

class GameObject;
class Component;
class GameObjectManager;
class ComponentManager;

class ComponentManager : public std::enable_shared_from_this<ComponentManager> {
public:
	// �R���X�g���N�^
	ComponentManager() = default;
	// �f�X�g���N�^
	~ComponentManager();

	// �R���|�[�l���g�̐���
	template<class T>
	std::shared_ptr<T> createComponent(const std::shared_ptr<GameObject>& gameObject, const std::shared_ptr<GameObjectManager>& gameObjectManager) {
		return std::make_shared<T>(gameObject, gameObjectManager, shared_from_this()); // shared_from_this()���g�p����ۂ͂ǂ����Őe�N���X��shared_ptr������Ă���K�v������B
	}
	// �R���|�[�l���g�̒ǉ�
	template <class T>
	void addComponent(const std::shared_ptr<T>& component) {
		_components.push_back(component);
	}
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
private:
	// �R���|�[�l���g���X�g
	std::list<std::shared_ptr<Component>> _components;
};