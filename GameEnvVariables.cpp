#include "stdafx.h"
#include "GameEnvVariables.h"

GameEnvVarivales::GameEnvVarivales()
{
}

void GameEnvVarivales::swap(GameEnvVarivales & other)
{
	using std::swap;
	swap(isWalkable, other.isWalkable);
	swap(isTransparent, other.isTransparent);
	swap(isWater, other.isWater);
}

GameEnvVarivales::GameEnvVarivales(GameEnvVarivales && other)
{
	swap(other);
}

GameEnvVarivales & GameEnvVarivales::operator=(GameEnvVarivales && rhs)
{
	swap(rhs);
	return *this;
}

GameEnvVarivales::GameEnvVarivales(const GameEnvVarivales & other)
{
	
}

GameEnvVarivales & GameEnvVarivales::operator=(const GameEnvVarivales & rhs)
{
	GameEnvVarivales copy(rhs);
	swap(copy);
	return *this;
}
