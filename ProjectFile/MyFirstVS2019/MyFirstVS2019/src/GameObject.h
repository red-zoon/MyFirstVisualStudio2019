#pragma once

class GameObject {
public:
	virtual ~GameObject() {}	// 仮想デストラクタ
	// 表示
	virtual void print() = 0;
};