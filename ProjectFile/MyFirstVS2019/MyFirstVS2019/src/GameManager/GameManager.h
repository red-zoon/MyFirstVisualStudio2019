#pragma once
#include <memory>

class GameObject;
class GameObjectManager;

class GameManager {
public:
	// コンストラクタ
	GameManager() = default;
	// ゲームループ
	void run();
private:
	// ゲームオブジェクトの作成、追加
	std::shared_ptr<GameObject> createAndAddGameObject(const std::shared_ptr<GameObjectManager>& ownerManager);
private:
	// 名前の格納とカウント用変数
	const char _startChar{ 'A' };
	const char _endChar{ 'Z' };
	int _objectCount{ 0 };
};