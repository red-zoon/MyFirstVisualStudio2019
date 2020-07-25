#pragma once
#include <string>
#include <vector>

class GameManager {
public:
	// コンストラクタ
	GameManager() = default;
	// デストラクタ
	~GameManager();
	// ゲームループ
	void run();
private:
	// 名前の格納とカウント用変数
	std::vector<std::string> objectName{ "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
	int objectCount{ 0 };
	// 指令受け取り用変数
	std::string command;
};