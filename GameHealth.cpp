#include "stdafx.h"
#include "GameHealth.h"

GameHealth::GameHealth(double health) : mHealth(health)
{

}

GameHealth::~GameHealth()
{
}

void GameHealth::changeHP(double health)
{
	mHealth = health;
}

double GameHealth::currentHP() const
{
	return mHealth;
}
