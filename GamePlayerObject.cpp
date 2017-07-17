#include "stdafx.h"
#include "GamePlayerObject.h"

void GamePlayerObject::keypressUpdate()
{
	KeypressVariable kvar = getSubject().get()->getVal();
	SDL_Event event = kvar.getEvent();
	if (event.type == SDL_KEYDOWN) {
		switch (event.key.keysym.sym) {
		case SDLK_LEFT:
		case SDLK_a:
			std::cout << "LEFT" << std::endl;
			*mPosition.get() += LevelMovement{-3, 0};
			mSprite.get()->setKeyframe(mPosition.get()->getX()/3%3, 1);
			break;
		case SDLK_RIGHT:
		case SDLK_d:
			std::cout << "RIGHT" << std::endl;
			*mPosition.get() += LevelMovement{3, 0};
			mSprite.get()->setKeyframe(mPosition.get()->getX() /3 % 3, 2);
			break;
		case SDLK_UP:
		case SDLK_w:
			std::cout << "UP" << std::endl;
			*mPosition.get() += LevelMovement{0, -3};
			mSprite.get()->setKeyframe(mPosition.get()->getY()/3 % 3, 3);
			break;
		case SDLK_DOWN:
		case SDLK_s:
			std::cout << "DOWN" << std::endl;
			*mPosition.get() += LevelMovement{0, 3};
			mSprite.get()->setKeyframe(mPosition.get()->getY()/3 % 3, 0);
			break;
		}
	}
}

void GamePlayerObject::walkTo(LevelPosition & pos)
{
	mPosition = std::make_shared<LevelPosition>(pos);
}

GamePlayerObject::GamePlayerObject(GameSprite & sprite, LevelPosition & pos, std::shared_ptr<KeypressSubject>& mod, KeypressVariable& div) : GameLivingObject(sprite, pos), KeypressObserver(mod, div)
{
}
