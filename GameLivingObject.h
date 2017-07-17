#pragma once

#include "GameObject.h"
#include "GameHealth.h"
#include "LevelMovement.h"

class GameLivingObject : public GameObject{
protected:
	GameHealth ObjHealth = 0.0;
	LevelMovement currentMovement{ 0, 0 };
public:
	virtual void walkTo(LevelPosition& pos) = 0;
	GameLivingObject(GameSprite& sprite, LevelPosition& pos);
};