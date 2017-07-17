#pragma once
#include "SDL.h"

class KeypressVariable {
private:
	SDL_Event mKeypress;
public:
	KeypressVariable();
	KeypressVariable(SDL_Event keypress);
	bool isMovementKey();
	SDL_Event getEvent();
};