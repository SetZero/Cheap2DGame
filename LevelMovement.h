#pragma once
#include <utility>

class LevelMovement {
private:
	int xVelocity = 0;
	int yVelocity = 0;
public:
	LevelMovement(int x, int y);
	void swap(LevelMovement& other);
	LevelMovement(LevelMovement&& other);
	LevelMovement& operator=(LevelMovement&& rhs);
	LevelMovement(const LevelMovement& other);
	LevelMovement& operator+=(const LevelMovement& rhs);
	int getXVelocity() const;
	int getYVelocity() const;
};