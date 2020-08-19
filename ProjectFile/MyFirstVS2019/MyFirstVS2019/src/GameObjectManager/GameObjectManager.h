#pragma once
#include <string>
#include <list>
#include <memory>

class GameObject;

class GameObjectManager : public std::enable_shared_from_this<GameObjectManager> {
public:
	// コンストラクタ
	GameObjectManager() = default;
	// デストラクタ
	~GameObjectManager() = default;
	// ゲームオブジェクトの追加
	void add(const std::shared_ptr<GameObject>& gameObject);
	// 前のフレームに追加されたコンポーネントをリストに反映
	void moveAddedComponents();
	// ゲームオブジェクトの更新
	void update();
	// ゲームオブジェクトの描画
	void draw();
	// ゲームオブジェクトの複製
	std::shared_ptr<GameObject> cloneGameObject(const std::shared_ptr<GameObject>& baseObject);
	// ゲームオブジェクトの削除
	void searchAndDestroy(const std::string& targetName);
private:
	// ゲームオブジェクトリスト
	std::list<std::shared_ptr<GameObject>> _gameObjects;
	// クッション用ゲームオブジェクトリスト
	std::list<std::shared_ptr<GameObject>> _subGameObjects;
};