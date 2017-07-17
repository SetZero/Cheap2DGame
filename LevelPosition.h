#pragma once
#include <utility>
#include "LevelMovement.h"

class LevelPosition {
private:
	int positionX = 0;
	int positionY = 0;
public:
	LevelPosition(int xy);
	LevelPosition(int x, int y);
	void swap(LevelPosition& pos);
	LevelPosition(LevelPosition&& rhs);
	LevelPosition& operator=(LevelPosition&& rhs);
	LevelPosition(const LevelPosition& other);
	LevelPosition(const LevelMovement& other);
	LevelPosition& operator=(const LevelPosition& rhs);

	LevelPosition& operator+=(const LevelMovement& rhs);
	LevelPosition& operator+=(const LevelPosition& rhs);
	int getX() const;
	int getY() const;
};

LevelPosition operator+(const LevelMovement& lhs, const LevelMovement& rhs);