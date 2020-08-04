#pragma once
#include <vector>
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
	std::vector<char> _objectName{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int _objectCount{ 0 };
};