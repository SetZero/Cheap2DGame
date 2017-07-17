#include "stdafx.h"
#include "LevelPosition.h"

LevelPosition::LevelPosition(int xy) : positionX(xy), positionY(xy)
{
}

LevelPosition::LevelPosition(int x, int y) : positionX(x), positionY(y)
{
}

void LevelPosition::swap(LevelPosition & pos)
{
	using std::swap;
	swap(positionY, pos.positionX);
	swap(positionY, pos.positionY);
}

LevelPosition::LevelPosition(LevelPosition && rhs)
{
	swap(rhs);
}

LevelPosition & LevelPosition::operator=(LevelPosition && rhs)
{
	swap(rhs);
	return *this;
}

LevelPosition::LevelPosition(const LevelPosition & other)
{
	operator +=(other);
}

LevelPosition::LevelPosition(const LevelMovement & other)
{
	positionX = other.getXVelocity();
	positionX = other.getYVelocity();
}

LevelPosition & LevelPosition::operator=(const LevelPosition & rhs)
{
	positionX += rhs.positionX;
	positionY += rhs.positionY;
	return *this;
}

LevelPosition & LevelPosition::operator+=(const LevelMovement & rhs)
{
	positionX += rhs.getXVelocity();
	positionY += rhs.getYVelocity();
	return *this;
}

LevelPosition & LevelPosition::operator+=(const LevelPosition & rhs)
{
	positionX += rhs.positionX;
	positionY += rhs.positionY;
	return *this;
}

int LevelPosition::getX() const
{
	return positionX;
}

int LevelPosition::getY() const
{
	return positionY;
}

LevelPosition operator+(const LevelMovement & lhs, const LevelMovement & rhs)
{
	return LevelPosition(lhs) += rhs;
}
