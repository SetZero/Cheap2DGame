#include "stdafx.h"
#include "GameEnvObject.h"

GameEnvObject::GameEnvObject(GameSprite & sprite, LevelPosition & pos, GameEnvVarivales & values) : GameObject(sprite, pos), ObjEnvValues(values)
{
}
