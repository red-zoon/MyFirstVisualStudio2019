#pragma once
#include <string>

class GameObject {
public:
	// コンストラクタ
	explicit GameObject(const std::string& name);
	// デストラクタ
	~GameObject() = default;
	// 更新
	void update();
	// 描画
	void draw();
	// 名前を返す
	const std::string& getName();
private:
	// 名前
	std::string _name;
};