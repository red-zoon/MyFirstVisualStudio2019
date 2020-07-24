#pragma once
#include <list>
#include <memory>

class GameObject;

class GameObjectManager {
public:
	// コンストラクタ
	GameObjectManager() = default;
	// デストラクタ
	~GameObjectManager();
	// ゲームオブジェクトの追加
	void add(std::shared_ptr<GameObject> gameObject);
	// ゲームオブジェクトの更新
	void update();
	// ゲームオブジェクトの描画
	void draw();
private:
	// ゲームオブジェクトリスト
	std::list<std::shared_ptr<GameObject>> _gameObjects;
};