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
		const int& cloneNum
	);
	// デストラクタ
	virtual ~CloneObject() {};
	// 更新
	virtual void update() override;
	// 更新
	virtual void lateUpdate() override;
	// 自身のクローンを作成
	virtual void createMyClone(const std::shared_ptr<GameObject>& ownerGameObject) override;
private:
	// 複製の回数をカウント
	int _cloneCount;
	// 生成時か?
	bool _onFirstTime{ true };
};