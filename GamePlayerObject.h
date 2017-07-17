#pragma once
#include <iostream>
#include "GameLivingObject.h"
#include "KeypressObserver.h"
#include "KeypressVariable.h"

class GamePlayerObject : public GameLivingObject, public KeypressObserver {
public:
	void keypressUpdate();
	void walkTo(LevelPosition& pos);
	GamePlayerObject(GameSprite& sprite, LevelPosition& pos, std::shared_ptr<KeypressSubject>& mod, KeypressVariable& div);
};