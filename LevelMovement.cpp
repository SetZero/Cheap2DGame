#include "stdafx.h"
#include "LevelMovement.h"

LevelMovement::LevelMovement(int x, int y) : xVelocity(x), yVelocity(y)
{

}

void LevelMovement::swap(LevelMovement & other)
{
	using std::swap;
	swap(xVelocity, other.xVelocity);
	swap(yVelocity, other.yVelocity);
}

LevelMovement::LevelMovement(LevelMovement && other)
{
	swap(other);
}

LevelMovement & LevelMovement::operator=(LevelMovement && rhs)
{
	swap(rhs);
	return *this;
}

LevelMovement::LevelMovement(const LevelMovement & other)
{
	operator +=(other);
}

LevelMovement & LevelMovement::operator+=(const LevelMovement & rhs)
{
	xVelocity += rhs.xVelocity;
	yVelocity += rhs.yVelocity;
	return *this;
}

int LevelMovement::getXVelocity() const
{
	return xVelocity;
}

int LevelMovement::getYVelocity() const
{
	return yVelocity;
}
