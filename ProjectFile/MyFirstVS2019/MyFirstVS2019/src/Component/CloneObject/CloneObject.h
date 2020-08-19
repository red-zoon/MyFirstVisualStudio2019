#pragma once
#include "../Component.h"

class GameObject;
class GameObjectManager;

class CloneObject : public Component
{
public:
	// コンストラクタ
	CloneObject(const std::shared_ptr<GameObject>& ownerGameObject,
		const std::shared_ptr<GameObjectManager>& gameObjectManager,
		const std::shared_ptr<ComponentManager>& componentManager,
		const int cloneNum
	);
	// デストラクタ
	virtual ~CloneObject() = default;
	// 遅延更新
	virtual void lateUpdate() override;
	// 自身のクローンを作成
	virtual void createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) const override;
private:
	// 複製の回数をカウント
	int _cloneCount;
};