#pragma once
#include <memory>
#include "GameObject.h"
#include <utility>

class Level {
private:
	std::vector<GameObject> objects;
public:
	Level();
	void swap(Level& level);
	Level(GameObject& obj);
	Level(Level&& obj);

	Level& operator+=(const GameObject& rhs);
	Level& operator+=(const Level& rhs);

	void drawLevel();
	std::vector<GameObject> getObjects() const;
};

Level operator+(const Level& lhs, const Level& rhs);