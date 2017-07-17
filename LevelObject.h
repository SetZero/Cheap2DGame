#pragma once
#include <memory>
#include "LevelPosition.h"
#include "GameObject.h"

class LevelObject {
private:
	std::shared_ptr<GameObject> object;
public:
	LevelObject(LevelPosition& pos);
};
