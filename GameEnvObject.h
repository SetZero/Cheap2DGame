#pragma once
#include "GameObject.h"
#include "GameEnvVariables.h"

class GameEnvObject : public GameObject
{
private:
	GameEnvVarivales ObjEnvValues;
public:
	GameEnvObject(GameSprite& sprite, LevelPosition& pos, GameEnvVarivales& values);

};