#pragma once
#include <string>
#include <list>
#include <memory>
#include "../GameObject/GameObject.h"

class GameObject;
class Component;
class DestroyObject;
class GameObjectManager;
class ComponentManager;

class ComponentManager : public std::enable_shared_from_this<ComponentManager> {
public:
	// �R���X�g���N�^
	ComponentManager(const std::shared_ptr<GameObjectManager>& gameObjectManager);
	// �f�X�g���N�^
	~ComponentManager() = default;
	// �R���|�[�l���g�̐���
	template<class T, class... Args>
	std::shared_ptr<T> createAndPushComponent(const std::shared_ptr<GameObject>& ownerGameObject,const Args&... args) {
		std::shared_ptr<T> component = std::make_shared<T>(ownerGameObject, _gameObjectManager, shared_from_this(), args...);
		_components.push_back(component);
		ownerGameObject->pushHaveComponentList(component);
		return component;
	}
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
	// �R���|�[�l���g�̒x���X�V
	void lateUpdate();
	// ���S�t���O�̗������R���|�[�l���g������
	void removeDeadComponent();
	// �R���|�[�l���g�̍폜
	void searchAndDestroy(const std::string& targetName);
private:
	// �Q�[���I�u�W�F�N�g�}�l�[�W���[�̃|�C���^
	const std::shared_ptr<GameObjectManager> _gameObjectManager;
	// �R���|�[�l���g���X�g
	std::list<std::shared_ptr<Component>> _components;
};