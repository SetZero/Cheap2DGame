#pragma once
#include "GameSprite.h"
#include "LevelPosition.h"
#include <memory>
#include "SDL.h"

class GameObject {
protected:
	std::shared_ptr<LevelPosition> mPosition;
	std::shared_ptr<GameSprite> mSprite;
	void updatePosition();
public:
	GameObject(GameSprite& sprite, LevelPosition& pos);
	std::shared_ptr<GameSprite> drawObject(SDL_Renderer *renderer);
};