#pragma once
#include <list>
#include <memory>

class GameObject;
class Component;
class GameObjectManager;
class ComponentManager;

class ComponentManager : public std::enable_shared_from_this<ComponentManager> {
public:
	// �R���X�g���N�^
	ComponentManager(const std::shared_ptr<GameObjectManager>& gameObjectManager);
	// �f�X�g���N�^
	~ComponentManager() = default;
	// �R���|�[�l���g�̐���
	template<class T>
	std::shared_ptr<T> createComponent(const std::shared_ptr<GameObject>& ownerGameObject) {
		return std::make_shared<T>(ownerGameObject, _gameObjectManager, shared_from_this()); // shared_from_this()���g�p����ۂ͂ǂ����Őe�N���X��shared_ptr������Ă���K�v������B
	}
	// �R���|�[�l���g�̐���
	template<class T>
	std::shared_ptr<T> createAndPushComponent(const std::shared_ptr<GameObject>& ownerGameObject) {
		std::shared_ptr<T> component = createComponent<T>(ownerGameObject);
		_components.push_back(component);
		return component;
	}
	// �R���|�[�l���g�̍X�V
	void update();
	// �R���|�[�l���g�̕`��
	void draw();
private:
	const std::shared_ptr<GameObjectManager> _gameObjectManager;
	// �R���|�[�l���g���X�g
	std::list<std::shared_ptr<Component>> _components;
};