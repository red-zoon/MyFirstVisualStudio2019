#pragma once
#include <list>

class GameObject;

class GameObjectManager {
public:
	// コンストラクタ
	GameObjectManager() = default;
	// デストラクタ
	~GameObjectManager();
	// ゲームオブジェクトの追加
	void add(GameObject* gameObject);
	// ゲームオブジェクトの更新
	void update();
	// ゲームオブジェクトの描画
	void draw();
private:
	// ゲームオブジェクトリスト
	std::list<GameObject*> _gameObjects;
};