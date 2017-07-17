#include "stdafx.h"
#include "Level.h"

Level::Level()
{
}

void Level::swap(Level & other)
{
	//using std::swap;
	//swap(objects, other.objects);
}

Level::Level(GameObject & obj)
{
	//objects.push_back(obj);
}

Level::Level(Level && obj)
{
	//swap(obj);
}

Level & Level::operator+=(const GameObject & rhs)
{
	objects.push_back(rhs);
	return *this;
}

Level & Level::operator+=(const Level & rhs)
{
	return *this;
}

void Level::drawLevel()
{
}

std::vector<GameObject> Level::getObjects() const
{
	return objects;
}

Level operator+(const Level & lhs, const Level & rhs)
{
	return Level();
}
