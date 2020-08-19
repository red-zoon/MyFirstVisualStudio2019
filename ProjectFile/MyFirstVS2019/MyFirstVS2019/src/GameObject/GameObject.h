#pragma once
#include <string>
#include <memory>
#include <list>

class Component;

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
	const std::string& getName() const;
	// 所持コンポーネントリストを返す
	const std::list<std::weak_ptr<Component>>& getHaveComponentList() const;
	// コンポーネントを所持リストに追加
	void pushHaveComponentList(const std::shared_ptr<Component>& component);
	// 所持しているコンポーネントを全て除去
	void removeHaveComponentAll();
private:
	// 名前
	std::string _name;
	// 所持しているコンポーネントの弱ポインタ
	std::list<std::weak_ptr<Component>> _haveComponents;
};