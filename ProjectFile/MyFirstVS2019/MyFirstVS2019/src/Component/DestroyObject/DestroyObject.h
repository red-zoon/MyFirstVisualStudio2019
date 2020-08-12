#pragma once
#include "../Component.h"
#include <string>

class GameObject;

class DestroyObject : public Component
{
public:
	// コンストラクタ
	DestroyObject(const std::shared_ptr<GameObject>& ownerGameObject,
		const std::shared_ptr<GameObjectManager>& gameObjectManager,
		const std::shared_ptr<ComponentManager>& componentManager,
		const std::string& targetName
	) : Component::Component(ownerGameObject, gameObjectManager, componentManager),
		_targetName(targetName) {};

	// デストラクタ
	virtual ~DestroyObject() {};
	// 更新
	virtual void lateUpdate() override;
private:
	// ターゲットの名前を格納
	std::string _targetName;
};