#pragma once

#include <utility>

class GameEnvVarivales {
private:
	bool isWalkable = false;
	bool isTransparent = false;
	bool isWater = false;
public:
	GameEnvVarivales();
	void swap(GameEnvVarivales& other);
	GameEnvVarivales(GameEnvVarivales&& other);
	GameEnvVarivales& operator=(GameEnvVarivales&& rhs);
	GameEnvVarivales(const GameEnvVarivales& other);
	GameEnvVarivales& operator=(const GameEnvVarivales& rhs);
};